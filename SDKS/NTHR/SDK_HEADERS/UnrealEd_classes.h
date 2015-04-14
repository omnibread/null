/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: UnrealEd_classes.h
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

// Enum UnrealEd.TextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_OneBitAlpha                                     = 6,
	TC_NormalmapUncompressed                           = 7,
	TC_NormalmapBC5                                    = 8,
	TC_OneBitMonochrome                                = 9,
	TC_SimpleLightmapModification                      = 10,
	TC_MAX                                             = 11
};*/

// Enum UnrealEd.TextureFactory.LODGroup
/*enum LODGroup
{
	TEXTUREGROUP_World                                 = 0,
	TEXTUREGROUP_WorldNormalMap                        = 1,
	TEXTUREGROUP_WorldSpecular                         = 2,
	TEXTUREGROUP_Character                             = 3,
	TEXTUREGROUP_CharacterNormalMap                    = 4,
	TEXTUREGROUP_CharacterSpecular                     = 5,
	TEXTUREGROUP_Weapon                                = 6,
	TEXTUREGROUP_WeaponNormalMap                       = 7,
	TEXTUREGROUP_WeaponSpecular                        = 8,
	TEXTUREGROUP_Vehicle                               = 9,
	TEXTUREGROUP_VehicleNormalMap                      = 10,
	TEXTUREGROUP_VehicleSpecular                       = 11,
	TEXTUREGROUP_Cinematic                             = 12,
	TEXTUREGROUP_Effects                               = 13,
	TEXTUREGROUP_EffectsNotFiltered                    = 14,
	TEXTUREGROUP_Skybox                                = 15,
	TEXTUREGROUP_UI                                    = 16,
	TEXTUREGROUP_Lightmap                              = 17,
	TEXTUREGROUP_RenderTarget                          = 18,
	TEXTUREGROUP_MobileFlattened                       = 19,
	TEXTUREGROUP_ProcBuilding_Face                     = 20,
	TEXTUREGROUP_ProcBuilding_LightMap                 = 21,
	TEXTUREGROUP_Shadowmap                             = 22,
	TEXTUREGROUP_ColorLookupTable                      = 23,
	TEXTUREGROUP_Terrain_Heightmap                     = 24,
	TEXTUREGROUP_Terrain_Weightmap                     = 25,
	TEXTUREGROUP_ImageBasedReflection                  = 26,
	TEXTUREGROUP_Bokeh                                 = 27,
	TEXTUREGROUP_MAX                                   = 28
};*/

// Enum UnrealEd.TextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_ModulateAndAdd                               = 5,
	BLEND_SoftMasked                                   = 6,
	BLEND_AlphaComposite                               = 7,
	BLEND_DitheredTranslucent                          = 8,
	BLEND_MAX                                          = 9
};*/

// Enum UnrealEd.TextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_Anisotropic                                    = 4,
	MLM_MAX                                            = 5
};*/

// Enum UnrealEd.TextureFactory.TextureMipGenSettings
/*enum TextureMipGenSettings
{
	TMGS_FromTextureGroup                              = 0,
	TMGS_SimpleAverage                                 = 1,
	TMGS_Sharpen0                                      = 2,
	TMGS_Sharpen1                                      = 3,
	TMGS_Sharpen2                                      = 4,
	TMGS_Sharpen3                                      = 5,
	TMGS_Sharpen4                                      = 6,
	TMGS_Sharpen5                                      = 7,
	TMGS_Sharpen6                                      = 8,
	TMGS_Sharpen7                                      = 9,
	TMGS_Sharpen8                                      = 10,
	TMGS_Sharpen9                                      = 11,
	TMGS_Sharpen10                                     = 12,
	TMGS_NoMipmaps                                     = 13,
	TMGS_LeaveExistingMips                             = 14,
	TMGS_Blur1                                         = 15,
	TMGS_Blur2                                         = 16,
	TMGS_Blur3                                         = 17,
	TMGS_Blur4                                         = 18,
	TMGS_Blur5                                         = 19,
	TMGS_MAX                                           = 20
};*/

// Enum UnrealEd.ReimportTextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_OneBitAlpha                                     = 6,
	TC_NormalmapUncompressed                           = 7,
	TC_NormalmapBC5                                    = 8,
	TC_OneBitMonochrome                                = 9,
	TC_SimpleLightmapModification                      = 10,
	TC_VectorDisplacementmap                           = 11,
	TC_MAX                                             = 12
};*/

// Enum UnrealEd.ReimportTextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_ModulateAndAdd                               = 5,
	BLEND_SoftMasked                                   = 6,
	BLEND_AlphaComposite                               = 7,
	BLEND_DitheredTranslucent                          = 8,
	BLEND_MAX                                          = 9
};*/

// Enum UnrealEd.ReimportTextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_Anisotropic                                    = 4,
	MLM_MAX                                            = 5
};*/

// Enum UnrealEd.ReimportTextureFactory.TextureMipGenSettings
/*enum TextureMipGenSettings
{
	TMGS_FromTextureGroup                              = 0,
	TMGS_SimpleAverage                                 = 1,
	TMGS_Sharpen0                                      = 2,
	TMGS_Sharpen1                                      = 3,
	TMGS_Sharpen2                                      = 4,
	TMGS_Sharpen3                                      = 5,
	TMGS_Sharpen4                                      = 6,
	TMGS_Sharpen5                                      = 7,
	TMGS_Sharpen6                                      = 8,
	TMGS_Sharpen7                                      = 9,
	TMGS_Sharpen8                                      = 10,
	TMGS_Sharpen9                                      = 11,
	TMGS_Sharpen10                                     = 12,
	TMGS_NoMipmaps                                     = 13,
	TMGS_LeaveExistingMips                             = 14,
	TMGS_Blur1                                         = 15,
	TMGS_Blur2                                         = 16,
	TMGS_Blur3                                         = 17,
	TMGS_Blur4                                         = 18,
	TMGS_Blur5                                         = 19,
	TMGS_MAX                                           = 20
};*/

// Enum UnrealEd.RenderTargetCubeExporterTGA.CubeFace
/*enum CubeFace
{
	CubeFace_MAX                                       = 0
};*/

// Enum UnrealEd.TextureMovieFactory.MovieStreamSource
/*enum MovieStreamSource
{
	MovieStream_File                                   = 0,
	MovieStream_Memory                                 = 1,
	MovieStream_MAX                                    = 2
};*/

// Enum UnrealEd.TextureRenderTargetCubeFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	G8                                                 = 1,
	FloatRGB                                           = 2,
	A16B16G16R16                                       = 3,
	Format_MAX                                         = 4
};*/

// Enum UnrealEd.TextureRenderTargetFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	G8                                                 = 1,
	FloatRGB                                           = 2,
	A16B16G16R16                                       = 3,
	Format_MAX                                         = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UnrealEd.ActorFactorySelection
// 0x0000 (0x008C - 0x008C)
class UActorFactorySelection : public USelection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1450 ];

		return pClassPointer;
	};

};

UClass* UActorFactorySelection::pClassPointer = NULL;

// Class UnrealEd.AkBankFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UAkBankFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1451 ];

		return pClassPointer;
	};

};

UClass* UAkBankFactoryNew::pClassPointer = NULL;

// Class UnrealEd.AkEventFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UAkEventFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1452 ];

		return pClassPointer;
	};

};

UClass* UAkEventFactoryNew::pClassPointer = NULL;

// Class UnrealEd.AnalyzeContentCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1453 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeCookedContentCommandlet
// 0x0020 (0x00D4 - 0x00B4)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x00B4 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1454 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1455 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeCookedTextureSingleUsageCommandlet
// 0x010C (0x01C0 - 0x00B4)
class UAnalyzeCookedTextureSingleUsageCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x10C ];                           		// 0x00B4 (0x010C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1456 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedTextureSingleUsageCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeCookedTextureUsageCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UAnalyzeCookedTextureUsageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1457 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedTextureUsageCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeKismetCommandlet
// 0x004C (0x0100 - 0x00B4)
class UAnalyzeKismetCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x00B4 (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1458 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeKismetCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeReferencedContentCommandlet
// 0x069C (0x0750 - 0x00B4)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x69C ];                           		// 0x00B4 (0x069C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1459 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeReferencedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeReferencedObjectCommandlet
// 0x0058 (0x010C - 0x00B4)
class UAnalyzeReferencedObjectCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x58 ];                            		// 0x00B4 (0x0058) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1460 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeReferencedObjectCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeScriptCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1461 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeScriptCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeShaderCachesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UAnalyzeShaderCachesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1462 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeShaderCachesCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo
// 0x0008 (0x0068 - 0x0060)
class UAnimNodeEditInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1463 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0010 (0x0078 - 0x0068)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0068 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1464 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo_AimOffset::pClassPointer = NULL;

// Class UnrealEd.AnimSetFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UAnimSetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1465 ];

		return pClassPointer;
	};

};

UClass* UAnimSetFactoryNew::pClassPointer = NULL;

// Class UnrealEd.AnimTreeEdSkelComponent
// 0x0010 (0x0750 - 0x0740)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0740 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1466 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeEdSkelComponent::pClassPointer = NULL;

// Class UnrealEd.AnimTreeFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UAnimTreeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1467 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeFactoryNew::pClassPointer = NULL;

// Class UnrealEd.ApexDestructibleDamageParametersFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UApexDestructibleDamageParametersFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1468 ];

		return pClassPointer;
	};

};

UClass* UApexDestructibleDamageParametersFactoryNew::pClassPointer = NULL;

// Class UnrealEd.ApexGenericAssetFactory
// 0x0000 (0x00A8 - 0x00A8)
class UApexGenericAssetFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1469 ];

		return pClassPointer;
	};

};

UClass* UApexGenericAssetFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportApexGenericAssetFactory
// 0x0008 (0x00B0 - 0x00A8)
class UReimportApexGenericAssetFactory : public UApexGenericAssetFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1470 ];

		return pClassPointer;
	};

};

UClass* UReimportApexGenericAssetFactory::pClassPointer = NULL;

// Class UnrealEd.TextureFactory
// 0x0058 (0x0100 - 0x00A8)
class UTextureFactory : public UFactory
{
public:
	unsigned long                                      NoCompression : 1;                                		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CompressionNoAlpha : 1;                           		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DeferCompression : 1;                             		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x00B4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CreateMaterial_ : 1;                              		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGBToDiffuse : 1;                                 		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGBToEmissive : 1;                                		// 0x00C0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AlphaToSpecular : 1;                              		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AlphaToEmissive : 1;                              		// 0x00C8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AlphaToOpacity : 1;                               		// 0x00CC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AlphaToOpacityMask : 1;                           		// 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      TwoSided_ : 1;                                    		// 0x00D4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Blending;                                         		// 0x00D8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LightingModel;                                    		// 0x00D9 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LODGroup;                                         		// 0x00DA (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipBook : 1;                                     		// 0x00DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      LightMap : 1;                                     		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DitherMip_mapsAlpha_ : 1;                         		// 0x00E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PreserveBorderR : 1;                              		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PreserveBorderG : 1;                              		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PreserveBorderB : 1;                              		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PreserveBorderA : 1;                              		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      MipGenSettings;                                   		// 0x00F8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipNormalMapGreenChannel : 1;                    		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1471 ];

		return pClassPointer;
	};

};

UClass* UTextureFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportTextureFactory
// 0x0010 (0x0110 - 0x0100)
class UReimportTextureFactory : public UTextureFactory
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0100 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1472 ];

		return pClassPointer;
	};

};

UClass* UReimportTextureFactory::pClassPointer = NULL;

// Class UnrealEd.StaticMeshFactory
// 0x0018 (0x00C0 - 0x00A8)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneConvexPerUCXObject : 1;                       		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSingleSmoothGroupSingleTangent : 1;              		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bReplaceExistingVertexColors : 1;                 		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1473 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportStaticMeshFactory
// 0x0008 (0x00C8 - 0x00C0)
class UReimportStaticMeshFactory : public UStaticMeshFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00C0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1474 ];

		return pClassPointer;
	};

};

UClass* UReimportStaticMeshFactory::pClassPointer = NULL;

// Class UnrealEd.FbxFactory
// 0x0008 (0x00B0 - 0x00A8)
class UFbxFactory : public UFactory
{
public:
	class UFbxImportUI*                                Import_Options;                                   		// 0x00A8 (0x0008) [0x0000000006004001]              ( CPF_Edit | CPF_Config | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1475 ];

		return pClassPointer;
	};

};

UClass* UFbxFactory::pClassPointer = NULL;

// Class UnrealEd.FbxImportUI
// 0x0008 (0x0068 - 0x0060)
class UFbxImportUI : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1476 ];

		return pClassPointer;
	};

};

UClass* UFbxImportUI::pClassPointer = NULL;

// Class UnrealEd.ReimportFbxStaticMeshFactory
// 0x0008 (0x00B8 - 0x00B0)
class UReimportFbxStaticMeshFactory : public UFbxFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1477 ];

		return pClassPointer;
	};

};

UClass* UReimportFbxStaticMeshFactory::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshFactory
// 0x000C (0x00B4 - 0x00A8)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                       		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00AC (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1478 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportSkeletalMeshFactory
// 0x0008 (0x00BC - 0x00B4)
class UReimportSkeletalMeshFactory : public USkeletalMeshFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B4 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1479 ];

		return pClassPointer;
	};

};

UClass* UReimportSkeletalMeshFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportFbxSkeletalMeshFactory
// 0x0008 (0x00B8 - 0x00B0)
class UReimportFbxSkeletalMeshFactory : public UFbxFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1480 ];

		return pClassPointer;
	};

};

UClass* UReimportFbxSkeletalMeshFactory::pClassPointer = NULL;

// Class UnrealEd.SoundFactory
// 0x0024 (0x00CC - 0x00A8)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeLoopingNode : 1;                          		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeModulatorNode : 1;                        		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              CueVolume;                                        		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CuePackageSuffix;                                 		// 0x00BC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1481 ];

		return pClassPointer;
	};

};

UClass* USoundFactory::pClassPointer = NULL;

// Class UnrealEd.ReimportSoundFactory
// 0x0008 (0x00D4 - 0x00CC)
class UReimportSoundFactory : public USoundFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00CC (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1482 ];

		return pClassPointer;
	};

};

UClass* UReimportSoundFactory::pClassPointer = NULL;

// Class UnrealEd.ASVSkelComponent
// 0x0040 (0x0780 - 0x0740)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0740 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1483 ];

		return pClassPointer;
	};

};

UClass* UASVSkelComponent::pClassPointer = NULL;

// Class UnrealEd.BaseCollectionProcessingCommandlet
// 0x00A4 (0x0158 - 0x00B4)
class UBaseCollectionProcessingCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xA4 ];                            		// 0x00B4 (0x00A4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1484 ];

		return pClassPointer;
	};

};

UClass* UBaseCollectionProcessingCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindBadAnimNotifyCommandlet
// 0x0048 (0x01A0 - 0x0158)
class UFindBadAnimNotifyCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0158 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1485 ];

		return pClassPointer;
	};

};

UClass* UFindBadAnimNotifyCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindOnDVDCinematicTexturesCommandlet
// 0x0048 (0x01A0 - 0x0158)
class UFindOnDVDCinematicTexturesCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0158 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1486 ];

		return pClassPointer;
	};

};

UClass* UFindOnDVDCinematicTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindOnDVDPSysDynamicParameterCommandlet
// 0x004C (0x01A4 - 0x0158)
class UFindOnDVDPSysDynamicParameterCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x0158 (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1487 ];

		return pClassPointer;
	};

};

UClass* UFindOnDVDPSysDynamicParameterCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindOnDVDPSystemsCommandlet
// 0x0048 (0x01A0 - 0x0158)
class UFindOnDVDPSystemsCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0158 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1488 ];

		return pClassPointer;
	};

};

UClass* UFindOnDVDPSystemsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindOnDVDPSysWithCollisionEnabledCommandlet
// 0x0048 (0x01A0 - 0x0158)
class UFindOnDVDPSysWithCollisionEnabledCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0158 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1489 ];

		return pClassPointer;
	};

};

UClass* UFindOnDVDPSysWithCollisionEnabledCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindOnDVDPSysWithMedDetailSpawnRateCommandlet
// 0x004C (0x01A4 - 0x0158)
class UFindOnDVDPSysWithMedDetailSpawnRateCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x0158 (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1490 ];

		return pClassPointer;
	};

};

UClass* UFindOnDVDPSysWithMedDetailSpawnRateCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindOnDVDPSysWithNoFixedBoundsCommandlet
// 0x0048 (0x01A0 - 0x0158)
class UFindOnDVDPSysWithNoFixedBoundsCommandlet : public UBaseCollectionProcessingCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0158 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1491 ];

		return pClassPointer;
	};

};

UClass* UFindOnDVDPSysWithNoFixedBoundsCommandlet::pClassPointer = NULL;

// Class UnrealEd.BaseDatabaseCommandlet
// 0x0300 (0x03B4 - 0x00B4)
class UBaseDatabaseCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x300 ];                           		// 0x00B4 (0x0300) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1492 ];

		return pClassPointer;
	};

};

UClass* UBaseDatabaseCommandlet::pClassPointer = NULL;

// Class UnrealEd.AnalyzeDVDSpaceCommandlet
// 0x00DC (0x0490 - 0x03B4)
class UAnalyzeDVDSpaceCommandlet : public UBaseDatabaseCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xDC ];                            		// 0x03B4 (0x00DC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1493 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeDVDSpaceCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindCinematicTexturesCommandlet
// 0x0048 (0x03FC - 0x03B4)
class UFindCinematicTexturesCommandlet : public UBaseDatabaseCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x03B4 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1494 ];

		return pClassPointer;
	};

};

UClass* UFindCinematicTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.LensFlareAuditCommandlet
// 0x016C (0x0520 - 0x03B4)
class ULensFlareAuditCommandlet : public UBaseDatabaseCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x16C ];                           		// 0x03B4 (0x016C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1495 ];

		return pClassPointer;
	};

};

UClass* ULensFlareAuditCommandlet::pClassPointer = NULL;

// Class UnrealEd.MaterialAuditCommandlet
// 0x0090 (0x0444 - 0x03B4)
class UMaterialAuditCommandlet : public UBaseDatabaseCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x90 ];                            		// 0x03B4 (0x0090) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1496 ];

		return pClassPointer;
	};

};

UClass* UMaterialAuditCommandlet::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemAuditCommandlet
// 0x0480 (0x0834 - 0x03B4)
class UParticleSystemAuditCommandlet : public UBaseDatabaseCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x480 ];                           		// 0x03B4 (0x0480) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1497 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemAuditCommandlet::pClassPointer = NULL;

// Class UnrealEd.PMapForceObjectCheckCommandlet
// 0x0068 (0x041C - 0x03B4)
class UPMapForceObjectCheckCommandlet : public UBaseDatabaseCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x68 ];                            		// 0x03B4 (0x0068) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1498 ];

		return pClassPointer;
	};

};

UClass* UPMapForceObjectCheckCommandlet::pClassPointer = NULL;

// Class UnrealEd.BaseObjectTagGeneratorCommandlet
// 0x00D8 (0x018C - 0x00B4)
class UBaseObjectTagGeneratorCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xD8 ];                            		// 0x00B4 (0x00D8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1499 ];

		return pClassPointer;
	};

};

UClass* UBaseObjectTagGeneratorCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindPSysWithBadAutoActivateSettingCommandlet
// 0x0048 (0x01D4 - 0x018C)
class UFindPSysWithBadAutoActivateSettingCommandlet : public UBaseObjectTagGeneratorCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x018C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1500 ];

		return pClassPointer;
	};

};

UClass* UFindPSysWithBadAutoActivateSettingCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindPSysWithCollisionEnabledCommandlet
// 0x0000 (0x018C - 0x018C)
class UFindPSysWithCollisionEnabledCommandlet : public UBaseObjectTagGeneratorCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1501 ];

		return pClassPointer;
	};

};

UClass* UFindPSysWithCollisionEnabledCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindPSysWithZOrientTowardsCameraCommandlet
// 0x0000 (0x018C - 0x018C)
class UFindPSysWithZOrientTowardsCameraCommandlet : public UBaseObjectTagGeneratorCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1502 ];

		return pClassPointer;
	};

};

UClass* UFindPSysWithZOrientTowardsCameraCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindStaticMeshCleanIssuesCommandlet
// 0x021C (0x03A8 - 0x018C)
class UFindStaticMeshCleanIssuesCommandlet : public UBaseObjectTagGeneratorCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x21C ];                           		// 0x018C (0x021C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1503 ];

		return pClassPointer;
	};

};

UClass* UFindStaticMeshCleanIssuesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupMobileMaterialFogCommandlet
// 0x0000 (0x018C - 0x018C)
class UFixupMobileMaterialFogCommandlet : public UBaseObjectTagGeneratorCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1504 ];

		return pClassPointer;
	};

};

UClass* UFixupMobileMaterialFogCommandlet::pClassPointer = NULL;

// Class UnrealEd.ParticleModuleAuditCommandlet
// 0x0098 (0x0224 - 0x018C)
class UParticleModuleAuditCommandlet : public UBaseObjectTagGeneratorCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x98 ];                            		// 0x018C (0x0098) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1505 ];

		return pClassPointer;
	};

};

UClass* UParticleModuleAuditCommandlet::pClassPointer = NULL;

// Class UnrealEd.BatchExportCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UBatchExportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1506 ];

		return pClassPointer;
	};

};

UClass* UBatchExportCommandlet::pClassPointer = NULL;

// Class UnrealEd.BreakApartPackagesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UBreakApartPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1507 ];

		return pClassPointer;
	};

};

UClass* UBreakApartPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.BrowserManager
// 0x0038 (0x0098 - 0x0060)
class UBrowserManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x38 ];                            		// 0x0060 (0x0038) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1508 ];

		return pClassPointer;
	};

};

UClass* UBrowserManager::pClassPointer = NULL;

// Class UnrealEd.BrushBuilder
// 0x0054 (0x00B4 - 0x0060)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x0060 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1509 ];

		return pClassPointer;
	};

};

UClass* UBrushBuilder::pClassPointer = NULL;

// Class UnrealEd.CubeBuilder
// 0x001C (0x00D0 - 0x00B4)
class UCubeBuilder : public UBrushBuilder
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x00B4 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1510 ];

		return pClassPointer;
	};

};

UClass* UCubeBuilder::pClassPointer = NULL;

// Class UnrealEd.ByteCodeSerializer
// 0x0058 (0x0128 - 0x00D0)
class UByteCodeSerializer : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x58 ];                            		// 0x00D0 (0x0058) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1511 ];

		return pClassPointer;
	};

};

UClass* UByteCodeSerializer::pClassPointer = NULL;

// Class UnrealEd.CameraAnimFactory
// 0x0000 (0x00A8 - 0x00A8)
class UCameraAnimFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1512 ];

		return pClassPointer;
	};

};

UClass* UCameraAnimFactory::pClassPointer = NULL;

// Class UnrealEd.CascadeConfiguration
// 0x0030 (0x0090 - 0x0060)
class UCascadeConfiguration : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x0060 (0x0030) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1513 ];

		return pClassPointer;
	};

};

UClass* UCascadeConfiguration::pClassPointer = NULL;

// Class UnrealEd.CascadeOptions
// 0x00E8 (0x0148 - 0x0060)
class UCascadeOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xE8 ];                            		// 0x0060 (0x00E8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1514 ];

		return pClassPointer;
	};

};

UClass* UCascadeOptions::pClassPointer = NULL;

// Class UnrealEd.CascadePreviewComponent
// 0x0008 (0x0230 - 0x0228)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0228 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1515 ];

		return pClassPointer;
	};

};

UClass* UCascadePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.CheckForSimplifiedMeshesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UCheckForSimplifiedMeshesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1516 ];

		return pClassPointer;
	};

};

UClass* UCheckForSimplifiedMeshesCommandlet::pClassPointer = NULL;

// Class UnrealEd.CheckLightMapUVsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UCheckLightMapUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1517 ];

		return pClassPointer;
	};

};

UClass* UCheckLightMapUVsCommandlet::pClassPointer = NULL;

// Class UnrealEd.CheckpointGameAssetDatabaseCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UCheckpointGameAssetDatabaseCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1518 ];

		return pClassPointer;
	};

};

UClass* UCheckpointGameAssetDatabaseCommandlet::pClassPointer = NULL;

// Class UnrealEd.ClassExporterUC
// 0x0000 (0x0094 - 0x0094)
class UClassExporterUC : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1519 ];

		return pClassPointer;
	};

};

UClass* UClassExporterUC::pClassPointer = NULL;

// Class UnrealEd.ClassFactoryUC
// 0x0000 (0x00A8 - 0x00A8)
class UClassFactoryUC : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1520 ];

		return pClassPointer;
	};

};

UClass* UClassFactoryUC::pClassPointer = NULL;

// Class UnrealEd.CompressAnimationsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UCompressAnimationsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1521 ];

		return pClassPointer;
	};

};

UClass* UCompressAnimationsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ConformCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UConformCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1522 ];

		return pClassPointer;
	};

};

UClass* UConformCommandlet::pClassPointer = NULL;

// Class UnrealEd.ContentAuditCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UContentAuditCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1523 ];

		return pClassPointer;
	};

};

UClass* UContentAuditCommandlet::pClassPointer = NULL;

// Class UnrealEd.ContentComparisonCommandlet
// 0x0100 (0x01B4 - 0x00B4)
class UContentComparisonCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x100 ];                           		// 0x00B4 (0x0100) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1524 ];

		return pClassPointer;
	};

};

UClass* UContentComparisonCommandlet::pClassPointer = NULL;

// Class UnrealEd.ConvertMapToNavMesh
// 0x0000 (0x00B4 - 0x00B4)
class UConvertMapToNavMesh : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1525 ];

		return pClassPointer;
	};

};

UClass* UConvertMapToNavMesh::pClassPointer = NULL;

// Class UnrealEd.CookPackagesCommandlet
// 0x2010 (0x20C4 - 0x00B4)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x2010 ];                          		// 0x00B4 (0x2010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1526 ];

		return pClassPointer;
	};

};

UClass* UCookPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00D8 - 0x0060)
class UCurveEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x78 ];                            		// 0x0060 (0x0078) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1527 ];

		return pClassPointer;
	};

};

UClass* UCurveEdOptions::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x0060 - 0x0060)
class UCurveEdPresetBase : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1528 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPresetBase::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x006C - 0x0060)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0060 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1529 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_CosWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x0070 - 0x0060)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1530 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_LinearDecay::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x0060 - 0x0060)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1531 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_Nothing::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x006C - 0x0060)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0060 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1532 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_SineWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_UserSet
// 0x0008 (0x0068 - 0x0060)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1533 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_UserSet::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetCurveFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1534 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPresetCurveFactoryNew::pClassPointer = NULL;

// Class UnrealEd.DecalMaterialFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UDecalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1535 ];

		return pClassPointer;
	};

};

UClass* UDecalMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.DEditorParameterValue
// 0x001C (0x007C - 0x0060)
class UDEditorParameterValue : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0060 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1536 ];

		return pClassPointer;
	};

};

UClass* UDEditorParameterValue::pClassPointer = NULL;

// Class UnrealEd.DEditorFontParameterValue
// 0x000C (0x0088 - 0x007C)
class UDEditorFontParameterValue : public UDEditorParameterValue
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1537 ];

		return pClassPointer;
	};

};

UClass* UDEditorFontParameterValue::pClassPointer = NULL;

// Class UnrealEd.DEditorScalarParameterValue
// 0x0004 (0x0080 - 0x007C)
class UDEditorScalarParameterValue : public UDEditorParameterValue
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1538 ];

		return pClassPointer;
	};

};

UClass* UDEditorScalarParameterValue::pClassPointer = NULL;

// Class UnrealEd.DEditorStaticComponentMaskParameterValue
// 0x0004 (0x0080 - 0x007C)
class UDEditorStaticComponentMaskParameterValue : public UDEditorParameterValue
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1539 ];

		return pClassPointer;
	};

};

UClass* UDEditorStaticComponentMaskParameterValue::pClassPointer = NULL;

// Class UnrealEd.DEditorStaticSwitchParameterValue
// 0x0004 (0x0080 - 0x007C)
class UDEditorStaticSwitchParameterValue : public UDEditorParameterValue
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1540 ];

		return pClassPointer;
	};

};

UClass* UDEditorStaticSwitchParameterValue::pClassPointer = NULL;

// Class UnrealEd.DEditorTextureParameterValue
// 0x0008 (0x0084 - 0x007C)
class UDEditorTextureParameterValue : public UDEditorParameterValue
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x007C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1541 ];

		return pClassPointer;
	};

};

UClass* UDEditorTextureParameterValue::pClassPointer = NULL;

// Class UnrealEd.DEditorVectorParameterValue
// 0x0010 (0x008C - 0x007C)
class UDEditorVectorParameterValue : public UDEditorParameterValue
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x007C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1542 ];

		return pClassPointer;
	};

};

UClass* UDEditorVectorParameterValue::pClassPointer = NULL;

// Class UnrealEd.DeleteQuarantinedContentCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UDeleteQuarantinedContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1543 ];

		return pClassPointer;
	};

};

UClass* UDeleteQuarantinedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.DiffPackagesCommandlet
// 0x0054 (0x0108 - 0x00B4)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x00B4 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1544 ];

		return pClassPointer;
	};

};

UClass* UDiffPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpEmittersCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1545 ];

		return pClassPointer;
	};

};

UClass* UDumpEmittersCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpLightmapInfoCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1546 ];

		return pClassPointer;
	};

};

UClass* UDumpLightmapInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpPropertiesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UDumpPropertiesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1547 ];

		return pClassPointer;
	};

};

UClass* UDumpPropertiesCommandlet::pClassPointer = NULL;

// Class UnrealEd.DumpShadersCommandlet
// 0x0010 (0x00C4 - 0x00B4)
class UDumpShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00B4 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1548 ];

		return pClassPointer;
	};

};

UClass* UDumpShadersCommandlet::pClassPointer = NULL;

// Class UnrealEd.EditorComponent
// 0x0028 (0x0250 - 0x0228)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x0228 (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1549 ];

		return pClassPointer;
	};

};

UClass* UEditorComponent::pClassPointer = NULL;

// Class UnrealEd.EdModeComponent
// 0x0000 (0x0250 - 0x0250)
class UEdModeComponent : public UEditorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1550 ];

		return pClassPointer;
	};

};

UClass* UEdModeComponent::pClassPointer = NULL;

// Class UnrealEd.EditorEngine
// 0x03C0 (0x0CA0 - 0x08E0)
class UEditorEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[ 0x3C0 ];                           		// 0x08E0 (0x03C0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1551 ];

		return pClassPointer;
	};

};

UClass* UEditorEngine::pClassPointer = NULL;

// Class UnrealEd.UnrealEdEngine
// 0x01C0 (0x0E60 - 0x0CA0)
class UUnrealEdEngine : public UEditorEngine
{
public:
	unsigned char                                      UnknownData00[ 0x1C0 ];                           		// 0x0CA0 (0x01C0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1552 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdEngine::pClassPointer = NULL;

// Class UnrealEd.EditorPlayer
// 0x0000 (0x042C - 0x042C)
class UEditorPlayer : public ULocalPlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1553 ];

		return pClassPointer;
	};

};

UClass* UEditorPlayer::pClassPointer = NULL;

// Class UnrealEd.EditorUserSettings
// 0x0028 (0x0088 - 0x0060)
class UEditorUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x0060 (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1554 ];

		return pClassPointer;
	};

};

UClass* UEditorUserSettings::pClassPointer = NULL;

// Class UnrealEd.EditorViewportInput
// 0x0008 (0x0180 - 0x0178)
class UEditorViewportInput : public UInput
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0178 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1555 ];

		return pClassPointer;
	};

};

UClass* UEditorViewportInput::pClassPointer = NULL;

// Class UnrealEd.ExamineOutersCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UExamineOutersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1556 ];

		return pClassPointer;
	};

};

UClass* UExamineOutersCommandlet::pClassPointer = NULL;

// Class UnrealEd.ExporterT3DX
// 0x0000 (0x0094 - 0x0094)
class UExporterT3DX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1557 ];

		return pClassPointer;
	};

};

UClass* UExporterT3DX::pClassPointer = NULL;

// Class UnrealEd.MaterialExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UMaterialExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1558 ];

		return pClassPointer;
	};

};

UClass* UMaterialExporterT3D::pClassPointer = NULL;

// Class UnrealEd.StaticMeshExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UStaticMeshExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1559 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterT3D::pClassPointer = NULL;

// Class UnrealEd.TextureExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UTextureExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1560 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterT3D::pClassPointer = NULL;

// Class UnrealEd.ExportLocCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UExportLocCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1561 ];

		return pClassPointer;
	};

};

UClass* UExportLocCommandlet::pClassPointer = NULL;

// Class UnrealEd.FaceFXStudioSkelComponent
// 0x0010 (0x0750 - 0x0740)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0740 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1562 ];

		return pClassPointer;
	};

};

UClass* UFaceFXStudioSkelComponent::pClassPointer = NULL;

// Class UnrealEd.FindAssetReferencersCommandlet
// 0x00B8 (0x016C - 0x00B4)
class UFindAssetReferencersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xB8 ];                            		// 0x00B4 (0x00B8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1563 ];

		return pClassPointer;
	};

};

UClass* UFindAssetReferencersCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindDarkDiffuseTexturesCommandlet
// 0x0068 (0x011C - 0x00B4)
class UFindDarkDiffuseTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x68 ];                            		// 0x00B4 (0x0068) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1564 ];

		return pClassPointer;
	};

};

UClass* UFindDarkDiffuseTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1565 ];

		return pClassPointer;
	};

};

UClass* UFindDuplicateKismetObjectsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindDuplicateTexturesCommandlet
// 0x0158 (0x020C - 0x00B4)
class UFindDuplicateTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x158 ];                           		// 0x00B4 (0x0158) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1566 ];

		return pClassPointer;
	};

};

UClass* UFindDuplicateTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1567 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterMismatchedLODsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1568 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterModifiedLODsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindEmitterModuleLODErrorsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFindEmitterModuleLODErrorsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1569 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterModuleLODErrorsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindQuestionableTexturesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1570 ];

		return pClassPointer;
	};

};

UClass* UFindQuestionableTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindStaticMeshCanBecomeDynamicCommandlet
// 0x0084 (0x0138 - 0x00B4)
class UFindStaticMeshCanBecomeDynamicCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x00B4 (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1571 ];

		return pClassPointer;
	};

};

UClass* UFindStaticMeshCanBecomeDynamicCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindStaticMeshEmptySectionsCommandlet
// 0x00A4 (0x0158 - 0x00B4)
class UFindStaticMeshEmptySectionsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xA4 ];                            		// 0x00B4 (0x00A4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1572 ];

		return pClassPointer;
	};

};

UClass* UFindStaticMeshEmptySectionsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1573 ];

		return pClassPointer;
	};

};

UClass* UFindTexturesWithMissingPhysicalMaterialsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindUniqueSpecularTextureMaterialsCommandlet
// 0x0060 (0x0114 - 0x00B4)
class UFindUniqueSpecularTextureMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x60 ];                            		// 0x00B4 (0x0060) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1574 ];

		return pClassPointer;
	};

};

UClass* UFindUniqueSpecularTextureMaterialsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindUnreferencedFunctionsCommandlet
// 0x0008 (0x00BC - 0x00B4)
class UFindUnreferencedFunctionsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B4 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1575 ];

		return pClassPointer;
	};

};

UClass* UFindUnreferencedFunctionsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixAdditiveReferencesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFixAdditiveReferencesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1576 ];

		return pClassPointer;
	};

};

UClass* UFixAdditiveReferencesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1577 ];

		return pClassPointer;
	};

};

UClass* UFixAmbiguousMaterialParametersCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupEmittersCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1578 ];

		return pClassPointer;
	};

};

UClass* UFixupEmittersCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupRedirectsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1579 ];

		return pClassPointer;
	};

};

UClass* UFixupRedirectsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FixupSourceUVsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1580 ];

		return pClassPointer;
	};

};

UClass* UFixupSourceUVsCommandlet::pClassPointer = NULL;

// Class UnrealEd.FonixFactory
// 0x0000 (0x00A8 - 0x00A8)
class UFonixFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1581 ];

		return pClassPointer;
	};

};

UClass* UFonixFactory::pClassPointer = NULL;

// Class UnrealEd.FractureMaterialFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UFractureMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1582 ];

		return pClassPointer;
	};

};

UClass* UFractureMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType
// 0x0024 (0x0084 - 0x0060)
class UGenericBrowserType : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x0060 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1583 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AkBank
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_AkBank : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1584 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AkBank::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AkEvent
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_AkEvent : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1585 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AkEvent::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1586 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Animation::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1587 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AnimTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ApexClothingAsset
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_ApexClothingAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1588 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ApexClothingAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ApexDestructibleAsset
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_ApexDestructibleAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1589 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ApexDestructibleAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ApexDestructibleDamageParameters
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_ApexDestructibleDamageParameters : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1590 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ApexDestructibleDamageParameters::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ApexGenericAsset
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_ApexGenericAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1591 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ApexGenericAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1592 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Archetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1593 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CameraAnim::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1594 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CurveEdPresetCurve::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1595 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Custom::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1596 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_All::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1597 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_DecalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1598 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAnimSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1599 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1600 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Font::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FractureMaterial
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_FractureMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1601 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FractureMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_InstancedFoliageSettings
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_InstancedFoliageSettings : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1602 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_InstancedFoliageSettings::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_LandscapeLayer
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_LandscapeLayer : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1603 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_LandscapeLayer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1604 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_LensFlare::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1605 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Material::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialFunction
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_MaterialFunction : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1606 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialFunction::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1607 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1608 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1609 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphTargetSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1610 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphWeightSequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1611 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1612 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1613 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicsAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1614 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysXParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1615 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PostProcess::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1616 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Prefab::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ProcBuildingRuleset
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_ProcBuildingRuleset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1617 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ProcBuildingRuleset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1618 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1619 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SkeletalMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1620 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sounds::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundClass
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SoundClass : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1621 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundClass::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1622 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundCue::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundMode
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SoundMode : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1623 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundMode::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1624 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundWave::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1625 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeechRecognition::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeedTree
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_SpeedTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1626 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeedTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1627 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_StaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FracturedStaticMesh
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_FracturedStaticMesh : public UGenericBrowserType_StaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1628 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FracturedStaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TemplateMapMetadata
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_TemplateMapMetadata : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1629 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TemplateMapMetadata::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1630 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainLayer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1631 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1632 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Texture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1633 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_RenderTexture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TextureCube
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_TextureCube : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1634 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TextureCube::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TextureMovie
// 0x0000 (0x0084 - 0x0084)
class UGenericBrowserType_TextureMovie : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1635 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TextureMovie::pClassPointer = NULL;

// Class UnrealEd.GeomModifier
// 0x001C (0x007C - 0x0060)
class UGeomModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0060 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1636 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Edit
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Edit : public UGeomModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1637 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Edit::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Clip
// 0x0020 (0x009C - 0x007C)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x007C (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1638 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Clip::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Create
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1639 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Create::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Delete
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1640 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Delete::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Extrude
// 0x000C (0x0088 - 0x007C)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1641 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Extrude::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Flip
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1642 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Flip::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Lathe
// 0x0010 (0x008C - 0x007C)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x007C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1643 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Lathe::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Optimize
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Optimize : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1644 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Optimize::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Pen
// 0x002C (0x00A8 - 0x007C)
class UGeomModifier_Pen : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x007C (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1645 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Pen::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Split
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1646 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Split::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Triangulate
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1647 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Triangulate::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Turn
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1648 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Turn::pClassPointer = NULL;

// Class UnrealEd.GeomModifier_Weld
// 0x0000 (0x007C - 0x007C)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1649 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Weld::pClassPointer = NULL;

// Class UnrealEd.GroupActor
// 0x0030 (0x02BC - 0x028C)
class AGroupActor : public AActor
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x028C (0x0030) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1650 ];

		return pClassPointer;
	};

};

UClass* AGroupActor::pClassPointer = NULL;

// Class UnrealEd.InterpEdOptions
// 0x0014 (0x0074 - 0x0060)
class UInterpEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x0060 (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1651 ];

		return pClassPointer;
	};

};

UClass* UInterpEdOptions::pClassPointer = NULL;

// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1652 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAkEventHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackAkEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1653 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAkRTPCHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackAkRTPCHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1654 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkRTPCHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1655 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAnimControlHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackBoolPropHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackBoolPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1656 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackBoolPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1657 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackDirectorHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1658 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1659 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackFaceFXHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1660 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackFloatPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackHeadTrackingHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackHeadTrackingHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1661 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackHeadTrackingHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackNotifyHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackNotifyHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1662 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackNotifyHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackParticleReplayHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackParticleReplayHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1663 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackParticleReplayHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1664 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackSoundHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1665 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackToggleHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1666 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackVectorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1667 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackLinearColorPropHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackLinearColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1668 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackLinearColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVisibilityHelper
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackVisibilityHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1669 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackVisibilityHelper::pClassPointer = NULL;

// Class UnrealEd.KismetBindings
// 0x0020 (0x0080 - 0x0060)
class UKismetBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0060 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1670 ];

		return pClassPointer;
	};

};

UClass* UKismetBindings::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorOptions
// 0x00A4 (0x0104 - 0x0060)
class ULensFlareEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA4 ];                            		// 0x0060 (0x00A4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1671 ];

		return pClassPointer;
	};

};

UClass* ULensFlareEditorOptions::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorPropertyWrapper
// 0x01A4 (0x0204 - 0x0060)
class ULensFlareEditorPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1A4 ];                           		// 0x0060 (0x01A4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1672 ];

		return pClassPointer;
	};

};

UClass* ULensFlareEditorPropertyWrapper::pClassPointer = NULL;

// Class UnrealEd.LensFlareFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class ULensFlareFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1673 ];

		return pClassPointer;
	};

};

UClass* ULensFlareFactoryNew::pClassPointer = NULL;

// Class UnrealEd.LensFlarePreviewComponent
// 0x0008 (0x0230 - 0x0228)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0228 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1674 ];

		return pClassPointer;
	};

};

UClass* ULensFlarePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.LevelExporterFBX
// 0x0000 (0x0094 - 0x0094)
class ULevelExporterFBX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1675 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterFBX::pClassPointer = NULL;

// Class UnrealEd.LevelExporterLOD
// 0x0000 (0x0094 - 0x0094)
class ULevelExporterLOD : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1676 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterLOD::pClassPointer = NULL;

// Class UnrealEd.LevelExporterOBJ
// 0x0000 (0x0094 - 0x0094)
class ULevelExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1677 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterOBJ::pClassPointer = NULL;

// Class UnrealEd.LevelExporterSTL
// 0x0000 (0x0094 - 0x0094)
class ULevelExporterSTL : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1678 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterSTL::pClassPointer = NULL;

// Class UnrealEd.LevelExporterT3D
// 0x0000 (0x0094 - 0x0094)
class ULevelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1679 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterT3D::pClassPointer = NULL;

// Class UnrealEd.LevelFactory
// 0x0000 (0x00A8 - 0x00A8)
class ULevelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1680 ];

		return pClassPointer;
	};

};

UClass* ULevelFactory::pClassPointer = NULL;

// Class UnrealEd.LightingChannelsObject
// 0x0004 (0x0064 - 0x0060)
class ULightingChannelsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1681 ];

		return pClassPointer;
	};

};

UClass* ULightingChannelsObject::pClassPointer = NULL;

// Class UnrealEd.LightmassOptionsObject
// 0x0018 (0x0078 - 0x0060)
class ULightmassOptionsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0060 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1682 ];

		return pClassPointer;
	};

};

UClass* ULightmassOptionsObject::pClassPointer = NULL;

// Class UnrealEd.LinkedObjectFactory
// 0x0008 (0x00B0 - 0x00A8)
class ULinkedObjectFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1683 ];

		return pClassPointer;
	};

};

UClass* ULinkedObjectFactory::pClassPointer = NULL;

// Class UnrealEd.ListCorruptedComponentsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1684 ];

		return pClassPointer;
	};

};

UClass* UListCorruptedComponentsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListCustomMaterialExpressionsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListCustomMaterialExpressionsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1685 ];

		return pClassPointer;
	};

};

UClass* UListCustomMaterialExpressionsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListDistanceCrossFadeNodesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListDistanceCrossFadeNodesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1686 ];

		return pClassPointer;
	};

};

UClass* UListDistanceCrossFadeNodesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListEmittersUsingModuleCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1687 ];

		return pClassPointer;
	};

};

UClass* UListEmittersUsingModuleCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListLoopingEmittersCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1688 ];

		return pClassPointer;
	};

};

UClass* UListLoopingEmittersCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListPackagesReferencingCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1689 ];

		return pClassPointer;
	};

};

UClass* UListPackagesReferencingCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListPhysAssetsNumBodiesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListPhysAssetsNumBodiesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1690 ];

		return pClassPointer;
	};

};

UClass* UListPhysAssetsNumBodiesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1691 ];

		return pClassPointer;
	};

};

UClass* UListPSysFixedBoundSettingCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListScriptReferencedContentCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1692 ];

		return pClassPointer;
	};

};

UClass* UListScriptReferencedContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.ListSoundNodeWavesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UListSoundNodeWavesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1693 ];

		return pClassPointer;
	};

};

UClass* UListSoundNodeWavesCommandlet::pClassPointer = NULL;

// Class UnrealEd.LoadPackageCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class ULoadPackageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1694 ];

		return pClassPointer;
	};

};

UClass* ULoadPackageCommandlet::pClassPointer = NULL;

// Class UnrealEd.LocSoundInfoCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1695 ];

		return pClassPointer;
	};

};

UClass* ULocSoundInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.MakeCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UMakeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1696 ];

		return pClassPointer;
	};

};

UClass* UMakeCommandlet::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceConstant
// 0x00D0 (0x0130 - 0x0060)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xD0 ];                            		// 0x0060 (0x00D0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1697 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x00E8 (0x0148 - 0x0060)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xE8 ];                            		// 0x0060 (0x00E8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1698 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorMeshComponent
// 0x0008 (0x02C0 - 0x02B8)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x02B8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1699 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorOptions
// 0x0014 (0x0074 - 0x0060)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x0060 (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1700 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorOptions::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x0010 (0x0750 - 0x0740)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0740 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1701 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialFactory
// 0x0000 (0x00A8 - 0x00A8)
class UMaterialFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1702 ];

		return pClassPointer;
	};

};

UClass* UMaterialFactory::pClassPointer = NULL;

// Class UnrealEd.MaterialFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1703 ];

		return pClassPointer;
	};

};

UClass* UMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MaterialFunctionFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UMaterialFunctionFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1704 ];

		return pClassPointer;
	};

};

UClass* UMaterialFunctionFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceConstantFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1705 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceConstantFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1706 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceTimeVaryingFactoryNew::pClassPointer = NULL;

// Class UnrealEd.MergeConflictingPackagesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UMergeConflictingPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1707 ];

		return pClassPointer;
	};

};

UClass* UMergeConflictingPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.MergePackagesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UMergePackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1708 ];

		return pClassPointer;
	};

};

UClass* UMergePackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.MineCookedPackagesCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UMineCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1709 ];

		return pClassPointer;
	};

};

UClass* UMineCookedPackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ModelExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UModelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1710 ];

		return pClassPointer;
	};

};

UClass* UModelExporterT3D::pClassPointer = NULL;

// Class UnrealEd.ModelFactory
// 0x0000 (0x00A8 - 0x00A8)
class UModelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1711 ];

		return pClassPointer;
	};

};

UClass* UModelFactory::pClassPointer = NULL;

// Class UnrealEd.ObjectExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UObjectExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1712 ];

		return pClassPointer;
	};

};

UClass* UObjectExporterT3D::pClassPointer = NULL;

// Class UnrealEd.OutputAuditSummaryCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UOutputAuditSummaryCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1713 ];

		return pClassPointer;
	};

};

UClass* UOutputAuditSummaryCommandlet::pClassPointer = NULL;

// Class UnrealEd.PackageExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UPackageExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1714 ];

		return pClassPointer;
	};

};

UClass* UPackageExporterT3D::pClassPointer = NULL;

// Class UnrealEd.PackageFactory
// 0x0000 (0x00A8 - 0x00A8)
class UPackageFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1715 ];

		return pClassPointer;
	};

};

UClass* UPackageFactory::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1716 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PerformMapCheckCommandlet
// 0x001C (0x00D0 - 0x00B4)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x00B4 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1717 ];

		return pClassPointer;
	};

};

UClass* UPerformMapCheckCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindRenamedPrefabSequencesCommandlet
// 0x0058 (0x0128 - 0x00D0)
class UFindRenamedPrefabSequencesCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x58 ];                            		// 0x00D0 (0x0058) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1718 ];

		return pClassPointer;
	};

};

UClass* UFindRenamedPrefabSequencesCommandlet::pClassPointer = NULL;

// Class UnrealEd.FindStaticActorsRefsCommandlet
// 0x00B8 (0x0188 - 0x00D0)
class UFindStaticActorsRefsCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xB8 ];                            		// 0x00D0 (0x00B8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1719 ];

		return pClassPointer;
	};

};

UClass* UFindStaticActorsRefsCommandlet::pClassPointer = NULL;

// Class UnrealEd.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1720 ];

		return pClassPointer;
	};

};

UClass* UPerformTerrainMaterialDumpCommandlet::pClassPointer = NULL;

// Class UnrealEd.PersistentCookerData
// 0x05A0 (0x0600 - 0x0060)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x5A0 ];                           		// 0x0060 (0x05A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1721 ];

		return pClassPointer;
	};

};

UClass* UPersistentCookerData::pClassPointer = NULL;

// Class UnrealEd.PhATSimOptions
// 0x0054 (0x00B4 - 0x0060)
class UPhATSimOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x0060 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1722 ];

		return pClassPointer;
	};

};

UClass* UPhATSimOptions::pClassPointer = NULL;

// Class UnrealEd.PhATSkeletalMeshComponent
// 0x0020 (0x0760 - 0x0740)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0740 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1723 ];

		return pClassPointer;
	};

};

UClass* UPhATSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.PhysicalMaterialFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1724 ];

		return pClassPointer;
	};

};

UClass* UPhysicalMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PhysXExporterAsset
// 0x0000 (0x0094 - 0x0094)
class UPhysXExporterAsset : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1725 ];

		return pClassPointer;
	};

};

UClass* UPhysXExporterAsset::pClassPointer = NULL;

// Class UnrealEd.PhysXParticleSystemFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UPhysXParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1726 ];

		return pClassPointer;
	};

};

UClass* UPhysXParticleSystemFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PIEToNormalCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1727 ];

		return pClassPointer;
	};

};

UClass* UPIEToNormalCommandlet::pClassPointer = NULL;

// Class UnrealEd.PkgInfoCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UPkgInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1728 ];

		return pClassPointer;
	};

};

UClass* UPkgInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.PolysExporterT3D
// 0x0000 (0x0094 - 0x0094)
class UPolysExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1729 ];

		return pClassPointer;
	};

};

UClass* UPolysExporterT3D::pClassPointer = NULL;

// Class UnrealEd.PolysFactory
// 0x0000 (0x00A8 - 0x00A8)
class UPolysFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1730 ];

		return pClassPointer;
	};

};

UClass* UPolysFactory::pClassPointer = NULL;

// Class UnrealEd.PostProcessFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UPostProcessFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1731 ];

		return pClassPointer;
	};

};

UClass* UPostProcessFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PrecompileShadersCommandlet
// 0x0020 (0x00D4 - 0x00B4)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x00B4 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1732 ];

		return pClassPointer;
	};

};

UClass* UPrecompileShadersCommandlet::pClassPointer = NULL;

// Class UnrealEd.PreviewMaterial
// 0x0000 (0x084C - 0x084C)
class UPreviewMaterial : public UMaterial
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1733 ];

		return pClassPointer;
	};

};

UClass* UPreviewMaterial::pClassPointer = NULL;

// Class UnrealEd.ProcBuildingRulesetFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UProcBuildingRulesetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1734 ];

		return pClassPointer;
	};

};

UClass* UProcBuildingRulesetFactoryNew::pClassPointer = NULL;

// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x0060 - 0x0060)
class UPropertyDrawProxy : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1735 ];

		return pClassPointer;
	};

};

UClass* UPropertyDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputProxy
// 0x0028 (0x0088 - 0x0060)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x0060 (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1736 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x0088 - 0x0088)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1737 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputArrayItemBase::pClassPointer = NULL;

// Class UnrealEd.PropertyInputBool
// 0x0000 (0x0088 - 0x0088)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1738 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputBool::pClassPointer = NULL;

// Class UnrealEd.PropertyInputCombo
// 0x0008 (0x0090 - 0x0088)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0088 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1739 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputCombo::pClassPointer = NULL;

// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x0088 - 0x0088)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1740 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputEditInline::pClassPointer = NULL;

// Class UnrealEd.PropertyInputText
// 0x001C (0x00A4 - 0x0088)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0088 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1741 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputText::pClassPointer = NULL;

// Class UnrealEd.PropertyWindowManager
// 0x01DC (0x023C - 0x0060)
class UPropertyWindowManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1DC ];                           		// 0x0060 (0x01DC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1742 ];

		return pClassPointer;
	};

};

UClass* UPropertyWindowManager::pClassPointer = NULL;

// Class UnrealEd.RenderTargetCubeExporterTGA
// 0x0004 (0x0098 - 0x0094)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	unsigned char                                      CubeFace;                                         		// 0x0094 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1743 ];

		return pClassPointer;
	};

};

UClass* URenderTargetCubeExporterTGA::pClassPointer = NULL;

// Class UnrealEd.RenderTargetExporterTGA
// 0x0000 (0x0094 - 0x0094)
class URenderTargetExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1744 ];

		return pClassPointer;
	};

};

UClass* URenderTargetExporterTGA::pClassPointer = NULL;

// Class UnrealEd.ReplaceActorCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UReplaceActorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1745 ];

		return pClassPointer;
	};

};

UClass* UReplaceActorCommandlet::pClassPointer = NULL;

// Class UnrealEd.ReplaceMaterialCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UReplaceMaterialCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1746 ];

		return pClassPointer;
	};

};

UClass* UReplaceMaterialCommandlet::pClassPointer = NULL;

// Class UnrealEd.ResavePackagesCommandlet
// 0x0074 (0x0128 - 0x00B4)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x74 ];                            		// 0x00B4 (0x0074) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1747 ];

		return pClassPointer;
	};

};

UClass* UResavePackagesCommandlet::pClassPointer = NULL;

// Class UnrealEd.ChangePrefabSequenceClassCommandlet
// 0x0000 (0x0128 - 0x0128)
class UChangePrefabSequenceClassCommandlet : public UResavePackagesCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1748 ];

		return pClassPointer;
	};

};

UClass* UChangePrefabSequenceClassCommandlet::pClassPointer = NULL;

// Class UnrealEd.ScaleAudioVolumeCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1749 ];

		return pClassPointer;
	};

};

UClass* UScaleAudioVolumeCommandlet::pClassPointer = NULL;

// Class UnrealEd.SequenceExporterT3D
// 0x0000 (0x0094 - 0x0094)
class USequenceExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1750 ];

		return pClassPointer;
	};

};

UClass* USequenceExporterT3D::pClassPointer = NULL;

// Class UnrealEd.SequenceFactory
// 0x0000 (0x00A8 - 0x00A8)
class USequenceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1751 ];

		return pClassPointer;
	};

};

UClass* USequenceFactory::pClassPointer = NULL;

// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x0060 - 0x0060)
class USequenceObjectHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1752 ];

		return pClassPointer;
	};

};

UClass* USequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.SetMaterialUsageCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1753 ];

		return pClassPointer;
	};

};

UClass* USetMaterialUsageCommandlet::pClassPointer = NULL;

// Class UnrealEd.SetPackageFlagsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1754 ];

		return pClassPointer;
	};

};

UClass* USetPackageFlagsCommandlet::pClassPointer = NULL;

// Class UnrealEd.SetTextureLODGroupCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class USetTextureLODGroupCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1755 ];

		return pClassPointer;
	};

};

UClass* USetTextureLODGroupCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowObjectCountCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1756 ];

		return pClassPointer;
	};

};

UClass* UShowObjectCountCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowPropertyFlagsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UShowPropertyFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1757 ];

		return pClassPointer;
	};

};

UClass* UShowPropertyFlagsCommandlet::pClassPointer = NULL;

// Class UnrealEd.ShowTaggedPropsCommandlet
// 0x00B0 (0x0164 - 0x00B4)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xB0 ];                            		// 0x00B4 (0x00B0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1758 ];

		return pClassPointer;
	};

};

UClass* UShowTaggedPropsCommandlet::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshExporterFBX
// 0x0000 (0x0094 - 0x0094)
class USkeletalMeshExporterFBX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1759 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshExporterFBX::pClassPointer = NULL;

// Class UnrealEd.SoundClassFactory
// 0x0000 (0x00A8 - 0x00A8)
class USoundClassFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1760 ];

		return pClassPointer;
	};

};

UClass* USoundClassFactory::pClassPointer = NULL;

// Class UnrealEd.SoundClassInfoCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class USoundClassInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1761 ];

		return pClassPointer;
	};

};

UClass* USoundClassInfoCommandlet::pClassPointer = NULL;

// Class UnrealEd.SoundCueAuditCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class USoundCueAuditCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1762 ];

		return pClassPointer;
	};

};

UClass* USoundCueAuditCommandlet::pClassPointer = NULL;

// Class UnrealEd.SoundCueFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class USoundCueFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1763 ];

		return pClassPointer;
	};

};

UClass* USoundCueFactoryNew::pClassPointer = NULL;

// Class UnrealEd.SoundExporterWAV
// 0x0000 (0x0094 - 0x0094)
class USoundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1764 ];

		return pClassPointer;
	};

};

UClass* USoundExporterWAV::pClassPointer = NULL;

// Class UnrealEd.SoundModeFactory
// 0x0000 (0x00A8 - 0x00A8)
class USoundModeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1765 ];

		return pClassPointer;
	};

};

UClass* USoundModeFactory::pClassPointer = NULL;

// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x0060 - 0x0060)
class USoundNodeHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1766 ];

		return pClassPointer;
	};

};

UClass* USoundNodeHelper::pClassPointer = NULL;

// Class UnrealEd.SoundSurroundExporterWAV
// 0x0000 (0x0094 - 0x0094)
class USoundSurroundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1767 ];

		return pClassPointer;
	};

};

UClass* USoundSurroundExporterWAV::pClassPointer = NULL;

// Class UnrealEd.SoundSurroundFactory
// 0x0004 (0x00AC - 0x00A8)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                        		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1768 ];

		return pClassPointer;
	};

};

UClass* USoundSurroundFactory::pClassPointer = NULL;

// Class UnrealEd.SoundTTSFactory
// 0x0028 (0x00D0 - 0x00A8)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeLoopingNode : 1;                          		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeModulatorNode : 1;                        		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseTTS : 1;                                      		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     SpokenText;                                       		// 0x00BC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CueVolume;                                        		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1769 ];

		return pClassPointer;
	};

};

UClass* USoundTTSFactory::pClassPointer = NULL;

// Class UnrealEd.SpeedTreeFactory
// 0x0000 (0x00A8 - 0x00A8)
class USpeedTreeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1770 ];

		return pClassPointer;
	};

};

UClass* USpeedTreeFactory::pClassPointer = NULL;

// Class UnrealEd.StaticMeshExporterFBX
// 0x0000 (0x0094 - 0x0094)
class UStaticMeshExporterFBX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1771 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterFBX::pClassPointer = NULL;

// Class UnrealEd.StaticMeshExporterOBJ
// 0x0000 (0x0094 - 0x0094)
class UStaticMeshExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1772 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterOBJ::pClassPointer = NULL;

// Class UnrealEd.StaticMeshMode_Options
// 0x0048 (0x00A8 - 0x0060)
class UStaticMeshMode_Options : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0060 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1773 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshMode_Options::pClassPointer = NULL;

// Class UnrealEd.StripSourceCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UStripSourceCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1774 ];

		return pClassPointer;
	};

};

UClass* UStripSourceCommandlet::pClassPointer = NULL;

// Class UnrealEd.TagCookedReferencedAssetsCommandlet
// 0x00B8 (0x016C - 0x00B4)
class UTagCookedReferencedAssetsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xB8 ];                            		// 0x00B4 (0x00B8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1775 ];

		return pClassPointer;
	};

};

UClass* UTagCookedReferencedAssetsCommandlet::pClassPointer = NULL;

// Class UnrealEd.TagReferencedAssetsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UTagReferencedAssetsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1776 ];

		return pClassPointer;
	};

};

UClass* UTagReferencedAssetsCommandlet::pClassPointer = NULL;

// Class UnrealEd.TagSuboptimalTexturesCommandlet
// 0x0010 (0x00C4 - 0x00B4)
class UTagSuboptimalTexturesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00B4 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1777 ];

		return pClassPointer;
	};

};

UClass* UTagSuboptimalTexturesCommandlet::pClassPointer = NULL;

// Class UnrealEd.TemplateMapMetadata
// 0x0008 (0x0068 - 0x0060)
class UTemplateMapMetadata : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1778 ];

		return pClassPointer;
	};

};

UClass* UTemplateMapMetadata::pClassPointer = NULL;

// Class UnrealEd.TemplateMapMetadataFactory
// 0x0000 (0x00A8 - 0x00A8)
class UTemplateMapMetadataFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1779 ];

		return pClassPointer;
	};

};

UClass* UTemplateMapMetadataFactory::pClassPointer = NULL;

// Class UnrealEd.TerrainEditOptions
// 0x00C8 (0x0128 - 0x0060)
class UTerrainEditOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC8 ];                            		// 0x0060 (0x00C8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1780 ];

		return pClassPointer;
	};

};

UClass* UTerrainEditOptions::pClassPointer = NULL;

// Class UnrealEd.TerrainExporterT3D
// 0x000C (0x00A0 - 0x0094)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0094 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1781 ];

		return pClassPointer;
	};

};

UClass* UTerrainExporterT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainFactory
// 0x0008 (0x00B0 - 0x00A8)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1782 ];

		return pClassPointer;
	};

};

UClass* UTerrainFactory::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapExporter
// 0x0000 (0x0094 - 0x0094)
class UTerrainHeightMapExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1783 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporter::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0094 - 0x0094)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1784 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterG16BMPT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0094 - 0x0094)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1785 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterTextT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactory
// 0x0000 (0x0060 - 0x0060)
class UTerrainHeightMapFactory : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1786 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactory::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x0060 - 0x0060)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1787 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMP::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x0060 - 0x0060)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1788 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMPT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x0060 - 0x0060)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1789 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryTextT3D::pClassPointer = NULL;

// Class UnrealEd.TerrainLayerSetupFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1790 ];

		return pClassPointer;
	};

};

UClass* UTerrainLayerSetupFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TerrainMaterialFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1791 ];

		return pClassPointer;
	};

};

UClass* UTerrainMaterialFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TestCompressionCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UTestCompressionCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1792 ];

		return pClassPointer;
	};

};

UClass* UTestCompressionCommandlet::pClassPointer = NULL;

// Class UnrealEd.TestTextureCompressionCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UTestTextureCompressionCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1793 ];

		return pClassPointer;
	};

};

UClass* UTestTextureCompressionCommandlet::pClassPointer = NULL;

// Class UnrealEd.TestWordWrapCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1794 ];

		return pClassPointer;
	};

};

UClass* UTestWordWrapCommandlet::pClassPointer = NULL;

// Class UnrealEd.TextBufferExporterTXT
// 0x0000 (0x0094 - 0x0094)
class UTextBufferExporterTXT : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1795 ];

		return pClassPointer;
	};

};

UClass* UTextBufferExporterTXT::pClassPointer = NULL;

// Class UnrealEd.Texture2DFactoryNew
// 0x0008 (0x00B0 - 0x00A8)
class UTexture2DFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1796 ];

		return pClassPointer;
	};

};

UClass* UTexture2DFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TextureCubeFactoryNew
// 0x0000 (0x00A8 - 0x00A8)
class UTextureCubeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1797 ];

		return pClassPointer;
	};

};

UClass* UTextureCubeFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TextureExporterBMP
// 0x0000 (0x0094 - 0x0094)
class UTextureExporterBMP : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1798 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterBMP::pClassPointer = NULL;

// Class UnrealEd.TextureExporterPCX
// 0x0000 (0x0094 - 0x0094)
class UTextureExporterPCX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1799 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterPCX::pClassPointer = NULL;

// Class UnrealEd.TextureExporterTGA
// 0x0000 (0x0094 - 0x0094)
class UTextureExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1800 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterTGA::pClassPointer = NULL;

// Class UnrealEd.FontFactory
// 0x0000 (0x0100 - 0x0100)
class UFontFactory : public UTextureFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1801 ];

		return pClassPointer;
	};

};

UClass* UFontFactory::pClassPointer = NULL;

// Class UnrealEd.TrueTypeFontFactory
// 0x0010 (0x0110 - 0x0100)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0100 (0x0008) MISSED OFFSET
	class UFontImportOptions*                          ImportOptions;                                    		// 0x0108 (0x0008) [0x0000000006000001]              ( CPF_Edit | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1802 ];

		return pClassPointer;
	};

};

UClass* UTrueTypeFontFactory::pClassPointer = NULL;

// Class UnrealEd.TrueTypeMultiFontFactory
// 0x0030 (0x0140 - 0x0110)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray< float >                                    ResTests;                                         		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    ResHeights;                                       		// 0x0120 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UFont* >                             ResFonts;                                         		// 0x0130 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1803 ];

		return pClassPointer;
	};

};

UClass* UTrueTypeMultiFontFactory::pClassPointer = NULL;

// Class UnrealEd.TextureMovieFactory
// 0x0004 (0x00AC - 0x00A8)
class UTextureMovieFactory : public UFactory
{
public:
	unsigned char                                      MovieStreamSource;                                		// 0x00A8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1804 ];

		return pClassPointer;
	};

};

UClass* UTextureMovieFactory::pClassPointer = NULL;

// Class UnrealEd.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x00B0 - 0x00A8)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x00AC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1805 ];

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetCubeFactoryNew::pClassPointer = NULL;

// Class UnrealEd.TextureRenderTargetFactoryNew
// 0x000C (0x00B4 - 0x00A8)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x00B0 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1806 ];

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetFactoryNew::pClassPointer = NULL;

// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UThumbnailLabelRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1807 ];

		return pClassPointer;
	};

};

UClass* UThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1808 ];

		return pClassPointer;
	};

};

UClass* UAnimSetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1809 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ApexClothingAssetLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UApexClothingAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1810 ];

		return pClassPointer;
	};

};

UClass* UApexClothingAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ApexDestructibleAssetLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UApexDestructibleAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1811 ];

		return pClassPointer;
	};

};

UClass* UApexDestructibleAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ApexGenericAssetLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UApexGenericAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1812 ];

		return pClassPointer;
	};

};

UClass* UApexGenericAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UFontThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1813 ];

		return pClassPointer;
	};

};

UClass* UFontThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1814 ];

		return pClassPointer;
	};

};

UClass* UGenericThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.LandscapeLayerLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class ULandscapeLayerLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1815 ];

		return pClassPointer;
	};

};

UClass* ULandscapeLayerLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialFunctionLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UMaterialFunctionLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1816 ];

		return pClassPointer;
	};

};

UClass* UMaterialFunctionLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1817 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0008 (0x0068 - 0x0060)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1818 ];

		return pClassPointer;
	};

};

UClass* UMemCountThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UParticleSystemLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1819 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1820 ];

		return pClassPointer;
	};

};

UClass* UPhysicsAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1821 ];

		return pClassPointer;
	};

};

UClass* UPostProcessLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1822 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1823 ];

		return pClassPointer;
	};

};

UClass* USoundLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1824 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.FracturedStaticMeshLabelRenderer
// 0x0000 (0x0060 - 0x0060)
class UFracturedStaticMeshLabelRenderer : public UStaticMeshLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1825 ];

		return pClassPointer;
	};

};

UClass* UFracturedStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailManager
// 0x00F0 (0x0150 - 0x0060)
class UThumbnailManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xF0 ];                            		// 0x0060 (0x00F0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1826 ];

		return pClassPointer;
	};

};

UClass* UThumbnailManager::pClassPointer = NULL;

// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x0060 - 0x0060)
class UThumbnailRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1827 ];

		return pClassPointer;
	};

};

UClass* UThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0068 - 0x0060)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1828 ];

		return pClassPointer;
	};

};

UClass* UDefaultSizedThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ApexDestructibleAssetThumbnailRenderer
// 0x0000 (0x0068 - 0x0068)
class UApexDestructibleAssetThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1829 ];

		return pClassPointer;
	};

};

UClass* UApexDestructibleAssetThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0068 - 0x0068)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1830 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0068 - 0x0068)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1831 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0068 - 0x0068)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1832 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.IconThumbnailRenderer
// 0x0018 (0x0078 - 0x0060)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x0060 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1833 ];

		return pClassPointer;
	};

};

UClass* UIconThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x0078 - 0x0078)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1834 ];

		return pClassPointer;
	};

};

UClass* UArchetypeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x0078 - 0x0078)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1835 ];

		return pClassPointer;
	};

};

UClass* UPrefabThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x0060 - 0x0060)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1836 ];

		return pClassPointer;
	};

};

UClass* UTextureThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x0060 - 0x0060)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1837 ];

		return pClassPointer;
	};

};

UClass* UFontThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0010 (0x0070 - 0x0060)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1838 ];

		return pClassPointer;
	};

};

UClass* ULensFlareThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0010 (0x0070 - 0x0060)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1839 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x0060 - 0x0060)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1840 ];

		return pClassPointer;
	};

};

UClass* UTextureCubeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.Transactor
// 0x0000 (0x0060 - 0x0060)
class UTransactor : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1841 ];

		return pClassPointer;
	};

};

UClass* UTransactor::pClassPointer = NULL;

// Class UnrealEd.TransBuffer
// 0x0034 (0x0094 - 0x0060)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[ 0x34 ];                            		// 0x0060 (0x0034) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1842 ];

		return pClassPointer;
	};

};

UClass* UTransBuffer::pClassPointer = NULL;

// Class UnrealEd.UnitTestCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UUnitTestCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1843 ];

		return pClassPointer;
	};

};

UClass* UUnitTestCommandlet::pClassPointer = NULL;

// Class UnrealEd.UnrealEdKeyBindings
// 0x0020 (0x0080 - 0x0060)
class UUnrealEdKeyBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0060 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1844 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdKeyBindings::pClassPointer = NULL;

// Class UnrealEd.UnrealEdOptions
// 0x0070 (0x00D0 - 0x0060)
class UUnrealEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x70 ];                            		// 0x0060 (0x0070) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1845 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdOptions::pClassPointer = NULL;

// Class UnrealEd.UnrealEdTypes
// 0x0000 (0x0060 - 0x0060)
class UUnrealEdTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1846 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdTypes::pClassPointer = NULL;

// Class UnrealEd.UpdateKismetCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UUpdateKismetCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1847 ];

		return pClassPointer;
	};

};

UClass* UUpdateKismetCommandlet::pClassPointer = NULL;

// Class UnrealEd.UT3MapStatsCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UUT3MapStatsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1848 ];

		return pClassPointer;
	};

};

UClass* UUT3MapStatsCommandlet::pClassPointer = NULL;

// Class UnrealEd.WrangleContentCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UWrangleContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1849 ];

		return pClassPointer;
	};

};

UClass* UWrangleContentCommandlet::pClassPointer = NULL;

// Class UnrealEd.WriteGameStatsReportCommandlet
// 0x0008 (0x00BC - 0x00B4)
class UWriteGameStatsReportCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B4 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1850 ];

		return pClassPointer;
	};

};

UClass* UWriteGameStatsReportCommandlet::pClassPointer = NULL;

// Class UnrealEd.CascadeParticleSystemComponent
// 0x000C (0x0390 - 0x0384)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0384 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1851 ];

		return pClassPointer;
	};

};

UClass* UCascadeParticleSystemComponent::pClassPointer = NULL;

// Class UnrealEd.GameStatsDatabase
// 0x0360 (0x03C0 - 0x0060)
class UGameStatsDatabase : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x360 ];                           		// 0x0060 (0x0360) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1852 ];

		return pClassPointer;
	};

};

UClass* UGameStatsDatabase::pClassPointer = NULL;

// Class UnrealEd.GameStatsDatabaseVisitor
// 0x0000 (0x0060 - 0x0060)
class UGameStatsDatabaseVisitor : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1853 ];

		return pClassPointer;
	};

};

UClass* UGameStatsDatabaseVisitor::pClassPointer = NULL;

// Class UnrealEd.GameStatsFileReader
// 0x015C (0x01E4 - 0x0088)
class UGameStatsFileReader : public UGameplayEventsHandler
{
public:
	unsigned char                                      UnknownData00[ 0x15C ];                           		// 0x0088 (0x015C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1854 ];

		return pClassPointer;
	};

};

UClass* UGameStatsFileReader::pClassPointer = NULL;

// Class UnrealEd.GameStatsReport
// 0x0130 (0x0190 - 0x0060)
class UGameStatsReport : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x130 ];                           		// 0x0060 (0x0130) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1855 ];

		return pClassPointer;
	};

};

UClass* UGameStatsReport::pClassPointer = NULL;

// Class UnrealEd.GameStatsVisitorImpl
// 0x0008 (0x0068 - 0x0060)
class UGameStatsVisitorImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1856 ];

		return pClassPointer;
	};

};

UClass* UGameStatsVisitorImpl::pClassPointer = NULL;

// Class UnrealEd.GameStatsVisualizer
// 0x0040 (0x00A8 - 0x0068)
class UGameStatsVisualizer : public UGameStatsVisitorImpl
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0068 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1857 ];

		return pClassPointer;
	};

};

UClass* UGameStatsVisualizer::pClassPointer = NULL;

// Class UnrealEd.BasicStatsVisualizer
// 0x0050 (0x00F8 - 0x00A8)
class UBasicStatsVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x50 ];                            		// 0x00A8 (0x0050) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1858 ];

		return pClassPointer;
	};

};

UClass* UBasicStatsVisualizer::pClassPointer = NULL;

// Class UnrealEd.GenericParamlistVisualizer
// 0x0018 (0x00C0 - 0x00A8)
class UGenericParamlistVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x00A8 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1859 ];

		return pClassPointer;
	};

};

UClass* UGenericParamlistVisualizer::pClassPointer = NULL;

// Class UnrealEd.HeatmapVisualizer
// 0x0068 (0x0110 - 0x00A8)
class UHeatmapVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x68 ];                            		// 0x00A8 (0x0068) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1860 ];

		return pClassPointer;
	};

};

UClass* UHeatmapVisualizer::pClassPointer = NULL;

// Class UnrealEd.PerformanceVisualizer
// 0x0030 (0x0140 - 0x0110)
class UPerformanceVisualizer : public UHeatmapVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x0110 (0x0030) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1861 ];

		return pClassPointer;
	};

};

UClass* UPerformanceVisualizer::pClassPointer = NULL;

// Class UnrealEd.PlayerMovementVisualizer
// 0x0020 (0x00C8 - 0x00A8)
class UPlayerMovementVisualizer : public UGameStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x00A8 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1862 ];

		return pClassPointer;
	};

};

UClass* UPlayerMovementVisualizer::pClassPointer = NULL;

// Class UnrealEd.CustomPropertyItemBindings
// 0x0060 (0x00C0 - 0x0060)
class UCustomPropertyItemBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x60 ];                            		// 0x0060 (0x0060) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1863 ];

		return pClassPointer;
	};

};

UClass* UCustomPropertyItemBindings::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif