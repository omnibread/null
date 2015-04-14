/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: GFxUIEditor_classes.h
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

// Class GFxUIEditor.GenericBrowserType_GFxMovie
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_GFxMovie : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1864 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GFxMovie::pClassPointer = NULL;

// Class GFxUIEditor.GFxImportCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UGFxImportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1865 ];

		return pClassPointer;
	};

};

UClass* UGFxImportCommandlet::pClassPointer = NULL;

// Class GFxUIEditor.GFxMovieFactory
// 0x0024 (0x00CC - 0x00A8)
class UGFxMovieFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x00A8 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1866 ];

		return pClassPointer;
	};

};

UClass* UGFxMovieFactory::pClassPointer = NULL;

// Class GFxUIEditor.GFxReimportCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UGFxReimportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1867 ];

		return pClassPointer;
	};

};

UClass* UGFxReimportCommandlet::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif