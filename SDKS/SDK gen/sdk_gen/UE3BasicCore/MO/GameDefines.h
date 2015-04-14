/*
#############################################################################################
# Game: Mortal Online																		#
# Version: 1.71.00.04																		#
# ========================================================================================= #
# File: GameDefines.h																		#
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Defines																					
# ========================================================================================= #
*/

// Info
#define GAME_NAME				"Mortal Online"
#define GAME_NAME_S				"Mortal"
#define GAME_VERSION			"1.71.00.04"

// Game
#define CLASS_ALIGN				0x4

// ProcessEvent Sig
#define ProcessEvent_Pattern	"\x83\xC0\x07\x83\xE0\xF8\xE8\x00\x00\x00\x00\x8B\xC4"
#define ProcessEvent_Mask		"xxxxxxx????xx"

// UE3 Tables Sigs
#define GObjects_Pattern		"\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask			"x????x??x??xxxxx"
#define GObjects_Offset			0x1

#define GNames_Pattern			"\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74"
#define GNames_Mask				"xx????xxxxx"
#define GNames_Offset			0x2

// Function Flags ( incomplete )
#define FUNC_Final				0x00000001
#define FUNC_Latent				0x00000008				// ???	
#define FUNC_Simulated			0x00000100				// ???
#define FUNC_Exec				0x00000200
#define FUNC_Native				0x00000400
#define FUNC_Event				0x00000800

// Proprerty Flags ( c&p from UE3 source )
#define	CPF_Edit				0x0000000000000001		// Property is user-settable in the editor.
#define	CPF_Const				0x0000000000000002		// Actor's property always matches class's default actor property.
#define CPF_Input				0x0000000000000004		// Variable is writable by the input system.
#define CPF_ExportObject		0x0000000000000008		// Object can be exported with actor.
#define CPF_OptionalParm		0x0000000000000010		// Optional parameter (if CPF_Param is set).
#define CPF_Net					0x0000000000000020		// Property is relevant to network replication.
#define CPF_EditConstArray		0x0000000000000040		// Prevent adding/removing of items from dynamic a array in the editor.
#define CPF_Parm				0x0000000000000080		// Function/When call parameter.
#define CPF_OutParm				0x0000000000000100		// Value is copied out after function call.
#define CPF_SkipParm			0x0000000000000200		// Property is a short-circuitable evaluation function parm.
#define CPF_ReturnParm			0x0000000000000400		// Return value.
#define CPF_CoerceParm			0x0000000000000800		// Coerce args into this function parameter.
#define CPF_Native      		0x0000000000001000		// Property is native: C++ code is responsible for serializing it.
#define CPF_Transient   		0x0000000000002000		// Property is transient: shouldn't be saved, zero-filled at load time.
#define CPF_Config      		0x0000000000004000		// Property should be loaded/saved as permanent profile.
#define CPF_Localized   		0x0000000000008000		// Property should be loaded as localizable text.
#define CPF_Travel      		0x0000000000010000		// Property travels across levels/servers.
#define CPF_EditConst   		0x0000000000020000		// Property is uneditable in the editor.
#define CPF_GlobalConfig		0x0000000000040000		// Load config from base class, not subclass.
#define CPF_Component			0x0000000000080000		// Property containts component references.
#define CPF_NeedCtorLink		0x0000000000400000		// Fields need construction/destruction.
#define CPF_NoExport    		0x0000000000800000		// Property should not be exported to the native class header file.
#define CPF_NoClear				0x0000000002000000		// Hide clear (and browse) button.
#define CPF_EditInline			0x0000000004000000		// Edit this object reference inline.
#define CPF_EdFindable			0x0000000008000000		// References are set by clicking on actors in the editor viewports.
#define CPF_EditInlineUse		0x0000000010000000		// EditInline with Use button.
#define CPF_Deprecated  		0x0000000020000000		// Property is deprecated.  Read it from an archive, but don't save it.
#define CPF_EditInlineNotify	0x0000000040000000		// EditInline, notify outer object on editor change.
#define CPF_RepNotify			0x0000000100000000		// Notify actors when a property is replicated
#define CPF_Interp				0x0000000200000000		// interpolatable property for use with matinee
#define CPF_NonTransactional	0x0000000400000000		// Property isn't transacted

// Property SubClasses
#define CCP_UBYTE
#define CCP_UINT
#define CCP_UFLOAT
#define CCP_UBOOL
#define CCP_USTR
#define CCP_UNAME
#define CCP_UDELEGATE
#define CCP_UOBJECT
#define CCP_UCLASS
#define CCP_UINTERFACE
#define CCP_USTRUCT
#define CCP_UARRAY
#define CCP_UMAP

/*
# ========================================================================================= #
# Globals																					
# ========================================================================================= #
*/

unsigned long GObjects			= NULL;
unsigned long GNames			= NULL;


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
	unsigned char	UnknownData00[ 0x10 ];
	char			Name[ 0x10 ];
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
		if ( Index < 0 || Index > this->Names()->Num() )
			return "UnknownName";
		else
			return this->Names()->Data[ Index ]->Name;
	};

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
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0;
		
		if ( this->Count )
			this->Data = Other;
	};

	~FString() {};

	FString operator = ( wchar_t* Other )
	{
		if ( this->Data != Other )
		{
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0;

			if ( this->Count )
				this->Data = Other;
		}

		return *this;
	};
};

struct FScriptDelegate
{
	unsigned char UnknownData00[ 0xC ];
};

struct FPointer
{
	int Dummy;
};

struct FQWord
{
	int A;
	int B;
};

/*
# ========================================================================================= #
# Classes																					
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0004 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashNext;                                         		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0018 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 
	char* GetPackageName();
	UObject* GetPackageObj();
	
	template< class T > static T* FindObject ( char* ObjectFullName );
	template< class T > static unsigned int CountObject ( char* ObjectName );
	static UClass* FindClass ( char* ClassFullName );

	bool IsA ( UClass* pClass );
	bool IsA ( char* className );

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Object" );

		return pClassPointer;
	};
};

UClass* UObject::pClassPointer = NULL;

// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x14 ];                            		// 0x005C (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Factory" );

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.TextBufferFactory" );

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.TextBuffer" );

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Subsystem" );

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x00BC (0x00FC - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ScreenShotPath;                                   		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x00F0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.System" );

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.Field
// 0x0008 (0x0044 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      SuperField;                                       		// NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Field" );

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Property
// 0x0040 (0x0084 - 0x0044)
class UProperty : public UField
{
public:
	unsigned long		ArrayDim;									// 0x0040 (0x04)					
	unsigned long		ElementSize;								// 0x0044 (0x04)
	FQWord				PropertyFlags;								// 0x0048 (0x08)
	unsigned char		UnknownData00[ 0x10 ];						// 0x0050 (0x10)
	unsigned long		Offset;										// 0x0060 (0x04)
	unsigned char		UnknownData01[ 0x0C ];						// 0x0064 (0x0C)
	unsigned char		UnknownData02[ 0x10 ];						// 0x0070 (0x10)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Property" );

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.Struct
// 0x004C (0x0090 - 0x0044)
class UStruct : public UField
{
public:
	DWORD			ScriptText;				// 0x48
	DWORD			CppText;				// 0x4C
	UField*			Children;				// 0x50
	DWORD			PropertySize;			// 0x54
	TArray<BYTE>	Script;					// 0x58
	unsigned char	unknown_data0x1[0x30];	// 0x60

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Struct" );

		return pClassPointer;
	};

};

// Class Core.StructProperty
// 0x0004 (0x0088 - 0x0084)
class UStructProperty : public UProperty
{
public:
	UStruct* Struct;

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.StructProperty" );

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0084 - 0x0084)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.StrProperty" );

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x001C (0x00AC - 0x0090)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0090 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ScriptStruct" );

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.ScriptStackObject
// 0x0000 (0x003C - 0x003C)
class UScriptStackObject : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.UScriptStackObject" );

		return pClassPointer;
	};

	bool GetStackStartInfo ( struct FSSOCallerInfo* CallerInfo, int* RpcID );
	bool GetStackStartInfoForRPC ( int OutcomingRPCId, struct FSSOCallerInfo* CallerInfo, int* RpcID );
	void GetFullScriptTraceString ( struct FString* StackString );
	void GetFullScriptTraceStringForRPC ( int OutcomingRPCId, struct FString* StackString );
};

UClass* UScriptStackObject::pClassPointer = NULL;

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x003C (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.PackageMap" );

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ObjectSerializer" );

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ObjectRedirector" );

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0084 - 0x0084)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.NameProperty" );

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.MetaData" );

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x008C - 0x0084)
class UMapProperty : public UProperty
{
public:
				class UProperty*	Key;										// 0x0088 (0x04)
				class UProperty*	Value;										// 0x008C (0x04)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.MapProperty" );

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.Linker
// 0x00C4 (0x0100 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC4 ];                            		// 0x003C (0x00C4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Linker" );

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x0098 (0x0198 - 0x0100)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x98 ];                            		// 0x0100 (0x0098) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.LinkerSave" );

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x05A8 (0x06A8 - 0x0100)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5A8 ];                           		// 0x0100 (0x05A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.LinkerLoad" );

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0084 - 0x0084)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.IntProperty" );

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0004 (0x0088 - 0x0084)
class UInterfaceProperty : public UProperty
{
public:
				class UClass*		InterfaceClass;								// 0x0088 (0x04) 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.InterfaceProperty" );

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class Core.Interface" );

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Commandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.HelpCommandlet" );

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.Function
// 0x0020 (0x00B0 - 0x0090)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                    		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      iNative;                                          		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      RepOffset;                                        		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      OperPrecedence;                                   		// NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                     		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      NumParms;                                         		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ParmsSize;                                        		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                		// NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                             		// NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Function" );

		return pClassPointer;
	};

};

UClass* UFunction::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0084 - 0x0084)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.FloatProperty" );

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Exporter" );

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.Enum
// 0x000C (0x0050 - 0x0044)
class UEnum : public UField
{
public:
			TArray< FName >	Names;											// 0x0048 (0x0C)	

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Enum" );

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Component" );

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.DistributionVector" );

		return pClassPointer;
	};

};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.DistributionFloat" );

		return pClassPointer;
	};

};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x008C - 0x0084)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.DelegateProperty" );

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x0050 - 0x0044)
class UConst : public UField
{
public:
			struct FString		Value;										// 0x0048 (0x0C)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Const" );

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0004 (0x0088 - 0x0084)
class UObjectProperty : public UProperty
{
public:
	UClass* PropertyClass;

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ObjectProperty" );

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x0088 - 0x0088)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ComponentProperty" );

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0004 (0x008C - 0x0088)
class UClassProperty : public UObjectProperty
{
public:
	UClass* MetaClass;

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ClassProperty" );

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0004 (0x0088 - 0x0084)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ByteProperty" );

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x0088 - 0x0084)
class UBoolProperty : public UProperty
{
public:
				unsigned long		BitMask;									// 0x0088 (0x04)	

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.BoolProperty" );

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.Package
// 0x0064 (0x00A0 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x64 ];                            		// 0x003C (0x0064) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Package" );

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.State
// 0x0054 (0x00E4 - 0x0090)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x0090 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.State" );

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Class
// 0x011C (0x0200 - 0x00E4)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x11C ];                           		// 0x00E4 (0x011C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.Class" );
		
		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0004 (0x0088 - 0x0084)
class UArrayProperty : public UProperty
{
public:
	UProperty* Inner;

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindObject<UClass>( "Class Core.ArrayProperty" );

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif