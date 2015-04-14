#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include<vector>
#include</Users/Venom1724/Documents/Visual Studio 2013/Projects/MOv2/MOv2/VMTHooks.h>
#include </Users/Venom1724/Documents/Visual Studio 2013/Projects/MOv2/MOv2/sdk.h>


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
#define GNames_Mask                             "xx????xxxxx"
#define GNames_Offset                   0x2


using namespace std;

DWORD	GObjObjects_offset = 0;
DWORD	Names_offset = 0;
DWORD	Offset_Name = 0x2C;

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


void DebugProcessEvent(){
	ofstream out("asd33.txt");
	out << " attempting dangerous get full name lel" << endl;

	
	//out << " daymn words " << FunctionName << endl;
	out.close();
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
		//strcpy(FunctionName, pUFunc->GetFullName());
		DebugProcessEvent();
		/*
		if (!strcmp(FunctionName, "Function Engine.GameViewportClient.PostRender"))
		{
			PostRender(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas);
		}*/
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

void console_shits(){
	FreeConsole();

	if (AllocConsole()) {
		freopen("CONIN$", "rb", stdin);
		freopen("CONOUT$", "wb", stdout);
		freopen("CONOUT$", "wb", stderr);

		// If you are using cout/cin/cerr uncomment the following

		printf("working\n");
	}
	bool hotkeys = false;
	if (DEBUG_MODE){
			printf("shits: \n");
			printf("1-LocalPlayer\n");
			printf("2-LocalPawn&controller\n");
			printf("3-SetSpeedModifier\n");
			printf("4-ResetSpeed\n");
			printf("5-swithHotkeys\n");
	}
	while (1){
		int choice=0;
		if(hotkeys==0) scanf("%d",&choice);
		if (choice == -1){
			float defaultSpeed = *(float*)pLocalPawn->FindProperty<float>("GroundSpeed", APawn::StaticClass());
			printf("%g\n", defaultSpeed);
		}
		if (choice==1)
		{
			LocalPlayer = UObject::FindObject<ULocalPlayer>("LocalPlayer Transient.GameEngine.LocalPlayer");
			if (DEBUG_MODE) printf("%s\n", LocalPlayer->GetFullName());
		}

		if (choice==3){
			printf("enter speed:\n");
			float spd;
			scanf("%g", &spd);
			pLocalPawn->CrouchedPct = spd;
			printf( "new speed: %g\n" , pLocalPawn->CrouchedPct );
			printf("actual speed: %g\n", pLocalPawn->CrouchedPct*pLocalPawn->WaterSpeed);
		}
		if (choice==4) pLocalPawn->CrouchedPct = 1.1f;

		if (choice==2){
			pLocalPawn = reinterpret_cast<ANowPawn*>(LocalPlayer->Actor->Pawn);
			if (DEBUG_MODE) printf("%d %s\n", pLocalPawn, pLocalPawn->GetFullName());
			pPlayerController = reinterpret_cast<ANowPlayerController*>(LocalPlayer->Actor);
			if (DEBUG_MODE) printf(" pC  %d\n", pPlayerController);
		}
		if (choice == 5) hotkeys = 1;
		if (hotkeys){
			if (GetAsyncKeyState(VK_NUMPAD7) & 1){
				pLocalPawn->CrouchedPct += 0.1f;
				printf("new speed: %g\n", pLocalPawn->CrouchedPct);
				printf("actual speed: %g\n", pLocalPawn->CrouchedPct*pLocalPawn->WaterSpeed);
			}
			if (GetAsyncKeyState(VK_NUMPAD8) & 1){
				pLocalPawn->CrouchedPct -= 0.1f;
				printf("new speed: %g\n", pLocalPawn->CrouchedPct);
				printf("actual speed: %g\n", pLocalPawn->CrouchedPct*pLocalPawn->WaterSpeed);
			}
			if (GetAsyncKeyState(VK_NUMPAD9) & 1) {
				pLocalPawn->CrouchedPct = 1.1f;
				printf("new speed: %g\n", pLocalPawn->CrouchedPct);
				printf("actual speed: %g\n", pLocalPawn->CrouchedPct*pLocalPawn->WaterSpeed);
			}
			if (GetAsyncKeyState(VK_NUMPAD5) & 1) hotkeys = 0;
		}
	}
}

void shits()
{
	ofstream out("asdShits.txt");
	if(DEBUG_MODE) out << " hello from shits " << endl;
	while (1){
		if (GetAsyncKeyState(VK_F4) & 1)
		{
			if (DEBUG_MODE) out << "f4 pressed " << endl;

			LocalPlayer = pGameEngine->GamePlayers.Data[0];
			if (DEBUG_MODE) out << LocalPlayer << " olld " << endl;
			LocalPlayer = UObject::FindObject<ULocalPlayer>("LocalPlayer Transient.GameEngine.LocalPlayer");
			if (DEBUG_MODE) out << LocalPlayer << " newwwww " << LocalPlayer->GetFullName() << endl;



		}
		if (GetAsyncKeyState(VK_NUMPAD7) & 1){
			pLocalPawn->CrouchedPct += 0.1f;
			out << pLocalPawn->CrouchedPct << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD8) & 1){
			pLocalPawn->CrouchedPct -= 0.1f;
			out << pLocalPawn->CrouchedPct << endl;
		}
		if (GetAsyncKeyState(VK_F5) & 1) {
			pLocalPawn->CrouchedPct = 1.0f;
			out << pLocalPawn->CrouchedPct << endl;
		}
		if (GetAsyncKeyState(VK_NUMPAD9) & 1){
			pLocalPawn->CrouchedPct = 1.1f;
			out << pLocalPawn->CrouchedPct << endl;
		}
		if (GetAsyncKeyState(VK_F9) & 1){
			break;
			console_shits();
		}

		if (GetAsyncKeyState(VK_F7) & 1){
			if (DEBUG_MODE) out << "f7 pressed " << endl;

			if (DEBUG_MODE) out << LocalPlayer << " new " << LocalPlayer->GetFullName() << endl;

			pLocalPawn = reinterpret_cast<ANowPawn*>(LocalPlayer->Actor->Pawn);

			if (DEBUG_MODE) out << pLocalPawn << pLocalPawn->GetFullName() << endl;

			pPlayerController = reinterpret_cast<ANowPlayerController*>(LocalPlayer->Actor);

			//pPlayerController->Pawn;

			if (DEBUG_MODE) out << " pC " << pPlayerController << endl;


		}
		//Sleep(100);
	}
	out.close();
	
}

unsigned long WorkingThread()
{
	

		UGameViewportClient* pGameViewport = NULL;
		pGameEngine = UObject::FindObject<UGameEngine>("GameEngine Transient.GameEngine");
		if (DEBUG_MODE) cout << " engine " << pGameEngine << endl;
		while (pGameViewport == NULL)
		{
			if (DEBUG_MODE) cout << "viewport: " << endl;
			pGameViewport = UObject::FindObject<UGameViewportClient>("GameViewportClient Transient.GameEngine.GameViewportClient");
			if (DEBUG_MODE) cout << pGameViewport << " " << pGameViewport->GetFullName() << endl;
		}
		
		
		console_shits();
		if (pGameEngine == NULL)
		{
			if (DEBUG_MODE) cout << " hooking ? " << endl;
			toolkit::VMTHook* hook = new toolkit::VMTHook(pGameEngine);
			pProcessEvent = hook->GetMethod<tProcessEvent>(66);
			if (DEBUG_MODE) cout << "survivedd hooking? 1" << endl;
			hook->HookMethod(&hkProcessEvent, 66);
			if (DEBUG_MODE) cout << "survivedd hooking? 2" << endl;

		}
	return 0;
}

void onAttach()
{
	//Sleep ( 60000 );

	ofstream out("offsets.txt");

	DWORD GameBase = (DWORD)GetModuleHandle(L"MortalOnline.exe");
	
	GObjects = *(DWORD*)(FindPattern(GameBase, 0x007A0000, (BYTE*)"\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00", "x????x??x??xxxxx") + 1);
	GNames = *(DWORD*)(FindPattern(GameBase, 0x007A0000, (BYTE*)"\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74", "xx????xxxxx") + 2);
	//GNames = *(DWORD*)(FindPattern(GameBase, 0x007A0000, (BYTE*)"\x89\x73\x04\x89\x73\x08\x89\x73\x0C\xFF\xD7", "xxxxxxxxxxx") + 2);
	//out << GObjects << endl;
	//GObjects = *(DWORD*)(FindPattern(GameBase, 0x007A0000, (BYTE*)"\x8B\x0D\x00\x00\x00\x00\x8B\x0C\x81\xE8\x00\x00\x00\x00\x50\xE8", "xx????xxxx????xx") + 1);

	out << GObjects<< " " << GNames << endl;
	//out << "gobjects " << GNames - 1 << endl;
	out.close();

	WorkingThread();
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
