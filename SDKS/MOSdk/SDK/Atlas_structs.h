/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
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

// ScriptStruct Atlas.AtlasHUD.SceneMapping
// 0x001C
struct FSceneMapping
{
	struct FString                                     NameStr;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SceneStr;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIScene*                                    Scene;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Atlas.OnlineSubsystemAtlas.AvatarSelectInfo
// 0x0018
struct FAvatarSelectInfo
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharacterData;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Atlas.UIScene_Atlas_BaseScene.AtlasItem
// 0x005C
struct FAtlasItem
{
	float                                              m_AttackDist;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_AttackSpeed;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_MinDamage;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_MaxDamage;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_DamageType;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_BuyCost;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_SellValue;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_LevelReq;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_Durability;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     m_DisplayName;                                    		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Name;                                           		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_Model;                                          		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_EngineClass;                                    		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Atlas.UIScene_Atlas_ActionBar.ActionWidgetData
// 0x0008
struct UUIScene_Atlas_ActionBar_FActionWidgetData
{
	class UUIAtlas_ContentButton*                      m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Atlas.UIScene_Atlas_Chat.TextColorMap
// 0x0010
struct FTextColorMap
{
	struct FString                                     m_TextType;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      m_TextColor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Atlas.UIScene_Atlas_Inventory.InvItemWidgetData
// 0x0008
struct FInvItemWidgetData
{
	class UUIAtlas_ContentButton*                      m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Atlas.UIScene_Atlas_Loot.LootItemWidgetData
// 0x0010
struct FLootItemWidgetData
{
	class UUIAtlas_ContentButton*                      m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    m_Panel;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_Name;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Atlas.UIScene_Atlas_NpcSpeak.VendorItemWidgetData
// 0x0024
struct FVendorItemWidgetData
{
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentButton*                      m_Button;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    m_Panel;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_Name;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_Cost;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FGuid                                       m_Guid;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct Atlas.UIScene_Atlas_NpcSpeak.ActionWidgetData
// 0x0014
struct UUIScene_Atlas_NpcSpeak_FActionWidgetData
{
	class UUILabelButton*                              m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_Value;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bIsQuest : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Atlas.UIScene_Atlas_PaperDoll.EquipItemWidgetData
// 0x0008
struct FEquipItemWidgetData
{
	class UUIAtlas_ContentButton*                      m_Button;                                         		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif