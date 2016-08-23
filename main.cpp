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
bool bOnce = true;

HRESULT __stdcall DrawIndexedPrimitiveHook(LPDIRECT3DDEVICE9 Device, D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount)
{

	LPDIRECT3DVERTEXBUFFER9 Stream_Data;
	UINT Offset, Stride;

	if (Device->GetStreamSource(0, &Stream_Data, &Offset, &Stride) == D3D_OK)
		Stream_Data->Release();

	if (bOnce)
	{
		GenerateTexture(Device, &Red, D3DCOLOR_ARGB(255, 220, 20, 60));
		GenerateTexture(Device, &Yellow, D3DCOLOR_ARGB(255, 255, 255, 0));
		GenerateTexture(Device, &Green, D3DCOLOR_ARGB(255, 154, 205, 50));
		GenerateTexture(Device, &Blue, D3DCOLOR_ARGB(255, 70, 130, 180));
		bOnce = false;
	}

	if (EnemyHands | FriendHands)
	{

		Device->SetTexture(0, NULL);
		Device->SetTexture(0, Red);//apply new shader

		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);
		//pDevice->SetTexture(0, Orange);
		
		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
		//pDevice->SetTexture(0, Blue);
		Device->SetTexture(0, Blue);//apply new shader
	}

	if (chams1)
	{
		Device->SetTexture(0, NULL);
		Device->SetTexture(0, Red);//apply new shader

		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);
		//pDevice->SetTexture(0, Orange);

		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
		//pDevice->SetTexture(0, Blue);
		Device->SetTexture(0, Blue);//apply new shader
	}

	if (chams2)
	{
		Device->SetTexture(0, NULL);
		Device->SetTexture(0, Green);//apply new shader

		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);
		//pDevice->SetTexture(0, Orange);

		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
		//pDevice->SetTexture(0, Blue);
		Device->SetTexture(0, Yellow);//apply new shader
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

	DWORD* table;
	DWORD TempAdd = FindPattern(D3d9Base, 0x128000, (BYTE*) "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");
	while (!TempAdd)
	{
		TempAdd = FindPattern(D3d9Base, 0x128000, (BYTE*) "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");
		Sleep(100);
	}
	D3d9VTable = (DWORD*) *(DWORD*)(TempAdd + 2);

	OrigDrawIndexedPrimitive = (DrawIndexedPrimitive_t)DetourFunction((PBYTE)D3d9VTable[82], (PBYTE)DrawIndexedPrimitiveHook, 5);
	OrigReset = (Reset_t)DetourFunction((BYTE*)D3d9VTable[16], (BYTE*)ResetHook, 5);
	
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