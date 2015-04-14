#include <Winsock2.h>
#include <Windows.h>
#include <fstream>
#include <stdio.h>
#include <MinHook.h>
#include <cstring>

#pragma comment(lib, "libMinHook-x64-v120-mtd.lib")
#pragma comment(lib, "ws2_32.lib")

using namespace std;

bool did_it_once = false;
char get1, get2;

FILE* pSendLogFile;

typedef int(__stdcall* hsend)(SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPDWORD lpNumberOfBytesSent, DWORD dwFlags, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);
hsend osend;


void unhook()
{
	fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
	fprintf(pSendLogFile, "unhooking\n");
	fclose(pSendLogFile);
	if (MH_DisableHook(&WSASend) != MH_OK)
	{
		fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
		fprintf(pSendLogFile, "error123\n");
		fclose(pSendLogFile);
	}

	if (MH_Uninitialize() != MH_OK)
	{
		fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
		fprintf(pSendLogFile, "error124\n");
		fclose(pSendLogFile);
	}
}

int WINAPI msend(SOCKET s, LPWSABUF lpBuffers, DWORD dwBufferCount, LPDWORD lpNumberOfBytesSent, DWORD dwFlags, LPWSAOVERLAPPED lpOverlapped, LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine)
{

	if (did_it_once == true || lpBuffers[0].len<100)
	{
		return osend(s, lpBuffers, dwBufferCount, lpNumberOfBytesSent, dwFlags, lpOverlapped, lpCompletionRoutine);
	}

	//string pat1 = "3162b50018a3bfbaeee30c27b5238025";
	//string pat2 = "aa0086e4668e659c8aacf6bbf4e1d3b5";

	//int len = pat1.size(); //32

	fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
	fprintf(pSendLogFile, "its working somehow - size = %d\n", lpBuffers[0].len);

	
	int ind1 = lpBuffers[0].len - 32 - 3;

	fprintf(pSendLogFile, "old packet \n");
	for (int i = 0; i < lpBuffers[0].len; i++) fprintf(pSendLogFile, "%c", lpBuffers[0].buf[i]);
	fprintf(pSendLogFile, "\n");

	lpBuffers[0].buf[ind1] = get1;
	lpBuffers[0].buf[lpBuffers[0].len - 2] = get2;

	fprintf(pSendLogFile, "new packet \n");
	for (int i = 0; i < lpBuffers[0].len; i++) fprintf(pSendLogFile, "%c", lpBuffers[0].buf[i]);
	fprintf(pSendLogFile, "\n");

	fclose(pSendLogFile);

	did_it_once = true;
	return osend(s, lpBuffers, dwBufferCount, lpNumberOfBytesSent, dwFlags, lpOverlapped, lpCompletionRoutine);
}

void main()
{
	fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
	fprintf(pSendLogFile, "hello");
	fclose(pSendLogFile);
	get1 = '0';
	get2 = '0';
	ifstream in("C:\\MO\\config.txt");
	in >> get1 >> get2;
	in.close();
	ofstream out("C:\\MO\\log.txt");
	out << get1 << get2 << endl;
	out.close();

	if (MH_Initialize() != MH_OK)
	{
		fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
		fprintf(pSendLogFile, "error1");
		fclose(pSendLogFile);
	}
	if (MH_CreateHook(&WSASend, &msend, reinterpret_cast<void**>(&osend)) != MH_OK){
		fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
		fprintf(pSendLogFile, "error2");
		fclose(pSendLogFile);
	}
	if (MH_EnableHook(&WSASend) != MH_OK)
	{
		fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
		fprintf(pSendLogFile, "error3");
		fclose(pSendLogFile);
	}
	
	fopen_s(&pSendLogFile, "C:\\MO\\sndlog2.txt", "a+");
	fprintf(pSendLogFile, "done hooking");
	fclose(pSendLogFile);
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