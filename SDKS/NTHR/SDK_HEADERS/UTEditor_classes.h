/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: UTEditor_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, kokole (64-bit port)
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UTEditor.GenericBrowserType_UTMapMusicInfo
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_UTMapMusicInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2031 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UTMapMusicInfo::pClassPointer = NULL;

// Class UTEditor.UTMapMusicInfoFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UUTMapMusicInfoFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2032 ];

		return pClassPointer;
	};

};

UClass* UUTMapMusicInfoFactoryNew::pClassPointer = NULL;

// Class UTEditor.UTUnrealEdEngine
// 0x0000 (0x0E60 - 0x0E60)
class UUTUnrealEdEngine : public UUnrealEdEngine
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2033 ];

		return pClassPointer;
	};

};

UClass* UUTUnrealEdEngine::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif