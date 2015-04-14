/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, kokole (64-bit port)
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

// ProcessEvent Sig 
#define ProcessEvent_Pattern	"\x40\x55\x41U\x41\x56\x48\x81\xEC\x00\x00\x00\x00\x48\x8D\x6C\x24\x00" 
#define ProcessEvent_Mask		"xxxxxxxxx????xxxx?" 

// UE3 Tables Sigs 
#define GObjects_Pattern		"\x4C\x8B\x2D\x00\x00\x00\x00\x49\x8B\x74\xC5\x00" 
#define GObjects_Mask			"xxx????xxxx?" 
#define GObjects_Offset			0x03 

#define GNames_Pattern			"\x48\x8B\x05\x00\x00\x00\x00\x48\x89\x1C\xC8" 
#define GNames_Mask				"xxx????xxxx" 
#define GNames_Offset			0x03 

#define SDK_GEN_X64

/*
# ========================================================================================= #
# Globals
# ========================================================================================= #
*/

BYTE* GObjects					= 0;
BYTE* GNames					= 0;
BYTE* ProcessEvent_Addr			= 0;

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x14 ]; 
	char			Name[ 1 ]; 
}; 

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName ( char* FindName ) 
	{ 
		static TArray< int > NameCache; 

		for ( int i = 0; i < NameCache.Count; ++i ) 
		{ 
		if ( ! strcmp ( this->Names()->Data[ NameCache ( i ) ]->Name, FindName ) ) 
			{ 
				Index = NameCache ( i ); 
				return; 
			} 
		} 

		for ( int i = 0; i < this->Names()->Count; ++i ) 
		{ 
			if ( this->Names()->Data[ i ] ) 
			{ 
				if ( ! strcmp ( this->Names()->Data[ i ]->Name, FindName ) ) 
				{ 
					NameCache.Add ( i ); 
					Index = i; 
				} 
			} 
		} 
	}; 

	static TArray< FNameEntry* >* Names() 
	{ 
		return (TArray< FNameEntry* >*) GNames; 
	}; 

	char* GetName() 
	{ 
		return this->Names()->Data[ Index ]->Name; 
	}; 

	char* operator*() 
	{ 
		return this->GetName(); 
	} 

	bool operator == ( const FName& A ) const 
	{ 
		return ( Index == A.Index ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? (int) ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? (int) ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	class UObject*		Object; 
	struct FName		FunctionName; 
}; 

/*
# ========================================================================================= #
# Init SDK Code
# ========================================================================================= #
*/

void SDK_GetSectionInfo(IMAGE_DOS_HEADER* dosHeader, char* sectionName, BYTE**outSectionStart, DWORD* outSectionSize) 
{ 
	IMAGE_NT_HEADERS* e_lfanewPtr = (IMAGE_NT_HEADERS*)((BYTE*)dosHeader + dosHeader->e_lfanew); 
	IMAGE_SECTION_HEADER* sections = IMAGE_FIRST_SECTION(e_lfanewPtr); 

	for (WORD i = 0; i < e_lfanewPtr->FileHeader.NumberOfSections; i++) 
	{ 
		if (!memcmp(&sections[i].Name, sectionName, 8)) 
		{ 
			*outSectionStart = (BYTE*)dosHeader + sections[i].VirtualAddress; 
			*outSectionSize = sections[i].Misc.VirtualSize; 

			return; 
		} 
	} 

	*outSectionStart = 0; 
	*outSectionSize = 0; 
} 

bool SDK_DataCompare(BYTE* pData, BYTE* bSig, char* szMask) 
{ 
	for (;*szMask; ++szMask, ++pData, ++bSig) 
	{ 
		if (*szMask == 'x' && *pData != *bSig) 
			return false; 
	} 
	return (*szMask) == NULL; 
} 

BYTE* SDK_FindPattern(BYTE* dwAddress, DWORD dwSize, BYTE* pbSig, char* szMask) 
{ 
	for (DWORD i = 0; i < dwSize; i++) 
	{ 
		if (SDK_DataCompare(dwAddress + i, pbSig, szMask)) 
			return dwAddress + i; 
	} 
	return 0; 
} 

void Init_SDK() 
{ 
	BYTE* sectionStart; 
	DWORD sectionSize; 
	SDK_GetSectionInfo((IMAGE_DOS_HEADER*)GetModuleHandleA(NULL), ".text", &sectionStart, &sectionSize); 

	// get GObjects & GNames 
	BYTE* _GObjects = SDK_FindPattern(sectionStart, sectionSize, (BYTE*)GObjects_Pattern, (char*) GObjects_Mask); 
	BYTE* _GNames = SDK_FindPattern(sectionStart, sectionSize, (BYTE*)GNames_Pattern, (char*) GNames_Mask); 

	GObjects = (BYTE*)*(DWORD*)(_GObjects + GObjects_Offset); 
	GNames = (BYTE*)*(DWORD*)(_GNames + GObjects_Offset); 

	// convert relative address to absolute 
	#ifdef SDK_GEN_X64 
	GObjects += (unsigned __int64)_GObjects + GObjects_Offset + sizeof(DWORD); 
	GNames += (unsigned __int64)_GNames + GObjects_Offset + sizeof(DWORD); 
	#endif 

	// get ProcessEvent (this one for the hook) 
	ProcessEvent_Addr = SDK_FindPattern(sectionStart, sectionSize, (BYTE*)ProcessEvent_Pattern, (char*) ProcessEvent_Mask); 
} 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\XAudio2_structs.h"
#include "SDK_HEADERS\XAudio2_classes.h"
#include "SDK_HEADERS\XAudio2_f_structs.h"
#include "SDK_HEADERS\XAudio2_functions.h"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
#include "SDK_HEADERS\GFxUI_functions.h"
#include "SDK_HEADERS\AkAudio_structs.h"
#include "SDK_HEADERS\AkAudio_classes.h"
#include "SDK_HEADERS\AkAudio_f_structs.h"
#include "SDK_HEADERS\AkAudio_functions.h"
#include "SDK_HEADERS\UnrealEd_structs.h"
#include "SDK_HEADERS\UnrealEd_classes.h"
#include "SDK_HEADERS\UnrealEd_f_structs.h"
#include "SDK_HEADERS\UnrealEd_functions.h"
#include "SDK_HEADERS\GFxUIEditor_structs.h"
#include "SDK_HEADERS\GFxUIEditor_classes.h"
#include "SDK_HEADERS\GFxUIEditor_f_structs.h"
#include "SDK_HEADERS\GFxUIEditor_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_structs.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_classes.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_f_structs.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_functions.h"
#include "SDK_HEADERS\UDKBase_structs.h"
#include "SDK_HEADERS\UDKBase_classes.h"
#include "SDK_HEADERS\UDKBase_f_structs.h"
#include "SDK_HEADERS\UDKBase_functions.h"
#include "SDK_HEADERS\UTGame_structs.h"
#include "SDK_HEADERS\UTGame_classes.h"
#include "SDK_HEADERS\UTGame_f_structs.h"
#include "SDK_HEADERS\UTGame_functions.h"
#include "SDK_HEADERS\NetherGame_structs.h"
#include "SDK_HEADERS\NetherGame_classes.h"
#include "SDK_HEADERS\NetherGame_f_structs.h"
#include "SDK_HEADERS\NetherGame_functions.h"
#include "SDK_HEADERS\UTEditor_structs.h"
#include "SDK_HEADERS\UTEditor_classes.h"
#include "SDK_HEADERS\UTEditor_f_structs.h"
#include "SDK_HEADERS\UTEditor_functions.h"
#include "SDK_HEADERS\NetherEditor_structs.h"
#include "SDK_HEADERS\NetherEditor_classes.h"
#include "SDK_HEADERS\NetherEditor_f_structs.h"
#include "SDK_HEADERS\NetherEditor_functions.h"
