#include <Windows.h>
#include <iostream>
#include <d3d9.h>
#include <d3dx9.h>

#include "others.h"

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
using namespace std;

typedef HRESULT(__stdcall* DrawIndexedPrimitive_t)(IDirect3DDevice9*, D3DPRIMITIVETYPE, INT, UINT, UINT, UINT, UINT);
typedef HRESULT(__stdcall* Reset_t)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);

DrawIndexedPrimitive_t OrigDrawIndexedPrimitive;
Reset_t OrigReset;


LPDIRECT3DTEXTURE9 Red;
LPDIRECT3DTEXTURE9 Green;
LPDIRECT3DTEXTURE9 Yellow;
LPDIRECT3DTEXTURE9 Blue;
LPDIRECT3DTEXTURE9 Orange;
bool bOnce = true;

HRESULT __stdcall DrawIndexedPrimitiveHook(LPDIRECT3DDEVICE9 Device, D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount)
{

	LPDIRECT3DVERTEXBUFFER9 Stream_Data;
	UINT Offset, Stride;

	if (Device->GetStreamSource(0, &Stream_Data, &Offset, &Stride) == D3D_OK)
		Stream_Data->Release();

	if (bOnce)
	{
		//GenerateTexture(Device, &Black, BLACK);
		GenerateTexture(Device, &Blue, BLUE);
		GenerateTexture(Device, &Orange, ORANGE);
		//GenerateTexture(Device, &Purple, PURPLE);
		//GenerateTexture(Device, &White, WHITE);
		GenerateTexture(Device, &Yellow, YELLOW);
		//GenerateTexture(Device, &Teal, TEAL);
		GenerateTexture(Device, &Red, RED);
		GenerateTexture(Device, &Green, GREEN);

		bOnce = false;
	}

	if (EnemyHands | FriendHands)
	{
		Device->SetRenderState(D3DRS_FOGENABLE, FALSE);
		Device->SetRenderState(D3DRS_ZENABLE, FALSE);
		Device->SetTexture(0, Green);


		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);

		Device->SetRenderState(D3DRS_ZENABLE, TRUE);
		Device->SetRenderState(D3DRS_FOGENABLE, FALSE);
		Device->SetTexture(0, Red);
	}

	if (chams1)
	{
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);
		Device->SetTexture(0, Green);
		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
		Device->SetTexture(0, Blue);
	}

	if (chams2)
	{
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);
		Device->SetTexture(0, Green);
		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
		Device->SetTexture(0, Blue);
	}

	if (NumVertices == 20 && primCount == 10) { /* Le NoSky */
		return D3D_OK;
	}

	return OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
}

HRESULT __stdcall ResetHook(IDirect3DDevice9* Device, D3DPRESENT_PARAMETERS* Params)
{
	if (!bOnce)
	{
		Red->Release();
		Green->Release();
		Yellow->Release();
		Blue->Release();
		Orange->Release();
	}
	bOnce = true;
	return OrigReset(Device, Params);
}


DWORD D3d9Base;
DWORD* D3d9VTable;

wchar_t DllPath[512];
wchar_t PathBuffer[512];
DWORD WINAPI Start(LPVOID keemer) {
	
	D3d9Base = (DWORD)GetModuleHandle("d3d9.dll");
	while (!D3d9Base)
	{
		D3d9Base = (DWORD)GetModuleHandle("d3d9.dll");
		Sleep(100);
	}


	DWORD TempAdd = FindPattern(D3d9Base, 0x128000, (BYTE*) "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");
	while (!TempAdd)
	{
		TempAdd = FindPattern(D3d9Base, 0x128000, (BYTE*) "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");
		Sleep(100);
	}
	D3d9VTable = (DWORD*) *(DWORD*)(TempAdd + 2);

	OrigDrawIndexedPrimitive = (DrawIndexedPrimitive_t)DetourFunc((BYTE*)D3d9VTable[82], (BYTE*)DrawIndexedPrimitiveHook, 5);
	OrigReset = (Reset_t)DetourFunc((BYTE*)D3d9VTable[16], (BYTE*)ResetHook, 5);
	
	AllocConsole();
	freopen("CONIN$", "r", stdin); 
	freopen("CONOUT$", "w", stdout);
	std::cout << "Chicken mc nuggets." << std::endl;
	return 0;
}

BOOL APIENTRY DllMain(HINSTANCE hinst, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		Beep(700, 700);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Start, 0, 0, 0);
	}
	return true;
}