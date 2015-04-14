/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: NowGame_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_attrb_MinStrength                                  150
#define CONST_attrb_MinDexterity                                 10
#define CONST_attrb_MinConstitution                              150
#define CONST_attrb_MinPsyche                                    5
#define CONST_attrb_MinIntelligence                              1
#define CONST_attrb_MinSpeed                                     1
#define CONST_attrb_MinSize                                      210
#define CONST_attrb_MaxStrength                                  1000
#define CONST_attrb_MaxDexterity                                 60
#define CONST_attrb_MaxConstitution                              600
#define CONST_attrb_MaxPsyche                                    50
#define CONST_attrb_MaxIntelligence                              15
#define CONST_attrb_MaxSpeed                                     82
#define CONST_attrb_MaxSize                                      350
#define CONST_MaxValue                                           80
#define CONST_MinValue                                           25
#define CONST_eMT_ShieldBase                                     8
#define CONST_eMT_ShieldCoat                                     16
#define CONST_eMT_ShieldFrame                                    32
#define CONST_eMT_Ranged                                         64
#define CONST_eMT_Weapon                                         128
#define CONST_eMT_WeaponCoat                                     256
#define CONST_HELM_ROT_DELTA_LIMIT                               15000
#define CONST_HELM_OFFSET_LIMIT                                  0.5f
#define CONST_X_DECAY                                            90000
#define CONST_Y_DECAY                                            40000
#define CONST_HIT_INDICATOR_FADE_TIME                            0.5f
#define CONST_HIT_INDICATOR_FADE_DELAY                           0.8f
#define CONST_MAXTARGETS                                         5
#define CONST_MAXNUMTARGETS                                      5
#define CONST_A_MATERIAL_ARRAY_SIZE                              37
#define CONST_A_LAST_SOFT_MATERIAL                               4
#define CONST_A_LAST_MEDIUM_MATERIAL                             7
#define CONST_A_ARMOR_TYPE_ARRAY_SIZE                            8
#define CONST_A_ARMOR_PIECE_ARRAY_SIZE                           10
#define CONST_W_ARMOR_ASIZE                                      8
#define CONST_W_ARMOR_PIECE_ASIZE                                10
#define CONST_eMT_ArmorSoft                                      1
#define CONST_eMT_ArmorMedium                                    2
#define CONST_eMT_ArmorHard                                      4
#define CONST_MAXSLOTS                                           50
#define CONST_BLACKSMITHING_MAX                                  2
#define CONST_WEAPONSMITHING_MAX                                 4
#define CONST_ARMORSMITHING_MAX                                  10
#define CONST_B_MATERIAL_ARRAY_SIZE                              16
#define CONST_B_BOW_TYPE_ARRAY_SIZE                              3
#define CONST_B_BOW_SHAPE_ARRAY_SIZE                             3
#define CONST_W_COMP_ASIZE                                       2
#define CONST_W_SHAPE_ASIZE                                      3
#define CONST_W_TYPE_ASIZE                                       3
#define CONST_eMT_Bow                                            64
#define CONST_BT_Num                                             5
#define CONST_PT_Num                                             4
#define CONST_ET_Num                                             3
#define CONST_MAXCHOISE                                          5
#define CONST_MAXNUMCHARACTERS                                   4
#define CONST_Step                                               0.02f
#define CONST_eFishLine                                          101
#define CONST_eFishHook                                          102
#define CONST_eFishBait                                          103
#define CONST_TARGET_BUTTONS                                     5
#define CONST_MEMBER_BUTTONS                                     8
#define CONST_HackFlag_BUTTONS                                   16
#define CONST_NUM_TRADE_SLOTS                                    36
#define CONST_MAXSLOTS01                                         36
#define CONST_PAGESIZE                                           9
#define CONST_MAXLOOTS                                           36
#define CONST_NUM_LOOT_SLOTS                                     54
#define CONST_MAXBANKSLOTS                                       28
#define CONST_MAXEQUIPSLOTS                                      28
#define CONST_PETITION_BUTTONS                                   16
#define CONST_NUM_VENDORTRADE_SLOTS                              12
#define CONST_NUM_SELLITEMS                                      23
#define CONST_TIMEUNIT                                           0.02f
#define CONST_MAXNUMBARS                                         2
#define CONST_NEWMAXSLOTS                                        10
#define CONST_TIMEUNIT01                                         0.1f
#define CONST_S_MATERIAL_ARRAY_SIZE                              38
#define CONST_S_WOOD_ARRAY_SIZE                                  8
#define CONST_S_LAST_BASE_MATERIAL                               28
#define CONST_S_BASE_TYPE_ARRAY_SIZE                             2
#define CONST_S_FRAME_TYPE_ARRAY_SIZE                            5
#define CONST_W_BASE_ASIZE                                       2
#define CONST_W_FRAME_ASIZE                                      5
#define CONST_MAXPRIMARYSKILLS                                   7
#define CONST_MAXSECONDARYSKILLS                                 0
#define CONST_MAX_GUI_SLOTS                                      15
#define CONST_MAXSPELLSLOTS                                      15
#define CONST_ECUMENICAL_SPELL_LIST_SIZE                         18
#define CONST_SCHOOL_OF_AWESOME_SPELL_LIST_SIZE                  1
#define CONST_SPIRITISM_SPELL_LIST_SIZE                          3
#define CONST_NR_OF_MAGIC_SCHOOLS                                2
#define CONST_STABLE_MAX                                         2
#define CONST_CLAIM_MAX                                          2
#define CONST_NUM_TRADE_SLOTS01                                  6
#define CONST_nowMaxVendorSlots                                  24
#define CONST_nowBuySellMaxSlots                                 12
#define CONST_W_MATERIAL_ARRAY_SIZE                              29
#define CONST_W_HANDLE_ARRAY_SIZE                                9
#define CONST_W_LAST_BLADE_HANDLE                                3
#define CONST_W_BLADE_ARRAY_SIZE                                 16
#define CONST_W_LAST_BLADE_HANDLE_MATCH                          8
#define CONST_W_HANDLE_ASIZE                                     9
#define CONST_W_HEAD_ASIZE                                       34
#define CONST_eMT_MeleeWeapon                                    128
#define CONST_eMT_MeleeWeaponCoat                                256

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum NowGame.AnimNodeBlendBySpeedMount.MountSpeeds
/*enum MountSpeeds
{
	eMount_Reverse                                     = 0,
	eMount_Stop                                        = 1,
	eMount_Walk                                        = 2,
	eMount_Trott                                       = 3,
	eMount_Gallop                                      = 4,
	eMount_MAX                                         = 5
};*/

// Enum NowGame.ClientEffect.eEffectType
/*enum eEffectType
{
	eET_FadeToColor                                    = 0,
	eET_FadeFromColor                                  = 1,
	eET_FullStun                                       = 2,
	eET_SoundMode                                      = 3,
	eET_FadeToFov                                      = 4,
	eET_FadeFromFov                                    = 5,
	eET_CamRoll                                        = 6,
	eET_DestroyMe                                      = 7,
	eET_MAX                                            = 8
};*/

// Enum NowGame.CombatSystemFishingNew.FishTells
/*enum FishTells
{
	eBehaviorTell_FishLine                             = 0,
	eBehaviorTell_FishHook                             = 1,
	eBehaviorTell_FishBait                             = 2,
	eBehaviorTell_FishTug                              = 3,
	eBehaviorTell_FishLanded                           = 4,
	eBehaviorTell_FishThrow                            = 5,
	eBehaviorTell_FishReel                             = 6,
	eBehaviorTell_FishPullStart                        = 7,
	eBehaviorTell_FishPullStop                         = 8,
	eBehaviorTell_FishBothDepthak                      = 9,
	eBehaviorTell_FishCharge                           = 10,
	eBehaviorTell_MAX                                  = 11
};*/

// Enum NowGame.CombatSystemFishingNew.FishState
/*enum FishState
{
	eInit                                              = 0,
	eThrowCharge                                       = 1,
	eThrowRelease                                      = 2,
	eFishingIdle                                       = 3,
	eTugCharge                                         = 4,
	eReelIn                                            = 5,
	eTugwar                                            = 6,
	FishState_MAX                                      = 7
};*/

// Enum NowGame.MountBrain.EMoveType
/*enum EMoveType
{
	EMoveType_Speed                                    = 0,
	EMoveType_Rotation                                 = 1,
	EMoveType_MAX                                      = 2
};*/

// Enum NowGame.MountBrain.EMoveFlagMount
/*enum EMoveFlagMount
{
	EMoveTypeMount_Nothing                             = 0,
	EMoveTypeMount_FullStop                            = 1,
	EMoveTypeMount_MAX                                 = 2
};*/

// Enum NowGame.NowAiIdleSpot.eAiIdleAnimations
/*enum eAiIdleAnimations
{
	eIdle_None                                         = 0,
	eIdle_Sit                                          = 1,
	eIdle_Sleep                                        = 2,
	eIdle_Mining                                       = 3,
	eIdle_Woodcutting                                  = 4,
	eIdle_MAX                                          = 5
};*/

// Enum NowGame.NowAtlasAvatarAi.AiMoveType
/*enum AiMoveType
{
	AIMove_Walk                                        = 0,
	AIMove_Swim                                        = 1,
	AIMove_Fly                                         = 2,
	AIMove_Static                                      = 3,
	AIMove_MAX                                         = 4
};*/

// Enum NowGame.NowAtlasAvatarAiDynamic.eDynamicFeature
/*enum eDynamicFeature
{
	eDF_A                                              = 0,
	eDF_B                                              = 1,
	eDF_C                                              = 2,
	eDF_D                                              = 3,
	eDF_E                                              = 4,
	eDF_F                                              = 5,
	eDF_G                                              = 6,
	eDF_H                                              = 7,
	eDF_I                                              = 8,
	eDF_J                                              = 9,
	eDF_K                                              = 10,
	eDF_L                                              = 11,
	eDF_M                                              = 12,
	eDF_N                                              = 13,
	eDF_O                                              = 14,
	eDF_P                                              = 15,
	eDF_Q                                              = 16,
	eDF_R                                              = 17,
	eDF_S                                              = 18,
	eDF_T                                              = 19,
	eDF_U                                              = 20,
	eDF_V                                              = 21,
	eDF_X                                              = 22,
	eDF_Y                                              = 23,
	eDF_Z                                              = 24,
	eDF_AA                                             = 25,
	eDF_AB                                             = 26,
	eDF_MAX                                            = 27
};*/

// Enum NowGame.NowAtlasAvatarAiDynamic.eTextureParamType
/*enum eTextureParamType
{
	eTPT_Scalar                                        = 0,
	eTPT_Color                                         = 1,
	eTPT_Texture                                       = 2,
	eTPT_Material                                      = 3,
	eTPT_MAX                                           = 4
};*/

// Enum NowGame.NowAtlasAvatarKeySwitchObject.ObjectGameMessage
/*enum ObjectGameMessage
{
	eObjectOpen                                        = 0,
	eObjectClosed                                      = 1,
	eObjectOpenFailed                                  = 2,
	eObjectLocked                                      = 3,
	eObjectUnLocked                                    = 4,
	eObjectDropKey                                     = 5,
	eObjectFailedDropKey                               = 6,
	eObjectFailedDropWrongKey                          = 7,
	eObjectPickupKey                                   = 8,
	eObjectFailedPickupKey                             = 9,
	eObjectInteractWithoutKey                          = 10,
	ObjectGameMessage_MAX                              = 11
};*/

// Enum NowGame.NowAtlasAvatarWorldBridge.E_BridgeConstructionStatus
/*enum E_BridgeConstructionStatus
{
	BRIDGESTATUS_CONSTRUCTION_Unconstructed            = 0,
	BRIDGESTATUS_CONSTRUCTION_HalfFinished             = 1,
	BRIDGESTATUS_CONSTRUCTION_Finished                 = 2,
	BRIDGESTATUS_CONSTRUCTION_Demolished               = 3,
	BRIDGESTATUS_CONSTRUCTION_MAX                      = 4
};*/

// Enum NowGame.NowAtlasAvatarPlayerHouse.E_HouseConstructionStatus
/*enum E_HouseConstructionStatus
{
	STATUS_CONSTRUCTION_Unconstructed                  = 0,
	STATUS_CONSTRUCTION_HalfFinished                   = 1,
	STATUS_CONSTRUCTION_Finished                       = 2,
	STATUS_CONSTRUCTION_Demolished                     = 3,
	STATUS_CONSTRUCTION_FreeForAll                     = 4,
	STATUS_CONSTRUCTION_MAX                            = 5
};*/

// Enum NowGame.NowChildHudCreate.EInputParamType
/*enum EInputParamType
{
	IPT_Int                                            = 0,
	IPT_Float                                          = 1,
	IPT_String                                         = 2,
	IPT_MAX                                            = 3
};*/

// Enum NowGame.NowGFXHud.EGFXScenes
/*enum EGFXScenes
{
	eNone                                              = 0,
	eLibrary                                           = 1,
	eHelp                                              = 2,
	eGames                                             = 3,
	eNpcTutorial                                       = 4,
	eGMGUI                                             = 5,
	eFriendList                                        = 6,
	eFriendAccecptDialog                               = 7,
	eFriendQuestionMenu                                = 8,
	eGuild                                             = 9,
	eTasks                                             = 10,
	eHouseFriendList                                   = 11,
	eCurrentTasks                                      = 12,
	eMurder                                            = 13,
	eLoading                                           = 14,
	ePylon                                             = 15,
	eOverseer                                          = 16,
	eTreasurer                                         = 17,
	eEngineer                                          = 18,
	eCityBrain                                         = 19,
	eGmAiSpawn                                         = 20,
	eGmAiAttacks                                       = 21,
	eStableUi                                          = 22,
	eCommandMenu                                       = 23,
	eGmAiSpawnNpc                                      = 24,
	eTalkerUi                                          = 25,
	eTalkerUiGuard                                     = 26,
	eBanker                                            = 27,
	eVendor                                            = 28,
	eCraftWeapon                                       = 29,
	eCraftArmor                                        = 30,
	eCraftRanged                                       = 31,
	eCraftShield                                       = 32,
	eExtraction                                        = 33,
	eRefining                                          = 34,
	eSkinning                                          = 35,
	ePotionMaking                                      = 36,
	eCooking                                           = 37,
	eDyeTub                                            = 38,
	ePilfering                                         = 39,
	eCombineItems                                      = 40,
	ePriest                                            = 41,
	eBrooker                                           = 42,
	eMail                                              = 43,
	eLockpicking                                       = 44,
	eTutor                                             = 45,
	ePlayerBook                                        = 46,
	eHouseSign                                         = 47,
	eFishing                                           = 48,
	ePlaceHouseVendor                                  = 49,
	ePlayerVendor                                      = 50,
	eHouseSignConstruction                             = 51,
	eTalkerUiVendor                                    = 52,
	ePriestArena                                       = 53,
	eGlassblowing                                      = 54,
	ePriestHouse                                       = 55,
	eNoobHelp                                          = 56,
	ePetBags                                           = 57,
	eTaxManager                                        = 58,
	EGFXScenes_MAX                                     = 59
};*/

// Enum NowGame.NowHUD.eHudScene
/*enum eHudScene
{
	eLogWindow                                         = 0,
	eInventory_UI                                      = 1,
	eCharacter_UI                                      = 2,
	eTrade_UI                                          = 3,
	eVendor_UI                                         = 4,
	eLoot_UI                                           = 5,
	eStatus_UI                                         = 6,
	eQuickbar_UI                                       = 7,
	eSkill_UI                                          = 8,
	eMainMenu                                          = 9,
	eDeposit_UI                                        = 10,
	eLoadingScreen                                     = 11,
	ePetitionScene                                     = 12,
	eModeratorMail                                     = 13,
	eSpells_UI                                         = 14,
	eGuildMainMenu                                     = 15,
	eGuildAcceptInvite                                 = 16,
	ePlayerHouseConstruction                           = 17,
	eSidebar                                           = 18,
	ePlayerHouseTrade                                  = 19,
	ePlayerHouseSign                                   = 20,
	eWorldObjectTrade                                  = 21,
	eGuildStone                                        = 22,
	sdddeRefining                                      = 23,
	eExtractiodddn                                     = 24,
	eCreateNewGuild                                    = 25,
	eStealingInventory                                 = 26,
	eHouseOptions                                      = 27,
	eHouseWorkBench                                    = 28,
	ePetitionListScene                                 = 29,
	eGuildLeaveGuild                                   = 30,
	eGuildMembers                                      = 31,
	eGuildDiplomacy                                    = 32,
	eUserGuide                                         = 33,
	eGMHouseMainMenu                                   = 34,
	eHouseUpKeep                                       = 35,
	eStable                                            = 36,
	eHackListScene                                     = 37,
	eArmorCrafting                                     = 38,
	eMeleeWeaponCrafting                               = 39,
	eRangedWeaponCrafting                              = 40,
	eShieldCrafting                                    = 41,
	ePetBank                                           = 42,
	ePlayerVendorShopMain                              = 43,
	ePlayerVendorShopOptions                           = 44,
	ePlayerVendorShopBrowse                            = 45,
	ePlayerVendorShopSell                              = 46,
	eToggleHouseTerritoryControl                       = 47,
	eTerritoryNPC                                      = 48,
	eToggleKeepTerritoryControl                        = 49,
	eBuySiegeWeapon                                    = 50,
	eResurrectionQuestion                              = 51,
	eKeepTaxes                                         = 52,
	eBannedAccount                                     = 53,
	eTradeTutorial                                     = 54,
	eHudScene_MAX                                      = 55
};*/

// Enum NowGame.NowPawn.EMeleeCombat_MoveTypes
/*enum EMeleeCombat_MoveTypes
{
	MCMT_Right                                         = 0,
	MCMT_Left                                          = 1,
	MCMT_Thrust                                        = 2,
	MCMT_MAX                                           = 3
};*/

// Enum NowGame.NowPawn.eGUISettings
/*enum eGUISettings
{
	eName                                              = 0,
	eXPos                                              = 1,
	eYPos                                              = 2,
	eScale                                             = 3,
	eAlpha                                             = 4,
	eGUISettings_MAX                                   = 5
};*/

// Enum NowGame.NowPlayerDatastore.GFXUpdateTypes
/*enum GFXUpdateTypes
{
	GFX_HPCUR                                          = 0,
	GFX_MPCUR                                          = 1,
	GFX_SPCUR                                          = 2,
	GFX_HPMAX                                          = 3,
	GFX_MPMAX                                          = 4,
	GFX_SPMAX                                          = 5,
	GFX_DISPNAME                                       = 6,
	GFX_FLAG                                           = 7,
	GFX_COMBAT                                         = 8,
	GFX_HPTHR                                          = 9,
	GFX_MPTHR                                          = 10,
	GFX_SPTHR                                          = 11,
	GFX_HUNGER                                         = 12,
	GFX_POTION                                         = 13,
	GFX_MAX                                            = 14
};*/

// Enum NowGame.NowPlayerDatastore.GFXUpdateTargetTypes
/*enum GFXUpdateTargetTypes
{
	GFXTGT_SELF                                        = 0,
	GFXTGT_TARGET                                      = 1,
	GFXTGT_MOUNT                                       = 2,
	GFXTGT_MAX                                         = 3
};*/

// Enum NowGame.NowVolumeSecurityZone.SecurityLevels
/*enum SecurityLevels
{
	Low                                                = 0,
	High                                               = 1,
	NoFighting                                         = 2,
	SecurityLevels_MAX                                 = 3
};*/

// Enum NowGame.OnlineSubsystemNowGame.E_LOCALPIC_TYPS
/*enum E_LOCALPIC_TYPS
{
	E_SKILL                                            = 0,
	E_ITEM                                             = 1,
	E_SPELL                                            = 2,
	E_COMBATMOVE                                       = 3,
	E_MAX                                              = 4
};*/

// Enum NowGame.OnlineSubsystemNowGame.E_DYNAMIC_UPDATE
/*enum E_DYNAMIC_UPDATE
{
	E_DYNAMIC_STATS                                    = 0,
	E_DYNAMIC_EQUIPMENT                                = 1,
	E_DYNAMIC_BODY                                     = 2,
	E_DYNAMIC_DRAWSCALE                                = 3,
	E_DYNAMIC_MAX                                      = 4
};*/

// Enum NowGame.OnlineSubsystemNowGame.eEmitterEffect
/*enum eEmitterEffect
{
	eNoEffect                                          = 0,
	eRockGolemPortal                                   = 1,
	eTraceLine                                         = 2,
	eGib                                               = 3,
	eRockGolemFire                                     = 4,
	eMovePlayer                                        = 5,
	eTraceSphere                                       = 6,
	eTraceColorMarker                                  = 7,
	eTraceCylinder                                     = 8,
	eTeleportPlayer                                    = 9,
	eEmitterEffect_MAX                                 = 10
};*/

// Enum NowGame.OnlineSubsystemNowGame.eActionEvent
/*enum eActionEvent
{
	eActionEvent_HouseSearchOff                        = 0,
	eActionEvent_SomethingOne                          = 1,
	eActionEvent_SomethingTwo                          = 2,
	eActionEvent_SomethingThree                        = 3,
	eActionEvent_HouseSearchOn                         = 4,
	eActionEvent_SomethingFour                         = 5,
	eActionEvent_KeepSearchOn                          = 6,
	eActionEvent_PalisadeGateSearchOn                  = 7,
	eActionEvent_SeeDeadPeopleSpellOn                  = 8,
	eActionEvent_SeeDeadPeopleSpellOff                 = 9,
	eActionEvent_PlacePylon                            = 10,
	eActionEvent_PlaceViewModeOff                      = 11,
	eActionEvent_PlaceKeepNpc                          = 12,
	eActionEvent_PylonUpgrade                          = 13,
	eActionEvent_PlaceAvatar                           = 14,
	eActionEvent_MAX                                   = 15
};*/

// Enum NowGame.OnlineSubsystemNowGame.eGMState
/*enum eGMState
{
	eGMState_NotValidGmState                           = 0,
	eGMState_Invincible                                = 1,
	eGMState_Invisible                                 = 2,
	eGMState_InvisFly                                  = 3,
	eGMState_Ghost                                     = 4,
	eGMState_MAX                                       = 5
};*/

// Enum NowGame.UIInfo.UIInfoType
/*enum UIInfoType
{
	UIInfo_None                                        = 0,
	UIInfo_TalkerStable                                = 1,
	UIInfo_TalkerCityBrain                             = 2,
	UIInfo_TalkerNoobHelp                              = 3,
	UIInfo_TalkerTaxManager                            = 4,
	UIInfo_MAX                                         = 5
};*/

// Enum NowGame.UIScene_CharacterSheet.BaseTabs
/*enum BaseTabs
{
	BT_Profile                                         = 0,
	BT_Equipment                                       = 1,
	BT_Karma                                           = 2,
	BT_Bio                                             = 3,
	BT_Books                                           = 4,
	BT_MAX                                             = 5
};*/

// Enum NowGame.UIScene_CharacterSheet.ProfileTabs
/*enum ProfileTabs
{
	PT_PrimaryAttributes                               = 0,
	PT_Knowledge                                       = 1,
	PT_PrimarySkills                                   = 2,
	PT_SecondarySkills                                 = 3,
	PT_MAX                                             = 4
};*/

// Enum NowGame.UIScene_CharacterSheet.EquipmentTabs
/*enum EquipmentTabs
{
	ET_Armor                                           = 0,
	ET_Accessories                                     = 1,
	ET_Clothing                                        = 2,
	ET_MAX                                             = 3
};*/

// Enum NowGame.UIScene_CharacterSheet.eAttributes
/*enum eAttributes
{
	eNull                                              = 0,
	eStrength                                          = 1,
	eDexterity                                         = 2,
	eIntelligence                                      = 3,
	ePsyche                                            = 4,
	eConstitution                                      = 5,
	eSize                                              = 6,
	Enum                                               = 7,
	eAttributes_MAX                                    = 8
};*/

// Enum NowGame.UIScene_Family.EFamily
/*enum EFamily
{
	Human                                              = 0,
	Alvarin                                            = 1,
	Dwarf                                              = 2,
	HalfBreed                                          = 3,
	MaxFamily                                          = 4,
	EFamily_MAX                                        = 5
};*/

// Enum NowGame.UIScene_Pet.PetCmd
/*enum PetCmd
{
	STAY                                               = 0,
	ATTACK                                             = 1,
	FOLLOW                                             = 2,
	GRAZE                                              = 3,
	PROTECT                                            = 4,
	PetCmd_MAX                                         = 5
};*/

// Enum NowGame.UIScene_PlayerVendorOwnerBrowse.ItemTypes
/*enum ItemTypes
{
	eSellItem                                          = 0,
	eWantedItem                                        = 1,
	ItemTypes_MAX                                      = 2
};*/

// Enum NowGame.UIScene_PlayerVendorShopMain.RefiningTypes
/*enum RefiningTypes
{
	eRefine                                            = 0,
	eTool                                              = 1,
	eCatalyst                                          = 2,
	RefiningTypes_MAX                                  = 3
};*/

// Enum NowGame.UIScene_ShieldCreationNew.eShieldMats
/*enum eShieldMats
{
	eMatBase                                           = 0,
	eMatCoat                                           = 1,
	eMatFrame                                          = 2,
	eShieldMats_MAX                                    = 3
};*/

// Enum NowGame.UIScene_Skills.eSkillStates
/*enum eSkillStates
{
	eSS_Unrestrained                                   = 0,
	eSS_Restrained                                     = 1,
	eSS_Disabled                                       = 2,
	eSS_Capped                                         = 3,
	eSS_Locked                                         = 4,
	eSS_MAX                                            = 5
};*/

// Enum NowGame.UIScene_Skills.eSkillLockStates
/*enum eSkillLockStates
{
	eSLS_Up                                            = 0,
	eSLS_Locked                                        = 1,
	eSLS_Down                                          = 2,
	eSLS_MAX                                           = 3
};*/

// Enum NowGame.UIScene_Skills.eBaseAttributes
/*enum eBaseAttributes
{
	eBA_NULL                                           = 0,
	eBA_Strength                                       = 1,
	eBA_Dexterity                                      = 2,
	eBA_Intelligence                                   = 3,
	eBA_Psyche                                         = 4,
	eBA_Constitution                                   = 5,
	eBA_MAX                                            = 6
};*/

// Enum NowGame.UIScene_Stable.RefiningTypes
/*enum RefiningTypes
{
	eRefine                                            = 0,
	eTool                                              = 1,
	eCatalyst                                          = 2,
	RefiningTypes_MAX                                  = 3
};*/

// Enum NowGame.UIScene_Tree.EBloodRelations
/*enum EBloodRelations
{
	GrandParentA                                       = 0,
	GrandParentB                                       = 1,
	GrandParentC                                       = 2,
	GrandParentD                                       = 3,
	ParentA                                            = 4,
	ParentB                                            = 5,
	BloodMax                                           = 6,
	EBloodRelations_MAX                                = 7
};*/

// Enum NowGame.UIScene_Tree.EGender
/*enum EGender
{
	Male                                               = 0,
	Female                                             = 1,
	GenderMax                                          = 2,
	EGender_MAX                                        = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class NowGame.AnimNodeBlendByMountRotation
// 0x003C (0x0160 - 0x0124)
class UAnimNodeBlendByMountRotation : public UAnimNodeBlendList
{
public:
	class UAnimNodeAdditiveBlending*                   TurnAdditiveAnimationNode;                        		// 0x0124 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          TurnBlendList;                                    		// 0x0128 (0x0004) [0x0000000000000000]              
	struct FName                                       TurnAdditiveNodeName;                             		// 0x012C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                TurnAnimMaxSpeed;                                 		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeAdditiveBlending*                   LeanAdditiveAnimationNode;                        		// 0x0138 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          LeanBlendList;                                    		// 0x013C (0x0004) [0x0000000000000000]              
	struct FName                                       LeanAnimationNodeName;                            		// 0x0140 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                LeanGallopMinSpeed;                               		// 0x0148 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LeanGallopMaxSpeed;                               		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LeanWalkMinSpeed;                                 		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LeanWalkMaxSpeed;                                 		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastKnownYaw;                                     		// 0x0158 (0x0004) [0x0000000000000000]              
	int                                                LastTurnStyle;                                    		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1487 ];

		return pClassPointer;
	};

	class ANowPlayerController* GetPlayerController ( );
	class ANowPawn* GetPawn ( );
	class ANowAtlasAvatarAiDynamicMount* GetAtlasAvatar ( );
	void SetActiveChild ( int ChildIndex, float BlendTime );
};

UClass* UAnimNodeBlendByMountRotation::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendBySpeedMount
// 0x0048 (0x01BC - 0x0174)
class UAnimNodeBlendBySpeedMount : public UAnimNodeBlendBySpeed
{
public:
	class UAnimNodeBlendListMountAdditive*             SpeedAnimNode;                                    		// 0x0174 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeAdditiveBlending*                   SpeedAdditiveAnimationNode;                       		// 0x0178 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SpeedAdditiveNodeName;                            		// 0x017C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SpeedAnimNodeName;                                		// 0x0184 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ThrottleAnimName;                                 		// 0x018C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BreakAnimName;                                    		// 0x0194 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ThrottleSharpAnimName;                            		// 0x019C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BreakSharpAnimName;                               		// 0x01A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastMountSpeed;                                   		// 0x01AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastSpeedStyle;                                   		// 0x01B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastActiveChild;                                  		// 0x01B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PlayAnimTimeLeft;                                 		// 0x01B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1488 ];

		return pClassPointer;
	};

	class ANowPlayerController* GetPlayerController ( );
	class ANowPawn* GetPawn ( );
	class ANowAtlasAvatarAiDynamicMount* GetAtlasAvatar ( );
	void SetActiveChild ( int ChildIndex, float BlendTime );
};

UClass* UAnimNodeBlendBySpeedMount::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListAttacksAi
// 0x0008 (0x012C - 0x0124)
class UAnimNodeBlendListAttacksAi : public UAnimNodeBlendList
{
public:
	unsigned long                                      bPlaying : 1;                                     		// 0x0124 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fTimeLeft;                                        		// 0x0128 (0x0004) [0x0000000000000000]              

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

UClass* UAnimNodeBlendListAttacksAi::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListBool
// 0x0004 (0x0128 - 0x0124)
class UAnimNodeBlendListBool : public UAnimNodeBlendList
{
public:
	unsigned long                                      bIsBlockingBool : 1;                              		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInCombatBool : 1;                                		// 0x0124 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsFemaleBool : 1;                                		// 0x0124 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bMounted : 1;                                     		// 0x0124 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )

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

UClass* UAnimNodeBlendListBool::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListBoolAi
// 0x0004 (0x0128 - 0x0124)
class UAnimNodeBlendListBoolAi : public UAnimNodeBlendList
{
public:
	unsigned long                                      bIsAttackingBool : 1;                             		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bBlockingBool : 1;                                		// 0x0124 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

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

UClass* UAnimNodeBlendListBoolAi::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListInteractionAi
// 0x0004 (0x0128 - 0x0124)
class UAnimNodeBlendListInteractionAi : public UAnimNodeBlendList
{
public:
	float                                              fTimeLeft;                                        		// 0x0124 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1492 ];

		return pClassPointer;
	};

	void SetActiveChild ( int ChildIndex, float BlendTime );
};

UClass* UAnimNodeBlendListInteractionAi::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListLastAttackType
// 0x0000 (0x0124 - 0x0124)
class UAnimNodeBlendListLastAttackType : public UAnimNodeBlendList
{
public:

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

UClass* UAnimNodeBlendListLastAttackType::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListMountAdditive
// 0x0000 (0x0124 - 0x0124)
class UAnimNodeBlendListMountAdditive : public UAnimNodeBlendList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1494 ];

		return pClassPointer;
	};

	void SetIndexAnim ( int Index, struct FName NewAnimName );
};

UClass* UAnimNodeBlendListMountAdditive::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListMountSpeed
// 0x0008 (0x012C - 0x0124)
class UAnimNodeBlendListMountSpeed : public UAnimNodeBlendList
{
public:
	float                                              TransitionTime;                                   		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransitionLeft;                                   		// 0x0128 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1495 ];

		return pClassPointer;
	};

	void SetActiveChild ( int ChildIndex, float BlendTime );
};

UClass* UAnimNodeBlendListMountSpeed::pClassPointer = NULL;

// Class NowGame.AnimNodeBlendListPlayOnce
// 0x0004 (0x0128 - 0x0124)
class UAnimNodeBlendListPlayOnce : public UAnimNodeBlendList
{
public:
	float                                              fTimeLeft;                                        		// 0x0124 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1496 ];

		return pClassPointer;
	};

	void SetActiveChild ( int ChildIndex, float BlendTime );
};

UClass* UAnimNodeBlendListPlayOnce::pClassPointer = NULL;

// Class NowGame.AnimNodeInCombatAi
// 0x0000 (0x0124 - 0x0124)
class UAnimNodeInCombatAi : public UAnimNodeBlendList
{
public:

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

UClass* UAnimNodeInCombatAi::pClassPointer = NULL;

// Class NowGame.AnimNodeIsFemale
// 0x0000 (0x0124 - 0x0124)
class UAnimNodeIsFemale : public UAnimNodeBlendList
{
public:

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

UClass* UAnimNodeIsFemale::pClassPointer = NULL;

// Class NowGame.ChatManager
// 0x012C (0x0168 - 0x003C)
class UChatManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    MyPawn;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FChatChannels                               Channels[ 0x12 ];                                 		// 0x0044 (0x0120) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              cmdCooldown;                                      		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1499 ];

		return pClassPointer;
	};

	bool IsValidName ( struct FString sName );
	class AWorldInfo* GetWorldInfo ( );
	void CmdMurderCount ( );
	void CmdStopReading ( );
	void CmdEndTutorial ( );
	void CmdStatLossCount ( );
	void CmdCallGuards ( );
	void CmdWhoMe ( );
	void CmdWho ( );
	void CmdFriendCommand ( struct FString sInput );
	void CmdPet ( struct FString sInput );
	void CmdTrade ( class ANowAtlasAvatar* aActor );
	bool CheckCommandOk ( struct FString WhatCommand );
	bool HandleAiCommand ( struct FString sCommand, TArray< struct FString > messageparts );
	void CmdMod ( struct FString sCommand, struct FString sMessage, unsigned long bIgnoreMeParse );
	void CmdCast ( struct FString sCommand );
	void CmdSkill ( struct FString sCommand );
	void CmdEmote ( struct FString sCommand );
	void HandleOutgoingCommand ( struct FString sMessage );
	void CheckMyPawn ( );
	bool ChanGuild ( struct FString sMessage );
	class UOnlineSubsystemNowGame* GetSubSystem ( );
	bool CheckForChannelCommand ( struct FString sMessage );
	bool CheckForTalkCommand ( struct FString sMessage );
	bool CheckChatText ( struct FString InText );
	bool CheckOkChar ( struct FString InText );
	void HandleOutgoingChat ( struct FString sMessage );
	void HandleOutgoingMessage ( struct FString sMessage );
	class UNowGFXHudScene* GetGFXHud ( );
	bool IsNumber ( struct FString Number );
	class AActor* GetActorFromNameOrId ( struct FString* whatName );
	int GetChannelFromString ( struct FString sString );
	void ShowMessage ( int iChannel, struct FString sMsg, struct FString sTalker );
	void eventHandleIncomingMessage ( struct FString sMessage );
	void InitManager ( );
	void StartDuel ( class ANowPawn* pTarget );
	bool IsAvatarId ( struct FString sString );
};

UClass* UChatManager::pClassPointer = NULL;

// Class NowGame.ClientEffect
// 0x0040 (0x007C - 0x003C)
class UClientEffect : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  MyWorldInfo;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FEffectInfo >                       EffectInfos;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimePassed;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              RelativeTimePct;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSingleEffect : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClearEffectsOnStart : 1;                         		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClearEffectsOnEnd : 1;                           		// 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPlayEffectOnMove : 1;                            		// 0x005C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNowIgnoreInputWhilePlaying : 1;                  		// 0x005C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNowIgnoreRotationWhilePlaying : 1;               		// 0x005C (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     vSetVel;                                          		// 0x0060 (0x000C) [0x0000000000000000]              
	class UClass*                                      PlayOnMoveEffect;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	struct FVector                                     lastKnownPos;                                     		// 0x0070 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1500 ];

		return pClassPointer;
	};

	void SetScreenColor ( struct FColor WhatColor );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
};

UClass* UClientEffect::pClassPointer = NULL;

// Class NowGame.CombatSystemNew
// 0x000C (0x0048 - 0x003C)
class UCombatSystemNew : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  MyWorldInfo;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              StartNewMoveTimer;                                		// 0x0044 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1501 ];

		return pClassPointer;
	};

	class ANowPawn* GetNowPawn ( );
	void TickCombat ( float DeltaTime );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	int ReturnHitInfo ( class UPhysicsAsset* TestPhys, struct FName HitBone, class AActor* HitActor );
	int getHitPart ( class AActor* HitActor, struct FVector StartTrace, struct FVector EndTrace, struct FVector HitLoc, struct FTraceHitInfo* HitInfo );
	class UNowOptionsDatastore* eventGetOptions ( );
	void AttachTo ( class AController* aController );
	void CancelCharge ( );
	void eventUpdateWeaponStats ( class APawn* MyPawn );
	void PlayerWasHit ( int lastBoneID );
	void eventSetIntParam ( int NewParam );
	void ChargeReady ( );
	void StopAltFire ( unsigned long bForce );
	void StartAltFire ( );
	void StopFire ( unsigned long TargetSelf );
	void StartFire ( );
	void ExitMode ( );
	void InitMode ( );
	void StartClientAnimations ( struct FString WhatAction, float AnimRate );
};

UClass* UCombatSystemNew::pClassPointer = NULL;

// Class NowGame.CombatSystemFishingNew
// 0x007C (0x00C4 - 0x0048)
class UCombatSystemFishingNew : public UCombatSystemNew
{
public:
	float                                              MINCHARGETIME;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              MAXCHARGETIME;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              MINPULLTIMER;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              MAXJIGGLETIMER;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              MAXTUGREPEAT;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              TUGRESULTTIMER;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              MINTHROWLENGTH;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              Timer;                                            		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              TugTimer;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              TimerValue;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned char                                      eCurState;                                        		// 0x0070 (0x0001) [0x0000000000000000]              
	class ANowProjectileFishing*                       FishProjectile;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FVector                                     StartShot;                                        		// 0x0078 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndShot;                                          		// 0x0084 (0x000C) [0x0000000000000000]              
	struct FRotator                                    viewPointRotator;                                 		// 0x0090 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartFishLocation;                                		// 0x009C (0x000C) [0x0000000000000000]              
	float                                              MaxThrow;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	class AController*                                 C;                                                		// 0x00AC (0x0004) [0x0000000000000000]              
	class UUIScene*                                    OpenScene;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UNewTugSession*                              m_TugSession;                                     		// 0x00B4 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_NowPC;                                          		// 0x00B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerPulls : 1;                                 		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFishPulls : 1;                                   		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              dPlayerTime;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1502 ];

		return pClassPointer;
	};

	void ProjectileHitWater ( class AActor* WaterVolume, float Depth );
	void ProjectileHit ( class AActor* Target, struct FTraceHitInfo hitInfoTmp, struct FVector StartTrace, struct FVector EndTrace, struct FVector HitLocTmp );
	void ProjectileLanded ( struct FVector Loc, class AActor* Volume );
	void TellB ( unsigned char I, struct FString Value );
	void AbortFishing ( );
	void TickCombat ( float DeltaTime );
	void RemoveAllProjectiles ( );
	void Tug ( );
	void Throw ( );
	bool CheckMove ( );
	void eventPlayerFishEvent ( int iValue, float fValue );
	void eventPlayFishEffect ( int WhatEffect );
	void StopFire ( unsigned long TargetSelf );
	void StartFire ( );
	void ExitMode ( );
	void InitMode ( );
	void eventUpdateTugAnimations ( unsigned long PlayerPull, unsigned long FishPull );
	void AttachTo ( class AController* aController );
	void SwitchPlayerTugState ( unsigned long bState, float dTime );
	int GetBlockResult ( );
	struct FString GetSuccessValue ( );
	bool UpdateTugSession ( float DeltaTime );
	void InitTugwarGame ( );
};

UClass* UCombatSystemFishingNew::pClassPointer = NULL;

// Class NowGame.CombatSystemMagicNew
// 0x0014 (0x005C - 0x0048)
class UCombatSystemMagicNew : public UCombatSystemNew
{
public:
	unsigned long                                      bReadyToFire : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCharging : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHoldingMouse : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	class UParticleSystemComponent*                    MainEffectEmitter;                                		// 0x004C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UNowSpellLight*                              SpellLight;                                       		// 0x0050 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowPawn*                                    PawnOwner;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              LastGCDTime;                                      		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1503 ];

		return pClassPointer;
	};

	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	class ANowPawn* GetNowPawn ( );
	class AActor* TraceAndGetTarget ( float SpellRange );
	void CheckForFXEmitter ( );
	void StartChargeFX ( int SpellID );
	void StartNewChargeFX ( int SpellID, class UAnimNotify_PlayIndexedParticleEffect* AnimNotifyData );
	void spawnLateEffect ( );
	void StartReleaseFX ( int SpellID, unsigned long selfPwnage, struct FString SocketName, struct FString BoneName );
	void StopParticleFX ( int Index );
	void GetNewTraceEndStraight ( int Speed, struct FVector* EndShot, struct FVector* StartShot );
	class AActor* GetTarget ( );
	void CancelSpells ( );
	void SetMainEffectEmitter ( class UParticleSystem* PS );
	struct FVector traceLocation ( struct FString traceMethod, struct FVector TargetLoc );
	bool traceCharacter ( struct FString traceMethod, struct FVector TargetLoc, class AActor** HitActor );
	bool spellRelease ( int SpellID, struct FVector TargetLoc );
	void heldTooLong ( );
	void ChargeReady ( );
	bool SpellCharge ( int SpellID );
	bool checkActionAvailability ( int SpellID );
	void SpellAction ( int SpellID );
	bool CheckGCD ( unsigned long spellRelease );
	void AttachTo ( class AController* aController );
	void TickCombat ( float DeltaTime );
};

UClass* UCombatSystemMagicNew::pClassPointer = NULL;

// Class NowGame.CombatSystemMeleeNew
// 0x00D8 (0x0120 - 0x0048)
class UCombatSystemMeleeNew : public UCombatSystemNew
{
public:
	class UParticleSystemComponent*                    TrailPSCRight;                                    		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    TrailPSCLeft;                                     		// 0x004C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bBlocking : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBloodTrailOn : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBloodTrailRight : 1;                             		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBluntClientEffectRight : 1;                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bBluntClientEffectLeft : 1;                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bTraceFromLeftSocket : 1;                         		// 0x0050 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPendingRelease : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPendingHitDetect : 1;                            		// 0x0050 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bCombatMoveTrace : 1;                             		// 0x0050 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bCombatMoveDual : 1;                              		// 0x0050 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bWaitingForChargeDone : 1;                        		// 0x0050 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bDidHit : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bHandleHit : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDebugTraces : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bDebugWeaponLength : 1;                           		// 0x0050 (0x0004) [0x0000000000000000] [0x00004000] 
	struct FVector                                     vWeaponTipLastLocation;                           		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastHitLoc;                                       		// 0x0060 (0x000C) [0x0000000000000000]              
	float                                              fTrailTimer;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                LastAnim;                                         		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              HoldStart;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              ReleaseStart;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              HitDetectionTimer;                                		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              HitDetectionTimerFull;                            		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              MidTimer;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              WeaponRightLength;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              WeaponLeftLength;                                 		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              WeaponRightHeadWidthOffset;                       		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              WeaponLeftHeadWidthOffset;                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              WeaponRightLengthHandle;                          		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              WeaponLeftLengthHandle;                           		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              RightStaminaDrain;                                		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              LeftStaminaDrain;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              RightAttackSpeed;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              LeftAttackSpeed;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              MIN_WEAPON_SPEED;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              RELEASE_SPEED_MULTI;                              		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              LastBlockTimer;                                   		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              LastSwingTimer;                                   		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FVector                                     CachedTrace;                                      		// 0x00C0 (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedTraceB;                                     		// 0x00CC (0x000C) [0x0000000000000000]              
	int                                                ChargePower;                                      		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                iHandleHitForce;                                  		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              ChargeCompleteTimer;                              		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              CounterTimer;                                     		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              ArmIKStr;                                         		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              SavedIKEndLength;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	TArray< struct FPendingCombatMoves >               ActiveCombatMoves;                                		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            CombatTargets;                                    		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowStaticMeshActorWeapon*                   pRightWeapon;                                     		// 0x0108 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorWeapon*                   pLeftWeapon;                                      		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              fHardCharge;                                      		// 0x0110 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortDel__Delegate;                              		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1504 ];

		return pClassPointer;
	};

	int GetHitForce ( );
	bool GetMeleeHitPart ( struct FVector StarTrace, struct FVector EndTrace, class AActor* HitActor, int* HitPart, struct FVector* HitLoc );
	bool GetMeleeBashHit ( );
	int GetMeleeChargeAnimation ( );
	bool GetMountSwing ( );
	void ResetTraceFunction ( );
	void HandleTraceHit ( struct FVector outHitLocation, int outHitPart, class AActor* HitActor );
	void DoCostantTrace ( );
	void AttachTo ( class AController* aController );
	void TickCombat ( float DeltaTime );
	bool IsPointCloserToHandle ( struct FVector vHitPoint, struct FVector vStarTrace, struct FVector vEndTrace );
	void CheckWeaponCollision ( );
	void UpdateArmIK ( float NewStr );
	void CheckForStructureTarget ( );
	int SortDel ( class AActor* A, class AActor* B );
	void GetPossibleTargets ( );
	void ClientHitFeedback ( unsigned long bStructure, unsigned long bBlocked );
	void CancelCharge ( );
	void StopAltFire ( unsigned long bForce );
	void StartAltFire ( );
	void SendHitToServer ( struct FVector HitLocation, int HitPart, class AActor* HitTarget );
	void UnTriggerBloodTrail ( );
	void TriggerBloodTrail ( unsigned long bBlunt, unsigned long bRight );
	void ServExecCombatMoveAnim ( int AnimEnum, float AnimRate );
	void ServExecCombatMove ( int Idx, class AActor* Target, unsigned long bIsTellB );
	void StopFire ( unsigned long TargetSelf );
	void StartFire ( );
	void StartShieldBash ( );
	void PlayHitSound ( unsigned long bHandleHitFeedback, unsigned long bBlunt );
	class AActor* GetTarget ( );
	bool CheckStamina ( unsigned long bLeftWeapon );
	void TickStaminaDrain ( );
	void TickCombatMoves ( float DeltaTime );
	void TriggerCombatMoveHit ( class AActor* WhatActor );
	void eventAddCombatMove ( float newTimer, struct FString newAddB, unsigned long newAddBOnTarget, unsigned long newbTrace, struct FString newActionName, int newActionEnum, float newStamina, struct FString newTellb, float newTraceStartPct, float newStunTimePct, int newCombatReqEnum, unsigned long bDual );
	void ClearCombatMoves ( );
	void PlayerWasHit ( int lastBoneID );
	bool CheckBlockStart ( );
	void TriggerHitDetection ( float Time, float NewMiddle, unsigned long bCombatMove );
	void eventUpdateWeaponStats ( class APawn* MyPawn );
	bool GetCounter ( );
	void SetCounterTimer ( );
	void ResetCounterTimer ( );
	bool LastSwing ( );
	void SetLastSwing ( );
};

UClass* UCombatSystemMeleeNew::pClassPointer = NULL;

// Class NowGame.LoginManager
// 0x0020 (0x005C - 0x003C)
class ULoginManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    MyPawn;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              NextTimer;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsLoaded : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClientReady : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLooksLikeConnection : 1;                         		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LongTimeLoadingTimer;                             		// 0x004C (0x0004) [0x0000000000000000]              
	class UUIScene_Loading*                            LoadingScene;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	class UNowGFXSceneLoading*                         LoadSceneGFX;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                OldLoadingState;                                  		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1505 ];

		return pClassPointer;
	};

	class UNowGFXHudScene* GetGFXHud ( );
	bool CheckConnection ( float DeltaTime );
	void Tick ( float DeltaTime );
	void ResetManager ( );
	void eventCloseLoginScreen ( );
	bool IsLoaded ( );
	void SendClientOk ( );
	void ClientReady ( );
	void SetLoadingState ( int NewState );
	void ShowGFXLoading ( );
	void InitManager ( );
	void SendForcedLogin ( );
	bool CheckForClientConnection ( );
	int CheckLoginStage ( );
};

UClass* ULoginManager::pClassPointer = NULL;

// Class NowGame.MortalBossFireEmitterSpawnable
// 0x0000 (0x02FC - 0x02FC)
class AMortalBossFireEmitterSpawnable : public AEmitterSpawnable
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

	void PostBeginPlay ( );
};

UClass* AMortalBossFireEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalBossPortalEmitterSpawnable
// 0x0004 (0x0300 - 0x02FC)
class AMortalBossPortalEmitterSpawnable : public AEmitterSpawnable
{
public:
	class UAudioComponent*                             AudioComponent;                                   		// 0x02FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1507 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AMortalBossPortalEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalCloudEmitter
// 0x003C (0x0334 - 0x02F8)
class AMortalCloudEmitter : public AEmitter
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     LocationName;                                     		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      Drifting : 1;                                     		// 0x0308 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UParticleSystemComponent*                    ParticleSystemComponentLightClouds;               		// 0x030C (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponentMeduimClouds;              		// 0x0310 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponentHeavyClouds;               		// 0x0314 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponentLightningClouds;           		// 0x0318 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	int                                                LocationNbr;                                      		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                clouds;                                           		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                NewClouds;                                        		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                Rain;                                             		// 0x0328 (0x0004) [0x0000000000000000]              
	int                                                NewRain;                                          		// 0x032C (0x0004) [0x0000000000000000]              
	int                                                WindDirection;                                    		// 0x0330 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1508 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	float Degree ( float DG );
	void RelocateTo ( int Nbr );
	void Replace ( );
	void MoveAndRotate ( class UWeatherControl* Src );
	void Notify ( class UObservable* Src );
};

UClass* AMortalCloudEmitter::pClassPointer = NULL;

// Class NowGame.MortalExponentialHeightFog
// 0x0014 (0x0308 - 0x02F4)
class AMortalExponentialHeightFog : public AExponentialHeightFog
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              LightInscatteringBrightnessNight;                 		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OppositeLightBrightnessNight;                     		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultLightInscatteringBrightness;               		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              DefaultOppositeLightBrightness;                   		// 0x0304 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1509 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void PostponedBase ( );
	void Notify ( class UObservable* Src );
	void Update ( float PartOfDay, float SunRiseAt );
};

UClass* AMortalExponentialHeightFog::pClassPointer = NULL;

// Class NowGame.MortalGibEmitterSpawnable
// 0x0004 (0x0300 - 0x02FC)
class AMortalGibEmitterSpawnable : public AEmitterSpawnable
{
public:
	class UAudioComponent*                             AudioComponent;                                   		// 0x02FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1510 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AMortalGibEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalGolemDeathEffectSpawner
// 0x0000 (0x02FC - 0x02FC)
class AMortalGolemDeathEffectSpawner : public AEmitterSpawnable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1511 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AMortalGolemDeathEffectSpawner::pClassPointer = NULL;

// Class NowGame.MortalLightning
// 0x0024 (0x0310 - 0x02EC)
class AMortalLightning : public AActor
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02EC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     LocationName;                                     		// 0x02F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystemComponent*                    ParticleSystemComponent;                          		// 0x02FC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioComponent;                                   		// 0x0300 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULightComponent*                             LightComponent;                                   		// 0x0304 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      Lightning : 1;                                    		// 0x0308 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LocationNumber;                                   		// 0x030C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1512 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void TurnOff ( );
	void SoundPlay ( );
	void TurnOn ( );
	void Play ( );
	void Notify ( class UObservable* Src );
};

UClass* AMortalLightning::pClassPointer = NULL;

// Class NowGame.MortalRainSnowEmitterSpawnable
// 0x0030 (0x032C - 0x02FC)
class AMortalRainSnowEmitterSpawnable : public AEmitterSpawnable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02FC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UParticleSystemComponent*                    ParticleHeavySnow;                                		// 0x0300 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSnow;                                     		// 0x0304 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleLightSnow;                                		// 0x0308 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleLightRain;                                		// 0x030C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleRain;                                     		// 0x0310 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleHeavyRain;                                		// 0x0314 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioLightRain;                                   		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioRain;                                        		// 0x031C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioHeavyRain;                                   		// 0x0320 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              SoundFadeTime;                                    		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                Rain;                                             		// 0x0328 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1513 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Deactivate ( );
	void Notify ( class UObservable* Src );
};

UClass* AMortalRainSnowEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalSceneCaptureCubeMapActor
// 0x0000 (0x02F8 - 0x02F8)
class AMortalSceneCaptureCubeMapActor : public ASceneCaptureCubeMapActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1514 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void PostponedBase ( );
	void BaseAndLocateOnActor ( class AActor* Other );
};

UClass* AMortalSceneCaptureCubeMapActor::pClassPointer = NULL;

// Class NowGame.MortalSunDominantDirectionalLightMovable
// 0x0034 (0x0328 - 0x02F4)
class AMortalSunDominantDirectionalLightMovable : public ADominantDirectionalLightMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              YawOffset;                                        		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Sunrise;                                          		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Daytime;                                          		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Sunset;                                           		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxIntensity;                                     		// 0x0308 (0x0004) [0x0000000000000000]              
	struct FRotator                                    Rotate;                                           		// 0x030C (0x000C) [0x0000000000000000]              
	float                                              CloudFactor;                                      		// 0x0318 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFirstRun : 1;                                    		// 0x031C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxBloom;                                         		// 0x0320 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x0324 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1515 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Notify ( class UObservable* Src );
	float Degree ( float DG );
	void CalcRotation ( float PartOfDay, float PartOfYear, float SunRiseAt );
	void CalcIntensity ( float PartOfDay, float PartOfYear, float SunRiseAt );
	void eventUpdate ( float PartOfDay, float PartOfYear, float SunRiseAt );
};

UClass* AMortalSunDominantDirectionalLightMovable::pClassPointer = NULL;

// Class NowGame.MortalWeatherFogVolumeSphericalDensityInfo
// 0x0020 (0x0318 - 0x02F8)
class AMortalWeatherFogVolumeSphericalDensityInfo : public AFogVolumeSphericalDensityInfo
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     LocationName;                                     		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UFogVolumeDensityComponent*                  DensityComponentLow;                              		// 0x0308 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UFogVolumeDensityComponent*                  DensityComponentMeduim;                           		// 0x030C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UFogVolumeDensityComponent*                  DensityComponentHigh;                             		// 0x0310 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                LocationNbr;                                      		// 0x0314 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1516 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Notify ( class UObservable* Src );
};

UClass* AMortalWeatherFogVolumeSphericalDensityInfo::pClassPointer = NULL;

// Class NowGame.MortalWeatherPostProcessVolume
// 0x031C (0x0714 - 0x03F8)
class AMortalWeatherPostProcessVolume : public APostProcessVolume
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x03F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                LocationNbr;                                      		// 0x03FC (0x0004) [0x0000000000000000]              
	struct FPostProcessSettings                        SettingsSunshine;                                 		// 0x0400 (0x00C4) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SettingsNormalClouds;                             		// 0x04C4 (0x00C4) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SettingsHeavyClouds;                              		// 0x0588 (0x00C4) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SettingsStormClouds;                              		// 0x064C (0x00C4) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Weather;                                          		// 0x0710 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1517 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void SetSetting ( );
	void ReplaceClouds ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void Notify ( class UObservable* Src );
};

UClass* AMortalWeatherPostProcessVolume::pClassPointer = NULL;

// Class NowGame.Mount_AnimNodeBlendDriverCombat
// 0x0000 (0x015C - 0x015C)
class UMount_AnimNodeBlendDriverCombat : public UAnimNodeBlendByProperty
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

UClass* UMount_AnimNodeBlendDriverCombat::pClassPointer = NULL;

// Class NowGame.Mount_AnimNodeScaleRateBySpeed
// 0x0000 (0x0104 - 0x0104)
class UMount_AnimNodeScaleRateBySpeed : public UAnimNodeScaleRateBySpeed
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

UClass* UMount_AnimNodeScaleRateBySpeed::pClassPointer = NULL;

// Class NowGame.Mount_NowAnimNodeBlendBySpeed
// 0x0000 (0x0174 - 0x0174)
class UMount_NowAnimNodeBlendBySpeed : public UAnimNodeBlendBySpeed
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

UClass* UMount_NowAnimNodeBlendBySpeed::pClassPointer = NULL;

// Class NowGame.MountBrain
// 0x0100 (0x013C - 0x003C)
class UMountBrain : public UObject
{
public:
	class ANowAtlasAvatarAiDynamicMount*               Mount;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    Driver;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FFearTest >                         FearTests;                                        		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEyeTraceLow : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInWater : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bJustDrowned : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDebugTraces : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                EyeTrace;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                LastKnownSpeed;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              SpeedInputTimer;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                SpeedStyle;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              TurboTimer;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              KnockTimer;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              DamageTimer;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              DamageTaken;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              LastDrowningTimer;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              Enc;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              Enc_Mod;                                          		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              Enc_Add;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              TurnInputTimer;                                   		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                TurnStyle;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              NewCurSpeed;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x0090 (0x000C) [0x0000000000000000]              
	float                                              RotationPitch;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              RotationPitchTarget;                              		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              LastRotationPitch;                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              PathBlockedTimer;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              TryThrottleDownTimer;                             		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                stat_Strength;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                stat_Dexterity;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                stat_Constitution;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                stat_Psyche;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                stat_Intelligence;                                		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                Stat_MaxSpeed;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                Stat_MinSpeed;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              Stat_StaminaPct;                                  		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                Stat_Brain;                                       		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              Stat_CorrectMoveTimer;                            		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              Stat_PlayerFear;                                  		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              Stat_Drive;                                       		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              Stat_PanicValueThr;                               		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnTweenTime;                               		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedTweenTime;                              		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              Stat_BreakTweenTime;                              		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnSharpTweenTime;                          		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedSharpTweenTime;                         		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              Stat_BreakSharpTweenTime;                         		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnStepSize;                                		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedStepSize;                               		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              Stat_BreakStepSize;                               		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnSharpStepSize;                           		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedSharpStepSize;                          		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedExecTime;                               		// 0x0110 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnExecTime;                                		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              Stat_BoostSpeed;                                  		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              Stat_BoostDrain;                                  		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              Stat_BoostTimer;                                  		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              Stat_Stamina;                                     		// 0x0124 (0x0004) [0x0000000000000000]              
	float                                              Mod_Sight;                                        		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              Mod_StamPct;                                      		// 0x012C (0x0004) [0x0000000000000000]              
	TArray< struct FMountMoves >                       PendingInput;                                     		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1521 ];

		return pClassPointer;
	};

	class UOnlineSubsystemNowGame* eventGetSubSystem ( );
	bool CheckForPanic ( float PanicValue );
	void eventCalcStats ( );
	void eventdebugLog ( struct FString whatLog );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawHudDebug ( );
	float GetPitchDiff ( );
	void TickDebug ( float DT );
	struct FVector GetDir ( int AddYaw );
	struct FVector GetStartTrace ( );
	void UpdateToRotation ( float FloatDiff );
	void AddDamageTaken ( float Value );
	bool CheckKnockSpeed ( );
	bool CheckHeadUnderWater ( struct FVector AddVect );
	bool DoFearTest ( class AActor* TestActor );
	bool LeaveMountOk ( );
	struct FVector SwimmingCorrect ( struct FVector ATrace );
	void HandlePathBlocked ( struct FVector StartTrace, struct FVector EndTrace, struct FVector HitLocation, struct FVector CrossProduct );
	void TickEyes ( float DT );
	void ClearBrain ( );
	void FullStop ( );
	void PanicStop ( );
	float GetMaxSpeed ( );
	int GetSpeed ( );
	float GetRotationSpeed ( unsigned long bSharp );
	struct FRotator GetDeltaRot ( );
	bool TickHitSomeone ( );
	void TickPitch ( float DT );
	void TryThrottleDown ( );
	void TickCheckStamina ( float DT );
	void TickTurboTimer ( float DT );
	void TickKnockTimer ( float DT );
	void TickDamageTimer ( float DT );
	void TickBody ( float DT );
	void TickInputTimers ( float DT );
	bool CheckSpeedInput ( int NewSpeedStyle );
	bool CheckTurnInput ( int NewTurnStyle );
	int GetTurnAmount ( unsigned long bSharp );
	void GoLeftSharp ( );
	void GoRightSharp ( );
	float CheckNewSpeed ( float SpeedAdd );
	void GoLeft ( float MountTurn );
	void GoRight ( float MountTurn );
	void GoSlowerSharp ( );
	void GoFasterSharp ( );
	void GoSlower ( );
	void GoFaster ( );
	void AddMove ( float Time, float newValue, float TriggerTime, unsigned char MoveType, unsigned char MoveFlag );
	void FillBrain ( float Time, float TriggerTime );
	void RemoveMove ( int WhatMove );
	void UpdateToNewCurSpeed ( float AddSpeed );
	void TriggerMove ( int WhatMove, float DT );
	void TickBrain ( float DT );
	void TickDrowningTimer ( float DT );
	float GetStaminaReGain ( );
	float GetStaminaDrain ( );
	void Tick ( float DT );
	class ANowPawn* GetDriver ( );
	void InitBrain ( class ANowAtlasAvatarAiDynamicMount* NewMount );
	void CalcEnc ( );
	void SendDamageTaken ( );
};

UClass* UMountBrain::pClassPointer = NULL;

// Class NowGame.NewTugSession
// 0x0040 (0x007C - 0x003C)
class UNewTugSession : public UObject
{
public:
	float                                              Tug_SAMPLERES;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              Tug_SESSIONTIME;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              Tug_STEP;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              Tug_FISHSESSIONLENGHT;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              FishTimer;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                FishCounter;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                PC;                                               		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                FC;                                               		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              TotalPlayerTime;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              TotalFishTime;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FCurState >                         PlayerObjects;                                    		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCurState >                         FishObjects;                                      		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1522 ];

		return pClassPointer;
	};

	void AddPlayerAction ( unsigned long bPull, float fLength );
	bool FishUpdate ( float DeltaTime );
	void InitFish ( );
	struct FString CalculateSectionSuccess ( );
	int GetBlockResult ( );
	void GenerateFishData ( float fSessionTime );
	void GenerateNewSession ( );
};

UClass* UNewTugSession::pClassPointer = NULL;

// Class NowGame.NoobHelpManager
// 0x001C (0x0058 - 0x003C)
class UNoobHelpManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    MyPawn;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDirectionLocation;                               		// 0x0044 (0x000C) [0x0000000000000000]              
	unsigned long                                      bRestingHelpShown : 1;                            		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fCheckExtra;                                      		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1523 ];

		return pClassPointer;
	};

	void TookDamageHelp ( );
	void DeathHelp ( );
	void GreyHelp ( );
	void UpdateDirectionHelper ( );
	void eventUpdateNoobHelp ( );
	void InitManager ( );
	bool HasRobe ( );
	bool HasLeather ( );
	int GetNPCD ( );
	int GetNPCC ( );
	int GetNPCB ( );
	int GetNPCA ( );
};

UClass* UNoobHelpManager::pClassPointer = NULL;

// Class NowGame.NowAiEffect
// 0x0024 (0x034C - 0x0328)
class ANowAiEffect : public AProjectile
{
public:
	class UStaticMesh*                                 m_AiStaticMesh;                                   		// 0x0328 (0x0004) [0x0000000000000000]              
	struct FName                                       m_SocketName;                                     		// 0x032C (0x0008) [0x0000000000000000]              
	struct FVector                                     m_SpawnPosOffset;                                 		// 0x0334 (0x000C) [0x0000000000000000]              
	class ANowAtlasAvatarAi*                           m_pOwner;                                         		// 0x0340 (0x0004) [0x0000000000000000]              
	float                                              m_sStaticMeshDrawScale;                           		// 0x0344 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUseForBlocking : 1;                            		// 0x0348 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1524 ];

		return pClassPointer;
	};

	void SetTargetActor ( class AActor* NewActor );
	void SetTargetVect ( struct FVector NewVector );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffect::pClassPointer = NULL;

// Class NowGame.NowAiIdleSpot
// 0x0030 (0x031C - 0x02EC)
class ANowAiIdleSpot : public AActor
{
public:
	struct FRotator                                    m_IdleRotation;                                   		// 0x02EC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fRadius;                                        		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eIdleAnimation;                                 		// 0x02FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_AiEffect;                                       		// 0x0300 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      m_PreviewComp;                                    		// 0x030C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             m_ArrowComp;                                      		// 0x0310 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          m_CylinderComp;                                   		// 0x0314 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UMaterial*                                   m_PreviewMat;                                     		// 0x0318 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1525 ];

		return pClassPointer;
	};

	void UpdateHelpers ( );
};

UClass* ANowAiIdleSpot::pClassPointer = NULL;

// Class NowGame.NowAmbientSoundMovableDayNight
// 0x0010 (0x0308 - 0x02F8)
class ANowAmbientSoundMovableDayNight : public AAmbientSoundMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UAudioComponent*                             AudioComponentDay;                                		// 0x02FC (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioComponentNight;                              		// 0x0300 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	unsigned long                                      IsDay : 1;                                        		// 0x0304 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsDownpour : 1;                                   		// 0x0304 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1526 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void SetDayTime ( );
};

UClass* ANowAmbientSoundMovableDayNight::pClassPointer = NULL;

// Class NowGame.NowAmbientSoundSimpleToggleableDayNight
// 0x0008 (0x0320 - 0x0318)
class ANowAmbientSoundSimpleToggleableDayNight : public AAmbientSoundSimpleToggleable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x0318 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DuringDay : 1;                                    		// 0x031C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DuringNight : 1;                                  		// 0x031C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x031C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsPlaying : 1;                                    		// 0x031C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      DoPlay : 1;                                       		// 0x031C (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1527 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void SetDay ( );
};

UClass* ANowAmbientSoundSimpleToggleableDayNight::pClassPointer = NULL;

// Class NowGame.NowAmbientSunLight
// 0x0030 (0x0324 - 0x02F4)
class ANowAmbientSunLight : public ASkyLightToggleable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              MaxIntensity;                                     		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TwilightIntensity;                                		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightIntensity;                                   		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NyxIntensity;                                     		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DayColor;                                         		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      NightColor;                                       		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultLowerBrightness;                           		// 0x0310 (0x0004) [0x0000000000000000]              
	float                                              CloudFactor;                                      		// 0x0314 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoLightHack : 1;                                 		// 0x0318 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fLastBrightness;                                  		// 0x031C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x0320 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1528 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void UpdateBrightness ( );
	void Update ( float PartOfDay, float PartOfNyxPos, float PartOfYear, float SunRiseAt );
};

UClass* ANowAmbientSunLight::pClassPointer = NULL;

// Class NowGame.NowAnimNodeBlendByHit
// 0x000C (0x0130 - 0x0124)
class UNowAnimNodeBlendByHit : public UAnimNodeBlendList
{
public:
	float                                              LastKnownHp;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatar*                             AtlasOwner;                                       		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              HitBlendTimeLeft;                                 		// 0x012C (0x0004) [0x0000000000000000]              

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

UClass* UNowAnimNodeBlendByHit::pClassPointer = NULL;

// Class NowGame.NowAnimNodeBlendByJumpZ
// 0x0000 (0x0108 - 0x0108)
class UNowAnimNodeBlendByJumpZ : public UAnimNodeBlend
{
public:

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

UClass* UNowAnimNodeBlendByJumpZ::pClassPointer = NULL;

// Class NowGame.NowAnimNodeBlendByMountSpeed
// 0x0000 (0x0174 - 0x0174)
class UNowAnimNodeBlendByMountSpeed : public UAnimNodeBlendBySpeed
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

UClass* UNowAnimNodeBlendByMountSpeed::pClassPointer = NULL;

// Class NowGame.NowAnimNodeBlendPhysics
// 0x0004 (0x00C8 - 0x00C4)
class UNowAnimNodeBlendPhysics : public USkelControlBase
{
public:
	unsigned long                                      bTriggerd : 1;                                    		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 

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

UClass* UNowAnimNodeBlendPhysics::pClassPointer = NULL;

// Class NowGame.NowAnimNodePlayCustomAnim
// 0x0004 (0x012C - 0x0128)
class UNowAnimNodePlayCustomAnim : public UAnimNodePlayCustomAnim
{
public:
	unsigned long                                      bNoMove : 1;                                      		// 0x0128 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

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

UClass* UNowAnimNodePlayCustomAnim::pClassPointer = NULL;

// Class NowGame.NowAnimNodeSequenceBlendByAim
// 0x0010 (0x0168 - 0x0158)
class UNowAnimNodeSequenceBlendByAim : public UAnimNodeAimOffset
{
public:
	float                                              StartingYaw;                                      		// 0x0158 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          TriggerWhenMaxOrMin;                              		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsOn : 1;                                        		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxRotation;                                      		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* UNowAnimNodeSequenceBlendByAim::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatar
// 0x0047 (0x03C4 - 0x037D)
class ANowAtlasAvatar : public AAtlasAvatar
{
public:
	unsigned long                                      bIsMount : 1;                                     		// 0x0380 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanBeGibbed : 1;                                 		// 0x0380 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanBeBase : 1;                                   		// 0x0380 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanDie : 1;                                      		// 0x0380 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIgnoreParamUpdates : 1;                          		// 0x0380 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsNPC : 1;                                       		// 0x0380 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHiddenInEtherworlds : 1;                         		// 0x0380 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bUCUse : 1;                                       		// 0x0380 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsCreated : 1;                                   		// 0x0380 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bLoadUsingManager : 1;                            		// 0x0380 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bCanBeTargeted : 1;                               		// 0x0380 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bHasAi : 1;                                       		// 0x0380 (0x0004) [0x0000000000000000] [0x00000800] 
	class UParticleSystem*                             HitBlood;                                         		// 0x0384 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BlockSparks;                                      		// 0x0388 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodSpray_Head;                                  		// 0x038C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodSpray_Arms;                                  		// 0x0390 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          HitBlendList;                                     		// 0x0394 (0x0004) [0x0000000000000000]              
	class USkelControlBase*                            PhysSkel;                                         		// 0x0398 (0x0004) [0x0000000000000000]              
	class UAtlasAvatarComponent*                       m_AvatarComponent;                                		// 0x039C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       GenericHitBone;                                   		// 0x03A0 (0x0008) [0x0000000000000000]              
	float                                              LastKnownHealth;                                  		// 0x03A8 (0x0004) [0x0000000000000000]              
	int                                                GuildFlag;                                        		// 0x03AC (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerEffectLoc;                                  		// 0x03B0 (0x000C) [0x0000000000000000]              
	class AActor*                                      ServerEffectTarget;                               		// 0x03BC (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x03C0 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1535 ];

		return pClassPointer;
	};

	void eventTriggerProjectileEffect ( class UClass* ProjClass, struct FName BoneName );
	void eventAnimEffectTarget ( class AActor* Target );
	void eventAnimEffectVector ( struct FVector Loc );
	void eventSetTurn ( struct FRotator NewRot );
	class UNowOptionsDatastore* eventGetOptions ( );
	struct FVector GetCollisionExtent ( );
	float GetHeight ( );
	float eventGetCollisionHeight ( );
	float eventGetCollisionRadius ( );
	void eventResurrect ( );
	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventPlayFootStepSound ( int FootDown );
	void eventCheckForDecalSpawn ( float DmgTaken );
	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
	int Degree ( float DG );
	void Tick ( float DeltaTime );
	float GetFloatVal ( struct FString crc );
	void PostBeginPlay ( );
	void eventSetLocalFlag ( int NewFlag );
	int eventGetGuildFlag ( );
	void eventSetPendingHidden ( unsigned long bStart );
	void eventSetPendingGetAndCreateBody ( );
	void eventOpenGFXScene ( int iGfxScene );
	void GetInteractionString ( );
	int GetAiIdentification ( );
	void SetContentInfo ( class UContentInfo* Info );
	void GetAndCreateBody ( unsigned long bReInit );
	void CorrectMyPos ( );
	void GetFlag ( );
	void NewRotation ( );
	struct FString GetAtlasType ( );
	void TeleportPosUpdate ( );
	class UComponent* GetAtlasComponent ( );
	void Use ( );
	void StartPhysDeath ( int lastHitBoneID );
};

UClass* ANowAtlasAvatar::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiSpawner
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarAiSpawner : public ANowAtlasAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1536 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarAiSpawner::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiSpawnerStructure
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarAiSpawnerStructure : public ANowAtlasAvatarAiSpawner
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1537 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarAiSpawnerStructure::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEditorOnly
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarEditorOnly : public ANowAtlasAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1538 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarEditorOnly::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEvent
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarEvent : public ANowAtlasAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1539 ];

		return pClassPointer;
	};

	void eventDrawDebug ( float fRange );
	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
	void PostBeginPlay ( );
	void ShowDebug ( );
};

UClass* ANowAtlasAvatarEvent::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarGuildStone
// 0x000C (0x03D0 - 0x03C4)
class ANowAtlasAvatarGuildStone : public ANowAtlasAvatar
{
public:
	class UAnimNodePlayCustomAnim*                     cacheNodes[ 0x3 ];                                		// 0x03C4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1540 ];

		return pClassPointer;
	};

	void ToggleGuildMainMenu ( );
	void eventUseGuildStone ( );
	void PostBeginPlay ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarGuildStone::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerStructure
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarPlayerStructure : public ANowAtlasAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1541 ];

		return pClassPointer;
	};

	void eventPlayKeySound ( );
	void useKey ( struct FString ItemGuid );
	float getHouseParamFloat ( struct FString ParamName );
	void SetContentInfo ( class UContentInfo* Info );
};

UClass* ANowAtlasAvatarPlayerStructure::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarKeySwitchObject
// 0x0018 (0x03DC - 0x03C4)
class ANowAtlasAvatarKeySwitchObject : public ANowAtlasAvatarPlayerStructure
{
public:
	unsigned long                                      m_bObjectLockState : 1;                           		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UContentInfo_KeySwitchObject*                m_ObjectContentInfo;                              		// 0x03C8 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_InteractionMesh;                                		// 0x03CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowBlockingVolume*                          m_BlockingVolume;                                 		// 0x03D0 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_NowPlayerOwner;                                 		// 0x03D4 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x03D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1542 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
	void initMeshes ( );
	void Init ( );
	bool isTargetingMesh ( class UStaticMeshComponent* Mesh );
	void setBlocking ( unsigned long blocking );
	void eventGameMessage ( unsigned char msg );
	bool eventisTargetingBaseMesh ( );
	bool eventisTargetingInteractionMesh ( );
	void eventsetMesh ( unsigned long bObjectState );
	void useKey ( struct FString ItemGuid );
	void getContentInfo ( );
	bool isKeyMatching ( struct FString ItemGuid );
	bool isObjectLocked ( );
	bool DestroyKey ( );
	bool Update ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarKeySwitchObject::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarKeySwitchObjectChest
// 0x0000 (0x03DC - 0x03DC)
class ANowAtlasAvatarKeySwitchObjectChest : public ANowAtlasAvatarKeySwitchObject
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

	bool eventisTargetingInteractionMesh ( );
	void useKey ( struct FString ItemGuid );
	bool Update ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarKeySwitchObjectChest::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarKeySwitchObjectDoor
// 0x0004 (0x03E0 - 0x03DC)
class ANowAtlasAvatarKeySwitchObjectDoor : public ANowAtlasAvatarKeySwitchObject
{
public:
	unsigned long                                      m_bObjectClosedState : 1;                         		// 0x03DC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1544 ];

		return pClassPointer;
	};

	void useKey ( struct FString ItemGuid );
	bool Update ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarKeySwitchObjectDoor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerHouse
// 0x02D0 (0x0694 - 0x03C4)
class ANowAtlasAvatarPlayerHouse : public ANowAtlasAvatarPlayerStructure
{
public:
	struct FmoduleWorkBench                            m_modWorkBench[ 0x3 ];                            		// 0x03C4 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StartingMeshType;                                 		// 0x03F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_houseTypes[ 0x3 ];                              		// 0x03F8 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_TerrainNames[ 0x5 ];                            		// 0x041C (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FguildStonePos                              m_sGuildStonePosition;                            		// 0x0458 (0x0048) [0x0000000000000000]              
	struct FmoduleWorkBenchPos                         m_moduleWorkBenchPos;                             		// 0x04A0 (0x0018) [0x0000000000000000]              
	unsigned long                                      hasGuildStone : 1;                                		// 0x04B8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInit : 1;                                        		// 0x04B8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHouseCreated : 1;                                		// 0x04B8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_DoorOpen : 1;                                   		// 0x04B8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIsTarget : 1;                                    		// 0x04B8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bIsGhostMode : 1;                                 		// 0x04B8 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	class UStaticMeshComponent*                        m_HouseStatesMeshes[ 0x3 ];                       		// 0x04BC (0x000C) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseSignMesh;                                  		// 0x04C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_TerrainProps;                                   		// 0x04CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseProps;                                     		// 0x04D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_GuildStone;                                     		// 0x04D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FS_doors                                    m_HouseDoorMesh[ 0x5 ];                           		// 0x04D8 (0x0028) [0x0000000000080000]              ( CPF_Component )
	struct FS_House                                    m_HouseMesh[ 0x3 ];                               		// 0x0500 (0x00D8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UNowStaticMeshcomponentDoor*                 m_HouseDoor[ 0x5 ];                               		// 0x05D8 (0x0014) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseBase;                                      		// 0x05EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_Chest;                                          		// 0x05F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UStaticMeshComponent* >              m_Stairs;                                         		// 0x05F4 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UStaticMeshComponent* >              m_HouseSignMeshs;                                 		// 0x0600 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UStaticMeshComponent* >              m_HouseChestMeshs;                                		// 0x060C (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UStaticMeshComponent*                        m_ModuleMesh[ 0x3 ];                              		// 0x0618 (0x000C) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                B;                                                		// 0x0624 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_oldMaterial;                                    		// 0x0628 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_TerrainoldMaterial;                             		// 0x062C (0x0004) [0x0000000000000000]              
	int                                                m_nDoor;                                          		// 0x0630 (0x0004) [0x0000000000000000]              
	int                                                m_CurrentHouseType;                               		// 0x0634 (0x0004) [0x0000000000000000]              
	int                                                m_CurrentHouseTier;                               		// 0x0638 (0x0004) [0x0000000000000000]              
	int                                                m_nNrOfDoors;                                     		// 0x063C (0x0004) [0x0000000000000000]              
	int                                                m_nNrOfStairs;                                    		// 0x0640 (0x0004) [0x0000000000000000]              
	struct FVector                                     Modules;                                          		// 0x0644 (0x000C) [0x0000000000000000]              
	struct FVector                                     moduleDoors;                                      		// 0x0650 (0x000C) [0x0000000000000000]              
	struct FVector                                     moduleStairs;                                     		// 0x065C (0x000C) [0x0000000000000000]              
	int                                                m_oldDoorVaule;                                   		// 0x0668 (0x0004) [0x0000000000000000]              
	int                                                m_rescourses;                                     		// 0x066C (0x0004) [0x0000000000000000]              
	int                                                terrainRand;                                      		// 0x0670 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_HouseStatus;                                    		// 0x0674 (0x0001) [0x0000000000000000]              
	int                                                m_chestTargeted;                                  		// 0x0678 (0x0004) [0x0000000000000000]              
	float                                              m_DecayTimer;                                     		// 0x067C (0x0004) [0x0000000000000000]              
	class UPlayerHouse_ContentInfo*                    m_HouseContentInfo;                               		// 0x0680 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerHouseCollisionDoor*     m_CollisionVolume;                                		// 0x0684 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerHouseCollisionDoor*     m_ModuleCollisionVolume[ 0x3 ];                   		// 0x0688 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1545 ];

		return pClassPointer;
	};

	class UNowGFXHud* eventGetGFX ( );
	void eventimportMeshStrings ( );
	void setDoorCollisionFalse ( );
	void setDoorCollisionTrue ( );
	void PendingHouseBuildingStatus ( );
	void initMovePlayersUpFromGround ( );
	void PostBeginPlay ( );
	void setDoorStartMeshes ( );
	void addMeshes ( );
	void CreateHouse ( int _houseType );
	void CreateSign ( );
	void CreateDoor ( );
	void closeDoor ( );
	void openDoor ( );
	bool targetStables ( struct FVector HitLocation, struct FVector HitNormal, struct FVector EndShot, struct FVector StartShot );
	bool TargetShop ( struct FVector HitLocation, struct FVector HitNormal, struct FVector EndShot, struct FVector StartShot );
	bool hasDeposit ( );
	int eventTargetCraftinTable ( );
	bool eventTargetMesh ( );
	bool eventtoCloseToTheDoor ( );
	class AActor* eventgetMesh ( );
	bool eventsendMessageToHouse ( struct FString Message, struct FString messageTwo );
	bool eventsendReqBToHouse ( struct FString Message );
	void setnonGhostMode ( );
	void setOldMaterial ( );
	void setGhostMode ( );
	bool eventdestroyHousePlan ( );
	void eventsetHouseMesh ( );
	int getDoorUsed ( );
	void eventToggleOpenDoor ( unsigned long doorIsOpen, int door );
	bool isTargetingDoor ( int* door );
	bool eventHelpConstruction ( );
	void stopWorking ( );
	bool eventisTargetingChest ( int* Chest );
	void eventToggleConstructionUI ( );
	void eventToggleSignUI ( );
	void eventToggleStartConstructionUI ( );
	void eventSetHouseRotation ( struct FRotator Rot );
	void eventToggleHouseTradeUI ( );
	void eventToggleeCreateNewGuildUI ( );
	void eventToggleShopOptionsUI ( );
	void eventToggleShopMainUI ( );
	void eventToggleStableUI ( );
	void eventToggleGuildStoneUI ( );
	void eventToggleCraftingUI ( int craftingType );
	bool event_useKey ( struct FString* Target, int* TargetIndex );
	void event_sendMessageToPlayer ( struct FString messsage );
	void setDoorMeshes ( int _houseType, int _tier, int _nrOfDoors );
	void setStairsMeshes ( int _houseType, int _tier, int _nrOfStairs );
	void setChestMesh ( int _houseType, int _tier );
	void setSignMesh ( int _houseType, int _tier );
	bool eventisPlayersInRange ( float Distance );
	void setHouseVolumeMesh ( int _houseType, int _tier );
	void _setModuleMeshes ( int N, struct FString houseType, int Tier, int moduleType );
	void setModuleStairs ( int N, int _houseType, int _tier, int _nrOfStairs );
	void setModuleDoors ( int N, int _houseType, int _tier, int _nrOfDoors );
	void setModuleMeshes ( int _houseType, int _tier );
	void eventDoHouseTrade ( );
	void setHouseMeshes ( int _houseType, int _tier );
	void RemoveHouseMeshes ( );
	void setHouseProps ( int _houseType, int _tier );
	void setDemolishedMesh ( );
	void playHouseDestruction ( );
	void setGuildStoneMesh ( int houseTier );
	void event_getHouseMesh ( );
	void eventsendMessageToClient ( struct FString Message );
	bool eventisPlayerHouseOwner ( );
	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
	void eventsetModWorkBench ( struct FString StaticMesh, struct FString module, int mod, struct FString workBenchType );
	void eventclearWorkBench ( int module );
	bool eventisPlayerInDoor ( );
	struct FString GetGuildTaxName ( );
	int GetGuildTax ( );
	bool IsMyHouse ( );
	int GetHealthMax ( );
	int GetHealth ( );
	int GetMaxPayment ( );
	int GetUpkeepPaidTime ( );
	int GetUpkeepPaid ( );
	int GetUpkeep ( );
	int GetHouseID ( );
	struct FString GetCollisionName ( );
	bool isDepositSharedWithGuild ( );
	struct FString getHouseTax ( );
	struct FString getSupportGuild ( );
	struct FString getGuild ( );
	bool hasVendor ( );
	void SendHouseCommand ( struct FString Cmd );
	class UPlayerHouse_ContentInfo* getPlanSetContentInfo ( );
	class UPlayerHouse_ContentInfo* getContentInfo ( );
	void setModuleWorkBenches ( );
	int getHouseParamInt ( struct FString ParamName );
	struct FString getHouseParamStr ( struct FString ParamName );
	struct FString getHouseUpKeep ( );
	bool isPlayerMemberOfHouseGuild ( );
	bool isPlayerGuildMember ( );
	bool isPlayerInGuild ( );
	int getHitPoints ( );
	bool isHouseAtMaxHP ( );
	bool isChestClosed ( );
	void getItemNameFromGuid ( TArray< struct FString >* constructionMaterials );
	void getResourceFromName ( struct FString Resource, int* Resources, int* Max );
	int getLeatherResources ( int* Resources, int* Max );
	int getStoneResources ( int* Resources, int* Max );
	int getWoodResources ( int* Resources, int* Max, TArray< struct FString >* constructionMaterials );
	void GetBankContentInfo ( int iSlot, class UContentInfo** Info, int* itemQuantity );
	void getHouseMesh ( );
	void startHouseConstruction ( );
	void useKey ( struct FString ItemGuid );
	bool isDoorLocked ( int door );
	bool isDoorOpen ( int door );
	bool getHouseBuildingStatus ( );
	void ToggleDoor ( int doorIsOpen, int door );
	struct FString GetOwner ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
	struct FString GetDisplayName ( );
};

UClass* ANowAtlasAvatarPlayerHouse::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerKeep
// 0x0020 (0x06B4 - 0x0694)
class ANowAtlasAvatarPlayerKeep : public ANowAtlasAvatarPlayerHouse
{
public:
	class UStaticMeshComponent*                        m_PylonMesh;                                      		// 0x0694 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowStaticMeshActorKeepMap*                  WarTable;                                         		// 0x0698 (0x0004) [0x0000000000000000]              
	struct FVector                                     WarTablePos;                                      		// 0x069C (0x000C) [0x0000000000000000]              
	struct FString                                     m_PylonGuid;                                      		// 0x06A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1546 ];

		return pClassPointer;
	};

	bool eventTargetMesh ( );
	void importMeshStrings ( );
	void setHouseVolumeMesh ( int _houseType, int _tier );
	void setGuildStoneMesh ( int houseTier );
	void setHouseMeshes ( int _houseType, int _tier );
	void closeDoor ( );
	void openDoor ( );
	void setDoorMeshes ( int _houseType, int _tier, int _nrOfDoors );
	void setChestMesh ( int _houseType, int _tier );
	void setSignMesh ( int _houseType, int _tier );
	void removeWarTable ( );
	void Destroyed ( );
	void RemoveHouseMeshes ( );
	void setWarTable ( );
	void CreateHouse ( int _houseType );
	void setGhostMode ( );
	struct FString GetLastRoundInfo ( );
	int GetNumberOfNPC ( );
	int GetCPUpkeep ( );
	struct FString GetPylonGuid ( );
	bool GetSlotInfo ( int slotId, struct FString* sDisplayName );
	struct FVector GetKeepSlotOffsetPct ( int slotId );
	struct FVector GetKeepSlotOffset ( int slotId );
};

UClass* ANowAtlasAvatarPlayerKeep::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerPalisadeGate
// 0x0000 (0x06B4 - 0x06B4)
class ANowAtlasAvatarPlayerPalisadeGate : public ANowAtlasAvatarPlayerKeep
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

	void importMeshStrings ( );
	void setHouseVolumeMesh ( int _houseType, int _tier );
	void setHouseMeshes ( int _houseType, int _tier );
	void closeDoor ( );
	void openDoor ( );
	void setDoorMeshes ( int _houseType, int _tier, int _nrOfDoors );
	void setChestMesh ( int _houseType, int _tier );
	void setSignMesh ( int _houseType, int _tier );
	void CreateHouse ( int _houseType );
	void setGhostMode ( );
};

UClass* ANowAtlasAvatarPlayerPalisadeGate::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarWorldBridge
// 0x0015 (0x03D9 - 0x03C4)
class ANowAtlasAvatarWorldBridge : public ANowAtlasAvatarPlayerStructure
{
public:
	struct FString                                     m_BridgeNames;                                    		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_BridgeType;                                     		// 0x03D0 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_HouseInventoryMesh;                             		// 0x03D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      m_BridgeStatus;                                   		// 0x03D8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1548 ];

		return pClassPointer;
	};

	void PendingHouseBuildingStatus ( );
	void initMovePlayersUpFromGround ( );
	void PostBeginPlay ( );
	bool eventsendMessageToBridge ( struct FString Message, struct FString messageTwo );
	void stopWorking ( );
	bool eventHelpConstruction ( );
	bool eventisTargetingInventoryMesh ( );
	void event_sendMessageToPlayer ( struct FString messsage );
	bool eventisPlayersInRange ( float Distance );
	void eventDoHouseTrade ( );
	void setBridgeMeshes ( int _BridgeStatus );
	void event_getBridgeMesh ( );
	void eventsendMessageToClient ( struct FString Message );
	class UWorldConstructable_ContentInfo* GetCI ( );
	struct FString GetObejctContentInfo ( );
	bool getBridgeBuildingStatus ( );
	int getHitPoints ( );
	bool isHouseAtMaxHP ( );
	void getResourceFromName ( struct FString Resource, int* Resources, int* Max );
	void getHouseMesh ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarWorldBridge::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPalisad
// 0x0000 (0x03D9 - 0x03D9)
class ANowAtlasAvatarPalisad : public ANowAtlasAvatarWorldBridge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1549 ];

		return pClassPointer;
	};

	void setBridgeMeshes ( int _BridgeStatus );
	void PendingHouseBuildingStatus ( );
};

UClass* ANowAtlasAvatarPalisad::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarWorldDestructableObject
// 0x0000 (0x03D9 - 0x03D9)
class ANowAtlasAvatarWorldDestructableObject : public ANowAtlasAvatarWorldBridge
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

	void eventplayDestruction ( );
	void getHouseMesh ( );
	bool AtlasUse ( class APlayerController* PC );
	bool IsTarget ( );
};

UClass* ANowAtlasAvatarWorldDestructableObject::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiege
// 0x0004 (0x03C8 - 0x03C4)
class ANowAtlasAvatarSiege : public ANowAtlasAvatar
{
public:
	int                                                pivotState;                                       		// 0x03C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1551 ];

		return pClassPointer;
	};

	void eventResetAnims ( );
	void eventHideBone ( );
	void eventShowBone ( );
	void eventTraceBoneHit ( );
	void eventFire ( );
	void PostBeginPlay ( );
	void DealDamage ( struct FString ActorsToDamage );
	bool SiegeUse ( struct FString Letter );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarSiege::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiegeHailCaster
// 0x000C (0x03D4 - 0x03C8)
class ANowAtlasAvatarSiegeHailCaster : public ANowAtlasAvatarSiege
{
public:
	class UAnimNodePlayCustomAnim*                     cacheNodes[ 0x3 ];                                		// 0x03C8 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1552 ];

		return pClassPointer;
	};

	void eventResetAnims ( );
	void eventHideBone ( );
	void eventShowBone ( );
	void eventTraceBoneHit ( );
	void eventFire ( );
	void PostBeginPlay ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarSiegeHailCaster::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSkM
// 0x0038 (0x03FC - 0x03C4)
class ANowAtlasAvatarSkM : public ANowAtlasAvatar
{
public:
	class UAnimNodeBlendList*                          IsBlockingBlend;                                  		// 0x03C4 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarSkM*                          LastBumped;                                       		// 0x03C8 (0x0004) [0x0000000000000000]              
	class UVectorQueue*                                vPositionQueue;                                   		// 0x03CC (0x0004) [0x0000000000000000]              
	struct FVector                                     PreCorrectMove;                                   		// 0x03D0 (0x000C) [0x0000000000000000]              
	float                                              PreCorrectMoveSpeed;                              		// 0x03DC (0x0004) [0x0000000000000000]              
	float                                              CorrectMoveTimer;                                 		// 0x03E0 (0x0004) [0x0000000000000000]              
	struct FVector                                     vLastRotCross;                                    		// 0x03E4 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLastPosition;                                    		// 0x03F0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1553 ];

		return pClassPointer;
	};

	void RecalcTimeToDestSync ( );
	void SetLocationWithGroundCheck ( struct FVector NewPos );
	void eventSyncToPos ( struct FVector syncPos );
	void DrawDebugInfo ( float DeltaTime );
	void DrawSelfRadius ( float SelfRadius );
	void eventSetNewMoveSpeed ( float NewMoveSpeed );
	void eventSetNewDestPos ( struct FVector NewPos, unsigned long bDrawDebug );
	class UAnimNodeBlendList* eventGetBlockingNode ( );
	void JumpOffAvatar ( );
	void eventBaseChange ( );
	bool eventbIsStatic ( );
	struct FVector TestPos ( struct FVector ExitPos, class ANowAtlasAvatarSkM* Other );
	void Tick ( float DeltaTime );
	void eventSetLocalFlag ( int NewFlag );
	void PostBeginPlay ( );
	bool IsClientOwner ( );
	void TriggerFootNotify ( int FootIndex, float FootForce );
	struct FVector GetTargetPos ( );
	struct FRotator GetTargetDir ( );
	bool HasRotationTarget ( );
	void GetInitMove ( );
};

UClass* ANowAtlasAvatarSkM::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAi
// 0x0210 (0x060C - 0x03FC)
class ANowAtlasAvatarAi : public ANowAtlasAvatarSkM
{
public:
	class USkelControlLookAt*                          LookControl;                                      		// 0x03FC (0x0004) [0x0000000000000000]              
	class AActor*                                      AiTarget;                                         		// 0x0400 (0x0004) [0x0000000000000000]              
	class AActor*                                      AiLookTarget;                                     		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              fUpdateLookAt;                                    		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              fUpdateLookAtDefault;                             		// 0x040C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsAttacking : 1;                                 		// 0x0410 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsAiMoving : 1;                                  		// 0x0410 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDetour : 1;                                      		// 0x0410 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanBlock : 1;                                    		// 0x0410 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bWeaponCanBlock : 1;                              		// 0x0410 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDebugLines : 1;                                  		// 0x0410 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bStopping : 1;                                    		// 0x0410 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bWasMoving : 1;                                   		// 0x0410 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bMoveEaseIn : 1;                                  		// 0x0410 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDebugPos : 1;                                    		// 0x0410 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bCheckForObstacles : 1;                           		// 0x0410 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bIsFemale : 1;                                    		// 0x0410 (0x0004) [0x0000000000000000] [0x00000800] 
	int                                                iAttackIndex;                                     		// 0x0414 (0x0004) [0x0000000000000000]              
	float                                              fAnimLength;                                      		// 0x0418 (0x0004) [0x0000000000000000]              
	float                                              AiRotationRate;                                   		// 0x041C (0x0004) [0x0000000000000000]              
	float                                              fMoveTimer;                                       		// 0x0420 (0x0004) [0x0000000000000000]              
	float                                              fMoveTimerEnd;                                    		// 0x0424 (0x0004) [0x0000000000000000]              
	struct FVector                                     vMoveTarget;                                      		// 0x0428 (0x000C) [0x0000000000000000]              
	struct FVector                                     vFromTarget;                                      		// 0x0434 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLookTarget;                                      		// 0x0440 (0x000C) [0x0000000000000000]              
	float                                              fLastSpeed;                                       		// 0x044C (0x0004) [0x0000000000000000]              
	float                                              fFailMoveTime;                                    		// 0x0450 (0x0004) [0x0000000000000000]              
	float                                              fAverageSpeed;                                    		// 0x0454 (0x0004) [0x0000000000000000]              
	float                                              fSyncTimer;                                       		// 0x0458 (0x0004) [0x0000000000000000]              
	float                                              fMoveSpeed;                                       		// 0x045C (0x0004) [0x0000000000000000]              
	float                                              fWalkSpeed;                                       		// 0x0460 (0x0004) [0x0000000000000000]              
	int                                                CurrentConformTraceInterval;                      		// 0x0464 (0x0004) [0x0000000000000000]              
	int                                                ConformTraceFrameCount;                           		// 0x0468 (0x0004) [0x0000000000000000]              
	int                                                ConformTraceInterval;                             		// 0x046C (0x0004) [0x0000000000000000]              
	float                                              InterpZTranslation;                               		// 0x0470 (0x0004) [0x0000000000000000]              
	float                                              LastGroundZ;                                      		// 0x0474 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastKnownGoodPosition;                            		// 0x0478 (0x000C) [0x0000000000000000]              
	float                                              fDetourAdd;                                       		// 0x0484 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDetourAdd;                                       		// 0x0488 (0x000C) [0x0000000000000000]              
	float                                              fLastMoveUpdate;                                  		// 0x0494 (0x0004) [0x0000000000000000]              
	float                                              fBaseDrawScale;                                   		// 0x0498 (0x0004) [0x0000000000000000]              
	float                                              fLevelScale;                                      		// 0x049C (0x0004) [0x0000000000000000]              
	struct FVector                                     vBaseCollisionSize;                               		// 0x04A0 (0x000C) [0x0000000000000000]              
	float                                              fWeaponScale;                                     		// 0x04AC (0x0004) [0x0000000000000000]              
	int                                                iLevel;                                           		// 0x04B0 (0x0004) [0x0000000000000000]              
	float                                              fTakeDamageTimer;                                 		// 0x04B4 (0x0004) [0x0000000000000000]              
	float                                              fLastBleed;                                       		// 0x04B8 (0x0004) [0x0000000000000000]              
	struct FsPendingMove                               PendingMove;                                      		// 0x04BC (0x0018) [0x0000000000000000]              
	struct FFollowPosStruct                            FollowPos[ 0x10 ];                                		// 0x04D4 (0x0100) [0x0000000000000000]              
	class ANowAiEffectSpawn*                           pSpawnEffect;                                     		// 0x05D4 (0x0004) [0x0000000000000000]              
	unsigned char                                      MoveType;                                         		// 0x05D8 (0x0001) [0x0000000000000000]              
	class UParticleSystem*                             DecapBlood;                                       		// 0x05DC (0x0004) [0x0000000000000000]              
	int                                                iLastHitBone;                                     		// 0x05E0 (0x0004) [0x0000000000000000]              
	struct FRotator                                    InitRotation;                                     		// 0x05E4 (0x000C) [0x0000000000000000]              
	float                                              m_fInterpExp;                                     		// 0x05F0 (0x0004) [0x0000000000000000]              
	struct FString                                     sLastEffectName;                                  		// 0x05F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimNodeBlendList*                          m_AiIdleBlendList;                                		// 0x0600 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendListPlayOnce*                  m_EquipBlend;                                     		// 0x0604 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   pMainMaterial;                                    		// 0x0608 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1554 ];

		return pClassPointer;
	};

	void eventTeleportEffect ( );
	void eventHideMeshes ( unsigned long bHide );
	void PlayEquip ( unsigned long bEquip );
	void eventCheckForIdleSpot ( );
	void eventCreateSyncMove ( );
	class ANowPlayerController* eventGetANowPC ( );
	struct FVector GetExtent ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	float GetDetourValue ( );
	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void CheckForBleed ( float fDeltaTime );
	void eventInitSpawnEffect ( struct FString SpawnEffectName );
	void eventSetHiddenSpawn ( unsigned long bHiddenSpawn );
	void eventStartSpawnAnimation ( unsigned long bSetTimer );
	void eventSetMoveType ( int iNewMoveType );
	void eventAiProjectileEffect ( struct FString sEffectName, struct FVector vVector, class AActor* pTarget, unsigned long bOnlyMesh );
	void eventAiAnim ( int iAnim, struct FVector vVector, class AActor* pTarget, float fNewAnimLength );
	void TickDebug ( float fDeltaTime );
	void eventDestroyed ( );
	void eventTriggerMove ( );
	struct FsPendingMove eventCreatePendingMove ( struct FVector vPos, float fMoveTime, float fTriggerTimer, unsigned long bNewDetour, unsigned long bTriggerd );
	void eventSyncPosition ( );
	void SetAiCollision ( float NewDrawScale );
	void eventSetLevel ( int NewLevel );
	void GetInfo ( TArray< struct FString >* sLogArray );
	void SetLocationWithGroundCheck ( struct FVector NewPos );
	void eventUpdateDamageMaterial ( );
	void eventAiTookDamage ( class AActor* Attacker, float Amount );
	class USkelControlLookAt* GetLookAt ( );
	void TickLookAt ( float fDeltaTime );
	void eventAddStaticMeshObject ( class UStaticMesh* STM, struct FName SocketName );
	void TickTurnTo ( float fDeltaTime );
	void Tick ( float fDeltaTime );
	void eventcacheNodes ( );
	void eventSetAiState ( unsigned char NewState );
	struct FsAiAttackTypes eventCreateAiAttackType ( struct FString sName, int iDps );
	void eventSetLocalFlag ( int NewFlag );
	void eventChangedDisplayName ( );
	void eventStartMaterialDamage ( );
	void eventPendingUpdateAiTarget ( );
	void PostBeginPlay ( );
	struct FString GetDeathEffect ( );
	float GetMoveSpeed ( );
	void AddNewMove ( float newTimer, struct FVector NewTarget );
	bool HasItems ( );
	void GetInitalRotation ( );
	bool IsAi ( );
	void UpdateLevel ( );
	void SetContentInfo ( class UContentInfo* Info );
	int GetPointCost ( );
	int GetLevelLock ( );
	int GetWei ( );
	int GetSiz ( );
	int GetSpe ( );
	int GetInt ( );
	int GetPsy ( );
	int GetCon ( );
	int GetDex ( );
	int GetStr ( );
	int GetHealthMax ( );
	int GetHealth ( );
	int GetLevel ( );
	struct FString GetSkillName ( );
	int GetHunger ( );
	void GetAttackInfo ( TArray< struct FsAiAttackTypes >* vAiAttacks );
	int GetLoyalty ( );
	void SetIdleLook ( );
	float GetCubicSize ( );
	struct FVector GroundCheck ( struct FVector NewPos );
	float GetMoveLength ( );
	void ResetMoveType ( );
	struct FString GetAiGuid ( );
	void StartSpawnEffect ( );
	void UpdateAiTarget ( );
	void GetAndCreateBody ( unsigned long bReInit );
	struct FVector GetServerPos ( );
};

UClass* ANowAtlasAvatarAi::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiDynamic
// 0x0090 (0x069C - 0x060C)
class ANowAtlasAvatarAiDynamic : public ANowAtlasAvatarAi
{
public:
	struct FString                                     DynamicBodyString;                                		// 0x060C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DynamicArmorString;                               		// 0x0618 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DynamicStatString;                                		// 0x0624 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsBodyCreated : 1;                               		// 0x0630 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsArmorCreated : 1;                              		// 0x0630 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGotBags : 1;                                     		// 0x0630 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bMale : 1;                                        		// 0x0630 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bBonesCached : 1;                                 		// 0x0630 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bGotSaddle : 1;                                   		// 0x0630 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bEditHorse : 1;                                   		// 0x0630 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPhysicsOn : 1;                                   		// 0x0630 (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              PetHeight;                                        		// 0x0634 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BodyMaterial;                                     		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   HairMaterial;                                     		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   EyeMaterial;                                      		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           SavedArmorMaterial;                               		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMesh*                               BaseMesh;                                         		// 0x0648 (0x0004) [0x0000000000000000]              
	int                                                attrb_Strength;                                   		// 0x064C (0x0004) [0x0000000000000000]              
	int                                                attrb_Dexterity;                                  		// 0x0650 (0x0004) [0x0000000000000000]              
	int                                                attrb_Constitution;                               		// 0x0654 (0x0004) [0x0000000000000000]              
	int                                                attrb_Psyche;                                     		// 0x0658 (0x0004) [0x0000000000000000]              
	int                                                attrb_Intelligence;                               		// 0x065C (0x0004) [0x0000000000000000]              
	int                                                attrb_Speed;                                      		// 0x0660 (0x0004) [0x0000000000000000]              
	int                                                attrb_Size;                                       		// 0x0664 (0x0004) [0x0000000000000000]              
	int                                                attrb_Weight;                                     		// 0x0668 (0x0004) [0x0000000000000000]              
	TArray< struct FDynamicFeatureBones >              DynamicFeatureBonesList;                          		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDynamicFeatureParams >             DynamicFeatureParamsList;                         		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             FullPhatNames;                                    		// 0x0684 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iDynamicInitState;                                		// 0x0690 (0x0004) [0x0000000000000000]              
	float                                              fInitTimer;                                       		// 0x0694 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               m_RidingInstancePhysAsset;                        		// 0x0698 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1555 ];

		return pClassPointer;
	};

	class ANowPlayerController* eventGetNowPC ( );
	void eventSetDynamicDrawScale ( int NewDrawScale );
	void eventStopPhatSim ( );
	void eventStartPhatSim ( );
	void eventSetFeatureParam ( int FeatureIndex, int ByteValue, float Strength, unsigned long bHair, class UTexture* NewTexture, struct FVector NewColor, class UMaterialInstance* NewMaterial );
	void eventSetBoneParam ( int FeatureIndex, int ByteValue );
	void eventCacheDynamicFeatureBones ( );
	void Tick ( float fDeltaTime );
	void GetInfo ( TArray< struct FString >* sLogArray );
	void eventAddMeToManager ( unsigned long bForceGenerate );
	void eventCreateAndSetMountBrain ( );
	int GetWei ( );
	int GetSiz ( );
	int GetSpe ( );
	int GetInt ( );
	int GetPsy ( );
	int GetCon ( );
	int GetDex ( );
	int GetStr ( );
	void GetItemMods ( );
	void UpdateStats ( );
	void SetContentInfo ( class UContentInfo* Info );
	void SetBodyParam ( int I, int newValue );
	class UMaterialInstance* GetMaterial ( int TxtGroup, int TxtIndex );
	class UTexture* GetTexture ( int TxtGroup, int TxtIndex );
	struct FVector GetLinearColor ( int ColorGroup, int ColorIndex );
	struct FString GetBodyStringAsBinary ( );
	struct FString RecalcStats ( );
	struct FString GetStatString ( );
	struct FString GetArmorString ( );
	struct FString GetBodyString ( );
	void GetAndSetStats ( );
	void GetAndCreateArmor ( );
	void GetAndCreateBody ( unsigned long bReInit );
};

UClass* ANowAtlasAvatarAiDynamic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiDynamicMount
// 0x00D0 (0x076C - 0x069C)
class ANowAtlasAvatarAiDynamicMount : public ANowAtlasAvatarAiDynamic
{
public:
	class ANowPawn*                                    Driver;                                           		// 0x069C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    PetOwner;                                         		// 0x06A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotADriver : 1;                                  		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingRemove : 1;                               		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRidingInstance : 1;                              		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPendingThrowOffAnimation : 1;                    		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bCanCarryEquipment : 1;                           		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDebugDraw : 1;                                   		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPlayEquipSounds : 1;                             		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPlayOnA : 1;                                     		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bConnectionFailed : 1;                            		// 0x06A4 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              fPitchTarget;                                     		// 0x06A8 (0x0004) [0x0000000000000000]              
	int                                                m_MountSpeed;                                     		// 0x06AC (0x0004) [0x0000000000000000]              
	int                                                m_MountBaseSpeed;                                 		// 0x06B0 (0x0004) [0x0000000000000000]              
	int                                                m_MountSpeedMin;                                  		// 0x06B4 (0x0004) [0x0000000000000000]              
	int                                                Throttle;                                         		// 0x06B8 (0x0004) [0x0000000000000000]              
	int                                                TraceType;                                        		// 0x06BC (0x0004) [0x0000000000000000]              
	int                                                RotationTarget;                                   		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              CorrectGoalTimer;                                 		// 0x06C4 (0x0004) [0x0000000000000000]              
	float                                              m_MountJumpZ;                                     		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              m_BaseMountJumpZ;                                 		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              AddThrottleTimer;                                 		// 0x06D0 (0x0004) [0x0000000000000000]              
	float                                              DriverDrawScale;                                  		// 0x06D4 (0x0004) [0x0000000000000000]              
	int                                                MaxStamina;                                       		// 0x06D8 (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     CachedCustomAnim;                                 		// 0x06DC (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     RearAnimNode;                                     		// 0x06E0 (0x0004) [0x0000000000000000]              
	struct FName                                       RidingState;                                      		// 0x06E4 (0x0008) [0x0000000000000000]              
	struct FName                                       WalkingState;                                     		// 0x06EC (0x0008) [0x0000000000000000]              
	struct FName                                       FootSocketNames[ 0x4 ];                           		// 0x06F4 (0x0020) [0x0000000000000000]              
	class UParticleSystemComponent*                    FootParticleSystems[ 0x4 ];                       		// 0x0714 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             FootSoundComponent[ 0x4 ];                        		// 0x0724 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastKnockDown;                                    		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              LastUsedTime;                                     		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              CurrentDriverSkill;                               		// 0x073C (0x0004) [0x0000000000000000]              
	float                                              LastGetDriverSkill;                               		// 0x0740 (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    pPendingDriver;                                   		// 0x0744 (0x0004) [0x0000000000000000]              
	int                                                LastMountStamina;                                 		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              LastFailedMove;                                   		// 0x074C (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             EquipSoundA;                                      		// 0x0750 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             EquipSoundB;                                      		// 0x0754 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimSet*                                    CachedMaleAnimSet;                                		// 0x0758 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    CachedFemaleAnimSet;                              		// 0x075C (0x0004) [0x0000000000000000]              
	float                                              fZTranslation;                                    		// 0x0760 (0x0004) [0x0000000000000000]              
	class UMountBrain*                                 MyBrain;                                          		// 0x0764 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      m_SkelMeshReins;                                  		// 0x0768 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1556 ];

		return pClassPointer;
	};

	void SetHasPhysAnimation ( unsigned long newValue );
	class ANowPlayerController* eventGetNowPC ( );
	bool StopsProjectile ( class AProjectile* P );
	bool IsCombatTarget ( );
	void eventGetAnimNodePointers ( int WhatType, class UAnimNodePlayCustomAnim** AnimNode, class UAnimNodeSequence** AnimSeq );
	void eventSetDynamicDrawScale ( int NewDrawScale );
	void ResetMinorAddAnimation ( );
	void PlayMinorAddAnimation ( struct FName WhatAnim, unsigned long bOverride, float Time );
	void Rear ( );
	float GetMountJumpZ ( );
	float eventGetMinSpeed ( );
	float eventGetMaxSpeed ( );
	void eventSpawnProjectileEffect ( );
	void eventRemoveSpellEffect ( );
	void eventSpawnReleaseSpellEffect ( unsigned long selfTarget );
	void eventMagicFizzle ( );
	void eventMagicSelfRelease ( );
	void eventMagicRelease ( );
	void eventPlayIndexedParticleEffect ( class UAnimNotify_PlayIndexedParticleEffect* AnimNotifyData );
	void eventDriverFellOff ( class ANowPawn* OldDriver );
	void eventRemoveMe ( unsigned long Timer );
	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventCreateReins ( );
	void eventInitFemaleAdditive ( );
	void eventSyncAnimSet ( );
	void eventSyncAnimTree ( );
	class AActor* eventGetDriver ( );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void HitSomeoneTest ( class ANowPawn* Other );
	void eventTookDamage ( float HowMuchDamage, float Total );
	bool eventCheckLastUseTime ( );
	void eventWaitForRemount ( );
	void eventPlayClientThrowOffAnimation ( );
	int GetSpeed ( );
	void AddFullLTurn ( );
	void AddFullRTurn ( );
	void AddLTurn ( );
	void AddRTurn ( );
	void DoBreak ( );
	void MaxThrottle ( );
	void RemoveThrottle ( );
	void AddThrottle ( );
	void FailedMove ( );
	void eventdebugLog ( struct FString whatLog );
	void eventMountDied ( );
	bool eventCheckPlayerOverweight ( class ANowPawn* WhatPawn );
	void eventDoMountAnimations ( unsigned long bMountOn, unsigned long bIgnoreAnim );
	bool eventTestDriverFallOffRears ( );
	bool eventTestDriverFallOffBasic ( float SkillCheckVs );
	void eventUpdateAimOffset ( );
	void eventUpdateSpeeds ( );
	void Tick ( float fDeltaTime );
	void SetThrottle ( int NewThrottle );
	void ForceUnHide ( );
	void CheckForShow ( );
	void CheckForceRemove ( );
	void eventMoveToGround ( );
	void eventCreateAndSetMountBrain ( );
	void DoPlayExtraSound ( class USoundCue* WhatSound );
	void eventEquipmentMove ( );
	void eventEquipmentIdle ( );
	void eventEquipmentSaddle ( );
	void eventEquipmentMount2 ( );
	void eventEquipmentMount1 ( );
	void eventDoFootNotify ( int Foot, float FootForce );
	void eventReInitSockets ( );
	void eventSetTraceTime ( float NewLength, float NewMiddle, unsigned long bCombatMove );
	void CheckConnection ( );
	void DoFallPrediction ( float DeltaTime );
	void PostBeginPlay ( );
	bool HasItems ( );
	void GetAndSetStats ( );
	int GetHealthMax ( );
	int GetHealth ( );
	int GetLevel ( );
	void CreateRidingInstance ( );
	void CreateRidingInstanceFromString ( struct FString sContentInfo, class ANowPawn* pNewDriver );
	void TriggerFootNotify ( int FootIndex, float FootForce );
	struct FString GetStatString ( );
	struct FString GetArmorString ( );
	struct FString GetBodyString ( );
	bool GotServerConnection ( );
	void SetContentInfo ( class UContentInfo* Info );
	void SetContentInfoFromString ( struct FString ContentClassString );
	bool RemoveDriver ( );
	int UpdateCurrentSkillLevel ( );
	void TeleportPosUpdate ( );
	bool DriverIsKnockedDown ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
	void GetItemMods ( );
	void UpdateStats ( );
	class ANowPlayerController* GetNowPlayerController ( );
	void ResetThrottle ( );
	void ResetAi ( );
	bool DetachDriver ( );
	bool AttachDriver ( class AActor* WhatDriver, unsigned long bInit );
	struct FString GetDisplayName ( );
};

UClass* ANowAtlasAvatarAiDynamicMount::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiNPC
// 0x0030 (0x063C - 0x060C)
class ANowAtlasAvatarAiNPC : public ANowAtlasAvatarAi
{
public:
	unsigned long                                      bUseLookAt : 1;                                   		// 0x060C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInEtherWorlds : 1;                               		// 0x060C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHoldingObject : 1;                               		// 0x060C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LookAtTimer;                                      		// 0x0610 (0x0004) [0x0000000000000000]              
	float                                              NextLookAtTimer;                                  		// 0x0614 (0x0004) [0x0000000000000000]              
	struct FRotator                                    PendingRotation;                                  		// 0x0618 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TweenStartRot;                                    		// 0x0624 (0x000C) [0x0000000000000000]              
	float                                              fTweenTurn;                                       		// 0x0630 (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    LookPawn;                                         		// 0x0634 (0x0004) [0x0000000000000000]              
	float                                              fCheckForIdleSpot;                                		// 0x0638 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1557 ];

		return pClassPointer;
	};

	void eventResurrect ( );
	bool tcpReceive ( struct FString Text );
	void eventTurnTo ( class APawn* WhatPawn );
	void TweenTurn ( float DT );
	void ResetRotation ( );
	void eventSetInEtherWorlds ( unsigned long newValue );
	void TickNpcLookAt ( float DT );
	void Tick ( float fDeltaTime );
	void eventSetAiState ( unsigned char NewState );
	bool CheckForLookAtTarget ( class ANowPawn* ForPawn );
	void eventAddStaticMeshObject ( class UStaticMesh* STM, struct FName SocketName );
	void PostBeginPlay ( );
	int GetAiIdentification ( );
	void GetInteractionString ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarAiNPC::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiNPCTownCrier
// 0x0010 (0x064C - 0x063C)
class ANowAtlasAvatarAiNPCTownCrier : public ANowAtlasAvatarAiNPC
{
public:
	TArray< struct FString >                           vTalks;                                           		// 0x063C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iCurTalk;                                         		// 0x0648 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1558 ];

		return pClassPointer;
	};

	void eventTalk ( );
	bool tcpReceive ( struct FString sString );
	void InitTownCrier ( );
	void PostBeginPlay ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarAiNPCTownCrier::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarGolem
// 0x0004 (0x0400 - 0x03FC)
class ANowAtlasAvatarGolem : public ANowAtlasAvatarSkM
{
public:
	class UPointLightComponent*                        effectLight;                                      		// 0x03FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1559 ];

		return pClassPointer;
	};

	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventSetLightLevel ( int iNewLevel );
	void eventFaceRotationTarget ( );
	class UMaterialInstanceConstant* eventGetDynMat ( );
	void SetGolemLevel ( int iNewLevel );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventSmallSweepEffect ( );
	void eventSweepEffect ( );
	void eventStompEffect ( );
	void eventGroundShakeEffect ( );
	void DrawDebugRadii ( struct FVector vPos, float fRadii, int Red, int Green, int Blue );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarGolem::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpc
// 0x0048 (0x0444 - 0x03FC)
class ANowAtlasAvatarNpc : public ANowAtlasAvatarSkM
{
public:
	unsigned long                                      bFindLookAtPoint : 1;                             		// 0x03FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTurnToOnUse : 1;                                 		// 0x03FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInEtherWorlds : 1;                               		// 0x03FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseLookAt : 1;                                   		// 0x03FC (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                iPositionCorrectionTries;                         		// 0x0400 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDefaultPos;                                      		// 0x0404 (0x000C) [0x0000000000000000]              
	struct FName                                       UseAnimation;                                     		// 0x0410 (0x0008) [0x0000000000000000]              
	class USkelControlLookAt*                          LookControl;                                      		// 0x0418 (0x0004) [0x0000000000000000]              
	class APawn*                                       LookPawn;                                         		// 0x041C (0x0004) [0x0000000000000000]              
	float                                              LookAtTimer;                                      		// 0x0420 (0x0004) [0x0000000000000000]              
	float                                              NextLookAtTimer;                                  		// 0x0424 (0x0004) [0x0000000000000000]              
	struct FRotator                                    PendingRotation;                                  		// 0x0428 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TweenStartRot;                                    		// 0x0434 (0x000C) [0x0000000000000000]              
	float                                              fTweenTurn;                                       		// 0x0440 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1560 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	bool AtlasUse ( class APlayerController* PC );
	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
	void eventTurnTo ( class APawn* WhatPawn );
	void TweenTurn ( float DT );
	void FindLookAtPoint ( );
	bool CanOpenScene ( class ANowPlayerController* NPC );
	void eventOpenUserGFXInterface ( int OpenSceneIndex );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
	void eventSetTurnTo ( unsigned long newValue );
	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventAddStaticMeshObject ( class UStaticMesh* STM, struct FName SocketName );
	void eventSetInEtherWorlds ( unsigned long newValue );
	void TickLookAt ( float DT );
	bool CheckForLookAtTarget ( class APawn* ForPawn );
};

UClass* ANowAtlasAvatarNpc::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarHouseBankerNpc
// 0x0004 (0x0448 - 0x0444)
class ANowAtlasAvatarHouseBankerNpc : public ANowAtlasAvatarNpc
{
public:
	class ANowAtlasAvatarPlayerHouse*                  m_pHouse;                                         		// 0x0444 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1561 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
	void setHouse ( class ANowAtlasAvatarPlayerHouse* house );
	void findHouse ( );
	bool IsMyHouse ( class ANowAtlasAvatarPlayerHouse* house );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarHouseBankerNpc::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcHelper
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarNpcHelper : public ANowAtlasAvatarNpc
{
public:

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

UClass* ANowAtlasAvatarNpcHelper::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcLibrary
// 0x000C (0x0450 - 0x0444)
class ANowAtlasAvatarNpcLibrary : public ANowAtlasAvatarNpc
{
public:
	struct FString                                     SceneStr;                                         		// 0x0444 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1563 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	void AssignSceneStr ( );
};

UClass* ANowAtlasAvatarNpcLibrary::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcMailRecive
// 0x0010 (0x0454 - 0x0444)
class ANowAtlasAvatarNpcMailRecive : public ANowAtlasAvatarNpc
{
public:
	struct FString                                     SceneStr;                                         		// 0x0444 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x0450 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1564 ];

		return pClassPointer;
	};

	void eventOpenMail ( );
	bool AtlasUse ( class APlayerController* PC );
	int GetMailIndex ( );
};

UClass* ANowAtlasAvatarNpcMailRecive::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcNoMove
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarNpcNoMove : public ANowAtlasAvatarNpc
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

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcNoMove::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcQuestGiver
// 0x0010 (0x0454 - 0x0444)
class ANowAtlasAvatarNpcQuestGiver : public ANowAtlasAvatarNpc
{
public:
	struct FString                                     SceneStr;                                         		// 0x0444 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x0450 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1566 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcQuestGiver::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcTalker
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarNpcTalker : public ANowAtlasAvatarNpc
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

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcTalker::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcVendor
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarNpcVendor : public ANowAtlasAvatarNpc
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

	bool CheckUseDist ( );
	void OpenScene ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcVendor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcTutorialTrade
// 0x0004 (0x0448 - 0x0444)
class ANowAtlasAvatarNpcTutorialTrade : public ANowAtlasAvatarNpcVendor
{
public:
	class UContentInfo_NpcTutorial*                    ContentInfo;                                      		// 0x0444 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1569 ];

		return pClassPointer;
	};

	void openVendorGUI ( );
	void OpenScene ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcTutorialTrade::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerVendor
// 0x0004 (0x0448 - 0x0444)
class ANowAtlasAvatarPlayerVendor : public ANowAtlasAvatarNpc
{
public:
	class ANowAtlasAvatar*                             m_pVendor;                                        		// 0x0444 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1570 ];

		return pClassPointer;
	};

	void FixMyPosition ( );
	class ANowAtlasAvatar* eventgetVendor ( );
	bool eventsendMessageToVendor ( struct FString Message );
	void eventOpenUserInterface ( struct FString OpenScene );
	void PostBeginPlay ( );
	void Use ( );
};

UClass* ANowAtlasAvatarPlayerVendor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTellUse
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarTellUse : public ANowAtlasAvatarNpc
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1571 ];

		return pClassPointer;
	};

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarTellUse::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTellUseNpc
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarTellUseNpc : public ANowAtlasAvatarTellUse
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1572 ];

		return pClassPointer;
	};

	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
};

UClass* ANowAtlasAvatarTellUseNpc::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarStable
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarStable : public ANowAtlasAvatar
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

	void eventToggleStableUI ( );
	bool eventtargetStables ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarStable::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarStM
// 0x0024 (0x03E8 - 0x03C4)
class ANowAtlasAvatarStM : public ANowAtlasAvatar
{
public:
	struct FString                                     Type;                                             		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vUseSkillName;                                    		// 0x03D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTargetName;                                      		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1574 ];

		return pClassPointer;
	};

	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	bool eventbIsStatic ( );
};

UClass* ANowAtlasAvatarStM::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarBuildAvatar
// 0x0000 (0x03E8 - 0x03E8)
class ANowAtlasAvatarBuildAvatar : public ANowAtlasAvatarStM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1575 ];

		return pClassPointer;
	};

	bool eventbIsStatic ( );
	void PostBeginPlay ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarBuildAvatar::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPylon
// 0x008C (0x0474 - 0x03E8)
class ANowAtlasAvatarPylon : public ANowAtlasAvatarBuildAvatar
{
public:
	int                                                Tier;                                             		// 0x03E8 (0x0004) [0x0000000000000000]              
	float                                              Aoe;                                              		// 0x03EC (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorLadder*                   Ladders[ 0x4 ];                                   		// 0x03F0 (0x0010) [0x0000000000000000]              
	struct FVector                                     LadderPos[ 0x4 ];                                 		// 0x0400 (0x0030) [0x0000000000000000]              
	class UStaticMesh*                                 StaticMeshArray[ 0x5 ];                           		// 0x0430 (0x0014) [0x0000000000000000]              
	class UFracturedStaticMesh*                        StaticMeshFracturedArray[ 0x3 ];                  		// 0x0444 (0x000C) [0x0000000000000000]              
	struct FVector                                     PylonTopLoc;                                      		// 0x0450 (0x000C) [0x0000000000000000]              
	float                                              fCreateTimer;                                     		// 0x045C (0x0004) [0x0000000000000000]              
	float                                              fHitEffectCounter;                                		// 0x0460 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_StaticMeshSign;                                 		// 0x0464 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     m_PylonGuid;                                      		// 0x0468 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1576 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventDustEffect ( );
	void eventSpawnFracture ( );
	void eventSetTier ( int NewTier, unsigned long bIgnoreEffects );
	void eventTowerDestroyed ( );
	void eventChangedAoe ( );
	void eventSetMaterialShow ( int Slot, unsigned long bOn );
	void CreateLadders ( );
	void eventPlayHitEffect ( float HpChange );
	void PostBeginPlay ( );
	bool WasJustCreated ( );
	bool eventUsedSign ( class APlayerController* PC );
	struct FString GetLastRoundInfo ( );
	struct FString GetGuildName ( );
	struct FString GetPylonGuid ( );
	bool AtlasUse ( class APlayerController* PC );
	void InitPylon ( );
};

UClass* ANowAtlasAvatarPylon::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarDebugBox
// 0x0000 (0x03E8 - 0x03E8)
class ANowAtlasAvatarDebugBox : public ANowAtlasAvatarStM
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

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarDebugBox::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarGameBoard
// 0x0000 (0x03E8 - 0x03E8)
class ANowAtlasAvatarGameBoard : public ANowAtlasAvatarStM
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

	void eventOpenUserInterface ( struct FString OpenScene );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarGameBoard::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcStatic
// 0x0000 (0x03E8 - 0x03E8)
class ANowAtlasAvatarNpcStatic : public ANowAtlasAvatarStM
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

	void eventOpenUserInterface ( struct FString OpenScene );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcStatic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcMailSend
// 0x0010 (0x03F8 - 0x03E8)
class ANowAtlasAvatarNpcMailSend : public ANowAtlasAvatarNpcStatic
{
public:
	struct FString                                     SceneStr;                                         		// 0x03E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x03F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1580 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	int GetMailIndex ( );
};

UClass* ANowAtlasAvatarNpcMailSend::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPhysicalSpawner
// 0x0004 (0x03EC - 0x03E8)
class ANowAtlasAvatarPhysicalSpawner : public ANowAtlasAvatarStM
{
public:
	class UStaticMeshComponent*                        m_StaticMeshDead;                                 		// 0x03E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1581 ];

		return pClassPointer;
	};

	void eventSetAliveState ( unsigned long bAlive );
	void SetContentInfo ( class UContentInfo* Info );
};

UClass* ANowAtlasAvatarPhysicalSpawner::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPickable
// 0x0004 (0x03EC - 0x03E8)
class ANowAtlasAvatarPickable : public ANowAtlasAvatarStM
{
public:
	class UStaticMeshComponent*                        m_StaticMeshB;                                    		// 0x03E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1582 ];

		return pClassPointer;
	};

	bool Gather ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarPickable::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiegeWeapon
// 0x0044 (0x042C - 0x03E8)
class ANowAtlasAvatarSiegeWeapon : public ANowAtlasAvatarStM
{
public:
	int                                                CurState;                                         		// 0x03E8 (0x0004) [0x0000000000000000]              
	int                                                NrOfStateS;                                       		// 0x03EC (0x0004) [0x0000000000000000]              
	float                                              projSpeed;                                        		// 0x03F0 (0x0004) [0x0000000000000000]              
	struct FString                                     projMesh;                                         		// 0x03F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      projArch : 1;                                     		// 0x0400 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGotInit : 1;                                     		// 0x0400 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                projRange;                                        		// 0x0404 (0x0004) [0x0000000000000000]              
	struct FRotator                                    PendingRotation;                                  		// 0x0408 (0x000C) [0x0000000000000000]              
	float                                              DoingPendRotation;                                		// 0x0414 (0x0004) [0x0000000000000000]              
	int                                                CurRotateState;                                   		// 0x0418 (0x0004) [0x0000000000000000]              
	TArray< class USkeletalMeshSocket* >               TraceSockets;                                     		// 0x041C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMeshSocket*                         EndSocket;                                        		// 0x0428 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1583 ];

		return pClassPointer;
	};

	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventTraceBoneHit ( );
	void eventFire ( struct FVector HitLoc );
	int FindClosestSocket ( struct FVector HitLoc );
	void DoFireTrace ( );
	void eventFindAndSetSockets ( );
	bool eventbIsStatic ( );
	void eventSetNewState ( int NewState, unsigned long IsInit );
	void Tick ( float DT );
	void eventRotateState ( int NewRotState );
	void FixupLocation ( );
	void PostBeginPlay ( );
	void DoFire ( struct FVector Hit, class APlayerController* PC );
	void GetState ( );
	void Load ( class APlayerController* PC );
	void ChangeState ( int NewState, class APlayerController* PC );
	void TurnLeft ( class APlayerController* PC );
	void TurnRight ( class APlayerController* PC );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarSiegeWeapon::pClassPointer = NULL;

// Class NowGame.NowLootObject
// 0x0000 (0x03E8 - 0x03E8)
class ANowLootObject : public ANowAtlasAvatarStM
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

	void eventSetLocalFlag ( int NewFlag );
	void FindGoodSpot ( struct FVector StartLoc, int iter );
	void PostBeginPlay ( );
	bool IsClientOwner ( );
	bool AtlasUse ( class APlayerController* PC );
	bool AtlasUnSelect ( );
	bool AtlasSelect ( );
	bool IsTarget ( );
};

UClass* ANowLootObject::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmitter
// 0x0014 (0x03FC - 0x03E8)
class ANowStaticMeshActorEmitter : public ANowAtlasAvatarStM
{
public:
	struct FColor                                      LightColor;                                       		// 0x03E8 (0x0004) [0x0000000000000000]              
	float                                              LightRadius;                                      		// 0x03EC (0x0004) [0x0000000000000000]              
	class AEmitter*                                    effectEmitter;                                    		// 0x03F0 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        effectLight;                                      		// 0x03F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMesh*                                 pFractureMesh;                                    		// 0x03F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1585 ];

		return pClassPointer;
	};

	void eventSpawnCorpse ( struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventCreateEmitter ( );
	bool AtlasUse ( class APlayerController* PC );
	void SetContentInfo ( class UContentInfo* Info );
	void NowSetStaticMeshes ( class UStaticMesh* A );
};

UClass* ANowStaticMeshActorEmitter::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerHouseCollisionDoor
// 0x001C (0x0308 - 0x02EC)
class ANowAtlasAvatarPlayerHouseCollisionDoor : public AActor
{
public:
	class ANowAtlasAvatarPlayerHouse*                  m_MyPwner;                                        		// 0x02EC (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_CollisionVolume;                                		// 0x02F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      m_playerIsInHouse : 1;                            		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      m_ClientActor;                                    		// 0x02F8 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_vPlayersInHouse;                                		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1586 ];

		return pClassPointer;
	};

	void setMyPowner ( class ANowAtlasAvatarPlayerHouse* pwnder );
	void eventUnTouch ( class AActor* Other );
	void enterHouse ( );
	void enterVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	bool eventsendMessageToHouse ( struct FString Message, struct FString messageTwo );
	bool isPlayerInHouse ( class AActor* Player );
	void getClientActor ( );
	bool isHouseLocked ( );
	bool isPlayerFriend ( class AActor* Player );
};

UClass* ANowAtlasAvatarPlayerHouseCollisionDoor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarZoneBrain
// 0x0000 (0x037D - 0x037D)
class ANowAtlasAvatarZoneBrain : public AAtlasAvatar
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

UClass* ANowAtlasAvatarZoneBrain::pClassPointer = NULL;

// Class NowGame.NowAvatarManager
// 0x0024 (0x0060 - 0x003C)
class UNowAvatarManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class ANowAtlasAvatar* >                   AvatarUpdateList;                                 		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DetailRange;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              GenerateTimer;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortDel__Delegate;                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1588 ];

		return pClassPointer;
	};

	int SortDel ( class AActor* A, class AActor* B );
	void TickDetail ( );
	void OneSecTick ( );
	void TickManager ( );
	void AddToManager ( class ANowAtlasAvatar* NewActor, unsigned long bForceGenerate );
	void eventSetDetailLevel ( int NewLevel );
	void UpdateDetailLevel ( class ANowAtlasAvatar* pActor, int NewLevel );
	void InitManager ( );
	void GetIniInfo ( );
};

UClass* UNowAvatarManager::pClassPointer = NULL;

// Class NowGame.NowDirectionalSunLight
// 0x001C (0x0310 - 0x02F4)
class ANowDirectionalSunLight : public ADirectionalLight
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              YawOffset;                                        		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxIntensity;                                     		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotate;                                           		// 0x0300 (0x000C) [0x0000000000000000]              
	float                                              CloudFactor;                                      		// 0x030C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1589 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Notify ( class UObservable* Src );
	float Degree ( float DG );
	void eventUpdate ( float PartOfDay, float PartOfNyxMonth, float PartOfYear, float SunRiseAt );
};

UClass* ANowDirectionalSunLight::pClassPointer = NULL;

// Class NowGame.NowEmitterDayNight
// 0x0008 (0x0300 - 0x02F8)
class ANowEmitterDayNight : public AEmitter
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DayOn : 1;                                        		// 0x02FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      NightOn : 1;                                      		// 0x02FC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x02FC (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1590 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void TurnOnEmitter ( );
};

UClass* ANowEmitterDayNight::pClassPointer = NULL;

// Class NowGame.NowEntryDatastore
// 0x0138 (0x01B0 - 0x0078)
class UNowEntryDatastore : public UUIDataStore
{
public:
	struct FString                                     PlayerName;                                       		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerSurname;                                    		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     fuyou;                                            		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Clade;                                            		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                MainRace;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                Blood;                                            		// 0x00A4 (0x0004) [0x0000000000000000]              
	TArray< int >                                      BloodMix;                                         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Relations[ 0x8 ];                                 		// 0x00B4 (0x0020) [0x0000000000000000]              
	int                                                RelationSlot;                                     		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                Template;                                         		// 0x00D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      FeatureValueChanged : 1;                          		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Caps[ 0x7 ];                                      		// 0x00E0 (0x001C) [0x0000000000000000]              
	struct FString                                     sLoginName;                                       		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLoginPassword;                                   		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Gender;                                           		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                Family;                                           		// 0x0118 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RaceValues;                                       		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedRace;                                     		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                StartLocIndex;                                    		// 0x012C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           GenderArray;                                      		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FamilyArray;                                      		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           RaceArray;                                        		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           TattoosArray;                                     		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMorphs >                           MorphValues;                                      		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Face;                                             		// 0x016C (0x0004) [0x0000000000000000]              
	int                                                Skin;                                             		// 0x0170 (0x0004) [0x0000000000000000]              
	int                                                Age;                                              		// 0x0174 (0x0004) [0x0000000000000000]              
	int                                                HairColor;                                        		// 0x0178 (0x0004) [0x0000000000000000]              
	int                                                HairStyle;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                FacialStyle;                                      		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                Tattoo;                                           		// 0x0184 (0x0004) [0x0000000000000000]              
	int                                                Size;                                             		// 0x0188 (0x0004) [0x0000000000000000]              
	int                                                SizeMin;                                          		// 0x018C (0x0004) [0x0000000000000000]              
	int                                                SizeMax;                                          		// 0x0190 (0x0004) [0x0000000000000000]              
	int                                                SizeOffset;                                       		// 0x0194 (0x0004) [0x0000000000000000]              
	int                                                Strength;                                         		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                Dexterity;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                Intelligence;                                     		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                Psyche;                                           		// 0x01A4 (0x0004) [0x0000000000000000]              
	int                                                Constitution;                                     		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                PointPool;                                        		// 0x01AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1591 ];

		return pClassPointer;
	};

	float eventGetSize ( );
	bool eventGetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue );
	void SetBlood ( int Value );
	void ClearAttributes ( );
	void ClearFeatures ( );
	void ClearRaceValues ( );
	void ClearCreation ( );
	bool eventIsBloodDone ( );
	int eventGetClientValue ( );
	void ModifyStat ( int stat, int Value );
	int CalcMaxWeight ( );
	int CalcMaxSP ( );
	int CalcMaxMP ( );
	int CalcMaxHP ( );
	float CalcDamageBonusPct ( );
	float CalcDamageBonus ( );
	void ClearRelations ( );
	void MeshMerge ( class ANowSkeletalMeshActor* MeshActor );
	void UpdateCharacterData ( );
	void CalculateTree ( int Slot );
	int NowClamp ( int Value, int Min, int Max );
};

UClass* UNowEntryDatastore::pClassPointer = NULL;

// Class NowGame.NowGFXHud
// 0x00FC (0x0138 - 0x003C)
class UNowGFXHud : public UObject
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	class UNowGFXHudScene*                             GFXHudScene;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	class UClass*                                      GFXScenesHudClass;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	class UNowGFXScene*                                GFXScenes[ 0x1A ];                                		// 0x0048 (0x0068) [0x0000000000000000]              
	class UClass*                                      GFXScenesClasses[ 0x1A ];                         		// 0x00B0 (0x0068) [0x0000000000000000]              
	int                                                NumScenes;                                        		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              dTime;                                            		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              closeTimer;                                       		// 0x0120 (0x0004) [0x0000000000000000]              
	class UNowGFXScene*                                m_pLockpicking;                                   		// 0x0124 (0x0004) [0x0000000000000000]              
	unsigned char                                      TrackedUI;                                        		// 0x0128 (0x0001) [0x0000000000000000]              
	struct FVector                                     m_vTrackUiLocation;                               		// 0x012C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1592 ];

		return pClassPointer;
	};

	bool CloseStuff ( );
	bool NumberPressed ( int iNr );
	void GFXHudTick ( class UCanvas* C );
	void OpenGuildMenu ( );
	void openFriendList ( );
	void ToggleCompass ( );
	void ToggleTutorials ( );
	void Tick ( );
	void ShowFlashMouse ( unsigned long bShow );
	void SetAllScenesFocus ( unsigned long NewFocus );
	bool IsASceneOpen ( );
	void eventGFXClose ( int WhatIndex );
	void eventGFXOpen ( int WhatIndex, int Param );
	void eventsetTrackedUI ( unsigned char WhatIndex );
	void OpenGFXHudScene ( );
	void Init ( class APlayerController* Player );
	void RecieveGameEvent ( int eEvent, int pieceType, int pieceID, int XPos, int YPos, struct FString avatarName );
	void updatePetitionToGUI ( struct FString petitionUser, struct FString entirePetition );
	void addPetitionToGUI ( struct FString petition );
	void removePetitionFromGUI ( struct FString petitionToRemove );
	void toggleGMGUI ( );
	void initGMGUI ( );
	bool eventrightClickUse ( int bag, int Slot );
};

UClass* UNowGFXHud::pClassPointer = NULL;

// Class NowGame.NowGFXScene
// 0x002C (0x019C - 0x0170)
class UNowGFXScene : public UGFxMoviePlayer
{
public:
	int                                                NUM_TRADEITEMS;                                   		// 0x0170 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x0174 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     OnlineSub;                                        		// 0x0178 (0x0004) [0x0000000000000000]              
	class UNowGFXHud*                                  MyGFXHud;                                         		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                iEnum;                                            		// 0x0180 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0184 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseTick : 1;                                     		// 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreAllInput : 1;                              		// 0x0190 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDontFocusOnOpen : 1;                             		// 0x0190 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseNumberInput : 1;                              		// 0x0190 (0x0004) [0x0000000000000000] [0x00000008] 
	class USoundCue*                                   OpenSceneSound;                                   		// 0x0194 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CloseSceneSound;                                  		// 0x0198 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1593 ];

		return pClassPointer;
	};

	void gfxTick ( float dTime );
	void MODebug ( struct FString msg );
	bool eventrightClickUse ( int bag, int Slot );
	void EscapePressed ( );
	void NumberPressed ( int iNr );
	void GFXClose ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void getTradeItems ( TArray< struct FItemOption >* vItems );
};

UClass* UNowGFXScene::pClassPointer = NULL;

// Class NowGame.NowGFXHudScene
// 0x081C (0x09B8 - 0x019C)
class UNowGFXHudScene : public UNowGFXScene
{
public:
	class ANowPawn*                                    MyPawn;                                           		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                xScreen;                                          		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                yScreen;                                          		// 0x01A4 (0x0004) [0x0000000000000000]              
	float                                              fResetSkillTrack;                                 		// 0x01A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisableTutorials : 1;                            		// 0x01AC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bHasMouseFocus : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasKeyFocus : 1;                                 		// 0x01AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEatNumbers : 1;                                  		// 0x01AC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      debug_NoSkillUpdates : 1;                         		// 0x01AC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      debug_NoItemUpdates : 1;                          		// 0x01AC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      debug_NoFrameUpdates : 1;                         		// 0x01AC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      debug_NoChatUpdates : 1;                          		// 0x01AC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bShopItemsInit : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_FishingReady : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_bCookingHeat : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bInventoryInit : 1;                               		// 0x01AC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bGuildSceneOpen : 1;                              		// 0x01AC (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bShowingPaperdoll : 1;                            		// 0x01AC (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bHelpRequest : 1;                                 		// 0x01AC (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      m_bShowCommandMenu : 1;                           		// 0x01AC (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      m_bGuildMembersChanged : 1;                       		// 0x01AC (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bShowingSkillBook : 1;                            		// 0x01AC (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bDidInit : 1;                                     		// 0x01AC (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bSkillInitalized : 1;                             		// 0x01AC (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bToggle : 1;                                      		// 0x01AC (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bShowMail : 1;                                    		// 0x01AC (0x0004) [0x0000000000000000] [0x00200000] 
	TArray< int >                                      DisabledTutorial;                                 		// 0x01B0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FCachedTargetInfo                           lastTargetInfo;                                   		// 0x01BC (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_OnlineSub;                                      		// 0x01F0 (0x0004) [0x0000000000000000]              
	TArray< struct FGFXChatMessage >                   ActiveChats;                                      		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FChatBubbleColors                           BubbleColors[ 0x2 ];                              		// 0x0200 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FlagColorName[ 0xA ];                             		// 0x0248 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CoruptCounter[ 0x6 ];                             		// 0x02C0 (0x0018) [0x0000000000000000]              
	int                                                PoisonCounter[ 0x6 ];                             		// 0x02D8 (0x0018) [0x0000000000000000]              
	struct FString                                     MailGuid;                                         		// 0x02F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_MailIndex;                                      		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              m_fCoolDown;                                      		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                DEPOSIT_STEALING;                                 		// 0x0304 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_LOOT;                                     		// 0x0308 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_HOUSE;                                    		// 0x030C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_CHEST;                                    		// 0x0310 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_GMBAG;                                    		// 0x0314 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_iNextGmSlot;                                    		// 0x0318 (0x0004) [0x0000000000000000]              
	struct FString                                     m_GMRankName[ 0x7 ];                              		// 0x031C (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftGlassInfo >                  m_vGlassInfo;                                     		// 0x0370 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftGlassMaterialsA;                          		// 0x037C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftGlassMaterialsB;                          		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftGlassMaterialsC;                          		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOverseerKeepNPC >                  m_KeepNPCList;                                    		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarPylon*                        m_PylonTgt;                                       		// 0x03AC (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerKeep*                   m_KeepTgt;                                        		// 0x03B0 (0x0004) [0x0000000000000000]              
	struct FString                                     m_PetGuid;                                        		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vFishingLines;                                  		// 0x03C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vFishingHooks;                                  		// 0x03CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_GetFishingDepth;                                		// 0x03D8 (0x0004) [0x0000000000000000]              
	TArray< struct FReciveMail >                       m_vMailItems;                                     		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsBrokerCategory >                  m_vCategories;                                    		// 0x03E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringIntPair >                   m_vLocations;                                     		// 0x03F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iSales;                                         		// 0x0400 (0x0004) [0x0000000000000000]              
	int                                                m_iPage;                                          		// 0x0404 (0x0004) [0x0000000000000000]              
	int                                                m_iBrokerItems;                                   		// 0x0408 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_vCombineItemsA;                                 		// 0x040C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCombineItemsB;                                 		// 0x0418 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPawn*                                    pPawnTarget;                                      		// 0x0424 (0x0004) [0x0000000000000000]              
	TArray< struct FsStringIntPair >                   vBagList;                                         		// 0x0428 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vOpenBags;                                        		// 0x0434 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vDyeMaterials;                                  		// 0x0440 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCookingTools;                                  		// 0x044C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCookingMaterials;                              		// 0x0458 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsValidCookingTools >               m_vValidCookingTools;                             		// 0x0464 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vPotionMakingVials;                             		// 0x0470 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vPotionMakingMaterials;                         		// 0x047C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vRefiningMaterials;                             		// 0x0488 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vExtractionMaterials;                           		// 0x0494 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vExtractionCatalysts;                           		// 0x04A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftShieldType >                 m_vCraftShieldTypes;                              		// 0x04AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftShieldFrame >                m_vCraftShieldFrames;                             		// 0x04B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftShieldMaterialsBase;                      		// 0x04C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftShieldMaterialsCoat;                      		// 0x04D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftShieldMaterialsFrame;                     		// 0x04DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftArmorParts >                 m_vCraftArmorParts;                               		// 0x04E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftArmorStyle >                 m_vCraftArmorStyles;                              		// 0x04F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringIntPair >                   m_vCraftArmorMaterials;                           		// 0x0500 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LastArmorStyle;                                 		// 0x050C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftRangedShape >                m_vCraftRangedShapes;                             		// 0x0518 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftRangedType >                 m_vCraftRangedTypes;                              		// 0x0524 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftRangedComp >                 m_vCraftRangedComps;                              		// 0x0530 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftRangedMaterials;                          		// 0x053C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftWeaponHandle >               m_vCraftWeaponHandles;                            		// 0x0548 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftWeaponBlade >                m_vCraftWeaponBlades;                             		// 0x0554 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftWeaponMaterials;                          		// 0x0560 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftWeaponCoatMaterials;                      		// 0x056C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LastBlade;                                      		// 0x0578 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LastHandle;                                     		// 0x0584 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTextureRenderTarget2D*                      m_pCraftingRenderTexture;                         		// 0x0590 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorWeaponPreviewCrafting*    m_pCraftingActor;                                 		// 0x0594 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sWorkBench;                                     		// 0x0598 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringIntPair >                   vVendorBuy;                                       		// 0x05A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vVendorSell;                                      		// 0x05B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vPayment;                                         		// 0x05BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCheckOpenWindows;                              		// 0x05C8 (0x0004) [0x0000000000000000]              
	TArray< struct FsOpenWindows >                     vOpenWindows;                                     		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatar*                             pStaticTalker;                                    		// 0x05D8 (0x0004) [0x0000000000000000]              
	float                                              fNextSlotUpdate;                                  		// 0x05DC (0x0004) [0x0000000000000000]              
	TArray< struct FsSlotUpdate >                      m_vSlotUpdates;                                   		// 0x05E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vMembers;                                       		// 0x05EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_vMemberRanks;                                   		// 0x05F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_Wars;                                           		// 0x0604 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_OutGoingWars;                                   		// 0x0610 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_IncomingWars;                                   		// 0x061C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsTreasurerItemStruct >             vTreasurerItems;                                  		// 0x0628 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vHouseFriendNames;                              		// 0x0634 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarPlayerHouse*                  m_pHouse;                                         		// 0x0640 (0x0004) [0x0000000000000000]              
	TArray< struct FBuyItems >                         itemArray;                                        		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      EngineerType;                                     		// 0x0650 (0x0001) [0x0000000000000000]              
	TArray< struct FsAttributeToolTips >               m_vAttributeToolTips;                             		// 0x0654 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTextureRenderTarget2D*                      m_pCharacterRenderTexture;                        		// 0x0660 (0x0004) [0x0000000000000000]              
	class ANowSkeletalMeshActorDoll*                   m_pPaperdoll;                                     		// 0x0664 (0x0004) [0x0000000000000000]              
	int                                                taskIndex;                                        		// 0x0668 (0x0004) [0x0000000000000000]              
	struct FString                                     TradeableItems[ 0x11 ];                           		// 0x066C (0x00CC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarNpcQuestGiver*                QuestNpc;                                         		// 0x0738 (0x0004) [0x0000000000000000]              
	struct FTaskLocation                               m_Locations[ 0xA ];                               		// 0x073C (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsTaskIndex >                       m_Tasks;                                          		// 0x07DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMurderIndexPair >                  Murderers;                                        		// 0x07E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MurderCunts;                                      		// 0x07F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MurderCuntsString;                                		// 0x0800 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fLastSendMurder;                                  		// 0x080C (0x0004) [0x0000000000000000]              
	int                                                BooksTotal;                                       		// 0x0810 (0x0004) [0x0000000000000000]              
	TArray< struct Fs_Books >                          Books;                                            		// 0x0814 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsKeyBinds >                        vKeyBinds;                                        		// 0x0820 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iSelectedPet;                                   		// 0x082C (0x0004) [0x0000000000000000]              
	int                                                m_iSelectedCommand;                               		// 0x0830 (0x0004) [0x0000000000000000]              
	class UUIInfo*                                     pUiInfo;                                          		// 0x0834 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatar*                             pTalker;                                          		// 0x0838 (0x0004) [0x0000000000000000]              
	float                                              m_fServerCooldown;                                		// 0x083C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_vPetReceiptGuids;                               		// 0x0840 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vPetReceiptName;                                		// 0x084C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLastPetInfo;                                     		// 0x0858 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vFriendNames;                                   		// 0x0864 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vGuildMembers;                                  		// 0x0870 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fAddFriendTimer;                                		// 0x087C (0x0004) [0x0000000000000000]              
	TArray< struct FSkillData >                        vAllSkillsData;                                   		// 0x0880 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iSkillAddUpdates;                                 		// 0x088C (0x0004) [0x0000000000000000]              
	int                                                vPetFramesCreated[ 0x6 ];                         		// 0x0890 (0x0018) [0x0000000000000000]              
	TArray< struct FString >                           vShowingPetUi;                                    		// 0x08A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FlagColor[ 0xA ];                                 		// 0x08B4 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                currentDegree;                                    		// 0x092C (0x0004) [0x0000000000000000]              
	int                                                intervall;                                        		// 0x0930 (0x0004) [0x0000000000000000]              
	float                                              unRotToRad;                                       		// 0x0934 (0x0004) [0x0000000000000000]              
	float                                              mRadToDeg;                                        		// 0x0938 (0x0004) [0x0000000000000000]              
	class ANowTCPLink*                                 MyNowTCPLink;                                     		// 0x093C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortByGlassLabel__Delegate;                     		// 0x0940 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByShieldTypeID__Delegate;                   		// 0x094C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByShieldFrameID__Delegate;                  		// 0x0958 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByArmorStyleLabel__Delegate;                		// 0x0964 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByCompSkill__Delegate;                      		// 0x0970 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByShapeSkill__Delegate;                     		// 0x097C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByTypeSkill__Delegate;                      		// 0x0988 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortBuyItemByName__Delegate;                    		// 0x0994 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByHandleSkill__Delegate;                    		// 0x09A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByBladeSkill__Delegate;                     		// 0x09AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1594 ];

		return pClassPointer;
	};

	int allowWhisper ( struct FString sAvatarName );
	void eventshowNotice ( struct FString sMessage );
	void showChatInput ( );
	void tcpReceive ( struct FString jsonData );
	void addChatMessage ( struct FString Message, struct FString Author, int Channel );
	void setChatInput ( struct FString sInput );
	void tcpSaveConfigJson ( struct FString jsonData );
	void sendChatMessage ( struct FString sMsg );
	class ANowTCPLink* GetTcpLink ( );
	void InitChat ( );
	void setAreaName ( struct FString sAreaName );
	void setCompassDirection ( int degrees );
	void setCompassPosition ( struct FString Element, int X, int Y );
	void loadCompassContent ( );
	void ToggleCompass ( );
	void updateCompass ( );
	void startUpdateCompass ( );
	void InitCompass ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void setDirectionLabel ( struct FString sLabel );
	void setDirectionDegrees ( int iDegrees );
	void toggleDirectionHelper ( unsigned long bVisible );
	void toggleShift ( unsigned long bShift );
	void removeStatusSymbol ( struct FString Id );
	void setStatusColor ( struct FString Id, struct FString sColor );
	void addStatusSymbol ( struct FString Id, struct FString Icon, struct FString sColor );
	void InputBox ( struct FString sID, struct FString sMessage, struct FString sTitle, unsigned long bRestricted );
	void msgBox ( struct FString sID, struct FString sMessage, struct FString sTitle, unsigned long bResponse );
	void setCrosshair ( struct FString IconName, struct FString ObjectName, struct FString nameColor, struct FString useVerb, unsigned long bUsable );
	void TriggerGuildVerify ( );
	void inputBoxResponse ( struct FString msgBoxId, struct FString sResponse );
	void msgBoxResponse ( struct FString msgBoxId, unsigned long bResponse );
	void SetCrosshairTarget ( class AActor* NewTarget );
	void ResetCrosshairTarget ( );
	void HideCrosshair ( );
	void GetKeyboardInput ( unsigned long bFlashNeedKeyInput );
	void ToggleBlurPP ( unsigned long bOn );
	void setPetLoyalty ( struct FString petGUID, int curLoyalty, int maxLoyalty );
	void setPetName ( struct FString petGUID, struct FString DisplayName );
	void showPetWindow ( struct FString petGUID, struct FString DisplayName, int curLoyalty, int maxLoyalty, unsigned long bVisible, unsigned long bHasBag );
	void RequestedPetWindow ( struct FString sPetGuid );
	void UpdatePets ( );
	void InitPets ( );
	void SkillLockStateChanged ( struct FString sGuid, int iLockState );
	void SkillDecreaseLevel ( struct FString sGuid );
	void addSkillGroup ( struct FString GroupName, struct FString sGuid );
	void showSkills ( unsigned long bVisible );
	void eventsetskill ( struct FString sGuid, struct FString sData );
	void ToggleSkillBook ( );
	void eventSendSkillsToFlash ( );
	void eventAddSkillData ( struct FString sSkillGuid, struct FString sSkillData );
	void SendSkillGroupsToFlash ( );
	void InitSkillBook ( );
	void FillMySkillData ( );
	void FillSkillData ( );
	void useActionBar ( int barId, int slotId );
	void addHotbar ( int Id, int numSlots );
	void InitHotbar ( );
	void showMacros ( );
	void InitMacros ( );
	void closeSpellbook ( );
	void showSpellbook ( unsigned long bGreaterHealing, unsigned long bCorrupt, unsigned long bThunderlash, unsigned long bFulmination, unsigned long bSpurt, unsigned long bLesserHealing, unsigned long bPurify, unsigned long bFireball, unsigned long bLightning, unsigned long bMagicReflection, unsigned long bMindBlast, unsigned long bFlameStrike, unsigned long bEarthquake, unsigned long bResurrect, unsigned long bTranscendentalAwareness );
	void DoShowSpellBook ( );
	void InitSpellBook ( );
	void removeModBar ( struct FString Id );
	void addModBar ( struct FString Id, struct FString DisplayName, struct FString Description, struct FString Icon, float etaSeconds, struct FString cancelDesc );
	void showSocial ( );
	void eventSetGuildMembersChanged ( );
	void eventremoveGuildMember ( struct FString Member );
	void eventupdateGuildMember ( struct FString Member, unsigned long bOnline );
	void requestRemoveIgnore ( struct FString req );
	void requestAddIgnore ( struct FString req );
	void requestRemoveFriend ( struct FString req );
	void requestAddFriend ( struct FString req );
	void updateIgnore ( struct FString ignore, unsigned long Online );
	void updateFriend ( struct FString Friend, unsigned long Online );
	void removeIgnore ( struct FString ignore );
	void RemoveFriend ( struct FString Friend );
	void eventaddGuildMember ( struct FString memberName, unsigned long memberOnline );
	void AddFriend ( struct FString Friend, unsigned long Online );
	void addIgnore ( struct FString ignore, unsigned long Online );
	void event_updateFriend ( struct FString Friend, unsigned long Online );
	void requestDeclineInvite ( struct FString FriendName );
	void requestDeclineFriend ( struct FString FriendName );
	void requestAcceptFriend ( struct FString FriendName );
	void eventaddPendingFriend ( struct FString FriendName );
	void updateFriendList ( );
	void getInitFriends ( );
	void getPendingFriends ( );
	void eventInitDelegate ( );
	void InitGuildMembers ( );
	void InitSocial ( );
	bool eventCheckAddTimer ( );
	bool isPlayerOnline ( int Index );
	void enumerateFriendNames ( TArray< struct FString >* vFriendName );
	void RefuseFriendNative ( struct FString FriendName );
	void AcceptFriendNative ( struct FString FriendName );
	void RequestFriendNative ( struct FString FriendName );
	void RemoveFriendNative ( struct FString FriendName );
	void AddFriendNative ( struct FString FriendName );
	void removePet ( struct FString petGUID );
	void removeAllPets ( );
	void showPetInformation ( struct FString petGUID );
	void setPetAttack ( struct FString petGUID, struct FString Label, int ATTACK, unsigned long bEnabled );
	void setPetAttribute ( struct FString petGUID, struct FString Label, struct FString Value, int lockState );
	void setPetStat ( struct FString petGUID, struct FString Label, int Value );
	void addPet ( struct FString petGUID, struct FString DisplayName, struct FString skillName );
	void FeedPet ( struct FString sPetGuid, struct FString sItemGuid );
	void SetPetLockState ( struct FString sGuid, struct FString sLabel, int iLockState );
	void AddPetInfo ( int iPetIndex );
	void clearPets ( );
	void updatePetInfo ( );
	void TalkTransferReceipts ( );
	void TalkUnReceipt ( int iIndex );
	void TalkReceipt ( int iIndex );
	void TalkUnstable ( int iIndex );
	void TalkStable ( int iIndex );
	void TransferReceipts ( );
	void GetPetReceipts ( );
	void GetStabled ( );
	void UnReceipt ( int iIndex );
	void Receipt ( int iIndex );
	void UnStable ( int iIndex );
	void Stable ( class ANowAtlasAvatarAi* pPet );
	void AddTutorialPickables ( );
	void eventcloseNpc ( );
	void clearNpc ( );
	void addTalkerResponse ( int ChatID, int TargetID, struct FString uscript, struct FString msg );
	void addTalkerChat ( int Id, struct FString msg );
	void showNpc ( struct FString npcName, struct FString npcExit, struct FString npcBack );
	void StartTalker ( );
	void LoadNpcInfo ( );
	void LoadUiInfoTalker ( class UUIInfoTalker* pInfo, class ANowAtlasAvatar* pMyTalker );
	void GiveSkill ( int I );
	void toggleCommandMenu ( unsigned long bVisible );
	void clearCommandOptions ( );
	void addCommandOption ( struct FString sString );
	void setCommandTitle ( struct FString sTitle );
	void SetOption ( int iIndex );
	void SendCommand ( int FinalCommand );
	void RedrawMenuOptions ( );
	void NumberPressed ( int iNr );
	void ShowCommandMenu ( );
	void setConfigVariable ( struct FString sVariable, struct FString sValue );
	void setConfigVariableLite ( struct FString sVariable, unsigned long bValue );
	void setBinding ( struct FString Id, struct FString Category, struct FString Label, struct FString Key, unsigned long bCtrl, unsigned long bAlt, unsigned long bShift );
	void showOptions ( );
	void ApplyKeyBinding ( struct FString Id, struct FString Key, unsigned long bCtrl, unsigned long bAlt, unsigned long bShift );
	void SetConfigVariableFloat ( struct FString sVariable, float fValue );
	void SetConfigVariableBool ( struct FString sVariable, unsigned long bValue );
	void InitOptions ( );
	void clearBookList ( );
	void setPlayerCurrency ( int coins );
	void refreshBookList ( unsigned long bFiltered );
	void addBook ( int Id, struct FString Title, struct FString Author, struct FString Skill, int MinSkill, int MaxSkill, struct FString Category, int Cost, int readable, struct FString Description );
	void toggleLibrary ( unsigned long bVisible );
	void BuySkillBook ( int BookIndex );
	void eventAddBooksToFlash ( );
	void eventAddBookToArray ( struct FString inContentName, struct FString inDisplayName, struct FString inAuthor, struct FString inSkillName, int inMinSkill, int inMaxSkill, struct FString inBookGroup, int inBookCost, int inBookStatus, struct FString inBookDesc );
	void InitLibrary ( );
	void GetBooks ( );
	void getGuildMembers ( TArray< struct FString >* vMembers, TArray< int >* vMemberRanks, TArray< int >* vMemberOnline );
	void toggleHelp ( );
	void tcpRequestHelp ( struct FString sJsonObject );
	void AddMurderer ( struct FString PlayerName );
	void eventclearMurderers ( );
	void showReportMurder ( );
	void eventInitReportMurder ( );
	void eventClosedMurder ( );
	void ReportMurderer ( struct FString sName );
	void eventSendMurdererToFlash ( struct FString sName, int iIndex );
	void SendMurdersToServer ( );
	void clearTasks ( );
	void showTasks ( );
	void eventremoveItemOption ( struct FString ItemId );
	void refreshTaskList ( unsigned long bRefresh );
	void removeTask ( int Id );
	void eventaddTask ( int Id, struct FString Item, int Quantity, struct FString Category, struct FString Recipient, struct FString Destination, int reward, int deposit );
	void addDestination ( struct FString Destination );
	void CreateTask ( struct FString ItemId, struct FString Category, struct FString Destination, int listingDays, int coinReward, int coinExpense, int coinDeposit );
	void setDestionations ( );
	void setTradeItems ( );
	struct FString eventgetLocation ( int Index );
	void setLocations ( );
	void event_removeTask ( struct FString _guid );
	void eventaddTaskIdentifer ( struct FString _guid, int* Index );
	void AcceptTask ( int TaskId );
	struct FString eventgetTaskGuidFromIndex ( int Index );
	int eventgetTaskIndexFromGuid ( struct FString _guid );
	void InitTasks ( );
	bool isItemTradeType ( struct FString ItemGuid );
	void getTradeItems ( TArray< struct FItemOption >* vItems );
	void nativeDeliverTasks ( );
	void nativeRequestTasks ( );
	void nativeClaimTask ( int _taskIndex );
	void nativeAddTask ( struct FString ItemId, struct FString Category, struct FString Destination, struct FString Recipient, int listingDays, int coinReward, int coinExpense, int coinDeposit );
	void setOverweight ( int iPercent );
	void eventaddTitle ( int iID, struct FString sTitle );
	void eventSetTitle ( struct FString sTitle );
	void eventclearTitles ( );
	void eventsetEquipped ( struct FString sSlotName, struct FString sData );
	void showPaperdoll ( unsigned long bVisible );
	void setPaperdollStat ( struct FString Id, struct FString Category, struct FString Label, struct FString Value, int lockState, struct FString ToolTip );
	void RequestdSuicide ( );
	void SetAttributeState ( struct FString Id );
	void PaperdollRender ( unsigned long bRender );
	void TogglePaperdoll ( );
	void eventUpdatePaperDollMesh ( unsigned long bPending );
	void PaperdollZoom ( unsigned long bZoom );
	void PaperdollPan ( int X, int Y );
	void RotatePaperdoll ( unsigned long bLeft );
	void eventUpdateStatus ( struct FString sName, int iNrCur, int iNrMax );
	void eventUpdateEquipment ( struct FString sName, int iNrCur, int iNrFree, int iNrMax );
	void eventUpdateReserve ( struct FString sName, int iNr, int iNrMax, int iNrThr );
	void eventUpdateMisc ( struct FString sName, struct FString sGroup, struct FString sValue );
	void eventUpdateAttribute ( struct FString sName, int iNr, int iNrMod, int iNrMax );
	void eventUpdateBody ( struct FString sName, struct FString sText );
	void InitPaperdoll ( );
	void UpdateDollTitles ( );
	void UpdateEquipped ( );
	void eventclearCurrentTasks ( );
	void eventabandonTask ( int TaskId );
	void showCurrentTasks ( );
	void eventaddCurrentTask ( int Id, struct FString Item, int Quantity, struct FString Category, struct FString Recipient, struct FString Destination, int reward, int deposit, int expires );
	void InitCurrentTasks ( );
	void nativePopulateTasks ( );
	void nativeAbondonTask ( int TaskId );
	void clearEngineer ( );
	void toggleEngineer ( );
	void addEngineerItem ( struct FString sGuid, struct FString Title, struct FString Description, struct FString Requirements, int Quantity, int costSilver, int CostPP );
	void setBalances ( int fundsCoin, int fundsPP );
	int SortByBladeSkill ( struct FsCraftWeaponBlade A, struct FsCraftWeaponBlade B );
	int SortByHandleSkill ( struct FsCraftWeaponHandle A, struct FsCraftWeaponHandle B );
	int SortBuyItemByName ( struct FBuyItems A, struct FBuyItems B );
	void BuyItem ( struct FString sGuid );
	void eventAddItemToUI ( struct FString sGuid, struct FString DisplayName, int costSilver, int CostPP );
	class ANowAtlasAvatarPlayerKeep* eventGetAKeep ( );
	int FindItemIndex ( struct FString sGuid );
	void InitEngineer ( );
	void BuyEngineer ( struct FString sGuid );
	void GetVendorItems ( );
	void requestRemoveHouseFriend ( struct FString req );
	void requestAddHouseFriend ( struct FString req );
	void removeHouseFriend ( struct FString Friend );
	void addHouseFriend ( struct FString FriendName );
	void clearHouseFriends ( );
	void toggleHouseFriends ( );
	void eventupdateHouseFriendList ( );
	void getInitHouseFriends ( );
	void eventInitHouseFriends ( );
	void enumerateHouseFriendNames ( TArray< struct FString >* vFriendName );
	void RemoveHouseFriendNative ( struct FString FriendName );
	void AddHouseFriendNative ( struct FString FriendName );
	void TalkGuardResponse ( int iIndex );
	void GuardResponse ( int iResponse );
	void clearTreasurerItems ( );
	void toggleTreasurer ( );
	void setTreasurerQuantity ( struct FString sGuid, int Quantity );
	void removeTreasurerItem ( struct FString sGuid );
	void addTreasurerItem ( struct FString sGuid, struct FString Title, struct FString Description, int Status, int Quantity, int cp, int PP, int stackSize );
	void TradeTreasurerItem ( struct FString sGuid, int Quantity );
	void UpdateItem ( struct FString sGuid, int RemQuantity );
	int GetMinQuantity ( struct FString sGuid );
	void eventFinishAddingTreasurerItems ( );
	void eventDoAddTreasurerItem ( struct FString sGuid, struct FString Title, struct FString Desc, int Status, int Quantity, int cp, float PP, int stackSize );
	void InitTreasurer ( );
	void sellTreasurerItem ( struct FString ItemGuid, int Amount );
	void getTreasurerTradeItems ( );
	void closeGuildUI ( );
	void eventupdateMember ( struct FString memberName, int Rank );
	void eventRemoveMember ( struct FString memberName );
	void eventAddMember ( struct FString memberName, int memberRank );
	void removeWar ( struct FString warName );
	void addWar ( struct FString warName, unsigned long warActive, unsigned long warChallenger );
	void initGuildUI ( struct FString guildAbbrev, unsigned long bMembers, unsigned long bDiplomacy, unsigned long bOptions, unsigned long bCanInvite, unsigned long bCanKick, unsigned long bCanPromote, unsigned long bCanDemote, int maxRank, unsigned long bManageWars );
	void guildSendChallenge ( struct FString guildName );
	void guildCancelWar ( struct FString guildName );
	void guildCancelChallenge ( struct FString guildName );
	void guildAcceptedChallenge ( struct FString guildName );
	void guildSetAbbrev ( struct FString guildAbbrev );
	void eventguildRankMember ( struct FString memberName, int memberRank );
	void guildKickMember ( struct FString memberName );
	void guildSendInvite ( struct FString memberName );
	void setGuildMembers ( );
	void SetInitData ( );
	void eventguildWarUpdated ( );
	void eventAddOutgoingGuildWar ( struct FString guildName );
	void eventAddInComingGuildWar ( struct FString guildName );
	void eventAddGuildWar ( struct FString guildName );
	void eventclearWars ( );
	void eventguildUpdated ( );
	void eventReinitGuildMembers ( );
	void InitGuildStone ( );
	void GuildSetAccronym ( struct FString guildAccronym );
	void GuildAcceptChallenge ( struct FString sGuild );
	void GuildGuildWarCancel ( struct FString sGuild );
	void GuildChallengeCancel ( struct FString sGuild );
	void GuildChallengeGuild ( struct FString sGuild );
	void GuildRequestGuildWars ( );
	void GuildSetNewMemberRank ( struct FString sMember, int newRank );
	void GuildDemote ( struct FString sMember );
	void GuildPromote ( struct FString sMember );
	void GuildKickMemberCommand ( struct FString sMember );
	void GuildInviteMember ( struct FString sMember );
	bool CheckForDead ( );
	void closeContainer ( int iDeposit );
	void eventsetContainerLabel ( int iContainer, struct FString sLabel );
	void eventshowContainer ( int iDeposit, int iSlotCount, int iSlots, struct FString sTitle, unsigned long bLocked, struct FString sInvalidGuids, struct FString sTopLabel );
	void eventupdateItemSlot ( int iDeposit, int iSlot, struct FString sData );
	void eventRemoveItem ( struct FString sGuid );
	void ChangedSlotSplit ( struct FString sGuid, int iSplit, int iNewDeposit, int iNewSlot );
	int eventGetBagDepositFromGuid ( struct FString sGuid );
	struct FString eventGetBagGuidFromDeposit ( int iDeposit );
	void ChangedSlot ( struct FString sGuid, int iNewDeposit, int iNewSlot );
	void SwappedSlots ( struct FString sTargetGuid, struct FString sPickedGuid );
	void UseItem ( struct FString sGuid );
	void EquippedItem ( struct FString sGuid, struct FString sEquipSlot );
	void eventAddPendingSlotUpdate ( int iSlot, int iDeposit );
	void TickSlotUpdate ( float fDeltaTime );
	void UpdateSlot ( int iSlot, int iDeposit );
	void InitInventoryItems ( );
	void eventReInitInventory ( );
	void OpenInventory ( );
	void FillInventory ( );
	void InitBanker ( );
	void ReFillBankInventory ( );
	void FillBankInventory ( );
	void eventInitLoot ( );
	bool TryParseTradeCommand ( struct FString sCmd, int iBag, int iSlot );
	void StaticTradeFrom ( int iBag, int iSlot, int iToSlot );
	void StaticTradeTo ( struct FString sItemGuid, int iBag, int iSlot );
	void StaticTradeCancel ( );
	void FillLootInventory ( );
	void eventInitHouseTrade ( );
	void FillHouseInventory ( );
	void InitGMSpawnNPC ( );
	void FillGMSpawnListNpc ( );
	void GMAddAttack ( struct FString sGuid );
	void InitGMSpawnAttack ( );
	void FillGMSpawnListAttacks ( );
	void eventAddToGMSpawnList ( struct FString sName, struct FString sGuid );
	void GMSpawnAi ( struct FString sGuid );
	void InitGMSpawnAi ( );
	void FillGMSpawnListAi ( );
	void clearList ( );
	void removeListItem ( struct FString sGuid );
	void eventaddListItem ( struct FString sGuid, struct FString Title );
	void toggleList ( struct FString DisplayName, struct FString buttonLabel, struct FString callbackFunction, unsigned long bVisible );
	void closeSingleOpenUI ( );
	void ClosedContainer ( int iDeposit );
	void ClosedWindow ( struct FString sWindowID );
	void OpenedWindow ( struct FString sWindowID );
	void AddWindowToTracker ( struct FString sWindowID, struct FVector vLoc, int iDeposit );
	void TickOpenWindows ( float fDeltaTime );
	bool eventIsDepositOpen ( int iDeposit );
	bool IsWindowOpen ( struct FString sWindowID );
	void TurnOffResCriminals ( );
	void TurnOnResCriminals ( );
	void TurnOnGuards ( );
	void TurnOffGuards ( );
	void SendUpdate ( int RuleIndex, int newValue );
	void eventclearTrade ( );
	void eventcloseTradeWindow ( );
	void eventsetTradeAccepted ( unsigned long bAccepted, unsigned long bRemote );
	void eventremoveTradeItem ( struct FString sGuid, unsigned long isRemote );
	void eventaddTradeItem ( unsigned long isRemote, struct FString sData );
	void eventshowTradeWindow ( struct FString traderName, struct FString sData );
	void CancelTrade ( );
	void TradeAccepted ( unsigned long bAccepted );
	void RemoveFromTrade ( struct FString sGuid );
	void AddToTrade ( struct FString sGuid );
	void UpdateTradeSession ( );
	void RemoveFromTradeSession ( struct FString sItemGuid );
	void AddToTradeSession ( struct FString sItemGuid );
	void DisApproveTrade ( );
	void ApproveTrade ( );
	void clearVendorSale ( );
	void removeVendorSale ( struct FString sGuid );
	void removeVendorPurchase ( struct FString sGuid );
	void eventaddVendorSale ( struct FString sData );
	void clearVendorSellGuids ( );
	void addVendorSellGuid ( struct FString sGuid );
	void clearVendorPurchase ( );
	void eventaddVendorPurchase ( struct FString sData );
	void clearVendorItems ( );
	void removeVendorItem ( struct FString sGuid );
	void eventaddVendorItem ( struct FString sData );
	void eventcloseVendorWindow ( );
	void showVendorWindow ( struct FString sVendorGuid, struct FString sVendorName, unsigned long bBuyIllegal, unsigned long bBuyStolen );
	void eventFinalizeVendorPaymentArray ( );
	void HackClearPurchase ( );
	void RemoveFromPurchase ( struct FString sGuid );
	void AddToPurchase ( struct FString sGuid, int iQuantity );
	void RemoveFromSale ( struct FString sGuid );
	int eventGetVendorSaleIndex ( struct FString sGuid );
	bool CanAddMoreItemsToVendor ( );
	void AddToSale ( struct FString sGuid );
	void VendorAccepted ( );
	void InitVendor ( );
	bool CanAddItemToVendor ( struct FString sItemGuid );
	void UpdateVendorPayment ( );
	void UpdateVendorPurchase ( );
	void UpdateVendorSale ( );
	void UpdateVendorItems ( );
	void DoVendorAccepted ( );
	void DoVendorBrowse ( );
	void clearSlot ( struct FString sWindow, int iSlot );
	void clearCraftingSlotGuids ( int iSlot );
	void addCraftingSlotGuid ( int iSlot, struct FString sGuid );
	void clearCraftingOptions ( int iSection );
	void addCraftingOption ( struct FString sLabel, int sSection );
	void closeCraftingWindows ( );
	void startRenderToTexture ( );
	void ResetCrafting ( );
	class ANowAtlasAvatarStM* GetTargetStaticMeshAvatar ( );
	class ANowStaticMeshActor* GetTargetStaticMesh ( );
	void StartHouseCrafting ( );
	void showWeaponCrafting ( );
	int eventGetIndexFromHandle ( struct FString sName );
	int eventGetIndexFromBlade ( struct FString sName );
	struct FString eventGetSendNameFromBlade ( struct FString sName );
	struct FString eventGetSendNameFromHandle ( struct FString sName );
	void CraftWeapon ( struct FString sHandle, struct FString sHead, struct FString sCoreMatGuid, struct FString sHandleMatGuid, struct FString sHeadMatGuid, struct FString sCustomName, unsigned long bRecipe );
	void ChangedCraftWeapon ( struct FString sHandle, struct FString sHead, struct FString sCoreMatGuid, struct FString sHandleMatGuid, struct FString sHeadMatGuid );
	void eventFinalizeWeaponArrays ( );
	void eventAddBlade ( struct FString sLabelName, struct FString sSendName, struct FString sSkillName, unsigned long bBlade );
	void eventAddHandle ( struct FString sLabelName, struct FString sSendName, struct FString sSkillName, unsigned long bBladeOnly );
	void InitWeaponCrafting ( );
	bool IsValidWeapon ( struct FString sHandle, struct FString sHead );
	struct FString GetPreviewStringWeapon ( struct FString sHandle, struct FString sHead, struct FString sCoreMatGuid, struct FString sHandleMatGuid, struct FString sHeadMatGuid );
	void InitWeaponArrays ( );
	void showBowCrafting ( );
	bool eventGetSingleFromComp ( struct FString sName );
	struct FString eventGetSendNameFromShape ( struct FString sName );
	struct FString eventGetSendNameFromType ( struct FString sName );
	void CraftBow ( struct FString sConstruction, struct FString sStyle, struct FString sFamily, struct FString sBellyMatGuid, struct FString sBackMatGuid, float sBalance, struct FString sCustomName, unsigned long bRecipe );
	void ChangedCraftBow ( struct FString sConstruction, struct FString sStyle, struct FString sFamily, struct FString sBellyMatGuid, struct FString sBackMatGuid );
	int SortByTypeSkill ( struct FsCraftRangedType A, struct FsCraftRangedType B );
	int SortByShapeSkill ( struct FsCraftRangedShape A, struct FsCraftRangedShape B );
	int SortByCompSkill ( struct FsCraftRangedComp A, struct FsCraftRangedComp B );
	void eventFinalizeRangedArrays ( );
	void eventAddComps ( struct FString sLabelName, struct FString sSkillName, unsigned long bSingle );
	void eventAddType ( struct FString sLabelName, struct FString sSendName, struct FString sSkillName );
	void eventAddShape ( struct FString sLabelName, struct FString sSendName, struct FString sSkillName, unsigned long bWorksSingle );
	void InitRangedCrafting ( );
	struct FString GetPreviewStringRanged ( struct FString sConstruction, struct FString sStyle, struct FString sFamily, struct FString sBellyMatGuid, struct FString sBackMatGuid );
	void InitRangedArrays ( );
	void showArmorCrafting ( );
	int eventGetPreviewPartIDFromString ( struct FString sString );
	int eventGetPartIDFromString ( struct FString sString );
	int eventGetIndexFromArmorStyle ( struct FString sName );
	struct FString eventGetSendNameFromArmorStyle ( struct FString sName );
	float eventCalculateSuppAmount ( struct FString sName, float fPct );
	float eventCalculatePrimAmount ( struct FString sName, float fPct );
	void CraftArmor ( struct FString sStyle, struct FString sSlot, struct FString sPrimaryMatGuid, struct FString sSupportMatGuid, float sPrimaryDensity, float sSupportDensity, struct FString sCustomName, unsigned long bRecipe );
	void UpdateArmorCamera ( struct FString sSlot );
	void UpdateArmorSlots ( struct FString sStyle, struct FString sLastStyle );
	void UpdateMaterialSlots ( struct FString sStyle, struct FString sLastStyle );
	void ChangedCraftArmor ( struct FString sStyle, struct FString sSlot, struct FString sPrimaryMatGuid, struct FString sSupportMatGuid );
	int SortByArmorStyleLabel ( struct FsCraftArmorStyle A, struct FsCraftArmorStyle B );
	void eventFinalizeArmorArrays ( );
	void eventAddStyle ( struct FString sLabelName, struct FString sSendName, struct FString sSkillName, int iMaterialFlag, int iPieceFlags, float fVisMinValue, float fVisMaxValue, float fnVisMinValue, float fnVisMaxValue );
	void eventAddPart ( struct FString sLabelName, int iFlag );
	void eventAddArmorMaterial ( struct FString sLabelName, int iFlag );
	void InitArmorCrafting ( );
	struct FString GetPreviewStringArmor ( struct FString sStyle, struct FString sSlot, struct FString sPrimaryMatGuid, struct FString sSupportMatGuid );
	void InitArmorArrays ( );
	void showShieldCrafting ( );
	int eventGetIDFromShieldType ( struct FString sName );
	int eventGetIDFromShieldFrame ( struct FString sName );
	struct FString eventGetSendNameFromShieldFrame ( struct FString sName );
	struct FString eventGetSendNameFromShieldType ( struct FString sName );
	void CraftShield ( struct FString sStyle, struct FString sFrame, struct FString sPrimaryMatGuid, struct FString sCoatMatGuid, struct FString sFrameMatGuid, float fPrimaryDensity, float fCoatDensity, struct FString sCustomName, unsigned long bRecipe );
	int SortByShieldFrameID ( struct FsCraftShieldFrame A, struct FsCraftShieldFrame B );
	int SortByShieldTypeID ( struct FsCraftShieldType A, struct FsCraftShieldType B );
	void ChangedCraftShield ( struct FString sStyle, struct FString sFrame, struct FString sPrimaryMatGuid, struct FString sCoatMatGuid, struct FString sFrameMatGuid );
	void UpdateShieldFrames ( int iShieldType );
	void eventFinalizeShieldArrays ( );
	void eventAddShieldFrame ( struct FString sLabelName, struct FString sSendName, int iShieldType );
	void eventAddShieldStyle ( struct FString sLabelName, struct FString sSendName, int iShieldType );
	void InitShieldCrafting ( );
	struct FString GetPreviewStringShield ( struct FString sStyle, struct FString sFrame, struct FString sPrimaryMatGuid, struct FString sCoatMatGuid, struct FString sFrameMatGuid );
	void InitShieldArrays ( );
	void showExtraction ( struct FString sWorkbench, unsigned long bAllowCatalyst );
	void ExtractItem ( struct FString sPrimaryMatGuid, struct FString sCatalystMatGuid );
	void eventFinalizeExtractionArrays ( );
	void InitExtraction ( );
	void InitExtractionArrays ( );
	void showRefining ( struct FString sWorkbench, unsigned long bAllowCatalyst );
	void RefineItem ( struct FString sPrimaryMatGuid, struct FString sCatalystMatGuidA, struct FString sCatalystMatGuidB );
	void eventFinalizeRefiningArrays ( );
	void InitRefining ( );
	void InitRefiningArrays ( );
	void InitSkinning ( );
	void showPotionMaking ( struct FString sWorkbench, int iNumSlots );
	void CraftPotion ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sIngredientGuid9, struct FString sIngredientGuid10, struct FString sIngredientGuid11, struct FString sIngredientGuid12, struct FString sIngredientGuid13, struct FString sIngredientGuid14, struct FString sName );
	void eventFinalizePotionMakingArrays ( );
	void InitPotionMaking ( );
	int GetCraftingSlotNumbers ( );
	void SendCraftPotion ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sIngredientGuid9, struct FString sIngredientGuid10, struct FString sIngredientGuid11, struct FString sIngredientGuid12, struct FString sIngredientGuid13, struct FString sIngredientGuid14, struct FString sName, unsigned long bRecipe );
	void InitPotionMakingArrays ( );
	void showCooking ( struct FString sWorkbench, int iSlots );
	void CookItem ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sName );
	void eventFinalizeCookingArrays ( );
	void InitCooking ( );
	void SendCookItem ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sName, unsigned long bRecipe );
	void InitCookingArrays ( );
	void closeDyeTub ( );
	void addDye ( int iColorRed, int iColorGreen, int iColorBlue, int iColorAlpha );
	void showDyeTub ( struct FString sGuid, int iColorRed, int iColorGreen, int iColorBlue, int iColorAlpha, int iDyeCount, struct FString sDyeableSlots );
	void eventFinalizeDyeArrays ( );
	void DyeItem ( struct FString sItemGuid, int iColorRed, int iColorGreen, int iColorBlue, int iColorAlpha );
	void AddDyeToTub ( struct FString sTubGuid, struct FString sDyeGuid );
	void InitDyeTub ( );
	void ClosedDyeTub ( );
	void SendDyeItem ( struct FString sItemGuid, int iColorRed, int iColorGreen, int iColorBlue, int iColorAlpha );
	void SendUseDye ( struct FString sDyeGuid );
	void GetColorFromItem ( struct FString sGuid, int* R, int* G, int* B, int* A );
	void InitDyeArrays ( );
	int eventAssignBagID ( struct FString sBagGuid );
	void eventCloseBag ( struct FString sGuid );
	int eventIsBagOpen ( struct FString sGuid );
	void eventInitBag ( struct FString sBagGuid, struct FString sBagName, int iBagSize, unsigned long bTrack );
	void FillBag ( struct FString sBagGuid, int iDepositID, int iBagSize );
	void eventClosePilfering ( );
	void eventUpdatePilfering ( );
	void eventInitPilfering ( );
	void FillPilferingInventory ( );
	void closeCombine ( );
	void showCombine ( );
	void eventFinalizeCombineItemsArrays ( );
	void CombineItems ( struct FString sItemGuid1, struct FString sItemGuid2 );
	void InitCombineItems ( );
	void InitCombineItemsArray ( );
	void SendCombineItems ( struct FString sItemA, struct FString sItemB );
	void renderBrokerTree ( );
	void addBrokerLocation ( struct FString sLocation );
	void clearBrokerLocations ( );
	void closeBroker ( );
	void refreshBrokerSelling ( );
	void refreshBrokerItems ( int iCurrentPage, unsigned long bNextPage );
	void clearBrokerSelling ( );
	void clearBrokerItems ( );
	void eventaddBrokerSelling ( struct FString sData, int iExpires, struct FString sLocation );
	void eventaddBrokerItem ( struct FString sData, struct FString sAvatar, struct FString sLocation );
	void clearBrokerCategories ( );
	void addBrokerCategory ( int iID, struct FString sDisplayName, int iParent );
	void showBroker ( struct FString sCityName, int iSellFeePercent );
	void BrokerSellItem ( struct FString sItemGuid, int iCost, int iDuration );
	void BrokerCancelItem ( struct FString sItemGuid );
	void BrokerBuyItem ( struct FString sItemGuid );
	void BrokerGetSelling ( );
	void BrokerGetItems ( int iCategory, int iPage, struct FString sSortField, unsigned long bSortAscending );
	void RefreshBrokerSell ( );
	void eventSetPendingRefreshBrokerSell ( );
	void RefreshBrokerBuy ( );
	void eventSetPendingRefreshBrokerBuy ( );
	struct FString eventGetLocationFromID ( int iID );
	int eventGetIDFromLocation ( struct FString sLocation );
	void BrokerGetItem ( struct FString sGuid );
	void InitBrokerArrays ( );
	void InitBroker ( );
	int ModifyTaxesBroker ( int iTaxes );
	bool CanSellToBroker ( );
	void BrokerItemSellAdd ( struct FString sGuid, struct FString sContentGuid, int iCost, int iQuantity, int iCityId, int iExpiers, struct FString sItemName );
	void BrokerItemAddInfo ( struct FString sGuid, struct FString sContentGuid, struct FString sAvatarName, int iCost, int iQuantity, int iCityId, int iParamClass, struct FString sItemInfo );
	void BrokerItemAdd ( struct FString sGuid, struct FString sContentGuid, struct FString sAvatarName, int iCost, int iQuantity, int iCityId, struct FString sItemName );
	void SendGetBuyItemInfo ( struct FString sItemGuid );
	void SendCancelItem ( struct FString sItemGuid );
	void SendBuyItem ( struct FString sItemGuid );
	void SendSellItem ( struct FString sItemGuid, int iCost, int iDuration );
	void SendGetSell ( );
	void SendGetItems ( int iCategory, int iPage, struct FString sSortField, unsigned long bSortAscending );
	void showReceiveMail ( );
	void closeMailWindow ( );
	void eventreceiveMailRemoveItem ( struct FString sGuid );
	void clearMailItems ( );
	void receiveMailAddItem ( struct FString sData, struct FString sSender );
	void SubmitSendMail ( struct FString sRecipient, int iCoD, struct FString sGuid );
	void ReceiveMailItem ( struct FString sGuid, int iCost );
	void UpdateMail ( );
	void InitMail ( );
	void SendRequestMail ( );
	void CollectMail ( struct FString sGuid );
	void RequestMail ( TArray< struct FReciveMail >* Items );
	void SendMail ( struct FString sTargetName, int iCashOnDelivery, struct FString sGuid );
	void getBook ( struct FString sGuid, unsigned long bEditable, int iMaxPages );
	void UpdateBook ( struct FString sData );
	void InitPlayerBookTest ( struct FString sTestString );
	void InitPlayerBook ( );
	void GetPlayerBookInfo ( struct FString* sBookGuid, int* iMaxPages );
	struct FString GetLastItemUsedGuid ( );
	void eventInitChest ( );
	void FillChestInventory ( );
	void closeHouseWindow ( );
	void updateHouseExpiration ( int iExpires );
	void updateHouseHitpoints ( int iHitpoints, int iHitpointMax );
	void showHouseWindow ( int iHouseId, struct FString sOwner, struct FString sGuild, int iHitpoints, int iHitpointMax, int iCoinPerDay, int iExpires, unsigned long bChangeLock, unsigned long bNewKey, unsigned long bManageFriends, unsigned long bPayTax, int iMaxPayment, int iTaxPercent, struct FString sLordGuild );
	void HousePayment ( int iHouseId, int iPayment );
	void ChangeHouseLock ( int iHouseId );
	void CreateHouseKey ( int iHouseId );
	void ShowHouseFriends ( int iHouseId );
	void ChangeHouseOwner ( struct FString sNewOwner );
	void InitHouseInfo ( );
	void SendHousePayment ( int iPayment );
	void SendChangeHouseLock ( );
	void SendCreateHouseKey ( );
	void toggleFishingEnabled ( unsigned long bEnabled );
	void closeFishing ( );
	void showFishing ( struct FString sData );
	void ChangedFishingDepth ( int iDepth );
	void ChangedFishingSlots ( struct FString sLineGuid, struct FString sHookGuid, struct FString sBaitGuid );
	void eventFinalizeFishingArrays ( );
	void InitFishing ( );
	struct FString GetRodData ( );
	void InitFishingArrays ( );
	void PlaceVendor ( struct FString sGuid );
	void InitPlaceVendor ( );
	void SendPlaceVendor ( struct FString sGuid );
	void FillContractList ( );
	void showPlayerVendorWindow ( struct FString sVendorGuid, struct FString sOwner, unsigned long bCanModify );
	void PlayerVendorAdd ( struct FString sGuid, int iCost );
	void PlayerVendorCancel ( struct FString sGuid );
	void PlayerVendorPurchase ( struct FString sGuid );
	void ReInitPlayerVendor ( );
	void PlayerVendorCollect ( );
	void InitPlayerVendor ( );
	void AddPlayerVendorItemSell ( struct FString sGuid, struct FString sContentGuid, int iCost, int iQuantity );
	void AddPlayerVendorItemBuy ( struct FString sGuid, struct FString sContentGuid, int iCost, int iQuantity, struct FString sItemName );
	void RequestPlayerVendorBuy ( );
	void RequestPlayerVendorSell ( );
	void showPetPaperdoll ( struct FString sPetGuid, struct FString sPetName );
	void PetEquippedItem ( struct FString sGuid, struct FString sSlotName );
	void UpdatePetEquipped ( );
	void closeConstruction ( );
	void setConstruction ( int iWoodCur, int iWoodMax, int iStoneCur, int iStoneMax, int iMetalCur, int iMetalMax, int iHitpoints );
	void showConstruction ( int iHouseId, unsigned long bChangeLock, unsigned long bNewKey );
	void InitHouseConstruction ( );
	void InitPetBag ( class ANowAtlasAvatarAi* pPet );
	void ReInitPetBags ( );
	int GetPetBagSize ( class ANowAtlasAvatarAi* pPet );
	void PetUnEquipAll ( struct FString sPetGuid );
	void setAdvancedStats ( int iStructures, int iArea, int iOverlap, int iTotal, unsigned long bLinked, int iNPCCost, int iTotalCPCost, int iCPIncome, int iCPCost, int iTotalCP, int iRadiusTgt, int iOffTgt, int iDefTgt, int iTierRadiusMax, int iTierOffMax, int iTierDefMax );
	void setPylonStats ( int iHpCur, int iHpMax, int iAoe, int iDef, int iOff );
	void eventaddBlacklist ( struct FString sPlayerName );
	void showBlacklist ( );
	void closePylon ( );
	void showPylon ( struct FString sPylonName, struct FString sGuildName, struct FString sLastRound, unsigned long bEditable, unsigned long bRename );
	struct FString CheckValidName ( struct FString NewName );
	void PylonSetName ( struct FString sName );
	void PylonSetDefense ( int iDefense );
	void PylonSetOffense ( int iOffense );
	void PylonSetRadius ( int iRadius );
	int FindTowerID ( struct FString sGuid );
	void PylonBlacklist ( );
	void PylonBlacklistRemove ( struct FString sName );
	void PylonBlacklistAdd ( struct FString sName );
	void InitPylonInfo ( );
	void InitPylon ( );
	void SendGetAllBlacklists ( );
	void SendPylonBlacklistRemove ( struct FString sName );
	bool SendPylonBlacklistAdd ( struct FString sName );
	void addNPC ( struct FString sDisplayName, struct FString sDescription, struct FString sRequirements, int iCostCoin, int iCostPP, int iUpkeepCoin, int iUpkeepCP );
	void updateSlots ( );
	void currentNPC ( struct FString sDisplayName, int iSlot );
	void addOverseerSlot ( int iSlotId, int iPercentX, int iPercentY, struct FString sDescription );
	void setOverseerBalances ( int iFundsCoin, int iFundsPP, int iTotalUpkeepCoin, int iTotalUpkeepCP );
	void showOverseer ( );
	void closeOverseer ( );
	void npcDismissed ( struct FString sTitle );
	void eventAddNPCToArray ( struct FString DisplayName, struct FString Description, struct FString Requirements, int CostCoin, int CostPP, int UpkeepCoin, int UpkeepCP );
	void DismissNPC ( int newSlot );
	void SetSlot ( int newSlot, int oldSlot );
	int FindNpcIndex ( struct FString sDisplayName );
	void GetCurrentNpcs ( );
	void HireNPC ( struct FString sTitle, int iSlot );
	void InitOverseerSlots ( );
	void InitOverseerBalance ( );
	void RequestOverseer ( );
	void InitOverseer ( );
	void SendSwapNPC ( int indexFrom, int indexToo );
	void SendDismissNPC ( int Index );
	void SendBuyNPC ( int Index );
	void GetNPCArray ( );
	void closeGlassBlowing ( );
	void showGlassBlowing ( );
	int SortByGlassLabel ( struct FsCraftGlassInfo A, struct FsCraftGlassInfo B );
	struct FString eventGetSendNameFromGlass ( struct FString sName );
	void CraftGlass ( struct FString sItem, struct FString sGuidA, struct FString sGuidB, struct FString sGuidC );
	bool WorkBenchIsHot ( );
	int GetGlassIndexByName ( struct FString sString );
	void UpdateGlassMaterials ( struct FString sString );
	void eventFinalizeGlassArrays ( );
	void eventAddGlassInfo ( struct FString sLabelName, struct FString sSendName, TArray< struct FString > matA, TArray< struct FString > matB, TArray< struct FString > matC );
	void InitGlassblowing ( );
	void DoGlassBlowing ( struct FString sGlassInfo, struct FString sMatA, struct FString sMatB, struct FString sMatC );
	TArray< struct FString > GetMatCItemGuids ( int iIndex );
	TArray< struct FString > GetMatBItemGuids ( int iIndex );
	TArray< struct FString > GetMatAItemGuids ( int iIndex );
	void InitGlassArrays ( );
	void closeOptionBar ( );
	void showOptionBar ( struct FString sTitle, struct FString sData );
	void eventFinalizeOptionBar ( struct FString sTitle, struct FString sData );
	void InitOptionBar ( TArray< struct FString > vUseSkillName );
	void showGamemaster ( int iRank, struct FString sRank );
	void TcpSendGM ( struct FString sData );
	void eventInitGameMasterMain ( );
	int GetGMRank ( );
	void GoToPet ( struct FString sGuid );
	void InitGMGotoPet ( );
	void GMResetAi ( struct FString sGuid );
	void InitGMGetPets ( );
	void eventInitGMBag ( );
	void AddGMBagItem ( struct FString sItemGuid, struct FString sData );
	void GMSpawnItem ( struct FString sGuid );
	void InitGMSpawnItem ( struct FString sItemBase );
	void FillGMSpawnItemList ( struct FString sItemBase );
	void PlaceWorkbench ( struct FString sGuid );
	void InitPlaceWorkbench ( );
	void SendPlaceWorkbench ( struct FString sGuid );
	void FillWorkbenchList ( );
	void SetVarD1 ( );
	void SetVarC2 ( );
	void SetVarC1 ( );
	void eventSetVarB4 ( );
	void SetVarB3 ( );
	void SetVarB2 ( );
	void SetVarB1 ( );
	void SetVarA1 ( );
	void SetNoobHelp ( int iNpc, int iVar );
	void SetTax ( );
	void CollectTax ( );
	void SendCollectTaxes ( struct FString sRespones );
	void SendSetTaxes ( struct FString sRespones );
	void renderShopList ( );
	void eventaddShopItem ( int iID, struct FString sCategory, struct FString sLabel, int iCost, struct FString sDescription );
	void setShopCurrency ( int iCurrency );
	void showShop ( );
	void ShopClaimItem ( int iID );
	void UpdateCurrency ( );
	void eventPendingUpdateCurrency ( );
	void ShopRequestItems ( );
	void InitShop ( );
	void ClaimItem ( int iID );
	int GetShopCurrency ( );
	void GetShopItems ( );
	void eventAddToTitleList ( struct FString sTitle, int iIndex );
	void ChangedTitle ( int iID );
	void ChangedTitleString ( struct FString sTitle );
	void InitTitles ( );
	void DoSetTitle ( int iID );
	void FillTitleList ( );
	void toggleMouseMode ( unsigned long bVisible );
	void ReloadUI ( );
	void resetConfig ( );
	void setAvatar ( struct FString sAvatarId, struct FString sData );
	void removeAllTutorials ( );
	void clearMenuOptions ( struct FString framename );
	void set3DRotation ( struct FString Element, int numberX, int numberY );
	void SetPosition ( struct FString Element, int numberX, int numberY );
	void setAlpha ( struct FString Element, int Percent );
	void SetScale ( struct FString Element, int Percent );
	void toggleElement ( struct FString Element, unsigned long forced );
	void SetMousePosition ( int xmouse, int ymouse );
	void eventChatMessage ( struct FString sChan, struct FString sMsg );
	void eventSendClientChatmessage ( struct FString sChan, struct FString sMsg );
	void MouseModeChanged ( unsigned long bMode );
	bool CloseStuff ( );
	void RemoveTimer ( struct FString timerLabel );
	void AddTimer ( struct FString timerLabel, int timerSeconds );
	void showAlert ( struct FString alertMessage );
	void updateMountFrame ( int hpCur, int hpMax, int spCur );
	void eventShowMountPanel ( unsigned long bShow );
	void updateTargetFrame ( int hpCur, int hpMax, unsigned long inCombat, int Flag, struct FString tgtName, unsigned long bInit, struct FString relation );
	void removeTarget ( );
	void addTarget ( struct FString tgtName, float hpCur, float hpMax, unsigned long inCombat, int Flag, unsigned long bClient, struct FString relation );
	void SetPlayerName ( struct FString Id, struct FString PlayerName );
	void toggleCombat ( struct FString Id, unsigned long combat );
	void setShield ( struct FString Id, struct FString WhatColor, struct FString relation, unsigned long bTween );
	void addMenuOption ( struct FString Id, struct FString optionLabel, struct FString optionAction, struct FString optionParam );
	void setPotion ( struct FString Id, int val );
	void setHunger ( struct FString Id, int val );
	void setPotionMax ( struct FString Id, int val );
	void setLowHunger ( struct FString Id, int val );
	void setMidHunger ( struct FString Id, int val );
	void setMaxHunger ( struct FString Id, int val );
	void setFatigueSP ( struct FString Id, float fatiguePercent );
	void setFatigueMP ( struct FString Id, float fatiguePercent );
	void setFatigueHP ( struct FString Id, float fatiguePercent );
	void setFatigueMax ( struct FString Id, float hp, float sp, float mp );
	void setCurrentMana ( struct FString Id, int manaNew, unsigned long initBar );
	void setCurrentStamina ( struct FString Id, int staminaNew, unsigned long initBar );
	void setUnitMax ( struct FString Id, int Health, int stamina, int mana, int kau );
	void setCurrentHealth ( struct FString Id, int healthNew, unsigned long initBar );
	void setCurrentKau ( struct FString Id, int kauNew, unsigned long initBar );
	void setPlayerDead ( unsigned long bDead );
	void eventtoggleCorrupt ( struct FString Id, int barId, unsigned long corrupted );
	void eventtogglePoison ( struct FString Id, int barId, unsigned long poisoned );
	void removeUnitFrame ( struct FString Id );
	void addUnitFrame ( struct FString Id, struct FString PlayerName, int initHealthCurrent, int initHealthMaximum, int initStaminaCurrent, int initStaminaMaximum, int initManaCurrent, int initManaMaximum, int initKauCurrent, int initKauMax, unsigned long initCombat, int showLabelsState, struct FString shieldPosition );
	void showUnitFrameDetails ( struct FString Id, int showState );
	void toggleExtra ( );
	void toggleReserves ( );
	void InitPlayerBars ( );
	void InitTargetBars ( );
	void ToggleTutorials ( );
	void addTutorial ( int Id, struct FString tutorialLabel, struct FString tutorialContent );
	void disableTutorial ( int tutorialId );
	class AActor* GetRotActor ( );
	int FindInChatArray ( class AActor* TestActor );
	void removedChatBubble ( struct FString chatAvatar );
	void chatBubblePosition ( struct FString chatAvatar, int chatX, int chatY, int chatDistance );
	void addChatBubble ( struct FString avatarName, struct FString chatText, int chatX, int chatY, int chatDistance, int chatChannel );
	void addChat ( class AActor* ChatOwner, struct FString Text, int Channel );
	void updateChatBubbles ( int Index, class UCanvas* Canvas );
	void GFXHudTick ( class UCanvas* C );
	void resetUI ( );
	void gfxTick ( float dTime );
	void RemoveMailDelegate ( );
	void InitMailDelegate ( );
	void eventLoggedOut ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void TakeMouseFocus ( unsigned long bOn );
	void eventOnClose ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventCheckAndSetCoolDown ( float fTimePassed );
	void GetItemGuid ( int bag, int Slot );
};

UClass* UNowGFXHudScene::pClassPointer = NULL;

// Class NowGame.NowGFXSceneCommandMenu
// 0x0008 (0x01A4 - 0x019C)
class UNowGFXSceneCommandMenu : public UNowGFXScene
{
public:
	int                                                m_iSelectedPet;                                   		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                m_iSelectedCommand;                               		// 0x01A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1595 ];

		return pClassPointer;
	};

	void clearOptions ( );
	void addOption ( struct FString sString );
	void SetTitle ( struct FString sTitle );
	void SetOption ( int iIndex );
	void SendCommand ( int FinalCommand );
	void RedrawMenuOptions ( );
	void EscapePressed ( );
	void NumberPressed ( int iNr );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXSceneCommandMenu::pClassPointer = NULL;

// Class NowGame.NowGFXSceneCurrentTasks
// 0x00A8 (0x0244 - 0x019C)
class UNowGFXSceneCurrentTasks : public UNowGFXScene
{
public:
	int                                                taskIndex;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarNpcQuestGiver*                QuestNpc;                                         		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                TASK_LOCATIONS;                                   		// 0x01A4 (0x0004) [0x0000000000000000]              
	struct FTaskLocation                               m_Locations[ 0x9 ];                               		// 0x01A8 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsTaskIndex >                       m_Tasks;                                          		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1596 ];

		return pClassPointer;
	};

	void abandonTask ( int TaskId );
	void eventremoveTask ( int Id );
	void eventaddTask ( int Id, struct FString Item, int Quantity, struct FString Category, struct FString Recipient, struct FString Destination, int reward, int deposit, int expires );
	struct FString eventgetLocation ( int Index );
	void setLocations ( );
	void event_removeTask ( struct FString _guid );
	void eventaddTaskIdentifer ( struct FString _guid, int* Index );
	struct FString eventgetTaskGuidFromIndex ( int Index );
	int eventgetTaskIndexFromGuid ( struct FString _guid );
	void GFXClose ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneCurrentTasks::pClassPointer = NULL;

// Class NowGame.NowGFXSceneEngineer
// 0x0010 (0x01AC - 0x019C)
class UNowGFXSceneEngineer : public UNowGFXScene
{
public:
	class ANowAtlasAvatar*                             NPC;                                              		// 0x019C (0x0004) [0x0000000000000000]              
	TArray< struct FBuyItems >                         itemArray;                                        		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1597 ];

		return pClassPointer;
	};

	void AddItem ( struct FString sGuid, struct FString Title, struct FString Description, struct FString Requirements, int Quantity, int costSilver, int CostPP );
	void setBalances ( int fundsCoin, int fundsPP );
	void BuyItem ( struct FString sGuid );
	void eventAddItemToUI ( struct FString sGuid, struct FString DisplayName, int costSilver, int CostPP );
	class ANowAtlasAvatarPlayerKeep* GetAKeep ( );
	int FindItemIndex ( struct FString sGuid );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXSceneEngineer::pClassPointer = NULL;

// Class NowGame.NowGFXSceneFriendAcceptDialog
// 0x0010 (0x01AC - 0x019C)
class UNowGFXSceneFriendAcceptDialog : public UNowGFXScene
{
public:
	struct FString                                     PlayerName;                                       		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x01A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1598 ];

		return pClassPointer;
	};

	void DialogueDecline ( int m_enum );
	void DialogueAccept ( int m_enum );
	bool isRunning ( );
	void GFXClose ( );
	void initDialogue ( struct FString Header, int Number );
	void eventsetDialog ( struct FString _name, int Number );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void RefuseFriendNative ( struct FString FriendName );
	void AcceptFriendNative ( struct FString FriendName );
};

UClass* UNowGFXSceneFriendAcceptDialog::pClassPointer = NULL;

// Class NowGame.NowGFXSceneFriendList
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneFriendList : public UNowGFXScene
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

UClass* UNowGFXSceneFriendList::pClassPointer = NULL;

// Class NowGame.NowGFXSceneFriendQuestionMenu
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneFriendQuestionMenu : public UNowGFXScene
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

	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneFriendQuestionMenu::pClassPointer = NULL;

// Class NowGame.NowGFXSceneGames
// 0x0004 (0x01A0 - 0x019C)
class UNowGFXSceneGames : public UNowGFXScene
{
public:
	class ANowAtlasAvatarGameBoard*                    gameBoard;                                        		// 0x019C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1601 ];

		return pClassPointer;
	};

	void onRemovePieceNotification ( int pieceID );
	void onMovePieceNotification ( int pieceID, int XPos, int YPos );
	void onAddPieceNotification ( int pieceType, int pieceID, int XPos, int YPos );
	void onRemovePieceFromInventory ( int pieceType );
	void onAddPieceToInventory ( int pieceType );
	void onAttemptPieceTake ( int pieceType, int pieceID, int XPos, int YPos );
	void GFXClose ( );
	void sendGameTellB ( struct FString TellB );
	void stopDrag ( );
	void startDrag ( );
	void toggleLockedMark ( int pieceID, unsigned long locked, struct FString byWhom );
	void postEventMsg ( struct FString msg );
	void removeParticipant ( struct FString avatarName );
	void addParticipant ( struct FString avatarName );
	void removePiece ( int pieceID );
	void failTakePiece ( int pieceID, int XPos, int YPos );
	void takePiece ( int pieceEnum, int pieceID, int XPos, int YPos );
	void movePiece ( int pieceID, int XPos, int YPos );
	void eventSendPieceToFlash ( int pieceEnum, int pieceID, int XPos, int YPos );
	void RecieveGameEvent ( int eEvent, int pieceType, int pieceID, int XPos, int YPos, struct FString avatarName );
	void RequestMyPieces ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool checkInventorySpace ( );
	void addPieceToInventory ( int pieceType );
	void removePieceFromInventory ( int pieceType );
	void ExtractMyPieces ( );
};

UClass* UNowGFXSceneGames::pClassPointer = NULL;

// Class NowGame.NowGFXSceneGmAiAttacks
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneGmAiAttacks : public UNowGFXScene
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

UClass* UNowGFXSceneGmAiAttacks::pClassPointer = NULL;

// Class NowGame.NowGFXSceneGmAiSpawn
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneGmAiSpawn : public UNowGFXScene
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

UClass* UNowGFXSceneGmAiSpawn::pClassPointer = NULL;

// Class NowGame.NowGFXSceneGmAiSpawnNpc
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneGmAiSpawnNpc : public UNowGFXSceneGmAiSpawn
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

UClass* UNowGFXSceneGmAiSpawnNpc::pClassPointer = NULL;

// Class NowGame.NowGFXSceneGMGUI
// 0x0008 (0x01A4 - 0x019C)
class UNowGFXSceneGMGUI : public UNowGFXScene
{
public:
	class ANowPawn*                                    MyPawn;                                           		// 0x019C (0x0004) [0x0000000000000000]              
	unsigned long                                      GUIActive : 1;                                    		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1605 ];

		return pClassPointer;
	};

	void recieveFlashGMCommand ( struct FString Command );
	void updatePetition ( struct FString petitionUser, struct FString entirePetition );
	void addPetition ( struct FString petition );
	void removePetition ( struct FString petitionToRemove );
	void initFlashGMGUI ( );
	void toggleGMGUI ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXSceneGMGUI::pClassPointer = NULL;

// Class NowGame.NowGFXSceneGuild
// 0x003C (0x01D8 - 0x019C)
class UNowGFXSceneGuild : public UNowGFXScene
{
public:
	TArray< struct FString >                           m_vMembers;                                       		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_vMemberRanks;                                   		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_Wars;                                           		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_OutGoingWars;                                   		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_IncomingWars;                                   		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1606 ];

		return pClassPointer;
	};

	void GFXClose ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneGuild::pClassPointer = NULL;

// Class NowGame.NowGFXSceneHouseFriendList
// 0x0014 (0x01B0 - 0x019C)
class UNowGFXSceneHouseFriendList : public UNowGFXScene
{
public:
	TArray< struct FString >                           m_vFriendNames;                                   		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AddTimer;                                         		// 0x01A8 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerHouse*                  m_pHouse;                                         		// 0x01AC (0x0004) [0x0000000000000000]              

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

UClass* UNowGFXSceneHouseFriendList::pClassPointer = NULL;

// Class NowGame.NowGFXSceneLibrary
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneLibrary : public UNowGFXScene
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

UClass* UNowGFXSceneLibrary::pClassPointer = NULL;

// Class NowGame.NowGFXSceneLockpicking
// 0x0018 (0x01B4 - 0x019C)
class UNowGFXSceneLockpicking : public UNowGFXScene
{
public:
	int                                                m_iNumPins;                                       		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                m_iDifficulty;                                    		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                m_iSkillLevel;                                    		// 0x01A4 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_NowPC;                                          		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     m_OnlineSub;                                      		// 0x01AC (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarKeySwitchObjectChest*         m_ChestAvatar;                                    		// 0x01B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1609 ];

		return pClassPointer;
	};

	void initLockpicking ( int iNumPins, int iDifficulty, int iSkillLevel, int iNumPicks );
	void GFXClose ( );
	void LockOpened ( );
	void PickBroken ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void GetChestStats ( );
	void SendOpenLock ( );
	void SendPickBroken ( );
};

UClass* UNowGFXSceneLockpicking::pClassPointer = NULL;

// Class NowGame.NowGFXSceneMurder
// 0x0018 (0x01B4 - 0x019C)
class UNowGFXSceneMurder : public UNowGFXScene
{
public:
	TArray< int >                                      MurderCunts;                                      		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MurderCuntsString;                                		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1610 ];

		return pClassPointer;
	};

	void GFXClose ( );
	void ReportMurderer ( struct FString sName );
	void SendToServer ( );
	void AddMurdererToFlash ( struct FString sName );
	void eventAddMurderer ( struct FString sName, int iIndex );
};

UClass* UNowGFXSceneMurder::pClassPointer = NULL;

// Class NowGame.NowGFXSceneNpcCityBrain
// 0x0034 (0x01D0 - 0x019C)
class UNowGFXSceneNpcCityBrain : public UNowGFXScene
{
public:
	class ANowAtlasAvatar*                             KeeperNpc;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	struct FString                                     sIntroText;                                       		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sGuildName;                                       		// 0x01AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCityName;                                        		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iGuards;                                          		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                iResCriminals;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMyGuild : 1;                                     		// 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanChange : 1;                                   		// 0x01CC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1611 ];

		return pClassPointer;
	};

	void addResponse ( int ChatID, int TargetID, struct FString uscript, struct FString msg );
	void addChat ( int Id, struct FString msg );
	void showContent ( );
	void setNPC ( struct FString npcName, struct FString npcExit, struct FString npcBack );
	void TurnOffResCriminals ( );
	void TurnOnResCriminals ( );
	void TurnOnGuards ( );
	void TurnOffGuards ( );
	void GenerateIntro ( );
	void loadContent ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneNpcCityBrain::pClassPointer = NULL;

// Class NowGame.NowGFXSceneNpcStable
// 0x0018 (0x01B4 - 0x019C)
class UNowGFXSceneNpcStable : public UNowGFXScene
{
public:
	struct FString                                     sIntroText;                                       		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iStableIndex;                                     		// 0x01A8 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarAiNPC*                        StableNpc;                                        		// 0x01AC (0x0004) [0x0000000000000000]              
	int                                                iStabledPets;                                     		// 0x01B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1612 ];

		return pClassPointer;
	};

	void addResponse ( int ChatID, int TargetID, struct FString uscript, struct FString msg );
	void addChat ( int Id, struct FString msg );
	void showContent ( );
	void setNPC ( struct FString npcName, struct FString npcExit, struct FString npcBack );
	void GenerateIntro ( );
	void GiveSkill ( int iIndex );
	void GeneratePetResponds ( );
	void loadContent ( );
	void GFXClose ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneNpcStable::pClassPointer = NULL;

// Class NowGame.NowGFXSceneNpcTutorial
// 0x0004 (0x01A0 - 0x019C)
class UNowGFXSceneNpcTutorial : public UNowGFXScene
{
public:
	class ANowAtlasAvatarNpcTutorialTrade*             TutorialNpc;                                      		// 0x019C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1613 ];

		return pClassPointer;
	};

	void addResponse ( int ChatID, int TargetID, struct FString uscript, struct FString msg );
	void addChat ( int Id, struct FString msg );
	void showContent ( );
	void setNPC ( struct FString npcName, struct FString npcExit, struct FString npcBack );
	void OpenTrade ( );
	void loadContent ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneNpcTutorial::pClassPointer = NULL;

// Class NowGame.NowGFXSceneOverseer
// 0x0010 (0x01AC - 0x019C)
class UNowGFXSceneOverseer : public UNowGFXScene
{
public:
	TArray< struct FKeepNPC >                          NPCList;                                          		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatar*                             NPC;                                              		// 0x01A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1614 ];

		return pClassPointer;
	};

	void addSlot ( int slotId, int percentX, int percentY, struct FString Description );
	void setBalances ( int fundsCoin, int fundsPP, int totalUpkeepCoin, int totalUpkeepCP );
	void addNPC ( struct FString DisplayName, struct FString Description, struct FString Requirements, int CostCoin, int CostPP, int UpkeepCoin, int UpkeepCP );
	void currentNPC ( struct FString DisplayName, int Slot );
	void DismissNPC ( int newSlot );
	void SetSlot ( int newSlot, int oldSlot );
	int FindNpcIndex ( struct FString DisplayName );
	void HireNPC ( struct FString Title, int Slot );
	void eventAddNPCToArray ( struct FString DisplayName, struct FString Description, struct FString Requirements, int CostCoin, int CostPP, int UpkeepCoin, int UpkeepCP );
	void GetCurrentNpcs ( );
	void InitSlots ( );
	class ANowAtlasAvatarPlayerKeep* GetAKeep ( );
	void InitKeepBalance ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void GFXClose ( );
};

UClass* UNowGFXSceneOverseer::pClassPointer = NULL;

// Class NowGame.NowGFXSceneTasks
// 0x0174 (0x0310 - 0x019C)
class UNowGFXSceneTasks : public UNowGFXScene
{
public:
	int                                                taskIndex;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	struct FString                                     TradeableItems[ 0x11 ];                           		// 0x01A0 (0x00CC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarNpcQuestGiver*                QuestNpc;                                         		// 0x026C (0x0004) [0x0000000000000000]              
	int                                                TASK_LOCATIONS;                                   		// 0x0270 (0x0004) [0x0000000000000000]              
	struct FTaskLocation                               m_Locations[ 0x9 ];                               		// 0x0274 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsTaskIndex >                       m_Tasks;                                          		// 0x0304 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1615 ];

		return pClassPointer;
	};

	void CreateTask ( struct FString ItemId, int itemQuantity, struct FString Category, struct FString Destination, int listingDays, int coinReward, int coinExpense, int coinDeposit );
	void removeTask ( int Id );
	void AcceptTask ( int TaskId );
	void setListingFee ( int coinsPerDay );
	void eventaddTask ( int Id, struct FString Item, int Quantity, struct FString Category, struct FString Recipient, struct FString Destination, int reward, int deposit );
	void addItemOption ( struct FString ItemId, struct FString ItemName, int MaxQuantity );
	void addDestination ( struct FString Destination );
	void setPlayerCoins ( int coins );
	void setItems ( );
	void setDestionations ( );
	void setTradeItems ( );
	struct FString eventgetLocation ( int Index );
	void setLocations ( );
	void event_removeTask ( struct FString _guid );
	void eventaddTaskIdentifer ( struct FString _guid, int* Index );
	struct FString eventgetTaskGuidFromIndex ( int Index );
	int eventgetTaskIndexFromGuid ( struct FString _guid );
	void GFXClose ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UNowGFXSceneTasks::pClassPointer = NULL;

// Class NowGame.NowGFXSceneTreasurer
// 0x0010 (0x01AC - 0x019C)
class UNowGFXSceneTreasurer : public UNowGFXScene
{
public:
	TArray< struct FTreasurerItemStruct >              vItems;                                           		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatar*                             NPC;                                              		// 0x01A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1616 ];

		return pClassPointer;
	};

	void StoreItem ( struct FString sGuid );
	void TradeItem ( struct FString sGuid, int Quantity );
	void setQuantity ( struct FString sGuid, int Quantity );
	void RemoveItem ( struct FString sGuid );
	void AddItem ( struct FString sGuid, struct FString Title, struct FString Description, int Status, int Quantity, int cp, float PP, int stackSize );
	void UpdateItem ( struct FString sGuid, int RemQuantity );
	class ANowAtlasAvatarPlayerKeep* GetAKeep ( );
	int GetMinQuantity ( struct FString sGuid );
	void eventFinishAddingItems ( );
	void eventDoAddItem ( struct FString sGuid, struct FString Title, struct FString Desc, int Status, int Quantity, int cp, float PP, int stackSize );
	void GFXClose ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXSceneTreasurer::pClassPointer = NULL;

// Class NowGame.NowHUD
// 0x0304 (0x0890 - 0x058C)
class ANowHUD : public AAtlasHUD
{
public:
	class UUIScene_WeatherAwareness*                   m_WeatherAwarenessScene;                          		// 0x058C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              additionalCrosshairPenalty;                       		// 0x0590 (0x0004) [0x0000000000000000]              
	float                                              fadeTimerForAdditionalCrosshairPenalty;           		// 0x0594 (0x0004) [0x0000000000000000]              
	struct FrangedCrosshairData                        rangedCrosshair;                                  		// 0x0598 (0x0030) [0x0000000000000000]              
	class UMaterial*                                   Crosshair;                                        		// 0x05C8 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           CrosshairRanged;                                  		// 0x05CC (0x0004) [0x0000000000000000]              
	unsigned long                                      bTargetMode : 1;                                  		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      MainMenu : 1;                                     		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      DontLoadHud : 1;                                  		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBloodOnCameraFX : 1;                             		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bConfusedCameraFX : 1;                            		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOnScreenMaterialFXOn : 1;                        		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPlayingDominantMatFX : 1;                        		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bJustHit : 1;                                     		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      InChat : 1;                                       		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      GMCrosshair : 1;                                  		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bGotErrorMessage : 1;                             		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bShowTargetCrosshair : 1;                         		// 0x05D0 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDrawAiTest : 1;                                  		// 0x05D0 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDrawCurve : 1;                                   		// 0x05D0 (0x0004) [0x0000000000000000] [0x00002000] 
	float                                              HitDir;                                           		// 0x05D4 (0x0004) [0x0000000000000000]              
	float                                              DelayTimer;                                       		// 0x05D8 (0x0004) [0x0000000000000000]              
	struct FString                                     DelayReason;                                      		// 0x05DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaterialFXEnd;                                    		// 0x05E8 (0x0004) [0x0000000000000000]              
	float                                              MaterialFXBlendStart;                             		// 0x05EC (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           OnScreenMaterialFX;                               		// 0x05F0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OverheadBG;                                       		// 0x05F4 (0x0004) [0x0000000000000000]              
	class UFont*                                       OverheadFont;                                     		// 0x05F8 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           HelmOcclusionFX;                                  		// 0x05FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    HelmDeltaRotator;                                 		// 0x0600 (0x000C) [0x0000000000000000]              
	struct FRotator                                    HelmLastBoneRot;                                  		// 0x060C (0x000C) [0x0000000000000000]              
	class UMaterialInstance*                           HitIndicatorFX;                                   		// 0x0618 (0x0004) [0x0000000000000000]              
	float                                              HitIndicatorStartFade;                            		// 0x061C (0x0004) [0x0000000000000000]              
	float                                              DeltaTime;                                        		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x0624 (0x0004) [0x0000000000000000]              
	class UNowOptionsDatastore*                        NowOptionsDS;                                     		// 0x0628 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ProgressTexture;                                  		// 0x062C (0x0004) [0x0000000000000000]              
	float                                              DelayTimerStart;                                  		// 0x0630 (0x0004) [0x0000000000000000]              
	class AActor*                                      QuickTarget;                                      		// 0x0634 (0x0004) [0x0000000000000000]              
	class UNowChildHud*                                MyChildHud;                                       		// 0x0638 (0x0004) [0x0000000000000000]              
	class UNowChildHudDebug*                           MyChildHudDebug;                                  		// 0x063C (0x0004) [0x0000000000000000]              
	class UNowGFXHud*                                  MyGFXHud;                                         		// 0x0640 (0x0004) [0x0000000000000000]              
	struct FString                                     ChatHelpString;                                   		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DrawHudDebug[ 0x28 ];                             		// 0x0650 (0x01E0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x0830 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      FullScreenColor;                                  		// 0x083C (0x0004) [0x0000000000000000]              
	struct FVector                                     vFollowPos[ 0x5 ];                                		// 0x0840 (0x003C) [0x0000000000000000]              
	int                                                iNextFollowPos;                                   		// 0x087C (0x0004) [0x0000000000000000]              
	float                                              fAiTest;                                          		// 0x0880 (0x0004) [0x0000000000000000]              
	float                                              fMaxCurve;                                        		// 0x0884 (0x0004) [0x0000000000000000]              
	float                                              fMinCurve;                                        		// 0x0888 (0x0004) [0x0000000000000000]              
	float                                              fCurveAmount;                                     		// 0x088C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1617 ];

		return pClassPointer;
	};

	bool IsNumber ( struct FString Number );
	void SetShowScores ( unsigned long bNewValue );
	void ShowScores ( );
	void ShowHUD ( );
	void ToggleHUD ( );
	void PostPos ( struct FVector inVec );
	struct FVector2D GetStringSizeForLabel ( class UUILabel* inLabel );
	void eventOpenUI ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues );
	void eventGetScene ( int SceneIndex, class UUIScene** Scene );
	void eventCloseUI ( class UAtlasAvatarComponent* InNpcComp, struct FString InKey );
	void InitOptionsDS ( );
	void SetupHitIndicationFX ( struct FRotator Direction );
	void DrawHitIndicationFX ( );
	void DrawHelmetOcclusion ( class ANowPawn* PlayerPawn );
	void CloseGuildMenu ( );
	void CloseLoadingScreen ( );
	void ToggleUserGuide ( );
	void ToggleCharacterSheet ( unsigned long bForce );
	void ToggleInventory ( );
	void eventOpenGuildInviteDialogue ( struct FString SourceAvatarName, struct FString guildName );
	void eventToggleGuildCode ( );
	void ToggleGuildMenu ( );
	void StartChatCommand ( );
	void StartChat ( );
	bool eventCloseStuff ( );
	void ToggleMainMenu ( );
	void ToggleSpells ( );
	void TogglePetInfo ( );
	void ToggleSkills ( );
	void eventToggleGuildDimplomacy ( );
	void eventToggleHouseTrade ( );
	void eventToggleHouseSignUI ( );
	void eventToggleHackListScene ( );
	void eventTogglePetitionListScene ( );
	void eventTogglePetitionScene ( );
	void eventTogglePetBankUI ( );
	void eventToggleGMHouseMainMenuUI ( );
	void eventToggleeCreateNewGuildUI ( );
	void eventToggleHouseWorkbench ( struct FString workBenchInfo, class ANowAtlasAvatarPlayerHouse* myHouse );
	void eventToggleGuildDiplomacyUI ( );
	void eventToggleGuildMembersUI ( );
	void eventToggleGuildLeaveGuildUI ( );
	void eventToggleHouseOptionsUI ( );
	void eventToggleGuildStoneUI ( );
	void eventToggleStable ( );
	void eventToggleHouseUpKeep ( );
	void eventToggleKeepTaxes ( );
	void eventToggleBuySiegeWeapon ( );
	void eventToggleKeepTerritoryControl ( );
	void eventToggleTerritoryNPC ( );
	void eventToggleHouseTerritoryControl ( );
	void eventToggleArmorCrafting ( int Type );
	void eventToggleTradeTutorial ( );
	void eventToggleShopSell ( );
	void eventToggleShopBrowse ( );
	void eventToggleShopOptions ( );
	void eventToggleShopMain ( );
	void eventToggleHouse ( );
	void DrawCrosshair ( );
	void DrawGMCrosshair ( );
	void DrawHUD ( );
	class UNowGFXHudScene* GetGFXHud ( );
	void ResetQuickTarget ( );
	void SetQuickTarget ( class AActor* NewTarget );
	void DrawTargetCrosshair ( class UCanvas* C );
	void DrawQuickTargetInfo ( struct FString avatarName, int Flag, struct FString GuildAcr );
	void ShowTargetCrosshair ( unsigned long bOn );
	void eventPostRender ( );
	void DrawOnScreenMaterialFX ( );
	void PlayOnScreenMaterialFX ( class UMaterialInstance* WhatFX, float Timer, float BlendOutTime, unsigned long bIsDominantMatFX );
	void StopOnScreenMaterialFX ( );
	void WasHitOff ( );
	void WasHit ( struct FVector FromDir );
	void eventStartDelayTimer ( unsigned long Start, struct FString Why, float Time, unsigned long bStun );
	void LoadDefaultScenes ( );
	void eventRecieveGameEvent ( int eEvent, int pieceType, int pieceID, int XPos, int YPos, struct FString avatarName );
	bool eventrightClickUse ( int bag, int Slot );
	void eventInitGfxScene ( int WhatScene );
	void eventPostBeginPlay ( );
	void NoHud ( );
	void DeleteErrorMessage ( );
	void SetErrorMessage ( struct FString newMessage );
	void eventUpdateGuildDiplomacyGui ( );
	void CloseResurrectionScene ( );
	void UpdateWeatherAwarenessSceneData ( int windDir, float windMagnitude, int rainMagnitude, struct FRotator windRotation );
	void PlayerTurnedNotification ( struct FRotator ViewRotation );
	void openCurrentTasks ( );
	void openFriendList ( );
	void ToggleCompass ( );
	void ToggleTutorials ( );
	void SetFullScreenColor ( struct FColor NewColor );
	void DrawDebugCanvas ( );
	int GetSpeedFromInt ( int iSpeed );
};

UClass* ANowHUD::pClassPointer = NULL;

// Class NowGame.NowMountManager
// 0x0038 (0x0074 - 0x003C)
class UNowMountManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class ANowAtlasAvatarAiDynamic* >          MountUpdateList;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxMidDetailMounts;                               		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MaxHighDetailMounts;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                CurMidDetailMounts;                               		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                CurHighDetailMounts;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              MidDetailRange;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              HighDetailRange;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              GenerateTimer;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortDel__Delegate;                              		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1618 ];

		return pClassPointer;
	};

	int SortDel ( class AActor* A, class AActor* B );
	void TickDetail ( );
	void OneSecTick ( );
	void TickManager ( );
	void AddToManager ( class ANowAtlasAvatarAiDynamic* NewMount, unsigned long bForceGenerate );
	void eventSetDetailLevel ( int NewLevel );
	void UpdateDetailLevel ( class ANowAtlasAvatarAiDynamic* Mount, int NewLevel );
	void InitManager ( );
	void GetIniInfo ( );
};

UClass* UNowMountManager::pClassPointer = NULL;

// Class NowGame.NowMusicManager
// 0x0034 (0x0070 - 0x003C)
class UNowMusicManager : public UObject
{
public:
	TArray< class USoundCue* >                         MusicTracks;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   CurrentMusicTrack;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   FadeInMusicTrack;                                 		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                CurrentTrack;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              LastChangeTime;                                   		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFadingIn : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFadeFromB : 1;                                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMusicDisabled : 1;                               		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              FadeTimeLeft;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              TrackDuration;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCompA;                                       		// 0x0064 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCompB;                                       		// 0x0068 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowPlayerController*                        MyController;                                     		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1619 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void PlayNextTrack ( );
	void StopTrack ( );
	void PlayTrack ( int WhatTrack );
	void UpdateVolume ( );
	void InitManager ( );
	void SetSoundCueB ( class USoundCue* New );
	void SetSoundCueA ( class USoundCue* New );
};

UClass* UNowMusicManager::pClassPointer = NULL;

// Class NowGame.NowOptionsDatastore
// 0x0028 (0x00A0 - 0x0078)
class UNowOptionsDatastore : public UUIDataStore
{
public:
	unsigned long                                      bFootStepSound : 1;                               		// 0x0078 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bFootStep_SoundExpensive : 1;                     		// 0x0078 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bFootStep_PlayersOnly : 1;                        		// 0x0078 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bPhysicsHitEffect : 1;                            		// 0x0078 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bShowGore : 1;                                    		// 0x0078 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bShowDecals : 1;                                  		// 0x0078 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bOtherTorchesLight : 1;                           		// 0x0078 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      LowTextures : 1;                                  		// 0x0078 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	unsigned long                                      bVSync : 1;                                       		// 0x0078 (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      bMotionBlur : 1;                                  		// 0x0078 (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	unsigned long                                      bSmoothFrameRate : 1;                             		// 0x0078 (0x0004) [0x0000000000004000] [0x00000400] ( CPF_Config )
	float                                              MasterSoundVolume;                                		// 0x007C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Res;                                              		// 0x0080 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                Version;                                          		// 0x008C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentVersion;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              MergeRange;                                       		// 0x0094 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MergeTimer;                                       		// 0x0098 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                bBloom;                                           		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1620 ];

		return pClassPointer;
	};

	bool eventGetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue );
	void InitMe ( );
	void eventSetTextureRes ( int NewSize, int LODGroup );
	void SetVSync ( unsigned long newValue );
	void SetBloom ( int newValue );
	void SetSmoothFrameRate ( unsigned long bNewValue );
	void SetMotionBlur ( unsigned long bNewValue );
	void SetLodSize ( struct FString newValue, int LODGroup );
};

UClass* UNowOptionsDatastore::pClassPointer = NULL;

// Class NowGame.NowPathNodes
// 0x001C (0x032C - 0x0310)
class ANowPathNodes : public AAtlasPathInfo
{
public:
	class ANowPathNodes*                               pParent;                                          		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStartPath : 1;                                   		// 0x0314 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class USpriteComponent*                            GoodSprite;                                       		// 0x0318 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            BadSprite;                                        		// 0x031C (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            BackSprite;                                       		// 0x0320 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            GuardSpawnSprite;                                 		// 0x0324 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        ArrowComp;                                        		// 0x0328 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1621 ];

		return pClassPointer;
	};

	struct FVector eventCalcArrowScale ( );
	struct FRotator eventCalcRot ( );
	void UpdateHelpers ( );
	bool ShouldBeHiddenBySHOW_NavigationNodes ( );
};

UClass* ANowPathNodes::pClassPointer = NULL;

// Class NowGame.NowPawn
// 0x02EC (0x08D8 - 0x05EC)
class ANowPawn : public AAtlasPawn
{
public:
	struct FPawnGib                                    PawnGibs[ 0x3 ];                                  		// 0x05EC (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLogEverything : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugFootsteps : 1;                              		// 0x0664 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCharSone : 1;                                    		// 0x0664 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      PendingSuicide : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsMale : 1;                                      		// 0x0664 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFaceCreated : 1;                                 		// 0x0664 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasSpellCharged : 1;                             		// 0x0664 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bChargingSpell : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsGMPawn : 1;                                    		// 0x0664 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsBeingMerged : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bFemale : 1;                                      		// 0x0664 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bInitialUpdateDone : 1;                           		// 0x0664 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bGotMeleeCombat : 1;                              		// 0x0664 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bGotRangedCombat : 1;                             		// 0x0664 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bGotMagicCombat : 1;                              		// 0x0664 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bGotFishingCombat : 1;                            		// 0x0664 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bBlockFallDamage : 1;                             		// 0x0664 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bSprint : 1;                                      		// 0x0664 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bWalking : 1;                                     		// 0x0664 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bForcedWalk : 1;                                  		// 0x0664 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bMercyMode : 1;                                   		// 0x0664 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bKnockedDown : 1;                                 		// 0x0664 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      inCastingMode : 1;                                		// 0x0664 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      inBlockingMode : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      particleEffectActive : 1;                         		// 0x0664 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bHiddenCriminal : 1;                              		// 0x0664 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bHasHelmet : 1;                                   		// 0x0664 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bIgnoreS : 1;                                     		// 0x0664 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      PredictStop : 1;                                  		// 0x0664 (0x0004) [0x0000000000000000] [0x10000000] 
	class AStaticMeshActor*                            MyBox;                                            		// 0x0668 (0x0004) [0x0000000000000000]              
	float                                              SavedVolumeFootStep;                              		// 0x066C (0x0004) [0x0000000000000000]              
	float                                              SavedVolumeFootStepGround;                        		// 0x0670 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           GUISettings;                                      		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SoneType;                                         		// 0x0680 (0x0004) [0x0000000000000000]              
	int                                                HeroType;                                         		// 0x0684 (0x0004) [0x0000000000000000]              
	TArray< class UParticleSystemComponent* >          CharacterEffects;                                 		// 0x0688 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	int                                                iBodyType;                                        		// 0x0694 (0x0004) [0x0000000000000000]              
	float                                              UpdateArmorTimer;                                 		// 0x0698 (0x0004) [0x0000000000000000]              
	int                                                CurrentSpell;                                     		// 0x069C (0x0004) [0x0000000000000000]              
	unsigned char                                      StunnedState;                                     		// 0x06A0 (0x0001) [0x0000000000000000]              
	class UCombatSystemMeleeNew*                       MeleeCombatNew;                                   		// 0x06A4 (0x0004) [0x0000000000000000]              
	class UCombatSystemRangedNew*                      RangedCombatNew;                                  		// 0x06A8 (0x0004) [0x0000000000000000]              
	class UCombatSystemMagicNew*                       MagicCombatNew;                                   		// 0x06AC (0x0004) [0x0000000000000000]              
	class UCombatSystemFishingNew*                     FishingCombatNew;                                 		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitBlood;                                         		// 0x06B4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BlockSparks;                                      		// 0x06B8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitBloodSwordTrail;                               		// 0x06BC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitBloodSwordTrailTarget;                         		// 0x06C0 (0x0004) [0x0000000000000000]              
	int                                                iFallingFixPosTries;                              		// 0x06C4 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           HitBlendSequence;                                 		// 0x06C8 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          InCombatModeBlend;                                		// 0x06CC (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          StunnedStateBlend;                                		// 0x06D0 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          IsBlockingBlend;                                  		// 0x06D4 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          IsDeadBlend;                                      		// 0x06D8 (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     CustomNode[ 0x3 ];                                		// 0x06DC (0x000C) [0x0000000000000000]              
	class UAnimNodeSequence*                           CustomSeq[ 0x3 ];                                 		// 0x06E8 (0x000C) [0x0000000000000000]              
	class UAnimNodeBlendList*                          HitBlendList;                                     		// 0x06F4 (0x0004) [0x0000000000000000]              
	class USkelControlBase*                            PhysSkel;                                         		// 0x06F8 (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   FootIK;                                           		// 0x06FC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BodyHitSoundCue;                                  		// 0x0700 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ShieldHitSoundCue;                                		// 0x0704 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeadHitSoundCue;                                  		// 0x0708 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeavyFatigue;                                     		// 0x070C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NormalFatigue;                                    		// 0x0710 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WasDrowningSound;                                 		// 0x0714 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WasDivingSound;                                   		// 0x0718 (0x0004) [0x0000000000000000]              
	struct FString                                     SoundPath;                                        		// 0x071C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0728 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerTitle;                                      		// 0x0734 (0x0004) [0x0000000000000000]              
	int                                                GuildFlag;                                        		// 0x0738 (0x0004) [0x0000000000000000]              
	int                                                CombatSpeed;                                      		// 0x073C (0x0004) [0x0000000000000000]              
	class AActor*                                      LastAttacked;                                     		// 0x0740 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorLadder*                   LadderActor;                                      		// 0x0744 (0x0004) [0x0000000000000000]              
	class ANowSkeletalMeshCape*                        CapeActor;                                        		// 0x0748 (0x0004) [0x0000000000000000]              
	class UAtlasAvatarComponent*                       Component;                                        		// 0x074C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      m_SkelMeshHead;                                   		// 0x0750 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      m_SkelMeshGhost;                                  		// 0x0754 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MySpecie;                                         		// 0x0758 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      RootSkelControl;                                  		// 0x075C (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         SavedCollisionComponent;                          		// 0x0760 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UNowPlayerDatastore*                         CachedNowPlayerDataStore;                         		// 0x0764 (0x0004) [0x0000000000000000]              
	float                                              BodyPitch;                                        		// 0x0768 (0x0004) [0x0000000000000000]              
	float                                              BodyYaw;                                          		// 0x076C (0x0004) [0x0000000000000000]              
	float                                              LastMountTimer;                                   		// 0x0770 (0x0004) [0x0000000000000000]              
	int                                                MountDrawScale;                                   		// 0x0774 (0x0004) [0x0000000000000000]              
	struct FString                                     PetDispName[ 0x5 ];                               		// 0x0778 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GuildAcronym;                                     		// 0x07B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxMovementSpeed;                                 		// 0x07C0 (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x07C4 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LastHitLoc;                                       		// 0x07C8 (0x000C) [0x0000000000000000]              
	float                                              LastDmg;                                          		// 0x07D4 (0x0004) [0x0000000000000000]              
	int                                                effectCounter;                                    		// 0x07D8 (0x0004) [0x0000000000000000]              
	int                                                HpCurBeforeUpdate;                                		// 0x07DC (0x0004) [0x0000000000000000]              
	struct FString                                     PendingSwing;                                     		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastActionName;                                   		// 0x07EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      NowCameraActor;                                   		// 0x07F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vLastResPos;                                    		// 0x07FC (0x000C) [0x0000000000000000]              
	float                                              LastBreathingTime;                                		// 0x0808 (0x0004) [0x0000000000000000]              
	struct FVector                                     DebugPos;                                         		// 0x080C (0x000C) [0x0000000000000000]              
	struct FVector                                     AtlasTimeStampedStopPos;                          		// 0x0818 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLastPos;                                         		// 0x0824 (0x000C) [0x0000000000000000]              
	float                                              PredictStuckTimer;                                		// 0x0830 (0x0004) [0x0000000000000000]              
	float                                              DefaultCollisionRadius;                           		// 0x0834 (0x0004) [0x0000000000000000]              
	float                                              DefaultCollisionHeight;                           		// 0x0838 (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerEffectLoc;                                  		// 0x083C (0x000C) [0x0000000000000000]              
	class AActor*                                      ServerEffectTarget;                               		// 0x0848 (0x0004) [0x0000000000000000]              
	class UTexture2DComposite*                         Final_ArmorTextures[ 0x7 ];                       		// 0x084C (0x001C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ArmorTexture;                                     		// 0x0868 (0x0004) [0x0000000000000000]              
	struct FMaterialIntPair                            UniqueArmorMaterials[ 0xC ];                      		// 0x086C (0x0060) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ArmorMaterial;                                    		// 0x08CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           SkinMaterial;                                     		// 0x08D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           HairMaterial;                                     		// 0x08D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1622 ];

		return pClassPointer;
	};

	void eventHideMeshes ( unsigned long bHide );
	float GetHeight ( );
	void eventClientEffect ( class AActor* pSourceActor, int eType, float fForce );
	void eventAnimEffectTarget ( class AActor* Target );
	void eventAnimEffectVector ( struct FVector Loc );
	void RemoveAllCharEffects ( );
	void eventInitHero ( int iHeroType );
	bool eventHeroOverrideMesh ( int iHeroType );
	void eventSendNPCInterest ( float Range );
	void eventEquipmentMount1 ( );
	void eventEquipmentMount2 ( );
	void eventEquipmentSaddle ( );
	void eventEquipmentIdle ( );
	void eventEquipmentMove ( );
	void eventSendLoadingState ( int Nr, struct FString Info );
	bool TestPos ( struct FVector ExitPos, class ANowAtlasAvatarSkM* Other );
	struct FVector FindStuckSpot ( unsigned long bLonger );
	void eventUnStuckMe ( );
	bool testForHouses ( struct FVector* newLocaltion );
	bool DoJump ( unsigned long bUpdating );
	void eventBaseChange ( );
	void WalkOff ( );
	void WalkOn ( );
	void SendFallingDamage ( unsigned long bInWater );
	class UNowOptionsDatastore* eventGetOptions ( );
	class ANowPlayerController* eventGetANowPC ( );
	class ANowPlayerController* eventGetNowPC ( );
	void eventCheckForDecalSpawn ( float DmgTaken );
	void RemoveBloodDecals ( );
	void AddBloodDecals ( float addValue );
	void eventAreaBloodDecals ( );
	void SetMercyPosition ( class AActor* WhatActor );
	class USkeletalMeshComponent* eventGetCurrentMesh ( );
	void eventTriggerSocketChange ( );
	void eventTriggerMountSocketChange ( );
	void eventAnimEnterMode ( unsigned long Enter, unsigned long bIgnoreAnims );
	void eventAnimEnterBlockingMode ( unsigned long Enter );
	void eventDestroyed ( );
	class UNowPlayerDatastore* GetNowPlayerDS ( );
	void eventPlayFootStepSound ( int FootDown );
	void SetSprint ( unsigned long bDoSprint );
	void eventRemoveSpellEffect ( );
	void eventSpawnReleaseSpellEffect ( unsigned long selfTarget );
	void eventSpawnChargeSpellEffect ( );
	void eventCancelSpells ( );
	void eventSpawnCombatSystems ( unsigned long bForce );
	void eventSetRemoteSize ( float fSize );
	void eventCheckSize ( );
	void ReGainTimer ( );
	void MountReGainTimer ( );
	bool CannotJumpNow ( );
	float ModifyStaminaRegWithArmorWeight ( );
	void eventSetStamina ( float S );
	void eventSetMountStamina ( float S );
	void StaminaTimer ( );
	void MountStaminaTimer ( );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy );
	void eventCameraLean ( int WhatDir );
	void eventPlayHitSound ( int lastHitBoneID );
	void eventSpawnHitFx ( struct FVector LastHitLocation, unsigned long ClientFeedBack, struct FVector PushBackVector, struct FVector AttackerToPlayer, int HitBoneID, unsigned long bIgnoreParticles );
	bool eventCheckForPerfectBlock ( int HitBoneID );
	bool eventCheckForShieldBash ( );
	void eventFixHeadCam ( );
	void eventSetAnimations ( unsigned long bForceThird );
	void eventInitFemaleAdditive ( );
	void eventInitEmoteAnims ( unsigned long bMale );
	void eventInitStartAnims ( );
	void CheckIfLoaded ( );
	bool FindCoolSpot ( );
	void FixPositionOnLogin ( );
	void FallingResetPosition ( );
	struct FVector GetPosAt ( float fDeltaTime, int* iStop );
	void Tick ( float DeltaTime );
	void TickCombatSystems ( float DeltaTime );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventSpawnWeapons ( );
	void PostBeginPlay ( );
	void eventSpawnCorpse ( unsigned long Killed, struct FName LastHitBoneName, float InDmg, unsigned long bFromMercyMode );
	void eventSpawnCorpseLogin ( );
	void eventEnterCombatModeLogin ( );
	void eventHideGhost ( );
	void eventShowGhost ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventResetStunned ( );
	void eventSetMercyMode ( );
	void eventSetKnockedDownMode ( struct FVector PushBackVector, unsigned long bFromHorse );
	void eventSetStunnedState ( int NewState );
	void eventSetLocalFlag ( int NewFlag );
	void eventClearGuildFlags ( );
	void eventReinitGuildFlag ( );
	void eventAddLocalFlagDelegate ( );
	void LocalFlagDelegateTriggered ( );
	void eventUpdateGroundSpeed ( );
	class UMaterialInstanceConstant* eventNowCreateAndSetMaterialInstanceConstant ( class USkeletalMeshComponent* SkelComp, int ElementIndex );
	void eventSpawnProjectileEffect ( struct FVector arrowLocation );
	bool eventTestForInterrupt ( );
	void eventUpdateWeaponStats ( );
	void eventFindAndCacheNodes ( );
	void eventResetAnimations ( );
	void eventGetAnimNodePointers ( int WhatType, class UAnimNodePlayCustomAnim** AnimNode, class UAnimNodeSequence** AnimSeq );
	class ANowAtlasAvatarAiDynamicMount* eventGetMount ( );
	void PlayGetUpCustom ( );
	void eventTurnOffCustomAnims ( );
	void eventSetFemaleCommonSounds ( );
	void eventPendingGetAndCreateWeapons ( );
	void eventPendingUpdateCharacterFace ( );
	void eventPendingGetAndSetState ( );
	void eventPendingGetAndSetAnimations ( );
	void eventMagicFizzle ( );
	void eventMagicSelfRelease ( );
	void eventMagicRelease ( );
	void eventSetCurrentSpell ( int newValue );
	void eventInvisible ( unsigned long On );
	void eventGMPawnInit ( int InitEnum, int InitType );
	void PawnSkelMeshCompOnParticleSystemFinished ( class UParticleSystemComponent* PSC );
	void eventPlayIndexedParticleEffect ( class UAnimNotify_PlayIndexedParticleEffect* AnimNotifyData );
	void eventspellSelfRelease ( );
	void eventRemoveCapeActor ( );
	void eventSetCapeActor ( class USkeletalMesh* NewMesh, class UPhysicsAsset* NewPhys );
	void eventHideRangedBone ( );
	void eventShowRangedBone ( );
	void eventPendingGetArmorColors ( );
	void eventPendingGetAndSetMount ( unsigned long bStart );
	void eventReAddMe ( );
	void eventSetTraceTime ( float NewLength, float NewMiddle, unsigned long bCombatMove );
	void eventSetBowMinDrawDistance ( float NewMinChargeTime );
	void eventSetBlockingState ( int WhatState );
	void eventRemoveMount ( );
	void eventCreateMount ( struct FString ContentInfo, struct FString DisplayName, unsigned long bInit );
	void eventSavePendingSwing ( struct FString whatSwing );
	void CloseResurrectSceneTimer ( );
	void SetCloseResurrectSceneTimer ( float Timer );
	void SetResurrectPosition ( );
	void CheckResDistance ( );
	void ClearResDistCheckTimer ( );
	void UpdateWeatherAwarenessData ( );
	void InitWeatherAwarenssUpdateLoop ( );
	void TerminateWeatherAwarenssUpdateLoop ( );
	struct FString getGUISetting ( struct FString guiToFetch, int whichSetting );
	void eventreceiveUpdatedGUISettings ( struct FString updatedSettingString );
	class UNowGFXHudScene* GetGFXHud ( );
	void Detected ( );
	void ReInitGmPawn ( );
	void PlayerInit ( int InitEnum );
	void SetGroundSpeed ( float New );
	struct FString GetAtlasType ( );
	bool IsPet ( class AActor* aPawn );
	bool HasDynamicPet ( );
	bool HasPet ( );
	struct FString addTitle ( struct FString sDisplayName, unsigned long bFormat, int iTitle );
	int GetBodyType ( );
	bool IsInNoobGuild ( );
	void TriggerHandleAction ( );
	bool GetAndSetMount ( unsigned long bInit );
	void PlayClientAnimation ( struct FString WhatAction );
	void GetAndSetState ( unsigned long bInitialUpdate );
	void InitSpecialWeapon ( class UStaticMesh_ContentInfo* WhatInfo, class ANowStaticMeshActorWeapon* WhatWeapon );
	void GetAndSetAnimations ( );
	struct FString GetAvatarIDIntString ( );
	float GetArmorEnc ( );
	void GetAndSetAcronym ( );
	int GetGuildFlag ( class AActor* pOther );
	void ReinitWeapons ( );
	void GetAndCreateWeapons ( );
	void UpdateCharacterFace ( );
	void TriggerDelayedArmorUpdate ( );
	void UpdateCharacterArmorColors ( );
	void UpdateCharacterArmor ( );
	struct FString GetDisplayName ( );
	struct FString GetAtlasFullName ( );
	bool AtlasUse ( class APlayerController* PC );
	void TakeClientDamage ( int HowMuch, unsigned long bOption );
	void CheckForFalling ( float fDeltaTime );
	void SetBodyPitch ( int NewRemoteViewPitch );
	void SetAwareDist ( int newDistance );
	void Emote ( struct FString WhatEmote );
	void DoSebbePwns ( );
	void DoKillMe ( );
	void DoStartMagicBehavior ( );
	void DoSpellReleaseAoECheat ( );
	void DoSpellReleaseAoE ( int X, int Y, int Z );
	void DoSpellReleaseSelfST ( );
	void DoSpellReleaseST ( class AActor* HitActor );
	void DoSpellCancelCharge ( );
	int GetSpellListSize ( int magicSchool );
	int GetSpellBitArrayForSchool ( int magicSchool );
	class USpellEffect_ContentInfo* GetSpellContentInfoOfSchool ( int SpellID, int magicSchool );
	class USpellEffect_ContentInfo* GetSpellContentInfo ( int SpellID );
	struct FString GetSpellContentInfoPath ( int SpellID );
	void DoSpellCharge ( int SpellID );
	void DoServerConsole ( );
	bool IsEquipSlotEmpty ( struct FString equipSlotName );
	int getAvatarFlag ( );
	void callSetLocalFlagDelegate ( );
	void KnockDown ( class ANowPawn* aPawn );
	void SendConsoleCommand ( struct FString Cmd );
	void LeaveMount ( );
	class UAtlasAvatarComponent* GetUAtlasComponent ( );
	void NowDoRangedCancelCharge ( );
	void NowDoRangedDamage ( int lastHitBoneID, int TargetFlag, float bowRange, class AActor* HitActor );
	void NowDoRangedStopFire ( );
	void NowDoRangedStartFire ( );
	bool isAmmoSlotEmpty ( );
	void SendLeaveCombatMode ( );
	void MeleeCombatCancel ( );
	void MeleeCombatMoveDamage ( class AActor* Target, int MoveType, int HitPart, int Force, unsigned long HandleHit );
	void MeleeCombatMoveRelease ( int MoveType );
	void MeleeCombatDamage ( class AActor* Target, unsigned char MoveType, int HitPart, int Power, int Force, unsigned long HandleHit );
	void MeleeCombatRelease ( unsigned char MoveType );
	void MeleeCombatCharge ( unsigned char MoveType, unsigned long bCounter );
	void MeleeCombatBlock ( unsigned long bOn, unsigned char MoveType );
	void MeleeCombatShieldBash ( class AActor* Target );
	void SendUpdatedGUISettings ( struct FString updatedSetting );
	void SpellCharge ( int SpellID );
	void SpellReleaseTraced ( int SpellID );
	void SpellReleaseSingleTarget ( class AActor* HitActor, int SpellID );
	void SpellReleaseAOE ( float _x, float _y, float _z, int SpellID );
	void SpellCancelCharge ( );
	void CallGuards ( class AActor* WhatActor, int iGuardLevel );
	void Resurrect ( );
	void StartPhysDeath ( int lastHitBoneID );
};

UClass* ANowPawn::pClassPointer = NULL;

// Class NowGame.NowPlayerController
// 0x038C (0x0A70 - 0x06E4)
class ANowPlayerController : public AAtlasPlayerController
{
public:
	class UNowOptionsDatastore*                        NowOptionsDS;                                     		// 0x06E4 (0x0004) [0x0000000000000000]              
	TArray< struct FPylonInfo >                        CachedPylonInfo;                                  		// 0x06E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPetInfo >                          CachedPetInfo;                                    		// 0x06F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPetSlot                                    vPetSlots[ 0x6 ];                                 		// 0x0700 (0x00C0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHouseSearchingMode : 1;                          		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      inTranscendentalAwareness : 1;                    		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPendingOpenPylonGui : 1;                         		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUnderGround : 1;                                 		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bTargetSelf : 1;                                  		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNowIgnoreInput : 1;                              		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHoldTab : 1;                                     		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bCanDodge : 1;                                    		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPendingLogOut : 1;                               		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bPendingLogOutQuit : 1;                           		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bShowHelmetOverlay : 1;                           		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bMoveStrafe : 1;                                  		// 0x07C0 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bMoveBackwards : 1;                               		// 0x07C0 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDebugCam : 1;                                    		// 0x07C0 (0x0004) [0x0000000000000000] [0x00002000] 
	float                                              fUnderGroundFade;                                 		// 0x07C4 (0x0004) [0x0000000000000000]              
	struct FString                                     m_structureType;                                  		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UCombatSystemNew*                            CurrentCombatSystemNew;                           		// 0x07D4 (0x0004) [0x0000000000000000]              
	class UStatTracker*                                MyStatTracker;                                    		// 0x07D8 (0x0004) [0x0000000000000000]              
	class UNowMusicManager*                            MyMusicManager;                                   		// 0x07DC (0x0004) [0x0000000000000000]              
	class UNowPlayerManager*                           MyPlayerManager;                                  		// 0x07E0 (0x0004) [0x0000000000000000]              
	class UNowMountManager*                            MyMountManager;                                   		// 0x07E4 (0x0004) [0x0000000000000000]              
	class UNowPhysManager*                             MyPhysManager;                                    		// 0x07E8 (0x0004) [0x0000000000000000]              
	class UNowAvatarManager*                           MyAvatarManager;                                  		// 0x07EC (0x0004) [0x0000000000000000]              
	class ULoginManager*                               MyLoginManager;                                   		// 0x07F0 (0x0004) [0x0000000000000000]              
	class UChatManager*                                MyChatManager;                                    		// 0x07F4 (0x0004) [0x0000000000000000]              
	class UNoobHelpManager*                            MyNoobHelpManager;                                		// 0x07F8 (0x0004) [0x0000000000000000]              
	TArray< class UClientEffect* >                     MyClientEffects;                                  		// 0x07FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClientViewMode*                             MyViewMode;                                       		// 0x0808 (0x0004) [0x0000000000000000]              
	class UTimeControl*                                TimeController;                                   		// 0x080C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWeatherControl*                             WeatherController;                                		// 0x0810 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AMortalRainSnowEmitterSpawnable*             RainAndSnow;                                      		// 0x0814 (0x0004) [0x0000000000000000]              
	class ANowAmbientSunLight*                         pNowAmbientSunLight;                              		// 0x0818 (0x0004) [0x0000000000000000]              
	class UContentInfo_StringList*                     CIL_EmoteList;                                    		// 0x081C (0x0004) [0x0000000000000000]              
	unsigned char                                      SavedDoubleClickMove;                             		// 0x0820 (0x0001) [0x0000000000000000]              
	struct FTarget                                     TargetList[ 0x5 ];                                		// 0x0824 (0x00B4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTarget                                     ASelectedTarget;                                  		// 0x08D8 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       DefaultSoundMode;                                 		// 0x08FC (0x0008) [0x0000000000000000]              
	struct FName                                       DeadSoundMode;                                    		// 0x0904 (0x0008) [0x0000000000000000]              
	float                                              MountTimer;                                       		// 0x090C (0x0004) [0x0000000000000000]              
	struct FName                                       LeaveMountState;                                  		// 0x0910 (0x0008) [0x0000000000000000]              
	float                                              SiltentStunTimer;                                 		// 0x0918 (0x0004) [0x0000000000000000]              
	float                                              DiedTimer;                                        		// 0x091C (0x0004) [0x0000000000000000]              
	float                                              DeleteItemTimer;                                  		// 0x0920 (0x0004) [0x0000000000000000]              
	float                                              TabTimer;                                         		// 0x0924 (0x0004) [0x0000000000000000]              
	float                                              TweenCamToZeroRotTimer;                           		// 0x0928 (0x0004) [0x0000000000000000]              
	float                                              EmoteTimer;                                       		// 0x092C (0x0004) [0x0000000000000000]              
	float                                              fDrinkTimer;                                      		// 0x0930 (0x0004) [0x0000000000000000]              
	int                                                iDrinkCounter;                                    		// 0x0934 (0x0004) [0x0000000000000000]              
	float                                              MoFOV;                                            		// 0x0938 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UOnlineSubsystemNowGame*                     NowGameOnlineSub;                                 		// 0x093C (0x0004) [0x0000000000000000]              
	TArray< class ANowPawn* >                          PawnUpdateList;                                   		// 0x0940 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            BaseActors;                                       		// 0x094C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMortalActorInitializer*                     ActorInit;                                        		// 0x0958 (0x0004) [0x0000000000000000]              
	float                                              Stamina_Dodge;                                    		// 0x095C (0x0004) [0x0000000000000000]              
	float                                              Stamina_Jump;                                     		// 0x0960 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MinSprint;                                		// 0x0964 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SprintDrain;                              		// 0x0968 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SprintDrainCombat;                        		// 0x096C (0x0004) [0x0000000000000000]              
	float                                              Stamina_WalkingAdd;                               		// 0x0970 (0x0004) [0x0000000000000000]              
	float                                              Stamina_JoggingAdd;                               		// 0x0974 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SwimmingDrain;                            		// 0x0978 (0x0004) [0x0000000000000000]              
	float                                              Stamina_CombatWalkAdd;                            		// 0x097C (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountSprintDrain;                         		// 0x0980 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountRegain;                              		// 0x0984 (0x0004) [0x0000000000000000]              
	float                                              Stamina_Regain;                                   		// 0x0988 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountWalk;                                		// 0x098C (0x0004) [0x0000000000000000]              
	float                                              Stamina_RegainAfterSwing;                         		// 0x0990 (0x0004) [0x0000000000000000]              
	float                                              Stamina_BlockStart;                               		// 0x0994 (0x0004) [0x0000000000000000]              
	float                                              Stamina_DrainBlock;                               		// 0x0998 (0x0004) [0x0000000000000000]              
	float                                              Stamina_BlockHit;                                 		// 0x099C (0x0004) [0x0000000000000000]              
	float                                              Stamina_ShieldBash;                               		// 0x09A0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SwingWeapon;                              		// 0x09A4 (0x0004) [0x0000000000000000]              
	float                                              Stamina_HoldWeapon;                               		// 0x09A8 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountKnockDrain;                          		// 0x09AC (0x0004) [0x0000000000000000]              
	float                                              Stamina_KnockedDownDrain;                         		// 0x09B0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_TakeDamage;                               		// 0x09B4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeartBeat;                                        		// 0x09B8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   UnderWaterLoop;                                   		// 0x09BC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EtherWorldLoop;                                   		// 0x09C0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AimedSwing;                                       		// 0x09C4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PerfectBlock;                                     		// 0x09C8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   GuildSounds[ 0x8 ];                               		// 0x09CC (0x0020) [0x0000000000000000]              
	class USoundCue*                                   BuySound;                                         		// 0x09EC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ItemPlaceSound;                                   		// 0x09F0 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCompA;                                       		// 0x09F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCompB;                                       		// 0x09F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCompC;                                       		// 0x09FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             UnderWaterParticles;                              		// 0x0A00 (0x0004) [0x0000000000000000]              
	class AActor*                                      CombatTarget;                                     		// 0x0A04 (0x0004) [0x0000000000000000]              
	class UUIScene_HUD*                                MyUISceneHud;                                     		// 0x0A08 (0x0004) [0x0000000000000000]              
	int                                                LogOutCounter;                                    		// 0x0A0C (0x0004) [0x0000000000000000]              
	struct FVector                                     LogOutLoc;                                        		// 0x0A10 (0x000C) [0x0000000000000000]              
	int                                                LoginStage;                                       		// 0x0A1C (0x0004) [0x0000000000000000]              
	float                                              LastVar;                                          		// 0x0A20 (0x0004) [0x0000000000000000]              
	float                                              Ar[ 0x5 ];                                        		// 0x0A24 (0x0014) [0x0000000000000000]              
	int                                                ArB[ 0x5 ];                                       		// 0x0A38 (0x0014) [0x0000000000000000]              
	float                                              fStrafeMod;                                       		// 0x0A4C (0x0004) [0x0000000000000000]              
	float                                              fBackMod;                                         		// 0x0A50 (0x0004) [0x0000000000000000]              
	float                                              fAthleticsMod;                                    		// 0x0A54 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDeathPos;                                        		// 0x0A58 (0x000C) [0x0000000000000000]              
	TArray< class UUIScene_Now_BaseScene* >            CurrentActiveScenes;                              		// 0x0A64 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1623 ];

		return pClassPointer;
	};

	void BugItGo ( float X, float Y, float Z, int Pitch, int Yaw, int Roll );
	void PathClear ( );
	void PathChild ( int Cnt );
	void PathStep ( int Cnt );
	void SaveActorConfig ( struct FName actorName );
	void SaveClassConfig ( struct FString ClassName );
	void ShowGameState ( );
	void ShowPlayerState ( );
	void ListCE ( );
	void ListConsoleEvents ( );
	void CE ( struct FName EventName );
	void CauseEvent ( struct FName EventName );
	void ClearProgressMessages ( );
	void SwitchLevel ( struct FString URL );
	void ChangeTeam ( struct FString TeamName );
	void SwitchTeam ( );
	void SetName ( struct FString S );
	void Suicide ( );
	void NextWeapon ( );
	void PrevWeapon ( );
	void ThrowWeapon ( );
	void UTrace ( );
	void Pause ( );
	void DebugPause ( );
	void QuickLoad ( );
	void QuickSave ( );
	void LocalTravel ( struct FString URL );
	void RestartLevel ( );
	void Speech ( struct FName Type, int Index, struct FString Callsign );
	void Camera ( struct FName NewMode );
	void TeamSay ( struct FString msg );
	void Say ( struct FString msg );
	void Mutate ( struct FString MutateString );
	void TeamTalk ( );
	void EnableCheats ( );
	void eventSetUnderground ( unsigned long bNewValue );
	bool eventFindTalkerWithID ( int iID );
	struct FString ParseGhostMessage ( struct FString WhatMessage, unsigned long bFromEther, int chanSize, unsigned long bNotChat );
	class ANowAmbientSunLight* GetAmbientSunLight ( );
	void Tick ( float DeltaTime );
	void eventAddDrinkCounter ( );
	void eventResetGhostModeStats ( );
	void eventGhostModeOn ( );
	float GetStamWgtRem ( );
	float GetStamWgtAdd ( );
	void eventReCalcStamDrains ( );
	bool CheckForAtlasAvatars ( );
	float CalcStamina_JoggingAdd ( );
	float CalcStamina_Regain ( );
	float GetKnockBackValue ( );
	void StopReading ( );
	void ActionBarSlot ( int iBar, int iSlot );
	void option_VSync ( unsigned long bNewValue );
	void option_SmoothFrameRate ( unsigned long bNewValue );
	void option_Bloom ( int bNewValue );
	void option_MotionBlur ( unsigned long bNewValue );
	void option_SetTextureRes ( int NewMax, int LODGroup );
	void option_SetMergeTimer ( float newValue );
	void option_SetMergeRange ( int newValue );
	void option_SetVolume ( float NewVolume );
	void option_bMustTarget ( );
	void option_bShowDecals ( );
	void option_bPhysicsHitEffect ( );
	void optionsbFootStep_PlayersOnly ( );
	void option_bFootStep_SoundExpensive ( );
	void option_bFootStepSound ( );
	void option_bMediumTextures ( );
	void option_bLowTextures ( );
	void MortalSuicide ( );
	class UNowOptionsDatastore* eventGetOptions ( );
	void eventPendingLogOut ( unsigned long bInit, unsigned long bQuit );
	bool InSecurityZone ( class APawn* WhatPawn );
	void eventCancelLogOut ( );
	void eventStartUnderWaterEffects ( unsigned long bEnd );
	void eventStartBlurEffects ( unsigned long bEnd );
	void eventEndBlurEffects ( );
	void eventStartTimedBlurEffect ( float fTime );
	void setHouseDoorCollisionFalse ( );
	void setHouseDoorCollisionTrue ( );
	void eventStartDeathEffects ( unsigned long bEnd );
	void eventAllGhosts ( unsigned long bShow );
	void SetupEtherworldsActor ( );
	void eventSeeDeadPeopleSpell ( unsigned long bShow );
	void eventstopHouseModeSearch ( );
	void searchForHouses ( );
	bool ToCloseToPylon ( struct FVector vLoc );
	void turnOfSearchMode ( class ANowAtlasAvatarPlayerHouse* _house );
	void checkHouse ( class ANowAtlasAvatarPlayerHouse* _house );
	void eventstartHouseModeSearch ( unsigned long modeOnOff, struct FString _structureType );
	void NowPawnDied ( unsigned long Killed, class ANowCorpse* Corpse, struct FName LastHitBoneName );
	void eventNowPawnDiedLogin ( );
	void InitOptionsDS ( );
	void eventResetCameraMode ( );
	void SetCameraMode ( struct FName NewCamMode );
	void NowSetSoundMode ( struct FName newSoundMode );
	void eventSetBeastCameraView ( class AActor* A );
	bool eventHasLineOfSightTo ( class AActor* TestActor, float LoSDegreeCOSINEValue );
	void TargetAndUse ( );
	bool EscPressed ( );
	bool eventNumberPressed ( int iNr );
	void TargetSelfOff ( );
	void TargetSelfOn ( );
	void eventStartDelayTimer ( struct FString Why, float Time );
	void SprintOff ( );
	void SprintOn ( );
	int GetServerTime ( );
	int GetAtlasFlag ( class AActor* C );
	int GetAtlasMaxHealth ( class AActor* C );
	int GetAtlasHealth ( class AActor* C );
	bool CanDodge ( );
	void UpdateTargetListRemovedFrom ( class AActor* A );
	void UpdateTargetListAddedTo ( class AActor* A );
	class UNowPlayerDatastore* eventGetNowPlayerDS ( );
	class ANowAtlasAvatarAiDynamicMount* eventGetMount ( );
	class UNowEntryDatastore* eventGetNowEntryDS ( );
	void eventPreRender ( class UCanvas* Canvas );
	void eventGameMessage ( struct FString WhatMessage, struct FString sChan );
	class AActor* GetTargetInAim ( int Range, int ExtraTraceFlags );
	void eventResetTargetFlags ( );
	class AActor* eventGetTarget ( );
	void eventClearTargets ( );
	void CheckTargetRange ( );
	bool CheckForHouseSearch ( );
	bool TargetNearestEnemy ( );
	void TabLookForTarget ( );
	struct FTraceHitInfo GetTargetHitInfo ( );
	void RHoldTab ( );
	void HoldTab ( );
	void FocusCharacterOnPoint ( struct FVector WorldLoc );
	void SelectAtlasTarget ( class AActor* NewTarget );
	void UpdateGFXTarget ( );
	void addTarget ( struct FTarget needle );
	void UseTarget ( );
	bool CloseEnough ( class AActor* pTarget );
	void Dismount ( );
	void CancelCharge ( );
	void Quick ( int Index );
	void ToggleCombatMode ( unsigned long bForce );
	class UNowGFXHud* eventGetGFX ( );
	class UNowGFXHudScene* eventGetGFXHud ( );
	bool eventIsPhysOk ( );
	void SetFishingMode ( unsigned long bNewValue, unsigned long bForce );
	void SetRangedMode ( unsigned long bNewValue, unsigned long bForce );
	void SetMeleeMode ( unsigned long bNewValue, unsigned long bForce );
	bool CheckCombatTimerOk ( );
	void eventExitCombatMode ( );
	void eventEnterCombatModeLogin ( );
	void eventForceCamera ( float Time );
	void TickCamToZeroRot ( float DT );
	void eventTweenCamToZeroRot ( );
	void eventSetStunned ( struct FString Why, float Time );
	void eventSetDisableMouseRotate ( unsigned long newValue );
	void GetNewSkillStats ( );
	void StopAltFire ( unsigned char FireModeNum );
	void StartAltFire ( unsigned char FireModeNum );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void eventGhost ( );
	void eventWalk ( );
	void eventFly ( );
	void eventSpellAction ( int SpellID );
	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void eventOpenGamesMenu ( );
	class UAudioDevice* GetAudioDevice ( );
	void UpdateSoundVolume ( );
	void eventSetPendingAiSlotUpdate ( unsigned long bInit );
	void eventPendingShowMountPanel ( );
	void OpenMountScene ( );
	bool eventCanUsePetEquipment ( );
	void ForceCloseSceneUGLY ( struct FName Scene );
	void eventLightHack ( );
	void LevelLoaded ( );
	void PostAvatarObtained ( );
	void ReplaceWeather ( );
	void eventAttachActorsToPlayer ( );
	void eventAttachActorsToMount ( );
	void KeepBased ( class AActor* BaseActor );
	void TickWeather1Sec ( );
	void StartWeather ( );
	void UpdateTime ( );
	void SynchTime ( );
	void StartTime ( );
	void RedrawAllPawns ( );
	int eventFindInCIListString ( struct FString WhatString, class UContentInfo_StringList* WhatList );
	void eventPlayAmbientSound ( class USoundCue* NewCue );
	void eventStopAmbientSound ( );
	void eventInitInputSystem ( );
	void eventCancelAutoRun ( );
	bool eventNotifyHeadVolumeChange ( class APhysicsVolume* NewVolume );
	void eventPlayIconSound ( );
	void eventPlayGuildSound ( int WhatSound );
	void eventSetFishingOn ( float NewRange );
	void eventUpdatePetUI ( );
	void CheckSceneDistance ( );
	void AddCurrentActiveScene ( class UUIScene_Now_BaseScene* NewScene );
	void RemoveDistanceClose ( class UUIScene_Now_BaseScene* Scene );
	class UClientEffect* eventAddClientEffect ( class UClass* NewEffectName, float EffectRate, float StartTime );
	void eventAddViewMode ( class UClass* NewViewMode );
	void eventAddClientEffectString ( struct FString NewEffectName, float EffectRate, float StartTime );
	void eventUpgradePylonMode ( );
	void eventPlacePylonMode ( );
	void eventPlaceKeepNpcMode ( );
	void eventPlaceAvatarMode ( struct FString sContentInfo, unsigned long bGuardZone );
	void eventViewModeOff ( );
	void ResetPetInfo ( );
	void eventAddPetInfo ( struct FString sPetName, struct FString sPetType, int iPetLevel, int iPetLoyalty, int iPetHP, int iStableIndex, struct FString sState );
	void ResetPylonInfo ( );
	void eventAddPylonInfo ( struct FString newPylonGuid, struct FString newPylonGuild, struct FVector newPylonLoc, float newPylonAOE, float newPylonAOEMeter, float newPylonAOETgt, float newPylonDef, float newPylonDefTgt, float newPylonAtt, float newPylonAttTgt, int newPylonTier, int newPylonUpkeep );
	void eventClearPylonInfo ( );
	void OpenPylonGui ( );
	void PingTimer ( );
	void eventPostBeginPlay ( );
	void VarGainTimer ( );
	class ANowAtlasAvatarPlayerHouse* GetHouseFromID ( int iID );
	bool IsMyPet ( class ANowAtlasAvatarAi* pAi );
	class ANowAtlasAvatarAi* eventGetPetFromGuid ( struct FString sGuid );
	class ANowPawn* GetPawnFromName ( struct FString sName );
	class ANowAtlasAvatarAi* GetPetFromName ( struct FString sPetName );
	void eventUpdateAiSlot ( class ANowAtlasAvatarAi* pActor, int iSlot );
	void eventClearCachedPetInfo ( );
	void AskAiCommandAbandonGlobal ( struct FString sGuid );
	void AskAiCommandAbandon ( class ANowAtlasAvatar* aActor );
	class ANowAtlasAvatarAi* FindAiFromAvatarID ( struct FString sAvatarId );
	bool IsLocalAllowed ( class AActor* pActor );
	int GetNoobBitMap ( int iAiId );
	void SendConsumeItem ( int iCounter );
	void SendUseToTarget ( );
	void CmdUseItemSlot ( int iSlot );
	struct FString StringColorFromIntColor ( int iIntColor );
	struct FColor ColorFromIntColor ( int iIntColor );
	int GetIntColor ( int R, int G, int B, int A );
	struct FString GetPetGuid ( int iSlotId );
	bool UseSpell ( struct FString sSpellGuid );
	struct FString GetGuidFromSpellName ( struct FString sSpellGuid );
	bool UseSkill ( struct FString sSkillGuid );
	struct FString GetGuidFromSkillName ( struct FString sName );
	void DebugNavMeshErrors ( );
	struct FString RemTags ( struct FString sString );
	void AiCommandMount ( class ANowAtlasAvatar* aActor );
	void AiCommandLevelLock ( class ANowAtlasAvatar* aActor );
	void AiCommandRename ( class ANowAtlasAvatar* aActor, struct FString sNewName );
	void AiCommandAbandonGlobal ( struct FString sGuid );
	void AiCommandAbandon ( class ANowAtlasAvatar* aActor );
	void AiCommandFeed ( class ANowAtlasAvatar* aActor, struct FString sItemGuid );
	void AiCommandStay ( class ANowAtlasAvatar* aActor );
	void AiCommandMode ( class ANowAtlasAvatar* aActor, int NewMode );
	void AiCommandGoToPos ( class ANowAtlasAvatar* aActor, struct FVector vPos );
	void AiCommandAttack ( class ANowAtlasAvatar* aActor, class AActor* ATarget );
	void AiCommandFollow ( class ANowAtlasAvatar* aActor, class AActor* ATarget );
	void SendEscape ( );
	void CalcClusterInfo ( struct FString TargetPylonGuid, float* MaxArea, float* IntersectArea, int* PointsToSpend, int* PointsCost, int* TotalTowersInCluster, int* bConnectedToKeep, int* iTierCost, int* iCanChange, int* iCanSeeTarget, int* iMaxTargetAoe, int* iMaxTargetDef, int* iMaxTargetAtt );
	float InterSectCalcThing ( float A1, float A2, struct FVector* Pos1, struct FVector* Pos2 );
	void GetRawDynamicMountStatsFromString ( struct FString StatString, int iLevel, int* attrb_Strength, int* attrb_Dexterity, int* attrb_Constitution, int* attrb_Psyche, int* attrb_Intelligence, int* attrb_Speed, int* attrb_Size, int* attrb_Weight );
	void GetDynamicMountStatsFromString ( struct FString StatString, int iLevel, int* attrb_Strength, int* attrb_Dexterity, int* attrb_Constitution, int* attrb_Psyche, int* attrb_Intelligence, int* attrb_Speed, int* attrb_Size, int* attrb_Weight );
	void GetFriendsListName ( TArray< struct FString >* out_list );
	void ForceUpdateDLE ( class AActor* DLEC );
	bool UpdateWeather ( );
	bool IsInGuild ( );
	bool IsThisMyGuild ( struct FString GuildGuid );
	struct FString GetVersionString ( );
	bool CommandOk ( struct FString WhatCommand );
	void GetQueryStats ( );
	int GetPetPointsMax ( );
	int GetPetPoints ( );
	void GetMurderCounts ( );
	void GetWeights ( );
	void SetLastVar ( float New );
	void SetVarB ( int WhatVal, int WhatVar );
	void SetVar ( float WhatVal, int WhatVar );
	int GetVarB ( int WhatVar );
	float GetVar ( int WhatVar );
	bool ShowingMouse ( );
	void SetLoginStage ( int newStage );
	void SetSoundCueC ( class USoundCue* New );
	int GetSkillLevel ( struct FString WhatSkill );
};

UClass* ANowPlayerController::pClassPointer = NULL;

// Class NowGame.NowPlayerDatastore
// 0x0214 (0x028C - 0x0078)
class UNowPlayerDatastore : public UUIDataStore
{
public:
	struct FUITarget                                   TargetList[ 0x5 ];                                		// 0x0078 (0x00C8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUIWindow >                         Windows;                                          		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Caps[ 0x7 ];                                      		// 0x0158 (0x001C) [0x0000000000000000]              
	float                                              Size;                                             		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              Strength;                                         		// 0x0178 (0x0004) [0x0000000000000000]              
	float                                              Dexterity;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              Intelligence;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              Psyche;                                           		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              Constitution;                                     		// 0x0188 (0x0004) [0x0000000000000000]              
	int                                                CurHP;                                            		// 0x018C (0x0004) [0x0000000000000000]              
	int                                                maxHP;                                            		// 0x0190 (0x0004) [0x0000000000000000]              
	int                                                CurMP;                                            		// 0x0194 (0x0004) [0x0000000000000000]              
	int                                                MaxMP;                                            		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                CurSP;                                            		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                MaxSP;                                            		// 0x01A0 (0x0004) [0x0000000000000000]              
	float                                              MaxHPThr;                                         		// 0x01A4 (0x0004) [0x0000000000000000]              
	float                                              MaxMPThr;                                         		// 0x01A8 (0x0004) [0x0000000000000000]              
	float                                              MaxSPThr;                                         		// 0x01AC (0x0004) [0x0000000000000000]              
	int                                                ReserveHP;                                        		// 0x01B0 (0x0004) [0x0000000000000000]              
	int                                                ReserveHPMax;                                     		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                ReserveHPThresh;                                  		// 0x01B8 (0x0004) [0x0000000000000000]              
	int                                                ReserveMP;                                        		// 0x01BC (0x0004) [0x0000000000000000]              
	int                                                ReserveMPMax;                                     		// 0x01C0 (0x0004) [0x0000000000000000]              
	int                                                ReserveMPThresh;                                  		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                ReserveSP;                                        		// 0x01C8 (0x0004) [0x0000000000000000]              
	int                                                ReserveSPMax;                                     		// 0x01CC (0x0004) [0x0000000000000000]              
	int                                                ReserveSPThresh;                                  		// 0x01D0 (0x0004) [0x0000000000000000]              
	int                                                Hunger;                                           		// 0x01D4 (0x0004) [0x0000000000000000]              
	int                                                Potion;                                           		// 0x01D8 (0x0004) [0x0000000000000000]              
	int                                                MaxPotion;                                        		// 0x01DC (0x0004) [0x0000000000000000]              
	int                                                PlayerWeight;                                     		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              Fatness;                                          		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              CurSPFloat;                                       		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                MountCurHP;                                       		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                MountMaxHP;                                       		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              MountCurSP;                                       		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                MountMaxSP;                                       		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                PetCurHP;                                         		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                PetMaxHP;                                         		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                PetCurL;                                          		// 0x0204 (0x0004) [0x0000000000000000]              
	int                                                PetMaxL;                                          		// 0x0208 (0x0004) [0x0000000000000000]              
	struct FString                                     PetDispName;                                      		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DamageBonus;                                      		// 0x0218 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x021C (0x0004) [0x0000000000000000]              
	int                                                MaxWeight;                                        		// 0x0220 (0x0004) [0x0000000000000000]              
	int                                                FreeWeight;                                       		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                ArmorWeight;                                      		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                ArmorMaxWeight;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                ArmorFreeWeight;                                  		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                EncWeight;                                        		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                PlayerFlag;                                       		// 0x0238 (0x0004) [0x0000000000000000]              
	class USurface*                                    m_FlagIcon;                                       		// 0x023C (0x0004) [0x0000000000000000]              
	class USurface*                                    HCFlagIcon;                                       		// 0x0240 (0x0004) [0x0000000000000000]              
	class USurface*                                    FlagIcons[ 0xA ];                                 		// 0x0244 (0x0028) [0x0000000000000000]              
	float                                              SkillPointPool;                                   		// 0x026C (0x0004) [0x0000000000000000]              
	int                                                AttributePointPool;                               		// 0x0270 (0x0004) [0x0000000000000000]              
	int                                                MurderCount;                                      		// 0x0274 (0x0004) [0x0000000000000000]              
	int                                                MurderCountTimer;                                 		// 0x0278 (0x0004) [0x0000000000000000]              
	int                                                StatLossCount;                                    		// 0x027C (0x0004) [0x0000000000000000]              
	int                                                StatLossCountTimer;                               		// 0x0280 (0x0004) [0x0000000000000000]              
	float                                              MaxUnderWaterTime;                                		// 0x0284 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        MyController;                                     		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1624 ];

		return pClassPointer;
	};

	struct FString GetFatnessName ( );
	void eventUpdateGFX ( struct FString sName );
	void eventInitGFXStats ( );
	void FindMyController ( );
	class UNowGFXHudScene* GetGFXHud ( );
	void eventUpdateGFXHudParam ( unsigned char Param, unsigned char TargetType, int NewIntValue, struct FString NewStringValue );
	void SetWindowPos ( struct FName wname, float PosX, float PosY );
	bool GetWindowPos ( struct FName wname, float* X, float* Y );
	int FindWindow ( struct FName wname );
	void eventUpdateTarget ( class AActor* WhatActor, unsigned char UpdateType, int IntValue, struct FString StrValue );
	void SetTarget ( int Index, struct FString DisplayName, struct FString TargetName, int CurHealth, int MaxHealth, int Flag, class AActor* pActor );
	void eventSetMaxStamina ( int NewMaxSP );
	int GetMaxSP ( );
	void eventCalculateMaxUnderWaterTime ( );
	void eventCalculateBuoyancy ( class ANowPawn* WhatPawn );
	bool eventGetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue );
	int GetSizeMod ( );
	int GetDexterityMod ( );
	int GetPsycheMod ( );
	int GetIntelligenceMod ( );
	int GetConstitutionMod ( );
	int GetStrengthMod ( );
	void CalcWeights ( );
	float CalcDamageBonusPct ( );
	void CalcDamageBonus ( );
};

UClass* UNowPlayerDatastore::pClassPointer = NULL;

// Class NowGame.NowPlayerHouse
// 0x0020 (0x0314 - 0x02F4)
class ANowPlayerHouse : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        m_HouseSignMesh;                                  		// 0x02F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseDoorOpenMesh;                              		// 0x02F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      IsPositioned : 1;                                 		// 0x02FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHouseCreated : 1;                                		// 0x02FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_DoorOpen : 1;                                   		// 0x02FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      B : 1;                                            		// 0x02FC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsTarget : 1;                                    		// 0x02FC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	int                                                m_x;                                              		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                m_y;                                              		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                m_z;                                              		// 0x0308 (0x0004) [0x0000000000000000]              
	int                                                m_rot;                                            		// 0x030C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_ImCreator;                                      		// 0x0310 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1625 ];

		return pClassPointer;
	};

	void whatAmILookingAt ( );
	void setIamCreator ( class ANowPlayerController* Control );
	void CreateSign ( );
	void CreateDoor ( );
	void setHouse ( );
	void closeDoor ( );
	void openDoor ( );
	void eventTargetMesh ( );
	void eventspawnHouse ( );
	void createHouseOnServer ( class ANowPawn* pwnd, struct FVector posi, int Rot );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowPlayerHouse::pClassPointer = NULL;

// Class NowGame.NowPlayerManager
// 0x001C (0x0058 - 0x003C)
class UNowPlayerManager : public UObject
{
public:
	float                                              PawnUpdateTimer;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        MyController;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	class UNowOptionsDatastore*                        NowOD;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< class ANowPawn* >                          PawnUpdateList;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClientAwareDist;                                  		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1626 ];

		return pClassPointer;
	};

	class UNowOptionsDatastore* GetDS ( );
	bool CheckOkForMerge ( class ANowPawn* WhatPawn );
	bool CheckPlayerList ( );
	void Tick ( float DeltaTime );
	void AddPawnToList ( class ANowPawn* WhatPawn );
	void InitManager ( );
	void CleanUpAwareDist ( );
	void ForceDestroy ( class AActor* WhatActor );
};

UClass* UNowPlayerManager::pClassPointer = NULL;

// Class NowGame.NowPointLightDayNight
// 0x0008 (0x02FC - 0x02F4)
class ANowPointLightDayNight : public APointLightMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DayOn : 1;                                        		// 0x02F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      NightOn : 1;                                      		// 0x02F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x02F8 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1627 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void TurnOnNightLight ( );
};

UClass* ANowPointLightDayNight::pClassPointer = NULL;

// Class NowGame.NowProjectile
// 0x0010 (0x0338 - 0x0328)
class ANowProjectile : public AProjectile
{
public:
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x0328 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bActive : 1;                                      		// 0x032C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseDestroyTimer : 1;                             		// 0x032C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              destroyTime;                                      		// 0x0330 (0x0004) [0x0000000000000000]              
	class AActor*                                      pIgnoreCollisionWith;                             		// 0x0334 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1628 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void RemoveMyComponents ( );
	void HomingTimer ( );
	void failSafeExplode ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Timer ( );
	void eventDestroyed ( );
	void SpawnHitFx ( struct FVector Loc, struct FRotator Rot );
	void SpawnTrailFX ( );
	void StartProjectile ( );
};

UClass* ANowProjectile::pClassPointer = NULL;

// Class NowGame.NowProjectileArrow
// 0x001C (0x0354 - 0x0338)
class ANowProjectileArrow : public ANowProjectile
{
public:
	class UCombatSystemRangedNew*                      m_CombatSystemRanged;                             		// 0x0338 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_weatherAcceleration;                            		// 0x033C (0x000C) [0x0000000000000000]              
	float                                              m_timeSinceLastweatherAcc;                        		// 0x0348 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasLanded : 1;                                 		// 0x034C (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    m_PSCTrail;                                       		// 0x0350 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1629 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void setDestrTimer ( float secondsTilBoomBoom );
	void eventEncroachedBy ( class AActor* Other );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventLanded ( struct FVector HitNormal, class AActor* HitActor );
	class AProjectile* ProjectileFire ( struct FVector StartShot, struct FVector Direction );
	void Tick ( float DeltaTime );
	void PhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void Timer ( );
	void Init ( struct FVector Direction );
	void SetWeatherVariables ( int WindDirection, int Rain, float windMagnitude );
	void SetCombatSystemReference ( class UCombatSystemRangedNew* rangedSystem );
	void SetProjectileSpeed ( int ProjectileSpeed );
	void PostBeginPlay ( );
};

UClass* ANowProjectileArrow::pClassPointer = NULL;

// Class NowGame.NowProjectileFishing
// 0x0048 (0x0380 - 0x0338)
class ANowProjectileFishing : public ANowProjectile
{
public:
	class UCombatSystemFishingNew*                     m_CombatSystem;                                   		// 0x0338 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_weatherAcceleration;                            		// 0x033C (0x000C) [0x0000000000000000]              
	float                                              m_timeSinceLastweatherAcc;                        		// 0x0348 (0x0004) [0x0000000000000000]              
	float                                              depthUnderPos;                                    		// 0x034C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasLanded : 1;                                 		// 0x0350 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bInWater : 1;                                   		// 0x0350 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_SinkTimer;                                      		// 0x0354 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_LocBeforeSink;                                  		// 0x0358 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_OldPosition;                                    		// 0x0364 (0x000C) [0x0000000000000000]              
	class AActor*                                      WaterActor;                                       		// 0x0370 (0x0004) [0x0000000000000000]              
	struct FVector                                     WaterHitlocation;                                 		// 0x0374 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1630 ];

		return pClassPointer;
	};

	void setDestrTimer ( float secondsTilBoomBoom );
	void eventEncroachedBy ( class AActor* Other );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventLanded ( struct FVector HitNormal, class AActor* HitActor );
	void HookLanded ( struct FVector HitLocation, float deptt );
	class AProjectile* ProjectileFire ( struct FVector StartShot, struct FVector Direction );
	void Tick ( float DeltaTime );
	void DoSink ( float DeltaTime );
	void PlaySplash ( int WhatEffect );
	void PhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void Timer ( );
	void Init ( struct FVector Direction );
	void SetWeatherVariables ( int WindDirection, int Rain, float windMagnitude );
	void SetCombatSystemReference ( class UCombatSystemFishingNew* CombatSystem );
	void SetProjectileSpeed ( int ProjectileSpeed );
	void PostBeginPlay ( );
	void floatToSurface ( );
	class AActor* GetSurfaceActor ( struct FVector Start, struct FVector* HitLocation );
	void FindWater ( struct FVector oldpos, struct FVector NewPos );
	void findBottomDepth ( );
};

UClass* ANowProjectileFishing::pClassPointer = NULL;

// Class NowGame.NowProjectileMagic
// 0x0028 (0x0360 - 0x0338)
class ANowProjectileMagic : public ANowProjectile
{
public:
	struct FName                                       ImpactSoundGroup;                                 		// 0x0338 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             Trail;                                            		// 0x0340 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    TrailPSC;                                         		// 0x0344 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AEmitter*                                    ProjExplosion;                                    		// 0x0348 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitEffect;                                        		// 0x034C (0x0004) [0x0000000000000000]              
	class UClass*                                      LightClass;                                       		// 0x0350 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        Light;                                            		// 0x0354 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      HomingTarget;                                     		// 0x0358 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NowImpactSound;                                   		// 0x035C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1631 ];

		return pClassPointer;
	};

	void HomingTimer ( );
	void failSafeExplode ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Timer ( );
	void eventDestroyed ( );
	void SpawnHitFx ( struct FVector Loc, struct FRotator Rot );
	void SpawnTrailFX ( );
	void StartProjectile ( );
	void SetNowImpactSound ( class USoundCue* NewSound );
};

UClass* ANowProjectileMagic::pClassPointer = NULL;

// Class NowGame.NowScout
// 0x000C (0x0648 - 0x063C)
class ANowScout : public AScout
{
public:
	TArray< struct FsPathStruct >                      vPaths;                                           		// 0x063C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1632 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
};

UClass* ANowScout::pClassPointer = NULL;

// Class NowGame.NowSkelControlSingleBone
// 0x0004 (0x00F8 - 0x00F4)
class UNowSkelControlSingleBone : public USkelControlSingleBone
{
public:
	class UNowAnimNodeSequenceBlendByAim*              GetStrengthFromAimNode;                           		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* UNowSkelControlSingleBone::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshActor
// 0x0128 (0x0450 - 0x0328)
class ANowSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned long                                      bHasHelmet : 1;                                   		// 0x0328 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateAnims : 1;                                 		// 0x0328 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsMale : 1;                                      		// 0x0328 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLogEverything : 1;                               		// 0x0328 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSelected : 1;                                    		// 0x0328 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCharacterSelection : 1;                          		// 0x0328 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	class ANowLoginDecorationActor*                    DecoActor;                                        		// 0x032C (0x0004) [0x0000000000000000]              
	struct FString                                     PreviewFaceData;                                  		// 0x0330 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PreviewBodyData;                                  		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      m_SkelMeshHead;                                   		// 0x0348 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      m_SkelMeshBody;                                   		// 0x034C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTexture2DComposite*                         Final_ArmorTextures[ 0x7 ];                       		// 0x0350 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   ArmorTexture;                                     		// 0x036C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           SkinMaterial;                                     		// 0x0370 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           FaceMaterial;                                     		// 0x0374 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           ArmorMaterial;                                    		// 0x0378 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           BaseHairMaterial;                                 		// 0x037C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UMaterialInterface* >                SavedBodyMaterials;                               		// 0x0380 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                SavedFaceMaterials;                               		// 0x038C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UMaterialInstance*                           StoneMaterial;                                    		// 0x0398 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMatPair                                    ArmorComponentMats[ 0xC ];                        		// 0x039C (0x0060) [0x0000000000000000]              
	class AEmitter*                                    effectEmitter;                                    		// 0x03FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             SelectFx;                                         		// 0x0400 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             DeSelectFx;                                       		// 0x0404 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             DeleteFx;                                         		// 0x0408 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     OrgLoc;                                           		// 0x040C (0x000C) [0x0000000000000000]              
	int                                                iFlag;                                            		// 0x0418 (0x0004) [0x0000000000000000]              
	int                                                iBodyType;                                        		// 0x041C (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      ArmorComponent[ 0xC ];                            		// 0x0420 (0x0030) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1634 ];

		return pClassPointer;
	};

	void eventSetMercyMode ( );
	void eventInitFemaleAdditive ( );
	void eventUpdateArmorComponents ( );
	void PostBeginPlay ( );
	class UMaterialInstanceConstant* eventNowCreateAndSetMaterialInstanceConstant ( class USkeletalMeshComponent* SkelComp, int ElementIndex );
	void eventPlayDeleteEffect ( );
	void eventPlayDeSelectEffect ( );
	void eventPlaySelectEffect ( );
	class UNowEntryDatastore* eventGetNowEntry ( );
	void eventSaveMaterials ( );
	void eventSetFlag ( int iNewFlag );
	void eventSetBodyType ( int iNewBodyType );
	void TriggerFirstUpdate ( );
	int GetPreviewBodyType ( );
	void SetVisibility ( unsigned long Value );
	void ToggleVisibility ( );
	void SetPreviewBodyData ( struct FString NewData );
	void SetPreviewFaceData ( struct FString NewData );
};

UClass* ANowSkeletalMeshActor::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshActorDoll
// 0x0044 (0x036C - 0x0328)
class ANowSkeletalMeshActorDoll : public ASkeletalMeshActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshHead;                                 		// 0x0328 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkelControlLookAt*                          m_pLookAt;                                        		// 0x032C (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          m_pInCombat;                                      		// 0x0330 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vLookPos;                                       		// 0x0334 (0x000C) [0x0000000000000000]              
	class ASceneCapture2DActor*                        m_pCameraActor;                                   		// 0x0340 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_vTargetLoc;                                     		// 0x0344 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vStartLoc;                                      		// 0x0348 (0x000C) [0x0000000000000000]              
	float                                              m_fTargetYaw;                                     		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              m_fTweenTime;                                     		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              m_fTweenTimeMax;                                  		// 0x035C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInCombat : 1;                                  		// 0x0360 (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowSkeletalMeshCape*                        m_pCapeActor;                                     		// 0x0364 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    m_pFemaleAnimset;                                 		// 0x0368 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1635 ];

		return pClassPointer;
	};

	void Tick ( float fDeltaTime );
	void RotateLeft ( );
	void RotateRight ( );
	void PaperdollZoom ( unsigned long bZoom );
	void PaperdollPan ( int X, int Y );
	void eventSetInCombat ( unsigned long bNewInCombat );
	void eventcacheNodes ( );
	void eventRemoveCapeActor ( );
	void eventSetCapeActor ( class USkeletalMesh* NewMesh, class UPhysicsAsset* NewPhys );
	void UpdateSkeletalComponents ( class ANowPawn* FromWhatPawn );
};

UClass* ANowSkeletalMeshActorDoll::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshActorDollEditor
// 0x010C (0x0434 - 0x0328)
class ANowSkeletalMeshActorDollEditor : public ASkeletalMeshActor
{
public:
	int                                                iArmorData;                                       		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iFaceData;                                        		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iDecoData;                                        		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iMyBodyType;                                      		// 0x0334 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInCombat : 1;                                    		// 0x0338 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsMale : 1;                                      		// 0x0338 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bBanner : 1;                                      		// 0x0338 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBleed : 1;                                       		// 0x0338 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bHasHelmet : 1;                                   		// 0x0338 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FString                                     sAnimation;                                       		// 0x033C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MeshWeaponR;                                      		// 0x0348 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MeshWeaponL;                                      		// 0x0354 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     WeaponAnimSet;                                    		// 0x0360 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fDeathForce;                                      		// 0x036C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fSpeed;                                           		// 0x0370 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iGroup;                                           		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vStartPos;                                        		// 0x0378 (0x000C) [0x0000000000000000]              
	class ANowSkeletalMeshCape*                        m_pCapeActor;                                     		// 0x0384 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          m_pLookAt;                                        		// 0x0388 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          m_pInCombat;                                      		// 0x038C (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      m_SkelMeshHead;                                   		// 0x0390 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      m_SkelMeshBody;                                   		// 0x0394 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_StaticMeshR;                                    		// 0x0398 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_StaticMeshL;                                    		// 0x039C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTexture2DComposite*                         Final_ArmorTextures[ 0x7 ];                       		// 0x03A0 (0x001C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ArmorTexture;                                     		// 0x03BC (0x0004) [0x0000000000000000]              
	struct FMaterialIntPairPreview                     UniqueArmorMaterials[ 0xC ];                      		// 0x03C0 (0x0060) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ArmorMaterial;                                    		// 0x0420 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           SkinMaterial;                                     		// 0x0424 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           HairMaterial;                                     		// 0x0428 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_pPawn;                                          		// 0x042C (0x0004) [0x0000000000000000]              
	int                                                MySpecie;                                         		// 0x0430 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1636 ];

		return pClassPointer;
	};

	void eventSetInCombat ( unsigned long bNewInCombat );
	void eventcacheNodes ( );
	void eventRemoveCapeActor ( );
	void eventSetCapeActor ( class USkeletalMesh* NewMesh, class UPhysicsAsset* NewPhys );
	void eventinitAnimations ( );
	void Die ( );
	void eventBleed ( );
	void AddWeapon ( );
	void StartRun ( );
	void PostBeginPlay ( );
	class UMaterialInstanceConstant* eventNowCreateAndSetMaterialInstanceConstant ( class USkeletalMeshComponent* SkelComp, int ElementIndex );
	void Generate ( );
};

UClass* ANowSkeletalMeshActorDollEditor::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshCape
// 0x0008 (0x02F4 - 0x02EC)
class ANowSkeletalMeshCape : public AActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x02EC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x02F0 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1637 ];

		return pClassPointer;
	};

	void StopPhys ( );
	void StartPhys ( );
	void SetHasPhysAnimation ( unsigned long newValue );
	void PostBeginPlay ( );
};

UClass* ANowSkeletalMeshCape::pClassPointer = NULL;

// Class NowGame.NowSpotLightMovableDayNight
// 0x0008 (0x02FC - 0x02F4)
class ANowSpotLightMovableDayNight : public ASpotLightMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DayOn : 1;                                        		// 0x02F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      NightOn : 1;                                      		// 0x02F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x02F8 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1638 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void TurnOnNightLight ( );
};

UClass* ANowSpotLightMovableDayNight::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActor
// 0x0024 (0x0318 - 0x02F4)
class ANowStaticMeshActor : public AStaticMeshActor
{
public:
	struct FString                                     Type;                                             		// 0x02F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           vUseSkillName;                                    		// 0x0300 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sTargetName;                                      		// 0x030C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1639 ];

		return pClassPointer;
	};

	void SetTargetTypesFromString ( struct FString sWorkBenchType );
	struct FString GetDisplayName ( );
	struct FString GetAtlasType ( );
	struct FString GetAtlasName ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActor::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorSpawnable
// 0x0000 (0x0318 - 0x0318)
class ANowStaticMeshActorSpawnable : public ANowStaticMeshActor
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

UClass* ANowStaticMeshActorSpawnable::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorLadder
// 0x0040 (0x0358 - 0x0318)
class ANowStaticMeshActorLadder : public ANowStaticMeshActorSpawnable
{
public:
	struct FVector                                     ClimbDir;                                         		// 0x0318 (0x000C) [0x0000000000000000]              
	struct FRotator                                    WallDir;                                          		// 0x0324 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LookDir;                                          		// 0x0330 (0x000C) [0x0000000000000000]              
	float                                              LadderHeight;                                     		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LadderWidth;                                      		// 0x0340 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowLadderStrafing : 1;                         		// 0x0344 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNoPhysicalLadder : 1;                            		// 0x0344 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     vEndPoint;                                        		// 0x0348 (0x000C) [0x0000000000000000]              
	class UArrowComponent*                             WallDirArrow;                                     		// 0x0354 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1641 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetLadderLength ( float NewLength );
	bool IsAtTop ( class AActor* Other );
};

UClass* ANowStaticMeshActorLadder::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmote
// 0x001C (0x0310 - 0x02F4)
class ANowStaticMeshActorEmote : public AStaticMeshActor
{
public:
	struct FString                                     WhatEmote;                                        		// 0x02F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0300 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ANowPawn*                                    UsingPawn;                                        		// 0x030C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1642 ];

		return pClassPointer;
	};

	void CheckUsed ( );
	void eventTriggerEmote ( class APlayerController* PC, unsigned long bInitCheck );
	struct FString GetDisplayName ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActorEmote::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorWeaponPreview
// 0x0000 (0x035C - 0x035C)
class ANowStaticMeshActorWeaponPreview : public ANowStaticMeshActorWeapon
{
public:

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

UClass* ANowStaticMeshActorWeaponPreview::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorWeaponPreviewCrafting
// 0x0020 (0x037C - 0x035C)
class ANowStaticMeshActorWeaponPreviewCrafting : public ANowStaticMeshActorWeaponPreview
{
public:
	class ASceneCapture2DActor*                        m_pCameraActor;                                   		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   m_pNoMat;                                         		// 0x0360 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_pInvisMat;                                      		// 0x0364 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_pInvalidMat;                                    		// 0x0368 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vBaseLocation;                                  		// 0x036C (0x000C) [0x0000000000000000]              
	class USkeletalMeshComponent*                      SkeletalMeshComponentB;                           		// 0x0378 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1644 ];

		return pClassPointer;
	};

	void eventTick ( float fDeltaTime );
	void PreviewRanged ( );
	void PreviewShield ( );
	void PreviewWeapon ( );
	void RemoveSkinFromArmor ( );
	void SetInvalid ( );
	void PreviewArmor ( );
	void SetWeaponLength ( float NewLength );
	void SetPreviewArmor ( struct FString sDataString, int iSlot, unsigned long bNoMat );
	void SetPreviewWeapon ( struct FString sDataString, unsigned long bNoMat );
};

UClass* ANowStaticMeshActorWeaponPreviewCrafting::pClassPointer = NULL;

// Class NowGame.NowStaticMeshSkydome
// 0x0000 (0x02F4 - 0x02F4)
class ANowStaticMeshSkydome : public AStaticMeshActor
{
public:

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

UClass* ANowStaticMeshSkydome::pClassPointer = NULL;

// Class NowGame.NowTeleporter
// 0x0004 (0x02F8 - 0x02F4)
class ANowTeleporter : public AStaticMeshActor
{
public:
	class ANowTeleportSpot*                            ToThisSpot;                                       		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1646 ];

		return pClassPointer;
	};

	void TeleportMe ( class ANowPawn* P );
};

UClass* ANowTeleporter::pClassPointer = NULL;

// Class NowGame.NowVolumeSecurityZone
// 0x0015 (0x033D - 0x0328)
class ANowVolumeSecurityZone : public AVolume
{
public:
	struct FString                                     ZoneName;                                         		// 0x0328 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ANowAtlasAvatarZoneBrain*                    ZoneBrain;                                        		// 0x0334 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotClient : 1;                                   		// 0x0338 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      SecurityLevel;                                    		// 0x033C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1647 ];

		return pClassPointer;
	};

	bool LookForCriminalsTgt ( class ANowPawn* WhatPawn, class AActor* Victim );
	void CalledGuards ( class ANowPawn* WhatPawn );
	void TurnOffCombatModes ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventClientLeft ( class ANowPlayerController* PC );
	void CheckPlayerInMe ( );
	void PostBeginPlay ( );
};

UClass* ANowVolumeSecurityZone::pClassPointer = NULL;

// Class NowGame.Observable
// 0x000F (0x0068 - 0x0059)
class UObservable : public UActorComponent
{
public:
	TArray< class UObserver* >                         List;                                             		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1648 ];

		return pClassPointer;
	};

	void eventNotifyObservers ( );
	void DeleteObserver ( class UObserver* obs );
	void AddObserver ( class UObserver* obs );
};

UClass* UObservable::pClassPointer = NULL;

// Class NowGame.TimeControl
// 0x0040 (0x00A8 - 0x0068)
class UTimeControl : public UObservable
{
public:
	int                                                StartTimeS;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              ElapsedTimeS;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              DeltaTimeS;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastSync;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              DayLengthS;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              NyxMonthLenghtDays;                               		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              YearLengthDays;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              PartOfDay;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              PartOfNyxMonth;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              PartOfNyxPos;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              PartOfYear;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              SunRiseAt;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                NyxMonth;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                Year;                                             		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDay : 1;                                        		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1649 ];

		return pClassPointer;
	};

	void UpdatePartOfDMY ( );
	void Initialize ( int serverTime );
	void SynchTime ( int serverTime );
	void Update ( );
};

UClass* UTimeControl::pClassPointer = NULL;

// Class NowGame.WeatherControl
// 0x01A4 (0x020C - 0x0068)
class UWeatherControl : public UObservable
{
public:
	TArray< class UObserver* >                         CheapObservers;                                   		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AMortalCloudEmitter* >               ToBeRelocated;                                    		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FWeatherData                                Data[ 0x17 ];                                     		// 0x0080 (0x0170) [0x0000000000000000]              
	int                                                CurrentRegion;                                    		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                CurrentTime;                                      		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                NextRegion;                                       		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                NextSwitchTime;                                   		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                WindDirection;                                    		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              windMagnitude;                                    		// 0x0204 (0x0004) [0x0000000000000000]              
	unsigned long                                      ThunderCheat : 1;                                 		// 0x0208 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BadWeather : 1;                                   		// 0x0208 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Replace : 1;                                      		// 0x0208 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      WeatherOff : 1;                                   		// 0x0208 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ToBeRelocatedLock : 1;                            		// 0x0208 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1650 ];

		return pClassPointer;
	};

	void SetRegionParam ( int Region );
	struct FString GetRegionName ( int Region );
	int GetRegionNumber ( struct FString Region );
	void AddCheapObserver ( class UObserver* obs );
	void eventUpdateCheaper ( );
	void eventUpdate ( );
	void eventPutWindData ( int WindD, float WindM );
	void eventPutThunderstorm ( int Region );
	void eventPutData ( int Region, int clouds, int Rain, int Fog );
	void RelocateCloudsWith ( class AMortalWeatherPostProcessVolume* Vol );
	void AddCloudToRelocated ( class AMortalCloudEmitter* Add );
	void ToggleWeatherOnOff ( );
	void Tick1Sec ( );
	struct FString GetCurrentRegionName ( );
	void ThunderMore ( );
	float GetWindMagnitude ( );
	int GetWindDirection ( );
	bool IsMagicThunder ( int Region );
	int GetFog ( int Region );
	int GetRain ( int Region );
	int GetClouds ( int Region );
	bool IsLocalMagicThunder ( );
	int GetLocalFog ( );
	int GetLocalRain ( );
	int GetLocalClouds ( );
	void LeaveRegion ( int Region );
	void EnterRegion ( int Region );
};

UClass* UWeatherControl::pClassPointer = NULL;

// Class NowGame.Observer
// 0x0000 (0x003C - 0x003C)
class UObserver : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1651 ];

		return pClassPointer;
	};

	void Notify ( class UObservable* Src );
};

UClass* UObserver::pClassPointer = NULL;

// Class NowGame.OnlineSubsystemNowGame
// 0x025C (0x066C - 0x0410)
class UOnlineSubsystemNowGame : public UOnlineSubsystemAtlas
{
public:
	TArray< struct FScriptDelegate >                   m_ClientAvatarInterestListAddedToDelegates;       		// 0x0410 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientAvatarInterestListRemovedFromDelegates;   		// 0x041C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientAvatarObtainedDelegates;                  		// 0x0428 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_GMPetitionUpdatedDelegates;                     		// 0x0434 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientGuildUpdatedDelegates;                    		// 0x0440 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientGuildWarUpdatedDelegates;                 		// 0x044C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_TradeChangedDelegates;                          		// 0x0458 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_OnNameCheckDelegates;                           		// 0x0464 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_MoStatsChangedDelegates;                        		// 0x0470 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_FriendListChangedDelegates;                     		// 0x047C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientMailRequestDelegates;                     		// 0x0488 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_StatNames;                                      		// 0x0494 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FItemInfo >                         m_InventoryItems;                                 		// 0x04A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UNowPlayerDatastore*                         m_NowPlayerDatastore;                             		// 0x04AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UNowEntryDatastore*                          m_NowEntryDatastore;                              		// 0x04B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UNowGFXHudScene*                             m_GFXHudScene;                                    		// 0x04B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           GuildMembers;                                     		// 0x04B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct Fs_GuildWars >                      guildWars;                                        		// 0x04C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct Fs_GMPetition >                     GMPetitions;                                      		// 0x04D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct Fs_GMPetition >                     HackFlags;                                        		// 0x04DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct Fs_GuildWars                                m_guildWar;                                       		// 0x04E8 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_GuildDisplay;                                   		// 0x04F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_GameSessionBoardID;                             		// 0x0504 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_LastWhisperedBy;                                		// 0x0510 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      m_bHavePetitionOnServer : 1;                      		// 0x051C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      m_IsBanking : 1;                                  		// 0x051C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	int                                                m_LastEnteredTerritoryID;                         		// 0x0520 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPlayerController*                        m_LocalPC;                                        		// 0x0524 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_Pawn;                                           		// 0x0528 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           m_MurderedBy;                                     		// 0x052C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned long >                            m_Accuse;                                         		// 0x0538 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_PendingFriendNames;                             		// 0x0544 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sCookingMessage;                                		// 0x0550 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sPotionMakingMessage;                           		// 0x055C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FLocalPick                                  LocalPicked;                                      		// 0x0568 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     danielstring;                                     		// 0x0590 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FsPendingTimer                              m_PendingTimer;                                   		// 0x059C (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnNameCheck__Delegate;                          		// 0x05DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTradeChanged__Delegate;                       		// 0x05E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMoStatsChanged__Delegate;                     		// 0x05F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendListsChanged__Delegate;                 		// 0x0600 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOpenInventoryContextMenu__Delegate;           		// 0x060C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarInterestListAddedTo__Delegate;    		// 0x0618 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientGuildUpdated__Delegate;                 		// 0x0624 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGMPetitionUpdated__Delegate;                  		// 0x0630 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientGuildWarUpdated__Delegate;              		// 0x063C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientMailRequest__Delegate;                  		// 0x0648 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarInterestListRemovedFrom__Delegate;		// 0x0654 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarObtained__Delegate;               		// 0x0660 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1652 ];

		return pClassPointer;
	};

	class UNowGFXHudScene* eventGetGFXHud ( );
	void eventDrawDebugLine ( struct FVector vStart, struct FVector vEnd );
	bool eventIsMyTgt ( class AActor* A );
	void PlayerLogout ( );
	bool eventConvertGuidToActor ( struct FString petGUID, class ANowAtlasAvatarAi** pOutActor );
	void eventSpawnEffect ( int iWhatEffect, struct FVector vFrom, struct FVector vDest );
	void PlaceMurderCounts ( );
	void AddClientAvatarObtainedDelegate ( struct FScriptDelegate ClientAvatarObtainedDelegate );
	void OnClientAvatarObtained ( );
	void ClearClientAvatarInterestListRemovedFromDelegate ( struct FScriptDelegate ClientAvatarInterestListRemovedFromDelegate );
	void AddClientAvatarInterestListRemovedFromDelegate ( struct FScriptDelegate ClientAvatarInterestListRemovedFromDelegate );
	void OnClientAvatarInterestListRemovedFrom ( class AActor* Actor );
	void ClearOnGMPetitionUpdatedDelegate ( struct FScriptDelegate OnGMPetitionUpdatedDelegate );
	void ClearOnClientGuildWarUpdatedDelegate ( struct FScriptDelegate OnClientGuildWarUpdatedDelegate );
	void ClearOnClientGuildUpdatedDelegate ( struct FScriptDelegate OnClientGuildUpdatedDelegate );
	void eventAddOnGMPetitionUpdatedDelegate ( struct FScriptDelegate OnGMPetitionUpdatedDelegate );
	void eventAddOnClientGuildWarUpdatedDelegate ( struct FScriptDelegate OnClientGuildWarUpdatedDelegate );
	void eventAddOnClientGuildUpdatedDelegate ( struct FScriptDelegate OnClientGuildUpdatedDelegate );
	void ClearOnClientMailRequestDelegate ( struct FScriptDelegate OnClientMailRequestDelegate );
	void eventAddOnClientMailRequestDelegate ( struct FScriptDelegate OnClientMailRequestDelegate );
	void OnClientMailRequest ( );
	void OnClientGuildWarUpdated ( );
	void OnGMPetitionUpdated ( );
	void OnClientGuildUpdated ( );
	void ClearClientAvatarInterestListAddedToDelegate ( struct FScriptDelegate ClientAvatarInterestListAddedToDelegate );
	void AddClientAvatarInterestListAddedToDelegate ( struct FScriptDelegate ClientAvatarInterestListAddedToDelegate );
	void OnClientAvatarInterestListAddedTo ( class AActor* Actor );
	void OnOpenInventoryContextMenu ( int iBagID, int iSlotId );
	void SetLocalPlayerController ( class ANowPlayerController* LocalPlayerController );
	void SendServerMessage ( struct FString msg );
	void TellBehaviorPlayer ( struct FString TellCommand );
	void GetNumStabledPets ( int* numPets );
	void GetInventoryContentInfo ( int iBag, int iSlot, class UContentInfo** Info, int* ItemValue, int* itemQuantity, unsigned char* bLocked );
	void GetInventoryCompactGuid ( int iSlot, struct FString* ItemGuid );
	void ClearTradeChangedDelegate ( struct FScriptDelegate TradeChangedDelegate );
	void AddTradeChangedDelegate ( struct FScriptDelegate TradeChangedDelegate );
	void ClearMoStatChangedDelegate ( struct FScriptDelegate MoStatsChangedDelegate );
	void AddMoStatChangedDelegate ( struct FScriptDelegate MoStatsChangedDelegate );
	void ClearFriendListChangedDelegate ( struct FScriptDelegate FriendListsChangedDelegate );
	void AddFriendListChangedDelegate ( struct FScriptDelegate FriendListsChangedDelegate );
	bool isChallengingGuild ( int N );
	bool getGMPetition ( struct FString petitionSourceName, struct FString* Category, struct FString* Description, struct FString* ClaimedBy );
	bool getGMPetitionAt ( int I, struct FString* petitionSourceName, struct FString* Category, struct FString* Description, struct FString* ClaimedBy );
	bool eventTellClientPetitionUpdated ( struct FString SourceName, struct FString Category, struct FString Description, struct FString ClaimedBy, unsigned long ClosingStatus, unsigned long bConnection );
	bool eventTellClientAddParam ( struct FString StringValue );
	bool eventTellClientLastExecutedCommands ( struct FString GMAvatarName, int timeSinceLastCommand );
	void eventModCommandSetDay ( );
	void eventsetGotPetition ( unsigned long hasPetition );
	bool getWarDeclarations ( int N, struct FString* guildName );
	int getNrOfGMPetitions ( );
	int getNrOfGuildWars ( );
	void DoDumpTextToFile ( struct FString outFilename, struct FString dumpString );
	void eventRemTimer ( struct FString sID );
	void eventTriggerPendingTimer ( );
	void eventAddTimer ( struct FString sID, struct FString sName, struct FString sDesc, struct FString sIcon, float fTimer, struct FString sCancelDesc );
	void OnFriendListsChanged ( );
	void OnMoStatsChanged ( );
	void OnTradeChanged ( );
	struct FString GetGuidFromItemName ( struct FString sName );
	struct FString GetBookInfoString ( );
	bool HasItemWithContentGuid ( struct FString sItemContentGuid );
	struct FString GetAllBagsJSon ( );
	struct FString GetInventoryLimitString ( );
	struct FString GetDepositLimitString ( int iDeposit );
	struct FString ItemContentMiscNameFromGuid ( struct FString sGuid );
	struct FString ItemContentNameFromGuid ( struct FString sGuid );
	struct FString GetAvatarJSon ( );
	struct FString ExtractJSonFromString ( struct FString sText );
	void SendPing ( );
	int GetGuildPP ( );
	void UpdatePetSlots ( );
	void RequestPylonInfo ( );
	void getEnabledStats ( TArray< struct FString >* vStatNames, TArray< int >* vStatValue );
	void enableStatOnClient ( struct FString ContentName );
	void ClearSkills ( );
	int GetNrLockpicks ( );
	int GetTotalCumprumAmount ( );
	int GetSilverAmount ( );
	bool CheckGotSilver ( int Amount );
	float IsItemFishItem ( int Type, struct FString strguid );
	bool IsItemBait ( struct FString strguid );
	void TellBFishingCombat ( int I, struct FString strguid );
	void GetFishContentInfo ( int iBag, int iSlot, class UContentInfo** Info );
	bool GetSkillIsActive ( int iSlot );
	float GetSkillValue ( int iSlot );
	struct FString GetSkillGroup ( int iSlot );
	void GetSkillContentInfo ( int iSlot, class UContentInfo** Info );
	struct FString GetSkillName ( int iSlot );
	int GetNumSkills ( );
	bool CheckRefineMaterialsNew ( struct FString Item1, struct FString Item2, struct FString Item3, struct FString* Message );
	bool CheckDevicePrerequisites ( struct FString DeviceName );
	void GetReagentContentInfo ( int SpellID, struct FString impagepath );
	void LocalPickSpell ( int SpellID, int spellSchoolPage );
	void ClearPicked ( );
	int GetActionSlotInfo ( int iSlot, struct FString* strguid );
	int GetSpellID ( int iSlot );
	int GetSkillID ( int iSlot );
	int GetItemID ( int iSlot );
	struct FString GetSkillCGuid ( int iSlot );
	bool IsValidVial ( int iSlot );
	bool GetItemVialData ( int iSlot, struct FString* sVial );
	bool GetItemToolData ( int iSlot, TArray< struct FString >* vString );
	struct FString GetItemCGuid ( int iSlot );
	void ActionbarClearSlot ( int iSlot );
	void PlaceLocalPicked ( int iSlot );
	int GetContentInfoActionbar ( int iSlot, class UContentInfo** Info );
	class UContentInfo* GetPickedContentInfoActionBar ( );
	void PlacePickedInActionBar ( int iSlot );
	void GetActionBarContentInfo ( int iSlot, class UContentInfo** Info );
	void UnEquipSlotItem ( struct FString sEquipSlot );
	void PlacePickedInEquipSlot ( struct FString sEquipSlot );
	int GetAttributeState ( int AttributeID );
	int ToggleAttributeState ( int AttributeID );
	void TradeRemoveItemFromTrade ( struct FString ItemGuid );
	void TradeRightClickInventory ( int bag, int Slot );
	void UseSkill ( int _skill, struct FString Target );
	void GetSkillPoints ( int* curPoints, int* Pool );
	void GetSkillInfoByName ( struct FString skillName, int* FullListIndex );
	void GetBaseSkillInfoByName ( struct FString skillName, int* FullListIndex );
	bool GetSkillRelativeInfo ( int BaseIndex, int RelativeIndex, unsigned long bParent, struct FString* skillName, int* FullListIndex, int* SkillState, int* SkillLevel, int* AttributeLevel, int* EnabledLevel, int* EffectiveSkill, int* bPrimary, int* lockState, int* bDisabled );
	void GetSkillExtendedInfo ( int SkillIndex, int* NumParents, int* NumChilds, int* Prereq1, int* Prereq2, int* CurLvlXp, int* NextLvlXp, int* CurXp, int* MaxXp, int* BcAtt1, int* BcAtt2 );
	bool GetSkillInfo ( int SkillIndex, class USkill_ContentInfo** Info, struct FString* skillName, int* SkillState, int* SkillLevel, int* AttributeLevel, int* EnabledLevel, int* bPrimary, int* lockState, int* EffectiveSkill, int* bDisabled );
	bool SkillIsDisabled ( struct FString skillName );
	class UContentInfo* GetSkillContentInfoByCGUID ( struct FString strguid );
	void LocalPickSkill ( int SkillID );
	int GetSkillState ( int SkillID );
	void LevelDownSkill ( struct FString SkillGUID );
	void ChangeSkillStateGuid ( struct FString SkillGUID );
	void ChangeSkillState ( int SkillID );
	void CancelTrade ( );
	bool IsPickedInTrade ( );
	bool IsItemInTrade ( int Slot );
	struct FString GetTradeItemStr ( int Slot );
	struct FString GetTradeAvatarJSon ( );
	struct FString GetTradeName ( unsigned long bYou );
	bool GetTradeAcceptState ( unsigned long bYou );
	void GetTradeContentInfo ( unsigned long bYou, int Slot, class UContentInfo** Int, int* Quantity, struct FString* ItemName );
	bool ItemOfName ( int iBag, int iSlot, struct FString ItemName );
	struct FString GetInventoryItemGuid ( int iBag, int iSlot );
	bool ItemByGuidIsClass ( struct FString sGuid, struct FString ClassName );
	void GetLootContentInfo ( int iSlot, class UContentInfo** Info, struct FString* LootName, int* itemQuantity );
	void GetEquipSlotContentInfo ( struct FString sEquipSlot, struct FPointer pPlayer, class UContentInfo** Info, unsigned char* bLocked );
	void GetVendorContentInfo ( int iSlot, class UContentInfo** Int, int* ItemCost, int* itemQuantity, struct FString* ItemName, int* MaxQuantity );
	int CanIReadThisBook ( struct FString ContentName );
	void GetBookInfo ( struct FString ContentName, struct FString* BookName, int* Cost, struct FString* skillName, struct FString* Author );
	void TakeLootItem ( int iSlot );
	struct FString GetItemNameFromContent ( struct FString strContentGuid );
	struct FString GetItemName ( struct FString strguid );
	void GetItemContentInfo ( int ItemId, class UContentInfo** Info, struct FString* strguid );
	void LocalPickItem ( int ItemId );
	class UContentInfo* GetItemContentInfoByCGUID ( struct FString strguid );
	struct FString checkForItemsInInventory ( int iBag, TArray< struct FString > ItemNames, TArray< int > itemQty );
	bool ItemIsClass ( int iBag, int iSlot, struct FString ClassName );
	struct FString QueryItem_ContentName ( int iBag, int iSlot, struct FString ParamName, struct FString DefaultValue );
	struct FString QueryItem_String ( int iBag, int iSlot, struct FString ParamName, struct FString DefaultValue );
	int QueryItem_Int ( int iBag, int iSlot, struct FString ParamName, int DefaultValue );
	bool GetPickedSlotID ( int* iBag, int* iSlot );
	void SplitItemStack ( int iBag, int iSlot, int iQuantity );
	bool IsItemSplittable ( int iBag, int iSlot );
	bool ItemMatchesPicked ( int iBag, int iSlot );
	float GetPetInventoryWeight ( struct FString sPetGuid );
	float GetPetEquipmentMod ( struct FString sSlot, struct FString sPetGuid );
	bool GetUsingBank ( );
	void SetUsingBank ( unsigned long banked );
	void PickupBankItem ( int iSlot );
	void PlacePickedInBank ( int iSlot );
	void GetBankContentInfo ( int iSlot, class UContentInfo** Info, int* itemQuantity );
	bool SplitInBag ( struct FString sGuid, struct FString sBagGuid, int iNewSlot, int iQuantity );
	bool SplitInInventory ( struct FString sGuid, int iNewDeposit, int iNewSlot, int iQuantity );
	bool PlaceInGuidBag ( struct FString sGuid, struct FString sBagGuid, int iSlot );
	bool PlaceInInventory ( struct FString sGuid, int iDeposit, int iSlot );
	void ServerFixBrokenItem ( struct FString ItemGuid, int ItemType, struct FString TargetName );
	void RequestGMBrokenItemList ( struct FString TargetName );
	void ClaimGMPetition ( struct FString sPetitionSource );
	void EscalateGMPetition ( struct FString sPetitionSourceName );
	void CloseGMPetition ( struct FString sPetitionSource );
	void SendGMPetition ( struct FString sCategory, struct FString sDescription );
	void DestroyItem ( struct FString sItemGuid );
	void DestroyPickedItem ( int iQuantity );
	int GetPickedInventorySlot ( );
	int GetMyGuildRank ( );
	struct FString GetMyFullGuildName ( );
	struct FString GetMyGuildName ( );
	void TellAvatar ( class ANowAtlasAvatar* Avatar, int tellEnum );
	void EquipPetItem ( struct FString sItemGuid, struct FString sEquipSlot, struct FString sPetGuid );
	void SwapItem ( struct FString sTargetGuid, struct FString sPickedGuid );
	void EquipItem ( struct FString sItemGuid, struct FString sEquipSlot );
	bool UseItem ( struct FString sItemGuid );
	void UseInventoryItem ( int iBag, int iSlot );
	void GetVendorCompactGuid ( int iSlot, struct FString* ItemGuid );
	bool GetSkillOpenInterface ( int iSlot, struct FString* SceneStr, int* GFXEnum );
	bool GetSkillTargetRequierment ( int iSlot );
	bool GetSkillCombatMove ( int iSlot );
	int GetSkillTargetDistLimit ( int iSlot );
	int GetSkillTargetTypeID ( int iSlot );
	void UpdateFriendsList ( );
	int GetHouseSessionBag ( );
	void GetHouseItemContentInfo ( int iSlot, int SessionId, class UContentInfo** Info, int* itemQuantity, struct FString* Description, struct FString* ItemGuid );
	bool CancelLogin ( );
	bool AtlasLogin ( struct FString UserName, struct FString Password );
	void DanielAdd ( int X, int Y );
	void DanielReset ( );
	void DumpTextToFile ( struct FString outFilename, struct FString Text );
	void ForceTriggerEquipDelegate ( );
	void PlaceKeepNpc ( int Slot );
	void SetPylonName ( class ANowAtlasAvatarPylon* targetPylon, struct FString newValue );
	void SetPylonAttTarget ( class ANowAtlasAvatar* targetPylon, int newValue );
	void SetPylonDefTarget ( class ANowAtlasAvatar* targetPylon, int newValue );
	void SetPylonAoeTarget ( class ANowAtlasAvatar* targetPylon, int newValue );
	void UpgradePylon ( class ANowAtlasAvatarPylon* targetPylon );
	void PlaceAvatar ( struct FVector newPylonLoc );
	void AddPylonInfo ( struct FString newPylonGuid, struct FString newPylonGuild, struct FVector newPylonLoc, int newPylonAOE, int newPylonAOETgt, int newPylonDef, int newPylonDefTgt, int newPylonAtt, int newPylonAttTgt, int newPylonTier, int newPylonUpkeep );
	void AddPetInfo ( struct FString sPetName, struct FString sPetType, int iPetLevel, int iPetLoyalty, int iPetHP, int iStableIndex, struct FString sState );
	void OnNameCheck ( unsigned long Check );
};

UClass* UOnlineSubsystemNowGame::pClassPointer = NULL;

// Class NowGame.SeqAct_AddString
// 0x0024 (0x010C - 0x00E8)
class USeqAct_AddString : public USeqAct_SetSequenceVariable
{
public:
	struct FString                                     A;                                                		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     B;                                                		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Result;                                           		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* USeqAct_AddString::pClassPointer = NULL;

// Class NowGame.SkelControlDrawScale
// 0x000C (0x0100 - 0x00F4)
class USkelControlDrawScale : public USkelControlSingleBone
{
public:
	float                                              MountTestSize;                                    		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerTestSize;                                   		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRecalcController : 1;                            		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRootScale : 1;                                   		// 0x00FC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1654 ];

		return pClassPointer;
	};

	void TriggerDrawScale ( float NewDriverDrawScale, float NewMountDrawScale );
};

UClass* USkelControlDrawScale::pClassPointer = NULL;

// Class NowGame.SkelControlDynamicCreature
// 0x0034 (0x0128 - 0x00F4)
class USkelControlDynamicCreature : public USkelControlSingleBone
{
public:
	TArray< struct FControllInfo >                     MyStateInfo;                                      		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ActiveIndex;                                      		// 0x0100 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	TArray< struct FChildInfo >                        ChildStates;                                      		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FParentInfo >                       CachedParents;                                    		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class USkelControlDynamicCreature* >       CachedChildren;                                   		// 0x011C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1655 ];

		return pClassPointer;
	};

	struct FParentInfo eventCreateParentInfo ( int I );
	void UpdateInput ( );
	void SetDynamicIndex ( int NewIndex );
};

UClass* USkelControlDynamicCreature::pClassPointer = NULL;

// Class NowGame.SkelControlLimbBonePos
// 0x000C (0x0110 - 0x0104)
class USkelControlLimbBonePos : public USkelControlLimb
{
public:
	struct FName                                       GetEffectorLocFromBone;                           		// 0x0104 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBoneOnMountOwner : 1;                            		// 0x010C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

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

UClass* USkelControlLimbBonePos::pClassPointer = NULL;

// Class NowGame.StatTracker
// 0x0030 (0x006C - 0x003C)
class UStatTracker : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  MyWorldInfo;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              LastSendTime;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              LastLongtermSendTime;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              LastSendTimeB;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Stat_Run;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                Stat_Riding;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                Stat_Swim;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                Stat_Jump;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                Stat_Sprint;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Stat_CombatWalk;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Longterm_Stamina;                                 		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1657 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	void eventResetLongterm ( );
	void AddLongTerm ( int addWhat );
	void eventResetStats ( );
	void CollectInfo ( );
	void AttachTo ( class AController* aController );
	void SendLongterm ( int Add );
	void SendStats ( int Add );
};

UClass* UStatTracker::pClassPointer = NULL;

// Class NowGame.UIAction_AtlasCommand
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_AtlasCommand : public UUIAction
{
public:
	struct FString                                     Cmd;                                              		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_AtlasCommand::pClassPointer = NULL;

// Class NowGame.UIAction_Bugreport
// 0x0024 (0x0110 - 0x00EC)
class UUIAction_Bugreport : public UUIAction
{
public:
	struct FString                                     AdminUser;                                        		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Subject;                                          		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_Bugreport::pClassPointer = NULL;

// Class NowGame.UIAction_ClientCommand
// 0x0030 (0x011C - 0x00EC)
class UUIAction_ClientCommand : public UUIAction
{
public:
	struct FString                                     CmdTarget;                                        		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CmdType;                                          		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CmdAction;                                        		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Avatar;                                           		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_ClientCommand::pClassPointer = NULL;

// Class NowGame.UIAction_CreateCharacter
// 0x003C (0x0128 - 0x00EC)
class UUIAction_CreateCharacter : public UUIAction
{
public:
	struct FString                                     m_CharacterName;                                  		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_ParamClass;                                     		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_ContentClass;                                   		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DataStoreName;                                    		// 0x0110 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSrcMap >                           ParamMap;                                         		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

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

UClass* UUIAction_CreateCharacter::pClassPointer = NULL;

// Class NowGame.UIAction_DeleteCharacter
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_DeleteCharacter : public UUIAction
{
public:
	struct FString                                     SelectedCharacter;                                		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_DeleteCharacter::pClassPointer = NULL;

// Class NowGame.UIAction_GetClientAvatar
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_GetClientAvatar : public UUIAction
{
public:
	struct FString                                     Avatar;                                           		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_GetClientAvatar::pClassPointer = NULL;

// Class NowGame.UIAction_GetSelectedCharacter
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_GetSelectedCharacter : public UUIAction
{
public:
	struct FString                                     SelectedCharacter;                                		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_GetSelectedCharacter::pClassPointer = NULL;

// Class NowGame.UIAction_GetTargetedAvatar
// 0x0010 (0x00FC - 0x00EC)
class UUIAction_GetTargetedAvatar : public UUIAction
{
public:
	int                                                TargetIndex;                                      		// 0x00EC (0x0004) [0x0000000000000000]              
	struct FString                                     Avatar;                                           		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_GetTargetedAvatar::pClassPointer = NULL;

// Class NowGame.UIAction_Logout
// 0x0000 (0x00EC - 0x00EC)
class UUIAction_Logout : public UUIAction
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

UClass* UUIAction_Logout::pClassPointer = NULL;

// Class NowGame.UIAction_ModifyUIRange
// 0x0018 (0x0104 - 0x00EC)
class UUIAction_ModifyUIRange : public UUIAction
{
public:
	struct FUIRangeData                                RangeValue;                                       		// 0x00EC (0x0014) [0x0000000000000000]              
	float                                              CurrentValue;                                     		// 0x0100 (0x0004) [0x0000000000000000]              

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

UClass* UUIAction_ModifyUIRange::pClassPointer = NULL;

// Class NowGame.UIAction_OpenBrowser
// 0x0018 (0x0104 - 0x00EC)
class UUIAction_OpenBrowser : public UUIAction
{
public:
	struct FString                                     StringURL;                                        		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Open;                                             		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_OpenBrowser::pClassPointer = NULL;

// Class NowGame.UIAction_ResurrectAvatar
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_ResurrectAvatar : public UUIAction
{
public:
	struct FString                                     avatarName;                                       		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_ResurrectAvatar::pClassPointer = NULL;

// Class NowGame.UIAction_TargetCommand
// 0x0030 (0x011C - 0x00EC)
class UUIAction_TargetCommand : public UUIAction
{
public:
	struct FString                                     TargetType;                                       		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TargetCommandType;                                		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TargetName;                                       		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TargetCommand;                                    		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_TargetCommand::pClassPointer = NULL;

// Class NowGame.UIAction_TellTargetNpc
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_TellTargetNpc : public UUIAction
{
public:
	struct FString                                     TellCmd;                                          		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1671 ];

		return pClassPointer;
	};

	void eventSendTell ( );
};

UClass* UUIAction_TellTargetNpc::pClassPointer = NULL;

// Class NowGame.UIAction_WelcomeOff
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_WelcomeOff : public UUIAction
{
public:
	struct FString                                     avatarName;                                       		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* UUIAction_WelcomeOff::pClassPointer = NULL;

// Class NowGame.UIInfo
// 0x0008 (0x0044 - 0x003C)
class UUIInfo : public UObject
{
public:
	unsigned char                                      InfoType;                                         		// 0x003C (0x0001) [0x0000000000000000]              
	class ANowAtlasAvatarAiNPC*                        pOwnerAvatar;                                     		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1673 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfo::pClassPointer = NULL;

// Class NowGame.UIInfoTalker
// 0x0040 (0x0084 - 0x0044)
class UUIInfoTalker : public UUIInfo
{
public:
	TArray< struct FsResponse >                        vResponses;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsChat >                            vChat;                                            		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sExit;                                            		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBack;                                            		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fLoadTimer;                                       		// 0x0080 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1674 ];

		return pClassPointer;
	};

	void AddRespToArray ( int iIndex, int iTargetIndex, struct FString Script, struct FString Chat );
	void AddChatToArray ( int iIndex, struct FString Chat );
};

UClass* UUIInfoTalker::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerCityBrain
// 0x0028 (0x00AC - 0x0084)
class UUIInfoTalkerCityBrain : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FString                                     sGuildName;                                       		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCityName;                                        		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iGuards;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                iResCriminals;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMyGuild : 1;                                     		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanChange : 1;                                   		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1675 ];

		return pClassPointer;
	};

	void GenerateResponse ( );
	void GenerateIntro ( );
	void InitInfo ( class ANowPlayerController* pOwner );
	void GetKeeperStats ( );
};

UClass* UUIInfoTalkerCityBrain::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerFromContent
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerFromContent : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1676 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerFromContent::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerGuard
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerGuard : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1677 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerGuard::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerNoobHelp
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerNoobHelp : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1678 ];

		return pClassPointer;
	};

	int HasRabbit ( );
	void GenerateResponseD ( int iState );
	void GenerateResponseC ( int iState );
	void GenerateResponseB ( int iState );
	void GenerateResponseA ( int iState );
	void InitInfo ( class ANowPlayerController* pOwner );
	bool HasRobe ( );
	bool HasLeather ( );
};

UClass* UUIInfoTalkerNoobHelp::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerStable
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerStable : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1679 ];

		return pClassPointer;
	};

	void GeneratePetResponse ( );
	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerStable::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerTaxManager
// 0x0010 (0x0094 - 0x0084)
class UUIInfoTalkerTaxManager : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMyGuild : 1;                                     		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanChange : 1;                                   		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                iTaxes;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                iTaxTreasury;                                     		// 0x0090 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1680 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerKeep* eventGetAKeep ( );
	void GenerateResponse ( );
	void GenerateIntro ( );
	void InitInfo ( class ANowPlayerController* pOwner );
	void GetTaxManagerStats ( );
};

UClass* UUIInfoTalkerTaxManager::pClassPointer = NULL;

// Class NowGame.UINow_ContentButton
// 0x0018 (0x04F4 - 0x04DC)
class UUINow_ContentButton : public UUIAtlas_ContentButton
{
public:
	struct FNowItem                                    m_ItemData;                                       		// 0x04DC (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1681 ];

		return pClassPointer;
	};

	void SetLabel ( struct FString NewLabel );
};

UClass* UUINow_ContentButton::pClassPointer = NULL;

// Class NowGame.UINow_SkeletalMeshWidget
// 0x0030 (0x0498 - 0x0468)
class UUINow_SkeletalMeshWidget : public UUIMeshWidget
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshBody;                                 		// 0x0468 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      SkeletalMeshHead;                                 		// 0x046C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULightComponent*                             DefaultLight;                                     		// 0x0470 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     lightDirection;                                   		// 0x0474 (0x000C) [0x0000000000000000]              
	class ULightComponent*                             DefaultLight2;                                    		// 0x0480 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LightDirection2;                                  		// 0x0484 (0x000C) [0x0000000000000000]              
	float                                              BaseHeight;                                       		// 0x0490 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x0494 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1682 ];

		return pClassPointer;
	};

	void UpdateSkeletalComponents ( class ANowPawn* FromWhatPawn );
};

UClass* UUINow_SkeletalMeshWidget::pClassPointer = NULL;

// Class NowGame.UINow_SkillBar
// 0x004C (0x04B0 - 0x0464)
class UUINow_SkillBar : public UUIObject
{
public:
	class UUIComp_DrawImage*                           BackgroundImageComponent;                         		// 0x0464 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawImage*                           AttributeFillImageComponent;                      		// 0x0468 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawImage*                           SkillFillImageComponent;                          		// 0x046C (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawImage*                           EnabledOverlayImageComponent;                     		// 0x0470 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	struct FUIRangeData                                AttributeValue;                                   		// 0x0474 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FUIRangeData                                SkillValue;                                       		// 0x0488 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FUIRangeData                                EnabledValue;                                     		// 0x049C (0x0014) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1683 ];

		return pClassPointer;
	};

	float GetEnabledValue ( );
	float GetSkillValue ( );
	float GetAttributeValue ( );
};

UClass* UUINow_SkillBar::pClassPointer = NULL;

// Class NowGame.UINow_StatsBar
// 0x002C (0x0490 - 0x0464)
class UUINow_StatsBar : public UUIObject
{
public:
	class UUIComp_DrawImage*                           BackgroundImageComponent;                         		// 0x0464 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawImage*                           FillImageComponent;                               		// 0x0468 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	struct FUIRangeData                                StatsBarValue;                                    		// 0x046C (0x0014) [0x0000000000000001]              ( CPF_Edit )
	int                                                Steps;                                            		// 0x0480 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RightPadding;                                     		// 0x0488 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x048C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1684 ];

		return pClassPointer;
	};

	float GetValue ( unsigned long bPercentageValue );
};

UClass* UUINow_StatsBar::pClassPointer = NULL;

// Class NowGame.UIScene_Now_BaseScene
// 0x0068 (0x0628 - 0x05C0)
class UUIScene_Now_BaseScene : public UUIScene_Atlas_BaseScene
{
public:
	class UOnlineSubsystemNowGame*                     OnlineSub;                                        		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UNowPlayerDatastore*                         PlayerData;                                       		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowHUD*                                     PlayerHUD;                                        		// 0x05C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_TooltipPanel;                                   		// 0x05CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_ItemNameLabel;                                  		// 0x05D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UUILabel* >                          m_TooltipLabels;                                  		// 0x05D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UUINow_StatsBar* >                   m_TooltipStats;                                   		// 0x05E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUIPanel*                                    m_WindowPanel;                                    		// 0x05EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_MoveButton;                                     		// 0x05F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CloseButton;                                    		// 0x05F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bBusy : 1;                                        		// 0x05F8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      DistanceClose : 1;                                		// 0x05F8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bUsePawnAsDistanceTarget : 1;                     		// 0x05F8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bCanSavePositons : 1;                             		// 0x05F8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCanBeMoved : 1;                                  		// 0x05F8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	struct FVector                                     OwnerLocation;                                    		// 0x05FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              InteractDistance;                                 		// 0x0608 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LiveTimer;                                        		// 0x060C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              InputCoolDown;                                    		// 0x0610 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UFont*                                       ChatFont;                                         		// 0x0614 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   OpenSceneSound;                                   		// 0x0618 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CloseSceneSound;                                  		// 0x061C (0x0004) [0x0000000000000000]              
	float                                              PosX;                                             		// 0x0620 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )
	float                                              PosY;                                             		// 0x0624 (0x0004) [0x0000000000006000]              ( CPF_Transient | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1685 ];

		return pClassPointer;
	};

	void StopMoveWindow ( class UUIScreenObject* O, int PlayerIndex );
	void StartMoveWindow ( class UUIScreenObject* O, int PlayerIndex );
	void SetDragComponentButton ( class UUIButton* Button, class UUIScreenObject* InMoveObj );
	class UNowOptionsDatastore* GetOptionsDS ( );
	class UNowPlayerDatastore* GetPlayerDS ( );
	class UNowEntryDatastore* GetEntryDS ( );
	void StateChangeCB ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState );
	bool EmptyOnClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool EmptyOnContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void eventLoadWindowPosition ( );
	void eventSaveWindowPosition ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void UpdateTooltip ( class UUINow_ContentButton** ItemButton );
	void eventInitScene ( );
	class ANowPlayerController* GetNowPC ( );
	void eventRemoveDistanceClose ( );
	void eventDistanceCloseInit ( );
	bool eventrightClickUse ( int bag, int Slot );
	bool eventCheckCoolDown ( );
	void PlayClickSound ( );
	bool CanUiRightClick ( );
	float GetChatTextSize ( struct FString WhatString );
	bool ShiftDown ( );
};

UClass* UUIScene_Now_BaseScene::pClassPointer = NULL;

// Class NowGame.UIScene_BlacksmithWindow
// 0x0100 (0x0728 - 0x0628)
class UUIScene_BlacksmithWindow : public UUIScene_Now_BaseScene
{
public:
	struct FBlacksmithingButton                        BlacksmithingRecipes[ 0x2 ];                      		// 0x0628 (0x0020) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FBlacksmithingButton                        WeaponsmithingRecipes[ 0x4 ];                     		// 0x0648 (0x0040) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FBlacksmithingButton                        ArmorsmithingRecipes[ 0xA ];                      		// 0x0688 (0x00A0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1686 ];

		return pClassPointer;
	};

	bool Craft ( class UUIScreenObject* O, int PlayerIndex );
	void InitRecipes ( );
	void InitializeButtons ( );
	void PostUpdateInitialize ( );
	void eventInitScene ( );
	void SendServerMessage ( struct FString msg );
};

UClass* UUIScene_BlacksmithWindow::pClassPointer = NULL;

// Class NowGame.UIScene_Books
// 0x0020 (0x0648 - 0x0628)
class UUIScene_Books : public UUIScene_Now_BaseScene
{
public:
	class UUILabel*                                    BookName;                                         		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Author;                                           		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Time;                                             		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Skill;                                            		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentImage*                       Icon;                                             		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              StopButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPlayerController*                        MyPlayerController;                               		// 0x0644 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1687 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void eventResetMyBooks ( );
	void eventUpdateMyBooks ( class UContentInfo* NewIcon, struct FString NewBookName, struct FString NewAuthor, struct FString NewTime, struct FString NewSkill );
	void eventInitScene ( );
	void GetBookInfo ( );
};

UClass* UUIScene_Books::pClassPointer = NULL;

// Class NowGame.UIScene_Cooking
// 0x0174 (0x079C - 0x0628)
class UUIScene_Cooking : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              Close;                                            		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Cook;                                             		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        ItemList[ 0xF ];                                  		// 0x0630 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemButtons[ 0xF ];                               		// 0x066C (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ToolDescription;                                  		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    WORKBENCH;                                        		// 0x06AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ItemGUIDS[ 0xE ];                                 		// 0x06B4 (0x00A8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolGUID;                                         		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BenchName;                                        		// 0x0768 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPlayerController*                        NPC;                                              		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              Timer;                                            		// 0x0778 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidTools;                                       		// 0x077C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolName;                                         		// 0x0788 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      NeedHeat : 1;                                     		// 0x0794 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MessageTimer;                                     		// 0x0798 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1688 ];

		return pClassPointer;
	};

	void UpdateWorkBench ( );
	void UpdatePage ( );
	void CheckSkills ( );
	void VerifyItems ( );
	void UpdateMessage ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void SetToolText ( struct FString Tool );
	void SetMessage ( struct FString Text );
	bool IsValidTool ( TArray< struct FString > Tools );
	bool OnOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnClick ( class UUIScreenObject* Target, int PlayerIndex );
	bool VerifyWorkbench ( );
	bool OnCook ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	void DoCook ( );
};

UClass* UUIScene_Cooking::pClassPointer = NULL;

// Class NowGame.UIScene_CreationBase
// 0x0010 (0x0638 - 0x0628)
class UUIScene_CreationBase : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    CreatePanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CreateButton;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 RecipeButton;                                     		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  ItemName;                                         		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1689 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool DoneClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	struct FString GetItemName ( );
	void eventInitScene ( );
};

UClass* UUIScene_CreationBase::pClassPointer = NULL;

// Class NowGame.UIScene_ArmorCreation
// 0x0590 (0x0BC8 - 0x0638)
class UUIScene_ArmorCreation : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextButton;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextPageButton;                                   		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackPageButton;                                   		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NameLabel;                                        		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PageLabel;                                        		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ValueNextButton;                                  		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ValueBackButton;                                  		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ValueLabel;                                       		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ValuePageLabel;                                   		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    ValueBG;                                          		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialNames[ 0x25 ];                            		// 0x0674 (0x01BC) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MaterialSendNames[ 0x25 ];                        		// 0x0830 (0x01BC) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ArmorTypes[ 0x8 ];                                		// 0x09EC (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ArmorTypeSendNames[ 0x8 ];                        		// 0x0A4C (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     ArmorPieces[ 0xA ];                               		// 0x0AAC (0x0078) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              VisMaxValues[ 0x8 ];                              		// 0x0B24 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	float                                              VisMinValues[ 0x8 ];                              		// 0x0B44 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	float                                              nonVisMaxValues[ 0x8 ];                           		// 0x0B64 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	float                                              nonVisMinValues[ 0x8 ];                           		// 0x0B84 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	int                                                ArmorType;                                        		// 0x0BA4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ArmorPiece;                                       		// 0x0BA8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ArmorVisResource;                                 		// 0x0BAC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ArmorNonVisResource;                              		// 0x0BB0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ArmorVisResValue;                                 		// 0x0BB4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ArmorNonVisResValue;                              		// 0x0BB8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxValue;                                         		// 0x0BBC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinValue;                                         		// 0x0BC0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Page;                                             		// 0x0BC4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1690 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackValueClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextValueClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	int GetValidVisibleArmorMaterial ( int Current, unsigned long Backwards );
	int GetArmorMaterialTypeForArmorType ( int inArmorType );
	int GetValidArmorPiece ( int CurrentPiece, unsigned long Backwards );
	bool NextClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_ArmorCreation::pClassPointer = NULL;

// Class NowGame.UIScene_Deva
// 0x0094 (0x06BC - 0x0628)
class UUIScene_Deva : public UUIScene_Now_BaseScene
{
public:
	float                                              Timer;                                            		// 0x0628 (0x0004) [0x0000000000000000]              
	TArray< class ANowSkeletalMeshActor* >             MeshActors;                                       		// 0x062C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUILabelButton*                              Play;                                             		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Logout;                                           		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Create;                                           		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Delete;                                           		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Options;                                          		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    DeleteMessage;                                    		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Ok;                                               		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Cancel;                                           		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    DeleteName;                                       		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    CharName;                                         		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Select[ 0x5 ];                                    		// 0x0660 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  NameBox;                                          		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AStaticMeshActor*                            BaseActors[ 0x4 ];                                		// 0x0678 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    GenericMessageBox;                                		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              GenericBtnOk;                                     		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    GenericMessage;                                   		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCharLoaded : 1;                                  		// 0x0694 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Close : 1;                                        		// 0x0694 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                SelectedChar;                                     		// 0x0698 (0x0004) [0x0000000000000000]              
	int                                                m_iNrCharacters;                                  		// 0x069C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NPC;                                              		// 0x06A0 (0x0004) [0x0000000000000000]              
	class AActor*                                      SelectCam;                                        		// 0x06A4 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              MOk;                                              		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              MCancel;                                          		// 0x06AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              MYes;                                             		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    MessageBox;                                       		// 0x06B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    MessageText;                                      		// 0x06B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1691 ];

		return pClassPointer;
	};

	void CheckLastInputTime ( );
	void SendPing ( );
	void TouchLastInputTime ( );
	void LoadCharacters ( int Num );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	class UOnlineSubsystemNowGame* GetSubSystem ( );
	bool OnLogout ( class UUIScreenObject* O, int PlayerIndex );
	bool EnterGameClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnCreate ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnCharacterSelect ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnDeleteCharacterNok ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnDeleteCharacterOk ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnDeleteCharacter ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnMessageboxCancel ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnMessageboxOk ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnMessageboxYes ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnGenericOK ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnOptionsClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void CharacterTimedOut ( );
	void CharLoadedTimerUpdate ( );
	void CharactersLoaded ( );
	void eventInitScene ( );
	void AvatarSelect ( struct FString avatarName );
	void DeleteCharacter ( struct FString avatarName );
	void LoadCurrentSelectedMesh ( int Selection );
};

UClass* UUIScene_Deva::pClassPointer = NULL;

// Class NowGame.UIScene_Finnish
// 0x007C (0x06A4 - 0x0628)
class UUIScene_Finnish : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              EnterGame;                                        		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Save;                                             		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Exit;                                             		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BACK;                                             		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    NameTaken;                                        		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UNowEntryDatastore*                          EntryDS;                                          		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FRaceLocations >                    StartingLocatins;                                 		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           StartingLocNames;                                 		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           StartingLocInfos;                                 		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIImage*                                    StartingLocTexture;                               		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FTextureCoordinates >               LocTexCoords;                                     		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Enter : 1;                                        		// 0x0678 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDone : 1;                                        		// 0x0678 (0x0004) [0x0000000000000000] [0x00000002] 
	class UUILabel*                                    SelectChoise;                                     		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    SelectPanel;                                      		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              LocationChoise[ 0x5 ];                            		// 0x0684 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    StartinLocInfo;                                   		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  PlayerName;                                       		// 0x069C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  PlayerSurname;                                    		// 0x06A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1692 ];

		return pClassPointer;
	};

	bool MessageCancel ( class UUIScreenObject* O, int PlayerIndex );
	bool ChooseLocation ( class UUIScreenObject* O, int PlayerIndex );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void CharacterUpdate ( int Num );
	void OnNameCompleat ( unsigned long NameAvialable );
	bool OnBack ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnExit ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSave ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnEnterGame ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ValidateNames ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void ValidateName ( struct FString avatarName );
	void AvatarSelect ( struct FString avatarName );
	void CreateCaracter ( );
	void eventInitScene ( );
};

UClass* UUIScene_Finnish::pClassPointer = NULL;

// Class NowGame.UIScene_FishingCombat
// 0x0038 (0x0660 - 0x0628)
class UUIScene_FishingCombat : public UUIScene_Now_BaseScene
{
public:
	class UUIAtlas_ContentSlot*                        SlotBait;                                         		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        SlotHook;                                         		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        SlotLine;                                         		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        SlotRod;                                          		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UContentInfo*                                RodInfo;                                          		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLocked : 1;                                      		// 0x063C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bBait : 1;                                        		// 0x063C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bLine : 1;                                        		// 0x063C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bHook : 1;                                        		// 0x063C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	class UUIEditBox*                                  DepthLabel;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                DepthValue;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Add[ 0x3 ];                                       		// 0x0648 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Sub[ 0x3 ];                                       		// 0x0654 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1693 ];

		return pClassPointer;
	};

	bool LockEquipment ( );
	bool UnLockEquipment ( );
	bool GotFishEquipment ( );
	bool OnSlotDragDrop ( class UUIScreenObject* EventObject, class UUIScreenObject* Source );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void AddItem ( class UUIScreenObject* EventObject );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_FishingCombat::pClassPointer = NULL;

// Class NowGame.UIScene_GuildCreateNew
// 0x0020 (0x0648 - 0x0628)
class UUIScene_GuildCreateNew : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              CreateButton;                                     		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  GuildNameEditbox;                                 		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     guildName;                                        		// 0x0630 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bPendingCreation : 1;                             		// 0x063C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0640 (0x0004) [0x0000000000000000]              
	int                                                GuildNameMaxLength;                               		// 0x0644 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1694 ];

		return pClassPointer;
	};

	void eventFinishedCreatingGuild ( );
	bool CreateGuild ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	void SendServerMessage ( struct FString msg );
	void ClientAvatarUpdated ( struct FPointer pClient, struct FPointer pAvatar, TArray< struct FPointer > tParams );
};

UClass* UUIScene_GuildCreateNew::pClassPointer = NULL;

// Class NowGame.UIScene_GuildDiplomacy
// 0x00E4 (0x070C - 0x0628)
class UUIScene_GuildDiplomacy : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              ChallengeButton;                                  		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AcceptIncomingButton[ 0x5 ];                      		// 0x062C (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              RejectIncomingButton[ 0x5 ];                      		// 0x0640 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              CurWarSurrenderButton[ 0x5 ];                     		// 0x0654 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  ChallengeEditbox;                                 		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    IncomingWarLabel[ 0x5 ];                          		// 0x066C (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    OutgoingWarLabel[ 0x5 ];                          		// 0x0680 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    CurWarLabel[ 0x5 ];                               		// 0x0694 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           NewGuildWars;                                     		// 0x06A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           OutGoingGuildWars;                                		// 0x06B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           IncomingGuildWars;                                		// 0x06C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     guildWars[ 0x5 ];                                 		// 0x06CC (0x003C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANowPlayerController*                        PC;                                               		// 0x0708 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1695 ];

		return pClassPointer;
	};

	bool OnChatRawInputKey ( struct FInputEventParameters* EventParms );
	void setCurrentWarLabels ( );
	void getOutGoingWarProposals ( );
	void getCurrentlyAtWarWith ( );
	void getWarProposals ( );
	void eventAddOutgoingGuildWar ( struct FString guildName );
	void eventAddInComingGuildWar ( struct FString guildName );
	void eventAddGuildWar ( struct FString guildName );
	void eventclearWars ( );
	bool ChallengeGuild ( class UUIScreenObject* O, int PlayerIndex );
	bool HardCodedMuthafucka2 ( class UUIScreenObject* O, int PlayerIndex );
	void eventsendMessageToClient ( struct FString Message );
	bool SurrenderClicked ( class UUIScreenObject* O, int PlayerIndex );
	bool HardCodedMuthafucka ( class UUIScreenObject* O, int PlayerIndex );
	void HideItems ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void setStunn ( float Time );
	int getPlayerGuildRank ( );
	void getIncomingGuildWars ( TArray< struct FString >* _guildWars );
	void getOutGoingGuildWars ( TArray< struct FString >* _guildWars );
	void getGuildWars ( TArray< struct FString >* _guildWars );
	void SendServerMessage ( struct FString msg );
};

UClass* UUIScene_GuildDiplomacy::pClassPointer = NULL;

// Class NowGame.UIScene_GuildDisband
// 0x000C (0x0634 - 0x0628)
class UUIScene_GuildDisband : public UUIScene_Now_BaseScene
{
public:
	class UUIButton*                                   AcceptButton;                                     		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CancelButton;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0630 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1696 ];

		return pClassPointer;
	};

	bool Cancel ( class UUIScreenObject* O, int PlayerIndex );
	void eventsendMessageToClient ( struct FString Message );
	bool Accept ( class UUIScreenObject* O, int PlayerIndex );
	void setStunn ( float Time );
	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	void eventInitScene ( );
	int getPlayerGuildRank ( );
};

UClass* UUIScene_GuildDisband::pClassPointer = NULL;

// Class NowGame.UIScene_GuildInvitedMessage
// 0x0024 (0x064C - 0x0628)
class UUIScene_GuildInvitedMessage : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              AcceptButton;                                     		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    InformationLabel;                                 		// 0x062C (0x0004) [0x0000000000000000]              
	struct FString                                     sStoneAvatarName;                                 		// 0x0630 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sInvitingGuild;                                   		// 0x063C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPendingAcception : 1;                            		// 0x0648 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1697 ];

		return pClassPointer;
	};

	struct FString GetTargetAvatarName ( int Idx );
	void setInformationLabel ( struct FString ParamLabel );
	void eventCleanup ( );
	void SetInvitingGuild ( struct FString srcGuild );
	bool AcceptInvitation ( class UUIScreenObject* O, int PlayerIndex );
	void eventInitScene ( );
	void setStunn ( float Time );
	struct FString GetGuildName ( );
	void ClientAvatarUpdated ( struct FPointer pClient, struct FPointer pAvatar, TArray< struct FPointer > tParams );
};

UClass* UUIScene_GuildInvitedMessage::pClassPointer = NULL;

// Class NowGame.UIScene_GuildLeaveGuild
// 0x0008 (0x0630 - 0x0628)
class UUIScene_GuildLeaveGuild : public UUIScene_Now_BaseScene
{
public:
	class UUIButton*                                   AcceptButton;                                     		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CancelButton;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1698 ];

		return pClassPointer;
	};

	bool Cancel ( class UUIScreenObject* O, int PlayerIndex );
	void eventsendMessageToClient ( struct FString Message );
	bool Accept ( class UUIScreenObject* O, int PlayerIndex );
	void setStunn ( float Time );
	void eventInitScene ( );
	int getPlayerGuildRank ( );
};

UClass* UUIScene_GuildLeaveGuild::pClassPointer = NULL;

// Class NowGame.UIScene_GuildMainMenu
// 0x0024 (0x064C - 0x0628)
class UUIScene_GuildMainMenu : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    BodyPanel;                                        		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MemberButton;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   DiplomacyButton;                                  		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   LeaveButton;                                      		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseButton;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   OptionsButton;                                    		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  newOwnerEditBox;                                  		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    guildNameLabel;                                   		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1699 ];

		return pClassPointer;
	};

	bool OptionsButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool LeaveButtonButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool MemberButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool DiplomacyButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void PostInitUpdate ( );
	void eventInitScene ( );
	int getPlayerGuildRank ( );
	struct FString GetGuildName ( );
};

UClass* UUIScene_GuildMainMenu::pClassPointer = NULL;

// Class NowGame.UIScene_GuildManager
// 0x0000 (0x0628 - 0x0628)
class UUIScene_GuildManager : public UUIScene_Now_BaseScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1700 ];

		return pClassPointer;
	};

	void eventInvited ( );
	void eventNotAMember ( );
	void eventCreateNewGuild ( );
	void eventLeaveCurrentGuild ( );
	void eventOpenGuildMenu ( );
	void eventDynamicOpenScene ( struct FString SceneName );
	bool IsGuildMember ( );
};

UClass* UUIScene_GuildManager::pClassPointer = NULL;

// Class NowGame.UIScene_HouseAddWorkBench
// 0x0078 (0x06A0 - 0x0628)
class UUIScene_HouseAddWorkBench : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   ok_btn;                                           		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              btnMod[ 0x3 ];                                    		// 0x0634 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnPlaceBench;                                    		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblCurrentMod;                                    		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblBenchName;                                     		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblMat[ 0x3 ];                                    		// 0x0650 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           m_availableModules;                               		// 0x0660 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_materialsUsed;                                  		// 0x066C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      m_materialsQuantity;                              		// 0x0678 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUILabel*                                    BenchName;                                        		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_WorkBenchInfo;                                  		// 0x0688 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_curSelection;                                   		// 0x0694 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1701 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool closeSceneClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void sendMessageToPlayer ( struct FString Message );
	void setModuleButtons ( );
	void eventResetMyWorkBench ( );
	void eventUpdateMyWorkBench ( class UContentInfo* NewIcon, struct FString workBenchName );
	void PostInitUpdate ( );
	void setWorkBenchInfo ( struct FString Info, class ANowAtlasAvatarPlayerHouse* myHouse );
	bool ModuleSelected ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool PlaceWorkbench ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
	void GetWorkBenchInfo ( struct FString workBenchInfo );
};

UClass* UUIScene_HouseAddWorkBench::pClassPointer = NULL;

// Class NowGame.UIScene_HouseSign
// 0x00F0 (0x0718 - 0x0628)
class UUIScene_HouseSign : public UUIScene_Now_BaseScene
{
public:
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0628 (0x0004) [0x0000000000000000]              
	int                                                m_Woodresources;                                  		// 0x062C (0x0004) [0x0000000000000000]              
	int                                                m_Stoneresources;                                 		// 0x0630 (0x0004) [0x0000000000000000]              
	int                                                m_curHp;                                          		// 0x0634 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    progress_frame;                                   		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   ok_button;                                        		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              progressBarWood;                                  		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    progressWood;                                     		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblCurHp;                                         		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    rescourcesHeader;                                 		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              progressBarStone;                                 		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    progressStone;                                    		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              progressBarLeather;                               		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    progressLeather;                                  		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblMaterial[ 0x5 ];                               		// 0x0660 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblProgress[ 0x4 ];                               		// 0x0674 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblResources[ 0x4 ];                              		// 0x0684 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblCurrentUpKeep;                                 		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblCurrentTax;                                    		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              progressBars[ 0x4 ];                              		// 0x069C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialNames[ 0x5 ];                             		// 0x06AC (0x003C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUIImage*                                    houseSign_frame;                                  		// 0x06E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   key_button;                                       		// 0x06EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblHouseOwner;                                    		// 0x06F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblGuild;                                         		// 0x06F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblSupport;                                       		// 0x06F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblThis;                                          		// 0x06FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblCurHpFinished;                                 		// 0x0700 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   changeLock_btn;                                   		// 0x0704 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   progress_changeLock_btn;                          		// 0x0708 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   progress_key_button;                              		// 0x070C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnOptions;                                       		// 0x0710 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0714 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1702 ];

		return pClassPointer;
	};

	void PostInitUpdate ( );
	void eventSceneDeactivated ( );
	void setHouseCompleteSignVisible ( );
	void getConstructionMaterials ( );
	void updateRescources ( );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool GetNewKey ( class UUIScreenObject* EventObject, int PlayerIndex );
	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool ChangeLock ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OptionsClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
	void RemoveFriend ( struct FString _friend );
	void AddFriend ( struct FString _friend );
};

UClass* UUIScene_HouseSign::pClassPointer = NULL;

// Class NowGame.UIScene_HouseTerritoryControll
// 0x0020 (0x0648 - 0x0628)
class UUIScene_HouseTerritoryControll : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0630 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblSupport;                                       		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editSupport;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseButton;                                      		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Vote;                                             		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1703 ];

		return pClassPointer;
	};

	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	bool VoteClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	void UpdateStatus ( );
	void eventInitScene ( );
	struct FString getVote ( );
};

UClass* UUIScene_HouseTerritoryControll::pClassPointer = NULL;

// Class NowGame.UIScene_HouseTrade
// 0x0380 (0x09A8 - 0x0628)
class UUIScene_HouseTrade : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_HouseTrade_FTradeItemData          m_TradeSlotA[ 0x24 ];                             		// 0x0628 (0x0360) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0988 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_playerHouse;                                    		// 0x098C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_AcceptButton;                                   		// 0x0990 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CancelButton;                                   		// 0x0994 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_YouAcceptedImg;                                 		// 0x0998 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_TheyAcceptedImg;                                		// 0x099C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_YourNameLabel;                                  		// 0x09A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_TheirNameLabel;                                 		// 0x09A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1704 ];

		return pClassPointer;
	};

	void UpdateTrade ( );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void PostInitUpdate ( );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool CancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	void CancelTrade ( );
};

UClass* UUIScene_HouseTrade::pClassPointer = NULL;

// Class NowGame.UIScene_HUD
// 0x0008 (0x0630 - 0x0628)
class UUIScene_HUD : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    MountPanel;                                       		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPlayerController*                        MyPlayerController;                               		// 0x062C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1705 ];

		return pClassPointer;
	};

	void eventShowMountPanel ( unsigned long bShow );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_HUD::pClassPointer = NULL;

// Class NowGame.UIScene_KeepTaxes
// 0x0024 (0x064C - 0x0628)
class UUIScene_KeepTaxes : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0630 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblCurrent;                                       		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblHouses;                                        		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseButton;                                      		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnTaxes;                                         		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINumericEditBox*                           editTax;                                          		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1706 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void UpdateStatus ( );
	bool btnTaxesClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
	int getHousesInTerritor ( );
	int getTax ( );
};

UClass* UUIScene_KeepTaxes::pClassPointer = NULL;

// Class NowGame.UIScene_KeepTerritoryControll
// 0x002C (0x0654 - 0x0628)
class UUIScene_KeepTerritoryControll : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0630 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblCurrently;                                     		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblCurrentlyControl;                              		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblAllow;                                         		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseButton;                                      		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnYes;                                           		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BtnNo;                                            		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnTaxes;                                         		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1707 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void UpdateStatus ( );
	bool btnNoClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool btnYesClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool btnTaxesClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
	struct FString IsTerritoryOwner ( );
	bool IsVotingAllowed ( );
};

UClass* UUIScene_KeepTerritoryControll::pClassPointer = NULL;

// Class NowGame.UIScene_Loading
// 0x001C (0x0644 - 0x0628)
class UUIScene_Loading : public UUIScene_Now_BaseScene
{
public:
	class ANowPlayerController*                        MyPlayerController;                               		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUIProgressBar*                              progress_bar;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    progress_nr;                                      		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    progress_info;                                    		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PendingState;                                     		// 0x0638 (0x0004) [0x0000000000000000]              
	int                                                CurrentState;                                     		// 0x063C (0x0004) [0x0000000000000000]              
	class UNowGFXSceneLoading*                         LoadScene;                                        		// 0x0640 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1708 ];

		return pClassPointer;
	};

	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void Tick ( float DeltaTime );
	void eventSetState ( int WhatState, struct FString Info );
	void eventInitScene ( );
};

UClass* UUIScene_Loading::pClassPointer = NULL;

// Class NowGame.UIScene_Login
// 0x0054 (0x067C - 0x0628)
class UUIScene_Login : public UUIScene_Now_BaseScene
{
public:
	struct FString                                     sUserNameSaved;                                   		// 0x0628 (0x000C) [0x0000000000406000]              ( CPF_Transient | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bSaveUserName : 1;                                		// 0x0634 (0x0004) [0x0000000000006000] [0x00000001] ( CPF_Transient | CPF_Config )
	unsigned long                                      bInProgress : 1;                                  		// 0x0634 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLogin : 1;                                       		// 0x0634 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bConnected : 1;                                   		// 0x0634 (0x0004) [0x0000000000000000] [0x00000008] 
	class UUIPanel*                                    LoginWindow;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    MsgPanel;                                         		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              LoginButton;                                      		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ProgressLabel;                                    		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Version;                                          		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  UsernameText;                                     		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  PasswordText;                                     		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 SaveUN;                                           		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Greenlight;                                       		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iCount;                                           		// 0x065C (0x0004) [0x0000000000000000]              
	struct FString                                     LoginMsg;                                         		// 0x0660 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VersionString;                                    		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPlayerController*                        NPC;                                              		// 0x0678 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1709 ];

		return pClassPointer;
	};

	bool OpenGreenlight ( class UUIScreenObject* Target, int Source );
	bool CancelLogin ( class UUIScreenObject* O, int PlayerIndex );
	bool OnChatSubmitText ( class UUIEditBox* Sender, int PlayerIndex );
	bool DoSaveUn ( class UUIScreenObject* Target, int Source );
	void ClearDelegates ( );
	bool Dologin ( class UUIScreenObject* O, int PlayerIndex );
	void OnConnectionComplete ( unsigned long bWasSuccessful );
	void OnLoginComplete ( unsigned long bWasSuccessful );
	void OnClientMismatch ( );
	void OnClientNoShard ( );
	void LoginRetryUpdate ( );
	void OnClientServDown ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void initConfigValues ( );
	void eventInitScene ( );
	void OpenWebpage ( struct FString sURL );
};

UClass* UUIScene_Login::pClassPointer = NULL;

// Class NowGame.UIScene_LootWindow
// 0x0120 (0x0748 - 0x0628)
class UUIScene_LootWindow : public UUIScene_Now_BaseScene
{
public:
	struct FLootItemData                               ItemList[ 0x24 ];                                 		// 0x0628 (0x0120) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1710 ];

		return pClassPointer;
	};

	void UpdatePage ( );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnLootClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnLootRightClicked ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void LootChanged ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	void NowLeaveLootSession ( );
};

UClass* UUIScene_LootWindow::pClassPointer = NULL;

// Class NowGame.UIScene_NewLoot
// 0x0518 (0x0B40 - 0x0628)
class UUIScene_NewLoot : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_HouseTrade_FTradeItemData          m_TradeSlotA[ 0x36 ];                             		// 0x0628 (0x0510) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0B38 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatar*                             m_myLootBag;                                      		// 0x0B3C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1711 ];

		return pClassPointer;
	};

	void UpdateTrade ( );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void PostInitUpdate ( );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool CancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	bool OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	void CancelTrade ( );
};

UClass* UUIScene_NewLoot::pClassPointer = NULL;

// Class NowGame.UIScene_NPCTerritoryControll
// 0x0020 (0x0648 - 0x0628)
class UUIScene_NPCTerritoryControll : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblSupport;                                       		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editZone;                                         		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editGuild;                                        		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseButton;                                      		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Vote;                                             		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1712 ];

		return pClassPointer;
	};

	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	bool VoteClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void UpdateStatus ( );
	void eventInitScene ( );
	struct FString getVote ( );
};

UClass* UUIScene_NPCTerritoryControll::pClassPointer = NULL;

// Class NowGame.UIScene_Overlay
// 0x007C (0x06A4 - 0x0628)
class UUIScene_Overlay : public UUIScene_Now_BaseScene
{
public:
	class UNowEntryDatastore*                          EntryDS;                                          		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              BACK;                                             		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Next;                                             		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseBtn;                                         		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    plopp[ 0x7 ];                                     		// 0x0638 (0x001C) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Status;                                           		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIScene*                                    CurrentScene;                                     		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      Close : 1;                                        		// 0x065C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurrentStep;                                      		// 0x0660 (0x0004) [0x0000000000000000]              
	struct FString                                     NextScene;                                        		// 0x0664 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BackScene;                                        		// 0x0670 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           statustext;                                       		// 0x067C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           scenes;                                           		// 0x0688 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      CreateCam;                                        		// 0x0694 (0x0004) [0x0000000000000000]              
	class AActor*                                      SelectCam;                                        		// 0x0698 (0x0004) [0x0000000000000000]              
	class AActor*                                      HeadCam;                                          		// 0x069C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NPC;                                              		// 0x06A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1713 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void ChangeScene ( struct FString Scene, unsigned long closecurrent );
	void UpdateCurrentStep ( int Step );
	bool OnBackClick ( class UUIScreenObject* O, int PlayerIndex );
	bool OnNextClick ( class UUIScreenObject* O, int PlayerIndex );
	bool OnCloseClick ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Overlay::pClassPointer = NULL;

// Class NowGame.UIScene_PetBank
// 0x013C (0x0764 - 0x0628)
class UUIScene_PetBank : public UUIScene_Now_BaseScene
{
public:
	class UUILabel*                                    StatLabels[ 0x6 ];                                		// 0x0628 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FPetItemData                                ItemList[ 0x1C ];                                 		// 0x0640 (0x00E0) [0x0000000000002000]              ( CPF_Transient )
	struct FPetItemData                                ItemListArmor[ 0x4 ];                             		// 0x0720 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	int                                                MountBagSize;                                     		// 0x0740 (0x0004) [0x0000000000000000]              
	int                                                Stats[ 0x8 ];                                     		// 0x0744 (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1714 ];

		return pClassPointer;
	};

	void eventSetMountBagSize ( int newValue );
	void PostInitUpdate ( );
	bool OnItemOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnItemDragBegin ( class UUIScreenObject* Source );
	bool OnItemClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void UpdateArmorSlots ( );
	void UpdatePage ( );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void FadeIn ( unsigned long bResetOpacity );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool CloseClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void ContentUpdated ( );
	void GetAndSetStatInfo ( );
	void eventInitScene ( );
	void GetAndSetProfileStats ( );
};

UClass* UUIScene_PetBank::pClassPointer = NULL;

// Class NowGame.UIScene_PlayerVendorOwnerBrowse
// 0x03D4 (0x09FC - 0x0628)
class UUIScene_PlayerVendorOwnerBrowse : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_HouseTrade_FTradeItemData          m_TradeSlotA[ 0xC ];                              		// 0x0628 (0x0120) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct UUIScene_HouseTrade_FTradeItemData          m_WantedItemSlotA[ 0xC ];                         		// 0x0748 (0x0120) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANowAtlasAvatar*                             m_pVendor;                                        		// 0x0868 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatar*                             m_pHouse;                                         		// 0x086C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0870 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    ToolPanel;                                        		// 0x0874 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    WorkbenchPanel;                                   		// 0x0878 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Quit;                                             		// 0x087C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              PostItem;                                         		// 0x0880 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x0884 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Bench;                                            		// 0x0888 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x088C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Resources[ 0x2 ];                                 		// 0x0890 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemList[ 0x2 ];                                  		// 0x0898 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  PriceEdit;                                        		// 0x08A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x08A4 (0x0004) [0x0000000000000000]              
	float                                              onetimer;                                         		// 0x08A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInProgress : 1;                                  		// 0x08AC (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowPlayerController*                        NPC;                                              		// 0x08B0 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActor*                         TargetActor;                                      		// 0x08B4 (0x0004) [0x0000000000000000]              
	struct FString                                     sellItemGUID;                                     		// 0x08B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     wantedItemGuid;                                   		// 0x08C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Messages;                                         		// 0x08D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SellableItems[ 0x17 ];                            		// 0x08DC (0x0114) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeLeft;                                         		// 0x09F0 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    TimeLabel;                                        		// 0x09F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINumericEditBox*                           editPrice;                                        		// 0x09F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1715 ];

		return pClassPointer;
	};

	class ANowAtlasAvatar* getHouse ( );
	void PostRefineMessage ( struct FString msg );
	void UpdatePage ( );
	void UpdateTrade ( );
	void MessageEvent ( struct FString msg );
	bool OnWantedItemSlotDropped ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnWantedItemSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSellSlotDropped ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnSellSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnPostItem ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool sendMessageToVendor ( struct FString VendorMessage );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnChatRawInputKey ( struct FInputEventParameters* EventParms );
	void eventInitScene ( );
	void getVendor ( );
	void AddItemToVendor ( struct FString _sellItemGuid, struct FString _wantedItemGuid, struct FString _Quantity );
};

UClass* UUIScene_PlayerVendorOwnerBrowse::pClassPointer = NULL;

// Class NowGame.UIScene_PotionMaking
// 0x0164 (0x078C - 0x0628)
class UUIScene_PotionMaking : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              Close;                                            		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Create;                                           		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        ItemList[ 0xF ];                                  		// 0x0630 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemButtons[ 0xF ];                               		// 0x066C (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    VialDescription;                                  		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    WORKBENCH;                                        		// 0x06AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ItemGUIDS[ 0xE ];                                 		// 0x06B4 (0x00A8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VialGUID;                                         		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BenchName;                                        		// 0x0768 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPlayerController*                        NPC;                                              		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              Timer;                                            		// 0x0778 (0x0004) [0x0000000000000000]              
	struct FString                                     VialName;                                         		// 0x077C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MessageTimer;                                     		// 0x0788 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1716 ];

		return pClassPointer;
	};

	void UpdateWorkBench ( );
	void UpdatePage ( );
	void CheckSkills ( );
	void VerifyItems ( );
	void UpdateMessage ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void SetVialText ( );
	void SetMessage ( struct FString Text );
	bool OnOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnClick ( class UUIScreenObject* Target, int PlayerIndex );
	bool VerifyWorkbench ( );
	bool OnCreate ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	void DoCreate ( );
};

UClass* UUIScene_PotionMaking::pClassPointer = NULL;

// Class NowGame.UIScene_ScreenOptions
// 0x00A8 (0x06D0 - 0x0628)
class UUIScene_ScreenOptions : public UUIScene_Now_BaseScene
{
public:
	unsigned long                                      FullScreen : 1;                                   		// 0x0628 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShadows : 1;                                     		// 0x0628 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMotionBlur : 1;                                  		// 0x0628 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                ResX;                                             		// 0x062C (0x0004) [0x0000000000000000]              
	int                                                ResY;                                             		// 0x0630 (0x0004) [0x0000000000000000]              
	int                                                World;                                            		// 0x0634 (0x0004) [0x0000000000000000]              
	int                                                Character;                                        		// 0x0638 (0x0004) [0x0000000000000000]              
	int                                                Light;                                            		// 0x063C (0x0004) [0x0000000000000000]              
	int                                                Effects;                                          		// 0x0640 (0x0004) [0x0000000000000000]              
	TArray< struct FShadowSettings >                   ShadowQuality;                                    		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Resolutions;                                      		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           TextureValues;                                    		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           BinTexture;                                       		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUICheckbox*                                 WindowMode;                                       		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 MotionBlur;                                       		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ResLabel;                                         		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              WorldLabel;                                       		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              CharLabel;                                        		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              LsLabel;                                          		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              EffectsLabel;                                     		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ButtonOk;                                         		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    ResPanel;                                         		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ResButton[ 0xE ];                                 		// 0x0698 (0x0038) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1717 ];

		return pClassPointer;
	};

	void eventSceneDeactivated ( );
	void eventUpdateLabels ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnEffectsTextureClicked ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnEffectsTextureSelect ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnCharacterTextureClicked ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnCharacterTextureSelect ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnShadowQualityClicked ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnShadowQualitySelect ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnWorldTextureClicked ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnWorldTextureSelect ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnResClicked ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnSelectRes ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnWindowMode ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnMotionBlur ( class UUIScreenObject* Caller, int PlayerIndex );
	void eventInitScene ( );
	void SetShadowSettings ( int I );
	void ToggleMotionBlur ( );
	void SetEffectsTexture ( );
	void SetCharacterTexture ( );
	void SetWorldTexture ( );
	void SetFullScreen ( );
	void SetResolution ( );
	void LoadResolution ( );
};

UClass* UUIScene_ScreenOptions::pClassPointer = NULL;

// Class NowGame.UIScene_SendGuildMessage
// 0x0008 (0x0630 - 0x0628)
class UUIScene_SendGuildMessage : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              SendButton;                                       		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUIEditBox*                                  MessageEditBox;                                   		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1718 ];

		return pClassPointer;
	};

	bool SendMessage ( class UUIScreenObject* O, int PlayerIndex );
	void eventInitScene ( );
	void SendServerMessage ( struct FString msg );
};

UClass* UUIScene_SendGuildMessage::pClassPointer = NULL;

// Class NowGame.UIScene_StableWindow
// 0x0030 (0x0658 - 0x0628)
class UUIScene_StableWindow : public UUIScene_Now_BaseScene
{
public:
	struct FStableButton                               StableSlot[ 0x2 ];                                		// 0x0628 (0x0020) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FClaimButton                                ClaimSlot[ 0x2 ];                                 		// 0x0648 (0x0010) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1719 ];

		return pClassPointer;
	};

	void ItemListChanged ( TArray< struct FString > ItemNames );
	bool PerformClaim ( class UUIScreenObject* O, int PlayerIndex );
	bool PerformStable ( class UUIScreenObject* O, int PlayerIndex );
	void InitClaimMounts ( );
	void InitStableMounts ( );
	void InitializeButtons ( );
	void PostUpdateInitialize ( );
	void eventInitScene ( );
	void SendServerMessage ( struct FString msg );
};

UClass* UUIScene_StableWindow::pClassPointer = NULL;

// Class NowGame.UIScene_Tree
// 0x005C (0x0684 - 0x0628)
class UUIScene_Tree : public UUIScene_Now_BaseScene
{
public:
	class UUIToggleButton*                             Gender[ 0x2 ];                                    		// 0x0628 (0x0008) [0x0000000000000000]              
	class UUIButton*                                   BloodLine[ 0x6 ];                                 		// 0x0630 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    BloodLabel[ 0x4 ];                                		// 0x0648 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           BloodScenes;                                      		// 0x0658 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UContentInfo_Bloodline* >            BloodCL;                                          		// 0x0664 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowSkeletalMeshActor*                       MeshActor;                                        		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UNowEntryDatastore*                          EntryDS;                                          		// 0x0674 (0x0004) [0x0000000000000000]              
	class USurface*                                    defaulticon;                                      		// 0x0678 (0x0004) [0x0000000000000000]              
	unsigned long                                      Waiting : 1;                                      		// 0x067C (0x0004) [0x0000000000000000] [0x00000001] 
	class UUILabelButton*                              AddAge;                                           		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1720 ];

		return pClassPointer;
	};

	void InitOghmir ( );
	void InitHalfbreed ( );
	void InitAlvarin ( );
	void InitHumans ( );
	void eventCalculateMainblood ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnBloodSelect ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnGender ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnAgeRightClick ( class UUIObject* EventObject, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnAge ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Tree::pClassPointer = NULL;

// Class NowGame.UIScene_VendorWindow
// 0x0414 (0x0A3C - 0x0628)
class UUIScene_VendorWindow : public UUIScene_Now_BaseScene
{
public:
	struct FnowVendorItemWidgetData                    m_VendorSlot[ 0x18 ];                             		// 0x0628 (0x01E0) [0x0000000000002000]              ( CPF_Transient )
	struct FnowVendorItemWidgetData                    m_VendorSellSlot[ 0xC ];                          		// 0x0808 (0x00F0) [0x0000000000002000]              ( CPF_Transient )
	struct FnowVendorItemWidgetData                    m_VendorBuySlot[ 0xC ];                           		// 0x08F8 (0x00F0) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_ConfirmationPanel;                              		// 0x09E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_ConfAcceptButton;                               		// 0x09EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_ConfCancelButton;                               		// 0x09F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_AcceptButton;                                   		// 0x09F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CancelButton;                                   		// 0x09F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINumericEditBox*                           m_Num;                                            		// 0x09FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_VendorSellValueLabel;                           		// 0x0A00 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_VendorBuyValueLabel;                            		// 0x0A04 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_VendorSellValue;                                		// 0x0A08 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_VendorBuyValue;                                 		// 0x0A0C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FAtlasItem >                        m_SellItems;                                      		// 0x0A10 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                m_NumSlots;                                       		// 0x0A1C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSellSlots;                                   		// 0x0A20 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumBuySlots;                                    		// 0x0A24 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FnowVendorItemWidgetData                    m_CurrentSlot;                                    		// 0x0A28 (0x0014) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1721 ];

		return pClassPointer;
	};

	bool TakeItems ( );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	void UpdateVendorBuy ( );
	void UpdateVendorSell ( );
	void UpdateInventory ( );
	void UpdateAll ( );
	bool OnVendorBuyButtonRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnVendorSellButtonLeftClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnVendorSellButtonRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnVendorButtonRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnVendorButtonLeftClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool DoCancelTrade ( );
	bool DoVendorTrade ( );
	bool CancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ConfCancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AcceptButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ConfAcceptButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void ItemListChanged ( TArray< struct FString > ItemData );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_VendorWindow::pClassPointer = NULL;

// Class NowGame.UIScene_TutorialVendor
// 0x0004 (0x0A40 - 0x0A3C)
class UUIScene_TutorialVendor : public UUIScene_VendorWindow
{
public:
	class ANowAtlasAvatarNpcTutorialTrade*             TutorialNpc;                                      		// 0x0A3C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1722 ];

		return pClassPointer;
	};

	void OnInventoryItemRightClick ( int iBag, int iSlot );
	void eventInitScene ( );
};

UClass* UUIScene_TutorialVendor::pClassPointer = NULL;

// Class NowGame.NowChildHud
// 0x0004 (0x0040 - 0x003C)
class UNowChildHud : public UObject
{
public:
	class ANowHUD*                                     MPH;                                              		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44510 ];

		return pClassPointer;
	};

	void DumpDebugHudInfo ( );
	void DrawChildHud ( class UCanvas* C );
	void UseDebugHudB ( );
	void UseDebugHud ( );
	void InitChildHud ( class ANowHUD* InitParentHud );
};

UClass* UNowChildHud::pClassPointer = NULL;

// Class NowGame.NowChildHudGM
// 0x3368 (0x33A8 - 0x0040)
class UNowChildHudGM : public UNowChildHud
{
public:
	struct FString                                     msg[ 0x1E ];                                      		// 0x0040 (0x0168) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     petitions[ 0x1E ];                                		// 0x01A8 (0x0168) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     announcements[ 0xA ];                             		// 0x0310 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SelectedPetitionSource;                           		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GMName;                                           		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                msgSpot;                                          		// 0x03A0 (0x0004) [0x0000000000000000]              
	int                                                AnnouncementSize;                                 		// 0x03A4 (0x0004) [0x0000000000000000]              
	int                                                ClosedPetitions;                                  		// 0x03A8 (0x0004) [0x0000000000000000]              
	int                                                CurIndex;                                         		// 0x03AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowInfo : 1;                                    		// 0x03B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowPetitions : 1;                               		// 0x03B0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FBrokenItem >                       BrokenItems;                                      		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TPInfo[ 0x12C ];                                  		// 0x03C0 (0x0E10) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FVector                                     TPPos[ 0x1E ];                                    		// 0x11D0 (0x0168) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Notes[ 0x1E ];                                    		// 0x1338 (0x0168) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Quick[ 0x1E ];                                    		// 0x14A0 (0x0168) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     PetitionFilter;                                   		// 0x1608 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LastCommands[ 0x1E ];                             		// 0x1614 (0x0168) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ViewParamList[ 0x258 ];                           		// 0x177C (0x1C20) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                lastCommandCounter;                               		// 0x339C (0x0004) [0x0000000000000000]              
	int                                                lastViewParamListCounter;                         		// 0x33A0 (0x0004) [0x0000000000000000]              
	int                                                curParamPage;                                     		// 0x33A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44509 ];

		return pClassPointer;
	};

	void SendCommand ( struct FString WhatCommand );
	bool HandleCommand ( struct FString WhatCommand, struct FString fullString );
	void NewAnnouncement ( struct FString Message );
	void ClearPetitions ( );
	void ClearMsg ( );
	int GetIndexOfPetitionSource ( struct FString PetitionSource );
	void ExecQuick ( int Index );
	void RemQuick ( int Index );
	void ShowQuick ( );
	int FindQuickSpot ( );
	void AddQuick ( struct FString NewCommand );
	void ExecTP ( int Index );
	void RemTP ( int Index );
	void ShowTP ( );
	int FindTPSpot ( );
	void AddTP ( struct FString newDesc );
	int FindNoteSpot ( );
	void AddNote ( struct FString newMsg );
	void RemNote ( int Index );
	void ShowNotes ( );
	struct FString GetItemTypeReadable ( int Type );
	void FixBrokenItem ( int Index, struct FString TargetName, int ItemType );
	struct FBrokenItem IdentifyItem ( struct FBrokenItem Item );
	void ParseBrokenItem ( struct FString RawString );
	void GetBrokenItems ( struct FString TargetName );
	void ShowBrokenItems ( );
	void SetPetitionFilter ( struct FString Filter );
	void WhisperToPetitionSource ( struct FString Message, struct FString SourceName );
	void GotoPetitionSource ( struct FString SourceName );
	void ClaimPetition ( struct FString SourceName );
	void RemPetition ( struct FString PetitionSource );
	void PetitionUpdate ( );
	void ShowPetitions ( );
	void DumpChatLog ( struct FString outFile );
	void ShowText ( struct FString Text );
	void InitChildHud ( class ANowHUD* InitParentHud );
	void DrawAnnouncements ( class UCanvas* C );
	void LastParamPage ( );
	void NextParamPage ( );
	void SetParamPage ( int iParamPage );
	void AddParamToViewList ( struct FString StringValue );
	void ClearAndShowPetList ( );
	void ClearAndShowViewParamList ( );
	void AddLastCommandTime ( struct FString GMAvatarName, int Time );
	void ClearAndShowLastCommandList ( );
	void DrawChildHud ( class UCanvas* C );
};

UClass* UNowChildHudGM::pClassPointer = NULL;

// Class NowGame.NowPlayerCamera
// 0x00EC (0x0624 - 0x0538)
class ANowPlayerCamera : public ACamera
{
public:
	float                                              FirstPersonHeadDistance;                          		// 0x0538 (0x0004) [0x0000000000000000]              
	float                                              MountedCamDistance;                               		// 0x053C (0x0004) [0x0000000000000000]              
	float                                              CamDistance;                                      		// 0x0540 (0x0004) [0x0000000000000000]              
	float                                              DesiredCamDistance;                               		// 0x0544 (0x0004) [0x0000000000000000]              
	float                                              TweenTime;                                        		// 0x0548 (0x0004) [0x0000000000000000]              
	float                                              StartTweenTime;                                   		// 0x054C (0x0004) [0x0000000000000000]              
	float                                              OldCamDistance;                                   		// 0x0550 (0x0004) [0x0000000000000000]              
	float                                              AddCamDistance;                                   		// 0x0554 (0x0004) [0x0000000000000000]              
	struct FVector                                     MountedCamOffset;                                 		// 0x0558 (0x000C) [0x0000000000000000]              
	struct FVector                                     CamOffset;                                        		// 0x0564 (0x000C) [0x0000000000000000]              
	struct FVector                                     DesiredCamOffset;                                 		// 0x0570 (0x000C) [0x0000000000000000]              
	class UPostProcessChain*                           CameraEffect;                                     		// 0x057C (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           UnderwaterEffect;                                 		// 0x0580 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           DeadEffect;                                       		// 0x0584 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           CachedPostProcess;                                		// 0x0588 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           BaseEffect;                                       		// 0x058C (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           DeadEffectMan;                                    		// 0x0590 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           BlurEffect;                                       		// 0x0594 (0x0004) [0x0000000000000000]              
	class ACameraActor*                                Cam;                                              		// 0x0598 (0x0004) [0x0000000000000000]              
	struct FVector                                     DeathLocation;                                    		// 0x059C (0x000C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   CachedMaterial;                                   		// 0x05A8 (0x0004) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x05AC (0x0004) [0x0000000000000000]              
	float                                              FovAddValue;                                      		// 0x05B0 (0x0004) [0x0000000000000000]              
	float                                              RollAddValue;                                     		// 0x05B4 (0x0004) [0x0000000000000000]              
	float                                              BlendTarget;                                      		// 0x05B8 (0x0004) [0x0000000000000000]              
	float                                              BlendToGo;                                        		// 0x05BC (0x0004) [0x0000000000000000]              
	unsigned long                                      bInit : 1;                                        		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTracking : 1;                                    		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFadingPostProcess : 1;                           		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBluredByCode : 1;                                		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000008] 
	class UAnimNodeAimOffset*                          CachedAnimNodeOffset;                             		// 0x05C4 (0x0004) [0x0000000000000000]              
	class UUberPostProcessEffect*                      CachedFadeEffect;                                 		// 0x05C8 (0x0004) [0x0000000000000000]              
	struct FVector                                     FadeCenter;                                       		// 0x05CC (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Add_HighLights;                              		// 0x05D8 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Add_MidTones;                                		// 0x05E4 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Add_Shadows;                                 		// 0x05F0 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Default_HighLights;                          		// 0x05FC (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Default_MidTones;                            		// 0x0608 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Default_Shadows;                             		// 0x0614 (0x000C) [0x0000000000000000]              
	float                                              Fade_EffectMaxRange;                              		// 0x0620 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44613 ];

		return pClassPointer;
	};

	void DefaultPostProcess ( );
	void BlurPostProcess ( );
	void StopCameraFx ( );
	void SetCameraFX ( class UPostProcessChain* newFX, float Time );
	void FadePostProcess ( );
	void StopFadePostProcess ( );
	void Tick ( float DeltaTime );
	void RemoveUnderwaterFx ( );
	void AddUnderwaterFx ( );
	void PlayDeathFx ( unsigned long bManifested );
	void FindPriestBeacon ( unsigned long TurnOn );
	void StopHitFx ( );
	void PlayHitFx ( );
	void RemoveBloodOnCameraFx ( );
	void PlayBloodCameraFx ( );
	void RemoveConfusedCamera ( );
	void PlayConfusedCameraFx ( float Time );
	void StopOnScreenMaterialFX ( );
	void PlayOnScreenMaterialFX ( class UMaterialInstance* WhatFX, float Timer, float BlendOutTime, unsigned long bIsDominantMatFX );
	void TrackToggle ( );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	void SetCameraTarget ( );
	void InitializeFor ( class APlayerController* PC );
	void SetPPFader ( struct FVector NewFadeCenter, float New_EffectMaxRange, struct FVector HighLights, struct FVector MidTones, struct FVector Shadows );
};

UClass* ANowPlayerCamera::pClassPointer = NULL;

// Class NowGame.ClientViewMode
// 0x0014 (0x0050 - 0x003C)
class UClientViewMode : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DenyMat;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   OkMat;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   SelectMat;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseCanvasTick : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseMouseInput : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseNumberInput : 1;                              		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44625 ];

		return pClassPointer;
	};

	void NumberPress ( int iNumber );
	void Escape ( );
	void RightClick ( );
	void LeftClick ( );
	void CanvasTick ( class UCanvas* C );
	bool PressedUse ( );
	void Remove ( );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewMode::pClassPointer = NULL;

// Class NowGame.ClientViewModeAiControl
// 0x0010 (0x0060 - 0x0050)
class UClientViewModeAiControl : public UClientViewMode
{
public:
	class ANowAtlasAvatar*                             CurrentAi;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                HelperActor;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                CursorActor;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSelectNextTarget : 1;                            		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAttackNextTarget : 1;                            		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMoveNextTarget : 1;                              		// 0x005C (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44624 ];

		return pClassPointer;
	};

	void Escape ( );
	void RightClick ( );
	void LeftClick ( );
	bool PressedUse ( );
	void Remove ( );
	void CanvasTick ( class UCanvas* C );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewModeAiControl::pClassPointer = NULL;

// Class NowGame.ClientEffect_MountBoost
// 0x0000 (0x007C - 0x007C)
class UClientEffect_MountBoost : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44744 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_MountBoost::pClassPointer = NULL;

// Class NowGame.ClientEffect_MountBoostStart
// 0x0000 (0x007C - 0x007C)
class UClientEffect_MountBoostStart : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44746 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_MountBoostStart::pClassPointer = NULL;

// Class NowGame.ClientEffect_Push
// 0x0000 (0x007C - 0x007C)
class UClientEffect_Push : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44748 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_Push::pClassPointer = NULL;

// Class NowGame.ClientEffect_Res
// 0x0000 (0x007C - 0x007C)
class UClientEffect_Res : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44750 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_Res::pClassPointer = NULL;

// Class NowGame.ClientEffect_SleepEnd
// 0x0000 (0x007C - 0x007C)
class UClientEffect_SleepEnd : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44752 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_SleepEnd::pClassPointer = NULL;

// Class NowGame.ClientEffect_SleepStart
// 0x0000 (0x007C - 0x007C)
class UClientEffect_SleepStart : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44754 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_SleepStart::pClassPointer = NULL;

// Class NowGame.ClientEffect_Stun
// 0x0000 (0x007C - 0x007C)
class UClientEffect_Stun : public UClientEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44756 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_Stun::pClassPointer = NULL;

// Class NowGame.NowPlayerInput
// 0x0011 (0x0188 - 0x0177)
class UNowPlayerInput : public UAtlasPlayerInput
{
public:
	unsigned long                                      bIsInMenu : 1;                                    		// 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LastInputKey : 1;                                 		// 0x0178 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPressedForward : 1;                              		// 0x0178 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              fCheckForTap;                                     		// 0x017C (0x0004) [0x0000000000000000]              
	struct FIntPoint                                   SavePoint;                                        		// 0x0180 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44794 ];

		return pClassPointer;
	};

	void ToggleMOUI ( );
	void PostBeginPlay ( );
	class ANowAtlasAvatarAiDynamicMount* eventGetMount ( );
	void ToggleAutoMove ( );
	void ShowMouseOff ( );
	void ShowMouseOn ( );
	class UNowGFXHudScene* GetGFXHud ( );
	void SetShowMouse ( unsigned long bShow );
	void ToggleMouse ( );
	unsigned char CheckForDoubleClickMove ( float DeltaTime );
	void eventPlayerInput ( float DeltaTime );
	bool HasLookInput ( );
	bool HasMoveInput ( );
};

UClass* UNowPlayerInput::pClassPointer = NULL;

// Class NowGame.ClientViewModeCreatureControl
// 0x0008 (0x0058 - 0x0050)
class UClientViewModeCreatureControl : public UClientViewMode
{
public:
	int                                                m_iSelectedPet;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                m_iSelectedCommand;                               		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44829 ];

		return pClassPointer;
	};

	void SendCommand ( int FinalCommand );
	void NumberPress ( int iNumber );
	void CanvasTick ( class UCanvas* C );
	void Escape ( );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewModeCreatureControl::pClassPointer = NULL;

// Class NowGame.ClientViewModeKeepNpcPlace
// 0x001C (0x006C - 0x0050)
class UClientViewModeKeepNpcPlace : public UClientViewMode
{
public:
	class UStaticMesh*                                 GhostMesh;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      PreviewMesh;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarPlayerKeep*                   MyKeep;                                           		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              UpdateSelectTimer;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                ActiveSlot;                                       		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44850 ];

		return pClassPointer;
	};

	void Remove ( );
	void UpdateSelected ( );
	void Tick ( float DeltaTime );
	void ConnectToKeep ( class ANowAtlasAvatarPlayerKeep* WhatKeep );
	class ANowAtlasAvatarPlayerKeep* FindKeep ( );
	void AttachTo ( class AController* aController );
	int GetSlot ( );
	bool PressedUse ( );
};

UClass* UClientViewModeKeepNpcPlace::pClassPointer = NULL;

// Class NowGame.ClientViewModePlace
// 0x0034 (0x0084 - 0x0050)
class UClientViewModePlace : public UClientViewMode
{
public:
	float                                              AvatarRadius;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              AvatarHeight;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FVector                                     AvatarTranslation;                                		// 0x0058 (0x000C) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                PreviewActor;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0068 (0x000C) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      LinkMesh;                                         		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCanPlaceInGuardZone : 1;                         		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44892 ];

		return pClassPointer;
	};

	void Remove ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	bool VerifyPoint ( struct FVector WhatPoint );
	bool GroundPoint ( struct FVector* WhatPoint );
	void ResetPreviewMaterials ( );
	struct FVector GetPlacePoint ( );
	bool CornerCheck ( struct FVector WhatPoint );
	bool CanPlaceAvatar ( );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
	bool PressedUse ( );
	void InitPlaceMode ( struct FString sContentInfo, unsigned long bPlaceInGuardZone );
};

UClass* UClientViewModePlace::pClassPointer = NULL;

// Class NowGame.NowVolumeWater
// 0x0028 (0x03A0 - 0x0378)
class ANowVolumeWater : public AWaterVolume
{
public:
	float                                              Height;                                           		// 0x0378 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             WaterRings;                                       		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             WaterSplash;                                      		// 0x0380 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ANowPawn* >                          SwimmingPawns;                                    		// 0x0384 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APlayerController*                           ClientController;                                 		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              LastControllerEnterTime;                          		// 0x0394 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CachedUnderWaterCue;                              		// 0x0398 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasAtSurface : 1;                                		// 0x039C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTookDrowningDamage : 1;                          		// 0x039C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44947 ];

		return pClassPointer;
	};

	class ANowPawn* GetANowPawn ( );
	class ANowPlayerController* GetANowController ( );
	void Splash ( class AActor* Other );
	void PlayExitSplash ( class AActor* Other );
	void PlayEntrySplash ( class AActor* Other );
	void eventPawnLeavingVolume ( class APawn* Other );
	void eventPawnEnteredVolume ( class APawn* Other );
	void eventActorLeavingVolume ( class AActor* Other );
	void CheckSwimmers ( );
	void ClientDrowning ( );
	void SurfaceCheckClient ( );
	bool CanSink ( class ANowPawn* P );
	void eventActorEnteredVolume ( class AActor* Other );
	void MountDrowned ( );
	void CheckMountSwimming ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowVolumeWater::pClassPointer = NULL;

// Class NowGame.ClientViewModePylonBuild
// 0x0030 (0x0080 - 0x0050)
class UClientViewModePylonBuild : public UClientViewMode
{
public:
	float                                              PylonRadius;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                PreviewActor;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0058 (0x000C) [0x0000000000000000]              
	int                                                CornerMatIndex[ 0x4 ];                            		// 0x0064 (0x0010) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      LinkMesh;                                         		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44968 ];

		return pClassPointer;
	};

	void Remove ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	bool VerifyPoint ( struct FVector WhatPoint );
	bool GroundPoint ( struct FVector* WhatPoint );
	void ResetPreviewMaterials ( );
	struct FVector GetPlacePoint ( );
	bool CornerCheck ( struct FVector WhatPoint );
	void UpdatePylonHelpers ( );
	bool CanPlacePylon ( );
	void Tick ( float DeltaTime );
	void ShowLinkMeshes ( );
	void InitPylonInfo ( );
	void AttachTo ( class AController* aController );
	bool PressedUse ( );
};

UClass* UClientViewModePylonBuild::pClassPointer = NULL;

// Class NowGame.ClientViewModePylonUpgrade
// 0x0014 (0x0064 - 0x0050)
class UClientViewModePylonUpgrade : public UClientViewMode
{
public:
	TArray< class ANowStaticMeshActorSpawnable* >      PreviewMesh;                                      		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ActiveSlot;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              UpdateSelectTimer;                                		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45051 ];

		return pClassPointer;
	};

	void Remove ( );
	int GetSlot ( );
	void UpdateSelected ( );
	void Tick ( float DeltaTime );
	void CreatePreviewMesh ( );
	void AttachTo ( class AController* aController );
	class ANowAtlasAvatarPylon* GetPylonActor ( );
	bool PressedUse ( );
};

UClass* UClientViewModePylonUpgrade::pClassPointer = NULL;

// Class NowGame.NowSpellLight
// 0x0000 (0x0224 - 0x0224)
class UNowSpellLight : public UPointLightComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45237 ];

		return pClassPointer;
	};

};

UClass* UNowSpellLight::pClassPointer = NULL;

// Class NowGame.CombatSystemRangedNew
// 0x0118 (0x0160 - 0x0048)
class UCombatSystemRangedNew : public UCombatSystemNew
{
public:
	unsigned long                                      bReadyToFire : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCharging : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHoldingMouse : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDidHit : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDidHitGround : 1;                                		// 0x0048 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bMinCharge : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPerfectCharge : 1;                               		// 0x0048 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverCharge : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bMaxCharge : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bShortBow : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              gravity;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fFocusTimer;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              fHoldTimer;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              fChargeReadyTimer;                                		// 0x0058 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	struct FRotator                                    viewPointRotator;                                 		// 0x0060 (0x000C) [0x0000000000000000]              
	int                                                traceCounter;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                HitPart;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                shotLength;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                totalTraces;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              BowMaxRange;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              StrengthReq;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              FocusTime;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              DrawSpeed;                                        		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              StaminaHoldTick;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              rawBowRange;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              MINCHARGETIME;                                    		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0098 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FTraceHitInfo                               HitInfo2;                                         		// 0x00B4 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     HitLocationCached;                                		// 0x00D0 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x00DC (0x000C) [0x0000000000000000]              
	struct FVector                                     StartShot;                                        		// 0x00E8 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndShot;                                          		// 0x00F4 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartShotRandomized;                              		// 0x0100 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndShotRandomized;                                		// 0x010C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitLoc;                                           		// 0x0118 (0x000C) [0x0000000000000000]              
	struct FVector                                     arcHitLoc;                                        		// 0x0124 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           instaTracePoints;                                 		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    lengthToTracePoint;                               		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FarrowVelocity                              arrowVel;                                         		// 0x0148 (0x000C) [0x0000000000000000]              
	float                                              ShakeBlendTarget;                                 		// 0x0154 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          Ranged_Charged;                                   		// 0x0158 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlend*                              Ranged_Shake;                                     		// 0x015C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45697 ];

		return pClassPointer;
	};

	void TickAim ( float DeltaTime );
	void ResetShakeBlend ( );
	void UpdateShakeBlend ( float addValue );
	void setProjectileVars ( int* shotSpeed, struct FVector* shotDir );
	void resetEverything ( );
	void TickAndCalcNewVelocity ( );
	void StopAltFire ( unsigned long bForce );
	void StartAltFire ( );
	void CancelCharge ( );
	float modifyMaxRangeFromChargeTime ( );
	float getPercentOfStrengthReq ( );
	float getStrength ( );
	void registerProjectileHit ( class AActor* pHitActorTmp, struct FTraceHitInfo hitInfoTmp, struct FVector StartTrace, struct FVector EndTrace, struct FVector HitLocTmp );
	struct FName PhatTrace ( class USkeletalMeshComponent* SkelMeshComp, struct FVector vStartTrace, struct FVector vEndTrace );
	void registerProjectileLanded ( struct FVector HitLocTmp );
	void StopFire ( unsigned long TargetSelf );
	void ChargeReady ( );
	void setChargeTimesinHUD ( );
	void StartFire ( );
	void GetShakeBlendNodes ( );
	void TickStaminaDrain ( );
	void AttachTo ( class AController* aController );
	void eventUpdateWeaponStats ( class APawn* MyPawn );
	void TickCombat ( float DeltaTime );
};

UClass* UCombatSystemRangedNew::pClassPointer = NULL;

// Class NowGame.DeathFX
// 0x001C (0x0058 - 0x003C)
class UDeathFX : public UObject
{
public:
	class ANowCorpse*                                  pCorpse;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                pMaterialEffect;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pParticleSystem;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pChildSystem;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fPhysStrength;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                iChildParticles;                                  		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45830 ];

		return pClassPointer;
	};

	void SetRagdollStats ( );
	void AddParticleEffects ( );
	void SetCorpseMaterials ( );
	void StartEffect ( class ANowCorpse* pNewCorpse );
};

UClass* UDeathFX::pClassPointer = NULL;

// Class NowGame.NowCorpse
// 0x0048 (0x0334 - 0x02EC)
class ANowCorpse : public AActor
{
public:
	class UParticleSystem*                             BloodSpray;                                       		// 0x02EC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodExplosion;                                   		// 0x02F0 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               HeadMesh;                                         		// 0x02F4 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                       		// 0x02F8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BodyImpactSound;                                  		// 0x02FC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PartImpactSound;                                  		// 0x0300 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      ExtraMesh;                                        		// 0x0304 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TimerBeforeCheckingRemove;                        		// 0x0308 (0x0004) [0x0000000000000000]              
	float                                              ActorH;                                           		// 0x030C (0x0004) [0x0000000000000000]              
	float                                              ActorW;                                           		// 0x0310 (0x0004) [0x0000000000000000]              
	struct FVector                                     Impulse;                                          		// 0x0314 (0x000C) [0x0000000000000000]              
	unsigned long                                      bLostHead : 1;                                    		// 0x0320 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCruchedHead : 1;                                 		// 0x0320 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpawnedDecal : 1;                                		// 0x0320 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLeaveDecals : 1;                                 		// 0x0320 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInWater : 1;                                     		// 0x0320 (0x0004) [0x0000000000000000] [0x00000010] 
	class UAudioComponent*                             DeathSoundComponent;                              		// 0x0324 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMOGibSkeletalMeshComponent*                 GibBodyMeshComp;                                  		// 0x0328 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMOGibSkeletalMeshComponent*                 GibPartMeshComp;                                  		// 0x032C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      GibHeadMeshComp;                                  		// 0x0330 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45838 ];

		return pClassPointer;
	};

	void eventAiGibHead ( class UParticleSystem* DecapBlood );
	class UNowOptionsDatastore* GetNowOptionsDS ( );
	void eventTimer ( );
	void LeaveADecal ( struct FVector HitLoc, struct FVector HitNorm, unsigned long bSmall );
	void AddDecal ( struct FVector StartPos, unsigned long bSmall );
	void SpawnLimbMesh ( int WhatIndex, class AActor* WhatActor );
	void SpawnBloodPS ( int WhatIndex, class AActor* WhatActor );
	void RemoveLimb ( int WhatIndex, class AActor* WhatActor );
	struct FVector GetFinalBlowImpulse ( class AActor* MyActor, struct FVector LastHitPos, struct FVector AddVelocity, float LastDmg );
	void TurnOnCollision ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	bool CheckForGibs ( struct FName WhatHitBone, class AActor* WhatActor );
	void GrabMaterials ( class ANowAtlasAvatar* WhatActor );
	struct FName GiveMeRandomBoneName ( class UPhysicsAsset* TestPhys );
	bool TouchingWaterVolume ( class AActor* pOwner );
	void StartCorpse ( class AActor* FromActor, struct FName LastHitBoneName, struct FVector AddVelocity, float LastDmg, unsigned long bFromMercyMode );
	void FullGibCorpse ( class AActor* FromActor );
	void SetDeathEffect ( struct FString sDeathEffect );
};

UClass* ANowCorpse::pClassPointer = NULL;

// Class NowGame.DeathFXFire
// 0x0000 (0x0058 - 0x0058)
class UDeathFXFire : public UDeathFX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45851 ];

		return pClassPointer;
	};

};

UClass* UDeathFXFire::pClassPointer = NULL;

// Class NowGame.DebugBoxSpawnable
// 0x0000 (0x02F4 - 0x02F4)
class ADebugBoxSpawnable : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45859 ];

		return pClassPointer;
	};

};

UClass* ADebugBoxSpawnable::pClassPointer = NULL;

// Class NowGame.NowGFXSceneLoading
// 0x000C (0x01A8 - 0x019C)
class UNowGFXSceneLoading : public UNowGFXScene
{
public:
	TArray< struct FString >                           TipsArray;                                        		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45864 ];

		return pClassPointer;
	};

	void startHints ( );
	void setProgress ( int Percent, unsigned long skipTween );
	void addHint ( struct FString hint );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXSceneLoading::pClassPointer = NULL;

// Class NowGame.MOGibSkeletalMeshComponent
// 0x0000 (0x05B4 - 0x05B4)
class UMOGibSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45916 ];

		return pClassPointer;
	};

};

UClass* UMOGibSkeletalMeshComponent::pClassPointer = NULL;

// Class NowGame.MortalActorInitializer
// 0x0010 (0x004C - 0x003C)
class UMortalActorInitializer : public UObject
{
public:
	TArray< class AActor* >                            Actors;                                           		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPlayerController*                        MyController;                                     		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45918 ];

		return pClassPointer;
	};

	void Tick ( );
	void MoveToGround ( class AActor* A );
	void RemoveActor ( class AActor* A );
	void AddActor ( class AActor* A );
};

UClass* UMortalActorInitializer::pClassPointer = NULL;

// Class NowGame.MortalAtlasAvatarComponent
// 0x0000 (0x0084 - 0x0084)
class UMortalAtlasAvatarComponent : public UAtlasAvatarComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45939 ];

		return pClassPointer;
	};

};

UClass* UMortalAtlasAvatarComponent::pClassPointer = NULL;

// Class NowGame.NowActorFactoryStaticMesh
// 0x0000 (0x006C - 0x006C)
class UNowActorFactoryStaticMesh : public UActorFactoryStaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46505 ];

		return pClassPointer;
	};

};

UClass* UNowActorFactoryStaticMesh::pClassPointer = NULL;

// Class NowGame.NowProjectileEffect
// 0x0060 (0x03AC - 0x034C)
class ANowProjectileEffect : public ANowAiEffect
{
public:
	struct FVector                                     vTargetVect;                                      		// 0x034C (0x000C) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              fLifeTimer;                                       		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              fHitTimer;                                        		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              fHitTimerMax;                                     		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              fSpeed;                                           		// 0x0368 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x036C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRandInitVel : 1;                               		// 0x036C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDuped : 1;                                     		// 0x036C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bFollowGround : 1;                              		// 0x036C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bLeaveDecal : 1;                                		// 0x036C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bDidHit : 1;                                    		// 0x036C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bAttackReleaseSound : 1;                        		// 0x036C (0x0004) [0x0000000000000000] [0x00000040] 
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x0370 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    m_PSCTrail;                                       		// 0x0374 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             m_PSTrail;                                        		// 0x0378 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             m_PSImpact;                                       		// 0x037C (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vImpactEffectTranslation;                       		// 0x0380 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   m_SoundRelease;                                   		// 0x038C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_SoundImpact;                                    		// 0x0390 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_VelocityMod;                                    		// 0x0394 (0x000C) [0x0000000000000000]              
	float                                              fDecalSize;                                       		// 0x03A0 (0x0004) [0x0000000000000000]              
	int                                                m_iDupeInto;                                      		// 0x03A4 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           m_pDecalMaterial;                                 		// 0x03A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46520 ];

		return pClassPointer;
	};

	void MoveToGround ( );
	void Tick ( float DeltaTime );
	void Destroyed ( );
	void SetTargetActor ( class AActor* NewActor );
	void SetTargetVect ( struct FVector NewVector );
	void EffectProjectileHit ( );
	void LeaveDecal ( );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowProjectileEffect::pClassPointer = NULL;

// Class NowGame.NowAiEffectAcid
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectAcid : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46574 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectAcid::pClassPointer = NULL;

// Class NowGame.NowAiEffectAcidSuicide
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectAcidSuicide : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46585 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectAcidSuicide::pClassPointer = NULL;

// Class NowGame.NowProjectileEffectArrow
// 0x0000 (0x03AC - 0x03AC)
class ANowProjectileEffectArrow : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46594 ];

		return pClassPointer;
	};

};

UClass* ANowProjectileEffectArrow::pClassPointer = NULL;

// Class NowGame.NowAiEffectBow
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectBow : public ANowProjectileEffectArrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46610 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectBow::pClassPointer = NULL;

// Class NowGame.NowAiEffectClaymore
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectClaymore : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46615 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectClaymore::pClassPointer = NULL;

// Class NowGame.NowAiEffectCrossbow
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectCrossbow : public ANowProjectileEffectArrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46621 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectCrossbow::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicGlaive
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectDemonicGlaive : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46628 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicGlaive::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicHeal
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicHeal : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46634 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicHeal::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicProj
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicProj : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46640 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicProj::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicProjAoe
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicProjAoe : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46654 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicProjAoe::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicSphere
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicSphere : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46660 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void EffectProjectileHit ( );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectDemonicSphere::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicStone
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicStone : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46676 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicStone::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicStoneAoe
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicStoneAoe : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46684 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicStoneAoe::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicSummon
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectDemonicSummon : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46692 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicSummon::pClassPointer = NULL;

// Class NowGame.NowAiEffectFireSpit
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectFireSpit : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46700 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectFireSpit::pClassPointer = NULL;

// Class NowGame.NowAiEffectForce
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectForce : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46707 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectForce::pClassPointer = NULL;

// Class NowGame.NowAiEffectGlaive
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectGlaive : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46717 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectGlaive::pClassPointer = NULL;

// Class NowGame.NowAiEffectHalberd
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectHalberd : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46723 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectHalberd::pClassPointer = NULL;

// Class NowGame.NowAiEffectHasta
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectHasta : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46729 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectHasta::pClassPointer = NULL;

// Class NowGame.NowAiEffectInsectoidSummonProj
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectInsectoidSummonProj : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46735 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectInsectoidSummonProj::pClassPointer = NULL;

// Class NowGame.NowAiEffectInsectoidSword
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectInsectoidSword : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46742 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectInsectoidSword::pClassPointer = NULL;

// Class NowGame.NowAiEffectKhuriteSabre
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectKhuriteSabre : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46746 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectKhuriteSabre::pClassPointer = NULL;

// Class NowGame.NowAiEffectLight
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectLight : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46750 ];

		return pClassPointer;
	};

	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectLight::pClassPointer = NULL;

// Class NowGame.NowAiEffectLizardStaff
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectLizardStaff : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46759 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectLizardStaff::pClassPointer = NULL;

// Class NowGame.NowAiEffectLizardSword
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectLizardSword : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46765 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectLizardSword::pClassPointer = NULL;

// Class NowGame.NowAiEffectMassiveAxe
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectMassiveAxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46768 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectMassiveAxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectOneHandedAxe
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectOneHandedAxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46771 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectOneHandedAxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectPickaxe
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectPickaxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46777 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectPickaxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectPortalProj
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectPortalProj : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46783 ];

		return pClassPointer;
	};

	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectPortalProj::pClassPointer = NULL;

// Class NowGame.NowAiEffectRisarAxe
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectRisarAxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46792 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectRisarAxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectSabre
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectSabre : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46796 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSabre::pClassPointer = NULL;

// Class NowGame.NowAiEffectShamanStaff
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectShamanStaff : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46799 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectShamanStaff::pClassPointer = NULL;

// Class NowGame.NowAiEffectSledgeHammer
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectSledgeHammer : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46805 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSledgeHammer::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawn
// 0x001C (0x0308 - 0x02EC)
class ANowAiEffectSpawn : public AActor
{
public:
	unsigned long                                      bHideActor : 1;                                   		// 0x02EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRunningUnHide : 1;                               		// 0x02EC (0x0004) [0x0000000000000000] [0x00000002] 
	class USoundCue*                                   m_UnHideSound;                                    		// 0x02F0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             m_UnHideParticles;                                		// 0x02F4 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 m_AiStaticMesh;                                   		// 0x02F8 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x02FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowAtlasAvatarAi*                           pOwner;                                           		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              m_fTimer;                                         		// 0x0304 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46811 ];

		return pClassPointer;
	};

	void Tick ( float DT );
	void UnHideEffect ( );
	void InitEffect ( class ANowAtlasAvatarAi* NewOwner );
};

UClass* ANowAiEffectSpawn::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawnEgg
// 0x0000 (0x0308 - 0x0308)
class ANowAiEffectSpawnEgg : public ANowAiEffectSpawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46829 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSpawnEgg::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawnFromGround
// 0x000C (0x0314 - 0x0308)
class ANowAiEffectSpawnFromGround : public ANowAiEffectSpawn
{
public:
	struct FVector                                     vStartTrans;                                      		// 0x0308 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46837 ];

		return pClassPointer;
	};

	void Tick ( float DT );
	void InitEffect ( class ANowAtlasAvatarAi* NewOwner );
};

UClass* ANowAiEffectSpawnFromGround::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpikedClub
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectSpikedClub : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46846 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSpikedClub::pClassPointer = NULL;

// Class NowGame.NowAiEffectStone
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectStone : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46852 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectStone::pClassPointer = NULL;

// Class NowGame.NowAiEffectStoneRain
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectStoneRain : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46860 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectStoneRain::pClassPointer = NULL;

// Class NowGame.NowAiEffectSword
// 0x0000 (0x034C - 0x034C)
class ANowAiEffectSword : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46867 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSword::pClassPointer = NULL;

// Class NowGame.NowAiEffectThunderbolt
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectThunderbolt : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46873 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectThunderbolt::pClassPointer = NULL;

// Class NowGame.NowAiEffectWeb
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectWeb : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46885 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectWeb::pClassPointer = NULL;

// Class NowGame.NowAiEffectWoodCuttingAxe
// 0x0000 (0x03AC - 0x03AC)
class ANowAiEffectWoodCuttingAxe : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46892 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectWoodCuttingAxe::pClassPointer = NULL;

// Class NowGame.NowAnimNodeBlendAndPhys
// 0x0004 (0x010C - 0x0108)
class UNowAnimNodeBlendAndPhys : public UAnimNodeBlend
{
public:
	unsigned long                                      bTriggerd : 1;                                    		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46970 ];

		return pClassPointer;
	};

};

UClass* UNowAnimNodeBlendAndPhys::pClassPointer = NULL;

// Class NowGame.NowVolumeSoundArea
// 0x0004 (0x032C - 0x0328)
class ANowVolumeSoundArea : public AVolume
{
public:
	class UPhysicalMaterial*                           NowPhysMaterialOverride;                          		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47070 ];

		return pClassPointer;
	};

};

UClass* ANowVolumeSoundArea::pClassPointer = NULL;

// Class NowGame.NowPhysicalMaterialProperty
// 0x000C (0x0048 - 0x003C)
class UNowPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	class USoundCue*                                   FootStepSound;                                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumeMultiplier;                                 		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumePitch;                                      		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47082 ];

		return pClassPointer;
	};

};

UClass* UNowPhysicalMaterialProperty::pClassPointer = NULL;

// Class NowGame.VectorQueue
// 0x000C (0x0048 - 0x003C)
class UVectorQueue : public UObject
{
public:
	TArray< struct FVector >                           vVectors;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47127 ];

		return pClassPointer;
	};

	bool IsEmpty ( );
	int Length ( );
	int Size ( );
	void Clear ( );
	struct FVector Pop ( );
	struct FVector Peek ( );
	void Push ( struct FVector V );
};

UClass* UVectorQueue::pClassPointer = NULL;

// Class NowGame.NowCorpseDynamic
// 0x0000 (0x0334 - 0x0334)
class ANowCorpseDynamic : public ANowCorpse
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47877 ];

		return pClassPointer;
	};

	void GrabMaterials ( class ANowAtlasAvatar* WhatActor );
	void StartCorpse ( class AActor* FromActor, struct FName LastHitBoneName, struct FVector AddVelocity, float LastDmg, unsigned long bFromMercyMode );
};

UClass* ANowCorpseDynamic::pClassPointer = NULL;

// Class NowGame.NowTCPLink
// 0x0058 (0x0384 - 0x032C)
class ANowTCPLink : public ATcpLink
{
public:
	struct FString                                     TargetHost;                                       		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TargetPath;                                       		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TargetPort;                                       		// 0x0344 (0x0004) [0x0000000000000000]              
	struct FString                                     ScriptFile;                                       		// 0x0348 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     QueryData;                                        		// 0x0354 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UNowGFXHudScene*                             ReportTo;                                         		// 0x0360 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarAiNPC*                        ReportToNpc;                                      		// 0x0364 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBusy : 1;                                        		// 0x0368 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sSavedString;                                     		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __TcpReceived__Delegate;                          		// 0x0378 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47999 ];

		return pClassPointer;
	};

	void TcpReceived ( struct FString jsonData );
	bool IsCompleteJSon ( struct FString sString );
	void eventReceivedText ( struct FString Text );
	void eventClosed ( );
	void eventOpened ( );
	void eventResolveFailed ( );
	void eventResolved ( struct FIpAddr Addr );
	void SendQuery ( struct FString Script, struct FString Query );
};

UClass* ANowTCPLink::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAnimatedDoor
// 0x0004 (0x03C8 - 0x03C4)
class ANowAtlasAvatarAnimatedDoor : public ANowAtlasAvatar
{
public:
	class AStaticMeshActor*                            m_StaticMeshActor;                                		// 0x03C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48032 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarAnimatedDoor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEventAnim
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarEventAnim : public ANowAtlasAvatarEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48110 ];

		return pClassPointer;
	};

	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarEventAnim::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEventAnimVisible
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarEventAnimVisible : public ANowAtlasAvatarEventAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48124 ];

		return pClassPointer;
	};

	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
};

UClass* ANowAtlasAvatarEventAnimVisible::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEventDoor
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarEventDoor : public ANowAtlasAvatarEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48137 ];

		return pClassPointer;
	};

	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
};

UClass* ANowAtlasAvatarEventDoor::pClassPointer = NULL;

// Class NowGame.NPC_LookAt
// 0x0004 (0x02F0 - 0x02EC)
class ANPC_LookAt : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02EC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48279 ];

		return pClassPointer;
	};

};

UClass* ANPC_LookAt::pClassPointer = NULL;

// Class NowGame.NowBlockingVolume
// 0x0000 (0x032C - 0x032C)
class ANowBlockingVolume : public ABlockingVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48374 ];

		return pClassPointer;
	};

	void setVolumeCollision ( unsigned long isCollision );
};

UClass* ANowBlockingVolume::pClassPointer = NULL;

// Class NowGame.UIScene_Library
// 0x0104 (0x072C - 0x0628)
class UUIScene_Library : public UUIScene_Now_BaseScene
{
public:
	class UTexture2D*                                  Available;                                        		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  NotAvailable;                                     		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  AlreadyKnown;                                     		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           BookContenNames;                                  		// 0x0634 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIImage*                                    Availability[ 0xF ];                              		// 0x0640 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BookNames[ 0xF ];                                 		// 0x067C (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    BookPrice[ 0xF ];                                 		// 0x06B8 (0x003C) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextPage;                                         		// 0x06F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   PreviusPage;                                      		// 0x06F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Page;                                             		// 0x06FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    BookInfoPanel;                                    		// 0x0700 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BuyButton;                                        		// 0x0704 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              CancelButton;                                     		// 0x0708 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    BDesc;                                            		// 0x070C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    BName;                                            		// 0x0710 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    BAuthor;                                          		// 0x0714 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     Libarian;                                         		// 0x0718 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                currentPage;                                      		// 0x0724 (0x0004) [0x0000000000000000]              
	int                                                BookSelection;                                    		// 0x0728 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48443 ];

		return pClassPointer;
	};

	void eventSceneDeactivated ( );
	void UpdateBooklist ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnPrev ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnNext ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnBookCancel ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnBookBuy ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnBookItemClicked ( class UUIScreenObject* Caller, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Library::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcStable
// 0x0000 (0x0444 - 0x0444)
class ANowAtlasAvatarNpcStable : public ANowAtlasAvatarNpc
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48521 ];

		return pClassPointer;
	};

};

UClass* ANowAtlasAvatarNpcStable::pClassPointer = NULL;

// Class NowGame.NowStaticMeshcomponentDoor
// 0x0014 (0x0250 - 0x023C)
class UNowStaticMeshcomponentDoor : public UStaticMeshComponent
{
public:
	unsigned long                                      m_playerIsInHouse : 1;                            		// 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      m_ClientActor;                                    		// 0x0240 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_vPlayersInHouse;                                		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48695 ];

		return pClassPointer;
	};

	void TurnOnCollisionOnDoor ( );
	void TurnOffCollisionOnDoor ( );
	bool eventEncroachingOn ( class AActor* Other );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	bool isPlayerInHouse ( class AActor* Player );
	void getClientActor ( );
};

UClass* UNowStaticMeshcomponentDoor::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorKeepMap
// 0x0034 (0x034C - 0x0318)
class ANowStaticMeshActorKeepMap : public ANowStaticMeshActor
{
public:
	unsigned long                                      bGotPylons : 1;                                   		// 0x0318 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UStaticMeshComponent* >              MeshComponents;                                   		// 0x031C (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UDecalComponent* >                   DecalComponents;                                  		// 0x0328 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UStaticMesh*                                 KeepMesh;                                         		// 0x0334 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TowerMesh;                                        		// 0x0338 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MatEnemy;                                         		// 0x033C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MatFriend;                                        		// 0x0340 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MatEnemyD;                                        		// 0x0344 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MatFriendD;                                       		// 0x0348 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49194 ];

		return pClassPointer;
	};

	class ANowPlayerController* GetNowPC ( );
	void DrawPylons ( );
	void ClearPylonMeshs ( );
	void InitPylons ( );
	void UpdatePylons ( );
	void Destroyed ( );
	void CheckPlayerDist ( );
	void PostBeginPlay ( );
};

UClass* ANowStaticMeshActorKeepMap::pClassPointer = NULL;

// Class NowGame.NowFractureStaticMeshActor
// 0x0020 (0x0374 - 0x0354)
class ANowFractureStaticMeshActor : public AFracturedSMActorSpawnable
{
public:
	int                                                TierExplosionCounter;                             		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              TierExplosionTimer;                               		// 0x0358 (0x0004) [0x0000000000000000]              
	int                                                PartExplosionCounter;                             		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              PartExplosionTimer;                               		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              RemoveTimer;                                      		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              TowerHeight;                                      		// 0x0368 (0x0004) [0x0000000000000000]              
	float                                              TowerWidth;                                       		// 0x036C (0x0004) [0x0000000000000000]              
	float                                              fForce;                                           		// 0x0370 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49385 ];

		return pClassPointer;
	};

	void PartExplosion ( );
	void TierExplosion ( );
	void Tick ( float DT );
	void SetStaticMesh ( class UStaticMesh* NewStaticMesh );
	void eventPostBeginPlay ( );
};

UClass* ANowFractureStaticMeshActor::pClassPointer = NULL;

// Class NowGame.NowProjectileGeneric
// 0x0024 (0x035C - 0x0338)
class ANowProjectileGeneric : public ANowProjectile
{
public:
	TArray< struct FVector >                           TargetPos;                                        		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurTargetIndex;                                   		// 0x0344 (0x0004) [0x0000000000000000]              
	unsigned long                                      velRotation : 1;                                  		// 0x0348 (0x0004) [0x0000000000000000] [0x00000001] 
	class USoundCue*                                   NowImpactSound;                                   		// 0x034C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NowFlySound;                                      		// 0x0350 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ImpactParticle;                                   		// 0x0354 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             SoundComp;                                        		// 0x0358 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49583 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void RemoveMyComponents ( );
	void TickTargetPos ( float DeltaTime );
	void SetVelRotaion ( struct FVector Direction );
	void SetTargetPosArray ( TArray< struct FVector > OutPos );
	void SetNextTargetPos ( );
	void eventLanded ( struct FVector HitNormal, class AActor* HitActor );
	float CalcSpeedMulti ( );
	void Init ( struct FVector Direction );
	void SetImpactSoundFromString ( struct FString BaseString );
	void SetFlySoundFromString ( struct FString BaseString );
	void SetImpactParticleFromString ( struct FString BaseString );
	void eventSetStaticMeshFromString ( struct FString BaseString );
};

UClass* ANowProjectileGeneric::pClassPointer = NULL;

// Class NowGame.NowCheatManager
// 0x0000 (0x005C - 0x005C)
class UNowCheatManager : public UCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49703 ];

		return pClassPointer;
	};

};

UClass* UNowCheatManager::pClassPointer = NULL;

// Class NowGame.NowChildHudCreate
// 0x0028 (0x0068 - 0x0040)
class UNowChildHudCreate : public UNowChildHud
{
public:
	int                                                ActiveBtn;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< struct FParamBtn >                         Buttons;                                          		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fInputTimer;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              MessageTimer;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49714 ];

		return pClassPointer;
	};

	void RHoldTab ( );
	void ToggleCombatMode ( );
	void SprintOn ( );
	void StopAltFire ( );
	void StartAltFire ( );
	void StopFire ( );
	void StartFire ( );
	void UpdateMouseMove ( float newTurn, float newUp );
	void AddToActiveBtn ( int Add );
	void AddToValue ( int Add );
	bool InputTimer ( );
	void DrawParamBox ( class UCanvas* C, int Index );
	void ActionBarSlot ( int iSlot );
	void DrawChildHud ( class UCanvas* C );
	void InitChildHud ( class ANowHUD* InitParentHud );
	void DrawMessages ( class UCanvas* C );
	void AddMessage ( struct FString msg );
};

UClass* UNowChildHudCreate::pClassPointer = NULL;

// Class NowGame.NowChildHudDebug
// 0x04C8 (0x0508 - 0x0040)
class UNowChildHudDebug : public UNowChildHud
{
public:
	struct FGraphInfoStruct                            GraphInfo[ 0x96 ];                                		// 0x0040 (0x04B0) [0x0000000000000000]              
	float                                              LastKnownTS;                                      		// 0x04F0 (0x0004) [0x0000000000000000]              
	float                                              OMFGLocFix;                                       		// 0x04F4 (0x0004) [0x0000000000000000]              
	float                                              LastKnownTSAtlas;                                 		// 0x04F8 (0x0004) [0x0000000000000000]              
	float                                              AverageDT;                                        		// 0x04FC (0x0004) [0x0000000000000000]              
	float                                              BestDT;                                           		// 0x0500 (0x0004) [0x0000000000000000]              
	float                                              WorstDT;                                          		// 0x0504 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49759 ];

		return pClassPointer;
	};

	class ANowPawn* GetFollowPawn ( );
	void DrawMessages ( class UCanvas* C );
	void DrawDebugLines ( );
	void DrawTargetInfo ( class UCanvas* C );
	void DrawGraph ( class UCanvas* C );
	void ClearGraph ( );
	void DumpGraphDebug ( );
	void ReCalcAverage ( );
	void DrawChildHud ( class UCanvas* C );
};

UClass* UNowChildHudDebug::pClassPointer = NULL;

// Class NowGame.NowChildHudDebugCount
// 0x00AC (0x00EC - 0x0040)
class UNowChildHudDebugCount : public UNowChildHud
{
public:
	class UClass*                                      CountActorName;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     CountName[ 0xA ];                                 		// 0x0044 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      CountClass[ 0xA ];                                		// 0x00BC (0x0028) [0x0000000000000000]              
	float                                              NextCount;                                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowLoc : 1;                                     		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49793 ];

		return pClassPointer;
	};

	void DrawChildHud ( class UCanvas* C );
	void LogEmitterBase ( );
	void LogEmitterPool ( );
};

UClass* UNowChildHudDebugCount::pClassPointer = NULL;

// Class NowGame.NowEmitter
// 0x0000 (0x02F8 - 0x02F8)
class ANowEmitter : public AEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49805 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
};

UClass* ANowEmitter::pClassPointer = NULL;

// Class NowGame.NowChildHudDebugHouseCollision
// 0x0020 (0x0060 - 0x0040)
class UNowChildHudDebugHouseCollision : public UNowChildHud
{
public:
	TArray< struct FVector >                           vPointsInside;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           vPointsOutSide;                                   		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarPlayerHouse*                  house;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCheckThisPoint : 1;                              		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49812 ];

		return pClassPointer;
	};

	void SaveCollisionToFile ( );
	void DumpDebugHudInfo ( );
	void DrawChildHud ( class UCanvas* C );
	void FindClosePoints ( struct FVector PlayerVect, int* IndexA, int* IndexB, int* IndexC );
	bool TestInside ( struct FVector PlayerVect, unsigned long bDrawLines );
	void CheckThisPoint ( );
	void DoTestInside ( );
	void RefinePoints ( );
	void UseDebugHudB ( );
	void UseDebugHud ( );
	void InitChildHud ( class ANowHUD* InitParentHud );
};

UClass* UNowChildHudDebugHouseCollision::pClassPointer = NULL;

// Class NowGame.NowChildHudDynamicCreature
// 0x0030 (0x0098 - 0x0068)
class UNowChildHudDynamicCreature : public UNowChildHudCreate
{
public:
	class ANowAtlasAvatarAiDynamic*                    PreviewMount;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FString                                     ApperanceCode;                                    		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarAiDynamic*                    Horse;                                            		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                PreviewAnim;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	class ASpotLightMovable*                           PreviewLight;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDrawCollision : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAtGround : 1;                                    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoFancyStuff : 1;                                		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     HorseBaseLocation;                                		// 0x0088 (0x000C) [0x0000000000000000]              
	int                                                FancyInt;                                         		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49861 ];

		return pClassPointer;
	};

	void RHoldTab ( );
	void FetchDataFromHorse ( );
	void ToggleCombatMode ( );
	void SprintOn ( );
	void StopAltFire ( );
	void StartAltFire ( );
	void StopFire ( );
	void StartFire ( );
	void UpdateMouseMove ( float newTurn, float newUp );
	void AddToActiveBtn ( int Add );
	void AddToValue ( int Add );
	bool InputTimer ( );
	void DrawParamBox ( class UCanvas* C, int Index );
	void DrawCollisionCylinder ( class UCanvas* C );
	void ActionBarSlot ( int iSlot );
	void DrawChildHud ( class UCanvas* C );
	void InitChildHud ( class ANowHUD* InitParentHud );
	void DrawMessages ( class UCanvas* C );
	void AddMessage ( struct FString msg );
	void FancyShot ( );
	void DoFancyStuff ( );
};

UClass* UNowChildHudDynamicCreature::pClassPointer = NULL;

// Class NowGame.UIScene_LogWindow
// 0x0100 (0x0728 - 0x0628)
class UUIScene_LogWindow : public UUIScene_Now_BaseScene
{
public:
	int                                                maxChatLines;                                     		// 0x0628 (0x0004) [0x0000000000000000]              
	int                                                activeChatLines;                                  		// 0x062C (0x0004) [0x0000000000000000]              
	int                                                chatLineAlmostFull;                               		// 0x0630 (0x0004) [0x0000000000000000]              
	int                                                chatLineFull;                                     		// 0x0634 (0x0004) [0x0000000000000000]              
	int                                                lastChatLine;                                     		// 0x0638 (0x0004) [0x0000000000000000]              
	int                                                lastChatEntryCounter;                             		// 0x063C (0x0004) [0x0000000000000000]              
	int                                                chatEntrySelectionModifier;                       		// 0x0640 (0x0004) [0x0000000000000000]              
	int                                                CurParseCommand;                                  		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              chatLinePixalWidthLimit;                          		// 0x0648 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           chatLines;                                        		// 0x064C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           latestChatEntries;                                		// 0x0658 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                chatLineOffset;                                   		// 0x0664 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           CommandHelpLines;                                 		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Scrollback;                                       		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DefaultCommandHelp;                               		// 0x0680 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUILabel*                                    m_TextField;                                      		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_TextField1;                                     		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIScrollFrame*                              m_ScrollFrame;                                    		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_LockButton;                                     		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fLastUpdateTime;                                		// 0x069C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           m_ScrollBack;                                     		// 0x06A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bLocked : 1;                                      		// 0x06AC (0x0004) [0x0000000000000000] [0x00000001] 
	class UUIButton*                                   ToggleBackground;                                 		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UUIImage* >                          Backgrounds;                                      		// 0x06B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurState;                                         		// 0x06C0 (0x0004) [0x0000000000000000]              
	TArray< class UUILabelButton* >                    Controls;                                         		// 0x06C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUIEditBox*                                  m_InputBox;                                       		// 0x06D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              lastChatCommandTime;                              		// 0x06D4 (0x0004) [0x0000000000000000]              
	float                                              lastWhereAmITime;                                 		// 0x06D8 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_TextColor;                                      		// 0x06DC (0x0004) [0x0000000000000000]              
	struct FString                                     m_TextFont;                                       		// 0x06E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTextPropertyMap >                  m_TextPropertyMap;                                		// 0x06EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUILabelButton*                              Up;                                               		// 0x06F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Down;                                             		// 0x06FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Bot;                                              		// 0x0700 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Offset;                                           		// 0x0704 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           activelines;                                      		// 0x0708 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           formatlines;                                      		// 0x0714 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                maxchars;                                         		// 0x0720 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                maxrows;                                          		// 0x0724 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49996 ];

		return pClassPointer;
	};

	class UNowGFXHudScene* GetGFXHud ( );
	bool CheckCommandOk ( struct FString WhatCommand );
	void DoFriends ( );
	void DoResetUI ( );
	void DoPetInventory ( );
	void DoCallGuards ( );
	void DoShowStatLossCount ( );
	void DoShowMurderCount ( );
	void DoLoot ( );
	void DoResetMC ( );
	void DoCancel ( TArray< struct FString > msgParts );
	bool CheckValidTarget ( class AActor* TargetActor, class ANowPawn* MyPawn );
	struct FString CheckValidName ( struct FString NewName );
	bool IsNumber ( struct FString Number );
	void PetCommand ( TArray< struct FString > msgParts, struct FString petName );
	void DoEmote ( TArray< struct FString > msgParts );
	void DoWhoSetSurName ( TArray< struct FString > msgParts );
	void DoVersionInfoPrint ( );
	void OpenGameMenu ( );
	void DoTame ( );
	void DoSpellAction ( int SpellID );
	void DoTrade ( );
	void DoWhoMePrint ( );
	void DoWhoPrint ( );
	void DoStable ( );
	void DoClaim ( );
	void DoStuck ( );
	void DoFindUse ( );
	bool HandleAiCommand ( struct FString sCommand );
	void DoModCommand ( struct FString sCommand, struct FString msg );
	void DoYell ( struct FString msg );
	void DoReplyToWhisper ( struct FString msg );
	void DoWhisper ( struct FString sTarget, struct FString msg );
	void DoFriendCommand ( struct FString sTarget, struct FString msg );
	void DoGMChat ( struct FString sCommand, struct FString msg );
	void DoHelpCommand ( struct FString msg );
	void DoGuildCommand ( struct FString sCommand, struct FString msg );
	void DoTerritoryCommand ( struct FString sCommand, struct FString msg );
	void DoOpenPetitionListScene ( );
	void DoOpenPetitionScene ( );
	void CommandParser ( struct FString InText );
	void UpdateLastWhereAmITime ( );
	void UpdateLastChatCommandTime ( );
	void CancelTyping ( );
	void PreFillChatMsg ( struct FString preFill );
	void HandleInputText ( struct FString InText );
	bool CheckChatText ( struct FString InText );
	bool CheckOkChar ( struct FString InText );
	void TestSetFocus ( struct FString preFill );
	bool OnChatSubmitText ( class UUIEditBox* Sender, int PlayerIndex );
	bool OnChatRawInputKey ( struct FInputEventParameters* EventParms );
	bool Clicked ( class UUIScreenObject* O, int PlayerIndex );
	bool SetTextFontByType ( struct FString InTextType );
	struct FString GetTextFontCode ( );
	bool SetTextColorByType ( struct FString InTextType );
	struct FString GetTextColorCode ( );
	void SendEvent ( struct FName InEvent, struct FString InType, struct FString InMsg );
	void ClearParseCommands ( );
	void PrevParseCommand ( );
	void NextParseCommand ( );
	void InsertParseCommand ( struct FString NewCommand );
	void DrawParseCommands ( int WhatCommand );
	void ParseInput ( );
	void CalcManualChat ( );
	void CalculateFormatLines ( );
	void CalcChatSize ( );
	void OutputTextLine ( struct FString InText, struct FString InTextType );
	void formatStringIntoChat ( struct FString Text );
	void incrementBottomChatLine ( );
	void LogClientRegionCalculated ( );
	bool GoUp ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool SetBot ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool GoDown ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnToggleBackground ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_LogWindow::pClassPointer = NULL;

// Class NowGame.NowChildHudMath
// 0x002C (0x006C - 0x0040)
class UNowChildHudMath : public UNowChildHud
{
public:
	float                                              CircleASize;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              CircleBSize;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FVector                                     CircleAPos;                                       		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FVector                                     CircleBPos;                                       		// 0x0054 (0x000C) [0x0000000000000000]              
	int                                                TotalTests;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Hits;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                NrTests;                                          		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50118 ];

		return pClassPointer;
	};

	void DrawCircle ( struct FVector pos, float area, int R, int G, int B, class UCanvas* C );
	float CalcArea ( class UCanvas* C );
	void MonteCarloCalc ( );
	void ResetMonteCarloCalc ( int NrTest );
	void DrawChildHud ( class UCanvas* C );
};

UClass* UNowChildHudMath::pClassPointer = NULL;

// Class NowGame.NowChildHudProjectile
// 0x001C (0x0084 - 0x0068)
class UNowChildHudProjectile : public UNowChildHudCreate
{
public:
	float                                              fAddAmount;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FVector                                     SpawnPoint;                                       		// 0x006C (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetPoint;                                      		// 0x0078 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50158 ];

		return pClassPointer;
	};

	void RHoldTab ( );
	void ToggleCombatMode ( );
	void SprintOn ( );
	void StopAltFire ( );
	void StartAltFire ( );
	void StopFire ( );
	void StartFire ( );
	void UpdateMouseMove ( float newTurn, float newUp );
	void AddToActiveBtn ( int Add );
	void AddToValue ( int Add );
	bool InputTimer ( );
	void DrawParamBox ( class UCanvas* C, int Index );
	void ActionBarSlot ( int iSlot );
	void DrawChildHud ( class UCanvas* C );
	void SpawnProjectile ( );
	void InitChildHud ( class ANowHUD* InitParentHud );
};

UClass* UNowChildHudProjectile::pClassPointer = NULL;

// Class NowGame.NowProjectileBase
// 0x002C (0x0354 - 0x0328)
class ANowProjectileBase : public AProjectile
{
public:
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x0328 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      HomingTarget;                                     		// 0x032C (0x0004) [0x0000000000000000]              
	struct FVector                                     HomingTargetLoc;                                  		// 0x0330 (0x000C) [0x0000000000000000]              
	float                                              TimeUntilImpact;                                  		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              TimeUntilDestroy;                                 		// 0x0340 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilHoming;                                  		// 0x0344 (0x0004) [0x0000000000000000]              
	float                                              HomingRate;                                       		// 0x0348 (0x0004) [0x0000000000000000]              
	float                                              HomingRateTimer;                                  		// 0x034C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDidImpact : 1;                                   		// 0x0350 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50166 ];

		return pClassPointer;
	};

	void DidImpact ( );
	void TickMainParticles ( float DT );
	void TickInitParticles ( float DT );
	void TickTrails ( float DT );
	void TickRot ( float DT );
	void TickVel ( float DT );
	float GetDist ( );
	void Tick ( float DT );
	void InitProjectile ( float FlySpeed );
};

UClass* ANowProjectileBase::pClassPointer = NULL;

// Class NowGame.NowClientDoor
// 0x0004 (0x02F8 - 0x02F4)
class ANowClientDoor : public AStaticMeshActor
{
public:
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x02F4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50199 ];

		return pClassPointer;
	};

	void closeDoor ( );
	void openDoor ( );
	void PostBeginPlay ( );
};

UClass* ANowClientDoor::pClassPointer = NULL;

// Class NowGame.NowDamageType
// 0x0000 (0x0064 - 0x0064)
class UNowDamageType : public UDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50352 ];

		return pClassPointer;
	};

};

UClass* UNowDamageType::pClassPointer = NULL;

// Class NowGame.NowEffectMeatChunk
// 0x0020 (0x030C - 0x02EC)
class ANowEffectMeatChunk : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystemComponent;                          		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x02F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             Trail;                                            		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              Speed;                                            		// 0x02F8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ImpactSound;                                      		// 0x02FC (0x0004) [0x0000000000000000]              
	class UCylinderComponent*                          CylinderComponent;                                		// 0x0300 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TossZ;                                            		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                Bounces;                                          		// 0x0308 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50375 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void RandSpin ( float spinRate );
	void Init ( struct FVector Direction );
};

UClass* ANowEffectMeatChunk::pClassPointer = NULL;

// Class NowGame.NowGameInfo
// 0x0000 (0x0484 - 0x0484)
class ANowGameInfo : public AAtlasGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50536 ];

		return pClassPointer;
	};

};

UClass* ANowGameInfo::pClassPointer = NULL;

// Class NowGame.NowGFXSceneHelp
// 0x0000 (0x019C - 0x019C)
class UNowGFXSceneHelp : public UNowGFXScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50621 ];

		return pClassPointer;
	};

};

UClass* UNowGFXSceneHelp::pClassPointer = NULL;

// Class NowGame.NowGFXScenePylon
// 0x0018 (0x01B4 - 0x019C)
class UNowGFXScenePylon : public UNowGFXScene
{
public:
	class ANowAtlasAvatarPylon*                        PylonTgt;                                         		// 0x019C (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerKeep*                   KeepTgt;                                          		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                AoeTgt;                                           		// 0x01A4 (0x0004) [0x0000000000000000]              
	int                                                DefTgt;                                           		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                AttTgt;                                           		// 0x01AC (0x0004) [0x0000000000000000]              
	int                                                ArrayIndex;                                       		// 0x01B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50622 ];

		return pClassPointer;
	};

	struct FString CheckValidName ( struct FString NewName );
	void gfxTick ( float dTime );
	void toggleSetters ( unsigned long bVisible );
	void setClusterStats ( int structures, int area, int overlapArea, int totalArea );
	void setMaxTarget ( int targetRadius, int targetDefense, int targetOffense );
	void setProgress ( int Pct );
	void setTierHP ( int tier1, int tier2, int tier3, int tier1Max, int tier2Max, int tier3Max );
	void setPylonStats ( unsigned long bCanModifyTargets, int Radius, int radiusTarget, int defense, int defenseTarget, int offense, int offenseTarget, int tierCost, int npcCost, int totalCost, int clusterIncome, int clusterCost, int totalCP );
	void setStats ( struct FString DisplayName, unsigned long bNameEditable, int Tier, int currentHP, int maxHP, unsigned long linked );
	void addPylon ( int XPos, int YPos, int zPos, int Radius, int guildID, unsigned long bIsActive );
	void GFXClose ( );
	void setTargets ( int radiusTarget, int defenseTarget, int offenseTarget );
	void SetName ( struct FString guildName );
	void ShowMouseToggle ( );
	void AddExtendedPylonInfo ( int I );
	void DoKeepInit ( );
	void DoPylonInit ( );
	void Init ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXScenePylon::pClassPointer = NULL;

// Class NowGame.UIScene_WeatherAwareness
// 0x0008 (0x0630 - 0x0628)
class UUIScene_WeatherAwareness : public UUIScene_Now_BaseScene
{
public:
	class ANowPlayerController*                        m_PlayerController;                               		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54290 ];

		return pClassPointer;
	};

	void InitGatherDataLoop ( );
	void StopGatherDataLoop ( );
	void UpdateWeatherAwareness ( int windDir, float windMagnitude, int rainMagnitude, struct FRotator windRotation, struct FRotator playerRotation );
	void PlayerRotatedGUIUpdate ( struct FRotator playersNewRotation );
	void PostInitUpdate ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_WeatherAwareness::pClassPointer = NULL;

// Class NowGame.UIScene_GameMessages
// 0x0008 (0x0630 - 0x0628)
class UUIScene_GameMessages : public UUIScene_Now_BaseScene
{
public:
	class UUIButton*                                   m_AcceptButton;                                   		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      timerRanOut : 1;                                  		// 0x062C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54336 ];

		return pClassPointer;
	};

	void CloseSceneTimer ( );
	bool OnClose ( class UUIScreenObject* O, int PlayerIndex );
	bool AcceptResurrect ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_GameMessages::pClassPointer = NULL;

// Class NowGame.NowLoginDecorationActor
// 0x002C (0x0318 - 0x02EC)
class ANowLoginDecorationActor : public AActor
{
public:
	class UPointLightComponent*                        FlagLight;                                        		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FColor                                      FlagColor[ 0xA ];                                 		// 0x02F0 (0x0028) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54532 ];

		return pClassPointer;
	};

	void DeSelect ( );
	void Select ( );
	void SetFlag ( int iFlag );
};

UClass* ANowLoginDecorationActor::pClassPointer = NULL;

// Class NowGame.NowMusicBank
// 0x0010 (0x02FC - 0x02EC)
class ANowMusicBank : public AActor
{
public:
	TArray< class USoundCue* >                         BankMusicTracks;                                  		// 0x02EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USpriteComponent*                            MySprite;                                         		// 0x02F8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54605 ];

		return pClassPointer;
	};

	void FindMusicManager ( );
	void PostBeginPlay ( );
};

UClass* ANowMusicBank::pClassPointer = NULL;

// Class NowGame.NowSafeSpot
// 0x0004 (0x02F0 - 0x02EC)
class ANowSafeSpot : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02EC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55148 ];

		return pClassPointer;
	};

};

UClass* ANowSafeSpot::pClassPointer = NULL;

// Class NowGame.NowPhysManager
// 0x001C (0x0058 - 0x003C)
class UNowPhysManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_vPhysActors;                                    		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortDel__Delegate;                              		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55415 ];

		return pClassPointer;
	};

	void AddToManager ( class AActor* WhatActor );
	int SortDel ( class AActor* A, class AActor* B );
	void TickManager ( );
	void InitManager ( );
};

UClass* UNowPhysManager::pClassPointer = NULL;

// Class NowGame.PriestBeacon
// 0x000C (0x02F8 - 0x02EC)
class APriestBeacon : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                              		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            MySprite;                                         		// 0x02F0 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bDontResRed : 1;                                  		// 0x02F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55510 ];

		return pClassPointer;
	};

	void ShowBeacon ( unsigned long DoShow );
};

UClass* APriestBeacon::pClassPointer = NULL;

// Class NowGame.NowTeleportSpot
// 0x0004 (0x02F0 - 0x02EC)
class ANowTeleportSpot : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02EC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57515 ];

		return pClassPointer;
	};

};

UClass* ANowTeleportSpot::pClassPointer = NULL;

// Class NowGame.NowTempleSpot
// 0x0010 (0x02FC - 0x02EC)
class ANowTempleSpot : public AActor
{
public:
	TArray< class ANowTempleSpotChild* >               TempleChildren;                                   		// 0x02EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USpriteComponent*                            MySprite;                                         		// 0x02F8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57521 ];

		return pClassPointer;
	};

	struct FVector ReturnPosition ( );
};

UClass* ANowTempleSpot::pClassPointer = NULL;

// Class NowGame.NowTempleSpotChild
// 0x0004 (0x02F0 - 0x02EC)
class ANowTempleSpotChild : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02EC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57524 ];

		return pClassPointer;
	};

};

UClass* ANowTempleSpotChild::pClassPointer = NULL;

// Class NowGame.NowUFO
// 0x0004 (0x032C - 0x0328)
class ANowUFO : public AProjectile
{
public:
	class UParticleSystem*                             Trail;                                            		// 0x0328 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57531 ];

		return pClassPointer;
	};

	void Timer ( );
	void eventDestroyed ( );
	void setUFOLocation ( struct FVector UFOLoc );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void SetTossVelocity ( struct FVector TossVelocity );
	void SpawnTrailFX ( );
	void SetInitialState ( );
};

UClass* ANowUFO::pClassPointer = NULL;

// Class NowGame.NowUnCoolSpotVolume
// 0x000C (0x0334 - 0x0328)
class ANowUnCoolSpotVolume : public AVolume
{
public:
	TArray< class ANowSafeSpot* >                      ForcedSafeSpots;                                  		// 0x0328 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57547 ];

		return pClassPointer;
	};

	void eventMoveToSafeSpot ( class AActor* WhatActor );
	void eventPawnEnteredVolume ( class APawn* Other );
	void eventActorEnteredVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowUnCoolSpotVolume::pClassPointer = NULL;

// Class NowGame.NowVolumeDamage
// 0x0028 (0x0350 - 0x0328)
class ANowVolumeDamage : public AVolume
{
public:
	int                                                AmountOfDamage;                                   		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Timer;                                            		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DamageReason;                                     		// 0x0330 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   DamageSound;                                      		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTimer;                                        		// 0x0340 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWillCauseDeath : 1;                              		// 0x0344 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTeleportAfterTriggerd : 1;                       		// 0x0344 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class ANowSafeSpot*                                SpotToMoveToAfterDeath;                           		// 0x0348 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANowPawn*                                    CachedPawn;                                       		// 0x034C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57568 ];

		return pClassPointer;
	};

	void DealDamage ( class ANowPlayerController* DamageTaker );
	void MovePlayer ( );
	void eventActorEnteredVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowVolumeDamage::pClassPointer = NULL;

// Class NowGame.NowVolumeLadder
// 0x0000 (0x039C - 0x039C)
class ANowVolumeLadder : public ALadderVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57591 ];

		return pClassPointer;
	};

};

UClass* ANowVolumeLadder::pClassPointer = NULL;

// Class NowGame.NowVolumePostProcess
// 0x0034 (0x035C - 0x0328)
class ANowVolumePostProcess : public AVolume
{
public:
	struct FVector                                     EffectCenter;                                     		// 0x0328 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectMaxRange;                                   		// 0x0334 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_HighLights;                                 		// 0x0338 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_MidTones;                                   		// 0x0344 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_Shadows;                                    		// 0x0350 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57594 ];

		return pClassPointer;
	};

	void eventActorLeavingVolume ( class AActor* Other );
	void eventActorEnteredVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowVolumePostProcess::pClassPointer = NULL;

// Class NowGame.NowVolumeUnderground
// 0x0000 (0x0368 - 0x0368)
class ANowVolumeUnderground : public APhysicsVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57638 ];

		return pClassPointer;
	};

	void eventPawnLeavingVolume ( class APawn* P );
	void eventPawnEnteredVolume ( class APawn* P );
};

UClass* ANowVolumeUnderground::pClassPointer = NULL;

// Class NowGame.PathNodePoop
// 0x0000 (0x02EC - 0x02EC)
class APathNodePoop : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58441 ];

		return pClassPointer;
	};

	void LogMe ( int MyNumber );
	void MoveToGround ( struct FName WhatMeshName );
};

UClass* APathNodePoop::pClassPointer = NULL;

// Class NowGame.PosHelper
// 0x0004 (0x02F0 - 0x02EC)
class APosHelper : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                              		// 0x02EC (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58454 ];

		return pClassPointer;
	};

};

UClass* APosHelper::pClassPointer = NULL;

// Class NowGame.UIAction_ChangeMaterialScalar
// 0x0014 (0x0100 - 0x00EC)
class UUIAction_ChangeMaterialScalar : public UUIAction
{
public:
	struct FString                                     Parameter;                                        		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ScalarValue;                                      		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Steps;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58544 ];

		return pClassPointer;
	};

};

UClass* UUIAction_ChangeMaterialScalar::pClassPointer = NULL;

// Class NowGame.UIAction_ChangeMaterialTexture
// 0x001C (0x0108 - 0x00EC)
class UUIAction_ChangeMaterialTexture : public UUIAction
{
public:
	int                                                Index;                                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Texture;                                          		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Parameter;                                        		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58549 ];

		return pClassPointer;
	};

};

UClass* UUIAction_ChangeMaterialTexture::pClassPointer = NULL;

// Class NowGame.UIAction_ChangeMesh
// 0x0030 (0x011C - 0x00EC)
class UUIAction_ChangeMesh : public UUIAction
{
public:
	struct FString                                     SkeleMesh;                                        		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AnimSet;                                          		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AnimTree;                                         		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PhysicsAsset;                                     		// 0x0110 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58554 ];

		return pClassPointer;
	};

};

UClass* UUIAction_ChangeMesh::pClassPointer = NULL;

// Class NowGame.UIAction_ChangeValue
// 0x0034 (0x0120 - 0x00EC)
class UUIAction_ChangeValue : public UUIAction
{
public:
	unsigned long                                      Invert : 1;                                       		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     Bone;                                             		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Yaw;                                              		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Pitch;                                            		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Roll;                                             		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              X;                                                		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Scale;                                            		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Min;                                              		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58560 ];

		return pClassPointer;
	};

};

UClass* UUIAction_ChangeValue::pClassPointer = NULL;

// Class NowGame.UIAction_DoRotate
// 0x0000 (0x00EC - 0x00EC)
class UUIAction_DoRotate : public UUIAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58587 ];

		return pClassPointer;
	};

};

UClass* UUIAction_DoRotate::pClassPointer = NULL;

// Class NowGame.UIAction_InitRotate
// 0x0000 (0x00EC - 0x00EC)
class UUIAction_InitRotate : public UUIAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58593 ];

		return pClassPointer;
	};

};

UClass* UUIAction_InitRotate::pClassPointer = NULL;

// Class NowGame.UIScene_ArenaManager
// 0x0000 (0x0628 - 0x0628)
class UUIScene_ArenaManager : public UUIScene_Now_BaseScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58876 ];

		return pClassPointer;
	};

	bool SendTellCmd ( struct FString Command );
	void InitializeButtons ( );
	void PostUpdateInitialize ( );
	void eventInitScene ( );
};

UClass* UUIScene_ArenaManager::pClassPointer = NULL;

// Class NowGame.UIScene_ArmorCreationNew
// 0x02E8 (0x0920 - 0x0638)
class UUIScene_ArmorCreationNew : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextArmorButton;                                  		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackArmorButton;                                  		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextPieceButton;                                  		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackPieceButton;                                  		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ArmorLabel;                                       		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PieceLabel;                                       		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUISlider*                                   VisSlider;                                        		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUISlider*                                   nVisSlider;                                       		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Vis;                                              		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        nVis;                                             		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        VisButton;                                        		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        nVisButton;                                       		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     VisResource;                                      		// 0x0678 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     nVisResource;                                     		// 0x0684 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                VisResourceFlags;                                 		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                nVisResourceFlags;                                		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Armor;                                            		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Piece;                                            		// 0x069C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FAC_Armor                                   Armors[ 0x8 ];                                    		// 0x06A0 (0x01E0) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FAC_ArmorPiece                              Pieces[ 0xA ];                                    		// 0x0880 (0x00A0) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58992 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetupSliders ( );
	int GetNextPiece ( unsigned long bBack );
	int GetNextArmor ( unsigned long bBack );
	void SetDoneVisibility ( );
	void SetMaterial ( class UUINow_ContentButton* Target, int CheckFlag, unsigned long Visible );
	bool nVisDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool VisDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool nVisClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool VisClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackPieceClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextPieceClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackArmorClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextArmorClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_ArmorCreationNew::pClassPointer = NULL;

// Class NowGame.UIScene_Attributes
// 0x007C (0x06A4 - 0x0628)
class UUIScene_Attributes : public UUIScene_Now_BaseScene
{
public:
	class UNowEntryDatastore*                          EntryDS;                                          		// 0x0628 (0x0004) [0x0000000000000000]              
	class ANowSkeletalMeshActor*                       MeshActor;                                        		// 0x062C (0x0004) [0x0000000000000000]              
	class AActor*                                      CreateCam;                                        		// 0x0630 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRotate : 1;                                      		// 0x0634 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RotationValue;                                    		// 0x0638 (0x0004) [0x0000000000000000]              
	int                                                Zoom;                                             		// 0x063C (0x0004) [0x0000000000000000]              
	int                                                RotOffset;                                        		// 0x0640 (0x0004) [0x0000000000000000]              
	struct FVector                                     campos;                                           		// 0x0644 (0x000C) [0x0000000000000000]              
	struct FVector                                     meshpos;                                          		// 0x0650 (0x000C) [0x0000000000000000]              
	struct FRotator                                    orgRot;                                           		// 0x065C (0x000C) [0x0000000000000000]              
	struct FRotator                                    pressedRot;                                       		// 0x0668 (0x000C) [0x0000000000000000]              
	class UUILabelButton*                              AttributeAdd[ 0x6 ];                              		// 0x0674 (0x0018) [0x0000000000000000]              
	class UUILabelButton*                              AttributeSub[ 0x6 ];                              		// 0x068C (0x0018) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59107 ];

		return pClassPointer;
	};

	bool OnRightClickRemove ( class UUIObject* O, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnRightClickAdd ( class UUIObject* O, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool StatRemove ( class UUIScreenObject* O, int PlayerIndex );
	bool StatAdd ( class UUIScreenObject* O, int PlayerIndex );
	bool ProcessInputAxis ( struct FInputEventParameters* EventParms );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Attributes::pClassPointer = NULL;

// Class NowGame.UIScene_Bank
// 0x0190 (0x07B8 - 0x0628)
class UUIScene_Bank : public UUIScene_Now_BaseScene
{
public:
	struct FBankItemData                               ItemList[ 0x32 ];                                 		// 0x0628 (0x0190) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59171 ];

		return pClassPointer;
	};

	void PostInitUpdate ( );
	bool OnItemOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnItemDragBegin ( class UUIScreenObject* Source );
	bool OnItemClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void UpdatePage ( );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void FadeIn ( unsigned long bResetOpacity );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventRemoveDistanceClose ( );
	bool CloseClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Bank::pClassPointer = NULL;

// Class NowGame.UIScene_BowCreation
// 0x0228 (0x0860 - 0x0638)
class UUIScene_BowCreation : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextButton;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextPageButton;                                   		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackPageButton;                                   		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NameLabel;                                        		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PageLabel;                                        		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ValueNextButton;                                  		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ValueBackButton;                                  		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ValueLabel;                                       		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ValuePageLabel;                                   		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    ValueBG;                                          		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialNames[ 0x10 ];                            		// 0x0674 (0x00C0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MaterialSendNames[ 0x10 ];                        		// 0x0734 (0x00C0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     BowTypes[ 0x3 ];                                  		// 0x07F4 (0x0024) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     BowShapes[ 0x3 ];                                 		// 0x0818 (0x0024) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                BowBackResource;                                  		// 0x083C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BowBellyResource;                                 		// 0x0840 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BowBackResValue;                                  		// 0x0844 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BowBackValueMax;                                  		// 0x0848 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BowBackValueMin;                                  		// 0x084C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bComposite : 1;                                   		// 0x0850 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                BowType;                                          		// 0x0854 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BowShape;                                         		// 0x0858 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Page;                                             		// 0x085C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59284 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackValueClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextValueClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_BowCreation::pClassPointer = NULL;

// Class NowGame.UIScene_BowCreationNew
// 0x0190 (0x07C8 - 0x0638)
class UUIScene_BowCreationNew : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextCompButton;                                   		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackCompButton;                                   		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextShapeButton;                                  		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackShapeButton;                                  		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextTypeButton;                                   		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackTypeButton;                                   		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    CompLabel;                                        		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ShapeLabel;                                       		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    TypeLabel;                                        		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUISlider*                                   MaterialSlider;                                   		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Mat1;                                             		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Mat2;                                             		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        BACK;                                             		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Belly;                                            		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        BackButton;                                       		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        BellyButton;                                      		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BackResource;                                     		// 0x0688 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     BellyResource;                                    		// 0x0694 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Comp;                                             		// 0x06A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Shape;                                            		// 0x06A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Type;                                             		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FBC_Comp                                    Comps[ 0x2 ];                                     		// 0x06AC (0x0038) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FBC_Shape                                   Shapes[ 0x3 ];                                    		// 0x06E4 (0x0078) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FBC_Type                                    Types[ 0x3 ];                                     		// 0x075C (0x006C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59356 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetupSliders ( );
	void SetDoneVisibility ( );
	void SetMaterial ( class UUINow_ContentButton* Target, unsigned long bBack );
	bool BellyDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool BackDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool BellyClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void TypeClick ( unsigned long bBack );
	bool BackTypeClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextTypeClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void ShapeClick ( unsigned long bBack );
	bool BackShapeClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextShapeClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetMaterialVisibility ( );
	void CompClick ( unsigned long bBack );
	bool BackCompClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextCompClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_BowCreationNew::pClassPointer = NULL;

// Class NowGame.UIScene_BuySiegeWeapon
// 0x001C (0x0644 - 0x0628)
class UUIScene_BuySiegeWeapon : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0630 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   CloseButton;                                      		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnHail;                                          		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnCatapult;                                      		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59487 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	bool btnHailClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool btnCatapultClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_BuySiegeWeapon::pClassPointer = NULL;

// Class NowGame.UIScene_CharacterSheet
// 0x017C (0x07A4 - 0x0628)
class UUIScene_CharacterSheet : public UUIScene_Now_BaseScene
{
public:
	class UTexture2D*                                  m_LockStateUp;                                    		// 0x0628 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_LockStateLocked;                                		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_LockStateDown;                                  		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FEquipItemData                              m_EquipSlot[ 0x14 ];                              		// 0x0634 (0x00A0) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSlots;                                       		// 0x06D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTab                                        m_BaseTabs[ 0x5 ];                                		// 0x06D8 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	struct FTab                                        m_ProfileTabs[ 0x4 ];                             		// 0x0700 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	struct FTab                                        m_EquipmentTabs[ 0x3 ];                           		// 0x0720 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_CharacterLabel;                                 		// 0x0738 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_ActiveBaseTab;                                  		// 0x073C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              m_ArmorChange;                                    		// 0x0740 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              m_SuicideButton;                                  		// 0x0744 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              m_ShrineButton;                                   		// 0x0748 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              m_MountButton;                                    		// 0x074C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      strlock;                                          		// 0x0750 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      conlock;                                          		// 0x0754 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      psylock;                                          		// 0x0758 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      intlock;                                          		// 0x075C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      dexlock;                                          		// 0x0760 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      sizelock;                                         		// 0x0764 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_SkeletalMeshWidget*                   SkelWidget;                                       		// 0x0768 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   LongtermButton;                                   		// 0x076C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      LongtermStick : 1;                                		// 0x0770 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UUILabel*                                    StrengthNum;                                      		// 0x0774 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    DexterityNum;                                     		// 0x0778 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    IntelligenceNum;                                  		// 0x077C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PsycheNum;                                        		// 0x0780 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ConstitutionNum;                                  		// 0x0784 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    SizeNum;                                          		// 0x0788 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    StrengthMod;                                      		// 0x078C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    DexterityMod;                                     		// 0x0790 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    IntelligenceMod;                                  		// 0x0794 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PsycheMod;                                        		// 0x0798 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ConstitutionMod;                                  		// 0x079C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    SizeMod;                                          		// 0x07A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59520 ];

		return pClassPointer;
	};

	void LongtermHoverChange ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState );
	void SetupLockState ( class UUIAtlas_ContentButton* Button, int lockState );
	void PostInitUpdate ( );
	bool TabClick ( class UUIScreenObject* O, int PlayerIndex );
	bool MountClick ( class UUIScreenObject* O, int PlayerIndex );
	bool SuicideClick ( class UUIScreenObject* O, int PlayerIndex );
	void UpdatePage ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool OnSpecial ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnEquipOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnEquipDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnEquipDragBegin ( class UUIScreenObject* Source );
	bool OnEquipClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnAttributeState ( class UUIScreenObject* EventObject, int PlayerIndex );
	void EquipmentChanged ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void FadeIn ( unsigned long bResetOpacity );
	void UpdateDoll ( );
	void eventInitScene ( );
	void eventSetVisibility ( unsigned long bIsVisible );
};

UClass* UUIScene_CharacterSheet::pClassPointer = NULL;

// Class NowGame.UIScene_CladeSelect
// 0x0040 (0x0668 - 0x0628)
class UUIScene_CladeSelect : public UUIScene_Now_BaseScene
{
public:
	class UUIButton*                                   Choise[ 0x5 ];                                    		// 0x0628 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Lore[ 0x5 ];                                      		// 0x063C (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    Info[ 0x5 ];                                      		// 0x0650 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLoreInProgress : 1;                              		// 0x0664 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59664 ];

		return pClassPointer;
	};

	bool OnInfoSelect ( class UUIScreenObject* O, int PlayerIndex );
	bool OnCladeSelect ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_CladeSelect::pClassPointer = NULL;

// Class NowGame.UIScene_ConnectionLost
// 0x0008 (0x0630 - 0x0628)
class UUIScene_ConnectionLost : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              btnOk;                                            		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblMessage;                                       		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59687 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool btnOkClicked ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_ConnectionLost::pClassPointer = NULL;

// Class NowGame.UIScene_CreatePetition
// 0x003C (0x0664 - 0x0628)
class UUIScene_CreatePetition : public UUIScene_Now_BaseScene
{
public:
	class UUILabel*                                    feedbackLabel;                                    		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              CreateButton;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  CategoryEditbox;                                  		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  DescriptionEditbox;                               		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 gameMechanicsChk;                                 		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 technicalChk;                                     		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 npcChk;                                           		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 stuckChk;                                         		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 harassmentChk;                                    		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 exploitChk;                                       		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 craftingChk;                                      		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 otherChk;                                         		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     chosenCategory;                                   		// 0x0658 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59780 ];

		return pClassPointer;
	};

	bool disableAllOtherCheckboxes ( class UUIScreenObject* O, int PlayerIndex );
	bool CreatePetition ( class UUIScreenObject* O, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_CreatePetition::pClassPointer = NULL;

// Class NowGame.UIScene_Family
// 0x0014 (0x063C - 0x0628)
class UUIScene_Family : public UUIScene_Now_BaseScene
{
public:
	class UNowEntryDatastore*                          EntryDS;                                          		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUIToggleButton*                             Family[ 0x4 ];                                    		// 0x062C (0x0010) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59919 ];

		return pClassPointer;
	};

	bool Select ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Family::pClassPointer = NULL;

// Class NowGame.UIScene_Features
// 0x0068 (0x0690 - 0x0628)
class UUIScene_Features : public UUIScene_Now_BaseScene
{
public:
	class UNowEntryDatastore*                          EntryDS;                                          		// 0x0628 (0x0004) [0x0000000000000000]              
	class ANowSkeletalMeshActor*                       MeshActor;                                        		// 0x062C (0x0004) [0x0000000000000000]              
	class AActor*                                      CreateCam;                                        		// 0x0630 (0x0004) [0x0000000000000000]              
	class AActor*                                      RotCam;                                           		// 0x0634 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRotate : 1;                                      		// 0x0638 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RotationValue;                                    		// 0x063C (0x0004) [0x0000000000000000]              
	int                                                Zoom;                                             		// 0x0640 (0x0004) [0x0000000000000000]              
	int                                                RotOffset;                                        		// 0x0644 (0x0004) [0x0000000000000000]              
	struct FVector                                     campos;                                           		// 0x0648 (0x000C) [0x0000000000000000]              
	struct FVector                                     meshpos;                                          		// 0x0654 (0x000C) [0x0000000000000000]              
	struct FRotator                                    orgRot;                                           		// 0x0660 (0x000C) [0x0000000000000000]              
	struct FRotator                                    pressedRot;                                       		// 0x066C (0x000C) [0x0000000000000000]              
	class UUILabelButton*                              FaceAdd;                                          		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              TattooAdd;                                        		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              FacialAdd;                                        		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              StyleAdd;                                         		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ColorAdd;                                         		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUISlider*                                   Skintone;                                         		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59937 ];

		return pClassPointer;
	};

	bool OnStyle ( class UUIScreenObject* O, int PlayerIndex );
	bool OnColor ( class UUIScreenObject* O, int PlayerIndex );
	bool OnFacial ( class UUIScreenObject* O, int PlayerIndex );
	bool OnTattoo ( class UUIScreenObject* O, int PlayerIndex );
	bool OnFace ( class UUIScreenObject* O, int PlayerIndex );
	void OnSkintone ( class UUIObject* Sender, int PlayerIndex );
	void SliderValueChanged ( class UUIObject* Sender, int PlayerIndex );
	bool ProcessInputAxis ( struct FInputEventParameters* EventParms );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	void eventSceneDeactivated ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Features::pClassPointer = NULL;

// Class NowGame.UIScene_GMHouseMain
// 0x006C (0x0694 - 0x0628)
class UUIScene_GMHouseMain : public UUIScene_Now_BaseScene
{
public:
	class UUILabel*                                    lblhouseTarget;                                   		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblOwner;                                         		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblGuild;                                         		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblTier;                                          		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblModules;                                       		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblHitpoints;                                     		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0640 (0x0004) [0x0000000000000000]              
	class UUIEditBox*                                  editOwner;                                        		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editSetHP;                                        		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editGoToHouseOwner;                               		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editGuildName;                                    		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editRemovePlayerFromHouse;                        		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editTier;                                         		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editModule;                                       		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnNewOwner;                                      		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnFinishConstruction;                            		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnDestroyHouse;                                  		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnGoToOwner;                                     		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnGuildName;                                     		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnSetHp;                                         		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnGuildStone;                                    		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnRemovePlayerFromHouse;                         		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnTier;                                          		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnModule;                                        		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnInventory;                                     		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnKey;                                           		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnVendor;                                        		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60152 ];

		return pClassPointer;
	};

	void PostInitUpdate ( );
	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool btnClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void setHouseLabels ( );
	void eventInitScene ( );
};

UClass* UUIScene_GMHouseMain::pClassPointer = NULL;

// Class NowGame.UIScene_GuildMembers
// 0x0128 (0x0750 - 0x0628)
class UUIScene_GuildMembers : public UUIScene_Now_BaseScene
{
public:
	struct FRecord                                     InviteRecords[ 0x5 ];                             		// 0x0628 (0x0064) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FRecord                                     MemberRecords[ 0x8 ];                             		// 0x068C (0x00A0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUIEditBox*                                  memberEditBox;                                    		// 0x072C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnDown;                                          		// 0x0730 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnUp;                                            		// 0x0734 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   PromoteButton;                                    		// 0x0738 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   DemoteButton;                                     		// 0x073C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           Members;                                          		// 0x0740 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                MemberIndex;                                      		// 0x074C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60436 ];

		return pClassPointer;
	};

	bool OnChatRawInputKey ( struct FInputEventParameters* EventParms );
	bool KickAvatars ( class UUIScreenObject* O, int PlayerIndex );
	bool InviteAvatars ( class UUIScreenObject* O, int PlayerIndex );
	void GuildHasBeenUpdated ( );
	void eventSceneDeactivated ( );
	void setStunn ( float Time );
	void PostUpdateInitialize ( );
	bool downBtnPushed ( class UUIScreenObject* O, int PlayerIndex );
	bool upBtnPushed ( class UUIScreenObject* O, int PlayerIndex );
	bool Demote ( class UUIScreenObject* O, int PlayerIndex );
	bool Promote ( class UUIScreenObject* O, int PlayerIndex );
	bool disableAllOtherCheckboxes ( class UUIScreenObject* O, int PlayerIndex );
	void eventInitScene ( );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
};

UClass* UUIScene_GuildMembers::pClassPointer = NULL;

// Class NowGame.UIScene_GuildOptions
// 0x0004 (0x062C - 0x0628)
class UUIScene_GuildOptions : public UUIScene_Now_BaseScene
{
public:
	class UUIEditBox*                                  ShortNameBox;                                     		// 0x0628 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60514 ];

		return pClassPointer;
	};

	struct FString GetShortName ( );
	bool TestShortName ( );
	bool OnAcronymConfirm ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnOptionConfirm ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_GuildOptions::pClassPointer = NULL;

// Class NowGame.UIScene_GuildStoneWindow
// 0x0000 (0x05C0 - 0x05C0)
class UUIScene_GuildStoneWindow : public UUIScene_Atlas_BaseScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60531 ];

		return pClassPointer;
	};

};

UClass* UUIScene_GuildStoneWindow::pClassPointer = NULL;

// Class NowGame.UIScene_HackFlagList
// 0x0168 (0x0790 - 0x0628)
class UUIScene_HackFlagList : public UUIScene_Now_BaseScene
{
public:
	class UUILabel*                                    DescriptionBox;                                   		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ClaimButton;                                      		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              CloseHackFlagButton;                              		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextPageButton;                                   		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   LastPageButton;                                   		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              sourceButtons[ 0x10 ];                            		// 0x063C (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              categoryButtons[ 0x10 ];                          		// 0x067C (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              claimedByButtons[ 0x10 ];                         		// 0x06BC (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              timeStampButtons[ 0x10 ];                         		// 0x06FC (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    StatusImages[ 0x10 ];                             		// 0x073C (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  onlineTexture;                                    		// 0x077C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  offlineTexture;                                   		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                currentPage;                                      		// 0x0784 (0x0004) [0x0000000000000000]              
	int                                                curSelectedIndex;                                 		// 0x0788 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     NowOnlineSub;                                     		// 0x078C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60534 ];

		return pClassPointer;
	};

	bool Select ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool CloseHackFlag ( class UUIScreenObject* O, int PlayerIndex );
	bool LastPage ( class UUIScreenObject* O, int PlayerIndex );
	bool NextPage ( class UUIScreenObject* O, int PlayerIndex );
	bool ClaimHackFlag ( class UUIScreenObject* O, int PlayerIndex );
	void displayDescription ( int totalIndex );
	void updateSceneList ( int Page );
	void HackFlagsUpdated ( );
	void eventInitScene ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
};

UClass* UUIScene_HackFlagList::pClassPointer = NULL;

// Class NowGame.UIScene_HouseCreation
// 0x0078 (0x06A0 - 0x0628)
class UUIScene_HouseCreation : public UUIScene_Now_BaseScene
{
public:
	class ANowAtlasAvatarPlayerHouse*                  m_myHouse;                                        		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    confirmFrame;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   no_btn;                                           		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   yes_btn;                                          		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Questionlbl;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    helpFrame;                                        		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   help_no_btn;                                      		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   help_yes_btn;                                     		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    help_Questionlbl;                                 		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    error_frame;                                      		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ErrorLabel;                                       		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    cancel_frame;                                     		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    rotation_frame;                                   		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   cancel_btn;                                       		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   place_btn;                                        		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    progress_frame;                                   		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   ok_btn;                                           		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   cancel_button;                                    		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   rescource_btn;                                    		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    costHeader;                                       		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    progresscost;                                     		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ErrorMessage;                                     		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              progressBar;                                      		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    progressbar_edgeleft;                             		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    progressbar_edgeright;                            		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    confirm;                                          		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  editBox;                                          		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextButton;                                       		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackButton;                                       		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    rescourceLabel;                                   		// 0x069C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60648 ];

		return pClassPointer;
	};

	void PostInitUpdate ( );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool CloseConfirmScene ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool CreateHouse ( class UUIScreenObject* EventObject, int PlayerIndex );
	class ANowAtlasAvatarPlayerHouse* getPlayerHouse ( );
	bool Clicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnScrollActivity ( class UUIScrollbar* Sender, float PositionChange, unsigned long bPositionMaxed );
	bool RemoveRescource ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AddRescource ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool HelpCreate ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool HelpConstruction ( );
	void stopWorking ( );
	void eventInitScene ( );
};

UClass* UUIScene_HouseCreation::pClassPointer = NULL;

// Class NowGame.UIScene_HouseOptions
// 0x003C (0x0754 - 0x0718)
class UUIScene_HouseOptions : public UUIScene_HouseSign
{
public:
	class UUIPanel*                                    confirm_frame;                                    		// 0x0718 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    confirm_frame_deposit;                            		// 0x071C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    WindowPanel;                                      		// 0x0720 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   yes_btn;                                          		// 0x0724 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   yes_deposit_btn;                                  		// 0x0728 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   no_deposit_btn;                                   		// 0x072C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   no_btn;                                           		// 0x0730 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnOwner;                                         		// 0x0734 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   ok_btn;                                           		// 0x0738 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnUpKeep;                                        		// 0x073C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnFriends;                                       		// 0x0740 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   btnDeposit;                                       		// 0x0744 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0748 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  newOwnerEditBox;                                  		// 0x074C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Question_deposit;                                 		// 0x0750 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60817 ];

		return pClassPointer;
	};

	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void closeConfirmFrame ( );
	bool openConfirmFrame ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool confirmClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool closeSceneClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool UpKeepClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool FriendsClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool DepositClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ConfirmDeposit ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool CancelDeposit ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void setDepositInit ( );
	void eventInitScene ( );
};

UClass* UUIScene_HouseOptions::pClassPointer = NULL;

// Class NowGame.UIScene_HouseUpKeep
// 0x0010 (0x0728 - 0x0718)
class UUIScene_HouseUpKeep : public UUIScene_HouseSign
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0718 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x071C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblUpkeep;                                        		// 0x0720 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CloseButton;                                      		// 0x0724 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60951 ];

		return pClassPointer;
	};

	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_HouseUpKeep::pClassPointer = NULL;

// Class NowGame.UIScene_Inventory
// 0x0134 (0x075C - 0x0628)
class UUIScene_Inventory : public UUIScene_Now_BaseScene
{
public:
	struct FInventoryItemData                          ItemList[ 0x24 ];                                 		// 0x0628 (0x0120) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    Test;                                             		// 0x0748 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Trash;                                            		// 0x074C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINumericEditBox*                           Split;                                            		// 0x0750 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_iSplitSlot;                                     		// 0x0754 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_iSplitQuantity;                                 		// 0x0758 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60972 ];

		return pClassPointer;
	};

	void PostInitUpdate ( );
	bool SplitStack ( );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnItemDelete ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnItemDeleteClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemDragBegin ( class UUIScreenObject* Source );
	bool OnItemClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void UpdatePage ( );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void FadeIn ( unsigned long bResetOpacity );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Inventory::pClassPointer = NULL;

// Class NowGame.UIScene_ItemInspection
// 0x0020 (0x0648 - 0x0628)
class UUIScene_ItemInspection : public UUIScene_Now_BaseScene
{
public:
	struct FString                                     ItemGuid;                                         		// 0x0628 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIAtlas_ContentSlot*                        ItemSlots[ 0x3 ];                                 		// 0x0634 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Icon;                                             		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ItemName;                                         		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61052 ];

		return pClassPointer;
	};

	void UpdateItemInfo ( );
	void SetItemGuid ( struct FString sGuid );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_ItemInspection::pClassPointer = NULL;

// Class NowGame.UIScene_Keybinds
// 0x0098 (0x06C0 - 0x0628)
class UUIScene_Keybinds : public UUIScene_Now_BaseScene
{
public:
	class ANowPlayerController*                        NPC;                                              		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           Commands;                                         		// 0x062C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUILabelButton*                              Keybinds[ 0x1D ];                                 		// 0x0638 (0x0074) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 SwapAltModeBox;                                   		// 0x06AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    WindowPanel;                                      		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x06B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInProgress : 1;                                  		// 0x06B8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CommandID;                                        		// 0x06BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61147 ];

		return pClassPointer;
	};

	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnRightClicked ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnKeyClicked ( class UUIScreenObject* Target, int Source );
	void eventInitScene ( );
	void UpdateAltFunctionButton ( );
	bool SwapAlt ( class UUIScreenObject* Target, int Source );
};

UClass* UUIScene_Keybinds::pClassPointer = NULL;

// Class NowGame.UIScene_LoginAlreadyLoggedIn
// 0x0008 (0x0630 - 0x0628)
class UUIScene_LoginAlreadyLoggedIn : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              btnOk;                                            		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblMessage;                                       		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61324 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool btnOkClicked ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_LoginAlreadyLoggedIn::pClassPointer = NULL;

// Class NowGame.UIScene_LoginBannedAccount
// 0x0008 (0x0630 - 0x0628)
class UUIScene_LoginBannedAccount : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              btnOk;                                            		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblMessage;                                       		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61339 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool btnOkClicked ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_LoginBannedAccount::pClassPointer = NULL;

// Class NowGame.UIScene_MaterialProcess
// 0x001C (0x0644 - 0x0628)
class UUIScene_MaterialProcess : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              LeaveButton;                                      		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ProcessButton;                                    		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    ProcessPanel;                                     		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NotOreLabel;                                      		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61687 ];

		return pClassPointer;
	};

	bool SendTellCmd ( struct FString Command );
	void HideNotOreLabel ( );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool DoneClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ProcessClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool LeaveClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostUpdateInitialize ( );
	void eventInitScene ( );
};

UClass* UUIScene_MaterialProcess::pClassPointer = NULL;

// Class NowGame.UIScene_Murdered
// 0x0018 (0x0640 - 0x0628)
class UUIScene_Murdered : public UUIScene_Now_BaseScene
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AccuseButton;                                     		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              SkipButton;                                       		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NameLabel;                                        		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NameCounter;                                      		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61721 ];

		return pClassPointer;
	};

	bool SkipClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AccuseClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void UpdateNameLabel ( );
	void NextName ( );
	void eventInitScene ( );
};

UClass* UUIScene_Murdered::pClassPointer = NULL;

// Class NowGame.UIScene_Options
// 0x0020 (0x0648 - 0x0628)
class UUIScene_Options : public UUIScene_Now_BaseScene
{
public:
	class UNowOptionsDatastore*                        OptionsDS;                                        		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 BoxMotionBlur;                                    		// 0x062C (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 BoxSmoothFrameRate;                               		// 0x0630 (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 BoxVSync;                                         		// 0x0634 (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 BoxLowTextures;                                   		// 0x0638 (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 InvertMouse;                                      		// 0x063C (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              ButtonOk;                                         		// 0x0640 (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 ToggleMusic;                                      		// 0x0644 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61812 ];

		return pClassPointer;
	};

	bool OnInverseMouse ( class UUIScreenObject* Caller, int PlayerIndex );
	bool OnToggleMusic ( class UUIScreenObject* Caller, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Options::pClassPointer = NULL;

// Class NowGame.UIScene_Pet
// 0x0058 (0x0680 - 0x0628)
class UUIScene_Pet : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              Commands[ 0x6 ];                                  		// 0x0628 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	class UUIToggleButton*                             PetState[ 0x3 ];                                  		// 0x0640 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    RenamePanel;                                      		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    GivePanel;                                        		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    InfoPanel;                                        		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   PrevPet;                                          		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextPet;                                          		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   InfoPet;                                          		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              GiveItem;                                         		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              RenamePet;                                        		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AttackMe;                                         		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ProtectMe;                                        		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              FollowMe;                                         		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    pPawn;                                            		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPlayerController*                        PC;                                               		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61886 ];

		return pClassPointer;
	};

	void eventSceneActivated ( unsigned long bInitialActivation );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	bool OnToggleState ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnAttackMe ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnProtectMe ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnFollowMe ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnCommand ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnCancel ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnRename ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnOpenPanel ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnPetInfo ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Pet::pClassPointer = NULL;

// Class NowGame.UIScene_PetitionList
// 0x016C (0x0794 - 0x0628)
class UUIScene_PetitionList : public UUIScene_Now_BaseScene
{
public:
	class UUILabel*                                    DescriptionBox;                                   		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ClaimButton;                                      		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ClosePetitionButton;                              		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              EscalatePetitionButton;                           		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextPageButton;                                   		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   LastPageButton;                                   		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              sourceButtons[ 0x10 ];                            		// 0x0640 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              categoryButtons[ 0x10 ];                          		// 0x0680 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              claimedByButtons[ 0x10 ];                         		// 0x06C0 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              timeStampButtons[ 0x10 ];                         		// 0x0700 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    StatusImages[ 0x10 ];                             		// 0x0740 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  onlineTexture;                                    		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  offlineTexture;                                   		// 0x0784 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                currentPage;                                      		// 0x0788 (0x0004) [0x0000000000000000]              
	int                                                curSelectedIndex;                                 		// 0x078C (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     NowOnlineSub;                                     		// 0x0790 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62014 ];

		return pClassPointer;
	};

	bool Select ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool EscalatePetition ( class UUIScreenObject* O, int PlayerIndex );
	bool ClosePetition ( class UUIScreenObject* O, int PlayerIndex );
	bool LastPage ( class UUIScreenObject* O, int PlayerIndex );
	bool NextPage ( class UUIScreenObject* O, int PlayerIndex );
	bool ClaimPetition ( class UUIScreenObject* O, int PlayerIndex );
	void displayDescription ( int totalIndex );
	void updateSceneList ( int Page );
	void PetitionsUpdated ( );
	void eventInitScene ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
};

UClass* UUIScene_PetitionList::pClassPointer = NULL;

// Class NowGame.UIScene_PlayerVendorSelect
// 0x001C (0x0644 - 0x0628)
class UUIScene_PlayerVendorSelect : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              CloseButton;                                      		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Close;                                            		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Browse;                                           		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Remove;                                           		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Ok;                                               		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    ConfirmPanel;                                     		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatar*                             m_pHouse;                                         		// 0x0640 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62183 ];

		return pClassPointer;
	};

	bool OnRemove ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnBrowse ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnRemoveVendor ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	class ANowAtlasAvatar* getHouse ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_PlayerVendorSelect::pClassPointer = NULL;

// Class NowGame.UIScene_PlayerVendorSell
// 0x02E4 (0x090C - 0x0628)
class UUIScene_PlayerVendorSell : public UUIScene_Now_BaseScene
{
public:
	class ANowAtlasAvatar*                             m_pVendor;                                        		// 0x0628 (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    ConfirmPanel;                                     		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Quit;                                             		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Ok;                                               		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              CloseConfirmButton;                               		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Topic;                                            		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Resources[ 0x2 ];                                 		// 0x064C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct UUIScene_PlayerVendorSell_FTradeItemData    m_TradeSlotA[ 0xC ];                              		// 0x0654 (0x0120) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct UUIScene_PlayerVendorSell_FTradeItemData    m_WantedItemSlotA[ 0xC ];                         		// 0x0774 (0x0120) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              Timer;                                            		// 0x0894 (0x0004) [0x0000000000000000]              
	float                                              onetimer;                                         		// 0x0898 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInProgress : 1;                                  		// 0x089C (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowPlayerController*                        NPC;                                              		// 0x08A0 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActor*                         TargetActor;                                      		// 0x08A4 (0x0004) [0x0000000000000000]              
	struct FString                                     sellItemGUID;                                     		// 0x08A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     wantedItemGuid;                                   		// 0x08B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sellItemName;                                     		// 0x08C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     wantedItemName;                                   		// 0x08CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     wantedItemQuant;                                  		// 0x08D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sellItemQuant;                                    		// 0x08E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                itemToBuy;                                        		// 0x08F0 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           Messages;                                         		// 0x08F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeLeft;                                         		// 0x0900 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    TimeLabel;                                        		// 0x0904 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINumericEditBox*                           editPrice;                                        		// 0x0908 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62219 ];

		return pClassPointer;
	};

	class ANowAtlasAvatar* getVendor ( );
	void PostRefineMessage ( struct FString msg );
	void UpdateTrade ( );
	void MessageEvent ( struct FString msg );
	bool sendMessageToVendor ( struct FString VendorMessage );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool CloseButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OkClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_PlayerVendorSell::pClassPointer = NULL;

// Class NowGame.UIScene_PlayerVendorShopMain
// 0x008C (0x06B4 - 0x0628)
class UUIScene_PlayerVendorShopMain : public UUIScene_Now_BaseScene
{
public:
	class ANowAtlasAvatar*                             m_Stable;                                         		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    ToolPanel;                                        		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    WorkbenchPanel;                                   		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Process;                                          		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Bench;                                            		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Resources[ 0x3 ];                                 		// 0x0644 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemList[ 0x3 ];                                  		// 0x0650 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x065C (0x0004) [0x0000000000000000]              
	float                                              onetimer;                                         		// 0x0660 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInProgress : 1;                                  		// 0x0664 (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowPlayerController*                        NPC;                                              		// 0x0668 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActor*                         TargetActor;                                      		// 0x066C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemGuid;                                         		// 0x0670 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CatalystGUID;                                     		// 0x067C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolGUID;                                         		// 0x0688 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BenchName;                                        		// 0x0694 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Messages;                                         		// 0x06A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeLeft;                                         		// 0x06AC (0x0004) [0x0000000000000000]              
	class UUILabel*                                    TimeLabel;                                        		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62305 ];

		return pClassPointer;
	};

	class ANowAtlasAvatar* getStable ( );
	void PostRefineMessage ( struct FString msg );
	void UpdatePage ( );
	void MessageEvent ( struct FString msg );
	bool OnRefineSlotDropped ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnRefineSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnProcess ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_PlayerVendorShopMain::pClassPointer = NULL;

// Class NowGame.UIScene_Quickbar
// 0x00AC (0x06D4 - 0x0628)
class UUIScene_Quickbar : public UUIScene_Now_BaseScene
{
public:
	class UUINow_ContentButton*                        NewButtons[ 0xA ];                                		// 0x0628 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        NewSlots[ 0xA ];                                  		// 0x0650 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    QuickBarPanel;                                    		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    CurrentBar;                                       		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Add;                                              		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Sub;                                              		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Move;                                             		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Offset;                                           		// 0x068C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    MouseOverName;                                    		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    MouseOver;                                        		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              oldTime;                                          		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              NewTime;                                          		// 0x069C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              skillTimer;                                       		// 0x06A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x06A4 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    CenterPanel;                                      		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   Minimize;                                         		// 0x06AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           SceneTags;                                        		// 0x06B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           SceneArray;                                       		// 0x06BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UUIButton* >                         ButtonArray;                                      		// 0x06C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62434 ];

		return pClassPointer;
	};

	bool QuickButtonPressed ( class UUIScreenObject* Object, int PlayerIndex );
	void StateChange ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState );
	void eventSetVisibility ( unsigned long bVisible );
	void BarDecrement ( class UUIScreenObject* EventObject, int PlayerIndex );
	void BarIncrement ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetBarOffset ( int I );
	void NewUpdatePage ( );
	bool UseTimer ( );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool ClearActionbar ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnActionButtonDragBegin ( class UUIScreenObject* Source );
	bool OnSkillActionClicked ( class UUIScreenObject* O, int PlayerIndex );
	bool OnSpellButtonClicked ( class UUIScreenObject* O, int PlayerIndex );
	bool OnItemButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnCombatMoveButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnActionButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	void ExecSlot ( int I );
	bool NewOnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool NewOnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool MinimizeQuickbar ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Quickbar::pClassPointer = NULL;

// Class NowGame.UIScene_Refine
// 0x0074 (0x069C - 0x0628)
class UUIScene_Refine : public UUIScene_Now_BaseScene
{
public:
	class UUILabelButton*                              Quit;                                             		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Process;                                          		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Bench;                                            		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Resources[ 0x2 ];                                 		// 0x0638 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemList[ 0x3 ];                                  		// 0x0640 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x064C (0x0004) [0x0000000000000000]              
	float                                              onetimer;                                         		// 0x0650 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInProgress : 1;                                  		// 0x0654 (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowPlayerController*                        NPC;                                              		// 0x0658 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActor*                         TargetActor;                                      		// 0x065C (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorEmitter*                  TargetEmitter;                                    		// 0x0660 (0x0004) [0x0000000000000000]              
	class AActor*                                      TargetActorB;                                     		// 0x0664 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemGuid;                                         		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CatalystGUID;                                     		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BenchName;                                        		// 0x0680 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Messages;                                         		// 0x068C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeLeft;                                         		// 0x0698 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62587 ];

		return pClassPointer;
	};

	void PostRefineMessage ( struct FString msg );
	void UpdatePage ( );
	void MessageEvent ( struct FString msg );
	struct FString FindTool ( );
	void UpdateWorkBench ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool OnCatalystSlotClicked ( class UUIScreenObject* Target, int Num );
	bool OnCatalystSlotDropped ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnRefineSlotClicked ( class UUIScreenObject* Target, int Num );
	bool OnRefineSlotDropped ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnProcess ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Refine::pClassPointer = NULL;

// Class NowGame.UIScene_Refining
// 0x0060 (0x0688 - 0x0628)
class UUIScene_Refining : public UUIScene_Now_BaseScene
{
public:
	class UUIButton*                                   MoveButton;                                       		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Close;                                            		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Done;                                             		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Resources[ 0x3 ];                                 		// 0x0634 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemList[ 0x3 ];                                  		// 0x0640 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ItemGUIDS[ 0x3 ];                                 		// 0x064C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUILabel*                                    WORKBENCH;                                        		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bInProgress : 1;                                  		// 0x0674 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeLeft;                                         		// 0x0678 (0x0004) [0x0000000000000000]              
	struct FString                                     finnishMessage;                                   		// 0x067C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62653 ];

		return pClassPointer;
	};

	void UpdatePage ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool OnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnSlotClick ( class UUIScreenObject* Target, int PlayerIndex );
	bool OnRefine ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Refining::pClassPointer = NULL;

// Class NowGame.UIScene_ShieldCreation
// 0x0510 (0x0B48 - 0x0638)
class UUIScene_ShieldCreation : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextButton;                                       		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextPageButton;                                   		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackPageButton;                                   		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NameLabel;                                        		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PageLabel;                                        		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ValueNextButton;                                  		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              ValueBackButton;                                  		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ValueLabel;                                       		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ValuePageLabel;                                   		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    ValueBG;                                          		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialNames[ 0x26 ];                            		// 0x0674 (0x01C8) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MaterialSendNames[ 0x26 ];                        		// 0x083C (0x01C8) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     BaseTypes[ 0x2 ];                                 		// 0x0A04 (0x0018) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     FrameTypes[ 0x5 ];                                		// 0x0A1C (0x003C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     WoodNames[ 0x8 ];                                 		// 0x0A58 (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     WoodSendNames[ 0x8 ];                             		// 0x0AB8 (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                BaseType;                                         		// 0x0B18 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FrameType;                                        		// 0x0B1C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BaseResource;                                     		// 0x0B20 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CoatResource;                                     		// 0x0B24 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FrameResource;                                    		// 0x0B28 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BaseMatValue;                                     		// 0x0B2C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CoatMatValue;                                     		// 0x0B30 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BaseMaxValue;                                     		// 0x0B34 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BaseMinValue;                                     		// 0x0B38 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CoatMaxValue;                                     		// 0x0B3C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CoatMinValue;                                     		// 0x0B40 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Page;                                             		// 0x0B44 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62817 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackValueClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextValueClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_ShieldCreation::pClassPointer = NULL;

// Class NowGame.UIScene_ShieldCreationNew
// 0x00F8 (0x0730 - 0x0638)
class UUIScene_ShieldCreationNew : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextBaseButton;                                   		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackBaseButton;                                   		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextFrameButton;                                  		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackFrameButton;                                  		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    BaseLabel;                                        		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    FrameLabel;                                       		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUISlider*                                   BaseSlider;                                       		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUISlider*                                   CoatSlider;                                       		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Mat1;                                             		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        BaseMat;                                          		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        CoatMat;                                          		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        FrameMat;                                         		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        BaseMatButton;                                    		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        CoatMatButton;                                    		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        FrameMatButton;                                   		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BaseResource;                                     		// 0x0684 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     CoatResource;                                     		// 0x0690 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     FrameResource;                                    		// 0x069C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Base;                                             		// 0x06A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                frame;                                            		// 0x06AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSC_Base                                    Bases[ 0x2 ];                                     		// 0x06B0 (0x0030) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FSC_Frame                                   Frames[ 0x5 ];                                    		// 0x06E0 (0x0050) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62895 ];

		return pClassPointer;
	};

	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetupSliders ( );
	void SetDoneVisibility ( );
	void SetMaterial ( class UUINow_ContentButton* Target, int eMat );
	bool FrameMatDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool CoatMatDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool BaseMatDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool FrameMatClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool CoatMatClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BaseMatClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetMaterialVisibility ( );
	void FrameClick ( unsigned long bBack );
	bool BackFrameClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextFrameClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void BaseClick ( unsigned long bBack );
	bool BackBaseClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextBaseClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_ShieldCreationNew::pClassPointer = NULL;

// Class NowGame.UIScene_Sidebar
// 0x0020 (0x05E0 - 0x05C0)
class UUIScene_Sidebar : public UUIScene_Atlas_BaseScene
{
public:
	class UUILabelButton*                              Close;                                            		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Move;                                             		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIToggleButton*                             Spells;                                           		// 0x05C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIToggleButton*                             Skills;                                           		// 0x05CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIToggleButton*                             Player;                                           		// 0x05D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIToggleButton*                             Inventory;                                        		// 0x05D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    Panel;                                            		// 0x05D8 (0x0004) [0x0000000000000000]              
	class ANowHUD*                                     PlayerHUD;                                        		// 0x05DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63013 ];

		return pClassPointer;
	};

	class ANowHUD* GetPlayerHUD ( );
	bool OnInventoryClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnPlayerClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSkillClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSpellClick ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Sidebar::pClassPointer = NULL;

// Class NowGame.UIScene_SkillBook
// 0x0148 (0x0770 - 0x0628)
class UUIScene_SkillBook : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_SkillBook_FSkill                   SkillList[ 0x7 ];                                 		// 0x0628 (0x00FC) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    Window;                                           		// 0x0724 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              General;                                          		// 0x0728 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Crafting;                                         		// 0x072C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Weapons;                                          		// 0x0730 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Close;                                            		// 0x0734 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    SkillPoints;                                      		// 0x0738 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     CurrentCategory;                                  		// 0x073C (0x000C) [0x0000000000406000]              ( CPF_Transient | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Page1;                                            		// 0x0748 (0x000C) [0x0000000000406000]              ( CPF_Transient | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Page2;                                            		// 0x0754 (0x000C) [0x0000000000406000]              ( CPF_Transient | CPF_Config | CPF_NeedCtorLink )
	float                                              Timer;                                            		// 0x0760 (0x0004) [0x0000000000000000]              
	class USurface*                                    LockIcons[ 0x3 ];                                 		// 0x0764 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63044 ];

		return pClassPointer;
	};

	void UpdatePage ( );
	bool OnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemDragBegin ( class UUIScreenObject* Source );
	void SkillListChanged ( );
	void eventSceneDeactivated ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool UseTimer ( );
	bool OnSkillActionClicked ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool SkillChangeState ( class UUIScreenObject* O, int PlayerIndex );
	bool OnGroupSelect ( class UUIScreenObject* O, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_SkillBook::pClassPointer = NULL;

// Class NowGame.UIScene_Skills
// 0x00D4 (0x06FC - 0x0628)
class UUIScene_Skills : public UUIScene_Now_BaseScene
{
public:
	int                                                m_ActiveIValue;                                   		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_bActiveIsGroup : 1;                             		// 0x062C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              Timer;                                            		// 0x0630 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_PrimaryPoints;                                  		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainNameLabel;                                  		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainDescriptionLabel;                           		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_SkillBar*                             m_MainSkillBar;                                   		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        m_MainActionButton;                               		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        m_LevelDownButton;                                		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        m_MainLockButton;                                 		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_MainIsPrimary;                                  		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_MainIsSkill;                                    		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainBaseChance;                                 		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainSkillPoints;                                		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainEffectiveSkill;                             		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainTotalSkill;                                 		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainAllowedSkill;                               		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainPrereq1;                                    		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainPrereq2;                                    		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainPrereqName1;                                		// 0x0674 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainPrereqName2;                                		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_MainPrereq1BG;                                  		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_MainPrereq2BG;                                  		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              m_MainSkillXp;                                    		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainDebugXp;                                    		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainDisabled;                                   		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainPrimary;                                    		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainBCAttribute1;                               		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_MainBCAttribute2;                               		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FSkillButton >                      m_Page0Buttons;                                   		// 0x069C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSkillButton >                      m_Page2Buttons;                                   		// 0x06A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUILabel*                                    m_ActionDescription;                              		// 0x06B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_ActionName;                                     		// 0x06B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UUINow_ContentButton* >              m_PageActionButtons;                              		// 0x06BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UUIPanel* >                          m_PageActionPanels;                               		// 0x06C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FSkillGroup >                       m_SkillGroups;                                    		// 0x06D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  m_LockStateUp;                                    		// 0x06E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_LockStateLocked;                                		// 0x06E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_LockStateDown;                                  		// 0x06E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_NotDisabledBG;                                  		// 0x06EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_DisabledBG;                                     		// 0x06F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUIPanel*                                    m_P1;                                             		// 0x06F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_PActions;                                       		// 0x06F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63140 ];

		return pClassPointer;
	};

	void ActionHoverChange ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState );
	void SetupAttributeLabel ( class UUILabel* Label, int eAttribute );
	bool LockClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool LevelDownClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void SetupLockState ( class UUINow_ContentButton* Button, int lockState );
	void SetupSkillBar ( class UUINow_SkillBar* Bar, int SkillLevel, int AttributeLevel, int EnabledLevel );
	void SetActiveSkill ( struct FSkillButton Button );
	bool OnActionDragBegin ( class UUIScreenObject* Source );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool UseTimer ( );
	bool ActionClicked ( class UUIScreenObject* O, int PlayerIndex );
	bool ButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	int GetGroupWithChild ( struct FString skillName );
	void ShowGroups ( );
	void UpdatePage ( );
	void InitGroups ( );
	void PostInitUpdate ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Skills::pClassPointer = NULL;

// Class NowGame.UIScene_SpellBook
// 0x0144 (0x076C - 0x0628)
class UUIScene_SpellBook : public UUIScene_Now_BaseScene
{
public:
	struct FSpellInfo                                  SpellSelect[ 0xF ];                               		// 0x0628 (0x00B4) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Slot;                                             		// 0x06DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentButton*                      Button;                                           		// 0x06E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     CompName[ 0x4 ];                                  		// 0x06E4 (0x0030) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUIImage*                                    CompSlot[ 0x4 ];                                  		// 0x0714 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   CompButton[ 0x4 ];                                		// 0x0724 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FReagent >                          SpellReagents;                                    		// 0x0734 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SpellContentInfo;                                 		// 0x0740 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUILabel*                                    Spellname;                                        		// 0x074C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    SpellDesc;                                        		// 0x0750 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    MouseOverName;                                    		// 0x0754 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    MouseOver;                                        		// 0x0758 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextPageButton;                                   		// 0x075C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              LastPageButton;                                   		// 0x0760 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    SpellSchool;                                      		// 0x0764 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                spellSchoolPage;                                  		// 0x0768 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63332 ];

		return pClassPointer;
	};

	bool LastPageClicked ( class UUIScreenObject* O, int PlayerIndex );
	bool NextPageClicked ( class UUIScreenObject* O, int PlayerIndex );
	void SetSpellSchoolLabel ( );
	void UpdateSpellSlot ( int SpellID, class USpellEffect_ContentInfo* spellCI );
	void UpdatePage ( );
	void StateChange ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState );
	void OnCompMouseover ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState );
	void ItemListChanged ( TArray< struct FString > ItemData );
	bool OnSpellDragBegin ( class UUIScreenObject* Source );
	bool OnSpellClicked ( class UUIScreenObject* O, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	bool OnSpellSelect ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	void eventInitScene ( );
};

UClass* UUIScene_SpellBook::pClassPointer = NULL;

// Class NowGame.UIScene_Stable
// 0x0090 (0x06B8 - 0x0628)
class UUIScene_Stable : public UUIScene_Now_BaseScene
{
public:
	class ANowAtlasAvatar*                             m_Stable;                                         		// 0x0628 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    ToolPanel;                                        		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    WorkbenchPanel;                                   		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Quit;                                             		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              Process;                                          		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Message;                                          		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    Bench;                                            		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIAtlas_ContentSlot*                        Resources[ 0x3 ];                                 		// 0x0648 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        ItemList[ 0x3 ];                                  		// 0x0654 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x0660 (0x0004) [0x0000000000000000]              
	float                                              onetimer;                                         		// 0x0664 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInProgress : 1;                                  		// 0x0668 (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowPlayerController*                        NPC;                                              		// 0x066C (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActor*                         TargetActor;                                      		// 0x0670 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemGuid;                                         		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CatalystGUID;                                     		// 0x0680 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolGUID;                                         		// 0x068C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BenchName;                                        		// 0x0698 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Messages;                                         		// 0x06A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeLeft;                                         		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    TimeLabel;                                        		// 0x06B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63458 ];

		return pClassPointer;
	};

	class ANowAtlasAvatar* getStable ( );
	void PostRefineMessage ( struct FString msg );
	void UpdatePage ( );
	void MessageEvent ( struct FString msg );
	void UpdateWorkBench ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool OnCatalystSlotClicked ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnToolSlotClicked ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnRefineSlotDropped ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnRefineSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnProcess ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnClose ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Stable::pClassPointer = NULL;

// Class NowGame.UIScene_Startup
// 0x000C (0x0634 - 0x0628)
class UUIScene_Startup : public UUIScene_Now_BaseScene
{
public:
	class UUIImage*                                    Image1;                                           		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    Image2;                                           		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Timer;                                            		// 0x0630 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63585 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Startup::pClassPointer = NULL;

// Class NowGame.UIScene_StealingInventory
// 0x01D4 (0x07FC - 0x0628)
class UUIScene_StealingInventory : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_StealingInventory_FTradeItemData   m_TradeSlotA[ 0x24 ];                             		// 0x0628 (0x01B0) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x07D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatarWorldBridge*                  m_Bridge;                                         		// 0x07DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_curHp;                                          		// 0x07E0 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   m_AcceptButton;                                   		// 0x07E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CancelButton;                                   		// 0x07E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_YouAcceptedImg;                                 		// 0x07EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_TheyAcceptedImg;                                		// 0x07F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_YourNameLabel;                                  		// 0x07F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_TheirNameLabel;                                 		// 0x07F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63598 ];

		return pClassPointer;
	};

	void UpdateTrade ( );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void PostInitUpdate ( );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool CancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_StealingInventory::pClassPointer = NULL;

// Class NowGame.UIScene_Trade
// 0x0080 (0x06A8 - 0x0628)
class UUIScene_Trade : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_Trade_FTradeItemData               m_TradeSlotA[ 0x6 ];                              		// 0x0628 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	struct UUIScene_Trade_FTradeItemData               m_TradeSlotB[ 0x6 ];                              		// 0x0658 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0688 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_AcceptButton;                                   		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_UnacceptButton;                                 		// 0x0690 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CancelButton;                                   		// 0x0694 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_YouAcceptedImg;                                 		// 0x0698 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_TheyAcceptedImg;                                		// 0x069C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_YourNameLabel;                                  		// 0x06A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_TheirNameLabel;                                 		// 0x06A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63646 ];

		return pClassPointer;
	};

	void UpdateTrade ( );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void PostInitUpdate ( );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool CancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool UnacceptButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AcceptButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Trade::pClassPointer = NULL;

// Class NowGame.UIScene_WeaponCreation
// 0x0578 (0x0BA0 - 0x0628)
class UUIScene_WeaponCreation : public UUIScene_Now_BaseScene
{
public:
	unsigned long                                      bMakeIntoRecipe : 1;                              		// 0x0628 (0x0004) [0x0000000000000000] [0x00000001] 
	class UUIPanel*                                    WindowPanel;                                      		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextButton;                                       		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackButton;                                       		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              NextPageButton;                                   		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              BackPageButton;                                   		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NameLabel;                                        		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    PageLabel;                                        		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialSlots[ 0x3 ];                             		// 0x0654 (0x0024) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MaterialNames[ 0x1D ];                            		// 0x0678 (0x015C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MaterialSendNames[ 0x1D ];                        		// 0x07D4 (0x015C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     HandleNames[ 0x9 ];                               		// 0x0930 (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     HandleSendNames[ 0x9 ];                           		// 0x099C (0x006C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     BladeNames[ 0x10 ];                               		// 0x0A08 (0x00C0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     BladeSendNames[ 0x10 ];                           		// 0x0AC8 (0x00C0) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Handle;                                           		// 0x0B88 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                VisibleHandleResource;                            		// 0x0B8C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                HandleResource;                                   		// 0x0B90 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Blade;                                            		// 0x0B94 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                BladeResource;                                    		// 0x0B98 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Page;                                             		// 0x0B9C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63906 ];

		return pClassPointer;
	};

	struct FString GetMatSlotName ( int handleNr, unsigned long visibleMat );
	bool DoneClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextPageClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_WeaponCreation::pClassPointer = NULL;

// Class NowGame.UIScene_WeaponCreationNew
// 0x0720 (0x0D58 - 0x0638)
class UUIScene_WeaponCreationNew : public UUIScene_CreationBase
{
public:
	class UUIPanel*                                    WindowPanel;                                      		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   MoveButton;                                       		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextHandleButton;                                 		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackHandleButton;                                 		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   NextHeadButton;                                   		// 0x0648 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   BackHeadButton;                                   		// 0x064C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneHandleButton;                                 		// 0x0650 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              DoneButton;                                       		// 0x0654 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              AbortButton;                                      		// 0x0658 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    HandleLabel;                                      		// 0x065C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    HeadLabel;                                        		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        VisHandleButton;                                  		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        nVisHandleButton;                                 		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUINow_ContentButton*                        HeadButton;                                       		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                Handle;                                           		// 0x0670 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FWC_Handle                                  Handles[ 0x9 ];                                   		// 0x0674 (0x0168) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     VisHandleResource;                                		// 0x07DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     nVisHandleResource;                               		// 0x07E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Head;                                             		// 0x07F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FWC_Head                                    Heads[ 0x22 ];                                    		// 0x07F8 (0x0550) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     HeadResource;                                     		// 0x0D48 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bCreateHandle : 1;                                		// 0x0D54 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63973 ];

		return pClassPointer;
	};

	bool CreateHandleClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool CreateClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool DoneHandleClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool DoneWeaponClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	int GetNextHead ( unsigned long bBack, unsigned long bBladeOnly );
	int GetNextHandle ( unsigned long bBack, unsigned long bBlade );
	void SetDoneVisibility ( );
	bool HeadDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool nVisHandleDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool VisHandleDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool HeadClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool nVisHandleClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool VisHandleClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackHeadClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextHeadClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool BackHandleClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextHandleClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool AbortClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void PostInitUpdate ( );
	void eventInitScene ( );
};

UClass* UUIScene_WeaponCreationNew::pClassPointer = NULL;

// Class NowGame.UIScene_Work
// 0x0060 (0x0688 - 0x0628)
class UUIScene_Work : public UUIScene_Now_BaseScene
{
public:
	TArray< struct FString >                           ProffessionsLabel;                                		// 0x0628 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUILabelButton*                              ProffessionButton[ 0xA ];                         		// 0x0634 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ProffessionLabel[ 0xA ];                          		// 0x065C (0x0028) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    ChosenLabel;                                      		// 0x0684 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64150 ];

		return pClassPointer;
	};

	bool OnProffessionSelect ( class UUIScreenObject* O, int PlayerIndex );
	void eventInitScene ( );
};

UClass* UUIScene_Work::pClassPointer = NULL;

// Class NowGame.UIScene_WorldObjectTrade
// 0x0414 (0x0A3C - 0x0628)
class UUIScene_WorldObjectTrade : public UUIScene_Now_BaseScene
{
public:
	struct UUIScene_WorldObjectTrade_FTradeItemData    m_TradeSlotA[ 0x24 ];                             		// 0x0628 (0x0360) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANowPawn*                                    m_PlayerPawn;                                     		// 0x0988 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowAtlasAvatar*                             m_Structure;                                      		// 0x098C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_curHp;                                          		// 0x0990 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   m_AcceptButton;                                   		// 0x0994 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CancelButton;                                   		// 0x0998 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_YouAcceptedImg;                                 		// 0x099C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_TheyAcceptedImg;                                		// 0x09A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_YourNameLabel;                                  		// 0x09A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_TheirNameLabel;                                 		// 0x09A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblMaterial[ 0x5 ];                               		// 0x09AC (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblProgress[ 0x4 ];                               		// 0x09C0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              progressBars[ 0x4 ];                              		// 0x09D0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     MaterialNames[ 0x5 ];                             		// 0x09E0 (0x003C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUILabel*                                    lblCurHp;                                         		// 0x0A1C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblresourcesHeader;                               		// 0x0A20 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblcostHeader;                                    		// 0x0A24 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblHouseBank;                                     		// 0x0A28 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblResources[ 0x4 ];                              		// 0x0A2C (0x0010) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64165 ];

		return pClassPointer;
	};

	void UpdateTrade ( );
	bool TradeRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	void PostInitUpdate ( );
	class ANowAtlasAvatarPlayerStructure* getBridge ( );
	void updateRescources ( );
	void OnInventoryItemRightClick ( int iBag, int iSlot );
	bool CancelButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_WorldObjectTrade::pClassPointer = NULL;

// Class NowGame.UISlot
// 0x0000 (0x0470 - 0x0470)
class UUISlot : public UUIButton
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64233 ];

		return pClassPointer;
	};

};

UClass* UUISlot::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif