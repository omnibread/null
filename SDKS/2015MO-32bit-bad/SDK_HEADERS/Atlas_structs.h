/*
#############################################################################################
# Mortal Online (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Atlas_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct Atlas.AtlasAvatarComponent.VisibleItemData
// 0x0020
struct FVisibleItemData
{
	class AAtlasAttachment*                            m_Attachment;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UContentInfo*                                m_ContentInfo;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class UContentInfo*                                m_ContentInfoB;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              m_MeshComponent;                                  		// 0x000C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMeshComponent*                              m_MeshComponentB;                                 		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     m_Tag;                                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif