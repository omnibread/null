#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>


#undef DrawText

#include </Users/Bobi/Documents/Visual Studio 2013/Projects/MO-ressurected/MO-ressurected/SdkHeaders.h>
#include</Users/Bobi/Documents/Visual Studio 2013/Projects/MO-ressurected/MO-ressurected/VMTHooks.h>


typedef void(__stdcall *tProcessEvent) (UFunction*, void*, void*);
tProcessEvent pProcessEvent;

bool DEBUG_MODE = true;

ANowPawn* pLocalPawn = NULL;
ULocalPlayer *LocalPlayer = NULL;
UGameEngine* pGameEngine = NULL;
UCanvas* pCanvas = NULL;
UObject* pObject = NULL;
UFunction *pUFunc = NULL;
void *pParms = NULL;
void *pResult = NULL;
char FunctionName[256];

ANowPlayerController* pPlayerController = NULL;

FVector CameraLocation;
FRotator CameraRotation;

#define CONST_INDEX_NONE                                         -1
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt  


static float defaultSpeed = 0;

#define UCONST_Pi 3.14159265
#define URotationToRadians( URotation )         ( ( URotation ) * ( UCONST_Pi / 32768.0f ) )

#define GObjects_Pattern                "\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask                   "x????x??x??xxxxx"
#define GObjects_Offset                 0x1

#define GNames_Pattern                  "\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74"
#define GNames_Mask                     "xx????xxxxx"
#define GNames_Offset                   0x2


using namespace std;

DWORD	GObjObjects_offset = 0;
DWORD	Names_offset = 0;
DWORD	Offset_Name = 0x2C;

void DrawBoxH(UCanvas* pCanvas, float X, float Y, float Width, float Height, FColor DesiredColor)
{
	float OldCurX = pCanvas->CurX;
	float OldCurY = pCanvas->CurY;

	FColor OldColor = pCanvas->DrawColor;

	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = DesiredColor;

	pCanvas->DrawBox(Width, Height);

	pCanvas->CurX = OldCurX;
	pCanvas->CurY = OldCurY;

	pCanvas->DrawColor = OldColor;
}


static void DrawString(UCanvas* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String)
{
	float OldCurX = pCanvas->CurX;
	float OldCurY = pCanvas->CurY;
	FColor OldColor = pCanvas->DrawColor;

	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = Color;

	if (Center)
	{
		float XL, YL;
		pCanvas->TextSize(String, 1,1, &XL, &YL);
		pCanvas->CurX -= XL / 2;
	}

	pCanvas->DrawText(String, false, 1, 1, NULL);

	pCanvas->CurX = OldCurX;
	pCanvas->CurY = OldCurY;
	pCanvas->DrawColor = OldColor;
}
void DrawCrosshair(UCanvas* pCanvas, FColor colored)
{
	float size = 10;/*myMenu.ReturnValue(3);*/
	pCanvas->Draw2DLine(pCanvas->ClipX / 2 - size, pCanvas->ClipY / 2, pCanvas->ClipX / 2 + size, pCanvas->ClipY / 2, colored);
	pCanvas->Draw2DLine(pCanvas->ClipX / 2, pCanvas->ClipY / 2 - size, pCanvas->ClipX / 2, pCanvas->ClipY / 2 + size, colored);
}
FColor MakeColor(int R, int G, int B, int A)
{
	FColor ReturnedColor;
	ReturnedColor.R = R;
	ReturnedColor.G = G;
	ReturnedColor.B = B;
	ReturnedColor.A = A;
	return ReturnedColor;
}

FColor red = MakeColor(255, 0, 0, 255);
FColor green = MakeColor(0, 255, 0, 255);
FColor blue = MakeColor(0, 0, 255, 255);
FColor white = MakeColor(255, 255, 255, 255);
FColor yellow = MakeColor(255, 255, 0, 255);
FColor orange = MakeColor(255, 153, 0, 255);
FColor black = MakeColor(0, 0, 0, 255);


void DrawBox(UCanvas* pCanvas, FVector vpjMax, FVector vpjMin, FVector vpjCenter, float Width, FColor colored)
{
	pCanvas->CurX = vpjCenter.X - Width / 2;
	pCanvas->CurY = vpjMax.Y;
	pCanvas->DrawColor = colored;
	pCanvas->DrawBox(Width, Width * 2);
}


void GetAxes(FRotator Angles, FVector& vRight, FVector& vUp, FVector& vForward)
{
	float        angle;

	angle = URotationToRadians(Angles.Yaw);

	float SinYaw = sin(angle);
	float CosYaw = cos(angle);

	angle = URotationToRadians(Angles.Pitch);

	float SinPitch = sin(angle);
	float CosPitch = cos(angle);

	angle = URotationToRadians(Angles.Roll);

	float SinRoll = sin(angle);
	float CosRoll = cos(angle);

	vRight.X = CosPitch * CosYaw;
	vRight.Y = CosPitch * SinYaw;
	vRight.Z = SinPitch;

	vUp.X = SinRoll * SinPitch * CosYaw + CosRoll * -SinYaw;
	vUp.Y = SinRoll * SinPitch * SinYaw + CosRoll * CosYaw;
	vUp.Z = -SinRoll * CosPitch;

	vForward.X = -(CosRoll * SinPitch * CosYaw + SinRoll * SinYaw);
	vForward.Y = -(CosRoll * SinPitch * SinYaw + SinRoll * -CosYaw);
	vForward.Z = CosRoll * CosPitch;
}
float Dot(const FVector& vec_A, const FVector& vec_B)
{
	return ((vec_A.X * vec_B.X) + (vec_A.Y * vec_B.Y) + (vec_A.Z * vec_B.Z));
}


FVector WorldToScreen(UCanvas* Canvas, FVector WorldLocation)
{
	FVector X, Y, Z, D, nulled, Out;
	nulled.X = 0; nulled.Y = 0; nulled.Z = 0;

	float fovAngle = pPlayerController->PlayerCamera->ViewTarget.POV.FOV;

	GetAxes(CameraRotation, X, Y, Z);

	D.X = WorldLocation.X - CameraLocation.X;
	D.Y = WorldLocation.Y - CameraLocation.Y;
	D.Z = WorldLocation.Z - CameraLocation.Z;
	if (Dot(D, X) <= cos(90 * 3.14159265 / 180))
	{
		return nulled;
	}

	Out.X = (Canvas->ClipX / 2) + (Dot(D, Y))*((Canvas->ClipX / 2) / tan(fovAngle*UCONST_Pi / 360)) / Dot(D, X);
	Out.Y = (Canvas->ClipY / 2) + (-Dot(D, Z))*((Canvas->ClipX / 2) / tan(fovAngle*UCONST_Pi / 360)) / Dot(D, X);
	Out.Z = 0;
	return Out;
}

bool bCompare(const BYTE* pData, const BYTE* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
		if (*szMask == 'x' && *pData != *bMask)
			return 0;
	return (*szMask) == NULL;
}

DWORD FindPattern(DWORD dwAddress, DWORD dwLen, BYTE *bMask, char * szMask)
{
	for (DWORD i = 0; i<dwLen; i++)
		if (bCompare((BYTE*)(dwAddress + i), bMask, szMask))
			return (DWORD)(dwAddress + i);
	return 0;
}


void PostRender(UCanvas *pCanvas)
{
	if (pCanvas == NULL || pGameEngine == NULL)
	{
		return;
	}

	DrawBoxH( pCanvas, 2, 2, 6, 6, red);
	DrawBoxH(pCanvas, 5, 5, 6, 6, green);
	DrawBoxH(pCanvas, 8, 8, 6, 6, blue);

	LocalPlayer = pGameEngine->GamePlayers.Data[0];
	pLocalPawn = reinterpret_cast<ANowPawn*>(LocalPlayer->Actor->Pawn);;
	pPlayerController = reinterpret_cast<ANowPlayerController*>(LocalPlayer->Actor);

	DrawString(pCanvas, pCanvas->ClipX / 2, 60, white, true,  L"i'm in ur gaems, haxin'");
	
	DrawString(pCanvas, 10, 75 + 15 * 0, white, false,  L"pLocalPlayer %p");
	if (LocalPlayer == NULL)
		return;
	// Engine.LocalPlayer
}

void __declspec(naked) hkProcessEvent()
{
	__asm mov pObject, ecx;
	__asm
	{
		push eax
			mov eax, dword ptr[esp + 0x8]
			mov pUFunc, eax
			mov eax, dword ptr[esp + 0xC]
			mov pParms, eax
			mov eax, dword ptr[esp + 0x10]
			mov pResult, eax
			pop eax
	}
	_asm pushad

	if (pUFunc)
	{
		strcpy_s(FunctionName, pUFunc->GetFullName());
		if (!strcmp(FunctionName, "Function Engine.GameViewportClient.PostRender"))
		{
			PostRender(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas);
		}
	}

	__asm popad
	__asm
	{
		push pResult
			push pParms
			push pUFunc
			call pProcessEvent

			retn 0xC
	}
}

void LetsDoThis()
{
	ofstream out("letsdothis.txt");

	UGameViewportClient* pGameViewport = NULL;
	while (pGameViewport == NULL)
	{
		out << "viewport still not found" << endl;
		out << "doing search for engine = ";
		pGameEngine = UObject::FindObject<UGameEngine>("GameEngine Transient.GameEngine");
		out << pGameEngine << endl;
		if (pGameEngine != NULL)
		{
			out << "ok so we got engine, viewport is ";
			pGameViewport = pGameEngine->GameViewport;
			out << pGameViewport << endl;
			out << "HOOOOOOOOOOOOOKING" << endl;

			CVMTHookManager* InterfaceHook = NULL;
			InterfaceHook = new CVMTHookManager((PDWORD*)pGameViewport);
			pProcessEvent = (tProcessEvent)InterfaceHook->dwHookMethod((DWORD)&hkProcessEvent, 66);

			//CVMTHookManager *vTable = new CVMTHookManager((PDWORD*)0x004010BC);
			//vTable->dwHookMethod((DWORD)newLoop, 0);

			//toolkit::VMTHook* hook = new toolkit::VMTHook(pGameViewport);
			//pProcessEvent = hook->GetMethod<tProcessEvent>(66);
			//hook->HookMethod(&hkProcessEvent, 66);
		}
	}
	out.close();
}

void onAttach()
{
	//Sleep ( 60000 );

	ofstream out("offsets.txt");

	DWORD GameBase = (DWORD)GetModuleHandleW(L"MortalOnline.exe");

	GObjects = *(DWORD*)(FindPattern(GameBase, 0x007A0000, (BYTE*)"\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00", "x????x??x??xxxxx") + 1);
	GNames = *(DWORD*)(FindPattern(GameBase, 0x007A0000, (BYTE*)"\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74", "xx????xxxxx") + 2);
	out << GObjects << " " << GNames << endl;
	out.close();

	LetsDoThis();
}

// entry point
int __stdcall DllMain(HMODULE hModule, unsigned long dwReason, void* lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{

		CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(onAttach), 0, 0, 0);

	}
	return TRUE;
}
