/*
#############################################################################################
# Mortal Online (Unknown) SDK
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

// Enum NowGame.SkeletalMeshComponentGenerated.ESpecies
/*enum ESpecies
{
	ESpecies_Human                                     = 0,
	ESpecies_Alvarin                                   = 1,
	ESpecies_Dvergar                                   = 2,
	ESpecies_Thursar                                   = 3,
	ESpecies_MAX                                       = 4
};*/

// Enum NowGame.SkeletalMeshComponentGenerated.EMainRace
/*enum EMainRace
{
	EMainRace_Tindremene                               = 0,
	EMainRace_Sidoian                                  = 1,
	EMainRace_Khurite                                  = 2,
	EMainRace_Sarducaan                                = 3,
	EMainRace_Kallard                                  = 4,
	EMainRace_Thursar00                                = 5,
	EMainRace_Unused06                                 = 6,
	EMainRace_Unused07                                 = 7,
	EMainRace_Unused08                                 = 8,
	EMainRace_Unused09                                 = 9,
	EMainRace_Sheevra                                  = 10,
	EMainRace_Veela                                    = 11,
	EMainRace_Unused12                                 = 12,
	EMainRace_Unused13                                 = 13,
	EMainRace_Unused14                                 = 14,
	EMainRace_Unused15                                 = 15,
	EMainRace_Unused16                                 = 16,
	EMainRace_Unused17                                 = 17,
	EMainRace_Unused18                                 = 18,
	EMainRace_Unused19                                 = 19,
	EMainRace_Blainn                                   = 20,
	EMainRace_Huergar                                  = 21,
	EMainRace_Unused22                                 = 22,
	EMainRace_Unused23                                 = 23,
	EMainRace_Unused24                                 = 24,
	EMainRace_Unused25                                 = 25,
	EMainRace_Unused26                                 = 26,
	EMainRace_Unused27                                 = 27,
	EMainRace_Unused28                                 = 28,
	EMainRace_Unused29                                 = 29,
	EMainRace_Thursar01                                = 30,
	EMainRace_Unused31                                 = 31,
	EMainRace_Unused32                                 = 32,
	EMainRace_Unused33                                 = 33,
	EMainRace_Unused34                                 = 34,
	EMainRace_Thursar02                                = 35,
	EMainRace_MAX                                      = 36
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

// Enum NowGame.ClientViewModeStructureBuild.ePlaceState
/*enum ePlaceState
{
	PlaceState_Pos                                     = 0,
	PlaceState_Height                                  = 1,
	PlaceState_Rot                                     = 2,
	PlaceState_Pitch                                   = 3,
	PlaceState_Done                                    = 4,
	PlaceState_MAX                                     = 5
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

// Enum NowGame.MagicMeshFX.eMagicMeshFX
/*enum eMagicMeshFX
{
	eMagicMeshFX_NONE                                  = 0,
	eMagicMeshFX_Relic                                 = 1,
	eMagicMeshFX_FireArrow                             = 2,
	eMagicMeshFX_MAX                                   = 3
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

// Enum NowGame.NowAtlasAvatarAiMountDynamic.eDynamicFeature
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

// Enum NowGame.NowAtlasAvatarAiMountDynamic.eTextureParamType
/*enum eTextureParamType
{
	eTPT_Scalar                                        = 0,
	eTPT_Color                                         = 1,
	eTPT_Texture                                       = 2,
	eTPT_Material                                      = 3,
	eTPT_UNUSED                                        = 4,
	eTPT_MAX                                           = 5
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
	eBroker                                            = 42,
	eMail                                              = 43,
	eLockpicking                                       = 44,
	eTutor                                             = 45,
	ePlayerBook                                        = 46,
	eHouseSign                                         = 47,
	eFishing                                           = 48,
	ePlaceHouseTradeBroker                             = 49,
	eHouseTradeBroker                                  = 50,
	eHouseSignConstruction                             = 51,
	eTalkerUiVendor                                    = 52,
	ePriestArena                                       = 53,
	eGlassblowing                                      = 54,
	ePriestHouse                                       = 55,
	eNoobHelp                                          = 56,
	ePetBags                                           = 57,
	eTaxManagerKeep                                    = 58,
	ePlayerDrawing                                     = 59,
	ePlayerNote                                        = 60,
	eNoteboard                                         = 61,
	eCropsFarmer                                       = 62,
	eAnimalBreeder                                     = 63,
	eGateKeeper                                        = 64,
	eTerritoryMiner                                    = 65,
	eUNUSED                                            = 66,
	eUNUSEDB                                           = 67,
	eBrokerWeapon                                      = 68,
	eBrokerShield                                      = 69,
	eBrokerBow                                         = 70,
	eBrokerArmor                                       = 71,
	eBrokerPets                                        = 72,
	eBrokerBooks                                       = 73,
	eResurrectPlayer                                   = 74,
	eVendorTerritoryTalk                               = 75,
	eLibraryTerritoryTalk                              = 76,
	eEconomist                                         = 77,
	eTaxManagerHouse                                   = 78,
	eTerritoryStoneCutter                              = 79,
	eGuildSentinel                                     = 80,
	EGFXScenes_MAX                                     = 81
};*/

// Enum NowGame.NowGFXHudScene.eAttributes
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

// Enum NowGame.NowGFXSceneMainMenu.ePanel
/*enum ePanel
{
	ePanel_CladeInfo                                   = 0,
	ePanel_MAX                                         = 1
};*/

// Enum NowGame.NowGFXSceneMainMenu.eCreateStep
/*enum eCreateStep
{
	eCreateStep_None                                   = 0,
	eCreateStep_Clade                                  = 1,
	eCreateStep_CladeInfo                              = 2,
	eCreateStep_Ancestry                               = 3,
	eCreateStep_Attributes                             = 4,
	eCreateStep_Features                               = 5,
	eCreateStep_Final                                  = 6,
	eCreateStep_Customization                          = 7,
	eCreateStep_MAX                                    = 8
};*/

// Enum NowGame.NowPawn.EMeleeCombat_MoveTypes
/*enum EMeleeCombat_MoveTypes
{
	MCMT_Right                                         = 0,
	MCMT_Left                                          = 1,
	MCMT_Thrust                                        = 2,
	MCMT_MAX                                           = 3
};*/

// Enum NowGame.NowTCPLink.eTCPTarget
/*enum eTCPTarget
{
	eTCP_PlayerSettings                                = 0,
	eTCP_PlayerBook                                    = 1,
	eTCP_PlayerDrawing                                 = 2,
	eTCP_PlayerNote                                    = 3,
	eTCP_Help                                          = 4,
	eTCP_GM                                            = 5,
	eTCP_NoticeBoard                                   = 6,
	eTCP_TownCrier                                     = 7,
	eTCP_PScan                                         = 8,
	eTCP_Broker                                        = 9,
	eTCP_BrokerTest                                    = 10,
	eTCP_MainMenuNews                                  = 11,
	eTCP_MAX                                           = 12
};*/

// Enum NowGame.NowTCPLink.eTCPState
/*enum eTCPState
{
	eTCPState_NotComplete                              = 0,
	eTCPState_ReadyToSend                              = 1,
	eTCPState_Sent                                     = 2,
	eTCPState_MAX                                      = 3
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
	eTraceLineGreen                                    = 10,
	eTraceLineRed                                      = 11,
	eEmitterEffect_MAX                                 = 12
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
	eActionEvent_PlaceTerritoryStructure               = 15,
	eActionEvent_PlaceTSNpc                            = 16,
	eActionEvent_PlaceTSWall                           = 17,
	eActionEvent_PlaceTSUpgradeTier                    = 18,
	eActionEvent_PlaceTSPatrolSphere                   = 19,
	eActionEvent_PlaceTSMine                           = 20,
	eActionEvent_PlaceTSGate                           = 21,
	eActionEvent_MAX                                   = 22
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

// Enum NowGame.StatManager.GFXUpdateTypes
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

// Enum NowGame.StatManager.GFXUpdateTargetTypes
/*enum GFXUpdateTargetTypes
{
	GFXTGT_SELF                                        = 0,
	GFXTGT_TARGET                                      = 1,
	GFXTGT_MOUNT                                       = 2,
	GFXTGT_MAX                                         = 3
};*/

// Enum NowGame.UIInfo.UIInfoType
/*enum UIInfoType
{
	UIInfo_None                                        = 0,
	UIInfo_TalkerStable                                = 1,
	UIInfo_TalkerCityBrain                             = 2,
	UIInfo_TalkerNoobHelp                              = 3,
	UIInfo_TalkerTaxManager                            = 4,
	UIInfo_TalkerCropsFarmer                           = 5,
	UIInfo_TalkerAnimalBreeder                         = 6,
	UIInfo_TalkerGateKeeper                            = 7,
	UIInfo_TalkerMiner                                 = 8,
	UIInfo_TalkerTerritoryVendor                       = 9,
	UIInfo_TalkerTerritoryLibrary                      = 10,
	UIInfo_MAX                                         = 11
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class NowGame.AnimNodeBlendByMountRotation
// 0x0040 (0x0164 - 0x0124)
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
	int                                                StillTurnMaxSpeed;                                		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastKnownYaw;                                     		// 0x015C (0x0004) [0x0000000000000000]              
	int                                                LastTurnStyle;                                    		// 0x0160 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1502 ];

		return pClassPointer;
	};

	class ANowPlayerController* GetPlayerController ( );
	class ANowPawn* GetPawn ( );
	class ANowAtlasAvatarAiMount* GetAtlasAvatar ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1503 ];

		return pClassPointer;
	};

	class ANowPlayerController* GetPlayerController ( );
	class ANowPawn* GetPawn ( );
	class ANowAtlasAvatarAiMount* GetAtlasAvatar ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1504 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1505 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1506 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1507 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1508 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1509 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1510 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1511 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1512 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1513 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeIsFemale::pClassPointer = NULL;

// Class NowGame.CharacterSlot
// 0x009C (0x0384 - 0x02E8)
class ACharacterSlot : public AActor
{
public:
	class UStaticMeshComponent*                        BaseMesh;                                         		// 0x02E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        BaseMeshExtra;                                    		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponentGeneratedPlayerNew*    BodyMesh;                                         		// 0x02F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      BodyMeshStone;                                    		// 0x02F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowStaticMeshActorWeapon*                   RWeapon;                                          		// 0x02F8 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorWeapon*                   LWeapon;                                          		// 0x02FC (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x0300 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstance*                           pStoneMaterial;                                   		// 0x0304 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPointLightComponent*                        FlagLight;                                        		// 0x0308 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FColor                                      FlagColor[ 0xA ];                                 		// 0x030C (0x0028) [0x0000000000000000]              
	int                                                iSlotIndex;                                       		// 0x0334 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMoveAnim;                                        		// 0x0338 (0x0004) [0x0000000000000000]              
	struct FVector                                     vFinalLoc;                                        		// 0x033C (0x000C) [0x0000000000000000]              
	struct FVector                                     vUpLoc;                                           		// 0x0348 (0x000C) [0x0000000000000000]              
	struct FVector                                     vDownLoc;                                         		// 0x0354 (0x000C) [0x0000000000000000]              
	struct FString                                     sCharacterName;                                   		// 0x0360 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCharacterData;                                   		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iFlag;                                            		// 0x0378 (0x0004) [0x0000000000000000]              
	int                                                iMurderCount;                                     		// 0x037C (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlive : 1;                                       		// 0x0380 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1514 ];

		return pClassPointer;
	};

	void eventSetCharacterSize ( float fSize );
	void GenerateMeshes ( );
	void eventTick ( float fDeltaTime );
	void TickInitAnimation ( float fDeltaTime );
	void SmallStoneEffect ( class USkeletalMeshComponent* Component );
	void Hide ( );
	void DeleteAnim ( );
	void Delete ( );
	void DeSelect ( );
	void Select ( );
	void TriggerOutAnim ( );
	void eventDoOutAnimation ( );
	void eventDoInitAnimation ( );
	void PostBeginPlay ( );
	void ParseData ( );
	bool CanCustomize ( );
};

UClass* ACharacterSlot::pClassPointer = NULL;

// Class NowGame.CharacterSlotCreate
// 0x0014 (0x0398 - 0x0384)
class ACharacterSlotCreate : public ACharacterSlot
{
public:
	TArray< struct FsRaceIntPair >                     vRaceToInt;                                       		// 0x0384 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iRotationDelta;                                   		// 0x0390 (0x0004) [0x0000000000000000]              
	int                                                iRotated;                                         		// 0x0394 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1515 ];

		return pClassPointer;
	};

	void DeltaRotation ( int iRotation );
	void eventSetCharacterSize ( float fSize );
	int RaceToInt ( struct FString sString );
	void SelectedRaces ( struct FString sRace1, struct FString sRace2, struct FString sRace3, struct FString sRace4 );
	void SetRaceState ( int iNewState );
	void Select ( );
	void GenerateMeshes ( );
	void eventDoInitAnimation ( );
	void PlayCustom ( struct FName AnimName );
	void eventTick ( float fDeltaTime );
};

UClass* ACharacterSlotCreate::pClassPointer = NULL;

// Class NowGame.ChatManager
// 0x0170 (0x01AC - 0x003C)
class UChatManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    MyPawn;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FChatChannels                               Channels[ 0x15 ];                                 		// 0x0044 (0x0150) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iNrChan;                                          		// 0x0194 (0x0004) [0x0000000000000000]              
	float                                              cmdCooldown;                                      		// 0x0198 (0x0004) [0x0000000000000000]              
	float                                              chatCooldown;                                     		// 0x019C (0x0004) [0x0000000000000000]              
	TArray< struct FMessageLog >                       MsgLog;                                           		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1516 ];

		return pClassPointer;
	};

	bool eventIsValidName ( struct FString sName, int iMaxChar );
	void DoWhoSetSurname ( TArray< struct FString > msgParts );
	class AWorldInfo* GetWorldInfo ( );
	void CmdMurderCount ( );
	void CmdTestmode ( );
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
	bool HandleTSCommand ( struct FString sCommand, TArray< struct FString > messageparts );
	bool HandleDebugCommand ( struct FString sCommand, TArray< struct FString > messageparts );
	void CmdMod ( struct FString sCommand, struct FString sMessage, unsigned long bIgnoreMeParse );
	struct FString CheckCommandForMeAndTgt ( struct FString sMessage, unsigned long bIgnoreMeParse );
	void CmdCast ( struct FString sCommand );
	void CmdSkill ( struct FString sCommand );
	void CmdEmote ( struct FString sCommand );
	void CmdOrder ( struct FString sCommand );
	void CmdOptions ( struct FString sCommand );
	void HandleOutgoingCommand ( struct FString sMessage );
	bool CheckForChatSpam ( );
	bool CheckForCommandSpam ( float fMinTime );
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
	int eventGetLogMessageChannelIndex ( int iChannel );
	void LogMessage ( int iChannel, struct FString sMsg, struct FString sTalker );
	void ShowMessage ( int iChannel, struct FString sMsg, struct FString sTalker );
	void eventHandleIncomingMessage ( struct FString sMessage );
	void InitManager ( );
	void ToggleOculus ( );
	void ToggleUnitTimes ( );
	void ToggleFPS ( );
	void DropLoot ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1517 ];

		return pClassPointer;
	};

	void SetScreenColor ( struct FColor WhatColor );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
};

UClass* UClientEffect::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1518 ];

		return pClassPointer;
	};

	void NumberPress ( int iNumber );
	bool Escape ( );
	void RightClick ( );
	void LeftClick ( );
	void CanvasTick ( class UCanvas* C );
	bool PressedUse ( );
	void RemoveViewmode ( );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewMode::pClassPointer = NULL;

// Class NowGame.ClientViewModePackageMode
// 0x003C (0x008C - 0x0050)
class UClientViewModePackageMode : public UClientViewMode
{
public:
	int                                                iByteSentSec;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                iByteRecvSec;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                iByteSentAverage;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                iByteRecvAverage;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                iByteSentTotal;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                iByteRecvTotal;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< int >                                      vByteSent;                                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      vByteRecv;                                        		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      vPackageIDReceive;                                		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1519 ];

		return pClassPointer;
	};

	bool Escape ( );
	void CanvasTick ( class UCanvas* C );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
	void GetPackageData ( );
	void ResetPackageData ( );
};

UClass* UClientViewModePackageMode::pClassPointer = NULL;

// Class NowGame.ClientViewModeStructureBuild
// 0x00B8 (0x0108 - 0x0050)
class UClientViewModeStructureBuild : public UClientViewMode
{
public:
	class ANowStaticMeshActorSpawnable*                PreviewAOEActor;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                PreviewActor;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                HelperMesh;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x005C (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x0068 (0x000C) [0x0000000000000000]              
	class UStaticMesh*                                 PreviewMesh;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     NowOnlineSub;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                PlaceState;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOkMat : 1;                                       		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOKToPlace : 1;                                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	class UStaticMesh*                                 HelperMeshes[ 0x5 ];                              		// 0x0084 (0x0014) [0x0000000000000000]              
	struct FVector                                     vCollisionSize;                                   		// 0x0098 (0x000C) [0x0000000000000000]              
	struct FVector                                     vCornerAdd[ 0x4 ];                                		// 0x00A4 (0x0030) [0x0000000000000000]              
	class UParticleSystem*                             PlaceCornerParticle;                              		// 0x00D4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PlaceCornerSound;                                 		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              fInitalZ;                                         		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              fMaxMoveZ;                                        		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              fMinMoveZ;                                        		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              fMaxPitch;                                        		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              fMinPitch;                                        		// 0x00EC (0x0004) [0x0000000000000000]              
	struct FString                                     sPlaceErrorMsg;                                   		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           vMyConnectPoints;                                 		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1520 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	bool Escape ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	bool IsInGuildTerritory ( struct FVector vLoc );
	void CheckForPreviewAOEActor ( );
	float GetHouseAoeRange ( class ANowAtlasAvatarPlayerHouse* myHouse );
	bool VerifyPoint ( struct FVector WhatPoint, unsigned long bMessage );
	bool GroundPoint ( struct FVector* WhatPoint );
	void ResetPreviewMaterials ( );
	struct FVector GetPlacePoint ( );
	float CalcHeightAdd ( float fMouseY );
	bool CornerCheck ( struct FVector WhatPoint );
	void UpdateStructureHelpers ( );
	bool FinalPlaceStructureCheck ( );
	void Tick ( float DeltaTime );
	void InitPylonInfo ( );
	void SetDenyMat ( );
	void SetOkMat ( );
	void UpdateHelperMesh ( );
	void GiveStateMessage ( );
	void eventPlayPlaceEffect ( );
	bool CheckTouching ( );
	bool PressedUse ( );
	void AttachTo ( class AController* aController );
	void GetInfo ( );
};

UClass* UClientViewModeStructureBuild::pClassPointer = NULL;

// Class NowGame.ClientViewModeGateBuild
// 0x0024 (0x012C - 0x0108)
class UClientViewModeGateBuild : public UClientViewModeStructureBuild
{
public:
	TArray< struct FsWallConnect >                     WallConnectPoints;                                		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iWallConnectIndex;                                		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                iWallConnectIndexB;                               		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                iMyConnectPoint;                                  		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              fWallWidth;                                       		// 0x0120 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                LinkMeshA;                                        		// 0x0124 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                LinkMeshB;                                        		// 0x0128 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1521 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	struct FVector FindConnectPoint ( );
	struct FVector FindSecondConnectPoint ( );
	struct FVector FindMyConnectPoint ( struct FVector vCloseTo );
	void Tick ( float DeltaTime );
	struct FVector GetPlacePoint ( );
	void GiveStateMessage ( );
	bool Escape ( );
	void AttachTo ( class AController* aController );
	void eventPlayPlaceEffect ( );
	void GetWallConnectPoints ( );
	bool FinalPlaceStructureCheck ( );
	bool CheckTouching ( );
	bool PressedUse ( );
	void GetInfo ( );
};

UClass* UClientViewModeGateBuild::pClassPointer = NULL;

// Class NowGame.ClientViewModeMineBuild
// 0x001C (0x0124 - 0x0108)
class UClientViewModeMineBuild : public UClientViewModeStructureBuild
{
public:
	class ANowStaticMeshActorSpawnable*                LinkMesh;                                         		// 0x0108 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMineType;                                      		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_vStonePos;                                      		// 0x0118 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1522 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	bool CloseToStone ( );
	bool FinalPlaceStructureCheck ( );
	bool GroundPoint ( struct FVector* WhatPoint );
	void Tick ( float DeltaTime );
	bool PressedUse ( );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewModeMineBuild::pClassPointer = NULL;

// Class NowGame.ClientViewModePatrolSphereBuild
// 0x0004 (0x010C - 0x0108)
class UClientViewModePatrolSphereBuild : public UClientViewModeStructureBuild
{
public:
	class ANowStaticMeshActorSpawnable*                RadiusPreviewActor;                               		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1523 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void Tick ( float DeltaTime );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewModePatrolSphereBuild::pClassPointer = NULL;

// Class NowGame.ClientViewModeWallBuild
// 0x0024 (0x012C - 0x0108)
class UClientViewModeWallBuild : public UClientViewModeStructureBuild
{
public:
	TArray< struct FsWallConnect >                     WallConnectPoints;                                		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iWallConnectIndex;                                		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                iWallConnectIndexB;                               		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                iMyConnectPoint;                                  		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              fWallWidth;                                       		// 0x0120 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                LinkMeshA;                                        		// 0x0124 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                LinkMeshB;                                        		// 0x0128 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1524 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	struct FVector FindConnectPoint ( );
	struct FVector FindSecondConnectPoint ( );
	struct FVector FindMyConnectPoint ( struct FVector vCloseTo );
	void Tick ( float DeltaTime );
	struct FVector GetPlacePoint ( );
	void GiveStateMessage ( );
	bool Escape ( );
	void AttachTo ( class AController* aController );
	void eventPlayPlaceEffect ( );
	void GetWallConnectPoints ( );
	bool FinalPlaceStructureCheck ( );
	bool CheckTouching ( );
	bool PressedUse ( );
	void GetInfo ( );
};

UClass* UClientViewModeWallBuild::pClassPointer = NULL;

// Class NowGame.ClientViewModeTSNpcPlace
// 0x003C (0x008C - 0x0050)
class UClientViewModeTSNpcPlace : public UClientViewMode
{
public:
	class UStaticMesh*                                 GhostMesh;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      PreviewMesh;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              UpdateSelectTimer;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                ActiveSlot;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< class ANowAtlasAvatarTerritoryStructure* > vTerritoryStructures;                             		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      vSlotIndex;                                       		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPlaceOnlyOnGuid;                                 		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1525 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void UpdateSelected ( );
	void Tick ( float DeltaTime );
	bool FindTerritoryStructures ( );
	void AttachTo ( class AController* aController );
	int GetSlot ( );
	bool PressedUse ( );
	void GetItemData ( );
};

UClass* UClientViewModeTSNpcPlace::pClassPointer = NULL;

// Class NowGame.ClientViewModeTSUpgradeTier
// 0x002C (0x007C - 0x0050)
class UClientViewModeTSUpgradeTier : public UClientViewMode
{
public:
	class UStaticMesh*                                 GhostMesh;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      PreviewMesh;                                      		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              UpdateSelectTimer;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                ActiveSlot;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTierUpgrade : 1;                                 		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	class UStaticMesh*                                 pUpgradeMesh;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	struct FString                                     sTargetContentGuid;                               		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1526 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void UpdateSelected ( );
	void Tick ( float DeltaTime );
	bool FindTerritoryStructures ( );
	void SetAllMaterials ( class ANowStaticMeshActorSpawnable* aStructure, class UMaterialInstanceConstant* NewMat );
	void AttachTo ( class AController* aController );
	int GetSlot ( );
	bool PressedUse ( );
	void IniteTSUpgradeTier ( );
};

UClass* UClientViewModeTSUpgradeTier::pClassPointer = NULL;

// Class NowGame.CombatSystemNew
// 0x0014 (0x0050 - 0x003C)
class UCombatSystemNew : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  MyWorldInfo;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              StartNewMoveTimer;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDebugTraces : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugInfo : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	class ANowPawn*                                    PawnOwner;                                        		// 0x004C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1527 ];

		return pClassPointer;
	};

	class ANowPawn* eventGetNowPawn ( );
	void TickCombat ( float DeltaTime );
	float GetTimerCount ( struct FName inTimerFunc, class UObject* inObj );
	bool IsTimerActive ( struct FName inTimerFunc, class UObject* inObj );
	void ClearTimer ( struct FName inTimerFunc, class UObject* inObj );
	void SetTimer ( float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj );
	int ReturnHitInfo ( class UPhysicsAsset* TestPhys, struct FName HitBone, class AActor* HitActor );
	int getHitPart ( class AActor* HitActor, struct FVector StartTrace, struct FVector EndTrace, struct FVector HitLoc, struct FTraceHitInfo* HitInfo );
	void AttachTo ( class AController* aController );
	void ClientHitFeedback ( unsigned long bStructure, unsigned long bBlocked );
	void DrawDebugInfo ( class UCanvas* C );
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
	void UseFireOnWeapon ( );
	void StartClientAnimations ( struct FString WhatAction, float AnimRate );
};

UClass* UCombatSystemNew::pClassPointer = NULL;

// Class NowGame.CombatSystemFishingNew
// 0x0078 (0x00C8 - 0x0050)
class UCombatSystemFishingNew : public UCombatSystemNew
{
public:
	float                                              MINCHARGETIME;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              MAXCHARGETIME;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              MINPULLTIMER;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              MAXJIGGLETIMER;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              MAXTUGREPEAT;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              TUGRESULTTIMER;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              MINTHROWLENGTH;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              Timer;                                            		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              TugTimer;                                         		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              TimerValue;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned char                                      eCurState;                                        		// 0x0078 (0x0001) [0x0000000000000000]              
	class ANowProjectileFishing*                       FishProjectile;                                   		// 0x007C (0x0004) [0x0000000000000000]              
	struct FVector                                     StartShot;                                        		// 0x0080 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndShot;                                          		// 0x008C (0x000C) [0x0000000000000000]              
	struct FRotator                                    viewPointRotator;                                 		// 0x0098 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartFishLocation;                                		// 0x00A4 (0x000C) [0x0000000000000000]              
	float                                              MaxThrow;                                         		// 0x00B0 (0x0004) [0x0000000000000000]              
	class AController*                                 C;                                                		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UNewTugSession*                              m_TugSession;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_NowPC;                                          		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerPulls : 1;                                 		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFishPulls : 1;                                   		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              dPlayerTime;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1528 ];

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
// 0x0010 (0x0060 - 0x0050)
class UCombatSystemMagicNew : public UCombatSystemNew
{
public:
	unsigned long                                      bReadyToFire : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCharging : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHoldingMouse : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	class UParticleSystemComponent*                    MainEffectEmitter;                                		// 0x0054 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UNowSpellLight*                              SpellLight;                                       		// 0x0058 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastGCDTime;                                      		// 0x005C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1529 ];

		return pClassPointer;
	};

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
	void DrawDebugInfo ( class UCanvas* C );
};

UClass* UCombatSystemMagicNew::pClassPointer = NULL;

// Class NowGame.CombatSystemMeleeNew
// 0x00F4 (0x0144 - 0x0050)
class UCombatSystemMeleeNew : public UCombatSystemNew
{
public:
	class UParticleSystemComponent*                    TrailPSCRight;                                    		// 0x0050 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    TrailPSCLeft;                                     		// 0x0054 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bBlocking : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBloodTrailOn : 1;                                		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBloodTrailRight : 1;                             		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBluntClientEffectRight : 1;                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bBluntClientEffectLeft : 1;                       		// 0x0058 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bTraceFromLeftSocket : 1;                         		// 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPendingRelease : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPendingHitDetect : 1;                            		// 0x0058 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bCombatMoveTrace : 1;                             		// 0x0058 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bCombatMoveDual : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bWaitingForChargeDone : 1;                        		// 0x0058 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bDidHit : 1;                                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bHandleHit : 1;                                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDebugWeaponLength : 1;                           		// 0x0058 (0x0004) [0x0000000000000000] [0x00002000] 
	struct FVector                                     vWeaponTipLastLocation;                           		// 0x005C (0x000C) [0x0000000000000000]              
	struct FVector                                     LastHitLoc;                                       		// 0x0068 (0x000C) [0x0000000000000000]              
	float                                              fTrailTimer;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                LastAnim;                                         		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              HoldStart;                                        		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              ReleaseStart;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              HitDetectionTimer;                                		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              HitDetectionTimerFull;                            		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              MidTimer;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              WeaponRightLength;                                		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              WeaponLeftLength;                                 		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              WeaponRightHeadWidthOffset;                       		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              WeaponLeftHeadWidthOffset;                        		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              WeaponRightLengthHandle;                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              WeaponLeftLengthHandle;                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              RightStaminaDrain;                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              LeftStaminaDrain;                                 		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              RightAttackSpeed;                                 		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              LeftAttackSpeed;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              MIN_WEAPON_SPEED_UE3;                             		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              RELEASE_SPEED_MULTI_UE3;                          		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              LastBlockTimer;                                   		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              LastSwingTimer;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FVector                                     CachedTrace;                                      		// 0x00C8 (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedTraceB;                                     		// 0x00D4 (0x000C) [0x0000000000000000]              
	struct FVector                                     ForceTraceStart;                                  		// 0x00E0 (0x000C) [0x0000000000000000]              
	struct FVector                                     ForceTraceEnd;                                    		// 0x00EC (0x000C) [0x0000000000000000]              
	int                                                ChargePower;                                      		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                iHandleHitForce;                                  		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              ChargeCompleteTimer;                              		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              CounterTimer;                                     		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              ArmIKStr;                                         		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              SavedIKEndLength;                                 		// 0x010C (0x0004) [0x0000000000000000]              
	TArray< struct FPendingCombatMoves >               ActiveCombatMoves;                                		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            CombatTargets;                                    		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowStaticMeshActorWeapon*                   pRightWeapon;                                     		// 0x0128 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorWeapon*                   pLeftWeapon;                                      		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              fHardCharge;                                      		// 0x0130 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      pMeleeMountAim;                                   		// 0x0134 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortDel__Delegate;                              		// 0x0138 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1530 ];

		return pClassPointer;
	};

	void ExitMode ( );
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
	void CheckMountThrustCollision ( );
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
	void UpdateMeleeMountAim ( );
	void ResetMeleeMountAim ( );
	void GetMeleeMountAim ( );
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

// Class NowGame.CombatSystemRangedNew
// 0x0118 (0x0168 - 0x0050)
class UCombatSystemRangedNew : public UCombatSystemNew
{
public:
	unsigned long                                      bReadyToFire : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCharging : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHoldingMouse : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDidHit : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDidHitGround : 1;                                		// 0x0050 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bMinCharge : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPerfectCharge : 1;                               		// 0x0050 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverCharge : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bMaxCharge : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bShortBow : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              Gravity;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              fFocusTimer;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              fHoldTimer;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              fChargeReadyTimer;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FRotator                                    viewPointRotator;                                 		// 0x0068 (0x000C) [0x0000000000000000]              
	int                                                traceCounter;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                HitPart;                                          		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                shotLength;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                totalTraces;                                      		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                iAimingTechnique;                                 		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                iControlledAiming;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              BowMaxRange;                                      		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              StrengthReq;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              FocusTime;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              DrawSpeed;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              StaminaHoldTick;                                  		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              rawBowRange;                                      		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              MINCHARGETIME;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x00A8 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FTraceHitInfo                               HitInfo2;                                         		// 0x00C4 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     HitLocationCached;                                		// 0x00E0 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x00EC (0x000C) [0x0000000000000000]              
	struct FVector                                     StartShot;                                        		// 0x00F8 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndShot;                                          		// 0x0104 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartShotRandomized;                              		// 0x0110 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndShotRandomized;                                		// 0x011C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitLoc;                                           		// 0x0128 (0x000C) [0x0000000000000000]              
	struct FVector                                     arcHitLoc;                                        		// 0x0134 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           instaTracePoints;                                 		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    lengthToTracePoint;                               		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FarrowVelocity                              arrowVel;                                         		// 0x0158 (0x000C) [0x0000000000000000]              
	class UAnimNodeBlendList*                          Ranged_Charged;                                   		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1531 ];

		return pClassPointer;
	};

	void TickAim ( float DeltaTime );
	void ResetShakeBlend ( );
	void setProjectileVars ( int* shotSpeed, struct FVector* shotDir );
	void resetEverything ( );
	void TickAndCalcNewVelocity ( );
	void BreathOut ( );
	void BreathIn ( );
	void StopAltFire ( unsigned long bForce );
	void StartAltFire ( );
	void CancelCharge ( );
	void ExitMode ( );
	float modifyMaxRangeFromChargeTime ( );
	float getPercentOfStrengthReq ( );
	float getStrength ( );
	void HandlePawnHit ( int iHitPart, class AActor* pTarget );
	void registerProjectileHit ( class AActor* pHitActorTmp, struct FTraceHitInfo hitInfoTmp, struct FVector StartTrace, struct FVector EndTrace, struct FVector HitLocTmp );
	struct FName PhatTrace ( class USkeletalMeshComponent* SkelMeshComp, struct FVector vStartTrace, struct FVector vEndTrace );
	void registerProjectileLanded ( struct FVector HitLocTmp );
	void GetPossiblePlayerTargets ( TArray< class AActor* >* vPawns );
	void StopFire ( unsigned long TargetSelf );
	void ChargeReady ( );
	void setChargeTimesinHUD ( );
	void StartFire ( );
	void GetShakeBlendNodes ( );
	void TickStaminaDrain ( );
	void AttachTo ( class AController* aController );
	void eventUpdateWeaponStats ( class APawn* MyPawn );
	void TickCombat ( float DeltaTime );
	void UseFireOnWeapon ( );
};

UClass* UCombatSystemRangedNew::pClassPointer = NULL;

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
	unsigned long                                      bLoginScreenClosed : 1;                           		// 0x0048 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              LongTimeLoadingTimer;                             		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fClosedLoginScreenTime;                           		// 0x0050 (0x0004) [0x0000000000000000]              
	class UNowGFXSceneLoading*                         LoadSceneGFX;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                OldLoadingState;                                  		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1532 ];

		return pClassPointer;
	};

	class UNowGFXHudScene* GetGFXHud ( );
	bool CheckConnection ( float DeltaTime );
	void Tick ( float DeltaTime );
	void ResetManager ( );
	bool eventLoginScreenIsClosed ( );
	bool eventLoginScreenHasBeenClose ( float fHowLong );
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

// Class NowGame.MagicMeshFX
// 0x0029 (0x0065 - 0x003C)
class UMagicMeshFX : public UObject
{
public:
	class AActor*                                      pOwner;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   pTriggerSound;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pParticleSystem;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      pOwnerComponent;                                  		// 0x0048 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FName >                             vAttachBoneNames;                                 		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UParticleSystemComponent* >          vParticleSystemComponents;                        		// 0x0058 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      eMagicMeshFXEnum;                                 		// 0x0064 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1533 ];

		return pClassPointer;
	};

	bool HandleStacking ( );
	void AddParticleEffects ( );
	void SetHidden ( unsigned long bHidden );
	void RemoveEffect ( );
	void StartEffect ( class AActor* pNewOwner );
};

UClass* UMagicMeshFX::pClassPointer = NULL;

// Class NowGame.MainMenuManager
// 0x0024 (0x0060 - 0x003C)
class UMainMenuManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class ACharacterSlot*                              vCharacterSlotActors[ 0x4 ];                      		// 0x0040 (0x0010) [0x0000000000000000]              
	class UNowGFXSceneMainMenu*                        MainMenu;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                iMaxSlots;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                iSelected;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLogOut : 1;                                      		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1534 ];

		return pClassPointer;
	};

	void eventInitAllSlots ( );
	void ResetSlots ( );
	void FindCharacterSlots ( );
	void eventSetSlots ( int iSlots );
	void SelectCharacterByIndex ( int iSlot );
	void DeleteCharacter ( struct FString sName );
	void SelectCharacter ( struct FString sName );
	void OpenMainMenu ( );
	void InitManager ( );
	void AvatarCreated ( );
	void BadAvatarName ( );
	void DoCreateCharacter ( );
	void DoDeleteCharacter ( struct FString sName );
};

UClass* UMainMenuManager::pClassPointer = NULL;

// Class NowGame.MortalBossFireEmitterSpawnable
// 0x0000 (0x02F8 - 0x02F8)
class AMortalBossFireEmitterSpawnable : public AEmitterSpawnable
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

	void PostBeginPlay ( );
};

UClass* AMortalBossFireEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalBossPortalEmitterSpawnable
// 0x0004 (0x02FC - 0x02F8)
class AMortalBossPortalEmitterSpawnable : public AEmitterSpawnable
{
public:
	class UAudioComponent*                             AudioComponent;                                   		// 0x02F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

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

UClass* AMortalBossPortalEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalCloudEmitter
// 0x003C (0x0330 - 0x02F4)
class AMortalCloudEmitter : public AEmitter
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     LocationName;                                     		// 0x02F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      Drifting : 1;                                     		// 0x0304 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UParticleSystemComponent*                    ParticleSystemComponentLightClouds;               		// 0x0308 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponentMeduimClouds;              		// 0x030C (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponentHeavyClouds;               		// 0x0310 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSystemComponentLightningClouds;           		// 0x0314 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	int                                                LocationNbr;                                      		// 0x0318 (0x0004) [0x0000000000000000]              
	int                                                clouds;                                           		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                NewClouds;                                        		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                Rain;                                             		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                NewRain;                                          		// 0x0328 (0x0004) [0x0000000000000000]              
	int                                                WindDirection;                                    		// 0x032C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1537 ];

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
// 0x0020 (0x0310 - 0x02F0)
class AMortalExponentialHeightFog : public AExponentialHeightFog
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              LightInscatteringBrightnessNight;                 		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OppositeLightBrightnessNight;                     		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultLightInscatteringBrightness;               		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              DefaultOppositeLightBrightness;                   		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              fMaxZHeight;                                      		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      pBase;                                            		// 0x0308 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOffBase : 1;                                     		// 0x030C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1538 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void eventTick ( float DeltaTime );
	void PostponedBase ( );
	void Notify ( class UObservable* Src );
	void Update ( float PartOfDay, float SunRiseAt );
	void BaseAndLocateOnActor ( class AActor* Other );
};

UClass* AMortalExponentialHeightFog::pClassPointer = NULL;

// Class NowGame.MortalGibEmitterSpawnable
// 0x0004 (0x02FC - 0x02F8)
class AMortalGibEmitterSpawnable : public AEmitterSpawnable
{
public:
	class UAudioComponent*                             AudioComponent;                                   		// 0x02F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1539 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AMortalGibEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalGolemDeathEffectSpawner
// 0x0000 (0x02F8 - 0x02F8)
class AMortalGolemDeathEffectSpawner : public AEmitterSpawnable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1540 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AMortalGolemDeathEffectSpawner::pClassPointer = NULL;

// Class NowGame.MortalLightning
// 0x0024 (0x030C - 0x02E8)
class AMortalLightning : public AActor
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02E8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     LocationName;                                     		// 0x02EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystemComponent*                    ParticleSystemComponent;                          		// 0x02F8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioComponent;                                   		// 0x02FC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ULightComponent*                             LightComponent;                                   		// 0x0300 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      Lightning : 1;                                    		// 0x0304 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LocationNumber;                                   		// 0x0308 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1541 ];

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
// 0x0030 (0x0328 - 0x02F8)
class AMortalRainSnowEmitterSpawnable : public AEmitterSpawnable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UParticleSystemComponent*                    ParticleHeavySnow;                                		// 0x02FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleSnow;                                     		// 0x0300 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleLightSnow;                                		// 0x0304 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleLightRain;                                		// 0x0308 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleRain;                                     		// 0x030C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ParticleHeavyRain;                                		// 0x0310 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioLightRain;                                   		// 0x0314 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioRain;                                        		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioHeavyRain;                                   		// 0x031C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              SoundFadeTime;                                    		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                Rain;                                             		// 0x0324 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1542 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Deactivate ( );
	void Notify ( class UObservable* Src );
};

UClass* AMortalRainSnowEmitterSpawnable::pClassPointer = NULL;

// Class NowGame.MortalSceneCaptureCubeMapActor
// 0x0000 (0x02F4 - 0x02F4)
class AMortalSceneCaptureCubeMapActor : public ASceneCaptureCubeMapActor
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

	void Destroyed ( );
	void PostBeginPlay ( );
	void PostponedBase ( );
	void BaseAndLocateOnActor ( class AActor* Other );
};

UClass* AMortalSceneCaptureCubeMapActor::pClassPointer = NULL;

// Class NowGame.MortalSunDominantDirectionalLightMovable
// 0x0034 (0x0324 - 0x02F0)
class AMortalSunDominantDirectionalLightMovable : public ADominantDirectionalLightMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              YawOffset;                                        		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Sunrise;                                          		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Daytime;                                          		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Sunset;                                           		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxIntensity;                                     		// 0x0304 (0x0004) [0x0000000000000000]              
	struct FRotator                                    Rotate;                                           		// 0x0308 (0x000C) [0x0000000000000000]              
	float                                              CloudFactor;                                      		// 0x0314 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFirstRun : 1;                                    		// 0x0318 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxBloom;                                         		// 0x031C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x0320 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1544 ];

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
// 0x0020 (0x0314 - 0x02F4)
class AMortalWeatherFogVolumeSphericalDensityInfo : public AFogVolumeSphericalDensityInfo
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     LocationName;                                     		// 0x02F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UFogVolumeDensityComponent*                  DensityComponentLow;                              		// 0x0304 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UFogVolumeDensityComponent*                  DensityComponentMeduim;                           		// 0x0308 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UFogVolumeDensityComponent*                  DensityComponentHigh;                             		// 0x030C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                LocationNbr;                                      		// 0x0310 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1545 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void PostBeginPlay ( );
	void Notify ( class UObservable* Src );
};

UClass* AMortalWeatherFogVolumeSphericalDensityInfo::pClassPointer = NULL;

// Class NowGame.MortalWeatherPostProcessVolume
// 0x054C (0x09CC - 0x0480)
class AMortalWeatherPostProcessVolume : public APostProcessVolume
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x0480 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                LocationNbr;                                      		// 0x0484 (0x0004) [0x0000000000000000]              
	struct FPostProcessSettings                        SettingsSunshine;                                 		// 0x0488 (0x0150) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SettingsNormalClouds;                             		// 0x05D8 (0x0150) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SettingsHeavyClouds;                              		// 0x0728 (0x0150) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SettingsStormClouds;                              		// 0x0878 (0x0150) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Weather;                                          		// 0x09C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1546 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void AddToPlayer ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1547 ];

		return pClassPointer;
	};

};

UClass* UMount_AnimNodeBlendDriverCombat::pClassPointer = NULL;

// Class NowGame.Mount_AnimNodeScaleRateBySpeed
// 0x0000 (0x0108 - 0x0108)
class UMount_AnimNodeScaleRateBySpeed : public UAnimNodeScaleRateBySpeed
{
public:

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1549 ];

		return pClassPointer;
	};

};

UClass* UMount_NowAnimNodeBlendBySpeed::pClassPointer = NULL;

// Class NowGame.MountBrain
// 0x0134 (0x0170 - 0x003C)
class UMountBrain : public UObject
{
public:
	class ANowAtlasAvatarAiMountDynamic*               Mount;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    Driver;                                           		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInWater : 1;                                     		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpeedTicked : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bJustDrowned : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDebugTraces : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                LastKnownSpeed;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                iThrottleTarget;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                iThrottleCurrent;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              fBoostTimer;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              fKnockTimer;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              SpeedInputTimer;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                SpeedStyle;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              ThrottleTimer;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              ThrottleTimerTarget;                              		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              KnockTimer;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              DamageTimer;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              DamageTaken;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              LastDrowningTimer;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              Enc;                                              		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              Enc_Mod;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              Enc_Add;                                          		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              TurnInputTimer;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                TurnStyle;                                        		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              NewCurSpeed;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x0094 (0x000C) [0x0000000000000000]              
	float                                              RotationPitch;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              RotationPitchTarget;                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              LastRotationPitch;                                		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              fManToMountAnimTimer;                             		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                stat_Strength;                                    		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                stat_Dexterity;                                   		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                stat_Constitution;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                stat_Psyche;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                stat_Intelligence;                                		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                Stat_MaxSpeed;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                Stat_MinSpeed;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              Stat_FearPct;                                     		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              Stat_StaminaPct;                                  		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                Stat_Brain;                                       		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnTweenTime;                               		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedTweenTime;                              		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              Stat_BreakTweenTime;                              		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnSharpTweenTime;                          		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedSharpTweenTime;                         		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              Stat_BreakSharpTweenTime;                         		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnStepSize;                                		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedStepSize;                               		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              Stat_BreakStepSize;                               		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnSharpStepSize;                           		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedSharpStepSize;                          		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              Stat_Jump;                                        		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              Break_Pct;                                        		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              Stat_KnockChance;                                 		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              Stat_SpeedExecTime;                               		// 0x0110 (0x0004) [0x0000000000000000]              
	float                                              Stat_TurnExecTime;                                		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              Stat_BoostSpeed;                                  		// 0x0118 (0x0004) [0x0000000000000000]              
	float                                              Stat_BoostDrain;                                  		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              Stat_BoostTimer;                                  		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              Stat_Stamina;                                     		// 0x0124 (0x0004) [0x0000000000000000]              
	float                                              Mod_Sight;                                        		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              Mod_StamPct;                                      		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              Mod_Saddle;                                       		// 0x0130 (0x0004) [0x0000000000000000]              
	float                                              CntrlMod;                                         		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              SwiftMod;                                         		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              RidingMod;                                        		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              MountSpeed[ 0x4 ];                                		// 0x0140 (0x0010) [0x0000000000000000]              
	float                                              MountRotation[ 0x4 ];                             		// 0x0150 (0x0010) [0x0000000000000000]              
	float                                              ThrottleTimerTargets[ 0x4 ];                      		// 0x0160 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1550 ];

		return pClassPointer;
	};

	float GetMountJumpZ ( );
	void eventdebugLog ( struct FString whatLog );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawHudDebug ( );
	void Bump ( class ANowPawn* P );
	bool CheckForFall ( float Difficulty );
	void SetThrottleTimer ( );
	bool SetSpeedInputTimer ( );
	void ManToMountAnim ( int iIndex, float fTime );
	void CmdFullSpeedDown ( );
	void CmdFullSpeedUp ( );
	void CmdSpeedDown ( );
	void CmdSpeedUp ( );
	void CmdTurnLeft ( float fDeltaTime );
	void CmdTurnRight ( float fDeltaTime );
	float GetTurnAmount ( );
	class UOnlineSubsystemNowGame* eventGetSubSystem ( );
	class ANowPlayerController* eventGetNowPC ( );
	void eventCalcStats ( );
	void TickDebug ( float DT );
	struct FVector GetDir ( int AddYaw );
	struct FVector GetStartTrace ( );
	void AddDamageTaken ( float Value );
	bool CheckKnockSpeed ( );
	bool CheckHeadUnderWater ( struct FVector AddVect );
	bool LeaveMountOk ( );
	struct FVector SwimmingCorrect ( struct FVector ATrace );
	void FullStop ( );
	void PanicStop ( );
	float GetMaxSpeed ( );
	int GetSpeed ( );
	struct FRotator GetDeltaRot ( );
	void TickPitch ( float DT );
	void TickCheckStamina ( float DT );
	void TickThrottle ( float DT );
	void TickKnockTimer ( float DT );
	void TickDamageTimer ( float DT );
	void TickBody ( float DT );
	void TickDrowningTimer ( float DT );
	float GetStaminaReGain ( );
	float GetStaminaDrain ( );
	void Tick ( float DT );
	class ANowPawn* GetDriver ( );
	void InitBrain ( class ANowAtlasAvatarAiMountDynamic* NewMount );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1551 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1552 ];

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
// 0x0024 (0x0348 - 0x0324)
class ANowAiEffect : public AProjectile
{
public:
	class UStaticMesh*                                 m_AiStaticMesh;                                   		// 0x0324 (0x0004) [0x0000000000000000]              
	struct FName                                       m_SocketName;                                     		// 0x0328 (0x0008) [0x0000000000000000]              
	struct FVector                                     m_SpawnPosOffset;                                 		// 0x0330 (0x000C) [0x0000000000000000]              
	class ANowAtlasAvatarAi*                           m_pOwner;                                         		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              m_sStaticMeshDrawScale;                           		// 0x0340 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bUseForBlocking : 1;                            		// 0x0344 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1553 ];

		return pClassPointer;
	};

	void SetTargetActor ( class AActor* NewActor );
	void SetTargetVect ( struct FVector NewVector );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffect::pClassPointer = NULL;

// Class NowGame.NowAiIdleSpot
// 0x0030 (0x0318 - 0x02E8)
class ANowAiIdleSpot : public AActor
{
public:
	struct FRotator                                    m_IdleRotation;                                   		// 0x02E8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fRadius;                                        		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eIdleAnimation;                                 		// 0x02F8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_AiEffect;                                       		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      m_PreviewComp;                                    		// 0x0308 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             m_ArrowComp;                                      		// 0x030C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          m_CylinderComp;                                   		// 0x0310 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UMaterial*                                   m_PreviewMat;                                     		// 0x0314 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1554 ];

		return pClassPointer;
	};

	void UpdateHelpers ( );
};

UClass* ANowAiIdleSpot::pClassPointer = NULL;

// Class NowGame.NowAmbientSoundMovableDayNight
// 0x0010 (0x0304 - 0x02F4)
class ANowAmbientSoundMovableDayNight : public AAmbientSoundMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UAudioComponent*                             AudioComponentDay;                                		// 0x02F8 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioComponentNight;                              		// 0x02FC (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	unsigned long                                      IsDay : 1;                                        		// 0x0300 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsDownpour : 1;                                   		// 0x0300 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1555 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void SetDayTime ( );
};

UClass* ANowAmbientSoundMovableDayNight::pClassPointer = NULL;

// Class NowGame.NowAmbientSoundSimpleToggleableDayNight
// 0x0008 (0x031C - 0x0314)
class ANowAmbientSoundSimpleToggleableDayNight : public AAmbientSoundSimpleToggleable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x0314 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DuringDay : 1;                                    		// 0x0318 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DuringNight : 1;                                  		// 0x0318 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x0318 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsPlaying : 1;                                    		// 0x0318 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      DoPlay : 1;                                       		// 0x0318 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1556 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void SetDay ( );
};

UClass* ANowAmbientSoundSimpleToggleableDayNight::pClassPointer = NULL;

// Class NowGame.NowAmbientSunLight
// 0x0030 (0x0320 - 0x02F0)
class ANowAmbientSunLight : public ASkyLightToggleable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              MaxIntensity;                                     		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TwilightIntensity;                                		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NightIntensity;                                   		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NyxIntensity;                                     		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      DayColor;                                         		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      NightColor;                                       		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultLowerBrightness;                           		// 0x030C (0x0004) [0x0000000000000000]              
	float                                              CloudFactor;                                      		// 0x0310 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoLightHack : 1;                                 		// 0x0314 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fLastBrightness;                                  		// 0x0318 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x031C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1557 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void AddToPlayer ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1558 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1559 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1560 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1561 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1562 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1563 ];

		return pClassPointer;
	};

};

UClass* UNowAnimNodeSequenceBlendByAim::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatar
// 0x003F (0x03AC - 0x036D)
class ANowAtlasAvatar : public AAtlasAvatar
{
public:
	unsigned long                                      bIsMount : 1;                                     		// 0x0370 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanDie : 1;                                      		// 0x0370 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIgnoreParamUpdates : 1;                          		// 0x0370 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHiddenInEtherworlds : 1;                         		// 0x0370 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHasBeenPlaced : 1;                               		// 0x0370 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasAi : 1;                                       		// 0x0370 (0x0004) [0x0000000000000000] [0x00000020] 
	class UParticleSystem*                             HitBlood;                                         		// 0x0374 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BlockSparks;                                      		// 0x0378 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodSpray_Head;                                  		// 0x037C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodSpray_Arms;                                  		// 0x0380 (0x0004) [0x0000000000000000]              
	class UAtlasAvatarComponent*                       m_AvatarComponent;                                		// 0x0384 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       GenericHitBone;                                   		// 0x0388 (0x0008) [0x0000000000000000]              
	float                                              LastKnownHealth;                                  		// 0x0390 (0x0004) [0x0000000000000000]              
	int                                                GuildFlag;                                        		// 0x0394 (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerEffectLoc;                                  		// 0x0398 (0x000C) [0x0000000000000000]              
	class AActor*                                      ServerEffectTarget;                               		// 0x03A4 (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x03A8 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1564 ];

		return pClassPointer;
	};

	void eventFindGoodSpot ( struct FVector StartLoc, int iter );
	void eventPendingFindGoodSpot ( );
	void eventTriggerProjectileEffect ( class UClass* ProjClass, struct FName BoneName );
	void eventAnimEffectTarget ( class AActor* Target );
	void eventAnimEffectVector ( struct FVector Loc );
	void eventSetTurn ( struct FRotator NewRot );
	struct FVector GetCollisionExtent ( );
	float GetHeight ( );
	float eventGetCollisionHeight ( );
	float eventGetCollisionRadius ( );
	void eventResurrect ( );
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventCheckForDecalSpawn ( float DmgTaken );
	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
	int Degree ( float DG );
	float GetFloatVal ( struct FString crc );
	void PostBeginPlay ( );
	void eventSetLocalFlag ( int NewFlag );
	void eventChangedDisplayName ( );
	int eventGetGuildFlag ( );
	void eventSetPendingHidden ( unsigned long bStart );
	void eventClearPendingGetAndCreateBody ( );
	void eventSetPendingGetAndCreateBody ( );
	void eventOpenGFXScene ( int iGfxScene );
	int GetAiTaxes ( );
	int GetHealthMax ( );
	int GetHealth ( );
	struct FString GetContentGuid ( );
	void ForceLocation ( struct FVector vNewLoc );
	void SetComponent ( class UActorComponent* NewAtlasComponent );
	void GetAndSetInteractionString ( );
	int GetAiIdentification ( );
	void SetContentInfo ( class UContentInfo* Info );
	void GetAndCreateBodyFinished ( );
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
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarAiSpawner : public ANowAtlasAvatar
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

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarAiSpawner::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiSpawnerStructure
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarAiSpawnerStructure : public ANowAtlasAvatarAiSpawner
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1566 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarAiSpawnerStructure::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEditorOnly
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarEditorOnly : public ANowAtlasAvatar
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

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarEditorOnly::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEvent
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarEvent : public ANowAtlasAvatar
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

	void eventDrawDebug ( float fRange );
	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
	void PostBeginPlay ( );
	void ShowDebug ( );
};

UClass* ANowAtlasAvatarEvent::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerStructure
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarPlayerStructure : public ANowAtlasAvatar
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

	void eventPlayKeySound ( );
	void useKey ( struct FString ItemGuid );
	float getHouseParamFloat ( struct FString ParamName );
	void SetContentInfo ( class UContentInfo* Info );
};

UClass* ANowAtlasAvatarPlayerStructure::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarKeySwitchObject
// 0x0018 (0x03C4 - 0x03AC)
class ANowAtlasAvatarKeySwitchObject : public ANowAtlasAvatarPlayerStructure
{
public:
	unsigned long                                      m_bObjectLockState : 1;                           		// 0x03AC (0x0004) [0x0000000000000000] [0x00000001] 
	class UContentInfo_KeySwitchObject*                m_ObjectContentInfo;                              		// 0x03B0 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_InteractionMesh;                                		// 0x03B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowBlockingVolume*                          m_BlockingVolume;                                 		// 0x03B8 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_NowPlayerOwner;                                 		// 0x03BC (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x03C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1570 ];

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
// 0x0000 (0x03C4 - 0x03C4)
class ANowAtlasAvatarKeySwitchObjectChest : public ANowAtlasAvatarKeySwitchObject
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

	bool eventisTargetingInteractionMesh ( );
	void useKey ( struct FString ItemGuid );
	bool Update ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarKeySwitchObjectChest::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarKeySwitchObjectDoor
// 0x0004 (0x03C8 - 0x03C4)
class ANowAtlasAvatarKeySwitchObjectDoor : public ANowAtlasAvatarKeySwitchObject
{
public:
	unsigned long                                      m_bObjectClosedState : 1;                         		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1572 ];

		return pClassPointer;
	};

	void useKey ( struct FString ItemGuid );
	bool Update ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarKeySwitchObjectDoor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerHouse
// 0x02D4 (0x0680 - 0x03AC)
class ANowAtlasAvatarPlayerHouse : public ANowAtlasAvatarPlayerStructure
{
public:
	struct FmoduleWorkBench                            m_modWorkBench[ 0x3 ];                            		// 0x03AC (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StartingMeshType;                                 		// 0x03DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_houseTypes[ 0x3 ];                              		// 0x03E0 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_TerrainNames[ 0x5 ];                            		// 0x0404 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FguildStonePos                              m_sGuildStonePosition;                            		// 0x0440 (0x0048) [0x0000000000000000]              
	struct FmoduleWorkBenchPos                         m_moduleWorkBenchPos;                             		// 0x0488 (0x0018) [0x0000000000000000]              
	unsigned long                                      bHasGuildStone : 1;                               		// 0x04A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInit : 1;                                        		// 0x04A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHouseCreated : 1;                                		// 0x04A0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_DoorOpen : 1;                                   		// 0x04A0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIsTarget : 1;                                    		// 0x04A0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bIsGhostMode : 1;                                 		// 0x04A0 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	class UStaticMeshComponent*                        m_HouseStatesMeshes[ 0x3 ];                       		// 0x04A4 (0x000C) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseSignMesh;                                  		// 0x04B0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_TerrainProps;                                   		// 0x04B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseProps;                                     		// 0x04B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_GuildStone;                                     		// 0x04BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FS_doors                                    m_HouseDoorMesh[ 0x5 ];                           		// 0x04C0 (0x0028) [0x0000000000080000]              ( CPF_Component )
	struct FS_House                                    m_HouseMesh[ 0x3 ];                               		// 0x04E8 (0x00D8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UNowStaticMeshcomponentDoor*                 m_HouseDoor[ 0x5 ];                               		// 0x05C0 (0x0014) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_HouseBase;                                      		// 0x05D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_Chest;                                          		// 0x05D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UStaticMeshComponent* >              m_Stairs;                                         		// 0x05DC (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UStaticMeshComponent* >              m_HouseSignMeshs;                                 		// 0x05E8 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UStaticMeshComponent* >              m_HouseChestMeshs;                                		// 0x05F4 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UStaticMeshComponent*                        m_ModuleMesh[ 0x3 ];                              		// 0x0600 (0x000C) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                B;                                                		// 0x060C (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_oldMaterial;                                    		// 0x0610 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_TerrainoldMaterial;                             		// 0x0614 (0x0004) [0x0000000000000000]              
	int                                                m_nDoor;                                          		// 0x0618 (0x0004) [0x0000000000000000]              
	int                                                m_CurrentHouseType;                               		// 0x061C (0x0004) [0x0000000000000000]              
	int                                                m_CurrentHouseTier;                               		// 0x0620 (0x0004) [0x0000000000000000]              
	int                                                m_nNrOfDoors;                                     		// 0x0624 (0x0004) [0x0000000000000000]              
	int                                                m_nNrOfStairs;                                    		// 0x0628 (0x0004) [0x0000000000000000]              
	int                                                iGuildStoneLevel;                                 		// 0x062C (0x0004) [0x0000000000000000]              
	struct FVector                                     Modules;                                          		// 0x0630 (0x000C) [0x0000000000000000]              
	struct FVector                                     moduleDoors;                                      		// 0x063C (0x000C) [0x0000000000000000]              
	struct FVector                                     moduleStairs;                                     		// 0x0648 (0x000C) [0x0000000000000000]              
	int                                                m_oldDoorVaule;                                   		// 0x0654 (0x0004) [0x0000000000000000]              
	int                                                m_rescourses;                                     		// 0x0658 (0x0004) [0x0000000000000000]              
	int                                                terrainRand;                                      		// 0x065C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_HouseStatus;                                    		// 0x0660 (0x0001) [0x0000000000000000]              
	int                                                m_chestTargeted;                                  		// 0x0664 (0x0004) [0x0000000000000000]              
	float                                              m_DecayTimer;                                     		// 0x0668 (0x0004) [0x0000000000000000]              
	class UPlayerHouse_ContentInfo*                    m_HouseContentInfo;                               		// 0x066C (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerHouseCollisionDoor*     m_CollisionVolume;                                		// 0x0670 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerHouseCollisionDoor*     m_ModuleCollisionVolume[ 0x3 ];                   		// 0x0674 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1573 ];

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
	class AActor* eventgetMesh ( int* iHitWorkbench );
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
	void setGuildStoneMesh ( int HouseTier );
	void eventSetGuildStoneLevel ( int iNewLevel, int HouseTier );
	void event_getHouseMesh ( );
	void eventsendMessageToClient ( struct FString Message );
	bool eventisPlayerHouseOwner ( );
	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
	void eventsetModWorkBench ( struct FString StaticMesh, struct FString module, int mod, struct FString workBenchType );
	void eventclearWorkBench ( int module );
	bool eventisPlayerInDoor ( );
	struct FString GetPylonGuid ( );
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
	void GetBankContentInfo ( int iSlot, class UContentInfo** Info, int* ItemQuantity );
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
// 0x0038 (0x06B8 - 0x0680)
class ANowAtlasAvatarPlayerKeep : public ANowAtlasAvatarPlayerHouse
{
public:
	class UStaticMeshComponent*                        m_PylonMesh;                                      		// 0x0680 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowStaticMeshActorKeepMap*                  WarTable;                                         		// 0x0684 (0x0004) [0x0000000000000000]              
	struct FVector                                     WarTablePos;                                      		// 0x0688 (0x000C) [0x0000000000000000]              
	struct FString                                     m_PylonGuid;                                      		// 0x0694 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_vWallConnectPoint[ 0x2 ];                       		// 0x06A0 (0x0018) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1574 ];

		return pClassPointer;
	};

	bool eventTargetMesh ( );
	void importMeshStrings ( );
	void setHouseVolumeMesh ( int _houseType, int _tier );
	void setGuildStoneMesh ( int HouseTier );
	void setWallConnectionPoints ( );
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
// 0x0000 (0x06B8 - 0x06B8)
class ANowAtlasAvatarPlayerPalisadeGate : public ANowAtlasAvatarPlayerKeep
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
	void SetActivateCrossNodeAvatarList ( );
	void Destroyed ( );
	void eventFindGoodSpot ( struct FVector StartLoc, int iter );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarPlayerPalisadeGate::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarWorldBridge
// 0x0015 (0x03C1 - 0x03AC)
class ANowAtlasAvatarWorldBridge : public ANowAtlasAvatarPlayerStructure
{
public:
	struct FString                                     m_BridgeNames;                                    		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_BridgeType;                                     		// 0x03B8 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_HouseInventoryMesh;                             		// 0x03BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      m_BridgeStatus;                                   		// 0x03C0 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1576 ];

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
// 0x0003 (0x03C4 - 0x03C1)
class ANowAtlasAvatarPalisad : public ANowAtlasAvatarWorldBridge
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

	void setBridgeMeshes ( int _BridgeStatus );
	void PendingHouseBuildingStatus ( );
	void SetActivateCrossNodeAvatarList ( );
	void Destroyed ( );
	void eventFindGoodSpot ( struct FVector StartLoc, int iter );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarPalisad::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarWorldDestructableObject
// 0x0003 (0x03C4 - 0x03C1)
class ANowAtlasAvatarWorldDestructableObject : public ANowAtlasAvatarWorldBridge
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

	void eventplayDestruction ( );
	void getHouseMesh ( );
	bool AtlasUse ( class APlayerController* PC );
	bool IsTarget ( );
};

UClass* ANowAtlasAvatarWorldDestructableObject::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiege
// 0x0004 (0x03B0 - 0x03AC)
class ANowAtlasAvatarSiege : public ANowAtlasAvatar
{
public:
	int                                                pivotState;                                       		// 0x03AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1579 ];

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
// 0x000C (0x03BC - 0x03B0)
class ANowAtlasAvatarSiegeHailCaster : public ANowAtlasAvatarSiege
{
public:
	class UAnimNodePlayCustomAnim*                     cacheNodes[ 0x3 ];                                		// 0x03B0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1580 ];

		return pClassPointer;
	};

	void eventResetAnims ( );
	void eventHideBone ( );
	void eventShowBone ( );
	void eventTraceBoneHit ( );
	void eventFire ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarSiegeHailCaster::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSkM
// 0x0038 (0x03E4 - 0x03AC)
class ANowAtlasAvatarSkM : public ANowAtlasAvatar
{
public:
	class UAnimNodeBlendList*                          IsBlockingBlend;                                  		// 0x03AC (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarSkM*                          LastBumped;                                       		// 0x03B0 (0x0004) [0x0000000000000000]              
	class UVectorQueue*                                vPositionQueue;                                   		// 0x03B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     PreCorrectMove;                                   		// 0x03B8 (0x000C) [0x0000000000000000]              
	float                                              PreCorrectMoveSpeed;                              		// 0x03C4 (0x0004) [0x0000000000000000]              
	float                                              CorrectMoveTimer;                                 		// 0x03C8 (0x0004) [0x0000000000000000]              
	struct FVector                                     vLastRotCross;                                    		// 0x03CC (0x000C) [0x0000000000000000]              
	struct FVector                                     vLastPosition;                                    		// 0x03D8 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1581 ];

		return pClassPointer;
	};

	void RecalcTimeToDestSync ( );
	void SetLocationWithGroundCheck ( struct FVector NewPos );
	void DrawDebugInfo ( float DeltaTime );
	void DrawSelfRadius ( float SelfRadius );
	void eventSetNewMoveSpeed ( float NewMoveSpeed );
	class UAnimNodeBlendList* eventGetBlockingNode ( );
	void JumpOffAvatar ( );
	void eventBaseChange ( );
	void Tick ( float DeltaTime );
	void eventSetLocalFlag ( int NewFlag );
	void PostBeginPlay ( );
	bool IsClientOwner ( );
	void TriggerFootNotify ( int FootIndex, float FootForce );
	struct FVector GetTargetPos ( );
	struct FRotator GetTargetDir ( );
};

UClass* ANowAtlasAvatarSkM::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAi
// 0x0278 (0x065C - 0x03E4)
class ANowAtlasAvatarAi : public ANowAtlasAvatarSkM
{
public:
	class USkelControlLookAt*                          LookControl;                                      		// 0x03E4 (0x0004) [0x0000000000000000]              
	class AActor*                                      AiTarget;                                         		// 0x03E8 (0x0004) [0x0000000000000000]              
	class AActor*                                      AiLookTarget;                                     		// 0x03EC (0x0004) [0x0000000000000000]              
	float                                              fUpdateLookAt;                                    		// 0x03F0 (0x0004) [0x0000000000000000]              
	float                                              fUpdateLookAtDefault;                             		// 0x03F4 (0x0004) [0x0000000000000000]              
	float                                              fAiLookTargetTimer;                               		// 0x03F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsAttacking : 1;                                 		// 0x03FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsAiMoving : 1;                                  		// 0x03FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDetour : 1;                                      		// 0x03FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanBlock : 1;                                    		// 0x03FC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bWeaponCanBlock : 1;                              		// 0x03FC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDebugLines : 1;                                  		// 0x03FC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bStopping : 1;                                    		// 0x03FC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bWasMoving : 1;                                   		// 0x03FC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bMoveEaseIn : 1;                                  		// 0x03FC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDebugPos : 1;                                    		// 0x03FC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bCheckForObstacles : 1;                           		// 0x03FC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bIsFemale : 1;                                    		// 0x03FC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bFollowGround : 1;                                		// 0x03FC (0x0004) [0x0000000000000000] [0x00001000] 
	int                                                iAttackIndex;                                     		// 0x0400 (0x0004) [0x0000000000000000]              
	float                                              fAnimLength;                                      		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              AiRotationRate;                                   		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              fMoveTimer;                                       		// 0x040C (0x0004) [0x0000000000000000]              
	float                                              fMoveTimerEnd;                                    		// 0x0410 (0x0004) [0x0000000000000000]              
	struct FVector                                     vMoveTarget;                                      		// 0x0414 (0x000C) [0x0000000000000000]              
	struct FVector                                     vFromTarget;                                      		// 0x0420 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLookTarget;                                      		// 0x042C (0x000C) [0x0000000000000000]              
	float                                              fLastSpeed;                                       		// 0x0438 (0x0004) [0x0000000000000000]              
	float                                              fFailMoveTime;                                    		// 0x043C (0x0004) [0x0000000000000000]              
	float                                              fAverageSpeed;                                    		// 0x0440 (0x0004) [0x0000000000000000]              
	float                                              fSyncTimer;                                       		// 0x0444 (0x0004) [0x0000000000000000]              
	float                                              fMoveSpeed;                                       		// 0x0448 (0x0004) [0x0000000000000000]              
	float                                              fWalkSpeed;                                       		// 0x044C (0x0004) [0x0000000000000000]              
	int                                                CurrentConformTraceInterval;                      		// 0x0450 (0x0004) [0x0000000000000000]              
	int                                                ConformTraceFrameCount;                           		// 0x0454 (0x0004) [0x0000000000000000]              
	int                                                ConformTraceInterval;                             		// 0x0458 (0x0004) [0x0000000000000000]              
	float                                              InterpZTranslation;                               		// 0x045C (0x0004) [0x0000000000000000]              
	float                                              LastGroundZ;                                      		// 0x0460 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastKnownGoodPosition;                            		// 0x0464 (0x000C) [0x0000000000000000]              
	float                                              fDetourAdd;                                       		// 0x0470 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDetourAdd;                                       		// 0x0474 (0x000C) [0x0000000000000000]              
	float                                              fLastMoveUpdate;                                  		// 0x0480 (0x0004) [0x0000000000000000]              
	int                                                RotationPitchTarget;                              		// 0x0484 (0x0004) [0x0000000000000000]              
	int                                                RotationPitch;                                    		// 0x0488 (0x0004) [0x0000000000000000]              
	float                                              fPitchUpdateNumber;                               		// 0x048C (0x0004) [0x0000000000000000]              
	float                                              fBaseDrawScale;                                   		// 0x0490 (0x0004) [0x0000000000000000]              
	float                                              fLevelScale;                                      		// 0x0494 (0x0004) [0x0000000000000000]              
	float                                              fWeaponScale;                                     		// 0x0498 (0x0004) [0x0000000000000000]              
	int                                                iLevel;                                           		// 0x049C (0x0004) [0x0000000000000000]              
	float                                              fTakeDamageTimer;                                 		// 0x04A0 (0x0004) [0x0000000000000000]              
	float                                              fLastBleed;                                       		// 0x04A4 (0x0004) [0x0000000000000000]              
	struct FsPendingMove                               PendingMove;                                      		// 0x04A8 (0x0018) [0x0000000000000000]              
	struct FFollowPosStruct                            FollowPos[ 0x10 ];                                		// 0x04C0 (0x0100) [0x0000000000000000]              
	class ANowAiEffectSpawn*                           pSpawnEffect;                                     		// 0x05C0 (0x0004) [0x0000000000000000]              
	unsigned char                                      MoveType;                                         		// 0x05C4 (0x0001) [0x0000000000000000]              
	class UParticleSystem*                             DecapBlood;                                       		// 0x05C8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             CrushBlood;                                       		// 0x05CC (0x0004) [0x0000000000000000]              
	struct FsNameNamePair                              vHitBoneNames[ 0x5 ];                             		// 0x05D0 (0x0050) [0x0000000000000000]              
	int                                                iLastHitType;                                     		// 0x0620 (0x0004) [0x0000000000000000]              
	int                                                iLastHitBone;                                     		// 0x0624 (0x0004) [0x0000000000000000]              
	struct FRotator                                    InitRotation;                                     		// 0x0628 (0x000C) [0x0000000000000000]              
	float                                              m_fInterpExp;                                     		// 0x0634 (0x0004) [0x0000000000000000]              
	struct FString                                     sLastEffectName;                                  		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimNodeBlendList*                          m_AiIdleBlendList;                                		// 0x0644 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendListPlayOnce*                  m_EquipBlend;                                     		// 0x0648 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   pMainMaterial;                                    		// 0x064C (0x0004) [0x0000000000000000]              
	TArray< class UMagicMeshFX* >                      vMagicMeshFX;                                     		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1582 ];

		return pClassPointer;
	};

	void eventTeleportEffect ( );
	void eventHideMeshes ( unsigned long bHide );
	void PlayEquip ( unsigned long bEquip );
	void eventCheckForIdleSpot ( );
	void eventFindGoodSpot ( struct FVector StartLoc, int iter );
	void eventCreateSyncMove ( );
	class ANowPlayerController* eventGetANowPC ( );
	struct FVector GetExtent ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	float GetDetourValue ( );
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
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
	void eventSetLevel ( int NewLevel );
	void GetInfo ( TArray< struct FString >* sLogArray );
	class ANowPlayerController* eventGetNowPC ( );
	void SetLocationWithGroundCheck ( struct FVector NewPos );
	void eventUpdateDamageMaterial ( );
	bool GetBloodSpawnLocation ( struct FVector* vOutLoc );
	void eventAiTookDamage ( class AActor* Attacker, float Amount );
	class USkelControlLookAt* GetLookAt ( );
	void eventResetLookAt ( );
	void TickLookAt ( float fDeltaTime );
	void eventAddStaticMeshObject ( class UStaticMesh* STM, struct FName SocketName );
	void TickTurnTo ( float fDeltaTime );
	void Tick ( float fDeltaTime );
	void TickPitch ( float fDeltaTime );
	void eventcacheNodes ( );
	void eventSetAiState ( unsigned char NewState );
	struct FsAiAttackTypes eventCreateAiAttackType ( struct FString sName, int iDps, int iDmg );
	void AddMagicMeshFX ( class UMagicMeshFX* NewFX );
	void eventSetLocalFlag ( int NewFlag );
	void eventChangedDisplayName ( );
	void eventStartMaterialDamage ( );
	void eventPendingUpdateAiTarget ( );
	void eventPendingResetMoveType ( );
	void PostBeginPlay ( );
	struct FName GetLastHitBoneName ( );
	int GetLastHitBoneGibGroup ( );
	bool GetLastHitBoneNames ( struct FName* BoneA, struct FName* BoneB );
	struct FString GetDefaultName ( );
	struct FString GetDeathEffect ( );
	float GetMoveSpeed ( );
	void AddNewMove ( float newTimer, struct FVector NewTarget );
	bool HasItems ( );
	void GetInitalRotation ( );
	void AttackOrder ( class AActor* pVictim );
	bool IsGuard ( );
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
	void GetAndCreateBodyFinished ( );
	void GetAndCreateBody ( unsigned long bReInit );
	struct FVector GetServerPos ( );
};

UClass* ANowAtlasAvatarAi::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMount
// 0x019C (0x07F8 - 0x065C)
class ANowAtlasAvatarAiMount : public ANowAtlasAvatarAi
{
public:
	class ANowPawn*                                    Driver;                                           		// 0x065C (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    PetOwner;                                         		// 0x0660 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotADriver : 1;                                  		// 0x0664 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingRemove : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRidingInstance : 1;                              		// 0x0664 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPendingThrowOffAnimation : 1;                    		// 0x0664 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bCanCarryEquipment : 1;                           		// 0x0664 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bDebugDraw : 1;                                   		// 0x0664 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBonesCached : 1;                                 		// 0x0664 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPlayEquipSounds : 1;                             		// 0x0664 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPlayOnA : 1;                                     		// 0x0664 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bConnectionFailed : 1;                            		// 0x0664 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bEditHorse : 1;                                   		// 0x0664 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bIsBodyCreated : 1;                               		// 0x0664 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bIsArmorCreated : 1;                              		// 0x0664 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bPhysicsOn : 1;                                   		// 0x0664 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bGotBags : 1;                                     		// 0x0664 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bMale : 1;                                        		// 0x0664 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bGotSaddle : 1;                                   		// 0x0664 (0x0004) [0x0000000000000000] [0x00010000] 
	float                                              fMountHPCur;                                      		// 0x0668 (0x0004) [0x0000000000000000]              
	int                                                m_MountSpeed;                                     		// 0x066C (0x0004) [0x0000000000000000]              
	int                                                m_MountBaseSpeed;                                 		// 0x0670 (0x0004) [0x0000000000000000]              
	int                                                m_MountSpeedMin;                                  		// 0x0674 (0x0004) [0x0000000000000000]              
	int                                                Throttle;                                         		// 0x0678 (0x0004) [0x0000000000000000]              
	int                                                TraceType;                                        		// 0x067C (0x0004) [0x0000000000000000]              
	float                                              CorrectGoalTimer;                                 		// 0x0680 (0x0004) [0x0000000000000000]              
	float                                              m_MountJumpZ;                                     		// 0x0684 (0x0004) [0x0000000000000000]              
	float                                              m_BaseMountJumpZ;                                 		// 0x0688 (0x0004) [0x0000000000000000]              
	float                                              AddThrottleTimer;                                 		// 0x068C (0x0004) [0x0000000000000000]              
	float                                              DriverDrawScale;                                  		// 0x0690 (0x0004) [0x0000000000000000]              
	int                                                MaxStamina;                                       		// 0x0694 (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     CachedCustomAnim;                                 		// 0x0698 (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     RearAnimNode;                                     		// 0x069C (0x0004) [0x0000000000000000]              
	class UAnimNodeAdditiveBlending*                   ManToMountSwitch;                                 		// 0x06A0 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          ManToMountBlendList;                              		// 0x06A4 (0x0004) [0x0000000000000000]              
	struct FName                                       RidingState;                                      		// 0x06A8 (0x0008) [0x0000000000000000]              
	struct FName                                       WalkingState;                                     		// 0x06B0 (0x0008) [0x0000000000000000]              
	struct FName                                       FootSocketNames[ 0x4 ];                           		// 0x06B8 (0x0020) [0x0000000000000000]              
	class UParticleSystemComponent*                    FootParticleSystems[ 0x4 ];                       		// 0x06D8 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             FootSoundComponent[ 0x4 ];                        		// 0x06E8 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastKnockDown;                                    		// 0x06F8 (0x0004) [0x0000000000000000]              
	float                                              LastUsedTime;                                     		// 0x06FC (0x0004) [0x0000000000000000]              
	float                                              CurrentDriverSkill;                               		// 0x0700 (0x0004) [0x0000000000000000]              
	float                                              LastGetDriverSkill;                               		// 0x0704 (0x0004) [0x0000000000000000]              
	float                                              WalkableFloorZ;                                   		// 0x0708 (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    pPendingDriver;                                   		// 0x070C (0x0004) [0x0000000000000000]              
	int                                                LastMountStamina;                                 		// 0x0710 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             EquipSoundA;                                      		// 0x0714 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             EquipSoundB;                                      		// 0x0718 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimSet*                                    CachedMaleAnimSet;                                		// 0x071C (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    CachedFemaleAnimSet;                              		// 0x0720 (0x0004) [0x0000000000000000]              
	float                                              fZTranslation;                                    		// 0x0724 (0x0004) [0x0000000000000000]              
	float                                              PetHeight;                                        		// 0x0728 (0x0004) [0x0000000000000000]              
	float                                              fInitTimer;                                       		// 0x072C (0x0004) [0x0000000000000000]              
	float                                              attrb_MinStrength;                                		// 0x0730 (0x0004) [0x0000000000000000]              
	float                                              attrb_MinDexterity;                               		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              attrb_MinConstitution;                            		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              attrb_MinPsyche;                                  		// 0x073C (0x0004) [0x0000000000000000]              
	float                                              attrb_MinIntelligence;                            		// 0x0740 (0x0004) [0x0000000000000000]              
	float                                              attrb_MinSpeed;                                   		// 0x0744 (0x0004) [0x0000000000000000]              
	float                                              attrb_MinSize;                                    		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxStrength;                                		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxDexterity;                               		// 0x0750 (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxConstitution;                            		// 0x0754 (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxPsyche;                                  		// 0x0758 (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxIntelligence;                            		// 0x075C (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxSpeed;                                   		// 0x0760 (0x0004) [0x0000000000000000]              
	float                                              attrb_MaxSize;                                    		// 0x0764 (0x0004) [0x0000000000000000]              
	int                                                attrb_Strength;                                   		// 0x0768 (0x0004) [0x0000000000000000]              
	int                                                attrb_Dexterity;                                  		// 0x076C (0x0004) [0x0000000000000000]              
	int                                                attrb_Constitution;                               		// 0x0770 (0x0004) [0x0000000000000000]              
	int                                                attrb_Psyche;                                     		// 0x0774 (0x0004) [0x0000000000000000]              
	int                                                attrb_Intelligence;                               		// 0x0778 (0x0004) [0x0000000000000000]              
	int                                                attrb_Speed;                                      		// 0x077C (0x0004) [0x0000000000000000]              
	int                                                attrb_Size;                                       		// 0x0780 (0x0004) [0x0000000000000000]              
	int                                                attrb_Weight;                                     		// 0x0784 (0x0004) [0x0000000000000000]              
	int                                                iMountType;                                       		// 0x0788 (0x0004) [0x0000000000000000]              
	class UMountBrain*                                 MyBrain;                                          		// 0x078C (0x0004) [0x0000000000000000]              
	int                                                iDynamicInitState;                                		// 0x0790 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               m_RidingInstancePhysAsset;                        		// 0x0794 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               m_DeadPhysAsset;                                  		// 0x0798 (0x0004) [0x0000000000000000]              
	struct FString                                     DynamicBodyString;                                		// 0x079C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DynamicArmorString;                               		// 0x07A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DynamicStatString;                                		// 0x07B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               BaseMesh;                                         		// 0x07C0 (0x0004) [0x0000000000000000]              
	float                                              fLegSizeCollisionReduction;                       		// 0x07C4 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           SavedArmorMaterial;                               		// 0x07C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimSet*                                    MountedBaseAnimset;                               		// 0x07CC (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    FPSBaseAnimset;                                   		// 0x07D0 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    MountedSpellAnimset;                              		// 0x07D4 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   MountedAnimTree;                                  		// 0x07D8 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   UnMountedAnimTree;                                		// 0x07DC (0x0004) [0x0000000000000000]              
	struct FString                                     sMountedWeaponPath;                               		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              calc_MaxDexterity;                                		// 0x07EC (0x0004) [0x0000000000000000]              
	float                                              calc_MaxIntelligence;                             		// 0x07F0 (0x0004) [0x0000000000000000]              
	float                                              calc_MaxStrength;                                 		// 0x07F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1583 ];

		return pClassPointer;
	};

	void eventStopPhatSim ( );
	void eventStartPhatSim ( );
	void SetHasPhysAnimation ( unsigned long NewValue );
	class ANowPlayerController* eventGetNowPC ( );
	bool StopsProjectile ( class AProjectile* P );
	bool IsCombatTarget ( );
	void eventGetAnimNodePointers ( int WhatType, class UAnimNodePlayCustomAnim** AnimNode, class UAnimNodeSequence** AnimSeq );
	void ResetMinorAddAnimation ( );
	void PlayMinorAddAnimation ( struct FName WhatAnim, unsigned long bOverride, float Time );
	void ManToMountAddOff ( );
	void ManToMountAddOn ( int iIndex );
	void Rear ( );
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
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventSyncAnimSet ( unsigned long bOnlyAnimSet );
	void eventSyncAnimTree ( );
	class AActor* eventGetDriver ( );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventTookDamage ( float HowMuchDamage, float Total );
	bool eventCheckLastUseTime ( );
	void eventWaitForRemount ( );
	void eventPlayClientThrowOffAnimation ( );
	void eventdebugLog ( struct FString whatLog );
	void eventMountDied ( );
	bool eventCheckPlayerOverweight ( class ANowPawn* WhatPawn );
	void eventDoMountAnimations ( unsigned long bMountOn, unsigned long bIgnoreAnim );
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
	void eventAddMeToManager ( unsigned long bForceGenerate );
	void eventUpdateDamageMaterial ( );
	bool CanJump ( );
	void PostBeginPlay ( );
	bool HasItems ( );
	void GetAndCreateArmor ( );
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

UClass* ANowAtlasAvatarAiMount::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamic
// 0x0048 (0x0840 - 0x07F8)
class ANowAtlasAvatarAiMountDynamic : public ANowAtlasAvatarAiMount
{
public:
	class UMaterialInstanceConstant*                   BodyMaterial;                                     		// 0x07F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   HairMaterial;                                     		// 0x07FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   EyeMaterial;                                      		// 0x0800 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LegSizeCollisionReductionList[ 0x5 ];             		// 0x0804 (0x0014) [0x0000000000000000]              
	int                                                iDynamicLegLengthIndex;                           		// 0x0818 (0x0004) [0x0000000000000000]              
	TArray< struct FDynamicFeatureBones >              DynamicFeatureBonesList;                          		// 0x081C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDynamicFeatureParams >             DynamicFeatureParamsList;                         		// 0x0828 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             FullPhatNames;                                    		// 0x0834 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1584 ];

		return pClassPointer;
	};

	void eventCreateAndSetMountBrain ( );
	class ANowPlayerController* eventGetNowPC ( );
	void eventStopPhatSim ( );
	void eventStartPhatSim ( );
	bool eventSetFeatureParam ( int FeatureIndex, int ByteValue, float Strength, unsigned long bHair, class UTexture* NewTexture, struct FVector NewColor, class UMaterialInstance* NewMaterial );
	void eventSetBoneParam ( int FeatureIndex, int ByteValue );
	void eventCacheDynamicFeatureBones ( );
	void Tick ( float fDeltaTime );
	void GetInfo ( TArray< struct FString >* sLogArray );
	void eventAddMeToManager ( unsigned long bForceGenerate );
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
	void UpdateLevel ( );
	void SetBodyParam ( int I, int NewValue );
	class UMaterialInstance* GetMaterial ( int TxtGroup, int TxtIndex );
	class UTexture* GetTexture ( int TxtGroup, int TxtIndex );
	struct FVector GetLinearColor ( int ColorGroup, int ColorIndex );
	struct FString GetBodyStringAsBinary ( );
	struct FString RecalcStats ( );
	struct FString GetStatString ( );
	struct FString GetArmorString ( );
	struct FString GetBodyString ( );
	void GetAndSetStats ( );
	void GetAndCreateBody ( unsigned long bReInit );
};

UClass* ANowAtlasAvatarAiMountDynamic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamicHorse
// 0x0000 (0x0840 - 0x0840)
class ANowAtlasAvatarAiMountDynamicHorse : public ANowAtlasAvatarAiMountDynamic
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

	bool eventSetFeatureParam ( int FeatureIndex, int ByteValue, float Strength, unsigned long bHair, class UTexture* NewTexture, struct FVector NewColor, class UMaterialInstance* NewMaterial );
	bool CanJump ( );
	class UMaterialInstance* GetMaterial ( int TxtGroup, int TxtIndex );
	class UTexture* GetTexture ( int TxtGroup, int TxtIndex );
	struct FVector GetLinearColor ( int ColorGroup, int ColorIndex );
};

UClass* ANowAtlasAvatarAiMountDynamicHorse::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamicLykiator
// 0x0000 (0x0840 - 0x0840)
class ANowAtlasAvatarAiMountDynamicLykiator : public ANowAtlasAvatarAiMountDynamic
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

	bool eventSetFeatureParam ( int FeatureIndex, int ByteValue, float Strength, unsigned long bHair, class UTexture* NewTexture, struct FVector NewColor, class UMaterialInstance* NewMaterial );
	bool CanJump ( );
	class UMaterialInstance* GetMaterial ( int TxtGroup, int TxtIndex );
	class UTexture* GetTexture ( int TxtGroup, int TxtIndex );
	struct FVector GetLinearColor ( int ColorGroup, int ColorIndex );
};

UClass* ANowAtlasAvatarAiMountDynamicLykiator::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamicMolva
// 0x0000 (0x0840 - 0x0840)
class ANowAtlasAvatarAiMountDynamicMolva : public ANowAtlasAvatarAiMountDynamic
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

	bool eventSetFeatureParam ( int FeatureIndex, int ByteValue, float Strength, unsigned long bHair, class UTexture* NewTexture, struct FVector NewColor, class UMaterialInstance* NewMaterial );
	bool CanJump ( );
	class UMaterialInstance* GetMaterial ( int TxtGroup, int TxtIndex );
	class UTexture* GetTexture ( int TxtGroup, int TxtIndex );
	struct FVector GetLinearColor ( int ColorGroup, int ColorIndex );
};

UClass* ANowAtlasAvatarAiMountDynamicMolva::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiNPC
// 0x0030 (0x068C - 0x065C)
class ANowAtlasAvatarAiNPC : public ANowAtlasAvatarAi
{
public:
	unsigned long                                      bUseLookAt : 1;                                   		// 0x065C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInEtherWorlds : 1;                               		// 0x065C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHoldingObject : 1;                               		// 0x065C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LookAtTimer;                                      		// 0x0660 (0x0004) [0x0000000000000000]              
	float                                              NextLookAtTimer;                                  		// 0x0664 (0x0004) [0x0000000000000000]              
	struct FRotator                                    PendingRotation;                                  		// 0x0668 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TweenStartRot;                                    		// 0x0674 (0x000C) [0x0000000000000000]              
	float                                              fTweenTurn;                                       		// 0x0680 (0x0004) [0x0000000000000000]              
	class ANowPawn*                                    LookPawn;                                         		// 0x0684 (0x0004) [0x0000000000000000]              
	float                                              fCheckForIdleSpot;                                		// 0x0688 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1588 ];

		return pClassPointer;
	};

	void eventResurrect ( );
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	bool eventtcpReceive ( struct FString Text );
	void eventTurnTo ( class APawn* WhatPawn );
	void TweenTurn ( float DT );
	void ResetRotation ( );
	void eventSetInEtherWorlds ( unsigned long NewValue );
	void TickNpcLookAt ( float DT );
	void Tick ( float fDeltaTime );
	void eventSetAiState ( unsigned char NewState );
	bool CheckForLookAtTarget ( class ANowPawn* ForPawn );
	void eventNPCInteraction ( int iAnimation );
	void eventAddStaticMeshObject ( class UStaticMesh* STM, struct FName SocketName );
	void PostBeginPlay ( );
	int GetAiIdentification ( );
	void GetAndSetInteractionString ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarAiNPC::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiNPCTownCrier
// 0x0010 (0x069C - 0x068C)
class ANowAtlasAvatarAiNPCTownCrier : public ANowAtlasAvatarAiNPC
{
public:
	TArray< struct FString >                           vTalks;                                           		// 0x068C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iCurTalk;                                         		// 0x0698 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1589 ];

		return pClassPointer;
	};

	void eventTalk ( );
	bool eventtcpReceive ( struct FString sString );
	void InitTownCrier ( );
	void PostBeginPlay ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarAiNPCTownCrier::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpc
// 0x0048 (0x042C - 0x03E4)
class ANowAtlasAvatarNpc : public ANowAtlasAvatarSkM
{
public:
	unsigned long                                      bFindLookAtPoint : 1;                             		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTurnToOnUse : 1;                                 		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInEtherWorlds : 1;                               		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseLookAt : 1;                                   		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                iPositionCorrectionTries;                         		// 0x03E8 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDefaultPos;                                      		// 0x03EC (0x000C) [0x0000000000000000]              
	struct FName                                       UseAnimation;                                     		// 0x03F8 (0x0008) [0x0000000000000000]              
	class USkelControlLookAt*                          LookControl;                                      		// 0x0400 (0x0004) [0x0000000000000000]              
	class APawn*                                       LookPawn;                                         		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              LookAtTimer;                                      		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              NextLookAtTimer;                                  		// 0x040C (0x0004) [0x0000000000000000]              
	struct FRotator                                    PendingRotation;                                  		// 0x0410 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TweenStartRot;                                    		// 0x041C (0x000C) [0x0000000000000000]              
	float                                              fTweenTurn;                                       		// 0x0428 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1590 ];

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
	void eventSetTurnTo ( unsigned long NewValue );
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventAddStaticMeshObject ( class UStaticMesh* STM, struct FName SocketName );
	void eventSetInEtherWorlds ( unsigned long NewValue );
	void TickLookAt ( float DT );
	bool CheckForLookAtTarget ( class APawn* ForPawn );
};

UClass* ANowAtlasAvatarNpc::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarHouseBankerNpc
// 0x0004 (0x0430 - 0x042C)
class ANowAtlasAvatarHouseBankerNpc : public ANowAtlasAvatarNpc
{
public:
	class ANowAtlasAvatarPlayerHouse*                  m_pHouse;                                         		// 0x042C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1591 ];

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
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarNpcHelper : public ANowAtlasAvatarNpc
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

UClass* ANowAtlasAvatarNpcHelper::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcLibrary
// 0x000C (0x0438 - 0x042C)
class ANowAtlasAvatarNpcLibrary : public ANowAtlasAvatarNpc
{
public:
	struct FString                                     SceneStr;                                         		// 0x042C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1593 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	void AssignSceneStr ( );
};

UClass* ANowAtlasAvatarNpcLibrary::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcMailRecive
// 0x0010 (0x043C - 0x042C)
class ANowAtlasAvatarNpcMailRecive : public ANowAtlasAvatarNpc
{
public:
	struct FString                                     SceneStr;                                         		// 0x042C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x0438 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1594 ];

		return pClassPointer;
	};

	void eventOpenMail ( );
	bool AtlasUse ( class APlayerController* PC );
	int GetMailIndex ( );
};

UClass* ANowAtlasAvatarNpcMailRecive::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcNoMove
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarNpcNoMove : public ANowAtlasAvatarNpc
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

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcNoMove::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcQuestGiver
// 0x0010 (0x043C - 0x042C)
class ANowAtlasAvatarNpcQuestGiver : public ANowAtlasAvatarNpc
{
public:
	struct FString                                     SceneStr;                                         		// 0x042C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x0438 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1596 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcQuestGiver::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcTalker
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarNpcTalker : public ANowAtlasAvatarNpc
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

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcTalker::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcVendor
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarNpcVendor : public ANowAtlasAvatarNpc
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

	bool CheckUseDist ( );
	void OpenScene ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcVendor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcTutorialTrade
// 0x0004 (0x0430 - 0x042C)
class ANowAtlasAvatarNpcTutorialTrade : public ANowAtlasAvatarNpcVendor
{
public:
	class UContentInfo_NpcTutorial*                    ContentInfo;                                      		// 0x042C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1599 ];

		return pClassPointer;
	};

	void openVendorGUI ( );
	void OpenScene ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcTutorialTrade::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerVendor
// 0x0004 (0x0430 - 0x042C)
class ANowAtlasAvatarPlayerVendor : public ANowAtlasAvatarNpc
{
public:
	class ANowAtlasAvatar*                             m_pVendor;                                        		// 0x042C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1600 ];

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
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarTellUse : public ANowAtlasAvatarNpc
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

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarTellUse::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTellUseNpc
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarTellUseNpc : public ANowAtlasAvatarTellUse
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

	void eventSpawnHitFx ( struct FVector HitLocation, unsigned long ClientFeedBack, unsigned long bIgnoreParticles );
};

UClass* ANowAtlasAvatarTellUseNpc::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarStM
// 0x0024 (0x03D0 - 0x03AC)
class ANowAtlasAvatarStM : public ANowAtlasAvatar
{
public:
	struct FString                                     Type;                                             		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vUseSkillName;                                    		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTargetName;                                      		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1603 ];

		return pClassPointer;
	};

	void eventDoPendingFindGoodSpot ( );
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void GetAndCreateBodyFinished ( );
	void GetAndCreateBody ( unsigned long bReInit );
};

UClass* ANowAtlasAvatarStM::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarBuildAvatar
// 0x0000 (0x03D0 - 0x03D0)
class ANowAtlasAvatarBuildAvatar : public ANowAtlasAvatarStM
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

	void PostBeginPlay ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarBuildAvatar::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPylon
// 0x008C (0x045C - 0x03D0)
class ANowAtlasAvatarPylon : public ANowAtlasAvatarBuildAvatar
{
public:
	int                                                Tier;                                             		// 0x03D0 (0x0004) [0x0000000000000000]              
	float                                              Aoe;                                              		// 0x03D4 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorLadder*                   Ladders[ 0x4 ];                                   		// 0x03D8 (0x0010) [0x0000000000000000]              
	struct FVector                                     LadderPos[ 0x4 ];                                 		// 0x03E8 (0x0030) [0x0000000000000000]              
	class UStaticMesh*                                 StaticMeshArray[ 0x5 ];                           		// 0x0418 (0x0014) [0x0000000000000000]              
	class UFracturedStaticMesh*                        StaticMeshFracturedArray[ 0x3 ];                  		// 0x042C (0x000C) [0x0000000000000000]              
	struct FVector                                     PylonTopLoc;                                      		// 0x0438 (0x000C) [0x0000000000000000]              
	float                                              fCreateTimer;                                     		// 0x0444 (0x0004) [0x0000000000000000]              
	float                                              fHitEffectCounter;                                		// 0x0448 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_StaticMeshSign;                                 		// 0x044C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     m_PylonGuid;                                      		// 0x0450 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1605 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventDustEffect ( );
	void eventSpawnFracture ( );
	void eventSetTier ( int NewTier, unsigned long bIgnoreEffects );
	void eventTowerDestroyed ( );
	void eventChangedAoe ( );
	void eventSetMaterialShow ( int Slot, unsigned long bOn );
	void eventCreateLadders ( );
	void eventPlayHitEffect ( float HpChange );
	void PostBeginPlay ( );
	bool WasJustCreated ( );
	bool eventUsedSign ( class APlayerController* PC );
	void SetContentInfo ( class UContentInfo* Info );
	struct FString GetLastRoundInfo ( );
	struct FString GetGuildName ( );
	struct FString GetPylonGuid ( );
	bool AtlasUse ( class APlayerController* PC );
	void InitPylon ( );
};

UClass* ANowAtlasAvatarPylon::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTerritoryStructure
// 0x0068 (0x0438 - 0x03D0)
class ANowAtlasAvatarTerritoryStructure : public ANowAtlasAvatarBuildAvatar
{
public:
	int                                                m_iState;                                         		// 0x03D0 (0x0004) [0x0000000000000000]              
	int                                                m_iTier;                                          		// 0x03D4 (0x0004) [0x0000000000000000]              
	int                                                m_iTierMax;                                       		// 0x03D8 (0x0004) [0x0000000000000000]              
	int                                                m_iStageMesh;                                     		// 0x03DC (0x0004) [0x0000000000000000]              
	float                                              m_fLastHP;                                        		// 0x03E0 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxHP;                                         		// 0x03E4 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vExtent;                                        		// 0x03E8 (0x000C) [0x0000000000000000]              
	float                                              fCreateTimer;                                     		// 0x03F4 (0x0004) [0x0000000000000000]              
	float                                              m_fPendingCheckForMeshChange;                     		// 0x03F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotHealth : 1;                                   		// 0x03FC (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstance*                           m_pDecalMaterial;                                 		// 0x0400 (0x0004) [0x0000000000000000]              
	class UFracturedStaticMesh*                        FractureMesh;                                     		// 0x0404 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TierChangeParticle;                               		// 0x0408 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   StageChangeDownSound;                             		// 0x040C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RepairSound;                                      		// 0x0410 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DamageSound;                                      		// 0x0414 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HPUpParticle;                                     		// 0x0418 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HPDownParticle;                                   		// 0x041C (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           m_vWallConnectPoint;                              		// 0x0420 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ANowStaticMeshActor* >               m_vStructureAdds;                                 		// 0x042C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1606 ];

		return pClassPointer;
	};

	bool FixupGoodSpot ( struct FVector* vPos );
	void eventTick ( float fDeltaTime );
	void eventMoveToGround ( );
	class ANowPawn* eventGetNowPawn ( );
	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	bool WasJustCreated ( );
	void eventSpawnFracture ( );
	void LeaveDecal ( );
	void eventStructureDestroyed ( );
	void eventPlayStageDownEffect ( );
	void GetRandomPointOnBuilding ( struct FVector* vHitLocation, struct FVector* vHitNormal );
	void eventPlayDamagedEffect ( );
	void eventPlayRepairEffect ( );
	void eventTSHealthUpdate ( float fNewHealth );
	struct FString eventGetInteractionString ( );
	void eventSpawnStructureAdd ( class UClass* NewClass, struct FVector vPos, float fYaw );
	void eventsetWallConnectionPoints ( );
	void eventSetPendingCheckForMeshChange ( );
	void SetActivateCrossNodeAvatarList ( );
	void eventRemoveStructureAdds ( );
	void Destroyed ( );
	void PostBeginPlay ( );
	void InitStructureAdds ( class UContentInfo_PlayerStructure* pPlayerStructureCI );
	void SetNewState ( int iNewState );
	class UStaticMesh* GetNextStageMesh ( );
	struct FVector GetTSSlotOffset ( int iSlotIndex, unsigned long bOnlyFreeSlots );
	bool AtlasUse ( class APlayerController* PC );
	void SetContentInfo ( class UContentInfo* Info );
	void CheckForMeshChange ( );
	int GetMaxSlots ( );
	int CalcStageMesh ( );
	int GetMetalMax ( );
	int GetMetal ( );
	int GetStoneMax ( );
	int GetStone ( );
	int GetWoodMax ( );
	int GetWood ( );
	int GetHealthMax ( );
	int GetHealth ( );
};

UClass* ANowAtlasAvatarTerritoryStructure::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTerritoryAlertTower
// 0x0004 (0x043C - 0x0438)
class ANowAtlasAvatarTerritoryAlertTower : public ANowAtlasAvatarTerritoryStructure
{
public:
	class USoundCue*                                   AlertSoundCue;                                    		// 0x0438 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1607 ];

		return pClassPointer;
	};

	void eventPlayAlertSound ( );
	void SetNewState ( int iNewState );
};

UClass* ANowAtlasAvatarTerritoryAlertTower::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTerritoryRelic
// 0x007C (0x04B4 - 0x0438)
class ANowAtlasAvatarTerritoryRelic : public ANowAtlasAvatarTerritoryStructure
{
public:
	class UParticleSystemComponent*                    Particles;                                        		// 0x0438 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPointLightComponent*                        LightComponent;                                   		// 0x043C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        RelicStaticMesh;                                  		// 0x0440 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                iLastState;                                       		// 0x0444 (0x0004) [0x0000000000000000]              
	float                                              fPlacedRelicEffect;                               		// 0x0448 (0x0004) [0x0000000000000000]              
	struct FColor                                      RelicColor[ 0x6 ];                                		// 0x044C (0x0018) [0x0000000000000000]              
	class UParticleSystem*                             RelicParticle[ 0x6 ];                             		// 0x0464 (0x0018) [0x0000000000000000]              
	class UParticleSystem*                             RelicParticleStart[ 0x6 ];                        		// 0x047C (0x0018) [0x0000000000000000]              
	class UStaticMesh*                                 RelicMesh[ 0x6 ];                                 		// 0x0494 (0x0018) [0x0000000000000000]              
	class USoundCue*                                   PlaceSound;                                       		// 0x04AC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PlaceSoundFinished;                               		// 0x04B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1608 ];

		return pClassPointer;
	};

	void Tick ( float fDeltaTime );
	void PlaceRelic ( );
	void eventSetRelicState ( int iNewState );
	void UseRelic ( struct FString sGuid, class APlayerController* PC );
	void SetNewState ( int iNewState );
};

UClass* ANowAtlasAvatarTerritoryRelic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarTerritoryWall
// 0x0000 (0x0438 - 0x0438)
class ANowAtlasAvatarTerritoryWall : public ANowAtlasAvatarTerritoryStructure
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

	struct FString eventGetInteractionString ( );
};

UClass* ANowAtlasAvatarTerritoryWall::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarDebugBox
// 0x0000 (0x03D0 - 0x03D0)
class ANowAtlasAvatarDebugBox : public ANowAtlasAvatarStM
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

	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarDebugBox::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarGameBoard
// 0x0000 (0x03D0 - 0x03D0)
class ANowAtlasAvatarGameBoard : public ANowAtlasAvatarStM
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

	void eventOpenUserInterface ( struct FString OpenScene );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarGameBoard::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcStatic
// 0x0000 (0x03D0 - 0x03D0)
class ANowAtlasAvatarNpcStatic : public ANowAtlasAvatarStM
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

	void eventOpenUserInterface ( struct FString OpenScene );
	void SetContentInfo ( class UContentInfo* Info );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarNpcStatic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcMailSend
// 0x0010 (0x03E0 - 0x03D0)
class ANowAtlasAvatarNpcMailSend : public ANowAtlasAvatarNpcStatic
{
public:
	struct FString                                     SceneStr;                                         		// 0x03D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_NowOnlineSub;                                   		// 0x03DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1613 ];

		return pClassPointer;
	};

	void eventOpenUserInterface ( struct FString OpenScene );
	int GetMailIndex ( );
};

UClass* ANowAtlasAvatarNpcMailSend::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPhysicalSpawner
// 0x0004 (0x03D4 - 0x03D0)
class ANowAtlasAvatarPhysicalSpawner : public ANowAtlasAvatarStM
{
public:
	class UStaticMeshComponent*                        m_StaticMeshDead;                                 		// 0x03D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1614 ];

		return pClassPointer;
	};

	void eventSetAliveState ( unsigned long bAlive );
	void SetContentInfo ( class UContentInfo* Info );
};

UClass* ANowAtlasAvatarPhysicalSpawner::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPickable
// 0x0004 (0x03D4 - 0x03D0)
class ANowAtlasAvatarPickable : public ANowAtlasAvatarStM
{
public:
	class UStaticMeshComponent*                        m_StaticMeshB;                                    		// 0x03D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1615 ];

		return pClassPointer;
	};

	void DoFindGoodSpot ( );
	void PostBeginPlay ( );
	bool Gather ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarPickable::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPickableRelic
// 0x0004 (0x03D8 - 0x03D4)
class ANowAtlasAvatarPickableRelic : public ANowAtlasAvatarPickable
{
public:
	class UParticleSystemComponent*                    Particles;                                        		// 0x03D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1616 ];

		return pClassPointer;
	};

	void eventDoGatherEffects ( );
	bool Gather ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarPickableRelic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiegeWeapon
// 0x0060 (0x0430 - 0x03D0)
class ANowAtlasAvatarSiegeWeapon : public ANowAtlasAvatarStM
{
public:
	int                                                CurState;                                         		// 0x03D0 (0x0004) [0x0000000000000000]              
	int                                                NrOfStateS;                                       		// 0x03D4 (0x0004) [0x0000000000000000]              
	float                                              projSpeed;                                        		// 0x03D8 (0x0004) [0x0000000000000000]              
	struct FString                                     projMesh;                                         		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      projArch : 1;                                     		// 0x03E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGotInit : 1;                                     		// 0x03E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x03E8 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                projRange;                                        		// 0x03EC (0x0004) [0x0000000000000000]              
	struct FRotator                                    PendingRotation;                                  		// 0x03F0 (0x000C) [0x0000000000000000]              
	float                                              DoingPendRotation;                                		// 0x03FC (0x0004) [0x0000000000000000]              
	struct FVector                                     PendingPosition;                                  		// 0x0400 (0x000C) [0x0000000000000000]              
	float                                              DoingPendPosition;                                		// 0x040C (0x0004) [0x0000000000000000]              
	float                                              fDelayProjectileSpawn;                            		// 0x0410 (0x0004) [0x0000000000000000]              
	struct FVector                                     vDelayedHitLoc;                                   		// 0x0414 (0x000C) [0x0000000000000000]              
	int                                                CurRotateState;                                   		// 0x0420 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           vTracePos;                                        		// 0x0424 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1617 ];

		return pClassPointer;
	};

	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventTweenToPos ( struct FVector vNewPos );
	void eventTraceBoneHit ( );
	void eventFire ( struct FVector HitLoc );
	int FindClosestSocket ( struct FVector HitLoc );
	void DoFireTrace ( );
	void eventFindAndSetSockets ( );
	void eventSetNewState ( int NewState, unsigned long IsInit );
	void Tick ( float DT );
	void eventRotateState ( int NewRotState );
	void FixupLocation ( );
	struct FVector GetSiegeMovePos ( );
	void PostBeginPlay ( );
	void DoSiegeMove ( struct FVector vNewPos, class APlayerController* PC );
	void DoFire ( struct FVector Hit, float fLength, class APlayerController* PC );
	void GetState ( );
	void Load ( class APlayerController* PC );
	void ChangeState ( int NewState, class APlayerController* PC );
	void TurnLeft ( class APlayerController* PC );
	void TurnRight ( class APlayerController* PC );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowAtlasAvatarSiegeWeapon::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiegeBatteringRam
// 0x0000 (0x0430 - 0x0430)
class ANowAtlasAvatarSiegeBatteringRam : public ANowAtlasAvatarSiegeWeapon
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

	void DoRamState ( int iSide );
	struct FVector GetHitTargetHitLocation ( );
	class AActor* GetHitTarget ( );
	void eventTraceBoneHit ( );
	void eventSetNewState ( int NewState, unsigned long IsInit );
	void ChangeRamState ( int iSide, struct FString AvatarID, class APlayerController* PC );
};

UClass* ANowAtlasAvatarSiegeBatteringRam::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarSiegeTrebuchet
// 0x0004 (0x0434 - 0x0430)
class ANowAtlasAvatarSiegeTrebuchet : public ANowAtlasAvatarSiegeWeapon
{
public:
	class UParticleSystemComponent*                    FireParticles;                                    		// 0x0430 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1619 ];

		return pClassPointer;
	};

	void eventFire ( struct FVector HitLoc );
	void eventSetNewState ( int NewState, unsigned long IsInit );
	void FixupLocation ( );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarSiegeTrebuchet::pClassPointer = NULL;

// Class NowGame.NowLootObject
// 0x000C (0x03DC - 0x03D0)
class ANowLootObject : public ANowAtlasAvatarStM
{
public:
	struct FVector                                     vLastLoc;                                         		// 0x03D0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1620 ];

		return pClassPointer;
	};

	void eventSetLocalFlag ( int NewFlag );
	void DoFindGoodSpot ( );
	void PostBeginPlay ( );
	void Tick ( float DeltaTime );
	void GetAndCreateBody ( unsigned long bReInit );
	bool IsClientOwner ( );
	bool AtlasUse ( class APlayerController* PC );
	bool AtlasUnSelect ( );
	bool AtlasSelect ( );
	bool IsTarget ( );
};

UClass* ANowLootObject::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmitter
// 0x0014 (0x03E4 - 0x03D0)
class ANowStaticMeshActorEmitter : public ANowAtlasAvatarStM
{
public:
	struct FColor                                      LightColor;                                       		// 0x03D0 (0x0004) [0x0000000000000000]              
	float                                              LightRadius;                                      		// 0x03D4 (0x0004) [0x0000000000000000]              
	class AEmitter*                                    effectEmitter;                                    		// 0x03D8 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        effectLight;                                      		// 0x03DC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMesh*                                 pFractureMesh;                                    		// 0x03E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1621 ];

		return pClassPointer;
	};

	void eventSpawnCorpse ( float InDmg, unsigned long bFromMercyMode, unsigned long bFullGib );
	void eventCreateEmitter ( );
	bool AtlasUse ( class APlayerController* PC );
	void SetContentInfo ( class UContentInfo* Info );
	void NowSetStaticMeshes ( class UStaticMesh* A );
};

UClass* ANowStaticMeshActorEmitter::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmitterCampfire
// 0x0000 (0x03E4 - 0x03E4)
class ANowStaticMeshActorEmitterCampfire : public ANowStaticMeshActorEmitter
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

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActorEmitterCampfire::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarPlayerHouseCollisionDoor
// 0x001C (0x0304 - 0x02E8)
class ANowAtlasAvatarPlayerHouseCollisionDoor : public AActor
{
public:
	class ANowAtlasAvatarPlayerHouse*                  m_MyPwner;                                        		// 0x02E8 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_CollisionVolume;                                		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      m_playerIsInHouse : 1;                            		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      m_ClientActor;                                    		// 0x02F4 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_vPlayersInHouse;                                		// 0x02F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1623 ];

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
// 0x0003 (0x0370 - 0x036D)
class ANowAtlasAvatarZoneBrain : public AAtlasAvatar
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1625 ];

		return pClassPointer;
	};

	void MoveToGround ( class AActor* A );
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

// Class NowGame.NowCameraActor
// 0x0064 (0x04B4 - 0x0450)
class ANowCameraActor : public ACameraActor
{
public:
	class ANowCameraNodes*                             CurNode;                                          		// 0x0450 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fAnimateTimer;                                    		// 0x0454 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vAnimatePos;                                      		// 0x0458 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    rAnimateRot;                                      		// 0x0464 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              fAnimateFov;                                      		// 0x0470 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fAnimateTimerEnd;                                 		// 0x0474 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vAnimatePosStart;                                 		// 0x0478 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    rAnimateRotStart;                                 		// 0x0484 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              fAnimateFovStart;                                 		// 0x0490 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fZAdd;                                            		// 0x0494 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vCamZoomStart;                                    		// 0x0498 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vCamZoomEnd;                                      		// 0x04A4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bEaseIn : 1;                                      		// 0x04B0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEaseOut : 1;                                     		// 0x04B0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bCheckForCollision : 1;                           		// 0x04B0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1626 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	float CalcZAdd ( struct FVector vNewPos );
	void Tick ( float fDeltaTime );
	void CamZoom ( float fCamZoom );
	void eventAnimateCamera ( class ANowCameraNodes* ToNode );
	void MakeMeViewTarget ( );
	void PostBeginPlay ( );
};

UClass* ANowCameraActor::pClassPointer = NULL;

// Class NowGame.NowCameraNodes
// 0x0024 (0x030C - 0x02E8)
class ANowCameraNodes : public AActor
{
public:
	struct FString                                     PointName;                                        		// 0x02E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fTweenTime;                                       		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFov;                                             		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANowCameraNodes*                             NextNode;                                         		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCheckForCollision : 1;                           		// 0x0300 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UDrawFrustumComponent*                       DrawFrustum;                                      		// 0x0304 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             DrawArrow;                                        		// 0x0308 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1627 ];

		return pClassPointer;
	};

	bool ShouldBeHiddenBySHOW_NavigationNodes ( );
};

UClass* ANowCameraNodes::pClassPointer = NULL;

// Class NowGame.NowCrossNodeActor
// 0x000B (0x02FC - 0x02F1)
class ANowCrossNodeActor : public AStaticMeshActor
{
public:
	unsigned long                                      m_bActive : 1;                                    		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fWarmUp;                                        		// 0x02F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1628 ];

		return pClassPointer;
	};

	void Tick ( float fDeltaTime );
	void eventReportToSubsystem ( );
	void SetActive ( unsigned long bActive );
	void InitCrossNodeActor ( struct FString sContentGuid, struct FVector vPos, struct FVector vRot );
};

UClass* ANowCrossNodeActor::pClassPointer = NULL;

// Class NowGame.NowDirectionalSunLight
// 0x001C (0x030C - 0x02F0)
class ANowDirectionalSunLight : public ADirectionalLight
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              YawOffset;                                        		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxIntensity;                                     		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotate;                                           		// 0x02FC (0x000C) [0x0000000000000000]              
	float                                              CloudFactor;                                      		// 0x0308 (0x0004) [0x0000000000000000]              

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
	void PostBeginPlay ( );
	void Notify ( class UObservable* Src );
	float Degree ( float DG );
	void eventUpdate ( float PartOfDay, float PartOfNyxMonth, float PartOfYear, float SunRiseAt );
};

UClass* ANowDirectionalSunLight::pClassPointer = NULL;

// Class NowGame.NowEmitterDayNight
// 0x0008 (0x02FC - 0x02F4)
class ANowEmitterDayNight : public AEmitter
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1630 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void TurnOnEmitter ( );
};

UClass* ANowEmitterDayNight::pClassPointer = NULL;

// Class NowGame.NowGFXHud
// 0x0094 (0x00D0 - 0x003C)
class UNowGFXHud : public UObject
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	class UNowGFXHudScene*                             GFXHudScene;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	class UClass*                                      GFXScenesHudClass;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	class UNowGFXScene*                                GFXScenes[ 0x1A ];                                		// 0x0048 (0x0068) [0x0000000000000000]              
	int                                                NumScenes;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              dTime;                                            		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              closeTimer;                                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UNowGFXScene*                                m_pLockpicking;                                   		// 0x00BC (0x0004) [0x0000000000000000]              
	unsigned char                                      TrackedUI;                                        		// 0x00C0 (0x0001) [0x0000000000000000]              
	struct FVector                                     m_vTrackUiLocation;                               		// 0x00C4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1631 ];

		return pClassPointer;
	};

	void eventItemAdded ( int iContainer );
	bool CloseStuff ( );
	bool NumberPressed ( int iNr );
	void GFXHudTick ( class UCanvas* C );
	void openGuildMenu ( );
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
	void InitGFXScene ( class APlayerController* Player );
	bool eventrightClickUse ( int bag, int Slot );
};

UClass* UNowGFXHud::pClassPointer = NULL;

// Class NowGame.NowGFXScene
// 0x002C (0x0198 - 0x016C)
class UNowGFXScene : public UGFxMoviePlayer
{
public:
	int                                                NUM_TRADEITEMS;                                   		// 0x016C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        NowPC;                                            		// 0x0170 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     OnlineSub;                                        		// 0x0174 (0x0004) [0x0000000000000000]              
	class UNowGFXHud*                                  MyGFXHud;                                         		// 0x0178 (0x0004) [0x0000000000000000]              
	int                                                iEnum;                                            		// 0x017C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0180 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseTick : 1;                                     		// 0x018C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreAllInput : 1;                              		// 0x018C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDontFocusOnOpen : 1;                             		// 0x018C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseNumberInput : 1;                              		// 0x018C (0x0004) [0x0000000000000000] [0x00000008] 
	class USoundCue*                                   OpenSceneSound;                                   		// 0x0190 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CloseSceneSound;                                  		// 0x0194 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1632 ];

		return pClassPointer;
	};

	class UGlobalInfo* GetGlobalInfo ( );
	void tcpReceive ( struct FString JsonData, unsigned long bStart, unsigned long bEnd );
	void eventDoTpcReceive ( struct FString JsonData, unsigned long bStart, unsigned long bEnd );
	class ANowTCPLink* eventGetTcpLink ( );
	void gfxTick ( float dTime );
	void MODebug ( struct FString msg );
	bool eventrightClickUse ( int bag, int Slot );
	void EscapePressed ( );
	void NumberPressed ( int iNr );
	void GFXClose ( );
	void eventOnClose ( );
	void PlaySound ( struct FString sSoundCue );
	void InitGFXScene ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXScene::pClassPointer = NULL;

// Class NowGame.NowGFXHudScene
// 0x08D4 (0x0A6C - 0x0198)
class UNowGFXHudScene : public UNowGFXScene
{
public:
	class ANowPawn*                                    MyPawn;                                           		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                xScreen;                                          		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                yScreen;                                          		// 0x01A0 (0x0004) [0x0000000000000000]              
	float                                              fResetSkillTrack;                                 		// 0x01A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisableTutorials : 1;                            		// 0x01A8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bHasMouseFocus : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasKeyFocus : 1;                                 		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEatNumbers : 1;                                  		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      debug_NoSkillUpdates : 1;                         		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      debug_NoItemUpdates : 1;                          		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      debug_NoFrameUpdates : 1;                         		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      debug_NoChatUpdates : 1;                          		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bShopItemsInit : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      m_FishingReady : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bRequestedRecv : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bRequestedSend : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_bCookingHeat : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bInventoryInit : 1;                               		// 0x01A8 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bGuildSceneOpen : 1;                              		// 0x01A8 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bShowingPaperdoll : 1;                            		// 0x01A8 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bHelpRequest : 1;                                 		// 0x01A8 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      m_bShowCommandMenu : 1;                           		// 0x01A8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      m_bGuildMembersChanged : 1;                       		// 0x01A8 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bShowingSkillBook : 1;                            		// 0x01A8 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bDidInit : 1;                                     		// 0x01A8 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bSkillInitalized : 1;                             		// 0x01A8 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bLastShiftToggle : 1;                             		// 0x01A8 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bToggle : 1;                                      		// 0x01A8 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bShowMail : 1;                                    		// 0x01A8 (0x0004) [0x0000000000000000] [0x01000000] 
	TArray< int >                                      DisabledTutorial;                                 		// 0x01AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FCachedTargetInfo                           lastTargetInfo;                                   		// 0x01B8 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineSubsystemNowGame*                     m_OnlineSub;                                      		// 0x01EC (0x0004) [0x0000000000000000]              
	TArray< struct FGFXChatMessage >                   ActiveChats;                                      		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FChatBubbleColors                           BubbleColors[ 0x2 ];                              		// 0x01FC (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FlagColorName[ 0xA ];                             		// 0x0244 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CoruptCounter[ 0x6 ];                             		// 0x02BC (0x0018) [0x0000000000000000]              
	int                                                PoisonCounter[ 0x6 ];                             		// 0x02D4 (0x0018) [0x0000000000000000]              
	struct FString                                     MailGuid;                                         		// 0x02EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_MailIndex;                                      		// 0x02F8 (0x0004) [0x0000000000000000]              
	int                                                iPendingDepositUpdate;                            		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              fDepositUpdateTimer;                              		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              m_fCoolDown;                                      		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                DEPOSIT_STEALING;                                 		// 0x0308 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_LOOT;                                     		// 0x030C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_HOUSE;                                    		// 0x0310 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_CHEST;                                    		// 0x0314 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DEPOSIT_GMBAG;                                    		// 0x0318 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FsStringIntPair >                   m_vSeedList;                                      		// 0x031C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTalkerGuid;                                      		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iNextGmSlot;                                    		// 0x0334 (0x0004) [0x0000000000000000]              
	struct FString                                     m_GMRankName[ 0x7 ];                              		// 0x0338 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftGlassInfo >                  m_vGlassInfo;                                     		// 0x038C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftGlassMaterialsA;                          		// 0x0398 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftGlassMaterialsB;                          		// 0x03A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftGlassMaterialsC;                          		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOverseerKeepNPC >                  m_KeepNPCList;                                    		// 0x03BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarPylon*                        m_PylonTgt;                                       		// 0x03C8 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarPlayerHouse*                  m_HouseTgt;                                       		// 0x03CC (0x0004) [0x0000000000000000]              
	struct FString                                     m_PetGuid;                                        		// 0x03D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vFishingLines;                                  		// 0x03DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vFishingHooks;                                  		// 0x03E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_GetFishingDepth;                                		// 0x03F4 (0x0004) [0x0000000000000000]              
	TArray< struct FReciveMail >                       m_vMailItems;                                     		// 0x03F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsBrokerCategory >                  m_vCategories;                                    		// 0x0404 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringIntPair >                   m_vLocations;                                     		// 0x0410 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vBrokerBuyOrderItems;                           		// 0x041C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vBrokerBuyOrderFillItems;                       		// 0x0428 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBuyOrderGuid;                                  		// 0x0434 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBrokerString;                                  		// 0x0440 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iSales;                                         		// 0x044C (0x0004) [0x0000000000000000]              
	int                                                m_iBrokerItems;                                   		// 0x0450 (0x0004) [0x0000000000000000]              
	int                                                m_iBrokerIndex;                                   		// 0x0454 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_vCombineItemsA;                                 		// 0x0458 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCombineItemsB;                                 		// 0x0464 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowPawn*                                    pPawnTarget;                                      		// 0x0470 (0x0004) [0x0000000000000000]              
	TArray< struct FsStringIntPair >                   vBagList;                                         		// 0x0474 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vOpenBags;                                        		// 0x0480 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vDyeMaterials;                                  		// 0x048C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCookingTools;                                  		// 0x0498 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCookingMaterials;                              		// 0x04A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsValidCookingTools >               m_vValidCookingTools;                             		// 0x04B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vPotionMakingVials;                             		// 0x04BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vPotionMakingMaterials;                         		// 0x04C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vRefiningMaterials;                             		// 0x04D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vExtractionMaterials;                           		// 0x04E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vExtractionCatalysts;                           		// 0x04EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftShieldType >                 m_vCraftShieldTypes;                              		// 0x04F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftShieldFrame >                m_vCraftShieldFrames;                             		// 0x0504 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftShieldMaterialsBase;                      		// 0x0510 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftShieldMaterialsCoat;                      		// 0x051C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftShieldMaterialsFrame;                     		// 0x0528 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftArmorParts >                 m_vCraftArmorParts;                               		// 0x0534 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftArmorStyle >                 m_vCraftArmorStyles;                              		// 0x0540 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringIntPair >                   m_vCraftArmorMaterials;                           		// 0x054C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LastArmorStyle;                                 		// 0x0558 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLastCraftStyle;                                  		// 0x0564 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLastCraftSlot;                                   		// 0x0570 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLastCraftPrimaryMatGuid;                         		// 0x057C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLastCraftSupportMatGuid;                         		// 0x0588 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftRangedShape >                m_vCraftRangedShapes;                             		// 0x0594 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftRangedType >                 m_vCraftRangedTypes;                              		// 0x05A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftRangedComp >                 m_vCraftRangedComps;                              		// 0x05AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftRangedMaterials;                          		// 0x05B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftWeaponHandle >               m_vCraftWeaponHandles;                            		// 0x05C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsCraftWeaponBlade >                m_vCraftWeaponBlades;                             		// 0x05D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftWeaponMaterials;                          		// 0x05DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vCraftWeaponCoatMaterials;                      		// 0x05E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LastBlade;                                      		// 0x05F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_LastHandle;                                     		// 0x0600 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTextureRenderTarget2D*                      m_pCraftingRenderTexture;                         		// 0x060C (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorWeaponPreviewCrafting*    m_pCraftingActor;                                 		// 0x0610 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sWorkBench;                                     		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringIntPair >                   vVendorBuy;                                       		// 0x0620 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vVendorSell;                                      		// 0x062C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           vPayment;                                         		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsStringStringPair >                vItemsVendorSells;                                		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fCheckOpenWindows;                              		// 0x0650 (0x0004) [0x0000000000000000]              
	TArray< struct FsOpenWindows >                     vOpenWindows;                                     		// 0x0654 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatar*                             pStaticTalker;                                    		// 0x0660 (0x0004) [0x0000000000000000]              
	int                                                m_iBankerIndex;                                   		// 0x0664 (0x0004) [0x0000000000000000]              
	float                                              fFillInventoryTimer;                              		// 0x0668 (0x0004) [0x0000000000000000]              
	float                                              fNextSlotUpdate;                                  		// 0x066C (0x0004) [0x0000000000000000]              
	TArray< struct FsSlotUpdate >                      m_vSlotUpdates;                                   		// 0x0670 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vMembers;                                       		// 0x067C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_vMemberRanks;                                   		// 0x0688 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_Wars;                                           		// 0x0694 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_OutGoingWars;                                   		// 0x06A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_IncomingWars;                                   		// 0x06AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsTreasurerItemStruct >             vTreasurerItems;                                  		// 0x06B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vHouseFriendNames;                              		// 0x06C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarPlayerHouse*                  m_pHouse;                                         		// 0x06D0 (0x0004) [0x0000000000000000]              
	TArray< struct FBuyItems >                         itemArray;                                        		// 0x06D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      EngineerType;                                     		// 0x06E0 (0x0001) [0x0000000000000000]              
	TArray< struct FsAttributeToolTips >               m_vAttributeToolTips;                             		// 0x06E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTextureRenderTarget2D*                      m_pCharacterRenderTexture;                        		// 0x06F0 (0x0004) [0x0000000000000000]              
	class ANowSkeletalMeshActorDoll*                   m_pPaperdoll;                                     		// 0x06F4 (0x0004) [0x0000000000000000]              
	int                                                taskIndex;                                        		// 0x06F8 (0x0004) [0x0000000000000000]              
	struct FString                                     TradeableItems[ 0x11 ];                           		// 0x06FC (0x00CC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarNpcQuestGiver*                QuestNpc;                                         		// 0x07C8 (0x0004) [0x0000000000000000]              
	struct FTaskLocation                               m_Locations[ 0xA ];                               		// 0x07CC (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsTaskIndex >                       m_Tasks;                                          		// 0x086C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMurderIndexPair >                  Murderers;                                        		// 0x0878 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MurderCounts;                                     		// 0x0884 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MurderCountsString;                               		// 0x0890 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fLastSendMurder;                                  		// 0x089C (0x0004) [0x0000000000000000]              
	int                                                BooksTotal;                                       		// 0x08A0 (0x0004) [0x0000000000000000]              
	TArray< struct Fs_Books >                          Books;                                            		// 0x08A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsKeyBinds >                        vKeyBinds;                                        		// 0x08B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsIntIntPair >                      m_vResolutions;                                   		// 0x08BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iSelectedPet;                                   		// 0x08C8 (0x0004) [0x0000000000000000]              
	int                                                m_iSelectedCommand;                               		// 0x08CC (0x0004) [0x0000000000000000]              
	int                                                m_iAllPets;                                       		// 0x08D0 (0x0004) [0x0000000000000000]              
	class UUIInfo*                                     pUiInfo;                                          		// 0x08D4 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatar*                             pTalker;                                          		// 0x08D8 (0x0004) [0x0000000000000000]              
	float                                              m_fServerCooldown;                                		// 0x08DC (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_vPetReceiptGuids;                               		// 0x08E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vPetReceiptName;                                		// 0x08EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iBreedA;                                        		// 0x08F8 (0x0004) [0x0000000000000000]              
	int                                                m_iBreedB;                                        		// 0x08FC (0x0004) [0x0000000000000000]              
	struct FString                                     sLastPetInfo;                                     		// 0x0900 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fPendingUpdatePetInfo;                            		// 0x090C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           m_vFriendNames;                                   		// 0x0910 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vGuildMembers;                                  		// 0x091C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fAddFriendTimer;                                		// 0x0928 (0x0004) [0x0000000000000000]              
	TArray< struct FSkillData >                        vAllSkillsData;                                   		// 0x092C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iSkillAddUpdates;                                 		// 0x0938 (0x0004) [0x0000000000000000]              
	int                                                vPetFramesCreated[ 0x6 ];                         		// 0x093C (0x0018) [0x0000000000000000]              
	TArray< struct FString >                           vShowingPetUi;                                    		// 0x0954 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FlagColor[ 0xA ];                                 		// 0x0960 (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                currentDegree;                                    		// 0x09D8 (0x0004) [0x0000000000000000]              
	int                                                intervall;                                        		// 0x09DC (0x0004) [0x0000000000000000]              
	float                                              unRotToRad;                                       		// 0x09E0 (0x0004) [0x0000000000000000]              
	float                                              mRadToDeg;                                        		// 0x09E4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortByGlassLabel__Delegate;                     		// 0x09E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByShieldTypeID__Delegate;                   		// 0x09F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByShieldFrameID__Delegate;                  		// 0x0A00 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByArmorStyleLabel__Delegate;                		// 0x0A0C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByCompSkill__Delegate;                      		// 0x0A18 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByShapeSkill__Delegate;                     		// 0x0A24 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByTypeSkill__Delegate;                      		// 0x0A30 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortDelStringStringPair__Delegate;              		// 0x0A3C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortBuyItemByName__Delegate;                    		// 0x0A48 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByHandleSkill__Delegate;                    		// 0x0A54 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SortByBladeSkill__Delegate;                     		// 0x0A60 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1633 ];

		return pClassPointer;
	};

	int getChatNumLines ( );
	struct FString getChatLine ( int iLine );
	int allowWhisper ( struct FString sAvatarName );
	void eventshowNotice ( struct FString sMessage );
	void showChatInput ( );
	int GetEnumFromName ( struct FString sName );
	void TcpSend ( struct FString sScript, struct FString sData, unsigned long bStart, unsigned long bEnd );
	void addChatMessage ( struct FString Message, struct FString Author, int Channel );
	void setChatInput ( struct FString sInput );
	void tcpSaveConfigJson ( struct FString JsonData );
	void sendChatMessage ( struct FString sMsg );
	class ANowTCPLink* eventGetTcpLink ( );
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
	void eventinputBox ( struct FString sId, struct FString sMessage, struct FString sTitle, unsigned long bRestricted );
	void eventmsgBox ( struct FString sId, struct FString sMessage, struct FString sTitle, unsigned long bResponse );
	void eventinfoBox ( struct FString sMessage, struct FString sTitle );
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
	void RemoveAllBars ( );
	void removeModBar ( struct FString Id );
	void addModBar ( struct FString Id, struct FString DisplayName, struct FString Description, struct FString Icon, float etaSeconds, struct FString cancelDesc, unsigned long bAutoRemove );
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
	void removePet ( );
	void removeAllPets ( );
	void setPetInRange ( struct FString petGUID, unsigned long bInRange );
	void showPetInformation ( struct FString petGUID );
	void setPetAttack ( struct FString petGUID, struct FString Label, int ATTACK, unsigned long bEnabled );
	void setPetAttribute ( struct FString petGUID, struct FString Label, struct FString Value, int lockState, struct FString sToolTip );
	void setPetStat ( struct FString petGUID, struct FString Label, int Value, struct FString sToolTip );
	void addPet ( struct FString petGUID, struct FString DisplayName, struct FString skillName );
	void FeedPet ( struct FString sPetGuid, struct FString sItemGuid );
	void SetPetLockState ( struct FString sGuid, struct FString sLabel, int iLockState );
	void AddPetInfo ( int iPetIndex );
	void clearPets ( );
	void updatePetInfo ( );
	void TalkTransferReceipts ( );
	void TalkCheckTraining ( int iIndex );
	void TalkCheckBreeding ( int iIndex );
	void TalkBreedFemaleF ( int iIndex );
	void TalkBreedFemaleE ( int iIndex );
	void TalkBreedFemaleD ( int iIndex );
	void TalkBreedFemaleC ( int iIndex );
	void TalkBreedFemaleB ( int iIndex );
	bool CheckBreedEquipment ( );
	void TalkBreedFemaleA ( int iIndex );
	void TalkBreedMaleF ( int iIndex );
	void TalkBreedMaleE ( int iIndex );
	void TalkBreedMaleD ( int iIndex );
	void TalkBreedMaleC ( int iIndex );
	void TalkBreedMaleB ( int iIndex );
	void TalkBreedMaleA ( int iIndex );
	void TalkUnReceipt ( int iIndex );
	void TalkReceipt ( int iIndex );
	void TalkUnstable ( int iIndex );
	void TalkTrain ( int iIndex );
	void TalkStable ( int iIndex );
	void TransferReceipts ( );
	void GetPetReceipts ( );
	void GetStabled ( );
	void CheckTrain ( );
	void CheckBreed ( );
	void Breed ( class ANowAtlasAvatarAi* pPetA, class ANowAtlasAvatarAi* pPetB );
	void UnReceipt ( int iIndex );
	void Receipt ( int iIndex );
	void UnStable ( int iIndex );
	void Train ( class ANowAtlasAvatarAi* pPet );
	void Stable ( class ANowAtlasAvatarAi* pPet );
	void AddTutorialPickables ( );
	void eventcloseNpc ( );
	void clearNpc ( );
	void addTalkerResponse ( int ChatID, int TargetID, struct FString uscript, struct FString msg );
	void addTalkerChat ( int Id, struct FString msg );
	void showNpc ( struct FString npcName, struct FString npcExit, struct FString npcBack );
	void StartTalker ( );
	void eventTerritoryOwnerVendorBad ( struct FString sGuildName );
	void eventGuildOnlyVendorBad ( struct FString sGuildName );
	void LoadNpcInfo ( );
	void LoadUiInfoTalker ( class UUIInfoTalker* pInfo, class ANowAtlasAvatar* pMyTalker );
	void SendTalkerRequest ( );
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
	void addResOption ( int Width, int Height );
	void setActiveResOption ( int Width, int Height );
	void ApplyKeyBinding ( struct FString Id, struct FString Key, unsigned long bCtrl, unsigned long bAlt, unsigned long bShift );
	void SetConfigVariableFloat ( struct FString sVariable, float fValue );
	struct FString GetStringFromSetting ( unsigned char eValue );
	unsigned char GetSettingFromString ( struct FString sValue );
	void GetCurrentRes ( int* ResX, int* ResY );
	struct FString GetCurrentResString ( );
	void SetConfigVariableString ( struct FString sVariable, struct FString sValue );
	void RequestResOptions ( );
	void SetConfigVariableBool ( struct FString sVariable, unsigned long bValue );
	void InitOptions ( );
	void SetFoliageCullDistanceScale ( float fValue );
	void SetPostProcessAAType ( int iValue );
	void SetMaxAnisotropy ( int iValue );
	void SetAllowPostprocessMLAA ( unsigned long bValue );
	void SetDynamicShadows ( unsigned long bValue );
	void SetAllowAmbientOcclusion ( unsigned long bValue );
	void SetBloom ( unsigned long bValue );
	void SetAllowScreenDoorFade ( unsigned long bValue );
	bool GetAllowScreenDoorFade ( );
	void clearBookList ( );
	void setPlayerCurrency ( int coins );
	void refreshBookList ( unsigned long bFiltered );
	void addBook ( int Id, struct FString Title, struct FString Author, struct FString Skill, int MinSkill, int MaxSkill, struct FString Category, int Cost, int readable, struct FString Description );
	void toggleLibrary ( unsigned long bVisible, unsigned long bPublished );
	void PurchasePublished ( struct FString sGuid, struct FString sTitle, int iCost, struct FString sAvatar );
	void BuySkillBook ( int BookIndex );
	void eventAddBooksToFlash ( );
	void eventAddBookToArray ( struct FString inContentName, struct FString inDisplayName, struct FString inAuthor, struct FString inSkillName, int inMinSkill, int inMaxSkill, struct FString inBookGroup, int inBookCost, int inBookStatus, struct FString inBookDesc );
	void InitLibraryNoCheck ( );
	void InitLibrary ( unsigned long bNoOwnerCheck );
	void GetBooks ( );
	void getGuildMembers ( TArray< struct FString >* vMembers, TArray< int >* vMemberRanks, TArray< int >* vMemberOnline );
	void toggleHelp ( );
	void tcpRequestHelp ( struct FString sJsonObject );
	void addMurderer ( struct FString PlayerName );
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
	void eventsetTitle ( struct FString sTitle );
	void eventclearTitles ( );
	void eventsetEquipped ( struct FString sSlotName, struct FString sData );
	void showPaperdoll ( unsigned long bVisible );
	void setPaperdollStat ( struct FString Id, struct FString Category, struct FString Label, struct FString Value, int lockState, struct FString ToolTip );
	void startRenderToTextureDoll ( );
	void stopRenderToTextureDoll ( );
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
	void closeEngineer ( );
	void showEngineer ( );
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
	bool enumerateHouseFriendNames ( TArray< struct FString >* vFriendName );
	void RemoveHouseFriendNative ( struct FString FriendName );
	void AddHouseFriendNative ( struct FString FriendName );
	void TalkGuardResponse ( int iIndex );
	void GuardResponse ( int iResponse );
	void clearTreasurerItems ( );
	void closeTreasurer ( );
	void showTreasurer ( );
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
	void initGuildUI ( struct FString guildAbbrev, unsigned long bMembers, unsigned long bDiplomacy, unsigned long bOptions, unsigned long bCanInvite, unsigned long bCanKick, unsigned long bCanPromote, unsigned long bCanDemote, int maxRank, unsigned long bManageWars, unsigned long bCityName );
	void guildSendChallenge ( struct FString guildName );
	void guildCancelWar ( struct FString guildName );
	void guildCancelChallenge ( struct FString guildName );
	void guildAcceptedChallenge ( struct FString guildName );
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
	bool IsGuildLeader ( );
	bool CanManageWars ( );
	bool CanSeeInfo ( );
	bool CanKick ( );
	bool CanPromoteDemote ( );
	void GuildSetCityName ( struct FString sCityName );
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
	void eventcloseContainer ( int iDeposit );
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
	void eventAddPendingStaticTradUpdate ( int iSessionType );
	void TickSlotUpdate ( float fDeltaTime );
	bool CanChangeSlot ( struct FString sGuid );
	void UpdateSlot ( int iSlot, int iDeposit );
	void InitInventoryItems ( );
	void eventReInitInventory ( );
	void OpenInventory ( );
	void FillInventory ( unsigned long bForce );
	void InitBanker ( );
	void ReFillBankInventory ( );
	void FillBankInventory ( );
	void eventInitLoot ( );
	bool TryParseTradeCommand ( struct FString sCmd, int iBag, int iSlot );
	void StaticTradeFrom ( int iBag, int iSlot, int iToSlot );
	void StaticTradeChangeSlot ( int iBag, int iSlot, int iToSlot );
	void StaticTradeTo ( struct FString sItemGuid, int iBag, int iSlot );
	void StaticTradeCancel ( );
	void ClearLootInventory ( );
	void eventInitHouseTrade ( );
	void ClearHouseInventory ( );
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
	void SendUpdate ( int RuleIndex, int NewValue );
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
	void showVendorWindow ( struct FString sVendorGuid, struct FString sVendorName, unsigned long bBuyIllegal, unsigned long bBuyStolen, int iTaxes );
	int SortDelStringStringPair ( struct FsStringStringPair A, struct FsStringStringPair B );
	void eventSortItemsVendorSells ( );
	void eventAddToItemsVendorSells ( struct FString sName, struct FString sJson );
	void eventFinalizeVendorPaymentArray ( );
	void HackClearPurchase ( );
	void RemoveFromPurchase ( struct FString sGuid );
	void AddToPurchase ( struct FString sGuid, int iQuantity );
	void RemoveFromSale ( struct FString sGuid );
	int eventGetVendorSaleIndex ( struct FString sGuid );
	bool CanAddMoreItemsToVendor ( );
	void AddToSale ( struct FString sGuid );
	void VendorAccepted ( );
	void SetAiTaxes ( );
	void InitVendorNoCheck ( );
	void InitVendor ( unsigned long bNoOwnerCheck );
	bool CanAddItemToVendor ( struct FString sItemGuid );
	void SendGetAiTaxesReport ( );
	void SendSetAiTaxes ( struct FString sRespones );
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
	void eventCraftCompleteFX ( );
	bool CanCraft ( );
	void stopRenderToTextureCrafting ( );
	void startRenderToTextureCrafting ( );
	void ResetCrafting ( );
	class ANowAtlasAvatarStM* GetTargetStaticMeshAvatar ( );
	class ANowStaticMeshActor* GetTargetStaticMesh ( );
	void DoCraftingEquipment ( );
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
	void InitWeaponCrafting ( unsigned long bReInit );
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
	void InitRangedCrafting ( unsigned long bReInit );
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
	bool eventIsValidSlot ( struct FString sStyle, struct FString sSlot );
	void UpdateArmorSlots ( struct FString sStyle, struct FString sLastStyle );
	void UpdateMaterialSlots ( struct FString sStyle, struct FString sLastStyle );
	void ChangedCraftArmor ( struct FString sStyle, struct FString sSlot, struct FString sPrimaryMatGuid, struct FString sSupportMatGuid );
	int SortByArmorStyleLabel ( struct FsCraftArmorStyle A, struct FsCraftArmorStyle B );
	void eventFinalizeArmorArrays ( );
	void eventAddStyle ( struct FString sLabelName, struct FString sSendName, struct FString sSkillName, int iMaterialFlag, int iPieceFlags, float fVisMinValue, float fVisMaxValue, float fnVisMinValue, float fnVisMaxValue );
	void eventAddPart ( struct FString sLabelName, int iFlag );
	void eventAddArmorMaterial ( struct FString sLabelName, int iFlag );
	void InitArmorCrafting ( unsigned long bReInit );
	bool IsValidArmor ( struct FString sStyle, struct FString sSlot );
	struct FString GetPreviewStringArmor ( struct FString sStyle, struct FString sSlot, struct FString sPrimaryMatGuid, struct FString sSupportMatGuid );
	void LogArmorArrays ( );
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
	void InitShieldCrafting ( unsigned long bReInit );
	struct FString GetPreviewStringShield ( struct FString sStyle, struct FString sFrame, struct FString sPrimaryMatGuid, struct FString sCoatMatGuid, struct FString sFrameMatGuid );
	void InitShieldArrays ( );
	void closeExtraction ( );
	void showExtraction ( struct FString sWorkbench, unsigned long bAllowCatalyst );
	void ExtractItem ( struct FString sPrimaryMatGuid, struct FString sCatalystMatGuid );
	void eventFinalizeExtractionArrays ( );
	void InitExtraction ( unsigned long bReInit );
	void InitExtractionArrays ( );
	void closeRefining ( );
	void showRefining ( struct FString sWorkbench, unsigned long bAllowCatalyst );
	void RefineItem ( struct FString sPrimaryMatGuid, struct FString sCatalystMatGuidA, struct FString sCatalystMatGuidB );
	void eventFinalizeRefiningArrays ( );
	void InitRefining ( unsigned long bReInit );
	void InitRefiningArrays ( );
	void InitSkinning ( );
	void closePotionMaking ( );
	void showPotionMaking ( struct FString sWorkbench, int iNumSlots );
	void CraftPotion ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sIngredientGuid9, struct FString sIngredientGuid10, struct FString sIngredientGuid11, struct FString sIngredientGuid12, struct FString sIngredientGuid13, struct FString sIngredientGuid14, struct FString sName );
	void eventFinalizePotionMakingArrays ( );
	void InitPotionMaking ( unsigned long bReInit );
	int GetSlotNumbersPotionMaking ( );
	void SendCraftPotion ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sIngredientGuid9, struct FString sIngredientGuid10, struct FString sIngredientGuid11, struct FString sIngredientGuid12, struct FString sIngredientGuid13, struct FString sIngredientGuid14, struct FString sName, unsigned long bRecipe );
	void InitPotionMakingArrays ( );
	void closeCooking ( );
	void showCooking ( struct FString sWorkbench, int iSlots );
	void CookItem ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sIngredientGuid9, struct FString sIngredientGuid10, struct FString sIngredientGuid11, struct FString sIngredientGuid12, struct FString sIngredientGuid13, struct FString sIngredientGuid14, struct FString sName );
	void eventFinalizeCookingArrays ( );
	void InitCooking ( unsigned long bReInit );
	int GetSlotNumbersCooking ( );
	void SendCookItem ( struct FString sToolGuid, struct FString sIngredientGuid1, struct FString sIngredientGuid2, struct FString sIngredientGuid3, struct FString sIngredientGuid4, struct FString sIngredientGuid5, struct FString sIngredientGuid6, struct FString sIngredientGuid7, struct FString sIngredientGuid8, struct FString sIngredientGuid9, struct FString sIngredientGuid10, struct FString sIngredientGuid11, struct FString sIngredientGuid12, struct FString sIngredientGuid13, struct FString sIngredientGuid14, struct FString sName, unsigned long bRecipe );
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
	void eventRemoveOpenBagByIndex ( int iIndex );
	int eventIsBagOpen ( struct FString sGuid );
	void eventInitBag ( struct FString sBagGuid, struct FString sBagName, int iBagSize, unsigned long bTrack );
	void FillBag ( struct FString sBagGuid, int iDepositID, int iBagSize );
	void eventClosePilfering ( );
	void eventInitPilfering ( );
	void ClearPilferingInventory ( );
	void closeCombine ( );
	void showCombine ( );
	void eventFinalizeCombineItemsArrays ( );
	void CombineItems ( struct FString sItemGuid1, struct FString sItemGuid2 );
	void InitCombineItems ( );
	void InitCombineItemsArray ( );
	void SendCombineItems ( struct FString sItemA, struct FString sItemB );
	void renderBrokerTree ( );
	void addBrokerLocation ( struct FString sLocation, int locX, int locY );
	void showMap ( int locX, int locY, int destX, int destY );
	void clearBrokerLocations ( );
	void closeBroker ( );
	void refreshBrokerSelling ( );
	void refreshBrokerItems ( int iCurrentPage, unsigned long bNextPage );
	void clearBrokerSelling ( );
	void clearBrokerItems ( );
	void eventaddBrokerSetItem ( struct FString sGuid, struct FString sData, struct FString sSetGuid );
	void eventaddBrokerOrder ( struct FString sGuid, struct FString sData );
	void eventaddBrokerSelling ( struct FString sGuid, struct FString sData );
	void eventaddBrokerItem ( struct FString sGuid, struct FString sData );
	void clearBrokerCategories ( );
	void addBrokerCategory ( int iID, struct FString sDisplayName, int iParent );
	void showBroker ( struct FString sCityName, int iSellFeePercent, unsigned long bVendorMode, unsigned long bVendorOwner, int iForcedCategory, struct FString sBrokerLink );
	void GetBrokerSetItem ( struct FString sGuid, struct FString sContentGuid, struct FString sData, struct FString sBagGuid );
	void GetBrokerItem ( struct FString sGuid, struct FString sContentGuid, struct FString sData, int iType );
	void FillBuyOrder ( struct FString sGuid );
	void FillOrderNewWindow ( struct FString sGuid );
	void NewBuyOrder ( int iType, struct FString sGuid, int iQuantity, int iCost, struct FString sAvatar, struct FString sDescription );
	void BrokerSellItem ( struct FString sItemGuid, int iCost, int iDuration, struct FString sDesc, struct FString sSetName );
	void BrokerCancelOrder ( struct FString sItemGuid );
	void BrokerCancelItem ( struct FString sItemGuid );
	void BrokerBuyItem ( struct FString sItemGuid );
	void RefreshBrokerSell ( );
	void eventSetPendingRefreshBrokerSell ( );
	void RefreshBrokerBuy ( );
	void eventSetPendingRefreshBrokerBuy ( );
	struct FString eventGetLocationFromID ( int iID );
	int eventGetIDFromLocation ( struct FString sLocation );
	void InitBrokerArrays ( );
	void InitBrokerItemArrays ( );
	void eventAddCategory ( struct FString sName, int iID, int iParent );
	void eventAddLocation ( int iID, struct FString sName );
	void BrokerCollectIncome ( );
	void InitHouseTradeBroker ( );
	void InitCategoryBroker ( int iCategory );
	void InitBroker ( );
	void InitBuyOrderItems ( );
	void InitCategoriesArray ( );
	void InitLocationArray ( );
	int ModifyTaxesBroker ( int iTaxes );
	bool CanSellToBroker ( );
	void GenerateAndAddBrokerItem ( struct FString sGuid, struct FString sContentGuid, struct FString sData, int iType );
	void SendFillBuyOrder ( struct FString sOrderGuid, struct FString sItemGuid );
	void SendBuyOrder ( int iType, struct FString sItemGuid, int iQuantity, int iCost, struct FString sAvatar, struct FString sDescription );
	void SendGetBuyItemInfo ( struct FString sItemGuid );
	void SendCancelItem ( struct FString sItemGuid );
	void SendBuyItem ( struct FString sItemGuid );
	void SendSellItem ( struct FString sItemGuid, int iCost, int iDuration, struct FString sDesc, struct FString sSetName );
	void SendGetSell ( );
	void SendGetItems ( int iCategory, int iPage, struct FString sSortField, unsigned long bSortAscending );
	void showReceiveMail ( int iMaxInbox, int iMaxOutgoing );
	void closeMailWindow ( );
	void eventreceiveMailRemoveItem ( struct FString sGuid );
	void eventoutgoingMailRemoveItem ( struct FString sGuid );
	void clearOutgoingMailItems ( );
	void clearMailItems ( );
	void eventoutgoingMailAddItem ( struct FString sData, struct FString sSender, int iCoD );
	void eventreceiveMailAddItem ( struct FString sData, struct FString sSender, int iCoD );
	void MailSelectedTab ( struct FString sLabel );
	void TakeAllMailItems ( );
	void CancelMailItem ( struct FString sGuid );
	void ReturnMailItem ( struct FString sGuid );
	void SubmitSendMail ( struct FString sRecipient, int iCoD, struct FString sGuid );
	void ReceiveMailItem ( struct FString sGuid, int iCost );
	void UpdateMail ( );
	void InitMail ( );
	void SendRequestOutgoingMail ( );
	void SendRequestMail ( );
	void CancelMail ( struct FString sGuid );
	void ReturnMail ( struct FString sGuid );
	void CollectAllMail ( );
	void CollectMail ( struct FString sGuid );
	void RequestMail ( TArray< struct FReciveMail >* Items );
	void SendMail ( struct FString sTargetName, int iCashOnDelivery, struct FString sGuid );
	void closeNote ( struct FString sGuid );
	void getNote ( struct FString sGuid, unsigned long bEditable );
	void closeDrawing ( struct FString sGuid );
	void getDrawing ( struct FString sGuid, unsigned long bEditable );
	void getBook ( struct FString sGuid, unsigned long bEditable, int iMaxPages );
	void SetBookTitle ( struct FString sGuid, struct FString sTitle );
	void CreateNote ( struct FString sGuid );
	void UpdateNote ( struct FString sData );
	void UpdateDrawing ( struct FString sData );
	void UpdateBook ( struct FString sData );
	void InitPlayerBookTest ( struct FString sTestString );
	void InitPlayerNote ( );
	void InitPlayerDrawing ( );
	void InitPlayerBook ( );
	void AddNewNote ( struct FString sGuid );
	void GetPlayerNoteInfo ( struct FString* sGuid );
	void GetPlayerDrawingInfo ( struct FString* sGuid );
	void GetPlayerBookInfo ( struct FString* sBookGuid, int* iMaxPages, int* iCanEdit );
	struct FString GetLastItemUsedGuid ( );
	void eventInitChest ( );
	void ClearChestInventory ( );
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
	void InitPlaceHouseTradeBroker ( );
	void SendPlaceVendor ( struct FString sGuid );
	void FillContractList ( );
	void showPlayerVendorWindow ( struct FString sVendorGuid, struct FString sOwner, unsigned long bCanModify );
	void PlayerVendorAdd ( struct FString sGuid, int iCost, struct FString sDesc, struct FString sSetName );
	void PlayerVendorCancel ( struct FString sGuid );
	void PlayerVendorPurchase ( struct FString sGuid );
	void ReInitPlayerVendor ( );
	void PlayerVendorCollect ( );
	void InitPlayerVendor ( );
	void AddPlayerVendorItemSellInfo ( struct FString sGuid, struct FString sContentGuid, int iCost, int iQuantity, struct FString sItemInfo );
	void AddPlayerVendorItemSell ( struct FString sGuid, struct FString sContentGuid, int iCost, int iQuantity );
	void AddPlayerVendorItemBuy ( struct FString sGuid, struct FString sContentGuid, int iCost, int iQuantity, struct FString sItemName );
	void RequestPlayerVendorBuy ( );
	void RequestPlayerVendorSell ( );
	void showPetPaperdoll ( struct FString sPetGuid, struct FString sPetName, int iMountType );
	void PetEquippedItem ( struct FString sGuid, struct FString sSlotName );
	void UpdatePetEquipped ( );
	void closeConstruction ( );
	void clearConstructionNPCs ( );
	void eventaddConstructionNPC ( int iID, struct FString sName );
	void setConstruction ( int iWoodCur, int iWoodMax, int iStoneCur, int iStoneMax, int iMetalCur, int iMetalMax, int iHitpoints, int iHitpointsMax );
	void showConstruction ( int iHouseId, unsigned long bChangeLock, unsigned long bNewKey, unsigned long bDropTarget );
	void DismissHouseNPC ( int iID );
	void AddConstructionMaterial ( int iIndex, struct FString sGuid );
	void InitTerritoryStructure ( );
	void eventInitHouseConstruction ( );
	void AddTerritoryNpcs ( );
	void DismissTerritoryStructureNPC ( int iID );
	void AddTerritoryStructureMaterial ( struct FString sGuid );
	void InitPetBag ( class ANowAtlasAvatarAi* pPet );
	void ReInitPetBags ( );
	int GetPetBagSize ( class ANowAtlasAvatarAi* pPet );
	void PetUnEquipAll ( struct FString sPetGuid );
	void setAdvancedStats ( int iStructures, int iArea, int iOverlap, int iTotal, unsigned long bLinked, int iNPCCost, int iTotalCPCost, int iCPIncome, int iCPCost, int iTotalCP, int iRadiusTgt, int iOffTgt, int iDefTgt, int iTierRadiusMax, int iTierOffMax, int iTierDefMax );
	void setPylonStats ( int iHpCur, int iHpMax, int iAoe, int iDef, int iOff );
	void eventAddBlackList ( struct FString sPlayerName );
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
	void clearOverseerSlots ( );
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
	void SendSwapNPC ( int IndexFrom, int indexToo );
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
	void eventInitGMBag ( unsigned long bPawnTarget );
	void AddGMBagItem ( struct FString sItemGuid, struct FString sData );
	void GMSpawnItem ( struct FString sGuid );
	void InitGMSpawnItem ( struct FString sItemBase );
	void FillGMSpawnItemList ( struct FString sItemBase );
	void PlaceWorkbench ( struct FString sGuid );
	void InitPlaceWorkbench ( );
	void SendPlaceWorkbench ( struct FString sGuid );
	void FillWorkbenchList ( );
	void eventshowClassSelection ( );
	void hideVoiceTutorialButton ( );
	void showVoiceTutorialButton ( struct FString sId );
	void SelectedClass ( struct FString sClass );
	void OpenNoobGate ( );
	void SetVarD1 ( );
	void SetVarC2 ( );
	void SetVarC1 ( );
	void eventSetVarB4 ( );
	void SetVarB3 ( );
	void SetVarB2 ( );
	void SetVarB1 ( );
	void SetVarA1 ( );
	void SetClassSelect ( int iVar );
	void SetNoobHelp ( int InPC, int iVar );
	class ANowAtlasAvatarPlayerHouse* eventGetAHouse ( );
	void SetTax ( );
	void CollectTax ( );
	void DonateTax ( );
	void SendDonateTaxes ( struct FString sRespones );
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
	void eventaddTaxRow ( struct FString sName, int iProm, int iIncome, int iUpkeep, int iPromUpkeep );
	void clearTaxRows ( );
	void showTaxManager ( );
	void InitEconomist ( );
	void GetUpkeepLogs ( );
	void eventAddToTitleList ( struct FString sTitle, int iIndex );
	void ChangedTitle ( int iID );
	void ChangedTitleString ( struct FString sTitle );
	void InitTitles ( );
	void DoSetTitle ( int iID );
	void FillTitleList ( );
	void closeNoticeboard ( );
	void showNoticeboard ( struct FString sGuid, struct FString sName, struct FString sController, unsigned long bModerate );
	void DestroyBook ( struct FString sGuid );
	void InitNoteboard ( );
	void GetAndSetTalkerGuid ( );
	void TalkStoneCutter ( int iIndex );
	void TakeStone ( int iAmount );
	void TalkMiner ( int iIndex );
	void TakeOre ( int iAmount );
	void eventAddSeed ( struct FString sName, int iSlot );
	void eventResetSeedList ( );
	void GiveSeed ( int iIndex );
	void GetInfo ( int iIndex );
	void FindCropsFarmerSeeds ( );
	void DoGetInfo ( );
	void ChangeCrops ( int iSlot );
	void TalkAnimalBreeder ( int iIndex );
	void ChangeBreed ( class ANowAtlasAvatarAi* pPetA );
	void TalkGateKeeper ( int iIndex );
	void GatePayFee ( );
	void GatePassword ( struct FString sPassword );
	void ChangeGateRules ( int iNewRule, struct FString sString );
	void showGMHouseWindow ( int iHouseId, struct FString sOwner, struct FString sGuild, int iHitpoints, int iTierr, struct FString sModules );
	void GMHouseAction ( struct FString sAction );
	bool GMHouseInputBoxResponse ( struct FString msgBoxId, struct FString sResponse );
	struct FString GetModulesString ( );
	void eventInitGMHouse ( unsigned long bReInit );
	void TalkGuildSentinel ( int iIndex );
	void SetTSStructureName ( struct FString sNewName );
	void eventsetHelmetLayer ( struct FString sLayer, float fOpacity );
	class UOnlineSubsystemNowGame* GetSubSystem ( );
	bool eventisStaticBag ( int iDeposit );
	void toggleMouseMode ( unsigned long bVisible );
	void ConsoleCommand ( struct FString sCmd );
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
	void setMousePosition ( int xmouse, int ymouse );
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
	void AddTarget ( struct FString tgtName, float hpCur, float hpMax, unsigned long inCombat, int Flag, unsigned long bClient, struct FString relation );
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
	void TickPendingDepositUpdate ( float fDeltaTime );
	void gfxTick ( float dTime );
	void RemoveMailDelegate ( );
	void InitMailDelegate ( );
	void eventLoggedOut ( );
	void InitGFXScene ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void TakeMouseFocus ( unsigned long bOn );
	void eventOnClose ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventCheckAndSetCoolDown ( float fTimePassed );
	void eventSetPendingDepositUpdate ( int iDeposit );
	void DoConsoleCommand ( struct FString sCmd );
};

UClass* UNowGFXHudScene::pClassPointer = NULL;

// Class NowGame.NowGFXSceneLockpicking
// 0x0018 (0x01B0 - 0x0198)
class UNowGFXSceneLockpicking : public UNowGFXScene
{
public:
	int                                                m_iNumPins;                                       		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                m_iDifficulty;                                    		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                m_iSkillLevel;                                    		// 0x01A0 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        m_NowPC;                                          		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystemNowGame*                     m_OnlineSub;                                      		// 0x01A8 (0x0004) [0x0000000000000000]              
	class ANowAtlasAvatarKeySwitchObjectChest*         m_ChestAvatar;                                    		// 0x01AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1634 ];

		return pClassPointer;
	};

	void initLockpicking ( int iNumPins, int iDifficulty, int iSkillLevel, int iNumPicks );
	void GFXClose ( );
	void LockOpened ( );
	void PickBroken ( );
	void InitGFXScene ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void GetChestStats ( );
	void SendOpenLock ( );
	void SendPickBroken ( );
};

UClass* UNowGFXSceneLockpicking::pClassPointer = NULL;

// Class NowGame.NowGFXSceneMainMenu
// 0x00CC (0x0264 - 0x0198)
class UNowGFXSceneMainMenu : public UNowGFXScene
{
public:
	unsigned char                                      eCurrentStep;                                     		// 0x0198 (0x0001) [0x0000000000000000]              
	struct FString                                     sUserNameSaved;                                   		// 0x019C (0x000C) [0x0000000000406000]              ( CPF_Transient | CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bSaveUserName : 1;                                		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoggingIn : 1;                                   		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDebugMode : 1;                                   		// 0x01A8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector2D                                   vSlotPos[ 0x4 ];                                  		// 0x01AC (0x0020) [0x0000000000000000]              
	struct FVector2D                                   vSlotSize;                                        		// 0x01CC (0x0008) [0x0000000000000000]              
	struct FVector2D                                   vSlotCladePos[ 0x4 ];                             		// 0x01D4 (0x0020) [0x0000000000000000]              
	struct FVector2D                                   vSlotCladeSize;                                   		// 0x01F4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ScreenSize;                                       		// 0x01FC (0x0008) [0x0000000000000000]              
	struct FString                                     sNews;                                            		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fCamZoom;                                         		// 0x0210 (0x0004) [0x0000000000000000]              
	int                                                m_iCharacters;                                    		// 0x0214 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSelectedClade;                                 		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iAge;                                             		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                iStr;                                             		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                iDex;                                             		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                Icon;                                             		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                iPsy;                                             		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                iInt;                                             		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                iSiz;                                             		// 0x023C (0x0004) [0x0000000000000000]              
	float                                              fSiz;                                             		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                iStartingPoint;                                   		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FString                                     sFirstName;                                       		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSurName;                                         		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ACharacterSlotCreate*                        pCreateSlot;                                      		// 0x0260 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1635 ];

		return pClassPointer;
	};

	void hideModal ( );
	void clearCladeBoxes ( );
	void addSelectBoxClade ( struct FString sName, int iTop, int iLeft, int iWidth, int iHeight );
	void clearSelectBoxes ( );
	void addSelectBox ( struct FString sName, int iTop, int iLeft, int iWidth, int iHeight, unsigned long bCustom );
	void eventshowModal ( struct FString Message, struct FString sTitle, unsigned long bAllowCancel, unsigned long bAllowResponse, struct FString yesCallback );
	void showCharacterSelect ( int iMaxSlots );
	void showLoginScreen ( struct FString sUsername );
	void showIntroScreen ( struct FString sUsername );
	void setConfiguration ( unsigned long bDebug, struct FString sVersion );
	void closePanel ( int iID );
	void showPanel ( int iID, struct FString sTitle, struct FString sDescription, unsigned long bAlignRight );
	void setFeatureCatEnabled ( struct FString sCategory, unsigned long bEnabled );
	void allowRotation ( unsigned long bAllow );
	void showCreationFinal ( );
	void showCreationFeatures ( unsigned long bSkipToEnd );
	void showCreationAttributes ( );
	void showCreationRace ( struct FString sClade );
	void showCreationClade ( );
	void eventsetMaxStats ( int iNewStr, int iNewDex, int iNewCon, int iNewPsy, int iNewInt, int iNewSize, int iMinSize, int iHp, int iMp, int iSp, int iSpeed, int iPoints, int iBonus );
	void setAttributePoints ( int iPoints, int iBase );
	void addFeature ( int iID, struct FString sCategory, struct FString sName, struct FString sIcon, struct FString sColor );
	void clearFeatures ( );
	void AddLocation ( int iID, struct FString sName, struct FString sDescription, struct FString sOwner, int iPosX, int iPosY, unsigned long bGuild );
	void clearLocations ( );
	void CustomizationComplete ( );
	void ShowLore ( struct FString sRace );
	void Customization ( struct FString sName );
	void CreationComplete ( struct FString sNewName, struct FString sNewSurName, int iNewStartingPoint );
	bool IsGuildCity ( int iCityID );
	void CreatingCharacterFinal ( );
	void GoBack ( );
	void SetFeature ( int iID, struct FString sCategory );
	void eventSetAttribute ( struct FString sLabel, int iValue );
	void CreatingCharacterFeatures ( );
	void CreatingCharacterAttributes ( );
	void SetRotation ( int iDelta );
	void ScrollDelta ( int iDelta );
	void StopRotation ( );
	void StartRotation ( );
	int PanelIndex ( unsigned char Panel );
	void CreatingCharacter ( );
	void EndGame ( );
	void DeleteCharacter ( struct FString sName );
	void LoginCharacter ( struct FString sName );
	void SelectedCharacter ( struct FString sName );
	void eventLoginFail ( struct FString sReason );
	void eventGotCharacterData ( );
	void SelectedRaces ( struct FString sRace1, struct FString sRace2, struct FString sRace3, struct FString sRace4 );
	void CreatingCharacterRace ( struct FString sClade );
	void SelectedClade ( struct FString sClade );
	void eventUpdateCreateState ( unsigned char NewStep );
	void GoToCamNode ( struct FString sNodeName );
	void SetToCamNode ( struct FString sNodeName );
	void eventLoginComplete ( );
	void eventConnectSuccess ( );
	void TimeOut ( );
	void SubmitLogin ( struct FString sUsername, struct FString sPassword, unsigned long bRemember, unsigned long bNoSound );
	void eventDoPendingLogin ( );
	void eventSetPendingLogin ( int iMinutes );
	void eventDoTpcReceive ( struct FString JsonData, unsigned long bStart, unsigned long bEnd );
	void RequestNews ( );
	void ShowWebsite ( struct FString sUrl );
	void eventConnectionLost ( );
	void LoggedOut ( );
	void CanceledModal ( struct FString sName );
	void InitCam ( );
	void InitGFXScene ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
	void CalcMaxStats ( );
	void EnterGameCustom ( struct FString sCharacter, struct FString sCustomInfo );
	void EnterGame ( struct FString sCharacter );
	void OpenWebpage ( struct FString sUrl );
};

UClass* UNowGFXSceneMainMenu::pClassPointer = NULL;

// Class NowGame.NowHUD
// 0x02F8 (0x0874 - 0x057C)
class ANowHUD : public AAtlasHUD
{
public:
	float                                              additionalCrosshairPenalty;                       		// 0x057C (0x0004) [0x0000000000000000]              
	float                                              fadeTimerForAdditionalCrosshairPenalty;           		// 0x0580 (0x0004) [0x0000000000000000]              
	struct FrangedCrosshairData                        rangedCrosshair;                                  		// 0x0584 (0x0030) [0x0000000000000000]              
	unsigned long                                      bTargetMode : 1;                                  		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      MainMenu : 1;                                     		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      DontLoadHud : 1;                                  		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBloodOnCameraFX : 1;                             		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bConfusedCameraFX : 1;                            		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bOnScreenMaterialFXOn : 1;                        		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPlayingDominantMatFX : 1;                        		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bJustHit : 1;                                     		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      InChat : 1;                                       		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      GMCrosshair : 1;                                  		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bGotErrorMessage : 1;                             		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bShowTargetCrosshair : 1;                         		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDrawAiTest : 1;                                  		// 0x05B4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDrawAiPathing : 1;                               		// 0x05B4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bDrawAiPathingChain : 1;                          		// 0x05B4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bDrawCurve : 1;                                   		// 0x05B4 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bTestStress : 1;                                  		// 0x05B4 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bNoDoor : 1;                                      		// 0x05B4 (0x0004) [0x0000000000000000] [0x00020000] 
	float                                              HitDir;                                           		// 0x05B8 (0x0004) [0x0000000000000000]              
	float                                              DelayTimer;                                       		// 0x05BC (0x0004) [0x0000000000000000]              
	struct FString                                     DelayReason;                                      		// 0x05C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaterialFXEnd;                                    		// 0x05CC (0x0004) [0x0000000000000000]              
	float                                              MaterialFXBlendStart;                             		// 0x05D0 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           OnScreenMaterialFX;                               		// 0x05D4 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  OverheadBG;                                       		// 0x05D8 (0x0004) [0x0000000000000000]              
	class UFont*                                       OverheadFont;                                     		// 0x05DC (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           HitIndicatorFX;                                   		// 0x05E0 (0x0004) [0x0000000000000000]              
	float                                              HitIndicatorStartFade;                            		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              DeltaTime;                                        		// 0x05E8 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x05EC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  ProgressTexture;                                  		// 0x05F0 (0x0004) [0x0000000000000000]              
	float                                              DelayTimerStart;                                  		// 0x05F4 (0x0004) [0x0000000000000000]              
	class AActor*                                      QuickTarget;                                      		// 0x05F8 (0x0004) [0x0000000000000000]              
	class UNowChildHud*                                MyChildHud;                                       		// 0x05FC (0x0004) [0x0000000000000000]              
	class UNowChildHudDebug*                           MyChildHudDebug;                                  		// 0x0600 (0x0004) [0x0000000000000000]              
	class UNowGFXHud*                                  MyGFXHud;                                         		// 0x0604 (0x0004) [0x0000000000000000]              
	struct FString                                     ChatHelpString;                                   		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DrawHudDebug[ 0x28 ];                             		// 0x0614 (0x01E0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x07F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      FullScreenColor;                                  		// 0x0800 (0x0004) [0x0000000000000000]              
	struct FVector                                     vFollowPos[ 0x5 ];                                		// 0x0804 (0x003C) [0x0000000000000000]              
	int                                                iNextFollowPos;                                   		// 0x0840 (0x0004) [0x0000000000000000]              
	float                                              fAiTest;                                          		// 0x0844 (0x0004) [0x0000000000000000]              
	float                                              fMaxCurve;                                        		// 0x0848 (0x0004) [0x0000000000000000]              
	float                                              fMinCurve;                                        		// 0x084C (0x0004) [0x0000000000000000]              
	float                                              fCurveAmount;                                     		// 0x0850 (0x0004) [0x0000000000000000]              
	struct FVector                                     vTestRot;                                         		// 0x0854 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   vecDoorTest;                                      		// 0x0860 (0x0008) [0x0000000000000000]              
	TArray< struct FVector2D >                         vTestPos;                                         		// 0x0868 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1636 ];

		return pClassPointer;
	};

	bool IsNumber ( struct FString Number );
	void SetShowScores ( unsigned long bNewValue );
	void ShowScores ( );
	void ShowHUD ( );
	void ToggleHUD ( );
	void PostPos ( struct FVector inVec );
	void eventCloseUI ( class UAtlasAvatarComponent* InNpcComp, struct FString InKey );
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
	void eventToggleHouseWorkbench ( struct FString workBenchInfo, class ANowAtlasAvatarPlayerHouse* myHouse );
	void DrawGMCrosshair ( );
	void DrawHUD ( );
	class UNowGFXHudScene* GetGFXHud ( );
	void ResetQuickTarget ( );
	void SetQuickTarget ( class AActor* NewTarget );
	void DrawTargetCrosshair ( class UCanvas* C );
	void ShowTargetCrosshair ( unsigned long bOn );
	void eventPostRender ( );
	void DrawOnScreenMaterialFX ( );
	void PlayOnScreenMaterialFX ( class UMaterialInstance* WhatFX, float Timer, float BlendOutTime, unsigned long bIsDominantMatFX );
	void StopOnScreenMaterialFX ( );
	void WasHitOff ( );
	void WasHit ( struct FVector FromDir );
	void eventStartDelayTimer ( unsigned long Start, struct FString Why, float Time, unsigned long bStun );
	void eventRecieveGameEvent ( int eEvent, int pieceType, int pieceID, int XPos, int YPos, struct FString avatarName );
	bool eventrightClickUse ( int bag, int Slot );
	void eventInitGFXScene ( int WhatScene );
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
	void DoHideVoiceTutorialButton ( );
	void DoShowVoiceTutorialButton ( struct FString sId );
	void ToggleCompass ( );
	void ToggleTutorials ( );
	void SetFullScreenColor ( struct FColor NewColor );
	void DrawDebugCanvas ( );
	void ClearChains ( );
	void AddChain ( );
	int GetSpeedFromInt ( int iSpeed );
	bool AiChainIntersects ( TArray< struct FVector2D > vPos, struct FVector2D vStar, struct FVector2D vEnd, struct FVector2D* vHit, int* iHit, int* iClosestEnd, TArray< struct FVector2D >* vPath );
	void GetChainBoundBox ( TArray< struct FVector2D > vPos, struct FVector2D* vMin, struct FVector2D* vMax );
	void GetChainAsLines ( TArray< struct FVector2D > vPos, TArray< struct FVector2D >* vStart, TArray< struct FVector2D >* vEnd, TArray< struct FVector2D >* vRotStart, TArray< struct FVector2D >* vRotEnd, TArray< struct FVector2D >* vDoorStart, TArray< struct FVector2D >* vDoorEnd );
	void GetBoundBox ( struct FVector2D vBoxPos, struct FVector2D vBoxSize, struct FVector2D* vMin, struct FVector2D* vMax );
	void GetDoorPositions ( struct FVector2D vBoxPos, struct FVector2D vBoxSize, struct FVector2D vDoorPos, struct FVector2D* vInside, struct FVector2D* vOutside );
	void GetBoxSide ( struct FVector2D vBoxPos, struct FVector2D vBoxSize, struct FVector2D vDoor, int iIndex, float fPush, struct FVector2D* vStart, struct FVector2D* vEnd );
	bool AiIntersects ( struct FVector2D vBoxPos, struct FVector2D vBoxSize, struct FVector2D vDoor, struct FVector2D vStar, struct FVector2D vEnd, struct FVector2D* vHit, int* iHit, int* iClosestEnd, TArray< struct FVector2D >* vPath );
};

UClass* ANowHUD::pClassPointer = NULL;

// Class NowGame.NowMountManager
// 0x0038 (0x0074 - 0x003C)
class UNowMountManager : public UObject
{
public:
	class ANowPlayerController*                        MyController;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class ANowAtlasAvatarAiMountDynamic* >     MountUpdateList;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1637 ];

		return pClassPointer;
	};

	int SortDel ( class AActor* A, class AActor* B );
	void TickDetail ( );
	void OneSecTick ( );
	void TickManager ( );
	void AddToManager ( class ANowAtlasAvatarAiMountDynamic* NewMount, unsigned long bForceGenerate );
	void eventSetDetailLevel ( int NewLevel );
	void UpdateDetailLevel ( class ANowAtlasAvatarAiMountDynamic* Mount, int NewLevel );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1638 ];

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

// Class NowGame.NowPathNodes
// 0x001C (0x0328 - 0x030C)
class ANowPathNodes : public AAtlasPathInfo
{
public:
	class ANowPathNodes*                               pParent;                                          		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStartPath : 1;                                   		// 0x0310 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class USpriteComponent*                            GoodSprite;                                       		// 0x0314 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            BadSprite;                                        		// 0x0318 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            BackSprite;                                       		// 0x031C (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class USpriteComponent*                            GuardSpawnSprite;                                 		// 0x0320 (0x0004) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        ArrowComp;                                        		// 0x0324 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1639 ];

		return pClassPointer;
	};

	struct FVector eventCalcArrowScale ( );
	struct FRotator eventCalcRot ( );
	void UpdateHelpers ( );
	bool ShouldBeHiddenBySHOW_NavigationNodes ( );
};

UClass* ANowPathNodes::pClassPointer = NULL;

// Class NowGame.NowPawn
// 0x0250 (0x0828 - 0x05D8)
class ANowPawn : public AAtlasPawn
{
public:
	class UContentInfo*                                m_ContentInfo;                                    		// 0x05D8 (0x0004) [0x0000000000000000]              
	struct FPawnGib                                    PawnGibs[ 0x3 ];                                  		// 0x05DC (0x0078) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bLogEverything : 1;                               		// 0x0654 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCharSone : 1;                                    		// 0x0654 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      PendingSuicide : 1;                               		// 0x0654 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsMale : 1;                                      		// 0x0654 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFaceCreated : 1;                                 		// 0x0654 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bMountCreated : 1;                                		// 0x0654 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasSpellCharged : 1;                             		// 0x0654 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bChargingSpell : 1;                               		// 0x0654 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsBeingMerged : 1;                               		// 0x0654 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bInitialUpdateDone : 1;                           		// 0x0654 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bGotMeleeCombat : 1;                              		// 0x0654 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bGotRangedCombat : 1;                             		// 0x0654 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bGotMagicCombat : 1;                              		// 0x0654 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bGotFishingCombat : 1;                            		// 0x0654 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bBlockFallDamage : 1;                             		// 0x0654 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bSprint : 1;                                      		// 0x0654 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bWalking : 1;                                     		// 0x0654 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bForcedWalk : 1;                                  		// 0x0654 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bMercyMode : 1;                                   		// 0x0654 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bKnockedDown : 1;                                 		// 0x0654 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      inCastingMode : 1;                                		// 0x0654 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      inBlockingMode : 1;                               		// 0x0654 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bHiddenCriminal : 1;                              		// 0x0654 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bHasHelmet : 1;                                   		// 0x0654 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bIgnoreS : 1;                                     		// 0x0654 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      PredictStop : 1;                                  		// 0x0654 (0x0004) [0x0000000000000000] [0x02000000] 
	class AStaticMeshActor*                            MyBox;                                            		// 0x0658 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           GUISettings;                                      		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SoneType;                                         		// 0x0668 (0x0004) [0x0000000000000000]              
	int                                                HeroType;                                         		// 0x066C (0x0004) [0x0000000000000000]              
	TArray< class UParticleSystemComponent* >          CharacterEffects;                                 		// 0x0670 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	int                                                iBodyType;                                        		// 0x067C (0x0004) [0x0000000000000000]              
	float                                              UpdateArmorTimer;                                 		// 0x0680 (0x0004) [0x0000000000000000]              
	struct FString                                     sInitAnim;                                        		// 0x0684 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentSpell;                                     		// 0x0690 (0x0004) [0x0000000000000000]              
	unsigned char                                      StunnedState;                                     		// 0x0694 (0x0001) [0x0000000000000000]              
	class UCombatSystemMeleeNew*                       MeleeCombatNew;                                   		// 0x0698 (0x0004) [0x0000000000000000]              
	class UCombatSystemRangedNew*                      RangedCombatNew;                                  		// 0x069C (0x0004) [0x0000000000000000]              
	class UCombatSystemMagicNew*                       MagicCombatNew;                                   		// 0x06A0 (0x0004) [0x0000000000000000]              
	class UCombatSystemFishingNew*                     FishingCombatNew;                                 		// 0x06A4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitBlood;                                         		// 0x06A8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BlockSparks;                                      		// 0x06AC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitBloodSwordTrail;                               		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitBloodSwordTrailTarget;                         		// 0x06B4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             vArmorHitParticles[ 0x5 ];                        		// 0x06B8 (0x0014) [0x0000000000000000]              
	class USoundCue*                                   vArmorHitSound[ 0x5 ];                            		// 0x06CC (0x0014) [0x0000000000000000]              
	class UAnimNodeBlendList*                          InCombatModeBlend;                                		// 0x06E0 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          StunnedStateBlend;                                		// 0x06E4 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          IsBlockingBlend;                                  		// 0x06E8 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          IsDeadBlend;                                      		// 0x06EC (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     CustomNode[ 0x3 ];                                		// 0x06F0 (0x000C) [0x0000000000000000]              
	class UAnimNodeSequence*                           CustomSeq[ 0x3 ];                                 		// 0x06FC (0x000C) [0x0000000000000000]              
	class USkelControlFootPlacement*                   FootIK;                                           		// 0x0708 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BodyHitSoundCue;                                  		// 0x070C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ShieldHitSoundCue;                                		// 0x0710 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeadHitSoundCue;                                  		// 0x0714 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeavyFatigue;                                     		// 0x0718 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NormalFatigue;                                    		// 0x071C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WasDrowningSound;                                 		// 0x0720 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WasDivingSound;                                   		// 0x0724 (0x0004) [0x0000000000000000]              
	struct FString                                     SoundPath;                                        		// 0x0728 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0734 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerTitle;                                      		// 0x0740 (0x0004) [0x0000000000000000]              
	int                                                GuildFlag;                                        		// 0x0744 (0x0004) [0x0000000000000000]              
	int                                                CombatSpeed;                                      		// 0x0748 (0x0004) [0x0000000000000000]              
	class AActor*                                      LastAttacked;                                     		// 0x074C (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorLadder*                   LadderActor;                                      		// 0x0750 (0x0004) [0x0000000000000000]              
	class UAtlasAvatarComponent*                       Component;                                        		// 0x0754 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimSet*                                    AnimSet_Emotes;                                   		// 0x0758 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      m_SkelMeshGhost;                                  		// 0x075C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MySpecie;                                         		// 0x0760 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         SavedCollisionComponent;                          		// 0x0764 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              BodyPitch;                                        		// 0x0768 (0x0004) [0x0000000000000000]              
	float                                              BodyYaw;                                          		// 0x076C (0x0004) [0x0000000000000000]              
	float                                              LastMountTimer;                                   		// 0x0770 (0x0004) [0x0000000000000000]              
	int                                                MountDrawScale;                                   		// 0x0774 (0x0004) [0x0000000000000000]              
	struct FString                                     GuildAcronym;                                     		// 0x0778 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxMovementSpeed;                                 		// 0x0784 (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x0788 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LastHitLoc;                                       		// 0x078C (0x000C) [0x0000000000000000]              
	float                                              LastDmg;                                          		// 0x0798 (0x0004) [0x0000000000000000]              
	int                                                HpCurBeforeUpdate;                                		// 0x079C (0x0004) [0x0000000000000000]              
	struct FString                                     PendingSwing;                                     		// 0x07A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastActionName;                                   		// 0x07AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      NowCameraActor;                                   		// 0x07B8 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vLastResPos;                                    		// 0x07BC (0x000C) [0x0000000000000000]              
	float                                              LastBreathingTime;                                		// 0x07C8 (0x0004) [0x0000000000000000]              
	struct FVector                                     DebugPos;                                         		// 0x07CC (0x000C) [0x0000000000000000]              
	struct FVector                                     AtlasTimeStampedStopPos;                          		// 0x07D8 (0x000C) [0x0000000000000000]              
	struct FVector                                     vLastPos;                                         		// 0x07E4 (0x000C) [0x0000000000000000]              
	float                                              PredictStuckTimer;                                		// 0x07F0 (0x0004) [0x0000000000000000]              
	float                                              DefaultCollisionRadius;                           		// 0x07F4 (0x0004) [0x0000000000000000]              
	float                                              DefaultCollisionHeight;                           		// 0x07F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerEffectLoc;                                  		// 0x07FC (0x000C) [0x0000000000000000]              
	class AActor*                                      ServerEffectTarget;                               		// 0x0808 (0x0004) [0x0000000000000000]              
	TArray< class UMagicMeshFX* >                      vMagicMeshFX;                                     		// 0x080C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_vStartFall;                                     		// 0x0818 (0x000C) [0x0000000000000000]              
	float                                              m_fMinFallDist;                                   		// 0x0824 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1640 ];

		return pClassPointer;
	};

	void PanicMoveToGround ( );
	void eventOutsideWorldBounds ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void eventFindGoodSpot ( struct FVector StartLoc, int iter );
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
	bool TestPos ( struct FVector ExitPos, class ANowAtlasAvatarSkM* Other );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	struct FVector FindStuckSpot ( unsigned long bLonger );
	void eventUnStuckMe ( );
	bool testForHouses ( struct FVector* newLocaltion );
	bool DoJump ( unsigned long bUpdating );
	void eventBaseChange ( );
	void WalkOff ( );
	void WalkOn ( );
	void eventSendFallingDamage ( unsigned long bInWater );
	void ResetIgnoreFallDamage ( );
	void eventTempIgnoreFallDamage ( );
	class UNowGFXHudScene* GetGFXHud ( );
	class ANowPlayerController* eventGetANowPC ( );
	class ANowPlayerController* eventGetNowPC ( );
	void eventCheckForDecalSpawn ( float DmgTaken );
	void RemoveBloodDecals ( );
	void AddBloodDecals ( float AddValue );
	void eventAreaBloodDecals ( );
	void SetMercyPosition ( class AActor* WhatActor );
	class USkeletalMeshComponent* eventGetCurrentMesh ( );
	void eventTriggerSocketChange ( );
	void eventTriggerMountSocketChange ( );
	void eventAnimEnterMode ( unsigned long Enter, unsigned long bIgnoreAnims );
	void eventAnimEnterBlockingMode ( unsigned long Enter );
	void eventDestroyed ( );
	class UStatManager* eventGetStatManager ( );
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
	void eventPlayHitSound ( struct FVector vPos, int lastHitBoneID );
	void eventSpawnHitFx ( struct FVector LastHitLocation, unsigned long ClientFeedBack, struct FVector PushBackVector, struct FVector AttackerToPlayer, int HitBoneID, unsigned long bIgnoreParticles );
	bool eventCheckForPerfectBlock ( int HitBoneID );
	bool eventCheckForShieldBash ( );
	void eventFixHeadCam ( );
	void eventSetAnimations ( unsigned long bForceThird );
	void eventInitStartAnims ( );
	void CheckIfLoaded ( );
	bool FindCoolSpot ( );
	void FixPositionOnLogin ( );
	void FallingResetPosition ( );
	struct FVector eventGetPosAt ( float fDeltaTime, int* iStop );
	void Tick ( float DeltaTime );
	void TickCombatSystems ( float DeltaTime );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventSpawnWeapons ( );
	bool TouchingUndergroundVolume ( );
	void eventSpawnCorpse ( unsigned long Killed, struct FName lastHitBoneName, float InDmg, unsigned long bFromMercyMode );
	void eventSpawnCorpseLogin ( );
	void eventEnterCombatModeLogin ( );
	void eventHideGhost ( );
	void eventShowGhost ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventResetStunned ( );
	void eventSetMercyMode ( );
	void eventSetKnockedDownMode ( struct FVector PushBackVector, unsigned long bFromHorse );
	void eventSetStunnedState ( int NewState );
	void eventChangedDisplayName ( );
	void eventSetLocalFlag ( int NewFlag );
	void eventClearGuildFlags ( );
	void eventReinitGuildFlag ( );
	void eventAddLocalFlagDelegate ( );
	void LocalFlagDelegateTriggered ( );
	void eventUpdateGroundSpeed ( );
	float GetArmorWeightPctMod ( float FMax );
	class UMaterialInstanceConstant* eventNowCreateAndSetMaterialInstanceConstant ( class USkeletalMeshComponent* SkelComp, int ElementIndex );
	void eventSpawnProjectileEffect ( struct FVector arrowLocation );
	bool eventTestForInterrupt ( );
	void eventUpdateWeaponStats ( );
	void eventFindAndCacheNodes ( );
	void eventResetAnimations ( );
	void eventGetAnimNodePointers ( int WhatType, class UAnimNodePlayCustomAnim** AnimNode, class UAnimNodeSequence** AnimSeq );
	class ANowAtlasAvatarAiMount* eventGetMount ( );
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
	void eventSetCurrentSpell ( int NewValue );
	void eventInvisible ( unsigned long On );
	void eventGMPawnInit ( int InitEnum, int InitType );
	void PawnSkelMeshCompOnParticleSystemFinished ( class UParticleSystemComponent* PSC );
	void eventPlayIndexedParticleEffect ( class UAnimNotify_PlayIndexedParticleEffect* AnimNotifyData );
	void eventspellSelfRelease ( );
	void AddMagicMeshFX ( class UMagicMeshFX* NewFX );
	void eventSpawnMagicMeshFX ( unsigned char eID );
	class UMagicMeshFX* eventGetMagicMeshFXActive ( unsigned char eID );
	bool eventIsMagicMeshFXActive ( unsigned char eID );
	void eventClearMagicMeshFX ( unsigned char eID );
	void eventClearAllMagicMeshFX ( );
	void eventHideRangedBone ( );
	void eventShowRangedBone ( );
	void eventPendingGetAndSetMount ( unsigned long bStart );
	void eventPendingInitDead ( );
	void eventSetTraceTime ( float NewLength, float NewMiddle, unsigned long bCombatMove );
	void eventSetBowMinDrawDistance ( float NewMinChargeTime );
	void eventSetBlockingState ( int WhatState );
	void eventRemoveMount ( );
	void eventCreateMount ( struct FString ContentInfo, struct FString DisplayName, int iType, unsigned long bInit );
	void eventSavePendingSwing ( struct FString whatSwing );
	void UpdateWeatherAwarenessData ( );
	void InitWeatherAwarenssUpdateLoop ( );
	void TerminateWeatherAwarenssUpdateLoop ( );
	struct FString eventGetInteractionString ( );
	bool IsCombatTarget ( );
	void eventAddToManager ( );
	void PostBeginPlay ( );
	void TriggerFootNotify ( int FootIndex, float FootForce );
	class USkeletalMeshComponentGenerated* GetPlayerMesh ( );
	void InitDead ( );
	void Detected ( );
	void ReInitGmPawn ( );
	void PlayerInit ( int InitEnum );
	void SetGroundSpeed ( float New );
	struct FString GetAtlasType ( );
	struct FString addTitle ( struct FString sDisplayName, unsigned long bFormat, int iTitle );
	int GetBodyType ( );
	bool GotInitalData ( );
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
	void UpdateCharacterArmor ( );
	void UpdateMagicMeshFX ( );
	struct FString GetAtlasChatName ( );
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
	void NowDoRangedDamage ( int lastHitBoneID, int TargetFlag, float bowRange, class AActor* Target );
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

// Class NowGame.NowPlayerCamera
// 0x0114 (0x06D8 - 0x05C4)
class ANowPlayerCamera : public ACamera
{
public:
	float                                              FirstPersonHeadDistance;                          		// 0x05C4 (0x0004) [0x0000000000000000]              
	float                                              MountedCamDistance;                               		// 0x05C8 (0x0004) [0x0000000000000000]              
	float                                              CamDistance;                                      		// 0x05CC (0x0004) [0x0000000000000000]              
	float                                              DesiredCamDistance;                               		// 0x05D0 (0x0004) [0x0000000000000000]              
	float                                              TweenTime;                                        		// 0x05D4 (0x0004) [0x0000000000000000]              
	float                                              StartTweenTime;                                   		// 0x05D8 (0x0004) [0x0000000000000000]              
	float                                              OldCamDistance;                                   		// 0x05DC (0x0004) [0x0000000000000000]              
	float                                              AddCamDistance;                                   		// 0x05E0 (0x0004) [0x0000000000000000]              
	struct FVector                                     MountedCamOffset;                                 		// 0x05E4 (0x000C) [0x0000000000000000]              
	struct FVector                                     CamOffset;                                        		// 0x05F0 (0x000C) [0x0000000000000000]              
	struct FVector                                     DesiredCamOffset;                                 		// 0x05FC (0x000C) [0x0000000000000000]              
	class UPostProcessChain*                           CameraEffect;                                     		// 0x0608 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           UnderwaterEffect;                                 		// 0x060C (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           DeadEffect;                                       		// 0x0610 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           CachedPostProcess;                                		// 0x0614 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           BaseEffect;                                       		// 0x0618 (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           DeadEffectMan;                                    		// 0x061C (0x0004) [0x0000000000000000]              
	class UPostProcessChain*                           BlurEffect;                                       		// 0x0620 (0x0004) [0x0000000000000000]              
	class ACameraActor*                                Cam;                                              		// 0x0624 (0x0004) [0x0000000000000000]              
	struct FVector                                     MesureLocation;                                   		// 0x0628 (0x000C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   CachedMaterial;                                   		// 0x0634 (0x0004) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x0638 (0x0004) [0x0000000000000000]              
	float                                              FovAddValue;                                      		// 0x063C (0x0004) [0x0000000000000000]              
	float                                              RollAddValue;                                     		// 0x0640 (0x0004) [0x0000000000000000]              
	float                                              BlendTarget;                                      		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              BlendToGo;                                        		// 0x0648 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInit : 1;                                        		// 0x064C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTracking : 1;                                    		// 0x064C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFadingPostProcess : 1;                           		// 0x064C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBluredByCode : 1;                                		// 0x064C (0x0004) [0x0000000000000000] [0x00000008] 
	class UAnimNodeAimOffset*                          CachedAnimNodeOffset;                             		// 0x0650 (0x0004) [0x0000000000000000]              
	class UUberPostProcessEffect*                      CachedFadeEffect;                                 		// 0x0654 (0x0004) [0x0000000000000000]              
	struct FVector                                     FadeCenter;                                       		// 0x0658 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Add_HighLights;                              		// 0x0664 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Add_MidTones;                                		// 0x0670 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Add_Shadows;                                 		// 0x067C (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Default_HighLights;                          		// 0x0688 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Default_MidTones;                            		// 0x0694 (0x000C) [0x0000000000000000]              
	struct FVector                                     Fade_Default_Shadows;                             		// 0x06A0 (0x000C) [0x0000000000000000]              
	float                                              Fade_EffectMaxRange;                              		// 0x06AC (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeForce;                                		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeForceReduction;                       		// 0x06B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     vCameraShakePosMax;                               		// 0x06B8 (0x000C) [0x0000000000000000]              
	struct FVector                                     vCameraShakePos;                                  		// 0x06C4 (0x000C) [0x0000000000000000]              
	float                                              fCameraShakeTweenTime;                            		// 0x06D0 (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeTweenTimeMax;                         		// 0x06D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1641 ];

		return pClassPointer;
	};

	void DefaultPostProcess ( );
	void BlurPostProcess ( );
	void StopCameraFx ( );
	void SetCameraFX ( class UPostProcessChain* NewFX, float Time );
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
	void Measure ( unsigned long bStart );
	void TickCameraShake ( float DeltaTime, struct FTPOV* OutPOV );
	void eventStartCameraShake ( float fForce, float fForceReduction, float fShakeX, float fShakeY, float fShakeTweenTimeMax );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	void SetCameraTarget ( );
	void InitializeFor ( class APlayerController* PC );
	void SetPPFader ( struct FVector NewFadeCenter, float New_EffectMaxRange, struct FVector HighLights, struct FVector MidTones, struct FVector Shadows );
};

UClass* ANowPlayerCamera::pClassPointer = NULL;

// Class NowGame.NowPlayerController
// 0x036C (0x0AB0 - 0x0744)
class ANowPlayerController : public AAtlasPlayerController
{
public:
	TArray< struct FPylonInfo >                        CachedPylonInfo;                                  		// 0x0744 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPetInfo >                          CachedPetInfo;                                    		// 0x0750 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPetSlot                                    vPetSlots[ 0x6 ];                                 		// 0x075C (0x0108) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHouseSearchingMode : 1;                          		// 0x0864 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      inTranscendentalAwareness : 1;                    		// 0x0864 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPendingOpenPylonGui : 1;                         		// 0x0864 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUnderGround : 1;                                 		// 0x0864 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNowIgnoreInput : 1;                              		// 0x0864 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHoldTab : 1;                                     		// 0x0864 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCanDodge : 1;                                    		// 0x0864 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPendingLogOut : 1;                               		// 0x0864 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPendingLogOutQuit : 1;                           		// 0x0864 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bShowHelmetOverlay : 1;                           		// 0x0864 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bMoveStrafe : 1;                                  		// 0x0864 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bMoveBackwards : 1;                               		// 0x0864 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDebugCam : 1;                                    		// 0x0864 (0x0004) [0x0000000000000000] [0x00001000] 
	float                                              fUnderGroundFade;                                 		// 0x0868 (0x0004) [0x0000000000000000]              
	struct FVector                                     vTweenPos;                                        		// 0x086C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rTweenRot;                                        		// 0x0878 (0x000C) [0x0000000000000000]              
	float                                              fTweenTime;                                       		// 0x0884 (0x0004) [0x0000000000000000]              
	float                                              fTweenTimeTarget;                                 		// 0x0888 (0x0004) [0x0000000000000000]              
	struct FString                                     m_structureType;                                  		// 0x088C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UCombatSystemNew*                            CurrentCombatSystemNew;                           		// 0x0898 (0x0004) [0x0000000000000000]              
	class UStatTracker*                                MyStatTracker;                                    		// 0x089C (0x0004) [0x0000000000000000]              
	class UNowMusicManager*                            MyMusicManager;                                   		// 0x08A0 (0x0004) [0x0000000000000000]              
	class UNowPlayerManager*                           MyPlayerManager;                                  		// 0x08A4 (0x0004) [0x0000000000000000]              
	class UNowMountManager*                            MyMountManager;                                   		// 0x08A8 (0x0004) [0x0000000000000000]              
	class UNowPhysManager*                             MyPhysManager;                                    		// 0x08AC (0x0004) [0x0000000000000000]              
	class UNowAvatarManager*                           MyAvatarManager;                                  		// 0x08B0 (0x0004) [0x0000000000000000]              
	class ULoginManager*                               MyLoginManager;                                   		// 0x08B4 (0x0004) [0x0000000000000000]              
	class UChatManager*                                MyChatManager;                                    		// 0x08B8 (0x0004) [0x0000000000000000]              
	class UNoobHelpManager*                            MyNoobHelpManager;                                		// 0x08BC (0x0004) [0x0000000000000000]              
	class UMainMenuManager*                            MyMainMenuManager;                                		// 0x08C0 (0x0004) [0x0000000000000000]              
	class UStatManager*                                MyStatManager;                                    		// 0x08C4 (0x0004) [0x0000000000000000]              
	class ANowTCPLink*                                 MyNowTCPLink;                                     		// 0x08C8 (0x0004) [0x0000000000000000]              
	TArray< class UClientEffect* >                     MyClientEffects;                                  		// 0x08CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClientViewMode*                             MyViewMode;                                       		// 0x08D8 (0x0004) [0x0000000000000000]              
	class UTimeControl*                                TimeController;                                   		// 0x08DC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWeatherControl*                             WeatherController;                                		// 0x08E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AMortalRainSnowEmitterSpawnable*             RainAndSnow;                                      		// 0x08E4 (0x0004) [0x0000000000000000]              
	class ANowAmbientSunLight*                         pNowAmbientSunLight;                              		// 0x08E8 (0x0004) [0x0000000000000000]              
	class ASkyLightToggleable*                         pSkyLightToggleable;                              		// 0x08EC (0x0004) [0x0000000000000000]              
	class UContentInfo_StringList*                     CIL_EmoteList;                                    		// 0x08F0 (0x0004) [0x0000000000000000]              
	unsigned char                                      SavedDoubleClickMove;                             		// 0x08F4 (0x0001) [0x0000000000000000]              
	struct FTarget                                     TargetInfo;                                       		// 0x08F8 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       DefaultSoundMode;                                 		// 0x0928 (0x0008) [0x0000000000000000]              
	struct FName                                       DeadSoundMode;                                    		// 0x0930 (0x0008) [0x0000000000000000]              
	float                                              MountTimer;                                       		// 0x0938 (0x0004) [0x0000000000000000]              
	struct FString                                     sLastMountGuid;                                   		// 0x093C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       LeaveMountState;                                  		// 0x0948 (0x0008) [0x0000000000000000]              
	float                                              SiltentStunTimer;                                 		// 0x0950 (0x0004) [0x0000000000000000]              
	float                                              DiedTimer;                                        		// 0x0954 (0x0004) [0x0000000000000000]              
	float                                              DeleteItemTimer;                                  		// 0x0958 (0x0004) [0x0000000000000000]              
	float                                              TabTimer;                                         		// 0x095C (0x0004) [0x0000000000000000]              
	float                                              TweenCamToZeroRotTimer;                           		// 0x0960 (0x0004) [0x0000000000000000]              
	float                                              EmoteTimer;                                       		// 0x0964 (0x0004) [0x0000000000000000]              
	float                                              fWaitingForTimer;                                 		// 0x0968 (0x0004) [0x0000000000000000]              
	float                                              fStuckCommandTimer;                               		// 0x096C (0x0004) [0x0000000000000000]              
	float                                              fDropLootTimer;                                   		// 0x0970 (0x0004) [0x0000000000000000]              
	float                                              fCombatPing;                                      		// 0x0974 (0x0004) [0x0000000000000000]              
	int                                                iCombatPingOut;                                   		// 0x0978 (0x0004) [0x0000000000000000]              
	float                                              fDrinkTimer;                                      		// 0x097C (0x0004) [0x0000000000000000]              
	int                                                iDrinkCounter;                                    		// 0x0980 (0x0004) [0x0000000000000000]              
	float                                              MoFOV;                                            		// 0x0984 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UOnlineSubsystemNowGame*                     NowGameOnlineSub;                                 		// 0x0988 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            BaseActors;                                       		// 0x098C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Stamina_Dodge;                                    		// 0x0998 (0x0004) [0x0000000000000000]              
	float                                              Stamina_Jump;                                     		// 0x099C (0x0004) [0x0000000000000000]              
	float                                              Stamina_MinSprint;                                		// 0x09A0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SprintDrain;                              		// 0x09A4 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SprintDrainCombat;                        		// 0x09A8 (0x0004) [0x0000000000000000]              
	float                                              Stamina_WalkingAdd;                               		// 0x09AC (0x0004) [0x0000000000000000]              
	float                                              Stamina_JoggingAdd;                               		// 0x09B0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_SwimmingDrain;                            		// 0x09B4 (0x0004) [0x0000000000000000]              
	float                                              Stamina_CombatWalkAdd;                            		// 0x09B8 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountSprintDrain;                         		// 0x09BC (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountRegain;                              		// 0x09C0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_Regain;                                   		// 0x09C4 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountWalk;                                		// 0x09C8 (0x0004) [0x0000000000000000]              
	float                                              Stamina_RegainAfterSwing;                         		// 0x09CC (0x0004) [0x0000000000000000]              
	float                                              Stamina_BlockStart;                               		// 0x09D0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_DrainBlock;                               		// 0x09D4 (0x0004) [0x0000000000000000]              
	float                                              Stamina_BlockHit;                                 		// 0x09D8 (0x0004) [0x0000000000000000]              
	float                                              Stamina_ShieldBash;                               		// 0x09DC (0x0004) [0x0000000000000000]              
	float                                              Stamina_SwingWeapon;                              		// 0x09E0 (0x0004) [0x0000000000000000]              
	float                                              Stamina_HoldWeapon;                               		// 0x09E4 (0x0004) [0x0000000000000000]              
	float                                              Stamina_MountKnockDrain;                          		// 0x09E8 (0x0004) [0x0000000000000000]              
	float                                              Stamina_KnockedDownDrain;                         		// 0x09EC (0x0004) [0x0000000000000000]              
	float                                              Stamina_TakeDamage;                               		// 0x09F0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeartBeat;                                        		// 0x09F4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   UnderWaterLoop;                                   		// 0x09F8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EtherWorldLoop;                                   		// 0x09FC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AimedSwing;                                       		// 0x0A00 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PerfectBlock;                                     		// 0x0A04 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   GuildSounds[ 0x8 ];                               		// 0x0A08 (0x0020) [0x0000000000000000]              
	class USoundCue*                                   BuySound;                                         		// 0x0A28 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ItemPlaceSound;                                   		// 0x0A2C (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCompA;                                       		// 0x0A30 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCompB;                                       		// 0x0A34 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              m_fCheck;                                         		// 0x0A38 (0x0004) [0x0000000000000000]              
	int                                                m_iCheckSize;                                     		// 0x0A3C (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCompC;                                       		// 0x0A40 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             UnderWaterParticles;                              		// 0x0A44 (0x0004) [0x0000000000000000]              
	class AActor*                                      CombatTarget;                                     		// 0x0A48 (0x0004) [0x0000000000000000]              
	int                                                LogOutCounter;                                    		// 0x0A4C (0x0004) [0x0000000000000000]              
	struct FVector                                     LogOutLoc;                                        		// 0x0A50 (0x000C) [0x0000000000000000]              
	int                                                m_iNrCharacters;                                  		// 0x0A5C (0x0004) [0x0000000000000000]              
	int                                                m_iNrCount;                                       		// 0x0A60 (0x0004) [0x0000000000000000]              
	int                                                LoginStage;                                       		// 0x0A64 (0x0004) [0x0000000000000000]              
	float                                              LastVar;                                          		// 0x0A68 (0x0004) [0x0000000000000000]              
	float                                              Ar[ 0x5 ];                                        		// 0x0A6C (0x0014) [0x0000000000000000]              
	int                                                ArB[ 0x5 ];                                       		// 0x0A80 (0x0014) [0x0000000000000000]              
	float                                              fStrafeMod;                                       		// 0x0A94 (0x0004) [0x0000000000000000]              
	float                                              fBackMod;                                         		// 0x0A98 (0x0004) [0x0000000000000000]              
	float                                              fAthleticsMod;                                    		// 0x0A9C (0x0004) [0x0000000000000000]              
	struct FVector                                     vDeathPos;                                        		// 0x0AA0 (0x000C) [0x0000000000000000]              
	int                                                m_iPendingClientReqType;                          		// 0x0AAC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1642 ];

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
	void TeamTalk ( );
	void EnableCheats ( );
	void eventUnStuck ( );
	float eventMountCalcMaxCarry ( int attrb_Strength );
	float MountCalcMaxJump ( int attrb_Dexterity );
	float MountCalcMaxSpeed ( int attrb_Speed, int attrb_Size, int attrb_Dexterity );
	void eventSetUnderground ( unsigned long bNewValue );
	bool eventFindTalkerWithID ( int iID );
	struct FString ParseGhostMessage ( struct FString WhatMessage, unsigned long bFromEther, int chanSize, unsigned long bNotChat );
	class ASkyLightToggleable* GetSkyLightToggleable ( );
	class ANowAmbientSunLight* GetAmbientSunLight ( );
	void Tick ( float DeltaTime );
	void TweenMove ( struct FVector vPos, struct FRotator rRoT, float fTime, struct FString sReason );
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
	void MortalSuicide ( );
	void eventPendingLogOut ( unsigned long bInit, unsigned long bQuit );
	bool InSecurityZone ( class APawn* WhatPawn );
	void eventCancelLogOut ( );
	void eventStartUnderWaterEffects ( unsigned long bEnd );
	void eventStartBlurEffects ( unsigned long bEnd );
	void eventEndBlurEffects ( );
	void eventStartTimedBlurEffect ( float fTime );
	void setHouseDoorCollisionFalse ( );
	void setHouseDoorCollisionTrue ( );
	void SetEtherworldsCollision ( unsigned long bTurnOn );
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
	void NowPawnDied ( unsigned long Killed, class ANowCorpse* Corpse, struct FName lastHitBoneName );
	void eventNowPawnDiedLogin ( );
	void eventResetCameraMode ( );
	void SetCameraMode ( struct FName NewCamMode );
	void NowSetSoundMode ( struct FName newSoundMode );
	void eventSetBeastCameraView ( class AActor* A );
	bool eventHasLineOfSightTo ( class AActor* TestActor, float LoSDegreeCOSINEValue );
	void TargetAndUse ( );
	bool EscPressed ( );
	void LostInputFocus ( );
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
	class UStatManager* eventGetStatManager ( );
	class UMountBrain* eventGetMountBrain ( );
	class ANowAtlasAvatarAiMount* eventGetMount ( );
	void eventGameMessage ( struct FString WhatMessage, struct FString sChan );
	class AActor* GetTargetInAim ( int Range, int ExtraTraceFlags, unsigned long bRadiusCheck );
	bool eventGetTargetValueInAim ( int iRange, unsigned char eTargetType, struct FString* sTargetValue );
	void eventResetTargetFlags ( );
	class AActor* eventGetTarget ( );
	void eventClearTargets ( );
	void CheckTargetRange ( );
	bool CheckForHouseSearch ( );
	bool TargetNearestEnemy ( );
	void TabLookForTarget ( );
	struct FTraceHitInfo GetTargetHitInfo ( );
	void MortalScreenshotTiled ( int iMulti );
	void MortalScreenshotHighRes ( );
	void MortalScreenshot ( );
	void RHoldTab ( );
	void HoldTab ( );
	void FocusCharacterOnPoint ( struct FVector WorldLoc );
	void SelectAtlasTarget ( class AActor* NewTarget );
	void UpdateGFXTarget ( );
	void SetTarget ( struct FString DisplayName, struct FString TargetName, int CurHealth, int MaxHealth, int Flag, class AActor* pActor );
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
	bool eventCheckCombatTimerOk ( );
	void eventExitCombatMode ( );
	void eventEnterCombatModeLogin ( );
	void eventForceCamera ( float Time );
	void TickCamToZeroRot ( float DT );
	void eventTweenCamToZeroRot ( );
	void eventSetStunned ( struct FString Why, float Time );
	void eventSetDisableMouseRotate ( unsigned long NewValue );
	void GetNewSkillStats ( );
	void StopAltFire ( unsigned char FireModeNum );
	void StartAltFire ( unsigned char FireModeNum );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void TriggerPendingClientReq ( );
	void eventPendingClientReq ( int iType, float fTime );
	void eventSpectatorMode ( );
	void eventGhost ( );
	void eventWalk ( );
	void eventFly ( );
	void eventSpellAction ( int SpellID );
	void eventOpenGamesMenu ( );
	class UAudioDevice* GetAudioDevice ( );
	void eventSetPendingAiSlotUpdate ( unsigned long bInit );
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
	class UClientEffect* eventAddClientEffect ( class UClass* NewEffectName, float EffectRate, float StartTime );
	void eventAddViewMode ( class UClass* NewViewMode );
	void eventAddClientEffectString ( struct FString NewEffectName, float EffectRate, float StartTime );
	void eventUpgradePylonMode ( );
	void eventTSUpgradeTierMode ( );
	void eventPlaceTSNpcMode ( );
	void eventPlaceGateMode ( );
	void eventPlaceWallMode ( );
	void eventPlaceMine ( );
	void eventPlacePatrolSphere ( );
	void eventPlaceStructureMode ( );
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
	bool eventIsMyPet ( class ANowAtlasAvatarAi* pAi );
	int eventGetPetIndexFromGuid ( struct FString sGuid );
	class ANowAtlasAvatarAi* eventGetPetFromGuid ( struct FString sGuid );
	class ANowPawn* eventGetNowPawn ( );
	class ANowPawn* GetPawnFromName ( struct FString sName );
	class ANowAtlasAvatarAi* GetPetFromName ( struct FString sPetName );
	void eventUpdateAiSlot ( class ANowAtlasAvatarAi* pActor, int iSlot, struct FString sGuid );
	void eventClearAiSlot ( int iSlot );
	void eventSortPetSlots ( );
	void eventClearCachedPetInfo ( );
	void AskAiCommandAbandonGlobal ( struct FString sGuid );
	void AskAiCommandAbandon ( class ANowAtlasAvatar* aActor );
	class ANowAtlasAvatarAi* FindAiFromAvatarID ( struct FString sAvatarId );
	void eventPreContinentChange ( );
	void SaveHighResScreenshot ( );
	void SaveTiledScreenshot ( int iMulti );
	void SaveScreenshot ( );
	bool IsMortalLoading ( );
	void CombatPing ( );
	void CombatPingOut ( );
	void SendChangeContinentRequest ( int iNewContinent );
	void HandlePendingClientReq ( unsigned long bStart );
	bool CanDoEvilWithMessage ( unsigned long bLoot );
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
	void DebugGetHeatMap ( );
	void DebugDynamicCollision ( );
	void DebugNavMeshErrors ( );
	struct FString RemTags ( struct FString sString );
	void AiCommandMount ( class ANowAtlasAvatar* aActor );
	void AiCommandLevelLock ( class ANowAtlasAvatar* aActor );
	void AiCommandRename ( class ANowAtlasAvatar* aActor, struct FString sNewName );
	void AiCommandAbandonGlobal ( struct FString sGuid );
	void AiCommandAbandon ( class ANowAtlasAvatar* aActor );
	void AiCommandFeed ( class ANowAtlasAvatar* aActor, struct FString sItemGuid );
	void AiCommandSummonToPos ( class ANowAtlasAvatar* aActor, struct FVector vPos );
	void AiCommandGoToPos ( class ANowAtlasAvatar* aActor, struct FVector vPos );
	void AiCommandStay ( class ANowAtlasAvatar* aActor, unsigned long bAll );
	void AiCommandMode ( class ANowAtlasAvatar* aActor, int NewModer, unsigned long bAll );
	void AiCommandAttack ( class ANowAtlasAvatar* aActor, class AActor* aTargetr, unsigned long bAll );
	void AiCommandFollow ( class ANowAtlasAvatar* aActor, class AActor* aTargetr, unsigned long bAll );
	void SendEscape ( );
	void CalcClusterInfo ( struct FString TargetPylonGuid, float* MaxArea, float* IntersectArea, int* PointsToSpend, int* PointsCost, int* TotalTowersInCluster, int* bConnectedToKeep, int* iTierCost, int* iCanChange, int* iCanSeeTarget, int* iMaxTargetAoe, int* iMaxTargetDef, int* iMaxTargetAtt );
	float InterSectCalcThing ( float A1, float A2, struct FVector* Pos1, struct FVector* Pos2 );
	bool MountStat_IsMale ( struct FString BodyString );
	void GetRawDynamicMountStatsFromString ( struct FString StatString, int iLevel, int* attrb_Strength, int* attrb_Dexterity, int* attrb_Constitution, int* attrb_Psyche, int* attrb_Intelligence, int* attrb_Speed, int* attrb_Size, int* attrb_Weight );
	void GetDynamicMountStatsFromString ( int iMountType, struct FString StatString, int iLevel, int* attrb_Strength, int* attrb_Dexterity, int* attrb_Constitution, int* attrb_Psyche, int* attrb_Intelligence, int* attrb_Speed, int* attrb_Size, int* attrb_Weight );
	void GetDynamicMountStatsFromStringMount ( class ANowAtlasAvatarAiMount* pMount, struct FString StatString, int iLevel, int* attrb_Strength, int* attrb_Dexterity, int* attrb_Constitution, int* attrb_Psyche, int* attrb_Intelligence, int* attrb_Speed, int* attrb_Size, int* attrb_Weight );
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
	void IsIntact ( );
	void CheckIt ( );
	void ShowPendingClientResponse ( );
	void GetCursorPosition ( int* X, int* Y );
};

UClass* ANowPlayerController::pClassPointer = NULL;

// Class NowGame.NowPlayerHouse
// 0x0023 (0x0314 - 0x02F1)
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1643 ];

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
// 0x0018 (0x0054 - 0x003C)
class UNowPlayerManager : public UObject
{
public:
	float                                              PawnUpdateTimer;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        MyController;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	TArray< class ANowPawn* >                          PawnUpdateList;                                   		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClientAwareDist;                                  		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1644 ];

		return pClassPointer;
	};

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
// 0x0008 (0x02F8 - 0x02F0)
class ANowPointLightDayNight : public APointLightMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DayOn : 1;                                        		// 0x02F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      NightOn : 1;                                      		// 0x02F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1645 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void TurnOnNightLight ( );
};

UClass* ANowPointLightDayNight::pClassPointer = NULL;

// Class NowGame.NowProjectile
// 0x0010 (0x0334 - 0x0324)
class ANowProjectile : public AProjectile
{
public:
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x0324 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bActive : 1;                                      		// 0x0328 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseDestroyTimer : 1;                             		// 0x0328 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              destroyTime;                                      		// 0x032C (0x0004) [0x0000000000000000]              
	class AActor*                                      pIgnoreCollisionWith;                             		// 0x0330 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1646 ];

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
// 0x0050 (0x0384 - 0x0334)
class ANowProjectileArrow : public ANowProjectile
{
public:
	class UCombatSystemRangedNew*                      m_CombatSystemRanged;                             		// 0x0334 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_weatherAcceleration;                            		// 0x0338 (0x000C) [0x0000000000000000]              
	float                                              m_timeSinceLastweatherAcc;                        		// 0x0344 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasLanded : 1;                                 		// 0x0348 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    m_PSCTrail;                                       		// 0x034C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class AActor* >                            m_vPossibleTargets;                               		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_vNextLocation;                                  		// 0x035C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vLastVelocity;                                  		// 0x0368 (0x000C) [0x0000000000000000]              
	class ANowPlayerController*                        MyController;                                     		// 0x0374 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortDel__Delegate;                              		// 0x0378 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1647 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void setDestrTimer ( float secondsTilBoomBoom );
	void eventEncroachedBy ( class AActor* Other );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventLanded ( struct FVector HitNormal, class AActor* HitActor );
	class AProjectile* ProjectileFire ( struct FVector StartShot, struct FVector Direction );
	bool GetProjectileHitPart ( struct FVector StarTrace, struct FVector EndTrace, class AActor* HitActor, int* HitPart, struct FTraceHitInfo* HitInfo, struct FVector* HitLoc );
	void TraceTargets ( );
	int SortDel ( class AActor* A, class AActor* B );
	void FindPossibleTargets ( class ANowPlayerController* PC );
	void Tick ( float DeltaTime );
	void PhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void Timer ( );
	void InitBurning ( );
	void Init ( struct FVector Direction );
	void SetWeatherVariables ( int WindDirection, int Rain, float windMagnitude );
	void SetCombatSystemReference ( class UCombatSystemRangedNew* rangedSystem );
	void SetProjectileSpeed ( int ProjectileSpeed );
	void PostBeginPlay ( );
};

UClass* ANowProjectileArrow::pClassPointer = NULL;

// Class NowGame.NowProjectileFishing
// 0x0048 (0x037C - 0x0334)
class ANowProjectileFishing : public ANowProjectile
{
public:
	class UCombatSystemFishingNew*                     m_CombatSystem;                                   		// 0x0334 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_weatherAcceleration;                            		// 0x0338 (0x000C) [0x0000000000000000]              
	float                                              m_timeSinceLastweatherAcc;                        		// 0x0344 (0x0004) [0x0000000000000000]              
	float                                              depthUnderPos;                                    		// 0x0348 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasLanded : 1;                                 		// 0x034C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bInWater : 1;                                   		// 0x034C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_SinkTimer;                                      		// 0x0350 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_LocBeforeSink;                                  		// 0x0354 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_OldPosition;                                    		// 0x0360 (0x000C) [0x0000000000000000]              
	class AActor*                                      WaterActor;                                       		// 0x036C (0x0004) [0x0000000000000000]              
	struct FVector                                     WaterHitlocation;                                 		// 0x0370 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1648 ];

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
// 0x0028 (0x035C - 0x0334)
class ANowProjectileMagic : public ANowProjectile
{
public:
	struct FName                                       ImpactSoundGroup;                                 		// 0x0334 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             Trail;                                            		// 0x033C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    TrailPSC;                                         		// 0x0340 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AEmitter*                                    ProjExplosion;                                    		// 0x0344 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitEffect;                                        		// 0x0348 (0x0004) [0x0000000000000000]              
	class UClass*                                      LightClass;                                       		// 0x034C (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        Light;                                            		// 0x0350 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      HomingTarget;                                     		// 0x0354 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NowImpactSound;                                   		// 0x0358 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1649 ];

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
// 0x0000 (0x0648 - 0x0648)
class ANowScout : public AScout
{
public:

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1651 ];

		return pClassPointer;
	};

};

UClass* UNowSkelControlSingleBone::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshActor
// 0x002C (0x0354 - 0x0328)
class ANowSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned long                                      bHasHelmet : 1;                                   		// 0x0328 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateAnims : 1;                                 		// 0x0328 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsMale : 1;                                      		// 0x0328 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLogEverything : 1;                               		// 0x0328 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bSelected : 1;                                    		// 0x0328 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCharacterSelection : 1;                          		// 0x0328 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	class USkeletalMeshComponentGenerated*             m_SkelMeshBody;                                   		// 0x032C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstance*                           StoneMaterial;                                    		// 0x0330 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AEmitter*                                    effectEmitter;                                    		// 0x0334 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             SelectFx;                                         		// 0x0338 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             DeSelectFx;                                       		// 0x033C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UParticleSystem*                             DeleteFx;                                         		// 0x0340 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     OrgLoc;                                           		// 0x0344 (0x000C) [0x0000000000000000]              
	int                                                iFlag;                                            		// 0x0350 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1652 ];

		return pClassPointer;
	};

	void eventSetMercyMode ( );
	void PostBeginPlay ( );
	class UMaterialInstanceConstant* eventNowCreateAndSetMaterialInstanceConstant ( class USkeletalMeshComponent* SkelComp, int ElementIndex );
	void eventPlayDeleteEffect ( );
	void eventPlayDeSelectEffect ( );
	void eventPlaySelectEffect ( );
	void eventSaveMaterials ( );
	void eventSetFlag ( int iNewFlag );
	void TriggerFirstUpdate ( );
	void SetVisibility ( unsigned long Value );
	void ToggleVisibility ( );
};

UClass* ANowSkeletalMeshActor::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshActorDoll
// 0x0048 (0x0370 - 0x0328)
class ANowSkeletalMeshActorDoll : public ASkeletalMeshActor
{
public:
	class USkelControlLookAt*                          m_pLookAt;                                        		// 0x0328 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          m_pInCombat;                                      		// 0x032C (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vLookPos;                                       		// 0x0330 (0x000C) [0x0000000000000000]              
	class ASceneCapture2DActor*                        m_pCameraActor;                                   		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_vTargetLoc;                                     		// 0x0340 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vStartLoc;                                      		// 0x0344 (0x000C) [0x0000000000000000]              
	float                                              m_fTargetYaw;                                     		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              m_fTweenTime;                                     		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              m_fTweenTimeMax;                                  		// 0x0358 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInCombat : 1;                                  		// 0x035C (0x0004) [0x0000000000000000] [0x00000001] 
	class UAnimSet*                                    m_pFemaleAnimset;                                 		// 0x0360 (0x0004) [0x0000000000000000]              
	TArray< class UMagicMeshFX* >                      vMagicMeshFX;                                     		// 0x0364 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1653 ];

		return pClassPointer;
	};

	void Tick ( float fDeltaTime );
	void RotateLeft ( );
	void RotateRight ( );
	void PaperdollZoom ( unsigned long bZoom );
	void PaperdollPan ( int X, int Y );
	void eventSetInCombat ( unsigned long bNewInCombat );
	void eventcacheNodes ( );
	void AddMagicMeshFX ( class UMagicMeshFX* NewFX );
	void eventSpawnMagicMeshFX ( unsigned char eID );
	void eventClearAllMagicMeshFX ( );
	void eventClearMagicMeshFX ( unsigned char eID );
	void UpdateSkeletalComponents ( class ANowPawn* FromWhatPawn );
};

UClass* ANowSkeletalMeshActorDoll::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshActorDollEditor
// 0x0108 (0x0430 - 0x0328)
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
	class USkelControlLookAt*                          m_pLookAt;                                        		// 0x0384 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendList*                          m_pInCombat;                                      		// 0x0388 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      m_SkelMeshHead;                                   		// 0x038C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      m_SkelMeshBody;                                   		// 0x0390 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_StaticMeshR;                                    		// 0x0394 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        m_StaticMeshL;                                    		// 0x0398 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTexture2DComposite*                         Final_ArmorTextures[ 0x7 ];                       		// 0x039C (0x001C) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ArmorTexture;                                     		// 0x03B8 (0x0004) [0x0000000000000000]              
	struct FMaterialIntPairPreview                     UniqueArmorMaterials[ 0xC ];                      		// 0x03BC (0x0060) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ArmorMaterial;                                    		// 0x041C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           SkinMaterial;                                     		// 0x0420 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstance*                           HairMaterial;                                     		// 0x0424 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_pPawn;                                          		// 0x0428 (0x0004) [0x0000000000000000]              
	int                                                MySpecie;                                         		// 0x042C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1654 ];

		return pClassPointer;
	};

	void eventSetInCombat ( unsigned long bNewInCombat );
	void eventcacheNodes ( );
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

// Class NowGame.NowSkeletalMeshPlayerActor
// 0x0138 (0x0420 - 0x02E8)
class ANowSkeletalMeshPlayerActor : public AActor
{
public:
	class USkeletalMeshComponentGenerated*             SkeletalMeshComponent;                            		// 0x02E8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                iMeshFace;                                        		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iMeshHair;                                        		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iMeshBeard;                                       		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iColorSkin;                                       		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iColorHair;                                       		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iTextureFace;                                     		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iTextureTattoo;                                   		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iTextureScar;                                     		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                iTextureBody;                                     		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                vArmorMesh[ 0xB ];                                		// 0x0310 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	int                                                vArmorMaterial[ 0xB ];                            		// 0x033C (0x002C) [0x0000000000000001]              ( CPF_Edit )
	int                                                vArmorUnique[ 0xB ];                              		// 0x0368 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                cBackColor;                                       		// 0x0394 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                cFeetColor;                                       		// 0x03A4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                cLegsColor;                                       		// 0x03B4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                cTorsoColor;                                      		// 0x03C4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                cHelmetColor;                                     		// 0x03D4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMale : 1;                                        		// 0x03E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRandomize : 1;                                   		// 0x03E4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRandomizeColor : 1;                              		// 0x03E4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFollowCamera : 1;                                		// 0x03E4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                vAncestry[ 0x4 ];                                 		// 0x03E8 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                MainSpecies;                                      		// 0x03F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sFaceString;                                      		// 0x03FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sDecoString;                                      		// 0x0408 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fBuildMeshTimer;                                  		// 0x0414 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANowCameraActor*                             pCamera;                                          		// 0x0418 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          pLookAt;                                          		// 0x041C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1655 ];

		return pClassPointer;
	};

	void Tick ( float fDeltaTime );
	void Randomize ( );
	void InitData ( );
	void eventPostBeginPlay ( );
};

UClass* ANowSkeletalMeshPlayerActor::pClassPointer = NULL;

// Class NowGame.NowSkeletalMeshGeneratedPlayerActor
// 0x0000 (0x0420 - 0x0420)
class ANowSkeletalMeshGeneratedPlayerActor : public ANowSkeletalMeshPlayerActor
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

UClass* ANowSkeletalMeshGeneratedPlayerActor::pClassPointer = NULL;

// Class NowGame.NowSpotLightMovableDayNight
// 0x0008 (0x02F8 - 0x02F0)
class ANowSpotLightMovableDayNight : public ASpotLightMovable
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x02F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      DayOn : 1;                                        		// 0x02F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      NightOn : 1;                                      		// 0x02F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsDay : 1;                                        		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1657 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void eventPostBeginPlay ( );
	void Notify ( class UObservable* Src );
	void TurnOnNightLight ( );
};

UClass* ANowSpotLightMovableDayNight::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActor
// 0x0027 (0x0318 - 0x02F1)
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1658 ];

		return pClassPointer;
	};

	void eventOpenGFXScene ( int iGfxScene );
	void SetTargetTypesFromString ( struct FString sWorkBenchType );
	bool GetAnyPhysMaterialTargetValue ( unsigned char eTargetType, struct FString* sTargetValue );
	struct FString GetDisplayName ( );
	struct FString GetAtlasType ( );
	struct FString GetAtlasName ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActor::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraft
// 0x0004 (0x031C - 0x0318)
class ANowStaticMeshActorCraft : public ANowStaticMeshActor
{
public:
	int                                                m_iGfxScene;                                      		// 0x0318 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1659 ];

		return pClassPointer;
	};

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActorCraft::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftArmor
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftArmor : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftArmor::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftBow
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftBow : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftBow::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftButcher
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftButcher : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftButcher::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftFurnace
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftFurnace : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftFurnace::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftKiln
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftKiln : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftKiln::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftPotions
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftPotions : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftPotions::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftShield
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftShield : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftShield::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorCraftWeapon
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorCraftWeapon : public ANowStaticMeshActorCraft
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

UClass* ANowStaticMeshActorCraftWeapon::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmote
// 0x001C (0x0334 - 0x0318)
class ANowStaticMeshActorEmote : public ANowStaticMeshActor
{
public:
	struct FString                                     WhatEmote;                                        		// 0x0318 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0324 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ANowPawn*                                    UsingPawn;                                        		// 0x0330 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1668 ];

		return pClassPointer;
	};

	void eventTriggerEmote ( class APlayerController* PC );
	struct FString GetDisplayName ( );
	bool IsTarget ( );
	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActorEmote::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmoteChairA
// 0x0000 (0x0334 - 0x0334)
class ANowStaticMeshActorEmoteChairA : public ANowStaticMeshActorEmote
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

UClass* ANowStaticMeshActorEmoteChairA::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorEmoteChairB
// 0x0000 (0x0334 - 0x0334)
class ANowStaticMeshActorEmoteChairB : public ANowStaticMeshActorEmote
{
public:

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

UClass* ANowStaticMeshActorEmoteChairB::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorGate
// 0x0024 (0x033C - 0x0318)
class ANowStaticMeshActorGate : public ANowStaticMeshActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponentB;                             		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowAtlasAvatarTerritoryStructure*           pStructureOwner;                                  		// 0x031C (0x0004) [0x0000000000000000]              
	unsigned long                                      bGateOpen : 1;                                    		// 0x0320 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fGateAnim;                                        		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              fGateAnimMax;                                     		// 0x0328 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   StartAnimSound;                                   		// 0x032C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   StopAnimSound;                                    		// 0x0330 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             CloseParticle;                                    		// 0x0334 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             OpenParticle;                                     		// 0x0338 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1671 ];

		return pClassPointer;
	};

	void eventTick ( float fDeltaTime );
	void eventCloseGate ( );
	void eventOpenGate ( );
	void SetEtherworldsCollision ( unsigned long bTurnOn );
	void SetStructureOwner ( class ANowAtlasAvatarTerritoryStructure* pNewOwner, struct FVector vPos );
	bool AtlasUse ( class APlayerController* PC );
	struct FString GetAvatarID ( );
};

UClass* ANowStaticMeshActorGate::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorGateMetal
// 0x0000 (0x033C - 0x033C)
class ANowStaticMeshActorGateMetal : public ANowStaticMeshActorGate
{
public:

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

UClass* ANowStaticMeshActorGateMetal::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorGateStone
// 0x0000 (0x033C - 0x033C)
class ANowStaticMeshActorGateStone : public ANowStaticMeshActorGate
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

UClass* ANowStaticMeshActorGateStone::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorGateStoneGatehouse
// 0x0000 (0x033C - 0x033C)
class ANowStaticMeshActorGateStoneGatehouse : public ANowStaticMeshActorGate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1674 ];

		return pClassPointer;
	};

	void eventTick ( float fDeltaTime );
};

UClass* ANowStaticMeshActorGateStoneGatehouse::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorGateWood
// 0x0000 (0x033C - 0x033C)
class ANowStaticMeshActorGateWood : public ANowStaticMeshActorGate
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

UClass* ANowStaticMeshActorGateWood::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorLight
// 0x0004 (0x031C - 0x0318)
class ANowStaticMeshActorLight : public ANowStaticMeshActor
{
public:
	class UPointLightComponent*                        LightComponent;                                   		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

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

UClass* ANowStaticMeshActorLight::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorFireplace
// 0x0008 (0x0324 - 0x031C)
class ANowStaticMeshActorFireplace : public ANowStaticMeshActorLight
{
public:
	class UParticleSystemComponent*                    ParticlesComponent;                               		// 0x031C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AmbientSound;                                     		// 0x0320 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

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

UClass* ANowStaticMeshActorFireplace::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorLightLarge
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorLightLarge : public ANowStaticMeshActorLight
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

UClass* ANowStaticMeshActorLightLarge::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorLightMedium
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorLightMedium : public ANowStaticMeshActorLight
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

UClass* ANowStaticMeshActorLightMedium::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorLightSmall
// 0x0000 (0x031C - 0x031C)
class ANowStaticMeshActorLightSmall : public ANowStaticMeshActorLight
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

UClass* ANowStaticMeshActorLightSmall::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorNoteboard
// 0x0000 (0x0318 - 0x0318)
class ANowStaticMeshActorNoteboard : public ANowStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1681 ];

		return pClassPointer;
	};

	bool AtlasUse ( class APlayerController* PC );
};

UClass* ANowStaticMeshActorNoteboard::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorPriestBeacon
// 0x0004 (0x031C - 0x0318)
class ANowStaticMeshActorPriestBeacon : public ANowStaticMeshActor
{
public:
	unsigned long                                      bDontResRed : 1;                                  		// 0x0318 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1682 ];

		return pClassPointer;
	};

	void ShowBeacon ( unsigned long bOn );
};

UClass* ANowStaticMeshActorPriestBeacon::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorRelicBeacon
// 0x000C (0x0324 - 0x0318)
class ANowStaticMeshActorRelicBeacon : public ANowStaticMeshActor
{
public:
	class UParticleSystemComponent*                    Particles;                                        		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                iRelicType;                                       		// 0x031C (0x0004) [0x0000000000000000]              
	unsigned long                                      bRemoveRelic : 1;                                 		// 0x0320 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1683 ];

		return pClassPointer;
	};

	void SetRelicType ( int iNewType );
	void DestroyRelic ( );
	void RemoveRelic ( );
};

UClass* ANowStaticMeshActorRelicBeacon::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorSmokePillar
// 0x0004 (0x031C - 0x0318)
class ANowStaticMeshActorSmokePillar : public ANowStaticMeshActor
{
public:
	class UParticleSystemComponent*                    ParticlesComponent;                               		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

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

UClass* ANowStaticMeshActorSmokePillar::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1685 ];

		return pClassPointer;
	};

};

UClass* ANowStaticMeshActorSpawnable::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorLadder
// 0x0058 (0x0370 - 0x0318)
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
	struct FVector                                     vExitPlacePos;                                    		// 0x0354 (0x000C) [0x0000000000000000]              
	struct FVector                                     vStartPlacePos;                                   		// 0x0360 (0x000C) [0x0000000000000000]              
	class UArrowComponent*                             WallDirArrow;                                     		// 0x036C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1686 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SetLadderLength ( float NewLength );
	bool IsAtTop ( class AActor* Other );
	void eventSetLadderPoints ( );
};

UClass* ANowStaticMeshActorLadder::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorTorch
// 0x0014 (0x032C - 0x0318)
class ANowStaticMeshActorTorch : public ANowStaticMeshActor
{
public:
	struct FPointer                                    VfTable_IObserver;                                		// 0x0318 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UParticleSystemComponent*                    FireParticles;                                    		// 0x031C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPointLightComponent*                        LightComponent;                                   		// 0x0320 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      IsDay : 1;                                        		// 0x0324 (0x0004) [0x0000000000000000] [0x00000001] 
	class ANowAtlasAvatarTerritoryStructure*           pStructureOwner;                                  		// 0x0328 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1687 ];

		return pClassPointer;
	};

	void eventTick ( float fDeltaTime );
	void Notify ( class UObservable* Src );
	void SetNightLight ( );
	void SetStructureOwner ( class ANowAtlasAvatarTerritoryStructure* pNewOwner, struct FVector vPos );
};

UClass* ANowStaticMeshActorTorch::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorWeaponPreview
// 0x0000 (0x0364 - 0x0364)
class ANowStaticMeshActorWeaponPreview : public ANowStaticMeshActorWeapon
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

UClass* ANowStaticMeshActorWeaponPreview::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorWeaponPreviewCrafting
// 0x0020 (0x0384 - 0x0364)
class ANowStaticMeshActorWeaponPreviewCrafting : public ANowStaticMeshActorWeaponPreview
{
public:
	class ASceneCapture2DActor*                        m_pCameraActor;                                   		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   m_pNoMat;                                         		// 0x0368 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_pInvisMat;                                      		// 0x036C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_pInvalidMat;                                    		// 0x0370 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vBaseLocation;                                  		// 0x0374 (0x000C) [0x0000000000000000]              
	class USkeletalMeshComponent*                      SkeletalMeshComponentB;                           		// 0x0380 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1689 ];

		return pClassPointer;
	};

	void eventTick ( float fDeltaTime );
	void PreviewRanged ( );
	void PreviewShield ( );
	void PreviewWeapon ( );
	void RemoveSkinFromArmor ( );
	void eventSetInvalid ( );
	void PreviewArmor ( );
	void SetWeaponLength ( float NewLength );
	void SetPreviewArmor ( struct FString sDataString, int iSlot, unsigned long bNoMat );
	void SetPreviewWeapon ( struct FString sDataString, unsigned long bNoMat );
};

UClass* ANowStaticMeshActorWeaponPreviewCrafting::pClassPointer = NULL;

// Class NowGame.NowStaticMeshSkydome
// 0x0003 (0x02F4 - 0x02F1)
class ANowStaticMeshSkydome : public AStaticMeshActor
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

UClass* ANowStaticMeshSkydome::pClassPointer = NULL;

// Class NowGame.NowTCPLink
// 0x0024 (0x030C - 0x02E8)
class ANowTCPLink : public AInfo
{
public:
	class UObject*                                     ReportTo;                                         		// 0x02E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBusy : 1;                                        		// 0x02EC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     sSavedString;                                     		// 0x02F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FsSendQuery >                       vSendQuerys;                                      		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iNextReqID;                                       		// 0x0308 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1691 ];

		return pClassPointer;
	};

	void OnRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	bool IsCompleteJSon ( struct FString sString );
	void eventReceivedText ( struct FString Text );
	void eventClosed ( );
	void eventOpened ( );
	void eventResolveFailed ( );
	void eventResolved ( );
	struct FString eventGetSendURL ( int iQueryIndex );
	class UHttpRequestInterface* eventCreateHttpRequestInterface ( class UObject* pNewReportTo );
	struct FsSendQuery eventCreateRequest ( class UObject* pNewReportTo, unsigned char eType );
	int eventFindQueryIndex ( int iReqIndex );
	void HandleRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response );
	void SendQuery ( unsigned char eTarget, struct FString sQuery, unsigned long bStart, unsigned long bEnd, class UObject* pNewReportTo );
};

UClass* ANowTCPLink::pClassPointer = NULL;

// Class NowGame.NowTeleporter
// 0x0007 (0x02F8 - 0x02F1)
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1692 ];

		return pClassPointer;
	};

	void TeleportMe ( class ANowPawn* P );
};

UClass* ANowTeleporter::pClassPointer = NULL;

// Class NowGame.NowVolumeSecurityZone
// 0x0015 (0x0339 - 0x0324)
class ANowVolumeSecurityZone : public AVolume
{
public:
	struct FString                                     ZoneName;                                         		// 0x0324 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ANowAtlasAvatarZoneBrain*                    ZoneBrain;                                        		// 0x0330 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotClient : 1;                                   		// 0x0334 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      SecurityLevel;                                    		// 0x0338 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1693 ];

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
// 0x000F (0x0064 - 0x0055)
class UObservable : public UActorComponent
{
public:
	TArray< class UObserver* >                         List;                                             		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1694 ];

		return pClassPointer;
	};

	void eventNotifyObservers ( );
	void DeleteObserver ( class UObserver* obs );
	void AddObserver ( class UObserver* obs );
};

UClass* UObservable::pClassPointer = NULL;

// Class NowGame.TimeControl
// 0x0040 (0x00A4 - 0x0064)
class UTimeControl : public UObservable
{
public:
	int                                                StartTimeS;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              ElapsedTimeS;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              DeltaTimeS;                                       		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastSync;                                		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              DayLengthS;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              NyxMonthLenghtDays;                               		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              YearLengthDays;                                   		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              PartOfDay;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              PartOfNyxMonth;                                   		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              PartOfNyxPos;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              PartOfYear;                                       		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              SunRiseAt;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                NyxMonth;                                         		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                Year;                                             		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDay : 1;                                        		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1695 ];

		return pClassPointer;
	};

	void UpdatePartOfDMY ( );
	void Initialize ( int serverTime );
	void SynchTime ( int serverTime );
	void Update ( );
};

UClass* UTimeControl::pClassPointer = NULL;

// Class NowGame.WeatherControl
// 0x01A4 (0x0208 - 0x0064)
class UWeatherControl : public UObservable
{
public:
	TArray< class UObserver* >                         CheapObservers;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AMortalCloudEmitter* >               ToBeRelocated;                                    		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FWeatherData                                Data[ 0x17 ];                                     		// 0x007C (0x0170) [0x0000000000000000]              
	int                                                CurrentRegion;                                    		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                CurrentTime;                                      		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                NextRegion;                                       		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                NextSwitchTime;                                   		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                WindDirection;                                    		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              windMagnitude;                                    		// 0x0200 (0x0004) [0x0000000000000000]              
	unsigned long                                      ThunderCheat : 1;                                 		// 0x0204 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BadWeather : 1;                                   		// 0x0204 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Replace : 1;                                      		// 0x0204 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      WeatherOff : 1;                                   		// 0x0204 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ToBeRelocatedLock : 1;                            		// 0x0204 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1696 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1697 ];

		return pClassPointer;
	};

	void Notify ( class UObservable* Src );
};

UClass* UObserver::pClassPointer = NULL;

// Class NowGame.OnlineSubsystemNowGame
// 0x0270 (0x06D8 - 0x0468)
class UOnlineSubsystemNowGame : public UOnlineSubsystemAtlas
{
public:
	TArray< struct FScriptDelegate >                   m_ClientAvatarObtainedDelegates;                  		// 0x0468 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_GMPetitionUpdatedDelegates;                     		// 0x0474 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientGuildUpdatedDelegates;                    		// 0x0480 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientGuildWarUpdatedDelegates;                 		// 0x048C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_TradeChangedDelegates;                          		// 0x0498 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_OnNameCheckDelegates;                           		// 0x04A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_MoStatsChangedDelegates;                        		// 0x04B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_FriendListChangedDelegates;                     		// 0x04BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientMailRequestDelegates;                     		// 0x04C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_StatNames;                                      		// 0x04D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FItemInfo >                         m_InventoryItems;                                 		// 0x04E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UNowGFXHudScene*                             m_GFXHudScene;                                    		// 0x04EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           GuildMembers;                                     		// 0x04F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct Fs_GuildWars >                      guildWars;                                        		// 0x04FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct Fs_GMPetition >                     GMPetitions;                                      		// 0x0508 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct Fs_GMPetition >                     HackFlags;                                        		// 0x0514 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct Fs_GuildWars                                m_guildWar;                                       		// 0x0520 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_GuildDisplay;                                   		// 0x0530 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_GameSessionBoardID;                             		// 0x053C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_LastWhisperedBy;                                		// 0x0548 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      m_bHavePetitionOnServer : 1;                      		// 0x0554 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      m_IsBanking : 1;                                  		// 0x0554 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      m_bSeeIntro : 1;                                  		// 0x0554 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	int                                                m_LastEnteredTerritoryID;                         		// 0x0558 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPlayerController*                        m_LocalPC;                                        		// 0x055C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANowPawn*                                    m_Pawn;                                           		// 0x0560 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FString >                           m_MurderedBy;                                     		// 0x0564 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned long >                            m_Accuse;                                         		// 0x0570 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_PendingFriendNames;                             		// 0x057C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FsStringIntVect >                   m_vStartingPoints;                                		// 0x0588 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sCookingMessage;                                		// 0x0594 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sPotionMakingMessage;                           		// 0x05A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class ANowCrossNodeActor* >                m_vCrossNodeAvatars;                              		// 0x05AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FsBrokerPos >                       m_vBrokerPos;                                     		// 0x05B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sLastAccount;                                   		// 0x05C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_sLastPassword;                                  		// 0x05D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FLocalPick                                  LocalPicked;                                      		// 0x05DC (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     danielstring;                                     		// 0x0604 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FsPendingTimer                              m_PendingTimer;                                   		// 0x0610 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_vClientRepsonses;                               		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_HouseSessionBag;                                		// 0x065C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnNameCheck__Delegate;                          		// 0x0660 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTradeChanged__Delegate;                       		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMoStatsChanged__Delegate;                     		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendListsChanged__Delegate;                 		// 0x0684 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOpenInventoryContextMenu__Delegate;           		// 0x0690 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientGuildUpdated__Delegate;                 		// 0x069C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGMPetitionUpdated__Delegate;                  		// 0x06A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientGuildWarUpdated__Delegate;              		// 0x06B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientMailRequest__Delegate;                  		// 0x06C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarObtained__Delegate;               		// 0x06CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1698 ];

		return pClassPointer;
	};

	class UNowGFXHudScene* eventGetGFXHud ( );
	void eventDrawDebugLineColor ( struct FVector vStart, struct FVector vEnd, int R, int G, int B );
	void eventDrawDebugLine ( struct FVector vStart, struct FVector vEnd );
	bool eventIsMyTgt ( class AActor* A );
	bool eventConvertGuidToActor ( struct FString petGUID, class ANowAtlasAvatarAi** pOutActor );
	void eventSpawnEffect ( int iWhatEffect, struct FVector vFrom, struct FVector vDest );
	void PlaceMurderCounts ( );
	void AddClientAvatarObtainedDelegate ( struct FScriptDelegate ClientAvatarObtainedDelegate );
	void OnClientAvatarObtained ( );
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
	void OnOpenInventoryContextMenu ( int iBagID, int iSlotId );
	void SetLocalPlayerController ( class ANowPlayerController* LocalPlayerController );
	void SendServerMessage ( struct FString msg );
	void TellBehaviorPlayer ( struct FString TellCommand );
	void GetNumStabledPets ( int* numPets );
	void GetInventoryContentInfo ( int iBag, int iSlot, class UContentInfo** Info, int* itemValue, int* ItemQuantity, unsigned char* bLocked );
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
	void eventRemTimer ( struct FString sId );
	void eventTriggerPendingTimer ( );
	void eventAddTimer ( struct FString sId, struct FString sName, struct FString sDesc, struct FString sIcon, float fTimer, struct FString sCancelDesc, unsigned long bDontAutoClose );
	void AddCrossNodeAvatarToList ( class ANowCrossNodeActor* NewAvatar );
	void eventAddBrokerPoint ( struct FString sName, int iID, struct FVector vPos );
	void eventAddStartingPoint ( int iID, struct FString sName, struct FVector vPos );
	void eventAddPriestPoint ( int iID, struct FVector vPos );
	void eventSpawnRelicEffect ( int iID, struct FVector vPos, int iAnim );
	void eventRemRelicPoint ( int iID );
	void OnFriendListsChanged ( );
	void OnMoStatsChanged ( );
	void OnTradeChanged ( );
	class UStatManager* GetStatManager ( );
	void SetActivateCrossNodeAvatarList ( class ANowAtlasAvatar* pActor, unsigned long bActive );
	void CheckCrossNodeAvatars ( );
	void HandlePotionTickUpdate ( class ANowPawn* Pawn );
	struct FString GetGuidFromItemName ( struct FString sName );
	void LogoutCleanup ( );
	void PlayerLogout ( );
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
	bool IsItemConstructionMaterial ( struct FString sGuid );
	bool CheckRefineMaterialsNew ( struct FString Item1, struct FString Item2, struct FString Item3, struct FString* Message );
	bool CheckDevicePrerequisites ( struct FString DeviceName );
	void GetReagentContentInfo ( int SpellID, struct FString impagepath );
	void LocalPickSpell ( int SpellID, int spellSchoolPage );
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
	int GetAttributeState ( int AttributeId );
	int ToggleAttributeState ( int AttributeId );
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
	void GetLootContentInfo ( int iSlot, class UContentInfo** Info, struct FString* LootName, int* ItemQuantity );
	void GetEquipSlotContentInfo ( struct FString sEquipSlot, struct FPointer pPlayer, class UContentInfo** Info, unsigned char* bLocked );
	void GetVendorContentInfo ( int iSlot, class UContentInfo** Int, int* ItemCost, int* ItemQuantity, struct FString* ItemName, int* MaxQuantity );
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
	void GetBankContentInfo ( int iSlot, class UContentInfo** Info, int* ItemQuantity );
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
	struct FString FindItemGuidByBookGuid ( struct FString sBookGuid );
	void RenameBook ( struct FString sBookGuid, struct FString sTitle );
	void DestroyItemAmount ( struct FString sItemGuid, int iAmount );
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
	int GetHouseSessionType ( );
	int GetHouseSessionBag ( );
	void GetHouseItemContentInfo ( int iSlot, int SessionId, class UContentInfo** Info, int* ItemQuantity, struct FString* Description, struct FString* ItemGuid );
	bool CancelLogin ( );
	bool AtlasLogin ( struct FString UserName, struct FString Password );
	void DumpTextToFile ( struct FString outFilename, struct FString Text );
	void UpgradeTS ( class ANowAtlasAvatarTerritoryStructure* pStructure );
	void PlaceTSNpc ( int Slot, class ANowAtlasAvatarTerritoryStructure* pStructure );
	void LockLastItemUsed ( );
	void ClearLockedItemGuid ( );
	void ClearLastItemUsed ( );
	void ForceTriggerEquipDelegate ( );
	void PlaceKeepNpc ( int Slot );
	void SetPylonName ( class ANowAtlasAvatarPylon* targetPylon, struct FString NewValue );
	void SetPylonAttTarget ( class ANowAtlasAvatar* targetPylon, int NewValue );
	void SetPylonDefTarget ( class ANowAtlasAvatar* targetPylon, int NewValue );
	void SetPylonAoeTarget ( class ANowAtlasAvatar* targetPylon, int NewValue );
	void UpgradePylon ( class ANowAtlasAvatarPylon* targetPylon );
	void PlaceTerritoryStructure ( struct FVector NewLoc, struct FRotator NewRot, class AActor* pParent, class AActor* pParentB, struct FString sInitString );
	void PlaceAvatar ( struct FVector newPylonLoc );
	void AddPylonInfo ( struct FString newPylonGuid, struct FString newPylonGuild, struct FVector newPylonLoc, int newPylonAOE, int newPylonAOETgt, int newPylonDef, int newPylonDefTgt, int newPylonAtt, int newPylonAttTgt, int newPylonTier, int newPylonUpkeep );
	void AddPetInfo ( struct FString sPetName, struct FString sPetType, int iPetLevel, int iPetLoyalty, int iPetHP, int iStableIndex, struct FString sState );
	void RemItemInterest ( int iDeposit );
	void AddItemInterest ( int iDeposit );
	void OnNameCheck ( unsigned long Check );
};

UClass* UOnlineSubsystemNowGame::pClassPointer = NULL;

// Class NowGame.SkelControlDrawScale
// 0x000C (0x0100 - 0x00F4)
class USkelControlDrawScale : public USkelControlSingleBone
{
public:
	float                                              fMountTestSize;                                   		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIncludeMeshScale : 1;                            		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fMountDrawScale;                                  		// 0x00FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1699 ];

		return pClassPointer;
	};

	void TriggerDrawScale ( );
};

UClass* USkelControlDrawScale::pClassPointer = NULL;

// Class NowGame.SkelControlDynamicCreature
// 0x0038 (0x012C - 0x00F4)
class USkelControlDynamicCreature : public USkelControlSingleBone
{
public:
	TArray< struct FControllInfo >                     MyStateInfo;                                      		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ActiveIndex;                                      		// 0x0100 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	TArray< struct FChildInfo >                        ChildStates;                                      		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FParentInfo >                       CachedParents;                                    		// 0x0110 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class USkelControlDynamicCreature* >       CachedChildren;                                   		// 0x011C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDynamicPhysicsController : 1;                    		// 0x0128 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1700 ];

		return pClassPointer;
	};

	struct FParentInfo eventCreateParentInfo ( int I );
	void UpdateInput ( );
	void SetDynamicIndex ( int NewIndex );
};

UClass* USkelControlDynamicCreature::pClassPointer = NULL;

// Class NowGame.SkelControlLimbBonePos
// 0x000C (0x0128 - 0x011C)
class USkelControlLimbBonePos : public USkelControlLimb
{
public:
	struct FName                                       GetEffectorLocFromBone;                           		// 0x011C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBoneOnMountOwner : 1;                            		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

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

UClass* USkelControlLimbBonePos::pClassPointer = NULL;

// Class NowGame.SkeletalMeshComponentGenerated
// 0x0240 (0x0860 - 0x0620)
class USkeletalMeshComponentGenerated : public USkeletalMeshComponent
{
public:
	int                                                iMeshFace;                                        		// 0x0620 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iMeshHair;                                        		// 0x0624 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iMeshBeard;                                       		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iGMType;                                          		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iColorSkin;                                       		// 0x0630 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iColorHair;                                       		// 0x0634 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iTextureBody;                                     		// 0x0638 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iTextureFace;                                     		// 0x063C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iTextureTattoo;                                   		// 0x0640 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                iTextureScar;                                     		// 0x0644 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     vArmorString[ 0xB ];                              		// 0x0648 (0x0084) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     sDecoString;                                      		// 0x06CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     sFaceString;                                      		// 0x06D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     sWeaponType;                                      		// 0x06E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FsArmor                                     vArmorType[ 0xE ];                                		// 0x06F0 (0x00A8) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHasApex : 1;                                     		// 0x0798 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bMale : 1;                                        		// 0x0798 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bFirstUpdate : 1;                                 		// 0x0798 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bBuildPlayerReady : 1;                            		// 0x0798 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                vAncestry[ 0x4 ];                                 		// 0x079C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	int                                                iMainAncestry;                                    		// 0x07AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      MainSpecies;                                      		// 0x07B0 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      MainRace;                                         		// 0x07B1 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMesh*                               pHeadMesh;                                        		// 0x07B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMesh*                               pHairMesh;                                        		// 0x07B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMesh*                               pBeardMesh;                                       		// 0x07BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                cBackColor;                                       		// 0x07C0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                cFeetColor;                                       		// 0x07D0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                cLegsColor;                                       		// 0x07E0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                cTorsoColor;                                      		// 0x07F0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                cHelmetColor;                                     		// 0x0800 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   HeadMaterial;                                     		// 0x0810 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   HairMaterial;                                     		// 0x0814 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   HelmetMaterial;                                   		// 0x0818 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInterface*                          CapeMaterial;                                     		// 0x081C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   SkinMaterial;                                     		// 0x0820 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   ArmorMaterial;                                    		// 0x0824 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class USkeletalMeshSocket* >               vSavedSockets;                                    		// 0x0828 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     sGeneratedFaceData;                               		// 0x0834 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     sGeneratedDecoData;                               		// 0x0840 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	int                                                iHairSlot;                                        		// 0x084C (0x0004) [0x0000000000000000]              
	int                                                iHeadSlot;                                        		// 0x0850 (0x0004) [0x0000000000000000]              
	int                                                iHelmetSlot;                                      		// 0x0854 (0x0004) [0x0000000000000000]              
	int                                                iCapeSlot;                                        		// 0x0858 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   InvisMat;                                         		// 0x085C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1702 ];

		return pClassPointer;
	};

	void ResetSettings ( );
	void SetFrom ( class USkeletalMeshComponentGenerated* pOther );
	class ANowPawn* GetOwnerPawn ( );
	void BuildRacePath ( int iIndex, struct FString* sPath, struct FString* sName );
	void SetHelmetOverlay ( );
	void SetGMMesh ( );
	void SetupMaterials ( );
	void BuildAnimations ( );
	void BuildBodyMaterials ( );
	void BuildMainRace ( );
	void BuildMesh ( );
	void BuildStaticData ( );
	void BuildArmorData ( );
	void RemoveFullNudity ( );
	void BuildPlayer ( );
	void ReadyBuildPlayer ( );
	void SetArmorColor ( int iNewColor, int iIndex );
	void SetArmorString ( struct FString sNewString, int iIndex );
	void SetFaceString ( struct FString sNewString );
	void SetDecoString ( struct FString sNewString );
	void UpdateStrings ( );
	void BuildGeneratedData ( int iAge );
	class USkeletalMesh* LoadHeadMesh ( );
};

UClass* USkeletalMeshComponentGenerated::pClassPointer = NULL;

// Class NowGame.SkeletalMeshComponentGeneratedPlayer
// 0x0004 (0x0864 - 0x0860)
class USkeletalMeshComponentGeneratedPlayer : public USkeletalMeshComponentGenerated
{
public:
	class UMaterialInstanceConstant*                   ArmsMaterial;                                     		// 0x0860 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1703 ];

		return pClassPointer;
	};

	void BuildMesh ( );
	void SetupMaterials ( );
	void BuildBodyMaterials ( );
};

UClass* USkeletalMeshComponentGeneratedPlayer::pClassPointer = NULL;

// Class NowGame.SkeletalMeshComponentGeneratedPlayerNew
// 0x006C (0x08CC - 0x0860)
class USkeletalMeshComponentGeneratedPlayerNew : public USkeletalMeshComponentGenerated
{
public:
	class UMaterial*                                   SkinBaseMaterial;                                 		// 0x0860 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   SkinBaseMaterialFemale;                           		// 0x0864 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterial*                                   ArmorBaseMaterial;                                		// 0x0868 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterial*                                   HelmetTrackMaterial;                              		// 0x086C (0x0004) [0x0000000000000000]              
	class UMaterial*                                   FaceTrackMaterial;                                		// 0x0870 (0x0004) [0x0000000000000000]              
	struct FName                                       ArmorParamName[ 0xB ];                            		// 0x0874 (0x0058) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1704 ];

		return pClassPointer;
	};

	void BuildMesh ( );
	void SetupMaterials ( );
	void BuildBodyMaterials ( );
	struct FString BuildSkinTextureBasePath ( );
	class UMaterial* GetArmorBaseMaterial ( );
	class UMaterialInstanceConstant* GetSkinBaseMaterialFemale ( );
	class UMaterial* GetSkinBaseMaterial ( );
};

UClass* USkeletalMeshComponentGeneratedPlayerNew::pClassPointer = NULL;

// Class NowGame.StatManager
// 0x011C (0x0158 - 0x003C)
class UStatManager : public UObject
{
public:
	struct FString                                     PlayerName;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Caps[ 0x7 ];                                      		// 0x0048 (0x001C) [0x0000000000000000]              
	float                                              Size;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              Strength;                                         		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              Dexterity;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              Intelligence;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              Psyche;                                           		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              Constitution;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                CurHP;                                            		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                MaxHP;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                CurMP;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                MaxMP;                                            		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                CurSP;                                            		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                MaxSP;                                            		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              MaxHPThr;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              MaxMPThr;                                         		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              MaxSPThr;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                ReserveHP;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                ReserveHPMax;                                     		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                ReserveHPThresh;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                ReserveMP;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                ReserveMPMax;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                ReserveMPThresh;                                  		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                ReserveSP;                                        		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                ReserveSPMax;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                ReserveSPThresh;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                Hunger;                                           		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                Potion;                                           		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                MaxPotion;                                        		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                PlayerWeight;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              Fatness;                                          		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              CurSPFloat;                                       		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                MountCurHP;                                       		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                MountMaxHP;                                       		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              MountCurSP;                                       		// 0x00E4 (0x0004) [0x0000000000000000]              
	int                                                MountMaxSP;                                       		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FString                                     MountName;                                        		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PetCurHP;                                         		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                PetMaxHP;                                         		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                PetCurL;                                          		// 0x0100 (0x0004) [0x0000000000000000]              
	int                                                PetMaxL;                                          		// 0x0104 (0x0004) [0x0000000000000000]              
	struct FString                                     PetDispName;                                      		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Weight;                                           		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                MaxWeight;                                        		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                FreeWeight;                                       		// 0x011C (0x0004) [0x0000000000000000]              
	int                                                ArmorWeight;                                      		// 0x0120 (0x0004) [0x0000000000000000]              
	int                                                ArmorMaxWeight;                                   		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                ArmorFreeWeight;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                EncWeight;                                        		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                DamageBonus;                                      		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                PlayerFlag;                                       		// 0x0134 (0x0004) [0x0000000000000000]              
	float                                              SkillPointPool;                                   		// 0x0138 (0x0004) [0x0000000000000000]              
	int                                                AttributePointPool;                               		// 0x013C (0x0004) [0x0000000000000000]              
	int                                                MurderCount;                                      		// 0x0140 (0x0004) [0x0000000000000000]              
	int                                                MurderCountTimer;                                 		// 0x0144 (0x0004) [0x0000000000000000]              
	int                                                StatLossCount;                                    		// 0x0148 (0x0004) [0x0000000000000000]              
	int                                                StatLossCountTimer;                               		// 0x014C (0x0004) [0x0000000000000000]              
	float                                              MaxUnderWaterTime;                                		// 0x0150 (0x0004) [0x0000000000000000]              
	class ANowPlayerController*                        MyController;                                     		// 0x0154 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1705 ];

		return pClassPointer;
	};

	class UNowGFXHudScene* GetGFXHud ( );
	struct FString GetFatnessName ( );
	void eventSetMaxStamina ( int NewMaxSP );
	int GetMaxSP ( );
	void eventUpdateTarget ( class AActor* WhatActor, unsigned char UpdateType, int IntValue, struct FString StrValue );
	void eventUpdateGFXHudParam ( unsigned char Param, unsigned char TargetType, int NewIntValue, struct FString NewStringValue );
	void eventUpdateGFX ( struct FString sName );
	void eventInitGFXStats ( );
	void InitManager ( );
	int GetSizeMod ( );
	int GetDexterityMod ( );
	int GetPsycheMod ( );
	int GetIntelligenceMod ( );
	int GetConstitutionMod ( );
	int GetStrengthMod ( );
	float CalcDamageBonusPct ( );
	void CalcWeights ( );
	void CalculateBuoyancy ( );
	void CalculateMaxUnderWaterTime ( );
	void CalcDamageBonus ( );
};

UClass* UStatManager::pClassPointer = NULL;

// Class NowGame.StatTracker
// 0x003C (0x0078 - 0x003C)
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
	struct FVector                                     vLastPos;                                         		// 0x006C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1706 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1707 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1708 ];

		return pClassPointer;
	};

	void AddRespToArray ( int iIndex, int iTargetIndex, struct FString Script, struct FString Chat );
	void AddChatToArray ( int iIndex, struct FString Chat );
};

UClass* UUIInfoTalker::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerAnimalBreeder
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerAnimalBreeder : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1709 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerAnimalBreeder::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1710 ];

		return pClassPointer;
	};

	void GenerateResponse ( );
	void GenerateIntro ( );
	void InitInfo ( class ANowPlayerController* pOwner );
	void GetKeeperStats ( );
};

UClass* UUIInfoTalkerCityBrain::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerCropsFarmer
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerCropsFarmer : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1711 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerCropsFarmer::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1712 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerFromContent::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerGateKeeper
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerGateKeeper : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1713 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerGateKeeper::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1714 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1715 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1716 ];

		return pClassPointer;
	};

	void GeneratePetResponse ( );
	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerStable::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerTaxManagerHouse
// 0x001C (0x00A0 - 0x0084)
class UUIInfoTalkerTaxManagerHouse : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMyGuild : 1;                                     		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanChange : 1;                                   		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                iTaxTreasury;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                iProminence;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FString                                     sTaxTreasuryString;                               		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1717 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerHouse* eventGetAHouse ( );
	void GenerateResponse ( );
	void GenerateIntro ( );
	void InitInfo ( class ANowPlayerController* pOwner );
	void GetTaxManagerStats ( );
};

UClass* UUIInfoTalkerTaxManagerHouse::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerTaxManagerKeep
// 0x0004 (0x00A4 - 0x00A0)
class UUIInfoTalkerTaxManagerKeep : public UUIInfoTalkerTaxManagerHouse
{
public:
	int                                                iTaxes;                                           		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1718 ];

		return pClassPointer;
	};

	class ANowAtlasAvatarPlayerKeep* eventGetAKeep ( );
	void GenerateResponse ( );
	void GenerateIntro ( );
	void InitInfo ( class ANowPlayerController* pOwner );
	void GetTaxManagerStats ( );
};

UClass* UUIInfoTalkerTaxManagerKeep::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45835 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45834 ];

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

// Class NowGame.NowPlayerInput
// 0x0011 (0x0288 - 0x0277)
class UNowPlayerInput : public UAtlasPlayerInput
{
public:
	unsigned long                                      bIsInMenu : 1;                                    		// 0x0278 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LastInputKey : 1;                                 		// 0x0278 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPressedForward : 1;                              		// 0x0278 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              fCheckForTap;                                     		// 0x027C (0x0004) [0x0000000000000000]              
	struct FIntPoint                                   SavePoint;                                        		// 0x0280 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45927 ];

		return pClassPointer;
	};

	void ToggleMOUI ( );
	void PostBeginPlay ( );
	class ANowAtlasAvatarAiMount* eventGetMount ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45983 ];

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

// Class NowGame.NowChildHudDebugAvatarManager
// 0x0004 (0x050C - 0x0508)
class UNowChildHudDebugAvatarManager : public UNowChildHudDebug
{
public:
	class UNowAvatarManager*                           pManager;                                         		// 0x0508 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45982 ];

		return pClassPointer;
	};

	void DumpDebugHudInfo ( );
	void DrawChildHud ( class UCanvas* C );
	void UseDebugHudB ( );
	void UseDebugHud ( );
	void InitChildHud ( class ANowHUD* InitParentHud );
};

UClass* UNowChildHudDebugAvatarManager::pClassPointer = NULL;

// Class NowGame.NowChildHudDebugPlayerManager
// 0x0004 (0x050C - 0x0508)
class UNowChildHudDebugPlayerManager : public UNowChildHudDebug
{
public:
	class UNowPlayerManager*                           pManager;                                         		// 0x0508 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45984 ];

		return pClassPointer;
	};

	void DumpDebugHudInfo ( );
	void DrawChildHud ( class UCanvas* C );
	void UseDebugHudB ( );
	void UseDebugHud ( );
	void InitChildHud ( class ANowHUD* InitParentHud );
};

UClass* UNowChildHudDebugPlayerManager::pClassPointer = NULL;

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
	unsigned long                                      bSummonNextTarget : 1;                            		// 0x005C (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46000 ];

		return pClassPointer;
	};

	bool Escape ( );
	void RightClick ( );
	void LeftClick ( );
	bool PressedUse ( );
	void RemoveViewmode ( );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46135 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46137 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46139 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46141 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46143 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46145 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46147 ];

		return pClassPointer;
	};

};

UClass* UClientEffect_Stun::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46223 ];

		return pClassPointer;
	};

	void SendCommand ( int FinalCommand );
	void NumberPress ( int iNumber );
	void CanvasTick ( class UCanvas* C );
	bool Escape ( );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewModeCreatureControl::pClassPointer = NULL;

// Class NowGame.NowVolumeUnderground
// 0x0000 (0x0364 - 0x0364)
class ANowVolumeUnderground : public APhysicsVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46339 ];

		return pClassPointer;
	};

	void eventPawnLeavingVolume ( class APawn* P );
	void eventPawnEnteredVolume ( class APawn* P );
};

UClass* ANowVolumeUnderground::pClassPointer = NULL;

// Class NowGame.NowVolumePlaceBlocker
// 0x000C (0x0330 - 0x0324)
class ANowVolumePlaceBlocker : public AVolume
{
public:
	struct FString                                     Reason;                                           		// 0x0324 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46341 ];

		return pClassPointer;
	};

};

UClass* ANowVolumePlaceBlocker::pClassPointer = NULL;

// Class NowGame.NowVolumeWater
// 0x0028 (0x039C - 0x0374)
class ANowVolumeWater : public AWaterVolume
{
public:
	float                                              Height;                                           		// 0x0374 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             WaterRings;                                       		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             WaterSplash;                                      		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ANowPawn* >                          SwimmingPawns;                                    		// 0x0380 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APlayerController*                           ClientController;                                 		// 0x038C (0x0004) [0x0000000000000000]              
	float                                              LastControllerEnterTime;                          		// 0x0390 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CachedUnderWaterCue;                              		// 0x0394 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWasAtSurface : 1;                                		// 0x0398 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTookDrowningDamage : 1;                          		// 0x0398 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46344 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46483 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
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
// 0x0040 (0x0090 - 0x0050)
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
	struct FString                                     sPlaceErrorMsg;                                   		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46578 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	bool VerifyPoint ( struct FVector WhatPoint, unsigned long bMessage );
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

// Class NowGame.ClientViewModePylonBuild
// 0x003C (0x008C - 0x0050)
class UClientViewModePylonBuild : public UClientViewMode
{
public:
	float                                              PylonRadius;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	class ANowStaticMeshActorSpawnable*                PreviewActor;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0058 (0x000C) [0x0000000000000000]              
	int                                                CornerMatIndex[ 0x4 ];                            		// 0x0064 (0x0010) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      LinkMesh;                                         		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPlaceErrorMsg;                                   		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46655 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	void DrawDebugCylinder ( struct FVector Start, struct FVector End, float Radius, int Segments, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	void DrawMoDebugLine ( struct FVector LineStart, struct FVector LineEnd, unsigned char R, unsigned char G, unsigned char B, unsigned long bPersistentLines );
	bool VerifyPoint ( struct FVector WhatPoint, unsigned long bMessage );
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46738 ];

		return pClassPointer;
	};

	void RemoveViewmode ( );
	int GetSlot ( );
	void UpdateSelected ( );
	void Tick ( float DeltaTime );
	void CreatePreviewMesh ( );
	void AttachTo ( class AController* aController );
	class ANowAtlasAvatarPylon* GetPylonActor ( );
	bool PressedUse ( );
};

UClass* UClientViewModePylonUpgrade::pClassPointer = NULL;

// Class NowGame.ClientViewModeTrailerCameraMode
// 0x0050 (0x00A0 - 0x0050)
class UClientViewModeTrailerCameraMode : public UClientViewMode
{
public:
	class ANowStaticMeshActorSpawnable*                HelperActor;                                      		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< class ANowStaticMeshActorSpawnable* >      vCameraSpots;                                     		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fTotalDist;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRunning : 1;                                     		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNoCamRot : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLocked : 1;                                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              fTotalFlyTime;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              fFlyDistPerSec;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              fTotalFlyTimeToLoc;                               		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              fTotalDistToLoc;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              fTotalDistStartToLoc;                             		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                iCurIndexTgt;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              fNextScreenShot;                                  		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                iSelectIndex;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FRotator                                    TargetRotation;                                   		// 0x0088 (0x000C) [0x0000000000000000]              
	float                                              fRotTimer;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              fRotTimerMax;                                     		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              fTotalTimePast;                                   		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46768 ];

		return pClassPointer;
	};

	bool Escape ( );
	void RightClick ( );
	void LeftClick ( );
	bool PressedUse ( );
	void StartAnim ( );
	void RemoveViewmode ( );
	void CanvasTick ( class UCanvas* C );
	void Tick ( float DeltaTime );
	void CalcTotalDist ( );
	void SetCameraSaveString ( struct FString sString );
	struct FString GetCameraSaveString ( );
	void AddCameraPos ( );
	void AttachTo ( class AController* aController );
};

UClass* UClientViewModeTrailerCameraMode::pClassPointer = NULL;

// Class NowGame.NowSpellLight
// 0x0000 (0x01F8 - 0x01F8)
class UNowSpellLight : public UPointLightComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47153 ];

		return pClassPointer;
	};

};

UClass* UNowSpellLight::pClassPointer = NULL;

// Class NowGame.DeathFX
// 0x0020 (0x005C - 0x003C)
class UDeathFX : public UObject
{
public:
	class ANowCorpse*                                  pCorpse;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                pMaterialEffect;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pParticleSystem;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pChildSystem;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   pTriggerSound;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              fDuration;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              fPhysStrength;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                iChildParticles;                                  		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47777 ];

		return pClassPointer;
	};

	void SetRagdollStats ( );
	void AddParticleEffects ( );
	void SetCorpseMaterials ( );
	void StartEffect ( class ANowCorpse* pNewCorpse );
};

UClass* UDeathFX::pClassPointer = NULL;

// Class NowGame.NowCorpse
// 0x0060 (0x0348 - 0x02E8)
class ANowCorpse : public AActor
{
public:
	class UParticleSystem*                             BloodSpray;                                       		// 0x02E8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodExplosion;                                   		// 0x02EC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BloodSmallDrip;                                   		// 0x02F0 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               HeadMesh;                                         		// 0x02F4 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                       		// 0x02F8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BodyImpactSound;                                  		// 0x02FC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PartImpactSound;                                  		// 0x0300 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      ExtraMesh;                                        		// 0x0304 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ActorH;                                           		// 0x0308 (0x0004) [0x0000000000000000]              
	float                                              ActorW;                                           		// 0x030C (0x0004) [0x0000000000000000]              
	struct FVector                                     Impulse;                                          		// 0x0310 (0x000C) [0x0000000000000000]              
	unsigned long                                      bLostHead : 1;                                    		// 0x031C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCruchedHead : 1;                                 		// 0x031C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpawnedDecal : 1;                                		// 0x031C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseBlood : 1;                                    		// 0x031C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInWater : 1;                                     		// 0x031C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FName                                       BloodSquirtBoneName;                              		// 0x0320 (0x0008) [0x0000000000000000]              
	int                                                iBloodSquirts;                                    		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              fBloodSquirtTimer;                                		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              fCheckForRemove;                                  		// 0x0330 (0x0004) [0x0000000000000000]              
	float                                              fCheckForRemoveMax;                               		// 0x0334 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             DeathSoundComponent;                              		// 0x0338 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMOGibSkeletalMeshComponent*                 GibBodyMeshComp;                                  		// 0x033C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMOGibSkeletalMeshComponent*                 GibPartMeshComp;                                  		// 0x0340 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      GibHeadMeshComp;                                  		// 0x0344 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47786 ];

		return pClassPointer;
	};

	void eventAiGibLimb ( int iLimb, class ANowAtlasAvatarAi* pOwner );
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
	void StartCorpse ( class AActor* FromActor, struct FName lastHitBoneName, struct FVector AddVelocity, float LastDmg, unsigned long bFromMercyMode );
	void FullGibCorpse ( class AActor* FromActor );
	void SetDeathEffect ( struct FString sDeathEffect );
	void Tick ( float fDeltaTime );
};

UClass* ANowCorpse::pClassPointer = NULL;

// Class NowGame.DeathFXFire
// 0x0000 (0x005C - 0x005C)
class UDeathFXFire : public UDeathFX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47799 ];

		return pClassPointer;
	};

};

UClass* UDeathFXFire::pClassPointer = NULL;

// Class NowGame.DebugBoxSpawnable
// 0x0003 (0x02F4 - 0x02F1)
class ADebugBoxSpawnable : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47807 ];

		return pClassPointer;
	};

};

UClass* ADebugBoxSpawnable::pClassPointer = NULL;

// Class NowGame.NowGFXSceneLoading
// 0x000C (0x01A4 - 0x0198)
class UNowGFXSceneLoading : public UNowGFXScene
{
public:
	TArray< struct FString >                           TipsArray;                                        		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47812 ];

		return pClassPointer;
	};

	void startHints ( );
	void setProgress ( int Percent, unsigned long skipTween );
	void addHint ( struct FString hint );
	void InitGFXScene ( class APlayerController* Player, class UNowGFXHud* NewGFXHud );
};

UClass* UNowGFXSceneLoading::pClassPointer = NULL;

// Class NowGame.MagicMeshFXFireArrow
// 0x0003 (0x0068 - 0x0065)
class UMagicMeshFXFireArrow : public UMagicMeshFX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47891 ];

		return pClassPointer;
	};

	void RemoveEffect ( );
	bool HandleStacking ( );
	void AddParticleEffects ( );
};

UClass* UMagicMeshFXFireArrow::pClassPointer = NULL;

// Class NowGame.MagicMeshFXRelic
// 0x0003 (0x0068 - 0x0065)
class UMagicMeshFXRelic : public UMagicMeshFX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47901 ];

		return pClassPointer;
	};

};

UClass* UMagicMeshFXRelic::pClassPointer = NULL;

// Class NowGame.MOGibSkeletalMeshComponent
// 0x0000 (0x0620 - 0x0620)
class UMOGibSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47943 ];

		return pClassPointer;
	};

};

UClass* UMOGibSkeletalMeshComponent::pClassPointer = NULL;

// Class NowGame.MortalAtlasAvatarComponent
// 0x0000 (0x0080 - 0x0080)
class UMortalAtlasAvatarComponent : public UAtlasAvatarComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47945 ];

		return pClassPointer;
	};

};

UClass* UMortalAtlasAvatarComponent::pClassPointer = NULL;

// Class NowGame.MortalAvatarManager
// 0x0010 (0x004C - 0x003C)
class UMortalAvatarManager : public UObject
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47947 ];

		return pClassPointer;
	};

	void Tick ( );
	void MoveToGround ( class AActor* A );
	void RemoveActor ( class AActor* A );
	void AddActor ( class AActor* A );
};

UClass* UMortalAvatarManager::pClassPointer = NULL;

// Class NowGame.NowActorFactoryStaticMesh
// 0x0000 (0x0078 - 0x0078)
class UNowActorFactoryStaticMesh : public UActorFactoryStaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48455 ];

		return pClassPointer;
	};

};

UClass* UNowActorFactoryStaticMesh::pClassPointer = NULL;

// Class NowGame.NowProjectileEffect
// 0x007C (0x03C4 - 0x0348)
class ANowProjectileEffect : public ANowAiEffect
{
public:
	struct FVector                                     vTargetVect;                                      		// 0x0348 (0x000C) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              fLifeTimer;                                       		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              fHitTimer;                                        		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              fHitTimerMax;                                     		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              fSpeed;                                           		// 0x0364 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x0368 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bRandInitVel : 1;                               		// 0x0368 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDuped : 1;                                     		// 0x0368 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bFollowGround : 1;                              		// 0x0368 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_bLeaveDecal : 1;                                		// 0x0368 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_bDidHit : 1;                                    		// 0x0368 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_bAttackReleaseSound : 1;                        		// 0x0368 (0x0004) [0x0000000000000000] [0x00000040] 
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x036C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    m_PSCTrail;                                       		// 0x0370 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             m_PSTrail;                                        		// 0x0374 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             m_PSImpact;                                       		// 0x0378 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_vImpactEffectTranslation;                       		// 0x037C (0x000C) [0x0000000000000000]              
	class USoundCue*                                   m_SoundRelease;                                   		// 0x0388 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_SoundImpact;                                    		// 0x038C (0x0004) [0x0000000000000000]              
	struct FVector                                     m_VelocityMod;                                    		// 0x0390 (0x000C) [0x0000000000000000]              
	float                                              fDecalSize;                                       		// 0x039C (0x0004) [0x0000000000000000]              
	int                                                m_iDupeInto;                                      		// 0x03A0 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           m_pDecalMaterial;                                 		// 0x03A4 (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeDist;                                 		// 0x03A8 (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeForce;                                		// 0x03AC (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeForceReduction;                       		// 0x03B0 (0x0004) [0x0000000000000000]              
	float                                              fCameraShakeTweenTimeMax;                         		// 0x03B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     vCameraShakePosMax;                               		// 0x03B8 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48470 ];

		return pClassPointer;
	};

	void MoveToGround ( );
	void Tick ( float DeltaTime );
	void Destroyed ( );
	void SetTargetActor ( class AActor* NewActor );
	void SetTargetVect ( struct FVector NewVector );
	void CameraShake ( );
	void EffectProjectileHit ( );
	void LeaveDecal ( );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowProjectileEffect::pClassPointer = NULL;

// Class NowGame.NowAiEffectAcid
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectAcid : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48531 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectAcid::pClassPointer = NULL;

// Class NowGame.NowAiEffectAcidSuicide
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectAcidSuicide : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48542 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectAcidSuicide::pClassPointer = NULL;

// Class NowGame.NowProjectileEffectArrow
// 0x0000 (0x03C4 - 0x03C4)
class ANowProjectileEffectArrow : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48551 ];

		return pClassPointer;
	};

};

UClass* ANowProjectileEffectArrow::pClassPointer = NULL;

// Class NowGame.NowAiEffectBow
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectBow : public ANowProjectileEffectArrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48566 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectBow::pClassPointer = NULL;

// Class NowGame.NowAiEffectClaymore
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectClaymore : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48571 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectClaymore::pClassPointer = NULL;

// Class NowGame.NowAiEffectCrossbow
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectCrossbow : public ANowProjectileEffectArrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48577 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectCrossbow::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicGlaive
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectDemonicGlaive : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48584 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicGlaive::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicHeal
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicHeal : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48590 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicHeal::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicProj
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicProj : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48596 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicProj::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicProjAoe
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicProjAoe : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48610 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicProjAoe::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicSphere
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicSphere : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48616 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void EffectProjectileHit ( );
	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectDemonicSphere::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicStone
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicStone : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48632 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicStone::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicStoneAoe
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicStoneAoe : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48640 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicStoneAoe::pClassPointer = NULL;

// Class NowGame.NowAiEffectDemonicSummon
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectDemonicSummon : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48647 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectDemonicSummon::pClassPointer = NULL;

// Class NowGame.NowAiEffectFireSpit
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectFireSpit : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48655 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectFireSpit::pClassPointer = NULL;

// Class NowGame.NowAiEffectForce
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectForce : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48662 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectForce::pClassPointer = NULL;

// Class NowGame.NowAiEffectGlaive
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectGlaive : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48672 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectGlaive::pClassPointer = NULL;

// Class NowGame.NowAiEffectHalberd
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectHalberd : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48678 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectHalberd::pClassPointer = NULL;

// Class NowGame.NowAiEffectHasta
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectHasta : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48684 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectHasta::pClassPointer = NULL;

// Class NowGame.NowAiEffectInsectoidSummonProj
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectInsectoidSummonProj : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48690 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectInsectoidSummonProj::pClassPointer = NULL;

// Class NowGame.NowAiEffectInsectoidSword
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectInsectoidSword : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48697 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectInsectoidSword::pClassPointer = NULL;

// Class NowGame.NowAiEffectKhuriteSabre
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectKhuriteSabre : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48701 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectKhuriteSabre::pClassPointer = NULL;

// Class NowGame.NowAiEffectLight
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectLight : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48705 ];

		return pClassPointer;
	};

	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectLight::pClassPointer = NULL;

// Class NowGame.NowAiEffectLizardStaff
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectLizardStaff : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48714 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectLizardStaff::pClassPointer = NULL;

// Class NowGame.NowAiEffectLizardSword
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectLizardSword : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48720 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectLizardSword::pClassPointer = NULL;

// Class NowGame.NowAiEffectMassiveAxe
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectMassiveAxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48723 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectMassiveAxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectOneHandedAxe
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectOneHandedAxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48726 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectOneHandedAxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectPickaxe
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectPickaxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48732 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectPickaxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectPortalProj
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectPortalProj : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48738 ];

		return pClassPointer;
	};

	void InitEffectProjectile ( unsigned long bDuped );
};

UClass* ANowAiEffectPortalProj::pClassPointer = NULL;

// Class NowGame.NowAiEffectRisarAxe
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectRisarAxe : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48747 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectRisarAxe::pClassPointer = NULL;

// Class NowGame.NowAiEffectSabre
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectSabre : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48751 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSabre::pClassPointer = NULL;

// Class NowGame.NowAiEffectShamanStaff
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectShamanStaff : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48754 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectShamanStaff::pClassPointer = NULL;

// Class NowGame.NowAiEffectSledgeHammer
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectSledgeHammer : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48760 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSledgeHammer::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawn
// 0x001C (0x0304 - 0x02E8)
class ANowAiEffectSpawn : public AActor
{
public:
	unsigned long                                      bHideActor : 1;                                   		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRunningUnHide : 1;                               		// 0x02E8 (0x0004) [0x0000000000000000] [0x00000002] 
	class USoundCue*                                   m_UnHideSound;                                    		// 0x02EC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             m_UnHideParticles;                                		// 0x02F0 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 m_AiStaticMesh;                                   		// 0x02F4 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x02F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANowAtlasAvatarAi*                           pOwner;                                           		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              m_fTimer;                                         		// 0x0300 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48766 ];

		return pClassPointer;
	};

	void TimeOut ( );
	void Tick ( float DT );
	void UnHideEffect ( );
	void InitEffect ( class ANowAtlasAvatarAi* NewOwner );
};

UClass* ANowAiEffectSpawn::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawnEgg
// 0x0000 (0x0304 - 0x0304)
class ANowAiEffectSpawnEgg : public ANowAiEffectSpawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48785 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSpawnEgg::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawnFromGround
// 0x000C (0x0310 - 0x0304)
class ANowAiEffectSpawnFromGround : public ANowAiEffectSpawn
{
public:
	struct FVector                                     vStartTrans;                                      		// 0x0304 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48792 ];

		return pClassPointer;
	};

	void Tick ( float DT );
	void InitEffect ( class ANowAtlasAvatarAi* NewOwner );
};

UClass* ANowAiEffectSpawnFromGround::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpawnUnHideAnimation
// 0x0004 (0x0308 - 0x0304)
class ANowAiEffectSpawnUnHideAnimation : public ANowAiEffectSpawn
{
public:
	class UAnimNodeBlendList*                          pBlendList;                                       		// 0x0304 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48801 ];

		return pClassPointer;
	};

	void TimeOut ( );
	void UnHideEffect ( );
	void InitEffect ( class ANowAtlasAvatarAi* NewOwner );
};

UClass* ANowAiEffectSpawnUnHideAnimation::pClassPointer = NULL;

// Class NowGame.NowAiEffectSpikedClub
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectSpikedClub : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48809 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSpikedClub::pClassPointer = NULL;

// Class NowGame.NowAiEffectStone
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectStone : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48815 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectStone::pClassPointer = NULL;

// Class NowGame.NowAiEffectStoneRain
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectStoneRain : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48823 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectStoneRain::pClassPointer = NULL;

// Class NowGame.NowAiEffectSword
// 0x0000 (0x0348 - 0x0348)
class ANowAiEffectSword : public ANowAiEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48830 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectSword::pClassPointer = NULL;

// Class NowGame.NowAiEffectThunderbolt
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectThunderbolt : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48836 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectThunderbolt::pClassPointer = NULL;

// Class NowGame.NowAiEffectWeb
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectWeb : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48848 ];

		return pClassPointer;
	};

};

UClass* ANowAiEffectWeb::pClassPointer = NULL;

// Class NowGame.NowAiEffectWoodCuttingAxe
// 0x0000 (0x03C4 - 0x03C4)
class ANowAiEffectWoodCuttingAxe : public ANowProjectileEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48855 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48935 ];

		return pClassPointer;
	};

};

UClass* UNowAnimNodeBlendAndPhys::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49076 ];

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
// 0x0000 (0x0348 - 0x0348)
class ANowCorpseDynamic : public ANowCorpse
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49431 ];

		return pClassPointer;
	};

	void GrabMaterials ( class ANowAtlasAvatar* WhatActor );
};

UClass* ANowCorpseDynamic::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamicHorse_Content
// 0x0000 (0x0840 - 0x0840)
class ANowAtlasAvatarAiMountDynamicHorse_Content : public ANowAtlasAvatarAiMountDynamicHorse
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49884 ];

		return pClassPointer;
	};

};

UClass* ANowAtlasAvatarAiMountDynamicHorse_Content::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamicLykiator_Content
// 0x0000 (0x0840 - 0x0840)
class ANowAtlasAvatarAiMountDynamicLykiator_Content : public ANowAtlasAvatarAiMountDynamicLykiator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49934 ];

		return pClassPointer;
	};

};

UClass* ANowAtlasAvatarAiMountDynamicLykiator_Content::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAiMountDynamicMolva_Content
// 0x0000 (0x0840 - 0x0840)
class ANowAtlasAvatarAiMountDynamicMolva_Content : public ANowAtlasAvatarAiMountDynamicMolva
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49982 ];

		return pClassPointer;
	};

};

UClass* ANowAtlasAvatarAiMountDynamicMolva_Content::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarAnimatedDoor
// 0x0004 (0x03B0 - 0x03AC)
class ANowAtlasAvatarAnimatedDoor : public ANowAtlasAvatar
{
public:
	class AStaticMeshActor*                            m_StaticMeshActor;                                		// 0x03AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50094 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarAnimatedDoor::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEventAnim
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarEventAnim : public ANowAtlasAvatarEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50153 ];

		return pClassPointer;
	};

	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarEventAnim::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEventAnimVisible
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarEventAnimVisible : public ANowAtlasAvatarEventAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50164 ];

		return pClassPointer;
	};

	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
};

UClass* ANowAtlasAvatarEventAnimVisible::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarEventDoor
// 0x0000 (0x03AC - 0x03AC)
class ANowAtlasAvatarEventDoor : public ANowAtlasAvatarEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50174 ];

		return pClassPointer;
	};

	void eventUnTriggerMe ( );
	void eventTriggerMe ( );
	void SetActivateCrossNodeAvatarList ( );
	void Destroyed ( );
	void PostBeginPlay ( );
};

UClass* ANowAtlasAvatarEventDoor::pClassPointer = NULL;

// Class NowGame.NPC_LookAt
// 0x0004 (0x02EC - 0x02E8)
class ANPC_LookAt : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02E8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50239 ];

		return pClassPointer;
	};

};

UClass* ANPC_LookAt::pClassPointer = NULL;

// Class NowGame.NowBlockingVolume
// 0x0000 (0x0328 - 0x0328)
class ANowBlockingVolume : public ABlockingVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50322 ];

		return pClassPointer;
	};

	void setVolumeCollision ( unsigned long isCollision );
};

UClass* ANowBlockingVolume::pClassPointer = NULL;

// Class NowGame.NowAtlasAvatarNpcStable
// 0x0000 (0x042C - 0x042C)
class ANowAtlasAvatarNpcStable : public ANowAtlasAvatarNpc
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50432 ];

		return pClassPointer;
	};

};

UClass* ANowAtlasAvatarNpcStable::pClassPointer = NULL;

// Class NowGame.NowStaticMeshcomponentDoor
// 0x0014 (0x0268 - 0x0254)
class UNowStaticMeshcomponentDoor : public UStaticMeshComponent
{
public:
	unsigned long                                      m_playerIsInHouse : 1;                            		// 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      m_ClientActor;                                    		// 0x0258 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            m_vPlayersInHouse;                                		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50601 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51102 ];

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
// 0x0020 (0x0370 - 0x0350)
class ANowFractureStaticMeshActor : public AFracturedSMActorSpawnable
{
public:
	int                                                TierExplosionCounter;                             		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              TierExplosionTimer;                               		// 0x0354 (0x0004) [0x0000000000000000]              
	int                                                PartExplosionCounter;                             		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              PartExplosionTimer;                               		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              RemoveTimer;                                      		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              TowerHeight;                                      		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              TowerWidth;                                       		// 0x0368 (0x0004) [0x0000000000000000]              
	float                                              fForce;                                           		// 0x036C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51293 ];

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
// 0x002C (0x0360 - 0x0334)
class ANowProjectileGeneric : public ANowProjectile
{
public:
	TArray< struct FVector >                           TargetPos;                                        		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurTargetIndex;                                   		// 0x0340 (0x0004) [0x0000000000000000]              
	unsigned long                                      velRotation : 1;                                  		// 0x0344 (0x0004) [0x0000000000000000] [0x00000001] 
	class USoundCue*                                   NowImpactSound;                                   		// 0x0348 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NowFlySound;                                      		// 0x034C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ImpactParticle;                                   		// 0x0350 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TrailParticle;                                    		// 0x0354 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             SoundComp;                                        		// 0x0358 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    m_TrailPSC;                                       		// 0x035C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51438 ];

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
	void SetTrailParticleFromString ( struct FString BaseString );
	void eventSetStaticMeshFromString ( struct FString BaseString );
};

UClass* ANowProjectileGeneric::pClassPointer = NULL;

// Class NowGame.NowCheatManager
// 0x0000 (0x0054 - 0x0054)
class UNowCheatManager : public UCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51868 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51879 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51967 ];

		return pClassPointer;
	};

	void DrawChildHud ( class UCanvas* C );
	void LogEmitterBase ( );
	void LogEmitterPool ( );
};

UClass* UNowChildHudDebugCount::pClassPointer = NULL;

// Class NowGame.NowEmitter
// 0x0000 (0x02F4 - 0x02F4)
class ANowEmitter : public AEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51979 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51986 ];

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
// 0x0034 (0x009C - 0x0068)
class UNowChildHudDynamicCreature : public UNowChildHudCreate
{
public:
	class ANowAtlasAvatarAiMountDynamic*               PreviewMount;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FString                                     ApperanceCode;                                    		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANowAtlasAvatarAiMountDynamic*               Horse;                                            		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                PreviewAnim;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	class ASpotLightMovable*                           PreviewLight;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDrawCollision : 1;                               		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAtGround : 1;                                    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoFancyStuff : 1;                                		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     HorseBaseLocation;                                		// 0x0088 (0x000C) [0x0000000000000000]              
	int                                                FancyInt;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                iMountType;                                       		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52049 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52297 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52337 ];

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
// 0x002C (0x0350 - 0x0324)
class ANowProjectileBase : public AProjectile
{
public:
	class UStaticMeshComponent*                        m_StaticMesh;                                     		// 0x0324 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      HomingTarget;                                     		// 0x0328 (0x0004) [0x0000000000000000]              
	struct FVector                                     HomingTargetLoc;                                  		// 0x032C (0x000C) [0x0000000000000000]              
	float                                              TimeUntilImpact;                                  		// 0x0338 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilDestroy;                                 		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              TimeUntilHoming;                                  		// 0x0340 (0x0004) [0x0000000000000000]              
	float                                              HomingRate;                                       		// 0x0344 (0x0004) [0x0000000000000000]              
	float                                              HomingRateTimer;                                  		// 0x0348 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDidImpact : 1;                                   		// 0x034C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52345 ];

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
// 0x0007 (0x02F8 - 0x02F1)
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52378 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52556 ];

		return pClassPointer;
	};

};

UClass* UNowDamageType::pClassPointer = NULL;

// Class NowGame.NowDynamicCameraActor
// 0x0000 (0x0450 - 0x0450)
class ANowDynamicCameraActor : public ADynamicCameraActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52579 ];

		return pClassPointer;
	};

};

UClass* ANowDynamicCameraActor::pClassPointer = NULL;

// Class NowGame.NowEffectMeatChunk
// 0x0020 (0x0308 - 0x02E8)
class ANowEffectMeatChunk : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystemComponent;                          		// 0x02E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x02EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             Trail;                                            		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              Speed;                                            		// 0x02F4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ImpactSound;                                      		// 0x02F8 (0x0004) [0x0000000000000000]              
	class UCylinderComponent*                          CylinderComponent;                                		// 0x02FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TossZ;                                            		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                Bounces;                                          		// 0x0304 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52581 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void RandSpin ( float spinRate );
	void Init ( struct FVector Direction );
};

UClass* ANowEffectMeatChunk::pClassPointer = NULL;

// Class NowGame.NowGameInfo
// 0x0000 (0x04A0 - 0x04A0)
class ANowGameInfo : public AAtlasGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52638 ];

		return pClassPointer;
	};

};

UClass* ANowGameInfo::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerGuildSentinel
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerGuildSentinel : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52666 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerGuildSentinel::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerStoneCutter
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerStoneCutter : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52667 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerStoneCutter::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerMiner
// 0x0004 (0x0088 - 0x0084)
class UUIInfoTalkerMiner : public UUIInfoTalker
{
public:
	class ANowPlayerController*                        NowPC;                                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52668 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerMiner::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerTerritoryVendor
// 0x0000 (0x0084 - 0x0084)
class UUIInfoTalkerTerritoryVendor : public UUIInfoTalker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52671 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerTerritoryVendor::pClassPointer = NULL;

// Class NowGame.UIInfoTalkerTerritoryLibrary
// 0x0000 (0x0084 - 0x0084)
class UUIInfoTalkerTerritoryLibrary : public UUIInfoTalker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52672 ];

		return pClassPointer;
	};

	void InitInfo ( class ANowPlayerController* pOwner );
};

UClass* UUIInfoTalkerTerritoryLibrary::pClassPointer = NULL;

// Class NowGame.NowLoginDecorationActor
// 0x002C (0x0314 - 0x02E8)
class ANowLoginDecorationActor : public AActor
{
public:
	class UPointLightComponent*                        FlagLight;                                        		// 0x02E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FColor                                      FlagColor[ 0xA ];                                 		// 0x02EC (0x0028) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56610 ];

		return pClassPointer;
	};

	void DeSelect ( );
	void Select ( );
	void SetFlag ( int iFlag );
};

UClass* ANowLoginDecorationActor::pClassPointer = NULL;

// Class NowGame.NowMusicBank
// 0x0010 (0x02F8 - 0x02E8)
class ANowMusicBank : public AActor
{
public:
	TArray< class USoundCue* >                         BankMusicTracks;                                  		// 0x02E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USpriteComponent*                            MySprite;                                         		// 0x02F4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56676 ];

		return pClassPointer;
	};

	void FindMusicManager ( );
	void PostBeginPlay ( );
};

UClass* ANowMusicBank::pClassPointer = NULL;

// Class NowGame.NowSafeSpot
// 0x0004 (0x02EC - 0x02E8)
class ANowSafeSpot : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02E8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57163 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57430 ];

		return pClassPointer;
	};

	void AddToManager ( class AActor* WhatActor );
	int SortDel ( class AActor* A, class AActor* B );
	void TickManager ( );
	void InitManager ( );
};

UClass* UNowPhysManager::pClassPointer = NULL;

// Class NowGame.NowStaticMeshActorRelicBeaconImpact
// 0x000C (0x0324 - 0x0318)
class ANowStaticMeshActorRelicBeaconImpact : public ANowStaticMeshActor
{
public:
	class UParticleSystemComponent*                    Particles;                                        		// 0x0318 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              fDelay;                                           		// 0x031C (0x0004) [0x0000000000000000]              
	float                                              fDeath;                                           		// 0x0320 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59536 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* ANowStaticMeshActorRelicBeaconImpact::pClassPointer = NULL;

// Class NowGame.NowTeleportSpot
// 0x0004 (0x02EC - 0x02E8)
class ANowTeleportSpot : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02E8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59677 ];

		return pClassPointer;
	};

};

UClass* ANowTeleportSpot::pClassPointer = NULL;

// Class NowGame.NowTempleSpot
// 0x0010 (0x02F8 - 0x02E8)
class ANowTempleSpot : public AActor
{
public:
	TArray< class ANowTempleSpotChild* >               TempleChildren;                                   		// 0x02E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USpriteComponent*                            MySprite;                                         		// 0x02F4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59683 ];

		return pClassPointer;
	};

	struct FVector ReturnPosition ( );
};

UClass* ANowTempleSpot::pClassPointer = NULL;

// Class NowGame.NowTempleSpotChild
// 0x0004 (0x02EC - 0x02E8)
class ANowTempleSpotChild : public AActor
{
public:
	class USpriteComponent*                            MySprite;                                         		// 0x02E8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59686 ];

		return pClassPointer;
	};

};

UClass* ANowTempleSpotChild::pClassPointer = NULL;

// Class NowGame.NowUFO
// 0x0004 (0x0328 - 0x0324)
class ANowUFO : public AProjectile
{
public:
	class UParticleSystem*                             Trail;                                            		// 0x0324 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59693 ];

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
// 0x000C (0x0330 - 0x0324)
class ANowUnCoolSpotVolume : public AVolume
{
public:
	TArray< class ANowSafeSpot* >                      ForcedSafeSpots;                                  		// 0x0324 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59709 ];

		return pClassPointer;
	};

	void eventMoveToSafeSpot ( class AActor* WhatActor );
	void eventPawnEnteredVolume ( class APawn* Other );
	void eventActorEnteredVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowUnCoolSpotVolume::pClassPointer = NULL;

// Class NowGame.NowVolumeContinentTeleport
// 0x0008 (0x036C - 0x0364)
class ANowVolumeContinentTeleport : public APhysicsVolume
{
public:
	int                                                iContinent;                                       		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTriggerd : 1;                                    		// 0x0368 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59730 ];

		return pClassPointer;
	};

	void eventActorEnteredVolume ( class AActor* Other );
	void eventPawnEnteredVolume ( class APawn* Other );
};

UClass* ANowVolumeContinentTeleport::pClassPointer = NULL;

// Class NowGame.NowVolumeDamage
// 0x0028 (0x034C - 0x0324)
class ANowVolumeDamage : public AVolume
{
public:
	int                                                AmountOfDamage;                                   		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Timer;                                            		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DamageReason;                                     		// 0x032C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   DamageSound;                                      		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTimer;                                        		// 0x033C (0x0004) [0x0000000000000000]              
	unsigned long                                      bWillCauseDeath : 1;                              		// 0x0340 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTeleportAfterTriggerd : 1;                       		// 0x0340 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class ANowSafeSpot*                                SpotToMoveToAfterDeath;                           		// 0x0344 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANowPawn*                                    CachedPawn;                                       		// 0x0348 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59739 ];

		return pClassPointer;
	};

	void DealDamage ( class ANowPlayerController* DamageTaker );
	void MovePlayer ( );
	void eventActorEnteredVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowVolumeDamage::pClassPointer = NULL;

// Class NowGame.NowVolumeLadder
// 0x0000 (0x0398 - 0x0398)
class ANowVolumeLadder : public ALadderVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59762 ];

		return pClassPointer;
	};

};

UClass* ANowVolumeLadder::pClassPointer = NULL;

// Class NowGame.NowVolumePostProcess
// 0x0034 (0x0358 - 0x0324)
class ANowVolumePostProcess : public AVolume
{
public:
	struct FVector                                     EffectCenter;                                     		// 0x0324 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectMaxRange;                                   		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_HighLights;                                 		// 0x0334 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_MidTones;                                   		// 0x0340 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scene_Shadows;                                    		// 0x034C (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59767 ];

		return pClassPointer;
	};

	void eventActorLeavingVolume ( class AActor* Other );
	void eventActorEnteredVolume ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANowVolumePostProcess::pClassPointer = NULL;

// Class NowGame.NowVolumeSoundArea
// 0x0004 (0x0328 - 0x0324)
class ANowVolumeSoundArea : public AVolume
{
public:
	class UPhysicalMaterial*                           NowPhysMaterialOverride;                          		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59809 ];

		return pClassPointer;
	};

};

UClass* ANowVolumeSoundArea::pClassPointer = NULL;

// Class NowGame.PathNodePoop
// 0x0000 (0x02E8 - 0x02E8)
class APathNodePoop : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60660 ];

		return pClassPointer;
	};

	void LogMe ( int MyNumber );
	void MoveToGround ( struct FName WhatMeshName );
};

UClass* APathNodePoop::pClassPointer = NULL;

// Class NowGame.PosHelper
// 0x0004 (0x02EC - 0x02E8)
class APosHelper : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                              		// 0x02E8 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60673 ];

		return pClassPointer;
	};

};

UClass* APosHelper::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif