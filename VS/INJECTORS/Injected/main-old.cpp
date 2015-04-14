#include <Windows.h>
#include <stdio.h>
#include <fstream>
#include <TlHelp32.h>
#include <string.h>
#include <tchar.h>

extern "C" int ASMTestFunction();

unsigned long long GObjects;
unsigned long long GNames;
unsigned long long base;

using namespace std;

bool bCompare(const BYTE* pData, const BYTE* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
		if (*szMask == 'x' && *pData != *bMask)
			return 0;
	return (*szMask) == NULL;
}

DWORD64 FindPattern(DWORD64 dwAddress, DWORD64 dwLen, BYTE *bMask, char * szMask)
{
	//ofstream out("findpattern.txt");
	//out << "from 0 to " << dwLen << endl;
	for (DWORD64 i = 0; i < dwLen; i++){
		//out <<i<< endl;
		if (bCompare((BYTE*)(dwAddress + i), bMask, szMask)){
			//out << "found woo" << endl;
			return (DWORD64)(dwAddress + i);
		}
	}
	return 0;
}

DWORD64 dwGetModuleBaseAddress(DWORD dwProcessID, TCHAR *lpszModuleName)
{
	ofstream out("baseaddr.txt");
	out << " hello " << endl;
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, dwProcessID);
	DWORD64 dwModuleBaseAddress = 0;

	out << " did snapshot" << endl;

	if (hSnapshot != INVALID_HANDLE_VALUE)
	{
		MODULEENTRY32 ModuleEntry32 = { 0 };
		ModuleEntry32.dwSize = sizeof(MODULEENTRY32);
		out << " some fuk stuff " << endl;
		if (Module32First(hSnapshot, &ModuleEntry32))
		{
			out << "in if " << endl;
			do
			{
				out << " in do" << endl;
				if (_tcscmp(ModuleEntry32.szModule, lpszModuleName) == 0)
				{
					out << " sad" << endl;
					dwModuleBaseAddress = (DWORD64)ModuleEntry32.modBaseAddr;
					base = dwModuleBaseAddress;
					out << " sad = " << base << endl;
					out << "after sad" << endl;
					break;
				}
			} while (Module32Next(hSnapshot, &ModuleEntry32));
		}
		out << "closing handle o.o" << endl;
		CloseHandle(hSnapshot);
	}
	out << "returning" << endl;
	return dwModuleBaseAddress;
}

void onAttach()
{
	//Sleep ( 60000 );

	ofstream out("offsets.txt");
	out << "hello, attempt base get" <<endl;
	DWORD pID = GetCurrentProcessId();
	out << " pid = " << pID << endl;
	dwGetModuleBaseAddress(pID, "MortalOnline.exe");
	MessageBox(0,"fuck me", "", 0);
	out << "fuck me" << endl;
	out << "base = " << base;

	out << " fucking find pattern" << endl;
	
		
	GObjects = (FindPattern(base, 0x007A0000, (BYTE*)"\x48\x8B\x15\x00\x00\x00\x00\x49\x3B\x00\x0F\x84\x00\x00\x00\x00\x48\x85\x00\x0F\x84\x00\x00\x00\x00\x48\x8B\x04\x00\x48\x8B\x48\x50\x48\x85\xC9\x74", "xxx????xx?xx????xx?xx????xxx?xxxxxxxx") );
	out << GObjects << " lel" << endl;
	//GObjects = (FindPattern(base, 0x007A0000, (BYTE*)"\x48\x63\xC6\x48\x8B\x0C\xC2\xE8\x00\x00\x00\x00", "xxxxxxxx????") + 1);
	out << std::hex << GObjects -1 << " 2 " << endl;
	
		
		 GNames = (FindPattern(base, 0x007A0000, (BYTE*)"\x3B\x35\x00\x00\x00\x00\x0F\x8D\x00\x00\x00\x00\x48\x63\xC6\x49\x8B", "xx????xx????xxxxx"));
	//GNames = (FindPattern(base, 0x007A0000, (BYTE*)"\x48\x89\x3B\x89\x7B\x08\x48\x89\x7B\x0C", "xxxxxxxxxx") + 2);

	out << std::hex <<  GObjects << " " << std::hex<< GNames << endl;
	int *a = (int*)GObjects;
	out << " lalal " << a << endl;

	DWORD64 GObjects_Offset = 0x00;
	DWORD64 GNames_Offset	= 0x00;
	DWORD64 _GObjects, _GNames;

	_GObjects = GObjects;
	_GNames = GNames;


	GObjects = (_GObjects + GObjects_Offset);
	GNames = (_GNames + GNames_Offset);

	// convert relative address to absolute 
	GObjects += (unsigned __int64)_GObjects + GObjects_Offset + sizeof(DWORD);
	GNames += (unsigned __int64)_GNames + GNames_Offset + sizeof(DWORD);

	out << std::hex << GObjects  << " " << std::hex << GNames  << endl;
	
	out.close();

}

void main()
{
	char buf[128];
	sprintf_s(buf, "Injected x%d dll!\r\nASM function return value: %d", sizeof(void*)* 8, ASMTestFunction());
	MessageBox(0, buf, "", 0);
	onAttach();
}


BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)main, 0, 0, 0);
		return true;
	}

	return false;
}