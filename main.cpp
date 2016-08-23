#include <Windows.h>
#include <iostream>
#include <d3d9.h>
#include <d3dx9.h>

#include "others.h"

#pragma comment(lib, "detours.lib")
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

using namespace std;


DrawIndexedPrimitive_t OrigDrawIndexedPrimitive;
Reset_t OrigReset;
EndScene_t OrigEndscene;


LPDIRECT3DTEXTURE9 Red;
LPDIRECT3DTEXTURE9 Green;
LPDIRECT3DTEXTURE9 Yellow;
LPDIRECT3DTEXTURE9 Blue;
LPDIRECT3DTEXTURE9 Orange;

/* FONT STUFF */
LPDIRECT3DDEVICE9 g_pDevice = 0;
LPD3DXFONT pFont;
/* ==END== */

bool bOnce = true;


void ReFont(LPDIRECT3DDEVICE9 pDevice) //For replacement fonts
{
	if (g_pDevice != pDevice)
	{
		g_pDevice = pDevice;
		try
		{
			if (pFont != 0)
				pFont->Release();
		}
		catch (...) {}
		pFont = 0;
		D3DXCreateFontA(pDevice, 14, 0, FW_BOLD, 0, 0, DEFAULT_CHARSET, OUT_TT_ONLY_PRECIS, PROOF_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Arial", &pFont);
	}
}

void GetKeys() {
	if (GetAsyncKeyState(VK_F1) & 1) {
		codekeem::secret1 = !codekeem::secret1;
	}
	if (GetAsyncKeyState(VK_F2) & 1) {
		codekeem::secret2 = !codekeem::secret2;
	}
	if (GetAsyncKeyState(VK_F3) & 1) {
		codekeem::secret3 = !codekeem::secret3;
	}
}

void PrintFeatures(LPDIRECT3DDEVICE9 Device) {
	GetKeys();
	if (codekeem::secret1 == true)
		PrintText("Chams ON", 10, 30, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);
	else
		PrintText("Chams OFF", 10, 30, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);

	if (codekeem::secret2 == true)
		PrintText("Arms ON", 10, 40, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);
	else
		PrintText("Arms OFF", 10, 40, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);

	if (codekeem::secret3 == true)
		PrintText("Asus ON", 10, 50, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);
	else
		PrintText("Asus OFF", 10, 50, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);
	
}

HRESULT __stdcall EndScene(LPDIRECT3DDEVICE9 pDevice) {
	ReFont(pDevice);
	PrintText("Codekeem", 10, 10, D3DCOLOR_RGBA(255, 0, 0, 255), pFont);
	PrintFeatures(pDevice);
	return OrigEndscene(pDevice);
}


HRESULT __stdcall DrawIndexedPrimitiveHook(LPDIRECT3DDEVICE9 Device, D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount) {

	LPDIRECT3DVERTEXBUFFER9 Stream_Data;
	UINT Offset, Stride;

	if (Device->GetStreamSource(0, &Stream_Data, &Offset, &Stride) == D3D_OK)
		Stream_Data->Release();

	if (bOnce) {
		GenerateTexture(Device, &Red, D3DCOLOR_RGBA(155, 0, 0, 255));
		GenerateTexture(Device, &Yellow, D3DCOLOR_RGBA(255, 255, 255, 255));
		GenerateTexture(Device, &Green, D3DCOLOR_RGBA(0, 255, 0, 255));
		GenerateTexture(Device, &Blue, D3DCOLOR_RGBA(0, 0, 255, 255));
		GenerateTexture(Device, &Orange, D3DCOLOR_RGBA(255, 155, 0, 255));
		bOnce = false;
	}

	if(codekeem::secret2) {
	if (EnemyHands | FriendHands) {

		Device->SetTexture(0, NULL);
		Device->SetTexture(0, Green);//apply new shader

		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_FALSE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_NEVER);
		//pDevice->SetTexture(0, Orange);
		
		OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		Device->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
		Device->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
		//pDevice->SetTexture(0, Blue);
		Device->SetTexture(0, Orange);//apply new shader
	}
	}
	if (codekeem::secret1) {
		if (chams1) {
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

		if (chams2) {
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
	}

	if (codekeem::secret3) {
		Device->SetRenderState(D3DRS_SRCBLEND, 3);
		Device->SetRenderState(D3DRS_DESTBLEND, 4);
		Device->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
	}

	if (NumVertices == 20 && primCount == 10) { /* Le NoSky */
		return D3D_OK;
	}

	return OrigDrawIndexedPrimitive(Device, Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
}

HRESULT __stdcall ResetHook(IDirect3DDevice9* Device, D3DPRESENT_PARAMETERS* Params) {
	if (!bOnce) {
		Red->Release();
		Green->Release();
		Yellow->Release();
		Blue->Release();
		Orange->Release();
	}
	bOnce = true;
	return OrigReset(Device, Params);
}

DWORD WINAPI Start(LPVOID keemer) {
	DWORD   hD3D, adr, *vtbl;
	hD3D = 0;
	do {
		hD3D = (DWORD)GetModuleHandleA("d3d9.dll");
		Sleep(10);
	} while (!hD3D);
	adr = FindPattern(hD3D, 0x128000, (PBYTE)"\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx");
	if (adr) {
		memcpy(&vtbl, (void *)(adr + 2), 4);
		OrigReset = (Reset_t)DetourFunction((PBYTE)vtbl[SCENE_Reset], (PBYTE)ResetHook, 5);
		OrigEndscene = (EndScene_t)DetourFunction((PBYTE)vtbl[SCENE_EndScene], (PBYTE)EndScene, 7);
		OrigDrawIndexedPrimitive = (DrawIndexedPrimitive_t)DetourFunction((PBYTE)vtbl[SCENE_DrawIndexedPrimitive], (PBYTE)DrawIndexedPrimitiveHook, 5);
	}
	AllocConsole();
	freopen("CONIN$", "r", stdin); 
	freopen("CONOUT$", "w", stdout);
	std::cout << "Codekeem for Call Of Duty: Modern Warfare v1.0" << std::endl;
	return 0;
}

BOOL APIENTRY DllMain(HINSTANCE hinst, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		Beep(700, 700);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Start, 0, 0, 0);
	}
	return true;
}