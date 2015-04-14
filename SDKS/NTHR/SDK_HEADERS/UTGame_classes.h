/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: UTGame_classes.h
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

#define CONST_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME               8
#define CONST_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME        7
#define CONST_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME              6
#define CONST_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME               5
#define CONST_STATS_VIEW_DM_VEHICLES_ALLTIME                     4
#define CONST_STATS_VIEW_DM_WEAPONS_ALLTIME                      3
#define CONST_STATS_VIEW_DM_RANKED_ALLTIME                       2
#define CONST_STATS_VIEW_DM_PLAYER_ALLTIME                       1
#define CONST_QUERY_CAMPAIGN                                     6
#define CONST_QUERY_DUEL                                         5
#define CONST_QUERY_WAR                                          4
#define CONST_QUERY_VCTF                                         3
#define CONST_QUERY_CTF                                          2
#define CONST_QUERY_TDM                                          1
#define CONST_QUERY_DM                                           0
#define CONST_PROPERTY_CUSTOMMUTATORS                            0x40000004
#define CONST_PROPERTY_SERVERDESCRIPTION                         0x40000003
#define CONST_PROPERTY_CUSTOMGAMEMODE                            0x40000002
#define CONST_PROPERTY_CUSTOMMAPNAME                             0x40000001
#define CONST_PROPERTY_EPICMUTATORS                              0x10000105
#define CONST_PROPERTY_LEADERBOARDRATING                         0x20000004
#define CONST_PROPERTY_TIMELIMIT                                 0x100000F9
#define CONST_PROPERTY_GOALSCORE                                 0x100000F8
#define CONST_PROPERTY_NUMBOTS                                   0x100000F7
#define CONST_CONTEXT_VSBOTS_4_TO                                6
#define CONST_CONTEXT_VSBOTS_3_TO                                5
#define CONST_CONTEXT_VSBOTS_2_TO                                4
#define CONST_CONTEXT_VSBOTS_3_TO01                              3
#define CONST_CONTEXT_VSBOTS_1_TO                                2
#define CONST_CONTEXT_VSBOTS_1_TO01                              1
#define CONST_CONTEXT_VSBOTS_NONE                                0
#define CONST_CONTEXT_DEDICATEDSERVER_YES                        1
#define CONST_CONTEXT_DEDICATEDSERVER_NO                         0
#define CONST_CONTEXT_EMPTYSERVER_YES                            1
#define CONST_CONTEXT_EMPTYSERVER_NO                             0
#define CONST_CONTEXT_FULLSERVER_YES                             1
#define CONST_CONTEXT_FULLSERVER_NO                              0
#define CONST_CONTEXT_ALLOWKEYBOARD_ANY                          2
#define CONST_CONTEXT_ALLOWKEYBOARD_YES                          1
#define CONST_CONTEXT_ALLOWKEYBOARD_NO                           0
#define CONST_CONTEXT_FORCERESPAWN_YES                           1
#define CONST_CONTEXT_FORCERESPAWN_NO                            0
#define CONST_CONTEXT_CAMPAIGN_YES                               1
#define CONST_CONTEXT_CAMPAIGN_NO                                0
#define CONST_CONTEXT_LOCKEDSERVER_YES                           1
#define CONST_CONTEXT_LOCKEDSERVER_NO                            0
#define CONST_CONTEXT_PURESERVER_ANY                             2
#define CONST_CONTEXT_PURESERVER_YES                             1
#define CONST_CONTEXT_PURESERVER_NO                              0
#define CONST_CONTEXT_TIMELIMIT                                  4
#define CONST_CONTEXT_TIMELIMIT01                                3
#define CONST_CONTEXT_TIMELIMIT02                                2
#define CONST_CONTEXT_TIMELIMIT03                                1
#define CONST_CONTEXT_TIMELIMIT04                                0
#define CONST_CONTEXT_NUMBOTS                                    8
#define CONST_CONTEXT_NUMBOTS01                                  7
#define CONST_CONTEXT_NUMBOTS02                                  6
#define CONST_CONTEXT_NUMBOTS03                                  5
#define CONST_CONTEXT_NUMBOTS04                                  4
#define CONST_CONTEXT_NUMBOTS05                                  3
#define CONST_CONTEXT_NUMBOTS06                                  2
#define CONST_CONTEXT_NUMBOTS07                                  1
#define CONST_CONTEXT_NUMBOTS08                                  0
#define CONST_CONTEXT_GOALSCORE                                  4
#define CONST_CONTEXT_GOALSCORE01                                3
#define CONST_CONTEXT_GOALSCORE02                                2
#define CONST_CONTEXT_GOALSCORE03                                1
#define CONST_CONTEXT_GOALSCORE04                                0
#define CONST_CONTEXT_BOTSKILL_GODLIKE                           7
#define CONST_CONTEXT_BOTSKILL_INHUMAN                           6
#define CONST_CONTEXT_BOTSKILL_MASTERFUL                         5
#define CONST_CONTEXT_BOTSKILL_ADEPT                             4
#define CONST_CONTEXT_BOTSKILL_SKILLED                           3
#define CONST_CONTEXT_BOTSKILL_EXPERIENCED                       2
#define CONST_CONTEXT_BOTSKILL_AVERAGE                           1
#define CONST_CONTEXT_BOTSKILL_NOVICE                            0
#define CONST_CONTEXT_MAPNAME_CUSTOM                             0
#define CONST_CONTEXT_DEDICATEDSERVER                            14
#define CONST_CONTEXT_EMPTYSERVER                                13
#define CONST_CONTEXT_FULLSERVER                                 12
#define CONST_CONTEXT_ALLOWKEYBOARD                              11
#define CONST_CONTEXT_FORCERESPAWN                               10
#define CONST_CONTEXT_CAMPAIGN                                   9
#define CONST_CONTEXT_VSBOTS                                     8
#define CONST_CONTEXT_LOCKEDSERVER                               7
#define CONST_CONTEXT_PURESERVER                                 6
#define CONST_CONTEXT_MAPNAME                                    1
#define CONST_CONTEXT_BOTSKILL                                   0
#define CONST_CONTEXT_GAME_MODE_CAMPAIGN                         7
#define CONST_CONTEXT_GAME_MODE_CUSTOM                           6
#define CONST_CONTEXT_GAME_MODE_DUEL                             5
#define CONST_CONTEXT_GAME_MODE_TDM                              4
#define CONST_CONTEXT_GAME_MODE_VCTF                             3
#define CONST_CONTEXT_GAME_MODE_WAR                              2
#define CONST_CONTEXT_GAME_MODE_CTF                              1
#define CONST_CONTEXT_GAME_MODE_DM                               0
#define CONST_CONTEXT_GAME_MODE                                  0x0000800B
#define CONST_CONTEXT_PRESENCE_MENUPRESENCE                      0
#define CONST_GS_CDKEY_PART_MAXLENGTH                            4
#define CONST_GS_EMAIL_MAXLENGTH                                 50
#define CONST_GS_MESSAGE_MAXLENGTH                               255
#define CONST_GS_PASSWORD_MAXLENGTH                              30
#define CONST_GS_USERNAME_MAXLENGTH                              15
#define CONST_FakePlayerIndex                                    0
#define CONST_MarkupForNoMapImage                                "UDKFrontEnd.gm_map_none"
#define CONST_SERVERTYPE_LAN                                     0
#define CONST_SERVERTYPE_UNRANKED                                1
#define CONST_SERVERTYPE_RANKED                                  2
#define CONST_MAXIMUM_PLAYER_COUNT                               24
#define CONST_SERVERBROWSER_SERVERTYPE_RANKED                    2
#define CONST_SERVERBROWSER_SERVERTYPE_UNRANKED                  1
#define CONST_SERVERBROWSER_SERVERTYPE_LAN                       0
#define CONST_UTVEHICLE_UNSET_TEAM                               128
#define CONST_MINTIMEBETWEENPAINSOUNDS                           0.35
#define CONST_MAXSTAKEOUTDIST                                    2000
#define CONST_ENEMYLOCATIONFUZZ                                  1200
#define CONST_TACTICALHEIGHTADVANTAGE                            320
#define CONST_MINSTRAFEDIST                                      200
#define CONST_MINVIEWDIST                                        200
#define CONST_AngleConvert                                       0.0000958738
#define CONST_NEAROBJECTIVEDIST                                  2000.0
#define CONST_MAX_PERSONALSERVERS                                15
#define CONST_ACKINDEXSTART                                      600
#define CONST_FRIENDLYFIREINDEXSTART                             700
#define CONST_GOTYOURBACKINDEXSTART                              800
#define CONST_NEEDOURFLAGINDEXSTART                              900
#define CONST_SNIPERINDEXINDEXSTART                              1000
#define CONST_LOCATIONUPDATEINDEXSTART                           1100
#define CONST_INPOSITIONINDEXSTART                               1200
#define CONST_ENEMYSTATUSINDEXSTART                              1300
#define CONST_KILLEDVEHICLEINDEXSTART                            1400
#define CONST_ENEMYFLAGCARRIERINDEXSTART                         1500
#define CONST_HOLDINGFLAGINDEXSTART                              1600
#define CONST_AREASECUREINDEXSTART                               1700
#define CONST_GOTOURFLAGINDEXSTART                               1900
#define CONST_NODECONSTRUCTEDINDEXSTART                          2000
#define CONST_MAX_WAYPOINTS                                      15

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum UTGame.UTPlayerController.EWeaponHand
/*enum EWeaponHand
{
	HAND_Right                                         = 0,
	HAND_Left                                          = 1,
	HAND_Centered                                      = 2,
	HAND_Hidden                                        = 3,
	HAND_MAX                                           = 4
};*/

// Enum UTGame.UTPlayerController.EPawnShadowMode
/*enum EPawnShadowMode
{
	SHADOW_None                                        = 0,
	SHADOW_Self                                        = 1,
	SHADOW_All                                         = 2,
	SHADOW_MAX                                         = 3
};*/

// Enum UTGame.UTPlayerController.EAutoObjectivePreference
/*enum EAutoObjectivePreference
{
	AOP_Disabled                                       = 0,
	AOP_NoPreference                                   = 1,
	AOP_Attack                                         = 2,
	AOP_Defend                                         = 3,
	AOP_OrbRunner                                      = 4,
	AOP_SpecialOps                                     = 5,
	AOP_MAX                                            = 6
};*/

// Enum UTGame.UTPlayerController.EUTVehicleControls
/*enum EUTVehicleControls
{
	UTVC_Simple                                        = 0,
	UTVC_Normal                                        = 1,
	UTVC_Advanced                                      = 2,
	UTVC_MAX                                           = 3
};*/

// Enum UTGame.UTGFxTweenableMoviePlayer.TweenType
/*enum TweenType
{
	TWEEN_EaseOut                                      = 0,
	TWEEN_EaseIn                                       = 1,
	TWEEN_Linear                                       = 2,
	TWEEN_MAX                                          = 3
};*/

// Enum UTGame.GFxUDKFrontEnd_JoinGame.EQueryCompletionAction
/*enum EQueryCompletionAction
{
	QUERYACTION_None                                   = 0,
	QUERYACTION_Default                                = 1,
	QUERYACTION_CloseScene                             = 2,
	QUERYACTION_JoinServer                             = 3,
	QUERYACTION_RefreshAll                             = 4,
	QUERYACTION_MAX                                    = 5
};*/

// Enum UTGame.GFxUIFrontEnd_TitleScreen.MenuButtonsType
/*enum MenuButtonsType
{
	MENU_BTN_CAMPAIGN                                  = 0,
	MENU_BTN_INSTANTACTION                             = 1,
	MENU_BTN_MULTIPLAYER                               = 2,
	MENU_BTN_COMMUNITY                                 = 3,
	MENU_BTN_SETTINGS                                  = 4,
	MENU_BTN_EXIT                                      = 5,
	MENU_BTN_LOGOUT                                    = 6,
	MENU_BTN_SELECT                                    = 7,
	MENU_BTN_MAX                                       = 8
};*/

// Enum UTGame.PhysAnimTestActor.EPATAState
/*enum EPATAState
{
	PATA_FixedAll                                      = 0,
	PATA_FixedLower                                    = 1,
	PATA_MotorRagdoll                                  = 2,
	PATA_Floppy                                        = 3,
	PATA_Recover                                       = 4,
	PATA_MAX                                           = 5
};*/

// Enum UTGame.UTAchievementsBase.EAchievementUnlockType
/*enum EAchievementUnlockType
{
	EAUT_Count                                         = 0,
	EAUT_Bitmask                                       = 1,
	EAUT_ByteCount                                     = 2,
	EAUT_MAX                                           = 3
};*/

// Enum UTGame.UTAchievements.EUTGameAchievements
/*enum EUTGameAchievements
{
	EUTA_EXPLORE_EveryMutator                          = 0,
	EUTA_WEAPON_DontTaseMeBro                          = 1,
	EUTA_WEAPON_StrongestLink                          = 2,
	EUTA_WEAPON_HaveANiceDay                           = 3,
	EUTA_VEHICLE_Armadillo                             = 4,
	EUTA_POWERUP_DeliveringTheHurt                     = 5,
	EUTA_HUMILIATION_SerialKiller                      = 6,
	EUTA_HUMILIATION_OffToAGoodStart                   = 7,
	EUTA_MAX                                           = 8
};*/

// Enum UTGame.UTVehicle.EAIVehiclePurpose
/*enum EAIVehiclePurpose
{
	AIP_Offensive                                      = 0,
	AIP_Defensive                                      = 1,
	AIP_Any                                            = 2,
	AIP_MAX                                            = 3
};*/

// Enum UTGame.UTPawn.EWeapAnimType
/*enum EWeapAnimType
{
	EWAT_Default                                       = 0,
	EWAT_Pistol                                        = 1,
	EWAT_DualPistols                                   = 2,
	EWAT_ShoulderRocket                                = 3,
	EWAT_Stinger                                       = 4,
	EWAT_Rifle                                         = 5,
	EWAT_Melee                                         = 6,
	EWAT_MAX                                           = 7
};*/

// Enum UTGame.UTWeapon.EZoomState
/*enum EZoomState
{
	ZST_NotZoomed                                      = 0,
	ZST_ZoomingOut                                     = 1,
	ZST_ZoomingIn                                      = 2,
	ZST_Zoomed                                         = 3,
	ZST_MAX                                            = 4
};*/

// Enum UTGame.UTWeapon.AmmoWidgetDisplayStyle
/*enum AmmoWidgetDisplayStyle
{
	EAWDS_Numeric                                      = 0,
	EAWDS_BarGraph                                     = 1,
	EAWDS_Both                                         = 2,
	EAWDS_None                                         = 3,
	EAWDS_MAX                                          = 4
};*/

// Enum UTGame.UTGame.EVoiceChannel
/*enum EVoiceChannel
{
	VC_Spectators                                      = 0,
	VC_Team1                                           = 1,
	VC_Team2                                           = 2,
	VC_MAX                                             = 3
};*/

// Enum UTGame.UTGameReplicationInfo.EFlagState
/*enum EFlagState
{
	FLAG_Home                                          = 0,
	FLAG_HeldFriendly                                  = 1,
	FLAG_HeldEnemy                                     = 2,
	FLAG_Down                                          = 3,
	FLAG_MAX                                           = 4
};*/

// Enum UTGame.UTDefensePoint.EDefensePriority
/*enum EDefensePriority
{
	DEFPRI_Low                                         = 0,
	DEFPRI_High                                        = 1,
	DEFPRI_MAX                                         = 2
};*/

// Enum UTGame.UTMusicManager.EMusicState
/*enum EMusicState
{
	MST_Ambient                                        = 0,
	MST_Tension                                        = 1,
	MST_Suspense                                       = 2,
	MST_Action                                         = 3,
	MST_Victory                                        = 4,
	MST_MAX                                            = 5
};*/

// Enum UTGame.UTWeap_RocketLauncher.ERocketFireMode1
/*enum ERocketFireMode1
{
	RFM_Spread                                         = 0,
	RFM_Spiral                                         = 1,
	RFM_Grenades                                       = 2,
	RFM_Max                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UTGame.UTPlayerController
// 0x0138 (0x0BB8 - 0x0A80)
class AUTPlayerController : public AUDKPlayerController
{
public:
	unsigned long                                      bLateComer : 1;                                   		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsTyping : 1;                                    		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAutoTaunt : 1;                                   		// 0x0A80 (0x0004) [0x0000000000044000] [0x00000004] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bUseVehicleRotationOnPossess : 1;                 		// 0x0A80 (0x0004) [0x0000000000044000] [0x00000008] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bRotateMinimap : 1;                               		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCameraOutOfWorld : 1;                            		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bFirstPersonWeaponsSelfShadow : 1;                		// 0x0A80 (0x0004) [0x0000000000044000] [0x00000040] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bBehindView : 1;                                  		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bForceBehindView : 1;                             		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bFreeCamera : 1;                                  		// 0x0A80 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bNoTextToSpeechVoiceMessages : 1;                 		// 0x0A80 (0x0004) [0x0000000000044000] [0x00000400] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bTextToSpeechTeamMessagesOnly : 1;                		// 0x0A80 (0x0004) [0x0000000000044000] [0x00000800] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bCurrentCamAnimIsDamageShake : 1;                 		// 0x0A80 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bCurrentCamAnimAffectsFOV : 1;                    		// 0x0A80 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bLandingShake : 1;                                		// 0x0A80 (0x0004) [0x0000000000044000] [0x00004000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bCenteredWeaponFire : 1;                          		// 0x0A80 (0x0004) [0x0000000000004000] [0x00008000] ( CPF_Config )
	unsigned long                                      bNonlinearZoomInterpolation : 1;                  		// 0x0A80 (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	unsigned long                                      bQuittingToMainMenu : 1;                          		// 0x0A80 (0x0004) [0x0000000000002000] [0x00020000] ( CPF_Transient )
	unsigned long                                      bDebugFreeCam : 1;                                		// 0x0A80 (0x0004) [0x0000000000002000] [0x00040000] ( CPF_Transient )
	unsigned long                                      bJustFoundVehicle : 1;                            		// 0x0A80 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bNoCrosshair : 1;                                 		// 0x0A80 (0x0004) [0x0000000000004000] [0x00100000] ( CPF_Config )
	unsigned long                                      bSimpleCrosshair : 1;                             		// 0x0A80 (0x0004) [0x0000000000004000] [0x00200000] ( CPF_Config )
	unsigned long                                      bAlreadyReset : 1;                                		// 0x0A80 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bServerMutedText : 1;                             		// 0x0A80 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bHideObjectivePaths : 1;                          		// 0x0A80 (0x0004) [0x0000000000044000] [0x01000000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bCleanupInProgress : 1;                           		// 0x0A80 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bCleanupComplete : 1;                             		// 0x0A80 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned char                                      IdentifiedTeam;                                   		// 0x0A84 (0x0001) [0x0000000000000000]              
	unsigned char                                      PawnShadowMode;                                   		// 0x0A85 (0x0001) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	unsigned char                                      WeaponHandPreference;                             		// 0x0A86 (0x0001) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	unsigned char                                      WeaponHand;                                       		// 0x0A87 (0x0001) [0x0000000000000000]              
	unsigned char                                      AutoObjectivePreference;                          		// 0x0A88 (0x0001) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	unsigned char                                      VehicleControlType;                               		// 0x0A89 (0x0001) [0x0000000000000000]              
	struct FVector                                     DesiredLocation;                                  		// 0x0A8C (0x000C) [0x0000000000000000]              
	class AUTAnnouncer*                                Announcer;                                        		// 0x0A98 (0x0008) [0x0000000000000000]              
	class AUTMusicManager*                             MusicManager;                                     		// 0x0AA0 (0x0008) [0x0000000000000000]              
	float                                              LastTauntAnimTime;                                		// 0x0AA8 (0x0004) [0x0000000000000000]              
	float                                              LastKickWarningTime;                              		// 0x0AAC (0x0004) [0x0000000000000000]              
	struct FString                                     MsgPlayerNotFound;                                		// 0x0AB0 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UForceFeedbackWaveform*                      CameraShakeShortWaveForm;                         		// 0x0AC0 (0x0008) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeLongWaveForm;                          		// 0x0AC8 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 DamageCameraAnim;                                 		// 0x0AD0 (0x0008) [0x0000000000000000]              
	float                                              LastCameraTimeStamp;                              		// 0x0AD8 (0x0004) [0x0000000000000000]              
	class UClass*                                      MatineeCameraClass;                               		// 0x0ADC (0x0008) [0x0000000000000000]              
	class AActor*                                      CalcViewActor;                                    		// 0x0AE4 (0x0008) [0x0000000000000000]              
	struct FVector                                     CalcViewActorLocation;                            		// 0x0AEC (0x000C) [0x0000000000000000]              
	struct FRotator                                    CalcViewActorRotation;                            		// 0x0AF8 (0x000C) [0x0000000000000000]              
	struct FVector                                     CalcViewLocation;                                 		// 0x0B04 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CalcViewRotation;                                 		// 0x0B10 (0x000C) [0x0000000000000000]              
	float                                              CalcEyeHeight;                                    		// 0x0B1C (0x0004) [0x0000000000000000]              
	struct FVector                                     CalcWalkBob;                                      		// 0x0B20 (0x000C) [0x0000000000000000]              
	float                                              LastWarningTime;                                  		// 0x0B2C (0x0004) [0x0000000000000000]              
	float                                              FOVLinearZoomRate;                                		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              FOVNonlinearZoomInterpSpeed;                      		// 0x0B34 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ZoomRotationModifier;                             		// 0x0B38 (0x0004) [0x0000000000000000]              
	struct FRotator                                    DebugFreeCamRot;                                  		// 0x0B3C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastShowPathTime;                                 		// 0x0B48 (0x0004) [0x0000000000000000]              
	class AActor*                                      LastAutoObjective;                                		// 0x0B4C (0x0008) [0x0000000000000000]              
	float                                              LastBullseyeTime;                                 		// 0x0B54 (0x0004) [0x0000000000000000]              
	float                                              LastUseTime;                                      		// 0x0B58 (0x0004) [0x0000000000000000]              
	float                                              OldMessageTime;                                   		// 0x0B5C (0x0004) [0x0000000000000000]              
	float                                              LastFriendlyFireTime;                             		// 0x0B60 (0x0004) [0x0000000000000000]              
	class UUTUIDataStore_StringAliasBindingsMap*       BoundEventsStringDataStore;                       		// 0x0B64 (0x0008) [0x0000000000000000]              
	float                                              NextAdminCmdTime;                                 		// 0x0B6C (0x0004) [0x0000000000000000]              
	float                                              OnFootDefaultFOV;                                 		// 0x0B70 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              LastIncomingMessageTime;                          		// 0x0B74 (0x0004) [0x0000000000000000]              
	float                                              LastCombatUpdateTime;                             		// 0x0B78 (0x0004) [0x0000000000000000]              
	float                                              LastTeamChangeTime;                               		// 0x0B7C (0x0004) [0x0000000000000000]              
	class UClass*                                      AchievementHandlerClass;                          		// 0x0B80 (0x0008) [0x0000000000000000]              
	class UUTAchievementsBase*                         AchievementHandler;                               		// 0x0B88 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUTLeaderboardRead*                          LeaderboardStatsRead;                             		// 0x0B90 (0x0008) [0x0000000000000000]              
	class UClass*                                      LeaderboardStatsWriteClass;                       		// 0x0B98 (0x0008) [0x0000000000000000]              
	struct FString                                     DisconnectCommand;                                		// 0x0BA0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxUDKFrontEnd_JoinGame*                    JoinGameMenu;                                     		// 0x0BB0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1980 ];

		return pClassPointer;
	};

	bool eventNotifyDisconnect ( struct FString Command );
	void ReadLeaderboardStatsComplete ( unsigned long bWasSuccessful );
	void ClientWriteLeaderboardStats ( class UClass* OnlineStatsWriteClass, unsigned long bIsIncomplete );
	void ClientUpdateSpiceOfLife ( int MutatorBitMask );
	void ClientUpdateAchievement ( int AchievementId, int Count );
	void InitAchievementHandler ( );
	void Disconnect ( );
	void ServerForceTextUnMute ( struct FString TargetPlayer );
	void AdminForceTextUnMute ( struct FString TargetPlayer );
	void ServerForceTextMute ( struct FString TargetPlayer );
	void AdminForceTextMute ( struct FString TargetPlayer );
	void ServerForceVoiceUnMute ( struct FString TargetPlayer );
	void AdminForceVoiceUnMute ( struct FString TargetPlayer );
	void ServerForceVoiceMute ( struct FString TargetPlayer );
	void AdminForceVoiceMute ( struct FString TargetPlayer );
	void ServerChangeMap ( struct FString URL );
	void AdminChangeMap ( struct FString URL );
	void ServerRestartMap ( );
	void AdminRestartMap ( );
	void AdminPlayerList ( );
	void AdminKick ( struct FString S );
	void AdminKickBan ( struct FString S );
	void ServerAdmin ( struct FString CommandLine );
	void Admin ( struct FString CommandLine );
	void ServerAdminLogOut ( );
	void AdminLogout ( );
	void ServerAdminLogin ( struct FString Password );
	void AdminLogin ( struct FString Password );
	bool AdminCmdOk ( );
	void ServerTeamSay ( struct FString msg );
	void ServerSay ( struct FString msg );
	void ServerKickBan ( struct FString PlayerToKick, unsigned long bBan );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void ServerChangeTeam ( int N );
	void BullseyeMessage ( );
	void ServerSetNetSpeed ( int NewSpeed );
	void ReceiveBotVoiceMessage ( class AUTPlayerReplicationInfo* SenderPRI, int MessageIndex, class UObject* LocationObject );
	void SendMessage ( class APlayerReplicationInfo* Recipient, struct FName MessageType, float Wait, class UClass* DamageType );
	bool CanRestartPlayer ( );
	void CharacterProcessingComplete ( );
	void GetPlayerLoc ( );
	void UpdateRotation ( float DeltaTime );
	void ClientEndZoom ( );
	void EndZoomNonlinear ( float ZoomInterpSpeed );
	void EndZoom ( );
	void StopZoom ( );
	void StartZoomNonlinear ( float NewDesiredFOV, float NewZoomInterpSpeed );
	void StartZoom ( float NewDesiredFOV, float NewZoomRate );
	void AdjustFOV ( float DeltaTime );
	void OnUpdatePropertyFOVAngle ( );
	void FlushDebug ( );
	void ClientBecameActivePlayer ( );
	void ServerBecomeActivePlayer ( );
	void BecomeActive ( );
	void ServerShowPathToBase ( unsigned char TeamNum );
	void BasePath ( unsigned char Num );
	void ClientPawnDied ( );
	void PawnDied ( class APawn* P );
	void CheckBulletWhip ( class UAkEvent* BulletWhip, struct FVector FireLocation, struct FVector FireDir, struct FVector HitLocation );
	void ClientRoundEnded ( class AActor* EndRoundFocus );
	void RoundHasEnded ( class AActor* EndRoundFocus );
	void ClientGameEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void ShowMidGameMenu ( struct FName TabTag, unsigned long bEnableInput );
	void ShowMap ( );
	void AdjustCameraScale ( unsigned long bIn );
	void NextWeapon ( );
	void PrevWeapon ( );
	void ServerViewObjective ( );
	void ViewObjective ( );
	void ServerViewPlayerByName ( struct FString PlayerName );
	void ViewPlayerByName ( struct FString PlayerName );
	void ServerViewSelf ( struct FViewTargetTransitionParams TransitionParams );
	void SwitchWeapon ( unsigned char T );
	void ViewNextBot ( );
	void LongClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase, float NewFloorX, float NewFloorY, float NewFloorZ );
	void ShortServerMove ( float TimeStamp, struct FVector ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, int View );
	void CallServerMove ( class USavedMove* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, class USavedMove* OldMove );
	void ToggleTranslocator ( );
	void ToggleMelee ( );
	void ViewShake ( float DeltaTime );
	void OnStopCameraAnim ( class UUTSeqAct_StopCameraAnim* inAction );
	void OnPlayCameraAnim ( class UUTSeqAct_PlayCameraAnim* inAction );
	void eventClientStopCameraAnim ( class UCameraAnim* AnimToStop, unsigned long bImmediate );
	void eventClientPlayCameraAnim ( class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLoop, unsigned long bRandomStartTime, unsigned char Space, struct FRotator CustomPlaySpace );
	void SetCameraAnimStrength ( float NewStrength );
	void StopCameraAnim ( unsigned long bImmediate );
	void PlayCameraAnim ( class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLoop, unsigned long bIsDamageShake );
	void StopViewShaking ( );
	void DamageShake ( int Damage, class UClass* DamageType );
	void PlayAnnouncement ( class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	void ClientPlayAnnouncement ( class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	void Music ( int EventIndex );
	bool AlreadyInActionMusic ( );
	void ClientMusicEvent ( int EventIndex );
	void eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation );
	bool UsePlayerCameraForViewPoint ( );
	void SpawnCamera ( );
	void SetCameraMode ( struct FName NewCamMode );
	void ClientSetBehindView ( unsigned long bNewBehindView );
	void SetBehindView ( unsigned long bNewBehindView );
	void BehindView ( );
	void ClientReset ( );
	void Reset ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void ShowScoreboard ( );
	void ServerSpectate ( );
	void ClearDoubleClick ( );
	bool PerformedUseAction ( );
	void Use ( );
	void ServerUse ( );
	void ClientPlayTakeHit ( struct FVector HitLoc, unsigned char Damage, class UClass* DamageType );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void PlayStartupMessage ( unsigned char StartupStage );
	void ToggleScreenShotMode ( );
	void SetAutoTaunt ( unsigned long Value );
	void ServerSetAutoTaunt ( unsigned long Value );
	bool UsingFirstPersonCamera ( );
	void eventResetCameraMode ( );
	void SetHand ( unsigned char NewWeaponHand );
	void ServerSetHand ( unsigned char NewWeaponHand );
	void ServerPlayerPreferences ( unsigned char NewWeaponHand, unsigned long bNewAutoTaunt, unsigned long bNewCenteredWeaponFire, unsigned char NewAutoObjectivePreference, unsigned char NewVehicleControls );
	void eventReceivedPlayer ( );
	void AcknowledgePossession ( class APawn* P );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	void ClientSetAutoObjective ( class AActor* NewAutoObjective );
	void SetAutoObjective ( class AActor* ObjectiveActor, unsigned long bOnlyNotifyDifferent );
	void CheckAutoObjective ( unsigned long bOnlyNotifyDifferent );
	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams );
	void ClientRestart ( class APawn* NewPawn );
	void Restart ( unsigned long bVehicleTransition );
	void FixFOV ( );
	void FOV ( float F );
	void CheckJumpOrDuck ( );
	void eventKickWarning ( );
	void DrawHUD ( class AHUD* H );
	void eventSoakPause ( class APawn* P );
	void OnControllerChanged ( int ControllerId, unsigned long bIsConnected );
	void eventDestroyed ( );
	void Typing ( unsigned long bTyping );
	void Taunt ( int TauntIndex );
	void ServerPlayVehicleHorn ( );
	void PlayVehicleHorn ( );
	bool TriggerInteracted ( );
	void PlayWinMessage ( unsigned long bWinner );
	void ProjectileWarningTimer ( );
	void ReceiveProjectileWarning ( class AProjectile* Proj );
	void eventReceiveWarning ( class APawn* shooter, float projSpeed, struct FVector FireDir );
	void PlayBeepSound ( );
	bool LandingShake ( );
	void ServerDropFlag ( );
	void DropFlag ( );
	void ToggleMinimap ( );
	class AUTVehicle* CheckVehicleToDrive ( unsigned long bEnterVehicle );
	void ClientSetRequestedEntryWithFlag ( class AUTVehicle* V, unsigned long bNewValue, int MessageIndex );
	class AUTVehicle* CheckPickedVehicle ( class AUTVehicle* V, unsigned long bEnterVehicle );
	bool FindVehicleToDrive ( );
	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc );
	float AimHelpModifier ( );
	bool AimingHelp ( unsigned long bInstantHit );
	void eventClientHearSound ( class USoundCue* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded );
	void ToggleSpeaking ( unsigned long bNowOn );
	void ServerProcessSpeechRecognition ( struct FSpeechRecognizedWord* ReplicatedWords );
	void SpeechRecognitionComplete ( );
	void ClientSetSpeechRecognitionObject ( class USpeechRecognition* NewRecognitionData );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CleanupOnlineSubsystemSession ( unsigned long bWasFromMenu );
	void FinishQuitToMainMenu ( );
	void QuitToMainMenu ( );
	void SetFrontEndErrorMessage ( struct FString Title, struct FString Message );
	void ClientWasKicked ( );
	void NotifyNotEnoughSpaceInInvite ( );
	void NotifyNotAllPlayersCanJoinInvite ( );
	void NotifyInviteFailed ( );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	void OnGameInviteReceived ( unsigned char LocalUserNum, struct FString RequestingNick );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void OnLinkStatusChanged ( unsigned long bConnected );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void ClientSetOnlineStatus ( );
	void eventClearOnlineDelegates ( );
	void AddOnlineDelegates ( unsigned long bRegisterVoice );
	void UnregisterPlayerDataStores ( );
	void RegisterCustomPlayerDataStores ( );
	void ClearStringAliasBindingMapCache ( );
	void ServerSetCharacterClass ( class UClass* CharClass );
	void PulseTeamColor ( );
	void eventInitInputSystem ( );
	void SwitchHud ( );
	void ServerThrowWeapon ( );
	void Camera ( struct FName NewMode );
};

UClass* AUTPlayerController::pClassPointer = NULL;

// Class UTGame.UTPawn
// 0x02DC (0x0AC4 - 0x07E8)
class AUTPawn : public AUDKPawn
{
public:
	unsigned long                                      bFixedView : 1;                                   		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpawnDone : 1;                                   		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpawnIn : 1;                                     		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShieldAbsorb : 1;                                		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDodging : 1;                                     		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bStopOnDoubleLanding : 1;                         		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsInvulnerable : 1;                              		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bJustDroppedOrb : 1;                              		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bForcedFeignDeath : 1;                            		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bWeaponBob : 1;                                   		// 0x07E8 (0x0004) [0x0000000000044000] [0x00000200] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bJustLanded : 1;                                  		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bLandRecovery : 1;                                		// 0x07E8 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bHasHoverboard : 1;                               		// 0x07E8 (0x0004) [0x0000000000000020] [0x00001000] ( CPF_Net )
	unsigned long                                      bStopDeathCamera : 1;                             		// 0x07E8 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bWinnerCam : 1;                                   		// 0x07E8 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bGibbed : 1;                                      		// 0x07E8 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bHeadGibbed : 1;                                  		// 0x07E8 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bArmsAttached : 1;                                		// 0x07E8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bWeaponAttachmentVisible : 1;                     		// 0x07E8 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bHideOnListenServer : 1;                          		// 0x07E8 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bPostRenderTraceSucceeded : 1;                    		// 0x07E8 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bReceivedValidTeam : 1;                           		// 0x07E8 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bKillsAffectHead : 1;                             		// 0x07E8 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bKilledByBio : 1;                                 		// 0x07E8 (0x0004) [0x0000000000000000] [0x00800000] 
	class UClass*                                      CurrentWeaponAttachmentClass;                     		// 0x07EC (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                UnfeignFailedCount;                               		// 0x07F4 (0x0004) [0x0000000000000000]              
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x07F8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeBlend*                              FeignDeathBlend;                                  		// 0x0800 (0x0008) [0x0000000000000000]              
	class UAnimNodeSlot*                               FullBodyAnimSlot;                                 		// 0x0808 (0x0008) [0x0000000000000000]              
	class UAnimNodeSlot*                               TopHalfAnimSlot;                                  		// 0x0810 (0x0008) [0x0000000000000000]              
	float                                              DeathHipLinSpring;                                		// 0x0818 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathHipLinDamp;                                  		// 0x081C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathHipAngSpring;                                		// 0x0820 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathHipAngDamp;                                  		// 0x0824 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartDeathAnimTime;                               		// 0x0828 (0x0004) [0x0000000000000000]              
	class UClass*                                      DeathAnimDamageType;                              		// 0x082C (0x0008) [0x0000000000000000]              
	float                                              TimeLastTookDeathAnimDamage;                      		// 0x0834 (0x0004) [0x0000000000000000]              
	struct FVector                                     FixedViewLoc;                                     		// 0x0838 (0x000C) [0x0000000000000000]              
	struct FRotator                                    FixedViewRot;                                     		// 0x0844 (0x000C) [0x0000000000000000]              
	float                                              CameraScale;                                      		// 0x0850 (0x0004) [0x0000000000000000]              
	float                                              CurrentCameraScale;                               		// 0x0854 (0x0004) [0x0000000000000000]              
	float                                              CameraScaleMin;                                   		// 0x0858 (0x0004) [0x0000000000000000]              
	float                                              CameraScaleMax;                                   		// 0x085C (0x0004) [0x0000000000000000]              
	struct FVector                                     OldCameraPosition;                                		// 0x0860 (0x000C) [0x0000000000000000]              
	float                                              CameraZOffset;                                    		// 0x086C (0x0004) [0x0000000000000000]              
	float                                              HeroCameraScale;                                  		// 0x0870 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HeroCameraPitch;                                  		// 0x0874 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DodgeSpeed;                                       		// 0x0878 (0x0004) [0x0000000000000000]              
	float                                              DodgeSpeedZ;                                      		// 0x087C (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentDir;                                       		// 0x0880 (0x0001) [0x0000000000000000]              
	float                                              DoubleJumpEyeHeight;                              		// 0x0884 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DoubleJumpThreshold;                              		// 0x0888 (0x0004) [0x0000000000000000]              
	float                                              DefaultAirControl;                                		// 0x088C (0x0004) [0x0000000000000000]              
	float                                              Bob;                                              		// 0x0890 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              LandBob;                                          		// 0x0894 (0x0004) [0x0000000000000000]              
	float                                              JumpBob;                                          		// 0x0898 (0x0004) [0x0000000000000000]              
	float                                              AppliedBob;                                       		// 0x089C (0x0004) [0x0000000000000000]              
	float                                              BobTime;                                          		// 0x08A0 (0x0004) [0x0000000000000000]              
	struct FVector                                     WalkBob;                                          		// 0x08A4 (0x000C) [0x0000000000000000]              
	float                                              FeignDeathBodyAtRestSpeed;                        		// 0x08B0 (0x0004) [0x0000000000000000]              
	float                                              FeignDeathStartTime;                              		// 0x08B4 (0x0004) [0x0000000000000000]              
	float                                              FeignDeathRecoveryStartTime;                      		// 0x08B8 (0x0004) [0x0000000000000000]              
	int                                                SuperHealthMax;                                   		// 0x08BC (0x0004) [0x0000000000000000]              
	class UClass*                                      SoundGroupClass;                                  		// 0x08C0 (0x0008) [0x0000000000000000]              
	class UClass*                                      CurrCharClassInfo;                                		// 0x08C8 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             TakeHitPhysicsFixedBones;                         		// 0x08D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             NoDriveBodies;                                    		// 0x08E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UForceFeedbackWaveform*                      FallingDamageWaveForm;                            		// 0x08F0 (0x0008) [0x0000000000000000]              
	float                                              AccumulateDamage;                                 		// 0x08F8 (0x0004) [0x0000000000000000]              
	float                                              AccumulationTime;                                 		// 0x08FC (0x0004) [0x0000000000000000]              
	float                                              LastHoverboardTime;                               		// 0x0900 (0x0004) [0x0000000000000000]              
	float                                              MinHoverboardInterval;                            		// 0x0904 (0x0004) [0x0000000000000000]              
	class UUTAnimBlendByDriving*                       DrivingNode;                                      		// 0x0908 (0x0008) [0x0000000000000000]              
	class UUTAnimBlendByVehicle*                       VehicleNode;                                      		// 0x0910 (0x0008) [0x0000000000000000]              
	class UUTAnimBlendByHoverboarding*                 HoverboardingNode;                                		// 0x0918 (0x0008) [0x0000000000000000]              
	float                                              ShieldBeltArmor;                                  		// 0x0920 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              VestArmor;                                        		// 0x0924 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ThighpadArmor;                                    		// 0x0928 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUTWeaponAttachment*                         CurrentWeaponAttachment;                          		// 0x092C (0x0008) [0x0000000000000000]              
	struct FName                                       WeaponSocket;                                     		// 0x0934 (0x0008) [0x0000000000000000]              
	struct FName                                       WeaponSocket2;                                    		// 0x093C (0x0008) [0x0000000000000000]              
	struct FName                                       PawnEffectSockets[ 0x2 ];                         		// 0x0944 (0x0010) [0x0000000000000000]              
	float                                              HeadOffset;                                       		// 0x0954 (0x0004) [0x0000000000000000]              
	float                                              HeadRadius;                                       		// 0x0958 (0x0004) [0x0000000000000000]              
	float                                              HeadHeight;                                       		// 0x095C (0x0004) [0x0000000000000000]              
	struct FName                                       HeadBone;                                         		// 0x0960 (0x0008) [0x0000000000000000]              
	class UStaticMeshComponent*                        HeadshotNeckAttachment;                           		// 0x0968 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      TransInEffects[ 0x2 ];                            		// 0x0970 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                TranslocateColor[ 0x2 ];                          		// 0x0980 (0x0020) [0x0000000000000000]              
	class UCameraAnim*                                 TransCameraAnim[ 0x3 ];                           		// 0x09A0 (0x0018) [0x0000000000000000]              
	class USoundCue*                                   ArmorHitSound;                                    		// 0x09B8 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SpawnSound;                                       		// 0x09C0 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   TeleportSound;                                    		// 0x09C8 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                SpawnProtectionColor;                             		// 0x09D0 (0x0010) [0x0000000000000000]              
	float                                              TeamBeaconPlayerInfoMaxDist;                      		// 0x09E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    SpeakingBeaconTexture;                            		// 0x09E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MapSize;                                          		// 0x09EC (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         IconCoords;                                       		// 0x09F0 (0x0010) [0x0000000000000000]              
	float                                              LastPainSound;                                    		// 0x0A00 (0x0004) [0x0000000000000000]              
	float                                              RagdollLifespan;                                  		// 0x0A04 (0x0004) [0x0000000000000000]              
	class AUTProjectile*                               AttachedProj;                                     		// 0x0A08 (0x0008) [0x0000000000000000]              
	float                                              MaxFootstepDistSq;                                		// 0x0A10 (0x0004) [0x0000000000000000]              
	float                                              MaxJumpSoundDistSq;                               		// 0x0A14 (0x0004) [0x0000000000000000]              
	class UClass*                                      HoverboardClass;                                  		// 0x0A18 (0x0008) [0x0000000000000000]              
	struct FDrivenWeaponPawnInfo                       LastDrivenWeaponPawn;                             		// 0x0A20 (0x0014) [0x0000000000000000]              
	class AUTClientSideWeaponPawn*                     ClientSideWeaponPawn;                             		// 0x0A34 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          ShieldBeltMaterialInstance;                       		// 0x0A3C (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          ShieldBeltTeamMaterialInstances[ 0x4 ];           		// 0x0A44 (0x0020) [0x0000000000000000]              
	int                                                JumpBootCharge;                                   		// 0x0A64 (0x0004) [0x0000000000000000]              
	float                                              DefaultMeshScale;                                 		// 0x0A68 (0x0004) [0x0000000000000000]              
	struct FName                                       TauntNames[ 0x6 ];                                		// 0x0A6C (0x0030) [0x0000000000000000]              
	float                                              DesiredMeshScale;                                 		// 0x0A9C (0x0004) [0x0000000000000000]              
	struct FVector                                     CamOffset;                                        		// 0x0AA0 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    BioBurnAway;                                      		// 0x0AAC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              BioBurnAwayTime;                                  		// 0x0AB4 (0x0004) [0x0000000000000000]              
	struct FName                                       BioEffectName;                                    		// 0x0AB8 (0x0008) [0x0000000000000000]              
	float                                              DeathTime;                                        		// 0x0AC0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1981 ];

		return pClassPointer;
	};

	void HandDamp ( float LinDamp );
	void HandSpring ( float LinSpring );
	void BackDamp ( float LinDamp );
	void BackSpring ( float LinSpring );
	void PostBigTeleport ( );
	void PostTeleport ( class ATeleporter* OutTeleporter );
	class UClass* GetFamilyInfo ( );
	bool NeedToTurn ( struct FVector targ );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void OnInfiniteAmmo ( class UUTSeqAct_InfiniteAmmo* Action );
	void OnExitVehicle ( class UUTSeqAct_ExitVehicle* Action );
	void eventStuckFalling ( );
	void eventOnRanOver ( class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void TakeFallingDamage ( );
	void SetOverlayVisibility ( unsigned long bVisible );
	void eventTornOff ( );
	struct FRotator eventGetViewRotation ( );
	void AdjustCameraScale ( unsigned long bMoveCameraIn );
	void ModifyRotForDebugFreeCam ( struct FRotator* out_CamRot );
	bool IsLocationOnHead ( float AdditionalScale, struct FImpactInfo* Impact );
	void TakeDrowningDamage ( );
	void SwitchWeapon ( unsigned char NewGroup );
	void OnUseHoverboard ( class UUTSeqAct_UseHoverboard* Action );
	void ServerHoverboard ( );
	void eventTakeHitBlendedOut ( );
	void PlayTakeHitEffects ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	void WeaponAttachmentChanged ( );
	void WeaponChanged ( class AUTWeapon* NewWeapon );
	void WeaponStoppedFiring ( class AWeapon* InWeapon, unsigned long bViaReplication );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool GetPuttingDownWeapon ( );
	void SetPuttingDownWeapon ( unsigned long bNowPuttingDownWeapon );
	void SetHeadScale ( float NewScale );
	void eventReplicatedEvent ( struct FName VarName );
	void FireRateChanged ( );
	void SetBigHead ( );
	void FiringModeUpdated ( class AWeapon* InWeapon, unsigned char InFiringMode, unsigned long bViaReplication );
	void ForceRagdoll ( );
	void FeignDeath ( );
	void ServerFeignDeath ( );
	bool CheckValidLocation ( struct FVector FeignLocation );
	bool SetFeignEndLocation ( struct FVector HitLocation, struct FVector FeignLocation );
	void PlayFeignDeath ( );
	void FeignDeathDelayTimer ( );
	void eventStartFeignDeathRecoveryAnim ( );
	void ApplyWeaponOverlayFlags ( unsigned char NewFlags );
	void ClearWeaponOverlayFlag ( unsigned char FlagToClear );
	void SetWeaponOverlayFlag ( unsigned char FlagToSet );
	class UMaterialInterface* GetOverlayMaterial ( );
	class UMaterialInterface* GetShieldMaterialInstance ( unsigned long bTeamGame );
	void SetOverlayMaterial ( class UMaterialInterface* NewOverlay );
	class USoundCue* GetWeaponAmbientSound ( );
	void SetWeaponAmbientSound ( class USoundCue* NewAmbientSound );
	class USoundCue* GetPawnAmbientSound ( );
	void SetPawnAmbientSound ( class USoundCue* NewAmbientSound );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void PlayDyingSound ( );
	bool CanMultiJump ( );
	bool CanDoubleJump ( );
	void JumpOutOfWater ( struct FVector JumpDir );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	bool DoJump ( unsigned long bUpdating );
	void StopFlying ( );
	void StartFlying ( );
	void Gasp ( );
	void DoDoubleJump ( unsigned long bUpdating );
	bool PerformDodge ( unsigned char DoubleClickMove, struct FVector Dir, struct FVector Cross );
	struct FVector BotDodge ( struct FVector Dir );
	bool Dodge ( unsigned char DoubleClickMove );
	struct FVector GetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon );
	bool CalcThirdPersonCam ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void SetHeroCam ( struct FRotator* out_CamRot );
	bool TryNewCamRot ( class AUTPlayerController* PC, struct FRotator ViewRotation, float* CamDist );
	void FindGoodEndView ( class APlayerController* InPC, struct FRotator* GoodRotation );
	void SetThirdPersonCamera ( unsigned long bNewBehindView );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void AddDefaultInventory ( );
	void eventDestroyed ( );
	void DoingDeathAnim ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void TurnOffPawn ( );
	void SpawnGibs ( class UClass* UTDamageType, struct FVector HitLocation );
	class AUTGib* SpawnGib ( class UClass* GibClass, struct FName BoneName, class UClass* UTDamageType, struct FVector HitLocation, unsigned long bSpinGib );
	void SpawnHeadGib ( class UClass* UTDamageType, struct FVector HitLocation );
	bool ShouldGib ( class UClass* UTDamageType );
	void PlayJumpingSound ( );
	void PlayLandingSound ( );
	struct FName GetMaterialBelowFeet ( );
	void ActuallyPlayFootstepSound ( int FootDown );
	void eventPlayFootStepSound ( int FootDown );
	struct FString GetDebugName ( );
	bool GiveHealth ( int HealAmount, int HealMax );
	void eventHoldGameObject ( class AUDKCarriedObject* GameObj );
	void EnableInventoryPickup ( );
	void DropFlag ( );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum );
	int ShieldAbsorb ( int Damage );
	int AbsorbDamage ( int CurrentShieldStrength, float AbsorptionRate, int* Damage );
	int GetShieldStrength ( );
	void ClientRestart ( );
	void eventStopDriving ( class AVehicle* V );
	void eventStartDriving ( class AVehicle* V );
	void SpawnTransEffect ( int TeamNum );
	void PlayTeleportEffect ( unsigned long bOut, unsigned long bSound );
	void PlaySpawnSound ( );
	void PlayTeleportSound ( );
	void DeactivateSpawnProtection ( );
	void FixedView ( struct FString VisibleMeshes );
	void SetMeshVisibility ( unsigned long bVisible );
	void SetWeaponAttachmentVisibility ( unsigned long bAttachmentVisible );
	void SetWeaponVisibility ( unsigned long bWeaponVisible );
	void eventEndViewTarget ( class APlayerController* PC );
	void eventBecomeViewTarget ( class APlayerController* PC );
	struct FVector GetPawnViewLocation ( );
	void eventUpdateEyeHeight ( float DeltaTime );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	struct FString GetScreenName ( );
	void OnModifyHealth ( class USeqAct_ModifyHealth* Action );
	void PlayVictoryAnimation ( );
	float GetEyeHeight ( );
	float RangedAttackTime ( );
	bool RecommendLongRangedAttack ( );
	unsigned char ChooseFireMode ( );
	bool StopWeaponFiring ( );
	bool BotFire ( unsigned long bFinished );
	bool StopFiring ( );
	void StartFire ( unsigned char FireModeNum );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void eventFalling ( );
	void eventStuckOnPawn ( class APawn* OtherPawn );
	void JumpOffPawn ( );
	void gibbedBy ( class AActor* Other );
	void eventEncroachedBy ( class AActor* Other );
	bool eventEncroachingOn ( class AActor* Other );
	void TurnOff ( );
	struct FVector WeaponBob ( float BobDamping, float JumpDamping );
	void SpawnDefaultController ( );
	void OnPlayAnim ( class UUTSeqAct_PlayAnim* inAction );
	void PlayEmote ( struct FName InEmoteTag, int InPlayerID );
	void ServerPlayEmote ( struct FName InEmoteTag, int InPlayerID );
	void DoPlayEmote ( struct FName InEmoteTag, int InPlayerID );
	void PerformEmoteCommand ( struct FEmoteInfo EInfo, int PlayerID );
	void LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm );
	void SetWeapAnimType ( unsigned char AnimType );
	void SetAnimRateScale ( float RateScale );
	void SetHandIKEnabled ( unsigned long bEnabled );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void ReattachMesh ( );
	void UpdateShadowSettings ( unsigned long bWantShadow );
	void PostBeginPlay ( );
	void SetTeamColor ( );
	void SetFirstPersonArmsInfo ( class USkeletalMesh* FirstPersonArmMesh, class UMaterialInterface* ArmMaterial );
	void NotifyTeamChanged ( );
	void ResetCharPhysState ( );
	void SetPawnRBChannels ( unsigned long bRagdollMode );
	void SetCharacterMeshInfo ( class USkeletalMesh* SkelMesh, class UMaterialInterface* HeadMaterial, class UMaterialInterface* BodyMaterial );
	void SetCharacterClassFromInfo ( class UClass* Info );
	bool VerifyBodyMaterialInstance ( );
	void SetArmsSkin ( class UMaterialInterface* NewMaterial );
	void SetSkin ( class UMaterial* NewMaterial );
	void SetInvisible ( unsigned long bNowInvisible );
	void SetBodyMatColor ( struct FLinearColor NewBodyMatColor, float NewOverlayDuration );
	void ClearBodyMatColor ( );
	void eventSetWalking ( unsigned long bNewIsWalking );
	void RenderMapIcon ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor );
	bool InCombat ( );
	bool PoweredUp ( );
	void eventHeadVolumeChange ( class APhysicsVolume* newHeadVolume );
	void eventFellOutOfWorld ( class UClass* dmgType );
	class AUTPlayerReplicationInfo* GetUTPlayerReplicationInfo ( );
	float AdjustedStrength ( );
	void AdjustPPEffects ( class AUTPlayerController* PC, unsigned long bRemove );
};

UClass* AUTPawn::pClassPointer = NULL;

// Class UTGame.UTHUDBase
// 0x0088 (0x07A4 - 0x071C)
class AUTHUDBase : public AUDKHUD
{
public:
	class UGFxUIScoreboard*                            ScoreboardMovie;                                  		// 0x071C (0x0008) [0x0000000000000000]              
	class UGFxUI_PauseMenu*                            PauseMenuMovie;                                   		// 0x0724 (0x0008) [0x0000000000000000]              
	class UClass*                                      MusicManagerClass;                                		// 0x072C (0x0008) [0x0000000000000000]              
	class AUTPlayerController*                         UTPlayerOwner;                                    		// 0x0734 (0x0008) [0x0000000000000000]              
	class AUTGameReplicationInfo*                      UTGRI;                                            		// 0x073C (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsSplitScreen : 1;                               		// 0x0744 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableActorOverlays : 1;                         		// 0x0744 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCrosshairShow : 1;                               		// 0x0744 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCrosshairOnFriendly : 1;                         		// 0x0744 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bGreenCrosshair : 1;                              		// 0x0744 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FTextureCoordinates                         ToolTipSepCoords;                                 		// 0x0748 (0x0010) [0x0000000000000000]              
	float                                              LastTimeTooltipDrawn;                             		// 0x0758 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  IconHudTexture;                                   		// 0x075C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ConsoleIconFontClassName;                         		// 0x0764 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              ConfiguredCrosshairScaling;                       		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              LastPickupTime;                                   		// 0x0778 (0x0004) [0x0000000000000000]              
	struct FColor                                      BlackColor;                                       		// 0x077C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      GoldColor;                                        		// 0x0780 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      LightGoldColor;                                   		// 0x0784 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      LightGreenColor;                                  		// 0x0788 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ResolutionScale;                                  		// 0x078C (0x0004) [0x0000000000000000]              
	float                                              ResolutionScaleX;                                 		// 0x0790 (0x0004) [0x0000000000000000]              
	int                                                ViewX;                                            		// 0x0794 (0x0004) [0x0000000000000000]              
	int                                                ViewY;                                            		// 0x0798 (0x0004) [0x0000000000000000]              
	class UGFxUILeaderboard*                           LeaderboardMovie;                                 		// 0x079C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44880 ];

		return pClassPointer;
	};

	void DrawShadowedRotatedTile ( class UTexture2D* Tex, struct FRotator Rot, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, struct FColor TileColor, unsigned long bScaleToRes );
	void DrawShadowedStretchedTile ( class UTexture2D* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, struct FColor TileColor, unsigned long bScaleToRes );
	void DrawShadowedTile ( class UTexture2D* Tex, float X, float Y, float XL, float YL, float U, float V, float UL, float VL, struct FColor TileColor, unsigned long bScaleToRes );
	bool CheckCrosshairOnFriendly ( );
	void DrawToolTip ( class UCanvas* Cvs, class APlayerController* PC, struct FString Command, float X, float Y, float U, float V, float UL, float VL, float ResScale, class UTexture2D* IconTexture, float Alpha );
	void SetShowLeaderboard ( unsigned long bEnableLeaderboard );
	void ToggleLeaderboard ( );
	void SetShowScores ( unsigned long bEnableShowScores );
	int GetLocalPlayerOwnerIndex ( );
	void ReleaseShowScores ( );
	void CompletePauseMenuClose ( );
	void TogglePauseMenu ( );
	void CloseOtherMenus ( );
	void SetVisible ( unsigned long bNewVisible );
	void RemoveMovies ( );
	void OnOpenAnimComplete ( );
	void OnCloseAnimComplete ( );
	void eventPostRender ( );
	void ResolutionChanged ( );
	void ShowMenu ( );
	void eventTimer ( );
	void PostBeginPlay ( );
};

UClass* AUTHUDBase::pClassPointer = NULL;

// Class UTGame.UTGFxHudWrapper
// 0x0018 (0x07BC - 0x07A4)
class AUTGFxHudWrapper : public AUTHUDBase
{
public:
	class UGFxMinimapHud*                              HudMovie;                                         		// 0x07A4 (0x0008) [0x0000000000000000]              
	class UGFxProjectedUI*                             InventoryMovie;                                   		// 0x07AC (0x0008) [0x0000000000000000]              
	class UClass*                                      MinimapHUDClass;                                  		// 0x07B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44879 ];

		return pClassPointer;
	};

	void CompleteCloseTimer ( );
	void CompleteCloseInventory ( );
	void ToggleInventory ( );
	void AddConsoleMessage ( struct FString M, class UClass* InMessageClass, class APlayerReplicationInfo* PRI, float Lifetime );
	void LocalizedMessage ( class UClass* InMessageClass, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, struct FString CriticalString, int Switch, float Position, float Lifetime, int FontSize, struct FColor DrawColor, class UObject* OptionalObject );
	void eventDrawHUD ( );
	void eventPostRender ( );
	void ResolutionChanged ( );
	void CloseOtherMenus ( );
	void DisplayHit ( struct FVector HitDir, int Damage, class UClass* DamageType );
	void SetVisible ( unsigned long bNewVisible );
	int GetLocalPlayerOwnerIndex ( );
	void CreateHUDMovie ( );
	void PostBeginPlay ( );
	void RemoveMovies ( );
	void eventDestroyed ( );
	void MinimapZoomOut ( );
	void MinimapZoomIn ( );
};

UClass* AUTGFxHudWrapper::pClassPointer = NULL;

// Class UTGame.UTGFxTeamHUDWrapper
// 0x0000 (0x07BC - 0x07BC)
class AUTGFxTeamHUDWrapper : public AUTGFxHudWrapper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44881 ];

		return pClassPointer;
	};

	void Timer ( );
};

UClass* AUTGFxTeamHUDWrapper::pClassPointer = NULL;

// Class UTGame.UTPlayerReplicationInfo
// 0x0151 (0x04AD - 0x035C)
class AUTPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	unsigned long                                      bHasFlag : 1;                                     		// 0x035C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bHolding : 1;                                     		// 0x035C (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bIsFemale : 1;                                    		// 0x035C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	int                                                spree;                                            		// 0x0360 (0x0004) [0x0000000000000000]              
	int                                                MultiKillLevel;                                   		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              LastKillTime;                                     		// 0x0368 (0x0004) [0x0000000000000000]              
	class AUTSquadAI*                                  Squad;                                            		// 0x036C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class AUTCarriedObject*                            HasFlag;                                          		// 0x0374 (0x0008) [0x0000000000000000]              
	class UClass*                                      VoiceClass;                                       		// 0x037C (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    LastKillerPRI;                                    		// 0x0384 (0x0008) [0x0000000000000000]              
	struct FColor                                      DefaultHudColor;                                  		// 0x038C (0x0004) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x0390 (0x000C) [0x0000000000000000]              
	class UClass*                                      CharClassInfo;                                    		// 0x039C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class UTexture*                                    CharPortrait;                                     		// 0x03A4 (0x0008) [0x0000000000000000]              
	TArray< struct FIntStat >                          KillStats;                                        		// 0x03AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FIntStat >                          DeathStats;                                       		// 0x03BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FIntStat >                          SuicideStats;                                     		// 0x03CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FIntStat >                          EventStats;                                       		// 0x03DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FIntStat >                          VehicleKillStats;                                 		// 0x03EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FIntStat >                          PickupStats;                                      		// 0x03FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTimeStat >                         DrivingStats;                                     		// 0x040C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTimeStat >                         PowerupTimeStats;                                 		// 0x041C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OrdersString[ 0x8 ];                              		// 0x042C (0x0080) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      OrdersIndex;                                      		// 0x04AC (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44887 ];

		return pClassPointer;
	};

	void UpdatePowerupAchievements ( struct FName StatName, int Time );
	void UpdateEventStatAchievements ( struct FName StatName );
	bool AttemptMidGameMenu ( );
	void ShowMidGameMenu ( unsigned long bInitial );
	void eventReplicatedEvent ( struct FName VarName );
	void ServerTeleportToActor ( class AActor* DestinationActor );
	bool AllowClientToTeleport ( class AActor* DestinationActor, class AUTPawn** OwnerPawn );
	void SeamlessTravelTo ( class APlayerReplicationInfo* NewPRI );
	void CopyProperties ( class APlayerReplicationInfo* PRI );
	void OverrideWith ( class APlayerReplicationInfo* PRI );
	struct FString GetCallSign ( );
	void Reset ( );
	void IncrementKills ( unsigned long bEnemyKill );
	class AUTCarriedObject* GetFlag ( );
	void SetFlag ( class AUTCarriedObject* NewFlag );
	void StopPowerupTimeStat ( struct FName NewStatName );
	void StartPowerupTimeStat ( struct FName NewStatName );
	int IncrementPickupStat ( struct FName NewStatName );
	int IncrementVehicleKillStat ( struct FName NewStatName );
	void StopDrivingStat ( struct FName NewStatName );
	void StartDrivingStat ( struct FName NewStatName );
	int IncrementEventStat ( struct FName NewStatName );
	int IncrementSuicideStat ( struct FName NewStatName );
	int IncrementDeathStat ( struct FName NewStatName );
	int IncrementKillStat ( struct FName NewStatName );
	bool ShouldBroadCastWelcomeMessage ( unsigned long bExiting );
	bool IsLocalPlayerPRI ( );
};

UClass* AUTPlayerReplicationInfo::pClassPointer = NULL;

// Class UTGame.UTTeamInfo
// 0x007C (0x0328 - 0x02AC)
class AUTTeamInfo : public ATeamInfo
{
public:
	int                                                DesiredTeamSize;                                  		// 0x02AC (0x0004) [0x0000000000000000]              
	class AUTTeamAI*                                   AI;                                               		// 0x02B0 (0x0008) [0x0000000000000000]              
	class AUTGameObjective*                            HomeBase;                                         		// 0x02B8 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class AUTCarriedObject*                            TeamFlag;                                         		// 0x02C0 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     Faction;                                          		// 0x02C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      BaseTeamColor[ 0x4 ];                             		// 0x02D8 (0x0010) [0x0000000000000000]              
	struct FString                                     TeamColorNames[ 0x4 ];                            		// 0x02E8 (0x0040) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44889 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	struct FCharacterInfo GetBotInfo ( struct FString BotName );
	void GetAvailableBotList ( struct FString FactionFilter, unsigned long bMalesOnly, TArray< int >* AvailableBots );
	bool BotNameTaken ( struct FString BotName );
	void RemoveFromTeam ( class AController* Other );
	void SetBotOrders ( class AUTBot* NewBot );
	bool NeedsBotMoreThan ( class AUTTeamInfo* T );
	void Initialize ( int NewTeamIndex );
	bool AllBotsSpawned ( );
	void Reset ( );
	struct FColor GetHUDColor ( );
	struct FString GetHumanReadableName ( );
};

UClass* AUTTeamInfo::pClassPointer = NULL;

// Class UTGame.UTFamilyInfo
// 0x01E4 (0x0244 - 0x0060)
class UUTFamilyInfo : public UObject
{
public:
	class UTexture*                                    DefaultHeadPortrait;                              		// 0x0060 (0x0008) [0x0000000000000000]              
	TArray< class UTexture* >                          DefaultTeamHeadPortrait;                          		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FamilyID;                                         		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Faction;                                          		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               CharacterMesh;                                    		// 0x0098 (0x0008) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                CharacterTeamBodyMaterials;                       		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                CharacterTeamHeadMaterials;                       		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ArmMeshPackageName;                               		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               ArmMesh;                                          		// 0x00D0 (0x0008) [0x0000000000000000]              
	struct FString                                     ArmSkinPackageName;                               		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInterface*                          RedArmMaterial;                                   		// 0x00E8 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          BlueArmMaterial;                                  		// 0x00F0 (0x0008) [0x0000000000000000]              
	struct FString                                     NeckStumpName;                                    		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     PortraitExtraOffset;                              		// 0x0108 (0x000C) [0x0000000000000000]              
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0114 (0x0008) [0x0000000000000000]              
	TArray< class UAnimSet* >                          AnimSets;                                         		// 0x011C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       LeftFootBone;                                     		// 0x012C (0x0008) [0x0000000000000000]              
	struct FName                                       RightFootBone;                                    		// 0x0134 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             TakeHitPhysicsFixedBones;                         		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      SoundGroupClass;                                  		// 0x014C (0x0008) [0x0000000000000000]              
	class UClass*                                      VoiceClass;                                       		// 0x0154 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BaseMICParent;                                    		// 0x015C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BioDeathMICParent;                                		// 0x0164 (0x0008) [0x0000000000000000]              
	class UMaterialInstance*                           BloodSplatterDecalMaterial;                       		// 0x016C (0x0008) [0x0000000000000000]              
	struct FLinearColor                                NonTeamEmissiveColor;                             		// 0x0174 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                NonTeamTintColor;                                 		// 0x0184 (0x0010) [0x0000000000000000]              
	TArray< struct FEmoteInfo >                        FamilyEmotes;                                     		// 0x0194 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGibInfo >                          Gibs;                                             		// 0x01A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGibInfo                                    HeadGib;                                          		// 0x01B4 (0x0014) [0x0000000000000000]              
	class USkeletalMesh*                               DeathMeshSkelMesh;                                		// 0x01C8 (0x0008) [0x0000000000000000]              
	class UPhysicsAsset*                               DeathMeshPhysAsset;                               		// 0x01D0 (0x0008) [0x0000000000000000]              
	int                                                DeathMeshNumMaterialsToSetResident;               		// 0x01D8 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             DeathMeshBreakableJoints;                         		// 0x01DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceTimeVarying* >      SkeletonBurnOutMaterials;                         		// 0x01EC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             HeadShotEffect;                                   		// 0x01FC (0x0008) [0x0000000000000000]              
	struct FName                                       HeadShotGoreSocketName;                           		// 0x0204 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 HeadShotNeckGoreAttachment;                       		// 0x020C (0x0008) [0x0000000000000000]              
	class UClass*                                      BloodEmitterClass;                                		// 0x0214 (0x0008) [0x0000000000000000]              
	TArray< struct FDistanceBasedParticleTemplate >    BloodEffects;                                     		// 0x021C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             GibExplosionTemplate;                             		// 0x022C (0x0008) [0x0000000000000000]              
	float                                              DrivingDrawScale;                                 		// 0x0234 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFemale : 1;                                    		// 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DefaultMeshScale;                                 		// 0x023C (0x0004) [0x0000000000000000]              
	float                                              BaseTranslationOffset;                            		// 0x0240 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44891 ];

		return pClassPointer;
	};

	int GetEmoteIndex ( struct FName EmoteTag );
	void GetEmotes ( struct FName Category, TArray< struct FString >* Captions, TArray< struct FName >* EmoteTags );
	class UClass* GetVoiceClass ( );
	int GetEmoteGroupCnt ( struct FName Category );
	class UTexture* GetCharPortrait ( int TeamNum );
	void GetTeamMaterials ( int TeamNum, class UMaterialInterface** TeamMaterialHead, class UMaterialInterface** TeamMaterialBody );
	class UMaterialInterface* GetFirstPersonArmsMaterial ( int TeamNum );
	class USkeletalMesh* GetFirstPersonArms ( );
};

UClass* UUTFamilyInfo::pClassPointer = NULL;

// Class UTGame.UTUIDataStore_StringAliasBindingsMap
// 0x0000 (0x0150 - 0x0150)
class UUTUIDataStore_StringAliasBindingsMap : public UUDKUIDataStore_StringAliasBindingMap
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44899 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataStore_StringAliasBindingsMap::pClassPointer = NULL;

// Class UTGame.UTGame
// 0x01E0 (0x06C8 - 0x04E8)
class AUTGame : public AUDKGame
{
public:
	unsigned long                                      bExportMenuData : 1;                              		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWeaponStay : 1;                                  		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTeamScoreRounds : 1;                             		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSoaking : 1;                                     		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPlayersVsBots : 1;                               		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCustomBots : 1;                                  		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAutoNumBots : 1;                                 		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPlayersMustBeReady : 1;                          		// 0x04E8 (0x0004) [0x0000000000044000] [0x00000080] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bForceRespawn : 1;                                		// 0x04E8 (0x0004) [0x0000000000044000] [0x00000100] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bTempForceRespawn : 1;                            		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bWaitForNetPlayers : 1;                           		// 0x04E8 (0x0004) [0x0000000000044000] [0x00000400] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShouldWaitForNetPlayers : 1;                     		// 0x04E8 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bWarmupRound : 1;                                 		// 0x04E8 (0x0004) [0x0000000000004000] [0x00001000] ( CPF_Config )
	unsigned long                                      bFirstBlood : 1;                                  		// 0x04E8 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bQuickStart : 1;                                  		// 0x04E8 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bSkipPlaySound : 1;                               		// 0x04E8 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bStartedCountDown : 1;                            		// 0x04E8 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bFinalStartup : 1;                                		// 0x04E8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bOverTimeBroadcast : 1;                           		// 0x04E8 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bMustHaveMultiplePlayers : 1;                     		// 0x04E8 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bPlayerBecameActive : 1;                          		// 0x04E8 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bMustJoinBeforeStart : 1;                         		// 0x04E8 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bDemoMode : 1;                                    		// 0x04E8 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bUndrivenVehicleDamage : 1;                       		// 0x04E8 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bStartWithLockerWeaps : 1;                        		// 0x04E8 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bAllowHoverboard : 1;                             		// 0x04E8 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bConsoleServer : 1;                               		// 0x04E8 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bAllowKeyboardAndMouse : 1;                       		// 0x04E8 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bScoreDeaths : 1;                                 		// 0x04E8 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bPlayedTenKills : 1;                              		// 0x04E8 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bPlayedFiveKills : 1;                             		// 0x04E8 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      bPlayedOneKill : 1;                               		// 0x04E8 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      bMidGameHasMap : 1;                               		// 0x04EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bForceMidGameMenuAtStart : 1;                     		// 0x04EC (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bNecrisLocked : 1;                                		// 0x04EC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIgnoreTeamForVoiceChat : 1;                      		// 0x04EC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUseClassicHUD : 1;                               		// 0x04EC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bLogGameplayEvents : 1;                           		// 0x04EC (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bGivePhysicsGun : 1;                              		// 0x04EC (0x0004) [0x0000000000000000] [0x00000040] 
	struct FString                                     Acronym;                                          		// 0x04F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0500 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                ServerSkillLevel;                                 		// 0x0510 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              EndTimeDelay;                                     		// 0x0514 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              BotRatio;                                         		// 0x0518 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	int                                                NetWait;                                          		// 0x051C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ClientProcessingTimeout;                          		// 0x0520 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinNetPlayers;                                    		// 0x0524 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	int                                                RestartWait;                                      		// 0x0528 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	int                                                WarmupTime;                                       		// 0x052C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                WarmupRemaining;                                  		// 0x0530 (0x0004) [0x0000000000000000]              
	unsigned char                                      StartupStage;                                     		// 0x0534 (0x0001) [0x0000000000000000]              
	unsigned char                                      WeaponTauntUsed[ 0x14 ];                          		// 0x0535 (0x0014) [0x0000000000000000]              
	int                                                DesiredPlayerCount;                               		// 0x054C (0x0004) [0x0000000000000000]              
	float                                              SpawnProtectionTime;                              		// 0x0550 (0x0004) [0x0000000000000000]              
	int                                                DefaultMaxLives;                                  		// 0x0554 (0x0004) [0x0000000000000000]              
	int                                                LateEntryLives;                                   		// 0x0558 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PendingMatchElapsedTime;                          		// 0x055C (0x0004) [0x0000000000000000]              
	int                                                CountDown;                                        		// 0x0560 (0x0004) [0x0000000000000000]              
	float                                              AdjustedDifficulty;                               		// 0x0564 (0x0004) [0x0000000000000000]              
	int                                                PlayerKills;                                      		// 0x0568 (0x0004) [0x0000000000000000]              
	int                                                PlayerDeaths;                                     		// 0x056C (0x0004) [0x0000000000000000]              
	class ANavigationPoint*                            LastPlayerStartSpot;                              		// 0x0570 (0x0008) [0x0000000000000000]              
	class ANavigationPoint*                            LastStartSpot;                                    		// 0x0578 (0x0008) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0580 (0x0004) [0x0000000000000000]              
	int                                                EndMessageWait;                                   		// 0x0584 (0x0004) [0x0000000000000000]              
	int                                                EndMessageCounter;                                		// 0x0588 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     RulesMenuType;                                    		// 0x058C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GameUMenuType;                                    		// 0x059C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      EndGameFocus;                                     		// 0x05AC (0x0008) [0x0000000000000000]              
	int                                                ResetCountDown;                                   		// 0x05B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ResetTimeDelay;                                   		// 0x05B8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class AUTVehicle*                                  VehicleList;                                      		// 0x05BC (0x0008) [0x0000000000000000]              
	class AUTTeamInfo*                                 EnemyRoster;                                      		// 0x05C4 (0x0008) [0x0000000000000000]              
	struct FString                                     EnemyRosterName;                                  		// 0x05CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            DefaultInventory;                                 		// 0x05DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      VictoryMessageClass;                              		// 0x05EC (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           MapPrefixes;                                      		// 0x05F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ConsolePlayerControllerClass;                     		// 0x0604 (0x0008) [0x0000000000000000]              
	struct FString                                     DemoPrefix;                                       		// 0x060C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      BotClass;                                         		// 0x061C (0x0008) [0x0000000000000000]              
	TArray< struct FGameMapCycle >                     GameSpecificMapCycles;                            		// 0x0624 (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	int                                                MapCycleIndex;                                    		// 0x0634 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	TArray< struct FActiveBotInfo >                    ActiveBots;                                       		// 0x0638 (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	class ANavigationPoint*                            ScriptedStartSpot;                                		// 0x0648 (0x0008) [0x0000000000000000]              
	struct FString                                     EndOfMatchRulesTemplateStr_Scoring;               		// 0x0650 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EndOfMatchRulesTemplateStr_ScoringSingle;         		// 0x0660 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EndOfMatchRulesTemplateStr_Time;                  		// 0x0670 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USpeechRecognition*                          SpeechRecognitionData;                            		// 0x0680 (0x0008) [0x0000000000000000]              
	float                                              LastEncouragementTime;                            		// 0x0688 (0x0004) [0x0000000000000000]              
	float                                              LastManDownTime;                                  		// 0x068C (0x0004) [0x0000000000000000]              
	class APawn*                                       Sniper;                                           		// 0x0690 (0x0008) [0x0000000000000000]              
	struct FName                                       MidgameScorePanelTag;                             		// 0x0698 (0x0008) [0x0000000000000000]              
	struct FString                                     GameplayEventsWriterClassName;                    		// 0x06A0 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGameplayEventsWriterBase*                   GameplayEventsWriter;                             		// 0x06B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             SpreeStatEvents;                                  		// 0x06B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44979 ];

		return pClassPointer;
	};

	void PreExit ( );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void ClearOnlineDelegates ( );
	void WriteOnlineStats ( );
	void UpdateGameSettings ( );
	bool AllowCheats ( class APlayerController* P );
	bool GetLocationFor ( class APawn* StatusPawn, int LocationSpeechOffset, class AActor** LocationObject, int* MessageIndex );
	struct FString GetEndOfMatchRules ( int InGoalScore, int InTimeLimit );
	void ContinueSeamlessTravel ( );
	void ProcessServerTravel ( struct FString URL, unsigned long bAbsolute );
	struct FString GetNextMap ( );
	int GetCurrentMapCycleIndex ( TArray< struct FString >* MapList );
	void WriteOnlinePlayerScores ( );
	void ProcessSpeechRecognition ( class AUTPlayerController* Speaker, TArray< struct FSpeechRecognizedWord >* Words );
	class AUTMutator* GetBaseUTMutator ( );
	class AActor* GetAutoObjectiveFor ( class AUTPlayerController* PC );
	void eventHandleSeamlessTravelPlayer ( class AController** C );
	void eventPostSeamlessTravel ( );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void ShowPathTo ( class APlayerController* P, int TeamNum );
	bool AllowClientToTeleport ( class AUTPlayerReplicationInfo* ClientPRI, class AActor* DestinationActor );
	void AddMutator ( struct FString mutname, unsigned long bUserAdded );
	void ViewObjective ( class APlayerController* PC );
	void ActivateVehicleFactory ( class AUTVehicleFactory* VF );
	void RegisterVehicle ( class AUTVehicle* V );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	bool CheckMaxLives ( class APlayerReplicationInfo* Scorer );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	class APlayerStart* ChoosePlayerStart ( class AController* Player, unsigned char InTeam );
	bool IsConsoleDedicatedServer ( );
	int CalculatedNetSpeed ( );
	void AddInitialBots ( );
	bool MatchIsInProgress ( );
	void EndRound ( class AActor* EndRoundFocus );
	bool JustStarted ( float MaxElapsedTime );
	void PlayStartupMessage ( );
	void PlayRegularEndOfMatchMessage ( );
	void PlayEndOfMatchMessage ( );
	bool IsAWinner ( class APlayerController* C );
	bool DominatingVictory ( );
	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam, struct FString IncomingName );
	void EndLogging ( struct FString Reason );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void StartMatch ( );
	void ResetAllPlayerMuteListsToSpectatorChannel ( );
	void RemovePlayerFromMuteLists ( class AUTPlayerController* PC );
	void SetupPlayerMuteList ( class AUTPlayerController* PC, unsigned long bForceSpectatorChannel );
	void UpdateGameplayMuteList ( class APlayerController* PC );
	void EndSpree ( class AUTPlayerReplicationInfo* Killer, class AUTPlayerReplicationInfo* Other );
	void NotifySpree ( class AUTPlayerReplicationInfo* Other, int Num );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	struct FString GetEndGameConditionRule ( );
	struct FString GetMapTypeRule ( );
	void InitGameReplicationInfo ( );
	class AUTTeamInfo* GetBotTeam ( int TeamBots, unsigned long bUseTeamIndex, int TeamIndex );
	void InitializeBot ( class AUTBot* NewBot, class AUTTeamInfo* BotTeam, struct FCharacterInfo* BotInfo );
	class AUTBot* SpawnBot ( struct FString BotName, unsigned long bUseTeamIndex, int TeamIndex );
	class AUTBot* AddBot ( struct FString BotName, unsigned long bUseTeamIndex, int TeamIndex );
	class AUTBot* AddNamedBot ( struct FString BotName, unsigned long bUseTeamIndex, int TeamIndex );
	void AddBots ( int Num );
	bool NeedPlayers ( );
	void KillBot ( class AUTBot* B );
	void KillThis ( );
	void KillOthers ( );
	void KillBots ( );
	void Logout ( class AController* Exiting );
	void DiscardInventory ( class APawn* Other, class AController* Killer );
	void ChangeName ( class AController* Other, struct FString S, unsigned long bNameChange );
	bool CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget );
	void AddDefaultInventory ( class APawn* PlayerPawn );
	void CampaignSkillAdjust ( class AUTBot* aBot );
	void RestartPlayer ( class AController* aPlayer );
	int GetHandicapNeed ( class APawn* Other );
	void AssignHoverboard ( class AUTPawn* P );
	void UpdateGameSettingsCounts ( );
	void eventPostLogin ( class APlayerController* NewPlayer );
	bool AtCapacity ( unsigned long bSpectator );
	void SetEndGameFocus ( class APlayerReplicationInfo* Winner );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void RestartGame ( );
	bool TooManyBots ( class AController* botToRemove );
	float SpawnWait ( class AAIController* B );
	bool WantFastSpawnFor ( class AAIController* B );
	bool ShouldRespawn ( class APickupFactory* Other );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	int LevelRecommendedPlayers ( );
	bool SetPause ( class APlayerController* PC, struct FScriptDelegate CanUnpauseDelegate );
	void GenericPlayerInitialization ( class AController* C );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	bool ForceRespawn ( );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void AdjustSkill ( class AAIController* B, class APlayerController* P, unsigned long bWinner );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void BroadcastDeathMessage ( class AController* Killer, class AController* Other, class UClass* DamageType );
	void SetGameSpeed ( float T );
	bool SkipPlaySound ( );
	struct FString ParseKillMessage ( struct FString KillerName, struct FString VictimName, struct FString DeathMessage );
	void NotifyNavigationChanged ( class ANavigationPoint* N );
	void FindNewObjectives ( class AUTGameObjective* DisabledObjective );
	void Reset ( );
	bool AllowBecomeActivePlayer ( class APlayerController* P );
	void DriverLeftVehicle ( class AVehicle* V, class APawn* P );
	void DriverEnteredVehicle ( class AVehicle* V, class APawn* P );
	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	bool AllowMutator ( struct FString MutatorClassName );
	bool UseLowGore ( class AWorldInfo* WI );
	void PostBeginPlay ( );
};

UClass* AUTGame::pClassPointer = NULL;

// Class UTGame.UTGameReplicationInfo
// 0x0064 (0x0358 - 0x02F4)
class AUTGameReplicationInfo : public AGameReplicationInfo
{
public:
	float                                              WeaponBerserk;                                    		// 0x02F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MinNetPlayers;                                    		// 0x02F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                BotDifficulty;                                    		// 0x02FC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bWarmupRound : 1;                                 		// 0x0300 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bForceDefaultCharacter : 1;                       		// 0x0300 (0x0004) [0x0000000000044000] [0x00000002] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bStoryMode : 1;                                   		// 0x0300 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bConsoleServer : 1;                               		// 0x0300 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bAllowKeyboardAndMouse : 1;                       		// 0x0300 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bAnnouncementsDisabled : 1;                       		// 0x0300 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bRequireReady : 1;                                		// 0x0300 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned char                                      FlagState[ 0x2 ];                                 		// 0x0304 (0x0002) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     MutatorList;                                      		// 0x0308 (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FString                                     RulesString;                                      		// 0x0318 (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                WeaponOverlays;                                   		// 0x0328 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMeshEffect >                       VehicleWeaponEffects;                             		// 0x0338 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageOfTheDay;                                  		// 0x0348 (0x0010) [0x0000000000444021]              ( CPF_Edit | CPF_Net | CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44995 ];

		return pClassPointer;
	};

	void AddGameRule ( struct FString Rule );
	void SetHudShowScores ( unsigned long bShow );
	void ShowMidGameMenu ( class AUTPlayerController* InstigatorPC, struct FName TabTag, unsigned long bEnableInput );
	void Timer ( );
	bool FlagIsDown ( int TeamIndex );
	void SetFlagDown ( int TeamIndex );
	bool FlagIsHeldEnemy ( int TeamIndex );
	void SetFlagHeldEnemy ( int TeamIndex );
	bool FlagIsHeldFriendly ( int TeamIndex );
	void SetFlagHeldFriendly ( int TeamIndex );
	bool FlagsAreHome ( );
	bool FlagIsHome ( int TeamIndex );
	void SetFlagHome ( int TeamIndex );
	void CharacterProcessingComplete ( );
	void SortPRIArray ( );
	bool InOrder ( class APlayerReplicationInfo* P1, class APlayerReplicationInfo* P2 );
	void PostBeginPlay ( );
};

UClass* AUTGameReplicationInfo::pClassPointer = NULL;

// Class UTGame.UTVehicle
// 0x03C8 (0x0D48 - 0x0980)
class AUTVehicle : public AUDKVehicle
{
public:
	unsigned long                                      bDriverHoldsFlag : 1;                             		// 0x0980 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanCarryFlag : 1;                                		// 0x0980 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bValidLinkTarget : 1;                             		// 0x0980 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEnteringUnlocks : 1;                             		// 0x0980 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHasCustomEntryRadius : 1;                        		// 0x0980 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bKeyVehicle : 1;                                  		// 0x0980 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bMustBeUpright : 1;                               		// 0x0980 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bOverrideAVRiLLocks : 1;                          		// 0x0980 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bStickDeflectionThrottle : 1;                     		// 0x0980 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bShouldAutoCenterViewPitch : 1;                   		// 0x0980 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bHasWeaponBar : 1;                                		// 0x0980 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bNeverReset : 1;                                  		// 0x0980 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bShouldLeaveForCombat : 1;                        		// 0x0980 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDrawHealthOnHUD : 1;                             		// 0x0980 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bDriverCastsShadow : 1;                           		// 0x0980 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bHasBeenDriven : 1;                               		// 0x0980 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bDropDetailWhenDriving : 1;                       		// 0x0980 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bLookSteerOnNormalControls : 1;                   		// 0x0980 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      bLookSteerOnSimpleControls : 1;                   		// 0x0980 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      bUsingLookSteer : 1;                              		// 0x0980 (0x0004) [0x0000000000002000] [0x00080000] ( CPF_Transient )
	unsigned long                                      bFindGroundExit : 1;                              		// 0x0980 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bRequestedEntryWithFlag : 1;                      		// 0x0980 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bInitializedVehicleEffects : 1;                   		// 0x0980 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bRagdollDriverOnDarkwalkerHorn : 1;               		// 0x0980 (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      bHasTurretExplosion : 1;                          		// 0x0980 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bPostRenderTraceSucceeded : 1;                    		// 0x0980 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bPlayingSpawnEffect : 1;                          		// 0x0980 (0x0004) [0x0000000000000020] [0x04000000] ( CPF_Net )
	unsigned long                                      bReducedFallingCollisionDamage : 1;               		// 0x0980 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bRotateCameraUnderVehicle : 1;                    		// 0x0980 (0x0004) [0x0000000000000001] [0x10000000] ( CPF_Edit )
	unsigned long                                      bNoZSmoothing : 1;                                		// 0x0980 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bLimitCameraZLookingUp : 1;                       		// 0x0980 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      bNoFollowJumpZ : 1;                               		// 0x0980 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      bFixedCamZ : 1;                                   		// 0x0984 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCameraNeverHidesVehicle : 1;                     		// 0x0984 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStopDeathCamera : 1;                             		// 0x0984 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsConsoleTurning : 1;                            		// 0x0984 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAcceptTurretJump : 1;                            		// 0x0984 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bShowDamageDebug : 1;                             		// 0x0984 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bStealthVehicle : 1;                              		// 0x0984 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasEnemyVehicleSound : 1;                        		// 0x0984 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsNecrisVehicle : 1;                             		// 0x0984 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bSpectatedView : 1;                               		// 0x0984 (0x0004) [0x0000000000000000] [0x00000200] 
	class USoundCue*                                   VehicleLockedSound;                               		// 0x0988 (0x0008) [0x0000000000000000]              
	unsigned char                                      AIPurpose;                                        		// 0x0990 (0x0001) [0x0000000000000000]              
	unsigned char                                      LinkedToCount;                                    		// 0x0991 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class AActor*                                      NoPassengerObjective;                             		// 0x0994 (0x0008) [0x0000000000000000]              
	float                                              DeflectionReverseThresh;                          		// 0x099C (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           DrivingPhysicalMaterial;                          		// 0x09A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UPhysicalMaterial*                           DefaultPhysicalMaterial;                          		// 0x09A8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x09B0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              VehicleLostTime;                                  		// 0x09B8 (0x0004) [0x0000000000000000]              
	float                                              PlayerStartTime;                                  		// 0x09BC (0x0004) [0x0000000000000000]              
	float                                              RespawnTime;                                      		// 0x09C0 (0x0004) [0x0000000000000000]              
	float                                              InitialSpawnDelay;                                		// 0x09C4 (0x0004) [0x0000000000000000]              
	float                                              LinkHealMult;                                     		// 0x09C8 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             LinkedToAudio;                                    		// 0x09CC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   LinkedToCue;                                      		// 0x09D4 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   LinkedEndSound;                                   		// 0x09DC (0x0008) [0x0000000000000000]              
	float                                              MaxDesireability;                                 		// 0x09E4 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         HornSounds;                                       		// 0x09E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HornAIRadius;                                     		// 0x09F8 (0x0004) [0x0000000000000000]              
	float                                              LastHornTime;                                     		// 0x09FC (0x0004) [0x0000000000000000]              
	int                                                HornIndex;                                        		// 0x0A00 (0x0004) [0x0000000000000000]              
	float                                              LeftStickDirDeadZone;                             		// 0x0A04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookSteerSensitivity;                             		// 0x0A08 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookSteerDamping;                                 		// 0x0A0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookSteerDeadZone;                                		// 0x0A10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConsoleSteerScale;                                		// 0x0A14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LockedOnSound;                                    		// 0x0A18 (0x0008) [0x0000000000000000]              
	class UClass*                                      RanOverDamageType;                                		// 0x0A20 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   RanOverSound;                                     		// 0x0A28 (0x0008) [0x0000000000000000]              
	int                                                StolenAnnouncementIndex;                          		// 0x0A30 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   StolenSound;                                      		// 0x0A34 (0x0008) [0x0000000000000000]              
	class AUTVehicle*                                  NextVehicle;                                      		// 0x0A3C (0x0008) [0x0000000000000000]              
	class AUTVehicleFactory*                           ParentFactory;                                    		// 0x0A44 (0x0008) [0x0000000000000000]              
	class AUTBot*                                      Reservation;                                      		// 0x0A4C (0x0008) [0x0000000000000000]              
	struct FString                                     VehiclePositionString;                            		// 0x0A54 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     VehicleNameString;                                		// 0x0A64 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FObjectiveAnnouncementInfo                  NeedToPickUpAnnouncement;                         		// 0x0A74 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TeamBeaconPlayerInfoMaxDist;                      		// 0x0A8C (0x0004) [0x0000000000000000]              
	float                                              HUDExtent;                                        		// 0x0A90 (0x0004) [0x0000000000000000]              
	class UClass*                                      VehicleDrowningDamType;                           		// 0x0A94 (0x0008) [0x0000000000000000]              
	class UClass*                                      ExplosionLightClass;                              		// 0x0A9C (0x0008) [0x0000000000000000]              
	float                                              MaxExplosionLightDistance;                        		// 0x0AA4 (0x0004) [0x0000000000000000]              
	class AEmitter*                                    DeathExplosion;                                   		// 0x0AA8 (0x0008) [0x0000000000000000]              
	float                                              TimeTilSecondaryVehicleExplosion;                 		// 0x0AB0 (0x0004) [0x0000000000000000]              
	int                                                ClientHealth;                                     		// 0x0AB4 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                TeamMaterials;                                    		// 0x0AB8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      VehiclePieceClass;                                		// 0x0AC8 (0x0008) [0x0000000000000000]              
	float                                              DamageSmokeThreshold;                             		// 0x0AD0 (0x0004) [0x0000000000000000]              
	class UClass*                                      ExplosionDamageType;                              		// 0x0AD4 (0x0008) [0x0000000000000000]              
	float                                              MaxImpactEffectDistance;                          		// 0x0ADC (0x0004) [0x0000000000000000]              
	float                                              MaxFireEffectDistance;                            		// 0x0AE0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ExplosionTemplate;                                		// 0x0AE4 (0x0008) [0x0000000000000000]              
	TArray< struct FDistanceBasedParticleTemplate >    BigExplosionTemplates;                            		// 0x0AEC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             SecondaryExplosion;                               		// 0x0AFC (0x0008) [0x0000000000000000]              
	struct FName                                       BigExplosionSocket;                               		// 0x0B04 (0x0008) [0x0000000000000000]              
	float                                              BurnOutTime;                                      		// 0x0B0C (0x0004) [0x0000000000000000]              
	float                                              DeadVehicleLifeSpan;                              		// 0x0B10 (0x0004) [0x0000000000000000]              
	int                                                DelayedBurnoutCount;                              		// 0x0B14 (0x0004) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              ExplosionRadius;                                  		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              ExplosionMomentum;                                		// 0x0B20 (0x0004) [0x0000000000000000]              
	float                                              ExplosionInAirAngVel;                             		// 0x0B24 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 DeathExplosionShake;                              		// 0x0B28 (0x0008) [0x0000000000000000]              
	float                                              InnerExplosionShakeRadius;                        		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              OuterExplosionShakeRadius;                        		// 0x0B34 (0x0004) [0x0000000000000000]              
	struct FName                                       TurretScaleControlName;                           		// 0x0B38 (0x0008) [0x0000000000000000]              
	struct FName                                       TurretSocketName;                                 		// 0x0B40 (0x0008) [0x0000000000000000]              
	TArray< struct FDistanceBasedParticleTemplate >    DistanceTurretExplosionTemplates;                 		// 0x0B48 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     TurretOffset;                                     		// 0x0B58 (0x000C) [0x0000000000000000]              
	class AUTVehicleDeathPiece*                        DestroyedTurret;                                  		// 0x0B64 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 DestroyedTurretTemplate;                          		// 0x0B6C (0x0008) [0x0000000000000000]              
	float                                              TurretExplosiveForce;                             		// 0x0B74 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x0B78 (0x0008) [0x0000000000000000]              
	struct FName                                       BurnTimeParameterName;                            		// 0x0B80 (0x0008) [0x0000000000000000]              
	float                                              SpawnRadius;                                      		// 0x0B88 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SpawnInSound;                                     		// 0x0B8C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SpawnOutSound;                                    		// 0x0B94 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   BoostPadSound;                                    		// 0x0B9C (0x0008) [0x0000000000000000]              
	struct FVector                                     FlagOffset;                                       		// 0x0BA4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    FlagRotation;                                     		// 0x0BB0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FlagBone;                                         		// 0x0BBC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MapSize;                                          		// 0x0BC4 (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0BC8 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         FlipToolTipIconCoords;                            		// 0x0BD8 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         EnterToolTipIconCoords;                           		// 0x0BE8 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         DropFlagIconCoords;                               		// 0x0BF8 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         DropOrbIconCoords;                                		// 0x0C08 (0x0010) [0x0000000000000000]              
	int                                                LastHealth;                                       		// 0x0C18 (0x0004) [0x0000000000000000]              
	float                                              HealthPulseTime;                                  		// 0x0C1C (0x0004) [0x0000000000000000]              
	struct FVector                                     TeamBeaconOffset;                                 		// 0x0C20 (0x000C) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PassengerPRI;                                     		// 0x0C2C (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     PassengerTeamBeaconOffset;                        		// 0x0C34 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  HudIcons;                                         		// 0x0C40 (0x0008) [0x0000000000000000]              
	struct FTextureCoordinates                         HudCoords;                                        		// 0x0C48 (0x0010) [0x0000000000000000]              
	TArray< class UParticleSystem* >                   SpawnInTemplates;                                 		// 0x0C58 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialList >                     SpawnMaterialLists;                               		// 0x0C68 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SpawnMaterialParameterName;                       		// 0x0C78 (0x0008) [0x0000000000000000]              
	struct FInterpCurveFloat                           SpawnMaterialParameterCurve;                      		// 0x0C80 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                OriginalMaterials;                                		// 0x0C94 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SpawnInTime;                                      		// 0x0CA4 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          BurnOutMaterial[ 0x2 ];                           		// 0x0CA8 (0x0010) [0x0000000000000000]              
	float                                              CollisionDamageMult;                              		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              LastCollisionDamageTime;                          		// 0x0CBC (0x0004) [0x0000000000000000]              
	float                                              SeatCameraScale;                                  		// 0x0CC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OldCamPosZ;                                       		// 0x0CC4 (0x0004) [0x0000000000000000]              
	float                                              CameraSmoothingFactor;                            		// 0x0CC8 (0x0004) [0x0000000000000000]              
	float                                              DefaultFOV;                                       		// 0x0CCC (0x0004) [0x0000000000000000]              
	TArray< struct FTimePosition >                     OldPositions;                                     		// 0x0CD0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CameraLag;                                        		// 0x0CE0 (0x0004) [0x0000000000000000]              
	struct FVector                                     CameraOffset;                                     		// 0x0CE4 (0x000C) [0x0000000000000000]              
	float                                              LookForwardDist;                                  		// 0x0CF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinCameraDistSq;                                  		// 0x0CF4 (0x0004) [0x0000000000000000]              
	struct FVector                                     OldCameraPosition;                                		// 0x0CF8 (0x000C) [0x0000000000000000]              
	float                                              DisabledTime;                                     		// 0x0D04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeLastDisabled;                                 		// 0x0D08 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             DisabledTemplate;                                 		// 0x0D0C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    DisabledEffectComponent;                          		// 0x0D14 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMesh*                                 ReferenceMovementMesh;                            		// 0x0D1C (0x0008) [0x0000000000000000]              
	float                                              LastEnemyWarningTime;                             		// 0x0D24 (0x0004) [0x0000000000000000]              
	TArray< class USoundNodeWave* >                    EnemyVehicleSound;                                		// 0x0D28 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    VehicleDestroyedSound;                            		// 0x0D38 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45018 ];

		return pClassPointer;
	};

	bool ShouldLeaveForCombat ( class AUTBot* B );
	void ApplyWeaponEffects ( int OverlayFlags, int SeatIndex );
	struct FLinearColor GetSeatColor ( int SeatIndex, unsigned long bIsPlayersSeat );
	void DisplaySeats ( class AUTHUD* HUD, class UCanvas* Canvas, float PosX, float PosY, float Width, float Height, int SIndex );
	void DisplayExtraHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D pos, float Width, float Height, int SIndex );
	void DrawBarGraph ( float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas );
	void DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SeatIndex );
	struct FName GetVehicleKillStatName ( );
	bool CanAttack ( class AActor* Other );
	void DetachDriver ( class APawn* P );
	void SetMovementEffect ( int SeatIndex, unsigned long bSetActive, class AUTPawn* UTP );
	void SetSeatStoragePawn ( int SeatIndex, class APawn* PawnToSit );
	void SetShieldActive ( int SeatIndex, unsigned long bActive );
	void OnExitVehicle ( class UUTSeqAct_ExitVehicle* Action );
	void GetSVehicleDebug ( TArray< struct FString >* DebugInfo );
	class AUTGib* SpawnGibVehicle ( struct FVector SpawnLocation, struct FRotator SpawnRotation, class UStaticMesh* TheMesh, struct FVector HitLocation, unsigned long bSpinGib, struct FVector ImpulseDirection, class UParticleSystem* PS_OnBreak, class UParticleSystem* PS_Trail );
	void ApplyRandomMorphDamage ( int Amount );
	void eventApplyMorphHeal ( int Amount );
	void eventReceivedHealthChange ( );
	void InitializeMorphs ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	float GetCollisionDamageModifier ( TArray< struct FRigidBodyContactInfo >* ContactInfos );
	int GetHealth ( int SeatIndex );
	void eventOnPropertyChange ( struct FName PropName );
	struct FString GetHumanReadableName ( );
	void OnDriverPhysicsAssetChanged ( class AUTPawn* UTP );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	void AttachDriver ( class APawn* P );
	void CheckDamageSmoke ( );
	void StopVehicleSounds ( );
	void TurretExplosion ( );
	void eventRBPenetrationDestroy ( );
	bool ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal );
	void SetBurnOut ( );
	void DisableCollision ( );
	void DisableDamageSmoke ( );
	void TurnOffShadows ( );
	void StartBurnOut ( );
	void AdjustCameraScale ( unsigned long bMoveCameraIn );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	float LimitCameraZ ( float CurrentCamZ, float OriginalCamZ, int SeatIndex );
	struct FVector GetCameraStart ( int SeatIndex );
	struct FVector GetCameraFocus ( int SeatIndex );
	bool CalcCamera ( float DeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation );
	void VehicleAdjustFlashLocation ( int SeatIndex, unsigned char FireModeNum, struct FVector NewLocation, unsigned long bClear );
	void VehicleAdjustFlashCount ( int SeatIndex, unsigned char FireModeNum, unsigned long bClear );
	void SpawnImpactEmitter ( struct FVector HitLocation, struct FVector HitNormal, int SeatIndex, struct FMaterialImpactEffect* ImpactEffect );
	void VehicleWeaponImpactEffects ( struct FVector HitLocation, int SeatIndex );
	class AActor* FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void VehicleWeaponStoppedFiring ( unsigned long bViaReplication, int SeatIndex );
	void WeaponStoppedFiring ( class AWeapon* InWeapon, unsigned long bViaReplication );
	void VehicleWeaponFired ( unsigned long bViaReplication, struct FVector HitLocation, int SeatIndex );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void CauseMuzzleFlashLight ( int SeatIndex );
	void GetWeaponViewAxes ( class AUTWeapon* WhichWeapon, struct FVector* XAxis, struct FVector* YAxis, struct FVector* ZAxis );
	bool OverrideEndFire ( unsigned char FireModeNum );
	bool OverrideBeginFire ( unsigned char FireModeNum );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	struct FVector GetPhysicalFireStartLoc ( class AUTWeapon* ForWeapon );
	struct FVector GetEffectLocation ( int SeatIndex );
	void eventGetBarrelLocationAndRotation ( int SeatIndex, struct FVector* SocketLocation, struct FRotator* SocketRotation );
	void ClearFlashLocation ( class AWeapon* Who );
	void SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewLoc );
	void IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum );
	void ClearFlashCount ( class AWeapon* Who );
	void SetFiringMode ( class AWeapon* Weap, unsigned char FiringModeNum );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void InitializeTurrets ( );
	void PreCacheSeatNames ( );
	void InitializeSeats ( );
	bool ImportantVehicle ( );
	class AActor* eventGetHomingTarget ( class AUTProjectile* Seeker, class AController* InstigatedBy );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum, class AActor* DamageCauser );
	void eventPlayTakeHitEffects ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	void StopLinkedEffect ( );
	void StartLinkedEffect ( );
	void DecrementLinkedToCount ( );
	void IncrementLinkedToCount ( );
	bool HealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	bool AllowLinkThroughOwnedActor ( class AActor* OwnedActor );
	bool TeamLink ( int TeamNum );
	void SetReservation ( class AController* C );
	bool StopsProjectile ( class AProjectile* P );
	bool SpokenFor ( class AController* C );
	float ReservationCostMultiplier ( class APawn* P );
	float BotDesireability ( class AUTSquadAI* S, int TeamIndex, class AActor* Objective );
	bool OpenPositionFor ( class APawn* P );
	bool Occupied ( );
	void eventCheckReset ( );
	void PassengerLeave ( int SeatIndex );
	bool eventDriverLeave ( unsigned long bForceLeave );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	int GetFirstAvailableSeat ( );
	void DriverLeft ( );
	void AttachFlag ( class AUTCarriedObject* FlagActor, class APawn* NewDriver );
	void eventHoldGameObject ( class AUDKCarriedObject* GameObj );
	bool DriverEnter ( class APawn* P );
	void HandleEnteringFlag ( class AUTPlayerReplicationInfo* EnteringPRI );
	class AUTVehicle* GetMoveTargetFor ( class APawn* P );
	int NumPassengers ( );
	void UpdateControllerOnPossess ( unsigned long bVehicleTransition );
	void PlayHorn ( );
	bool CheckTurretPitchLimit ( int NeededPitch, int SeatIndex );
	bool TooCloseToAttack ( class AActor* Other );
	void eventLockOnWarning ( class AUDKProjectile* IncomingMissile );
	void SendLockOnMessage ( int Switch );
	void ShootMissile ( class AProjectile* P );
	void eventIncomingMissile ( class AProjectile* P );
	bool Dodge ( unsigned char DoubleClickMove );
	void TeamChanged_VehicleEffects ( );
	void TeamChanged ( );
	void eventSetTeamNum ( unsigned char T );
	void PostRenderPassengerBeacon ( class APlayerController* PC, class UCanvas* Canvas, struct FLinearColor TeamColor, struct FColor TextColor, class AUTWeapon* Weap, class APlayerReplicationInfo* InPassengerPRI, struct FVector InPassengerTeamBeaconOffset );
	void RenderPassengerBeacons ( class APlayerController* PC, class UCanvas* Canvas, struct FLinearColor TeamColor, struct FColor TextColor, class AUTWeapon* Weap );
	float GetDisplayedHealth ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	bool ShouldShowUseable ( class APlayerController* PC, float Dist );
	void VehicleLocked ( class APawn* P );
	bool KickOutBot ( );
	bool TryToDrive ( class APawn* P );
	bool CanEnterVehicle ( class APawn* P );
	class APlayerReplicationInfo* GetSeatPRI ( int SeatNum );
	bool InCustomEntryRadius ( class APawn* P );
	void BlowupVehicle ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	class AController* GetCollisionDamageInstigator ( );
	void eventTornOff ( );
	bool ChangeSeat ( class AController* ControllerToMove, int RequestedSeat );
	bool HasPriority ( class AController* first, class AController* second );
	void ServerChangeSeat ( int RequestedSeat );
	void ServerAdjacentSeat ( int Direction, class AController* C );
	class AController* GetControllerForSeatIndex ( int SeatIndex );
	int GetSeatIndexForController ( class AController* ControllerToMove );
	bool AnySeatAvailable ( );
	bool SeatAvailable ( int SeatIndex );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void DrivingStatusChanged ( );
	void eventSetKeyVehicle ( );
	void eventReplicatedEvent ( struct FName VarName );
	void WeaponRotationChanged ( int SeatIndex );
	struct FRotator eventGetViewRotation ( );
	bool ShouldClamp ( );
	struct FRotator GetClampedViewRotation ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ServerSetConsoleTurning ( unsigned long bNewConsoleTurning );
	int GetSeatIndexFromPrefix ( struct FString Prefix );
	void eventTakeFireDamage ( );
	void EnableVehicle ( );
	bool DisableVehicle ( );
	void SetTexturesToBeResident ( unsigned long bActive );
	void Destroyed ( );
	void DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser, float DamageFalloffExponent );
	void eventTakeWaterDamage ( );
	void PancakeOther ( class APawn* Other );
	void eventRanInto ( class AActor* Other );
	bool FindAutoExit ( class APawn* ExitingDriver );
	struct FRotator ExitRotation ( );
	void EntryAnnouncement ( class AController* C );
	void VehicleEvent ( struct FName EventTag );
	void PlayVehicleAnimation ( struct FName EventTag );
	void PlayVehicleSound ( struct FName SoundTag );
	void TriggerVehicleEffect ( struct FName EventTag );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void InitializeEffects ( );
	void CreateVehicleEffect ( int EffectIndex );
	bool CriticalChargeAttack ( class AUTBot* B );
	bool RecommendCharge ( class AUTBot* B, class APawn* Enemy );
	bool IsDriverSeat ( class AVehicle* TestSeatPawn );
	bool eventContinueOnFoot ( );
	float AdjustedStrength ( );
	void RenderMapIcon ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	void DisplayWeaponBar ( class UCanvas* Canvas, class AUTHUD* HUD );
	class UClass* GetRanOverDamageType ( );
	void EjectSeat ( int SeatIdx );
	void StopSpawnEffect ( );
	void PlaySpawnEffect ( );
	float GetChargePower ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	void UpdateLookSteerStatus ( );
	void CreateDamageMaterialInstance ( );
	void ReattachMesh ( );
	void UpdateShadowSettings ( unsigned long bWantShadow );
	void PostBeginPlay ( );
};

UClass* AUTVehicle::pClassPointer = NULL;

// Class UTGame.UTLocalMessage
// 0x0014 (0x0088 - 0x0074)
class UUTLocalMessage : public ULocalMessage
{
public:
	int                                                MessageArea;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                AnnouncementPriority;                             		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowPortrait : 1;                                		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              AnnouncementVolume;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              AnnouncementDelay;                                		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45032 ];

		return pClassPointer;
	};

	bool KilledByVictoryMessage ( int AnnouncementIndex );
	float GetPos ( int Switch, class AHUD* myHUD );
	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* UUTLocalMessage::pClassPointer = NULL;

// Class UTGame.UTVehicleCantCarryFlagMessage
// 0x0018 (0x00A0 - 0x0088)
class UUTVehicleCantCarryFlagMessage : public UUTLocalMessage
{
public:
	struct FString                                     FlagMessage;                                      		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              FlagAnnouncement;                                 		// 0x0098 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45031 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTVehicleCantCarryFlagMessage::pClassPointer = NULL;

// Class UTGame.UTGameObjective
// 0x015F (0x053C - 0x03DD)
class AUTGameObjective : public AUDKGameObjective
{
public:
	unsigned long                                      bAlreadyRendered : 1;                             		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowRemoteUse : 1;                              		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFirstObjective : 1;                              		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasSensor : 1;                                   		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsConstructing : 1;                              		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsDisabled : 1;                                  		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsActive : 1;                                    		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bPostRenderTraceSucceeded : 1;                    		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bHasLocationSpeech : 1;                           		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bScriptRenderAdditionalMinimap : 1;               		// 0x03E0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned char                                      StartTeam;                                        		// 0x03E4 (0x0001) [0x0000000000000000]              
	unsigned char                                      DefensePriority;                                  		// 0x03E5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class AUTSquadAI*                                  DefenseSquad;                                     		// 0x03E8 (0x0008) [0x0000000000000000]              
	class AUTDefensePoint*                             DefensePoints;                                    		// 0x03F0 (0x0008) [0x0000000000000000]              
	struct FString                                     ObjectiveName;                                    		// 0x03F8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< class ANavigationPoint* >                  VehicleParkingSpots;                              		// 0x0408 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AVolume*                                     MyBaseVolume;                                     		// 0x0418 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseRadius;                                       		// 0x0420 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FScorerRecord >                     Scorers;                                          		// 0x0424 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0434 (0x0004) [0x0000000000000000]              
	class AUTGameObjective*                            NextObjective;                                    		// 0x0438 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                ControlColor[ 0x3 ];                              		// 0x0440 (0x0030) [0x0000000000000000]              
	struct FTextureCoordinates                         AttackCoords;                                     		// 0x0470 (0x0010) [0x0000000000000000]              
	float                                              IconPosX;                                         		// 0x0480 (0x0004) [0x0000000000000000]              
	float                                              IconPosY;                                         		// 0x0484 (0x0004) [0x0000000000000000]              
	float                                              IconExtentX;                                      		// 0x0488 (0x0004) [0x0000000000000000]              
	float                                              IconExtentY;                                      		// 0x048C (0x0004) [0x0000000000000000]              
	class UMaterial*                                   HudMaterial;                                      		// 0x0490 (0x0008) [0x0000000000000000]              
	float                                              MaxSensorRange;                                   		// 0x0498 (0x0004) [0x0000000000000000]              
	float                                              CameraViewDistance;                               		// 0x049C (0x0004) [0x0000000000000000]              
	TArray< class AUTVehicleFactory* >                 VehicleFactories;                                 		// 0x04A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APlayerStart* >                      PlayerStarts;                                     		// 0x04B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AUTTeamStaticMesh* >                 TeamStaticMeshes;                                 		// 0x04C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FObjectiveAnnouncementInfo                  AttackAnnouncement;                               		// 0x04D0 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FObjectiveAnnouncementInfo                  DefendAnnouncement;                               		// 0x04E8 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              HighlightScale;                                   		// 0x0500 (0x0004) [0x0000000000000000]              
	float                                              MaxHighlightScale;                                		// 0x0504 (0x0004) [0x0000000000000000]              
	float                                              HighlightSpeed;                                   		// 0x0508 (0x0004) [0x0000000000000000]              
	float                                              MinimapIconScale;                                 		// 0x050C (0x0004) [0x0000000000000000]              
	float                                              LastHighlightUpdate;                              		// 0x0510 (0x0004) [0x0000000000000000]              
	float                                              LastPostRenderTraceTime;                          		// 0x0514 (0x0004) [0x0000000000000000]              
	float                                              MaxBeaconDistance;                                		// 0x0518 (0x0004) [0x0000000000000000]              
	TArray< class USoundNodeWave* >                    LocationSpeech;                                   		// 0x051C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                AttackLinearColor;                                		// 0x052C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45077 ];

		return pClassPointer;
	};

	bool ReachedParkingSpot ( class APawn* P );
	void MarkShootSpotsFor ( class APawn* P );
	void TriggerFlagEvent ( struct FName EventType, class AController* EventInstigator );
	void SetAlarm ( unsigned long bNowOn );
	class AUTCarriedObject* GetFlag ( );
	bool ValidSpawnPointFor ( unsigned char TeamIndex );
	bool TeleportTo ( class AUTPawn* Traveler );
	void FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation );
	void SetTeam ( unsigned char TeamIndex );
	void ShareScore ( int TotalScore, struct FString EventDesc );
	void AddScorer ( class AUTPlayerReplicationInfo* PRI, float Pct );
	void ClientReset ( );
	void Reset ( );
	bool BetterObjectiveThan ( class AUTGameObjective* Best, unsigned char DesiredTeamNum, unsigned char RequesterTeamNum );
	int GetNumDefenders ( );
	bool TellBotHowToDisable ( class AUTBot* B );
	struct FString GetHumanReadableName ( );
	bool NearObjective ( class APawn* P );
	bool BotNearObjective ( class AAIController* C );
	bool CanDoubleJump ( class APawn* Other );
	bool NeedsHealing ( );
	bool TeamLink ( int TeamNum );
	bool TellBotHowToHeal ( class AUTBot* B );
	bool Shootable ( );
	bool eventIsActive ( );
	bool IsNeutral ( );
	bool eventIsCritical ( );
	void DrawMapSelection ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner );
	void RenderExtraDetails ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float ColorPercent, unsigned long bSelected );
	void eventRenderMinimap ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float ColorPercent );
	void HighlightOnMinimap ( int Switch );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool UsedBy ( class APawn* P );
	class AUTGameObjective* FindNearestFriendlyNode ( int TeamIndex );
	void eventReplicatedEvent ( struct FName VarName );
	void UpdateTeamStaticMeshes ( );
	void AddTeamStaticMesh ( class AUTTeamStaticMesh* SMesh );
	void Destroyed ( );
	class AActor* GetAutoObjectiveActor ( class AUTPlayerController* PC );
	class USoundNodeWave* GetLocationSpeechFor ( class APlayerController* PC, int LocationSpeechOffset, int MessageIndex );
	int GetLocationMessageIndex ( class AUTBot* B, class APawn* StatusPawn );
	struct FVector GetHUDOffset ( class APlayerController* PC, class UCanvas* Canvas );
	bool IsStandalone ( );
	void PostBeginPlay ( );
};

UClass* AUTGameObjective::pClassPointer = NULL;

// Class UTGame.UTWeapon
// 0x0370 (0x077C - 0x040C)
class AUTWeapon : public AUDKWeapon
{
public:
	unsigned long                                      bExportMenuData : 1;                              		// 0x040C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWasLocked : 1;                                   		// 0x040C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseCustomCoordinates : 1;                        		// 0x040C (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bSmallWeapons : 1;                                		// 0x040C (0x0004) [0x0000000000044000] [0x00000008] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bSuperWeapon : 1;                                 		// 0x040C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNeverForwardPendingFire : 1;                     		// 0x040C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSuppressSounds : 1;                              		// 0x040C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bUsesOffhand : 1;                                 		// 0x040C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bPendingShow : 1;                                 		// 0x040C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bShowAltMuzzlePSCWhenWeaponHidden : 1;            		// 0x040C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bMuzzleFlashPSCLoops : 1;                         		// 0x040C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bMuzzleFlashAttached : 1;                         		// 0x040C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bShellCasingPSCLoops : 1;                         		// 0x040C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bShellCasingAttached : 1;                         		// 0x040C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bSplashJump : 1;                                  		// 0x040C (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bRecommendSplashDamage : 1;                       		// 0x040C (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bSniping : 1;                                     		// 0x040C (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bFastRepeater : 1;                                		// 0x040C (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bLockedAimWhileFiring : 1;                        		// 0x040C (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bUsingAimingHelp : 1;                             		// 0x040C (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bAllowFiringWithoutController : 1;                		// 0x040C (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bTargetFrictionEnabled : 1;                       		// 0x040C (0x0004) [0x0000000000004001] [0x00200000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bTargetAdhesionEnabled : 1;                       		// 0x040C (0x0004) [0x0000000000004001] [0x00400000] ( CPF_Edit | CPF_Config )
	unsigned long                                      bForceHidden : 1;                                 		// 0x040C (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bHasLocationSpeech : 1;                           		// 0x040C (0x0004) [0x0000000000000000] [0x01000000] 
	class UClass*                                      AmmoPickupClass;                                  		// 0x0410 (0x0008) [0x0000000000000000]              
	int                                                LockerAmmoCount;                                  		// 0x0418 (0x0004) [0x0000000000000000]              
	int                                                MaxAmmoCount;                                     		// 0x041C (0x0004) [0x0000000000000000]              
	TArray< int >                                      ShotCost;                                         		// 0x0420 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    MinReloadPct;                                     		// 0x0430 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UCameraAnim* >                       FireCameraAnim;                                   		// 0x0440 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UForceFeedbackWaveform*                      WeaponFireWaveForm;                               		// 0x0450 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             EffectSockets;                                    		// 0x0458 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                IconX;                                            		// 0x0468 (0x0004) [0x0000000000000000]              
	int                                                IconY;                                            		// 0x046C (0x0004) [0x0000000000000000]              
	int                                                IconWidth;                                        		// 0x0470 (0x0004) [0x0000000000000000]              
	int                                                IconHeight;                                       		// 0x0474 (0x0004) [0x0000000000000000]              
	float                                              SwitchAbortTime;                                  		// 0x0478 (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         IconCoordinates;                                  		// 0x047C (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         CrossHairCoordinates;                             		// 0x048C (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         SimpleCrossHairCoordinates;                       		// 0x049C (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  CrosshairImage;                                   		// 0x04AC (0x0008) [0x0000000000000000]              
	struct FTextureCoordinates                         LockedCrossHairCoordinates;                       		// 0x04B4 (0x0010) [0x0000000000000000]              
	float                                              CurrentLockedScale;                               		// 0x04C4 (0x0004) [0x0000000000000000]              
	float                                              StartLockedScale;                                 		// 0x04C8 (0x0004) [0x0000000000000000]              
	float                                              FinalLockedScale;                                 		// 0x04CC (0x0004) [0x0000000000000000]              
	float                                              LockedScaleTime;                                  		// 0x04D0 (0x0004) [0x0000000000000000]              
	float                                              LockedStartTime;                                  		// 0x04D4 (0x0004) [0x0000000000000000]              
	float                                              LastHitEnemyTime;                                 		// 0x04D8 (0x0004) [0x0000000000000000]              
	struct FColor                                      CrosshairColor;                                   		// 0x04DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CrosshairScaling;                                 		// 0x04E0 (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         CustomCrosshairCoordinates;                       		// 0x04E4 (0x0010) [0x0000000000004000]              ( CPF_Config )
	float                                              DroppedPickupOffsetZ;                             		// 0x04F4 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            bZoomedFireMode;                                  		// 0x04F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ZoomedFireModeNum;                                		// 0x0508 (0x0001) [0x0000000000000000]              
	unsigned char                                      InventoryGroup;                                   		// 0x0509 (0x0001) [0x0000000000000000]              
	unsigned char                                      AmmoDisplayType;                                  		// 0x050A (0x0001) [0x0000000000000000]              
	float                                              ZoomedTargetFOV;                                  		// 0x050C (0x0004) [0x0000000000000000]              
	float                                              ZoomedRate;                                       		// 0x0510 (0x0004) [0x0000000000000000]              
	float                                              ZoomFadeTime;                                     		// 0x0514 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    ZoomInSound;                                      		// 0x0518 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    ZoomOutSound;                                     		// 0x0520 (0x0008) [0x0000000000000000]              
	class UClass*                                      AttachmentClass;                                  		// 0x0528 (0x0008) [0x0000000000000000]              
	struct FVector                                     PivotTranslation;                                 		// 0x0530 (0x000C) [0x0000000000000000]              
	float                                              GroupWeight;                                      		// 0x053C (0x0004) [0x0000000000000000]              
	float                                              InventoryWeight;                                  		// 0x0540 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             WeaponFireAnim;                                   		// 0x0544 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmFireAnim;                                      		// 0x0554 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    ArmsAnimSet;                                      		// 0x0564 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponPutDownAnim;                                		// 0x056C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmsPutDownAnim;                                  		// 0x0574 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponEquipAnim;                                  		// 0x057C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmsEquipAnim;                                    		// 0x0584 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             WeaponIdleAnims;                                  		// 0x058C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ArmIdleAnims;                                     		// 0x059C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UAkEvent* >                          WeaponFireSnd;                                    		// 0x05AC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAkEvent*                                    WeaponPutDownSnd;                                 		// 0x05BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    WeaponEquipSnd;                                   		// 0x05C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BobDamping;                                       		// 0x05CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpDamping;                                      		// 0x05D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPitchLag;                                      		// 0x05D4 (0x0004) [0x0000000000000000]              
	float                                              MaxYawLag;                                        		// 0x05D8 (0x0004) [0x0000000000000000]              
	float                                              LastRotUpdate;                                    		// 0x05DC (0x0004) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x05E0 (0x000C) [0x0000000000000000]              
	float                                              OldLeadMag[ 0x2 ];                                		// 0x05EC (0x0008) [0x0000000000000000]              
	int                                                OldRotDiff[ 0x2 ];                                		// 0x05F4 (0x0008) [0x0000000000000000]              
	float                                              OldMaxDiff[ 0x2 ];                                		// 0x05FC (0x0008) [0x0000000000000000]              
	float                                              RotChgSpeed;                                      		// 0x0604 (0x0004) [0x0000000000000000]              
	float                                              ReturnChgSpeed;                                   		// 0x0608 (0x0004) [0x0000000000000000]              
	struct FColor                                      WeaponColor;                                      		// 0x060C (0x0004) [0x0000000000000000]              
	float                                              WeaponCanvasXPct;                                 		// 0x0610 (0x0004) [0x0000000000000000]              
	float                                              WeaponCanvasYPct;                                 		// 0x0614 (0x0004) [0x0000000000000000]              
	struct FName                                       MuzzleFlashSocket;                                		// 0x0618 (0x0008) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  MuzzleFlashPSC;                                   		// 0x0620 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             MuzzleFlashPSCTemplate;                           		// 0x0628 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashAltPSCTemplate;                        		// 0x0630 (0x0008) [0x0000000000000000]              
	struct FColor                                      MuzzleFlashColor;                                 		// 0x0638 (0x0004) [0x0000000000000000]              
	class UUDKExplosionLight*                          MuzzleFlashLight;                                 		// 0x063C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      MuzzleFlashLightClass;                            		// 0x0644 (0x0008) [0x0000000000000000]              
	float                                              MuzzleFlashDuration;                              		// 0x064C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShellCasingSocket;                                		// 0x0650 (0x0008) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  ShellCasingPSC;                                   		// 0x0658 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ShellCasingPSCTemplate;                           		// 0x0660 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ShellCasingAltPSCTemplate;                        		// 0x0668 (0x0008) [0x0000000000000000]              
	struct FColor                                      ShellCasingColor;                                 		// 0x0670 (0x0004) [0x0000000000000000]              
	float                                              ShellCasingDuration;                              		// 0x0674 (0x0004) [0x0000000000000000]              
	struct FVector                                     PlayerViewOffset;                                 		// 0x0678 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SmallWeaponsOffset;                               		// 0x0684 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              WideScreenOffsetScaling;                          		// 0x0690 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    WidescreenRotationOffset;                         		// 0x0694 (0x000C) [0x0000000000000000]              
	struct FVector                                     HiddenWeaponsOffset;                              		// 0x06A0 (0x000C) [0x0000000000000000]              
	float                                              ProjectileSpawnOffset;                            		// 0x06AC (0x0004) [0x0000000000000000]              
	struct FRotator                                    LockerRotation;                                   		// 0x06B0 (0x000C) [0x0000000000000000]              
	struct FVector                                     LockerOffset;                                     		// 0x06BC (0x000C) [0x0000000000000000]              
	float                                              CurrentRating;                                    		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              aimerror;                                         		// 0x06CC (0x0004) [0x0000000000000000]              
	struct FObjectiveAnnouncementInfo                  NeedToPickUpAnnouncement;                         		// 0x06D0 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AimingHelpRadius[ 0x2 ];                          		// 0x06E8 (0x0008) [0x0000000000000000]              
	float                                              ZoomedTurnSpeedScalePct;                          		// 0x06F0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetFrictionDistanceMin;                        		// 0x06F4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetFrictionDistancePeak;                       		// 0x06F8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetFrictionDistanceMax;                        		// 0x06FC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FInterpCurveFloat                           TargetFrictionDistanceCurve;                      		// 0x0700 (0x0014) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FVector2D                                   TargetFrictionMultiplierRange;                    		// 0x0714 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetFrictionPeakRadiusScale;                    		// 0x071C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetFrictionPeakHeightScale;                    		// 0x0720 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector                                     TargetFrictionOffset;                             		// 0x0724 (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetFrictionZoomedBoostValue;                   		// 0x0730 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionTimeMax;                            		// 0x0734 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionDistanceMax;                        		// 0x0738 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionAimDistY;                           		// 0x073C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionAimDistZ;                           		// 0x0740 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector2D                                   TargetAdhesionScaleRange;                         		// 0x0744 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionScaleAmountMin;                     		// 0x074C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionTargetVelocityMin;                  		// 0x0750 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionPlayerVelocityMin;                  		// 0x0754 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              TargetAdhesionZoomedBoostValue;                   		// 0x0758 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< class USoundNodeWave* >                    LocationSpeech;                                   		// 0x075C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UseHintString;                                    		// 0x076C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45108 ];

		return pClassPointer;
	};

	bool EnableFriendlyWarningCrosshair ( );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	bool CoversScreenSpace ( struct FVector ScreenLoc, class UCanvas* Canvas );
	void HolderEnteredVehicle ( );
	bool CanViewAccelerationWhenFiring ( );
	void ClientWeaponThrown ( );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	float eventGetPowerPerc ( );
	void Activate ( );
	void ThrottleLook ( float* aTurn, float* aLookUp );
	bool RecommendLongRangedAttack ( );
	float DetourWeight ( class APawn* Other, float PathWeight );
	void SetWeaponOverlayFlags ( class AUTPawn* OwnerPawn );
	void eventDestroyed ( );
	class UAnimNodeSequence* GetArmAnimNodeSeq ( );
	void SetupArmsAnim ( );
	void RefireCheckTimer ( );
	struct FVector GetEffectLocation ( );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void FiringPutDownWeapon ( );
	bool TryPutDown ( );
	bool AllowSwitchTo ( class AWeapon* NewWeapon );
	void PreloadTextures ( unsigned long bForcePreload );
	void FireAmmunition ( );
	void ClientWeaponSet ( unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void SendToFiringState ( unsigned char FireModeNum );
	void EndFire ( unsigned char FireModeNum );
	void ClientEndFire ( unsigned char FireModeNum );
	void EndZoom ( class AUTPlayerController* PC );
	void StartZoom ( class AUTPlayerController* PC );
	bool CheckZoom ( unsigned char FireModeNum );
	unsigned char GetZoomedState ( );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits, float HeadShot );
	class AProjectile* ProjectileFire ( );
	struct FImpactInfo InstantAimHelp ( struct FVector StartTrace, struct FVector EndTrace, struct FImpactInfo RealImpact );
	void InstantFire ( );
	struct FVector InstantFireEndTrace ( struct FVector StartTrace );
	struct FVector InstantFireStartTrace ( );
	bool bReadyToFire ( );
	void WeaponEmpty ( );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	void Loaded ( unsigned long bUseWeaponMax );
	bool NeedAmmo ( );
	float DesireAmmo ( unsigned long bDetour );
	bool HasAnyAmmo ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	bool AmmoMaxed ( int Mode );
	int AddAmmo ( int Amount );
	void ConsumeAmmo ( unsigned char FireModeNum );
	bool StillFiring ( unsigned char FireMode );
	bool ReadyToFire ( unsigned long bFinished );
	bool IsFullyCharged ( );
	unsigned char BestMode ( );
	bool ShouldFireWithoutTarget ( );
	bool SplashJump ( );
	float RangedAttackTime ( );
	float SuggestDefenseStyle ( );
	float SuggestAttackStyle ( );
	bool RecommendRangedAttack ( );
	bool FocusOnLeader ( unsigned long bLeaderFiring );
	bool FireOnRelease ( );
	float GetOptimalRangeFor ( class AActor* Target );
	bool CanHeal ( class AActor* Other );
	float GetDamageRadius ( );
	float BotDesireability ( class AActor* PickupHolder, class APawn* P, class AController* C );
	bool CanAttack ( class AActor* Other );
	float GetWeaponRating ( );
	float RelativeStrengthVersus ( class APawn* P, float Dist );
	void AdjustPlayerDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum );
	int LagRot ( int NewValue, int LastValue, float MaxDiff, int Index );
	bool ShouldLagRot ( );
	void AdjustWeaponDrawOffset ( class AUDKPawn* Holder, unsigned char CurrentHand, struct FVector* DrawOffset );
	void AdjustWeaponRotation ( class AUDKPawn* Holder, unsigned char CurrentHand, struct FRotator* DrawRotation );
	void eventSetPosition ( class AUDKPawn* Holder );
	unsigned char GetHand ( );
	bool CanThrow ( );
	void ServerReselectWeapon ( );
	void GetViewAxes ( struct FVector* XAxis, struct FVector* YAxis, struct FVector* ZAxis );
	void PerformWeaponChange ( );
	void ChangeVisibility ( unsigned long bIsVisible );
	void DetachShellCasing ( );
	void DetachMuzzleFlash ( );
	void DetachWeapon ( );
	void AttachShellCasing ( );
	void AttachMuzzleFlash ( );
	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void PlayWeaponEquip ( );
	float GetEquipTime ( );
	void TimeWeaponEquipping ( );
	void PlayWeaponPutDown ( );
	void TimeWeaponPutDown ( );
	void eventStopShellCasing ( );
	void eventCauseShellCasing ( );
	void eventShellCasingTimer ( );
	void eventStopMuzzleFlash ( );
	void eventCauseMuzzleFlash ( );
	void eventCauseMuzzleFlashLight ( );
	void eventMuzzleFlashTimer ( );
	void PlayFiringSound ( );
	void WeaponPlaySound ( class UAkEvent* Sound, float NoiseLoudness );
	void WeaponCalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void ShakeView ( );
	void StopFireEffects ( unsigned char FireModeNum );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	void PlayArmAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long OffHand, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	float GetFireInterval ( unsigned char FireModeNum );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	int GetAmmoCount ( );
	void DrawLockedOn ( class AHUD* H );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void ActiveRenderOverlays ( class AHUD* H );
	void SetSkin ( class UMaterial* NewMaterial );
	bool ShouldSwitchTo ( class AUTWeapon* InWeapon );
	void CalcInventoryWeight ( );
	void eventReplicatedEvent ( struct FName VarName );
	void CreateOverlayMesh ( );
	void AdjustWeaponTimingForConsole ( );
	void PostBeginPlay ( );
	void ServerStartFire ( unsigned char FireModeNum );
};

UClass* AUTWeapon::pClassPointer = NULL;

// Class UTGame.UTIdleKickWarningMessage
// 0x0000 (0x0088 - 0x0088)
class UUTIdleKickWarningMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45111 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTIdleKickWarningMessage::pClassPointer = NULL;

// Class UTGame.UTEmitter
// 0x0000 (0x02A0 - 0x02A0)
class AUTEmitter : public AEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45154 ];

		return pClassPointer;
	};

	void SetLightEnvironment ( class ULightEnvironmentComponent* Light );
	void eventSetTemplate ( class UParticleSystem* NewTemplate, unsigned long bDestroyOnFinish );
	class UParticleSystem* GetTemplateForDistance ( struct FVector SpawnLocation, class AWorldInfo* WI, TArray< struct FDistanceBasedParticleTemplate >* TemplateList );
};

UClass* AUTEmitter::pClassPointer = NULL;

// Class UTGame.UTReplicatedEmitter
// 0x000C (0x02AC - 0x02A0)
class AUTReplicatedEmitter : public AUTEmitter
{
public:
	class UParticleSystem*                             EmitterTemplate;                                  		// 0x02A0 (0x0008) [0x0000000000000000]              
	float                                              ServerLifeSpan;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45153 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTReplicatedEmitter::pClassPointer = NULL;

// Class UTGame.UTWillowWhisp
// 0x00BC (0x0368 - 0x02AC)
class AUTWillowWhisp : public AUTReplicatedEmitter
{
public:
	struct FVector                                     WayPoints[ 0xF ];                                 		// 0x02AC (0x00B4) [0x0000000000000020]              ( CPF_Net )
	int                                                NumPoints;                                        		// 0x0360 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                Position;                                         		// 0x0364 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45152 ];

		return pClassPointer;
	};

	void StartNextPath ( );
	void eventSetTemplate ( class UParticleSystem* NewTemplate, unsigned long bDestroyOnFinish );
	void eventReplicatedEvent ( struct FName VarName );
	void eventSetInitialState ( );
	void PostBeginPlay ( );
};

UClass* AUTWillowWhisp::pClassPointer = NULL;

// Class UTGame.UTObjectiveSpecificMessage
// 0x0000 (0x0088 - 0x0088)
class UUTObjectiveSpecificMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45158 ];

		return pClassPointer;
	};

	void SetHUDDisplay ( class APlayerController* P, int Switch, struct FString Text, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	struct FObjectiveAnnouncementInfo GetObjectiveAnnouncement ( unsigned char MessageIndex, class UObject* Objective, class APlayerController* PC );
};

UClass* UUTObjectiveSpecificMessage::pClassPointer = NULL;

// Class UTGame.UTObjectiveAnnouncement
// 0x0000 (0x0088 - 0x0088)
class UUTObjectiveAnnouncement : public UUTObjectiveSpecificMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45157 ];

		return pClassPointer;
	};

	void SetHUDDisplay ( class APlayerController* P, int Switch, struct FString Text, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	struct FObjectiveAnnouncementInfo GetObjectiveAnnouncement ( unsigned char MessageIndex, class UObject* Objective, class APlayerController* PC );
};

UClass* UUTObjectiveAnnouncement::pClassPointer = NULL;

// Class UTGame.UTWeaponPawn
// 0x0000 (0x0780 - 0x0780)
class AUTWeaponPawn : public AUDKWeaponPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45166 ];

		return pClassPointer;
	};

	void ApplyWeaponEffects ( int OverlayFlags, int SeatIndex );
	void DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SIndex );
	bool TooCloseToAttack ( class AActor* Other );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	bool DriverLeave ( unsigned long bForceLeave );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void eventHoldGameObject ( class AUDKCarriedObject* GameObj );
	void AttachDriver ( class APawn* P );
	void SetBaseEyeheight ( );
	float GetCollisionRadius ( );
	bool DoJump ( unsigned long bUpdating );
	void SetMovementPhysics ( );
	void eventBaseChange ( );
	void JumpOffPawn ( );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void DropToGround ( );
	bool PlaceExitingDriver ( class APawn* ExitingDriver );
	void AdjustCameraScale ( unsigned long bIn );
	void ServerChangeSeat ( int RequestedSeat );
	void ServerAdjacentSeat ( int Direction, class AController* C );
	void DriverLeft ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void ClearFlashLocation ( class AWeapon* Who );
	void SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewLoc );
	void ClearFlashCount ( class AWeapon* Who );
	void IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum );
	void SetFiringMode ( class AWeapon* Weap, unsigned char FiringModeNum );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void eventReplicatedEvent ( struct FName VarName );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	struct FName GetVehicleDrivingStatName ( );
};

UClass* AUTWeaponPawn::pClassPointer = NULL;

// Class UTGame.UTTeamGameMessage
// 0x0058 (0x00E0 - 0x0088)
class UUTTeamGameMessage : public UUTLocalMessage
{
public:
	struct FString                                     RequestTeamSwapPrefix;                            		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RequestTeamSwapPostfix;                           		// 0x0098 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouAreOnRedMessage;                               		// 0x00A8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouAreOnBlueMessage;                              		// 0x00B8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      RedDrawColor;                                     		// 0x00C8 (0x0004) [0x0000000000000000]              
	struct FColor                                      BlueDrawColor;                                    		// 0x00CC (0x0004) [0x0000000000000000]              
	class USoundNodeWave*                              AnnouncerSounds[ 0x2 ];                           		// 0x00D0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45168 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	float GetPos ( int Switch, class AHUD* myHUD );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTTeamGameMessage::pClassPointer = NULL;

// Class UTGame.UTTimerMessage
// 0x0010 (0x0098 - 0x0088)
class UUTTimerMessage : public UUTLocalMessage
{
public:
	TArray< struct FObjectiveAnnouncementInfo >        Announcements;                                    		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45192 ];

		return pClassPointer;
	};

	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTTimerMessage::pClassPointer = NULL;

// Class UTGame.UTStartupMessage
// 0x0090 (0x0118 - 0x0088)
class UUTStartupMessage : public UUTLocalMessage
{
public:
	struct FString                                     Stage[ 0x7 ];                                     		// 0x0088 (0x0070) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotReady;                                         		// 0x00F8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SinglePlayer;                                     		// 0x0108 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45193 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTStartupMessage::pClassPointer = NULL;

// Class UTGame.UTHUD
// 0x0534 (0x0CD8 - 0x07A4)
class AUTHUD : public AUTHUDBase
{
public:
	class UClass*                                      WeaponSwitchMessage;                              		// 0x07A4 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  AltHudTexture;                                    		// 0x07AC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  TalkingTexture;                                   		// 0x07B4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  UT3GHudTexture;                                   		// 0x07BC (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                LC_White;                                         		// 0x07C4 (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      GrayColor;                                        		// 0x07D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastAmmoPickupTime;                               		// 0x07D8 (0x0004) [0x0000000000000000]              
	float                                              LastHealthPickupTime;                             		// 0x07DC (0x0004) [0x0000000000000000]              
	float                                              LastArmorPickupTime;                              		// 0x07E0 (0x0004) [0x0000000000000000]              
	class APawn*                                       PawnOwner;                                        		// 0x07E4 (0x0008) [0x0000000000000000]              
	class AUTPawn*                                     UTPawnOwner;                                      		// 0x07EC (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    UTOwnerPRI;                                       		// 0x07F4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bShowAllAI : 1;                                   		// 0x07FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHudMessageRendered : 1;                          		// 0x07FC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowWeaponbar : 1;                               		// 0x07FC (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bOnlyShowWeaponBarIfChanging : 1;                 		// 0x07FC (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bNoWeaponNumbers : 1;                             		// 0x07FC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFadeOutHitEffect : 1;                            		// 0x07FC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bShowClock : 1;                                   		// 0x07FC (0x0004) [0x0000000000044000] [0x00000040] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowDoll : 1;                                    		// 0x07FC (0x0004) [0x0000000000044000] [0x00000080] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowAmmo : 1;                                    		// 0x07FC (0x0004) [0x0000000000044000] [0x00000100] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bHasMap : 1;                                      		// 0x07FC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bShowMap : 1;                                     		// 0x07FC (0x0004) [0x0000000000044000] [0x00000400] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowPowerups : 1;                                		// 0x07FC (0x0004) [0x0000000000044000] [0x00000800] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bDisplayingPowerups : 1;                          		// 0x07FC (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bShowScoring : 1;                                 		// 0x07FC (0x0004) [0x0000000000044000] [0x00002000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowFragCount : 1;                               		// 0x07FC (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bHasLeaderboard : 1;                              		// 0x07FC (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bShowLeaderboard : 1;                             		// 0x07FC (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bShowVehicle : 1;                                 		// 0x07FC (0x0004) [0x0000000000044000] [0x00020000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowVehicleArmorCount : 1;                       		// 0x07FC (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bIsFirstPlayer : 1;                               		// 0x07FC (0x0004) [0x0000000000000000] [0x00080000] 
	TArray< class UFont* >                             HudFonts;                                         		// 0x0800 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterial*                                   CharPortraitMaterial;                             		// 0x0810 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   CharPortraitMI;                                   		// 0x0818 (0x0008) [0x0000000000000000]              
	float                                              CharPortraitYPerc;                                		// 0x0820 (0x0004) [0x0000000000000000]              
	float                                              CharPortraitXPerc;                                		// 0x0824 (0x0004) [0x0000000000000000]              
	float                                              CharPortraitTime;                                 		// 0x0828 (0x0004) [0x0000000000000000]              
	float                                              CharPortraitSlideTime;                            		// 0x082C (0x0004) [0x0000000000000000]              
	float                                              CharPortraitSlideTransitionTime;                  		// 0x0830 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   CharPortraitSize;                                 		// 0x0834 (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    CharPRI;                                          		// 0x083C (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    CharPendingPRI;                                   		// 0x0844 (0x0008) [0x0000000000000000]              
	float                                              WeaponBarScale;                                   		// 0x084C (0x0004) [0x0000000000000000]              
	float                                              WeaponBoxWidth;                                   		// 0x0850 (0x0004) [0x0000000000000000]              
	float                                              WeaponBoxHeight;                                  		// 0x0854 (0x0004) [0x0000000000000000]              
	float                                              HUDScaleX;                                        		// 0x0858 (0x0004) [0x0000000000000000]              
	float                                              HUDScaleY;                                        		// 0x085C (0x0004) [0x0000000000000000]              
	struct FLinearColor                                TeamHUDColor;                                     		// 0x0860 (0x0010) [0x0000000000000000]              
	struct FColor                                      TeamTextColor;                                    		// 0x0870 (0x0004) [0x0000000000000000]              
	float                                              WeaponBarY;                                       		// 0x0874 (0x0004) [0x0000000000000000]              
	class AUTWeapon*                                   WeaponList[ 0xA ];                                		// 0x0878 (0x0050) [0x0000000000000000]              
	float                                              CurrentWeaponScale[ 0xA ];                        		// 0x08C8 (0x0028) [0x0000000000000000]              
	float                                              SelectedWeaponScale;                              		// 0x08F0 (0x0004) [0x0000000000000000]              
	float                                              BounceWeaponScale;                                		// 0x08F4 (0x0004) [0x0000000000000000]              
	float                                              SelectedWeaponAlpha;                              		// 0x08F8 (0x0004) [0x0000000000000000]              
	float                                              OffWeaponAlpha;                                   		// 0x08FC (0x0004) [0x0000000000000000]              
	float                                              EmptyWeaponAlpha;                                 		// 0x0900 (0x0004) [0x0000000000000000]              
	float                                              LastHUDUpdateTime;                                		// 0x0904 (0x0004) [0x0000000000000000]              
	int                                                BouncedWeapon;                                    		// 0x0908 (0x0004) [0x0000000000000000]              
	float                                              WeaponScaleSpeed;                                 		// 0x090C (0x0004) [0x0000000000000000]              
	float                                              WeaponBarXOffset;                                 		// 0x0910 (0x0004) [0x0000000000000000]              
	float                                              WeaponXOffset;                                    		// 0x0914 (0x0004) [0x0000000000000000]              
	float                                              SelectedBoxScale;                                 		// 0x0918 (0x0004) [0x0000000000000000]              
	float                                              WeaponYScale;                                     		// 0x091C (0x0004) [0x0000000000000000]              
	float                                              WeaponYOffset;                                    		// 0x0920 (0x0004) [0x0000000000000000]              
	float                                              WeaponAmmoLength;                                 		// 0x0924 (0x0004) [0x0000000000000000]              
	float                                              WeaponAmmoThickness;                              		// 0x0928 (0x0004) [0x0000000000000000]              
	float                                              WeaponAmmoOffsetX;                                		// 0x092C (0x0004) [0x0000000000000000]              
	float                                              WeaponAmmoOffsetY;                                		// 0x0930 (0x0004) [0x0000000000000000]              
	float                                              SelectedWeaponAmmoOffsetX;                        		// 0x0934 (0x0004) [0x0000000000000000]              
	float                                              LastWeaponBarDrawnTime;                           		// 0x0938 (0x0004) [0x0000000000000000]              
	float                                              MessageOffset[ 0x7 ];                             		// 0x093C (0x001C) [0x0000000000000000]              
	class UTexture2D*                                  MapBackground;                                    		// 0x0958 (0x0008) [0x0000000000000000]              
	float                                              MapDefaultSize;                                   		// 0x0960 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     DisplayedOrders;                                  		// 0x0964 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              OrderUpdateTime;                                  		// 0x0974 (0x0004) [0x0000000000000000]              
	class AWeapon*                                     LastSelectedWeapon;                               		// 0x0978 (0x0008) [0x0000000000000000]              
	float                                              SafeRegionPct;                                    		// 0x0980 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FullWidth;                                        		// 0x0984 (0x0004) [0x0000000000000000]              
	float                                              FullHeight;                                       		// 0x0988 (0x0004) [0x0000000000000000]              
	int                                                MaxNoOfIndicators;                                		// 0x098C (0x0004) [0x0000000000000000]              
	TArray< struct FDamageInfo >                       DamageData;                                       		// 0x0990 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterial*                                   BaseMaterial;                                     		// 0x09A0 (0x0008) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x09A8 (0x0004) [0x0000000000000000]              
	struct FName                                       PositionalParamName;                              		// 0x09AC (0x0008) [0x0000000000000000]              
	struct FName                                       FadeParamName;                                    		// 0x09B4 (0x0008) [0x0000000000000000]              
	float                                              HitEffectIntensity;                               		// 0x09BC (0x0004) [0x0000000000000000]              
	struct FLinearColor                                MaxHitEffectColor;                                		// 0x09C0 (0x0010) [0x0000000000000000]              
	float                                              HitEffectFadeTime;                                		// 0x09D0 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             HitEffect;                                        		// 0x09D4 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   HitEffectMaterialInstance;                        		// 0x09DC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   ClockPosition;                                    		// 0x09E4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   DollPosition;                                     		// 0x09EC (0x0008) [0x0000000000000000]              
	float                                              LastDollUpdate;                                   		// 0x09F4 (0x0004) [0x0000000000000000]              
	float                                              DollVisibility;                                   		// 0x09F8 (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         HealthBGCoords;                                   		// 0x09FC (0x0010) [0x0000000000000000]              
	float                                              HealthOffsetX;                                    		// 0x0A0C (0x0004) [0x0000000000000000]              
	float                                              HealthBGOffsetX;                                  		// 0x0A10 (0x0004) [0x0000000000000000]              
	float                                              HealthBGOffsetY;                                  		// 0x0A14 (0x0004) [0x0000000000000000]              
	float                                              HealthIconX;                                      		// 0x0A18 (0x0004) [0x0000000000000000]              
	float                                              HealthIconY;                                      		// 0x0A1C (0x0004) [0x0000000000000000]              
	float                                              HealthTextX;                                      		// 0x0A20 (0x0004) [0x0000000000000000]              
	float                                              HealthTextY;                                      		// 0x0A24 (0x0004) [0x0000000000000000]              
	int                                                LastHealth;                                       		// 0x0A28 (0x0004) [0x0000000000000000]              
	float                                              HealthPulseTime;                                  		// 0x0A2C (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         ArmorBGCoords;                                    		// 0x0A30 (0x0010) [0x0000000000000000]              
	float                                              ArmorBGOffsetX;                                   		// 0x0A40 (0x0004) [0x0000000000000000]              
	float                                              ArmorBGOffsetY;                                   		// 0x0A44 (0x0004) [0x0000000000000000]              
	float                                              ArmorIconX;                                       		// 0x0A48 (0x0004) [0x0000000000000000]              
	float                                              ArmorIconY;                                       		// 0x0A4C (0x0004) [0x0000000000000000]              
	float                                              ArmorTextX;                                       		// 0x0A50 (0x0004) [0x0000000000000000]              
	float                                              ArmorTextY;                                       		// 0x0A54 (0x0004) [0x0000000000000000]              
	int                                                LastArmorAmount;                                  		// 0x0A58 (0x0004) [0x0000000000000000]              
	float                                              ArmorPulseTime;                                   		// 0x0A5C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   AmmoPosition;                                     		// 0x0A60 (0x0008) [0x0000000000000000]              
	float                                              AmmoBarOffsetY;                                   		// 0x0A68 (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         AmmoBGCoords;                                     		// 0x0A6C (0x0010) [0x0000000000000000]              
	float                                              AmmoTextOffsetX;                                  		// 0x0A7C (0x0004) [0x0000000000000000]              
	float                                              AmmoTextOffsetY;                                  		// 0x0A80 (0x0004) [0x0000000000000000]              
	class AUTWeapon*                                   LastWeapon;                                       		// 0x0A84 (0x0008) [0x0000000000000000]              
	int                                                LastAmmoCount;                                    		// 0x0A8C (0x0004) [0x0000000000000000]              
	float                                              AmmoPulseTime;                                    		// 0x0A90 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   MapPosition;                                      		// 0x0A94 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   PowerupDims;                                      		// 0x0A9C (0x0008) [0x0000000000000000]              
	float                                              PowerupYPos;                                      		// 0x0AA4 (0x0004) [0x0000000000000000]              
	float                                              PowerupTransitionTime;                            		// 0x0AA8 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   ScoringPosition;                                  		// 0x0AAC (0x0008) [0x0000000000000000]              
	float                                              FragPulseTime;                                    		// 0x0AB4 (0x0004) [0x0000000000000000]              
	int                                                LastFragCount;                                    		// 0x0AB8 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   VehiclePosition;                                  		// 0x0ABC (0x0008) [0x0000000000000000]              
	float                                              DamageIndicatorSize;                              		// 0x0AC4 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              NameplateWidth;                                   		// 0x0AC8 (0x0004) [0x0000000000000000]              
	float                                              NameplateBubbleWidth;                             		// 0x0ACC (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         NameplateLeft;                                    		// 0x0AD0 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         NameplateCenter;                                  		// 0x0AE0 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         NameplateBubble;                                  		// 0x0AF0 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         NameplateRight;                                   		// 0x0B00 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BlackBackgroundColor;                             		// 0x0B10 (0x0010) [0x0000000000000000]              
	struct FString                                     WarmupString;                                     		// 0x0B20 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     WaitingForMatch;                                  		// 0x0B30 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PressFireToBegin;                                 		// 0x0B40 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpectatorMessage;                                 		// 0x0B50 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DeadMessage;                                      		// 0x0B60 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FireToRespawnMessage;                             		// 0x0B70 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHaveWon;                                       		// 0x0B80 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouHaveLost;                                      		// 0x0B90 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PlaceMarks[ 0x4 ];                                		// 0x0BA0 (0x0040) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FTextureCoordinates                         PawnDollBGCoords;                                 		// 0x0BE0 (0x0010) [0x0000000000000000]              
	float                                              DollOffsetX;                                      		// 0x0BF0 (0x0004) [0x0000000000000000]              
	float                                              DollOffsetY;                                      		// 0x0BF4 (0x0004) [0x0000000000000000]              
	float                                              DollWidth;                                        		// 0x0BF8 (0x0004) [0x0000000000000000]              
	float                                              DollHeight;                                       		// 0x0BFC (0x0004) [0x0000000000000000]              
	float                                              VestX;                                            		// 0x0C00 (0x0004) [0x0000000000000000]              
	float                                              VestY;                                            		// 0x0C04 (0x0004) [0x0000000000000000]              
	float                                              VestWidth;                                        		// 0x0C08 (0x0004) [0x0000000000000000]              
	float                                              VestHeight;                                       		// 0x0C0C (0x0004) [0x0000000000000000]              
	float                                              ThighX;                                           		// 0x0C10 (0x0004) [0x0000000000000000]              
	float                                              ThighY;                                           		// 0x0C14 (0x0004) [0x0000000000000000]              
	float                                              ThighWidth;                                       		// 0x0C18 (0x0004) [0x0000000000000000]              
	float                                              ThighHeight;                                      		// 0x0C1C (0x0004) [0x0000000000000000]              
	float                                              HelmetX;                                          		// 0x0C20 (0x0004) [0x0000000000000000]              
	float                                              HelmetY;                                          		// 0x0C24 (0x0004) [0x0000000000000000]              
	float                                              HelmetWidth;                                      		// 0x0C28 (0x0004) [0x0000000000000000]              
	float                                              HelmetHeight;                                     		// 0x0C2C (0x0004) [0x0000000000000000]              
	float                                              BootX;                                            		// 0x0C30 (0x0004) [0x0000000000000000]              
	float                                              BootY;                                            		// 0x0C34 (0x0004) [0x0000000000000000]              
	float                                              BootWidth;                                        		// 0x0C38 (0x0004) [0x0000000000000000]              
	float                                              BootHeight;                                       		// 0x0C3C (0x0004) [0x0000000000000000]              
	float                                              THeight;                                          		// 0x0C40 (0x0004) [0x0000000000000000]              
	float                                              TX;                                               		// 0x0C44 (0x0004) [0x0000000000000000]              
	float                                              TY;                                               		// 0x0C48 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                AmmoBarColor;                                     		// 0x0C4C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                RedLinearColor;                                   		// 0x0C5C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                BlueLinearColor;                                  		// 0x0C6C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                DMLinearColor;                                    		// 0x0C7C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                WhiteLinearColor;                                 		// 0x0C8C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                GoldLinearColor;                                  		// 0x0C9C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                SilverLinearColor;                                		// 0x0CAC (0x0010) [0x0000000000000002]              ( CPF_Const )
	class UTexture2D*                                  BkgTexture;                                       		// 0x0CBC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         BkgTexCoords;                                     		// 0x0CC4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      BkgTexColor;                                      		// 0x0CD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45205 ];

		return pClassPointer;
	};

	void DisplayConsoleMessages ( );
	void DisplayLeaderBoard ( struct FVector2D pos );
	void DrawNameplateBackground ( struct FVector2D pos, float WordWidth, struct FLinearColor NameplateColor, float WordHeight );
	void DisplayFragCount ( struct FVector2D pos );
	void DisplayScoring ( );
	void DisplayPowerups ( );
	void DisplayAmmo ( class AUTWeapon* Weapon );
	void DisplayPawnDoll ( );
	void DisplayClock ( );
	void DisplayHUDMessage ( struct FString Message, float XOffsetPct, float YOffsetPct );
	void DisplayPortrait ( float DeltaTime );
	void HidePortrait ( );
	void ShowPortrait ( class AUTPlayerReplicationInfo* ShowPRI, float PortraitDuration, unsigned long bOverrideCurrentSpeaker );
	class UFont* GetFontSizeIndex ( int FontSize );
	struct FString FormatTime ( int Seconds );
	void DrawBarGraph ( float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas, struct FColor BarColor, struct FColor BackColor );
	void DrawHealth ( float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas, unsigned char Alpha );
	void DrawBeaconBackground ( float X, float Y, float Width, float Height, struct FLinearColor DrawColor, class UCanvas* DrawCanvas );
	void DrawBackground ( float X, float Y, float Width, float Height, struct FLinearColor DrawColor, class UCanvas* DrawCanvas );
	void DisplayDamage ( );
	void UpdateDamage ( );
	void FlashDamage ( float FlashPosition );
	void DisplayHit ( struct FVector HitDir, int Damage, class UClass* DamageType );
	void GetTeamColor ( int TeamIndex, struct FLinearColor* ImageColor, struct FColor* TextColor );
	void StartMusic ( );
	class UUIInteraction* GetUIController ( class ULocalPlayer** LP );
	void DrawAIOverlays ( );
	void DisplayMap ( );
	void DisplayWeaponBar ( );
	void DrawPostGameHud ( );
	void DrawLivingHud ( );
	void DisplayLocalMessages ( );
	void DrawMicIcon ( );
	void DrawGameHud ( );
	void ShowSquadRoutes ( );
	void ShowAllAI ( );
	void DrawHUD ( );
	void eventPostRender ( );
	void DrawMessageText ( struct FHudLocalizedMessage LocalMessage, float ScreenX, float ScreenY );
	void GetScreenCoords ( float PosY, float* ScreenX, float* ScreenY, struct FHudLocalizedMessage* InMessage );
	struct FVector2D ResolveHUDPosition ( struct FVector2D Position, float Width, float Height );
	void Message ( class APlayerReplicationInfo* PRI, struct FString msg, struct FName MsgType, float Lifetime );
	void NotifyBindPostProcessEffects ( );
	void PostBeginPlay ( );
	void ShrinkHUD ( );
	void GrowHUD ( );
	void SetDisplayedOrders ( struct FString OrderText );
	void DrawTileCentered ( class UTexture2D* Tex, float XL, float YL, float U, float V, float UL, float VL, struct FLinearColor C );
};

UClass* AUTHUD::pClassPointer = NULL;

// Class UTGame.UTCarriedObject
// 0x011C (0x03F8 - 0x02DC)
class AUTCarriedObject : public AUDKCarriedObject
{
public:
	unsigned long                                      bLastSecondSave : 1;                              		// 0x02DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLeavingDroppedState : 1;                         		// 0x02DC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseTeamColorForIcon : 1;                         		// 0x02DC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              TossDistance;                                     		// 0x02E0 (0x0004) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    HolderPRI;                                        		// 0x02E4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class APawn*                                       Holder;                                           		// 0x02EC (0x0008) [0x0000000000000000]              
	float                                              TakenTime;                                        		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              MaxDropTime;                                      		// 0x02F8 (0x0004) [0x0000000000000000]              
	class AController*                                 FirstTouch;                                       		// 0x02FC (0x0008) [0x0000000000000000]              
	TArray< class AController* >                       Assists;                                          		// 0x0304 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MapSize;                                          		// 0x0314 (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0318 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  IconTexture;                                      		// 0x0328 (0x0008) [0x0000000000000000]              
	struct FName                                       GameObjBone3P;                                    		// 0x0330 (0x0008) [0x0000000000000000]              
	struct FVector                                     GameObjOffset3P;                                  		// 0x0338 (0x000C) [0x0000000000000000]              
	struct FRotator                                    GameObjRot3P;                                     		// 0x0344 (0x000C) [0x0000000000000000]              
	struct FVector                                     GameObjOffset1P;                                  		// 0x0350 (0x000C) [0x0000000000000000]              
	struct FRotator                                    GameObjRot1P;                                     		// 0x035C (0x000C) [0x0000000000000000]              
	class USoundCue*                                   PickupSound;                                      		// 0x0368 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DroppedSound;                                     		// 0x0370 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   ReturnedSound;                                    		// 0x0378 (0x0008) [0x0000000000000000]              
	class APawn*                                       OldHolder;                                        		// 0x0380 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        FlagLight;                                        		// 0x0388 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              DefaultRadius;                                    		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              DefaultHeight;                                    		// 0x0394 (0x0004) [0x0000000000000000]              
	TArray< struct FObjectiveAnnouncementInfo >        NeedToPickUpAnnouncements;                        		// 0x0398 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HighlightScale;                                   		// 0x03A8 (0x0004) [0x0000000000000000]              
	float                                              MaxHighlightScale;                                		// 0x03AC (0x0004) [0x0000000000000000]              
	float                                              HighlightSpeed;                                   		// 0x03B0 (0x0004) [0x0000000000000000]              
	float                                              LastHighlightUpdate;                              		// 0x03B4 (0x0004) [0x0000000000000000]              
	float                                              LastFlagSeeTime;                                  		// 0x03B8 (0x0004) [0x0000000000000000]              
	int                                                LastSeeMessageIndex;                              		// 0x03BC (0x0004) [0x0000000000000000]              
	struct FLinearColor                                RedColor;                                         		// 0x03C0 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BlueColor;                                        		// 0x03D0 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                GoldColor;                                        		// 0x03E0 (0x0010) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PickUpWaveForm;                                   		// 0x03F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45211 ];

		return pClassPointer;
	};

	void CheckPain ( );
	void CheckFit ( );
	void AutoSendHome ( );
	void CheckTouching ( );
	void LogDropped ( class AController* EventInstigator );
	void LogReturned ( class AController* EventInstigator );
	void LogTaken ( class AController* EventInstigator );
	class AUDKGameObjective* GetKismetEventObjective ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventNotReachableBy ( class APawn* P );
	void ClientReturnedHome ( );
	void eventReplicatedEvent ( struct FName VarName );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	bool ValidHolder ( class AActor* Other );
	class AActor* Position ( );
	void ClearHolder ( );
	void CalcSetHome ( );
	void BroadcastTakenDroppedMessage ( class AController* EventInstigator );
	void BroadcastTakenFromBaseMessage ( class AController* EventInstigator );
	void BroadcastDroppedMessage ( class AController* EventInstigator );
	void BroadcastReturnedMessage ( );
	void KismetSendHome ( );
	void SendHome ( class AController* Returner );
	void Drop ( class AController* Killer );
	void Score ( );
	void SendFlagMessage ( class AController* C );
	void SetHolder ( class AController* C );
	void RenderEnemyMapIcon ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, class AUTGameObjective* NearbyObjective );
	void RenderMapIcon ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner );
	void DrawIcon ( class UCanvas* Canvas, struct FVector IconLocation, float IconWidth, float IconAlpha );
	class UTexture2D* GetIconTexture ( );
	void HighlightOnMinimap ( int Switch );
	bool ShouldMinimapRenderFor ( class APlayerController* PC );
	bool FlagUse ( class AController* C );
	void PostBeginPlay ( );
};

UClass* AUTCarriedObject::pClassPointer = NULL;

// Class UTGame.UTPickupFactory
// 0x0060 (0x04F0 - 0x0490)
class AUTPickupFactory : public AUDKPickupFactory
{
public:
	class AController*                                 TeamOwner[ 0x4 ];                                 		// 0x0490 (0x0020) [0x0000000000000000]              
	class USoundCue*                                   RespawnSound;                                     		// 0x04B0 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             PickupReadySound;                                 		// 0x04B8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x04C0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       PickupStatName;                                   		// 0x04C8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bHasLocationSpeech : 1;                           		// 0x04D0 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class USoundNodeWave* >                    LocationSpeech;                                   		// 0x04D4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastSeekNotificationTime;                         		// 0x04E4 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      PickUpWaveForm;                                   		// 0x04E8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45367 ];

		return pClassPointer;
	};

	void PickedUpBy ( class APawn* P );
	void eventSetInitialState ( );
	void SetPickupHidden ( );
	void SetPickupVisible ( );
	void eventInitPickupMeshEffects ( );
	struct FName GetPickupStatName ( );
	void SetPickupMesh ( );
	void StartPulse ( struct FLinearColor TargetEmissive );
	bool StopsProjectile ( class AProjectile* P );
	void RespawnEffect ( );
	void UpdateHUD ( class AUTHUD* H );
	bool ShouldCamp ( class AUTBot* B, float MaxWait );
	void ReplicatedEvent ( struct FName VarName );
	void ShutDown ( );
	void DisablePickup ( );
	void SetResOut ( );
	void PostBeginPlay ( );
};

UClass* AUTPickupFactory::pClassPointer = NULL;

// Class UTGame.UTWeaponPickupFactory
// 0x0028 (0x0518 - 0x04F0)
class AUTWeaponPickupFactory : public AUTPickupFactory
{
public:
	class UClass*                                      WeaponPickupClass;                                		// 0x04F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bWeaponStay : 1;                                  		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsActive : 1;                                    		// 0x04F8 (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystemComponent*                    BaseGlow;                                         		// 0x04FC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              WeaponPickupScaling;                              		// 0x0504 (0x0004) [0x0000000000000000]              
	TArray< struct FPawnToucher >                      Customers;                                        		// 0x0508 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45366 ];

		return pClassPointer;
	};

	void NotifyLocalPlayerDead ( class APlayerController* PC );
	void ShowHidden ( );
	void ShowActive ( );
	void SpawnCopyFor ( class APawn* Recipient );
	void PickedUpBy ( class APawn* P );
	bool AllowPickup ( class AUTBot* Bot );
	bool HasCustomer ( class APawn* P );
	bool AddCustomer ( class APawn* P );
	void StartSleeping ( );
	void SetWeaponStay ( );
	bool CheckForErrors ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetPickupMesh ( );
	void SetPickupHidden ( );
	void SetPickupVisible ( );
	void InitializePickup ( );
};

UClass* AUTWeaponPickupFactory::pClassPointer = NULL;

// Class UTGame.UTWeaponLocker
// 0x00C4 (0x05B4 - 0x04F0)
class AUTWeaponLocker : public AUTPickupFactory
{
public:
	TArray< struct FWeaponEntry >                      Weapons;                                          		// 0x04F0 (0x0010) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FReplacementWeaponEntry                     ReplacementWeapons[ 0x6 ];                        		// 0x0500 (0x0048) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FVector >                           LockerPositions;                                  		// 0x0548 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LockerString;                                     		// 0x0558 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FPawnToucher >                      Customers;                                        		// 0x0568 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsActive : 1;                                    		// 0x0578 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerNearby : 1;                                		// 0x0578 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bScalingUp : 1;                                   		// 0x0578 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              CurrentWeaponScaleX;                              		// 0x057C (0x0004) [0x0000000000000000]              
	float                                              ProximityDistanceSquared;                         		// 0x0580 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    AmbientEffect;                                    		// 0x0584 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ProximityEffect;                                  		// 0x058C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             InactiveEffectTemplate;                           		// 0x0594 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ActiveEffectTemplate;                             		// 0x059C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             WeaponSpawnEffectTemplate;                        		// 0x05A4 (0x0008) [0x0000000000000000]              
	float                                              ScaleRate;                                        		// 0x05AC (0x0004) [0x0000000000000000]              
	float                                              NextProximityCheckTime;                           		// 0x05B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45369 ];

		return pClassPointer;
	};

	void ShowHidden ( );
	void DestroyWeapons ( );
	void eventSetPlayerNearby ( class APlayerController* PC, unsigned long bNewPlayerNearby, unsigned long bPlayEffects );
	void NotifyLocalPlayerDead ( class APlayerController* PC );
	void ShowActive ( );
	void InitializePickup ( );
	float DetourWeight ( class APawn* Other, float PathWeight );
	float BotDesireability ( class APawn* Bot, class AController* C );
	struct FString GetHumanReadableName ( );
	void Reset ( );
	void ReplaceWeapon ( int Index, class UClass* NewWeaponClass );
	void eventReplicatedEvent ( struct FName VarName );
	void InitializeWeapons ( );
	void PostBeginPlay ( );
	bool HasCustomer ( class APawn* P );
	bool AddCustomer ( class APawn* P );
	bool ShouldCamp ( class AUTBot* B, float MaxWait );
	void eventSetInitialState ( );
};

UClass* AUTWeaponLocker::pClassPointer = NULL;

// Class UTGame.UTMusicManager
// 0x0070 (0x02FC - 0x028C)
class AUTMusicManager : public AInfo
{
public:
	float                                              MusicStartTime;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	int                                                LastBeat;                                         		// 0x0290 (0x0004) [0x0000000000000000]              
	float                                              CurrTempo;                                        		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              CurrFadeFactor;                                   		// 0x0298 (0x0004) [0x0000000000000000]              
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x029C (0x0008) [0x0000000000000000]              
	float                                              MusicVolume;                                      		// 0x02A4 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              LastActionEventTime;                              		// 0x02A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPendingAction : 1;                               		// 0x02AC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StingerVolumeMultiplier;                          		// 0x02B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      CurrentState;                                     		// 0x02B4 (0x0001) [0x0000000000000000]              
	int                                                PendingEvent;                                     		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              PendingEventPlayTime;                             		// 0x02BC (0x0004) [0x0000000000000000]              
	float                                              PendingEventDelay;                                		// 0x02C0 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             CurrentTrack;                                     		// 0x02C4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             MusicTracks[ 0x6 ];                               		// 0x02CC (0x0030) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45417 ];

		return pClassPointer;
	};

	void ChangeTrack ( unsigned char NewState );
	void Tick ( float DeltaTime );
	void ProcessMusicEvent ( );
	bool AlreadyInActionMusic ( );
	void MusicEvent ( int NewEventIndex );
	class UAudioComponent* CreateNewTrack ( class USoundCue* MusicCue );
	void IntroFinished ( class UAudioComponent* AC );
	void StartMusic ( );
	void eventPostBeginPlay ( );
};

UClass* AUTMusicManager::pClassPointer = NULL;

// Class UTGame.UTDamageType
// 0x00EC (0x017C - 0x0090)
class UUTDamageType : public UDamageType
{
public:
	struct FLinearColor                                DamageBodyMatColor;                               		// 0x0090 (0x0010) [0x0000000000000000]              
	float                                              DamageOverlayTime;                                		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              DeathOverlayTime;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              XRayEffectTime;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCausesBlood : 1;                                 		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLocationalHit : 1;                               		// 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAlwaysGibs : 1;                                  		// 0x00AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeverGibs : 1;                                   		// 0x00AC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDirectDamage : 1;                                		// 0x00AC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bSeversHead : 1;                                  		// 0x00AC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCauseConvulsions : 1;                            		// 0x00AC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bUseTearOffMomentum : 1;                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bThrowRagdoll : 1;                                		// 0x00AC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bLeaveBodyEffect : 1;                             		// 0x00AC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bBulletHit : 1;                                   		// 0x00AC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bVehicleHit : 1;                                  		// 0x00AC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bSelfDestructDamage : 1;                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bUseDamageBasedDeathEffects : 1;                  		// 0x00AC (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bSpecialDeathCamera : 1;                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bAnimateHipsForDeathAnim : 1;                     		// 0x00AC (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bComplainFriendlyFire : 1;                        		// 0x00AC (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bOverrideHitEffectColor : 1;                      		// 0x00AC (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bHeadGibCamera : 1;                               		// 0x00AC (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bCausesBloodSplatterDecals : 1;                   		// 0x00AC (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bDontHurtInstigator : 1;                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00100000] 
	float                                              GibPerterbation;                                  		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                GibThreshold;                                     		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                MinAccumulateDamageThreshold;                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                AlwaysGibDamageThreshold;                         		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              PhysicsTakeHitMomentumThreshold;                  		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageWeaponClass;                                		// 0x00C4 (0x0008) [0x0000000000000000]              
	int                                                DamageWeaponFireMode;                             		// 0x00CC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             GibTrail;                                         		// 0x00D0 (0x0008) [0x0000000000000000]              
	class UClass*                                      DeathCameraEffectVictim;                          		// 0x00D8 (0x0008) [0x0000000000000000]              
	class UClass*                                      DeathCameraEffectInstigator;                      		// 0x00E0 (0x0008) [0x0000000000000000]              
	struct FName                                       DeathAnim;                                        		// 0x00E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathAnimRate;                                    		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotorDecayTime;                                   		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StopAnimAfterDamageInterval;                      		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraAnim*                                 DamageCameraAnim;                                 		// 0x00FC (0x0008) [0x0000000000000000]              
	float                                              NodeDamageScaling;                                		// 0x0104 (0x0004) [0x0000000000000000]              
	struct FName                                       KillStatsName;                                    		// 0x0108 (0x0008) [0x0000000000000000]              
	struct FName                                       DeathStatsName;                                   		// 0x0110 (0x0008) [0x0000000000000000]              
	struct FName                                       SuicideStatsName;                                 		// 0x0118 (0x0008) [0x0000000000000000]              
	int                                                RewardCount;                                      		// 0x0120 (0x0004) [0x0000000000000000]              
	class UClass*                                      RewardAnnouncementClass;                          		// 0x0124 (0x0008) [0x0000000000000000]              
	int                                                RewardAnnouncementSwitch;                         		// 0x012C (0x0004) [0x0000000000000000]              
	struct FName                                       RewardEvent;                                      		// 0x0130 (0x0008) [0x0000000000000000]              
	int                                                CustomTauntIndex;                                 		// 0x0138 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                HitEffectColor;                                   		// 0x013C (0x0010) [0x0000000000000000]              
	struct FString                                     DeathString;                                      		// 0x014C (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FemaleSuicide;                                    		// 0x015C (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MaleSuicide;                                      		// 0x016C (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45436 ];

		return pClassPointer;
	};

	class UClass* GetDeathCameraEffectVictim ( class AUTPawn* UTP );
	class UClass* GetDeathCameraEffectInstigator ( class AUTPawn* UTP );
	void CalcDeathCamera ( class AUTPawn* P, float DeltaTime, struct FVector* CameraLocation, struct FRotator* CameraRotation, float* CameraFOV );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	void SpawnExtraGibEffects ( class AUTGib* TheGib );
	void CreateDeathGoreChunks ( class AUTPawn* ThePawn, class UClass* TheDamageType, struct FVector HitLocation, struct FTraceHitInfo* HitInfo );
	void BoneBreaker ( class AUTPawn* ThePawn, class USkeletalMeshComponent* TheMesh, struct FVector Impulse, struct FVector HitLocation, struct FName BoneName );
	void CreateDeathSkeleton ( class AUTPawn* ThePawn, class UClass* TheDamageType, struct FVector HitLocation, struct FTraceHitInfo* HitInfo );
	void DoCustomDamageEffects ( class AUTPawn* ThePawn, class UClass* TheDamageType, struct FVector HitLocation, struct FTraceHitInfo* HitInfo );
	bool ShouldGib ( class AUTPawn* DeadPawn );
	void SpawnGibEffects ( class AUTGib* Gib );
	void PawnTornOff ( class AUTPawn* DeadPawn );
	void ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn );
	struct FName GetStatsName ( struct FName StatType );
	void IncrementSuicides ( class AUTPlayerReplicationInfo* KilledPRI );
	void IncrementDeaths ( class AUTPlayerReplicationInfo* KilledPRI );
	int IncrementKills ( class AUTPlayerReplicationInfo* KillerPRI );
	float GetHitEffectDuration ( class APawn* P, float Damage );
	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
	struct FString SuicideMessage ( class APlayerReplicationInfo* Victim );
	struct FString DeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim );
};

UClass* UUTDamageType::pClassPointer = NULL;

// Class UTGame.UTSeqAct_PlayCameraAnim
// 0x0018 (0x0168 - 0x0150)
class UUTSeqAct_PlayCameraAnim : public USequenceAction
{
public:
	class UCameraAnim*                                 AnimToPlay;                                       		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rate;                                             		// 0x0160 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IntensityScale;                                   		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45475 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* UUTSeqAct_PlayCameraAnim::pClassPointer = NULL;

// Class UTGame.UTSeqAct_StopCameraAnim
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_StopCameraAnim : public USequenceAction
{
public:
	unsigned long                                      bStopImmediately : 1;                             		// 0x0150 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45483 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* UUTSeqAct_StopCameraAnim::pClassPointer = NULL;

// Class UTGame.UTInventoryManager
// 0x0028 (0x02E0 - 0x02B8)
class AUTInventoryManager : public AInventoryManager
{
public:
	unsigned long                                      bInfiniteAmmo : 1;                                		// 0x02B8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	TArray< struct FAmmoStore >                        AmmoStorage;                                      		// 0x02BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AWeapon*                                     PreviousWeapon;                                   		// 0x02CC (0x0008) [0x0000000000000000]              
	class AUTWeapon*                                   PendingSwitchWeapon;                              		// 0x02D4 (0x0008) [0x0000000000000000]              
	float                                              LastAdjustWeaponTime;                             		// 0x02DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45487 ];

		return pClassPointer;
	};

	void SwitchToBestWeapon ( unsigned long bForceADifferentWeapon );
	void DrawHUD ( class AHUD* H );
	void SwitchToPreviousWeapon ( );
	void ChangedWeapon ( );
	class AInventory* HasInventoryOfClass ( class UClass* InvClass );
	void AddAmmoToWeapon ( int AmountToAdd, class UClass* WeaponClassToAddTo );
	bool NeedsAmmo ( class UClass* TestWeapon );
	void RemoveFromInventory ( class AInventory* ItemToRemove );
	void DiscardInventory ( );
	bool AddInventory ( class AInventory* NewItem, unsigned long bDoNotActivate );
	void CheckSwitchTo ( class AUTWeapon* NewWeapon );
	void RetrySwitchTo ( class AUTWeapon* NewWeapon );
	void ProcessRetrySwitch ( );
	class AInventory* CreateInventory ( class UClass* NewInventoryItemClass, unsigned long bDoNotActivate );
	void ClientWeaponSet ( class AWeapon* NewWeapon, unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void SetPendingWeapon ( class AWeapon* DesiredWeapon );
	void ServerSetCurrentWeapon ( class AWeapon* DesiredWeapon );
	void ClientSetCurrentWeapon ( class AWeapon* DesiredWeapon );
	void SetCurrentWeapon ( class AWeapon* DesiredWeapon );
	void AllAmmo ( unsigned long bAmmoForSuperWeapons );
	void NextWeapon ( );
	void PrevWeapon ( );
	void AdjustWeapon ( int NewOffset );
	void SwitchWeapon ( unsigned char NewGroup );
	void GetWeaponList ( unsigned long bFilter, int GroupFilter, unsigned long bNoEmpty, TArray< class AUTWeapon* >* WeaponList );
	void OwnerEvent ( struct FName EventName );
	void ClientSyncWeapon ( class AWeapon* NewWeapon );
};

UClass* AUTInventoryManager::pClassPointer = NULL;

// Class UTGame.UTTeamHUD
// 0x0038 (0x0D10 - 0x0CD8)
class AUTTeamHUD : public AUTHUD
{
public:
	unsigned long                                      bShowDirectional : 1;                             		// 0x0CD8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LastScores[ 0x2 ];                                		// 0x0CDC (0x0008) [0x0000000000000000]              
	int                                                ScoreTransitionTime[ 0x2 ];                       		// 0x0CE4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   TeamIconCenterPoints[ 0x2 ];                      		// 0x0CEC (0x0010) [0x0000000000000000]              
	float                                              LeftTeamPulseTime;                                		// 0x0CFC (0x0004) [0x0000000000000000]              
	float                                              RightTeamPulseTime;                               		// 0x0D00 (0x0004) [0x0000000000000000]              
	float                                              OldLeftScore;                                     		// 0x0D04 (0x0004) [0x0000000000000000]              
	float                                              OldRightScore;                                    		// 0x0D08 (0x0004) [0x0000000000000000]              
	float                                              TeamScaleModifier;                                		// 0x0D0C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45611 ];

		return pClassPointer;
	};

	void DisplayDirectionIndicator ( unsigned char TeamIndex, struct FVector2D pos, class AActor* destActor, float DestScale );
	void DisplayTeamLogos ( unsigned char TeamIndex, struct FVector2D pos, float DestScale );
	class AActor* GetDirectionalDest ( unsigned char TeamIndex );
	int GetTeamScore ( unsigned char TeamIndex );
	void DisplayTeamScore ( );
	void DisplayScoring ( );
};

UClass* AUTTeamHUD::pClassPointer = NULL;

// Class UTGame.UTCTFHUD
// 0x0012 (0x0D22 - 0x0D10)
class AUTCTFHUD : public AUTTeamHUD
{
public:
	class AUTCTFBase*                                  FlagBases[ 0x2 ];                                 		// 0x0D10 (0x0010) [0x0000000000000000]              
	unsigned char                                      FlagStates[ 0x2 ];                                		// 0x0D20 (0x0002) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45610 ];

		return pClassPointer;
	};

	class AActor* GetDirectionalDest ( unsigned char TeamIndex );
	void DisplayTeamLogos ( unsigned char TeamIndex, struct FVector2D pos, float DestScale );
	void Timer ( );
	void PostBeginPlay ( );
};

UClass* AUTCTFHUD::pClassPointer = NULL;

// Class UTGame.UTWeaponKillRewardMessage
// 0x0030 (0x00B8 - 0x0088)
class UUTWeaponKillRewardMessage : public UUTLocalMessage
{
public:
	struct FString                                     RewardString[ 0x2 ];                              		// 0x0088 (0x0020) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              RewardSounds[ 0x2 ];                              		// 0x00A8 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45686 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTWeaponKillRewardMessage::pClassPointer = NULL;

// Class UTGame.UTAchievementsBase
// 0x0050 (0x00B0 - 0x0060)
class UUTAchievementsBase : public UObject
{
public:
	TArray< struct FAchievementData >                  AchievementsArray;                                		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      AchievementStatsReadClass;                        		// 0x0070 (0x0008) [0x0000000000000000]              
	class UClass*                                      AchievementStatsWriteClass;                       		// 0x0078 (0x0008) [0x0000000000000000]              
	TArray< struct FAchievementValue >                 AchievementValues;                                		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInitializedAchievementValues : 1;                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FAchievementValue >                 DeferredAchievementUpdates;                       		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineStatsRead*                            AchievementStatsRead;                             		// 0x00A4 (0x0008) [0x0000000000000000]              
	int                                                ReadStatsCount;                                   		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45761 ];

		return pClassPointer;
	};

	void FlushAchievementStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void WriteAchievementStats ( );
	void ReadAchievementStatsComplete ( unsigned long bWasSuccessful );
	void ReadAchievementStats ( );
	bool GetAchievementUnlockType ( int AchievementId, int* UnlockType, unsigned char* bUnlockEnabled );
	bool GetAchievementProgressCriteria ( int AchievementId, int* ProgressCriteria, unsigned char* bProgressEnabled );
	bool GetAchievementUnlockCriteria ( int AchievementId, int* UnlockCriteria );
	bool SetAchievementValue ( int AchievementId, int Value );
	bool GetAchievementValue ( int AchievementId, int* Value );
	bool UpdateAchievementByteCount ( int AchievementId, int Counter );
	bool UpdateAchievementCount ( int AchievementId, int Count, int* Progress, int* MaxProgress, unsigned char* bProgressEnabled );
	bool UpdateAchievementBitMask ( int AchievementId, int BitMask, int* Progress, int* MaxProgress, unsigned char* bProgressEnabled );
	void DisplayAchievementProgress ( int AchievementId, int Progress, int MaxProgress );
	void AchievementDone ( unsigned long bWasSuccessful );
	void UnlockAchievement ( int AchievementId );
	void UpdateAchievement ( int AchievementId, int Value, unsigned long bSkipCommit );
	void Cleanup ( );
	void Initialize ( );
};

UClass* UUTAchievementsBase::pClassPointer = NULL;

// Class UTGame.UTAchievements
// 0x0000 (0x00B0 - 0x00B0)
class UUTAchievements : public UUTAchievementsBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45760 ];

		return pClassPointer;
	};

	void UpdateSpiceOfLife ( int MutatorBitMask );
};

UClass* UUTAchievements::pClassPointer = NULL;

// Class UTGame.UTLeaderboardRead
// 0x0000 (0x00C0 - 0x00C0)
class UUTLeaderboardRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45769 ];

		return pClassPointer;
	};

	int GetScore ( struct FUniqueNetId Player );
};

UClass* UUTLeaderboardRead::pClassPointer = NULL;

// Class UTGame.UTAnnouncer
// 0x0058 (0x02E4 - 0x028C)
class AUTAnnouncer : public AInfo
{
public:
	unsigned char                                      AnnouncerLevel;                                   		// 0x028C (0x0001) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	class UClass*                                      PlayingAnnouncementClass;                         		// 0x0290 (0x0008) [0x0000000000000000]              
	int                                                PlayingAnnouncementIndex;                         		// 0x0298 (0x0004) [0x0000000000000000]              
	class AUTQueuedAnnouncement*                       Queue;                                            		// 0x029C (0x0008) [0x0000000000000000]              
	class AUTPlayerController*                         PlayerOwner;                                      		// 0x02A4 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   AnnouncerSoundCue;                                		// 0x02AC (0x0008) [0x0000000000000000]              
	struct FString                                     CustomAnnouncerSoundCue;                          		// 0x02B4 (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	class USoundCue*                                   UTVoiceSoundCue;                                  		// 0x02C4 (0x0008) [0x0000000000000000]              
	struct FString                                     UTVoiceSoundCueSoundCue;                          		// 0x02CC (0x0010) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	class UAudioComponent*                             CurrentAnnouncementComponent;                     		// 0x02DC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45787 ];

		return pClassPointer;
	};

	void PlayAnnouncement ( class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	void AnnouncementFinished ( class UAudioComponent* AC );
	void PlayAnnouncementNow ( class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	void PlayNextAnnouncement ( );
	void PostBeginPlay ( );
	void Destroyed ( );
};

UClass* AUTAnnouncer::pClassPointer = NULL;

// Class UTGame.GFxUIView
// 0x0004 (0x00A4 - 0x00A0)
class UGFxUIView : public UGFxObject
{
public:
	unsigned long                                      bRequiresNetwork : 1;                             		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45796 ];

		return pClassPointer;
	};

	void ConsoleCommand ( struct FString Cmd, unsigned long bWriteToLog );
	int GetPlayerControllerId ( int PlayerIndex );
	int GetPlayerIndex ( );
	struct FString GetCommonOptionsURL ( );
	bool eventIsLoggedIn ( int ControllerId, unsigned long bRequireOnlineLogin );
	struct FString GetPlayerName ( );
	bool HasLinkConnection ( );
	class AUDKPlayerController* GetUDKPlayerOwner ( int PlayerIndex );
	class ULocalPlayer* GetPlayerOwner ( int PlayerIndex );
};

UClass* UGFxUIView::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_View
// 0x0010 (0x00B4 - 0x00A4)
class UGFxUDKFrontEnd_View : public UGFxUIView
{
public:
	class UGFxUDKFrontEnd*                             MenuManager;                                      		// 0x00A4 (0x0008) [0x0000000000000000]              
	struct FName                                       ViewName;                                         		// 0x00AC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45795 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnEscapeKeyPress ( );
	void MoveBackImpl ( );
	void Select_Back ( struct FEventData ev );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnViewActivated ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_View::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_Screen
// 0x0080 (0x0134 - 0x00B4)
class UGFxUDKFrontEnd_Screen : public UGFxUDKFrontEnd_View
{
public:
	struct FString                                     ViewTitle;                                        		// 0x00B4 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              BackBtn;                                          		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleMC;                                          		// 0x00CC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FooterMC;                                         		// 0x00D4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  LogoMC;                                           		// 0x00DC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HelpTxt;                                          		// 0x00E4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoTxt;                                          		// 0x00EC (0x0008) [0x0000000000000000]              
	struct FString                                     AcceptButtonHelpText;                             		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelButtonHelpText;                             		// 0x0104 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AcceptButtonImage;                                		// 0x0114 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelButtonImage;                                		// 0x0124 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45794 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void UpdateHelpButtonImages ( );
	void FocusIn_BackButton ( struct FEventData ev );
};

UClass* UGFxUDKFrontEnd_Screen::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_JoinGame
// 0x00F0 (0x0224 - 0x0134)
class UGFxUDKFrontEnd_JoinGame : public UGFxUDKFrontEnd_Screen
{
public:
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                  		// 0x0134 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x013C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUTDataStore_GameSearchDM*                   SearchDMDataStore;                                		// 0x0144 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FOnlineGameSearchResult >           ServerInfoList;                                   		// 0x014C (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x015C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x0164 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x016C (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bGametypeOutdated : 1;                            		// 0x0174 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSpectate : 1;                                    		// 0x0174 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIssuedInitialQuery : 1;                          		// 0x0174 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bQueryDialogShowing : 1;                          		// 0x0174 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bJoinDialogShowing : 1;                           		// 0x0174 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bProcessingJoin : 1;                              		// 0x0174 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x0174 (0x0004) [0x0000000000000000] [0x00000040] 
	struct FName                                       SearchDSName;                                     		// 0x0178 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UGFxUDKFrontEnd_PasswordDialog*              PasswordDialog;                                   		// 0x0180 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UGFxUDKFrontEnd_JoinDialog*                  JoinDialogMC;                                     		// 0x0188 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      QueryCompletionAction;                            		// 0x0190 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ServerPassword;                                   		// 0x0194 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LastServerAdded;                                  		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x01A8 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerListMC;                                     		// 0x01B0 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              RefreshBtn;                                       		// 0x01B8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HeaderBarMC;                                      		// 0x01C0 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              FlagsHeaderBtn;                                   		// 0x01C8 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerHeaderBtn;                                  		// 0x01D0 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MapHeaderBtn;                                     		// 0x01D8 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayersHeaderBtn;                                 		// 0x01E0 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              PingHeaderBtn;                                    		// 0x01E8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FilterMatchTypeTxt;                               		// 0x01F0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FilterGameModeTxt;                                		// 0x01F8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  StatusTxt;                                        		// 0x0200 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  LoadingTickerMC;                                  		// 0x0208 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ServerCountTxt;                                   		// 0x0210 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterBtn;                                        		// 0x0218 (0x0008) [0x0000000000000000]              
	int                                                SelectedIndex;                                    		// 0x0220 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45793 ];

		return pClassPointer;
	};

	void OnGameTypeChanged ( int PlayerIndex );
	void ForceLANOption ( );
	bool OnFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void NotifyGameTypeChanged ( );
	void OnCancelSearchComplete ( unsigned long bWasSuccessful );
	void SetRefreshing ( unsigned long IsRefreshing );
	void CancelQuery ( unsigned char DesiredCancelAction );
	bool AllowJoinServer ( );
	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	void ProcessJoin ( );
	void JoinServer ( );
	void JoinServerClikListener ( struct FEventData ev );
	void SpectateServer ( struct FEventData ev );
	void OnServerListItemPress ( struct FEventData ev );
	void OnPingHeaderPress ( struct FEventData ev );
	void OnPlayersHeaderPress ( struct FEventData ev );
	void OnMapHeaderPress ( struct FEventData ev );
	void OnServerHeaderPress ( struct FEventData ev );
	void UpdateListDataProvider ( );
	void ServerFilterChangedGameType ( );
	void OnFilterButtonPress ( struct FEventData ev );
	void OnRefreshButtonPress ( struct FEventData ev );
	int GetDesiredMatchType ( );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	void OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful );
	void SubmitServerListQuery ( int PlayerIndex );
	void RefreshServerList ( int InPlayerIndex, int MaxResults );
	struct FString BuildJoinURL ( struct FString ResolvedConnectionURL );
	void UpdateServerCount ( );
	void OnPasswordDialog_OK ( struct FEventData ev );
	struct FString StripInvalidPasswordCharacters ( struct FString PasswordString, struct FString InvalidChars );
	void PromptForServerPassword ( );
	void UpdateButtonStates ( );
	void ConditionalRefreshServerList ( int PlayerIndex );
	void UpdateFilterButton ( );
	void Cleanup ( );
	void ValidateServerType ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_JoinGame::pClassPointer = NULL;

// Class UTGame.UTCheatManager
// 0x0010 (0x00B0 - 0x00A0)
class UUTCheatManager : public UGameCheatManager
{
public:
	class UClass*                                      LMC;                                              		// 0x00A0 (0x0008) [0x0000000000000000]              
	class USpeechRecognition*                          RecogObject;                                      		// 0x00A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45903 ];

		return pClassPointer;
	};

	void KillAllPawns ( class UClass* aClass );
	void TestUploadGameStats ( );
	void KillAll ( class UClass* aClass );
	void SetStickBind ( float val );
	void ShowStickBindings ( );
	void TiltIt ( unsigned long bActive );
	void LeaveADecal ( struct FVector HitLoc, struct FVector HitNorm );
	void SpawnABloodDecal ( );
	void KillOtherBots ( );
	void EditWeapon ( struct FString WhichWeapon );
	void SuicideBy ( struct FString Type, int DeathHealth );
	void RBGrav ( float NewGravityScaling );
	void KillBadGuys ( );
	void ViewBot ( );
	void FreeCamera ( );
	void Invisible ( unsigned long B );
	void AllAmmo ( );
	void PhysicsGun ( );
	void DoubleUp ( );
	void AllWeapons ( );
	void SummonV ( struct FString ClassName );
	void LMS ( int Switch );
	void LM ( struct FString MessageClassName );
	void Glow ( float F );
	void ViewFlag ( );
};

UClass* UUTCheatManager::pClassPointer = NULL;

// Class UTGame.UTPlayerInput
// 0x0009 (0x0555 - 0x054C)
class UUTPlayerInput : public UUDKPlayerInput
{
public:
	float                                              LastDuckTime;                                     		// 0x054C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHoldDuck : 1;                                    		// 0x0550 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ForcedDoubleClick;                                		// 0x0554 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45904 ];

		return pClassPointer;
	};

	void Jump ( );
	void UnDuck ( );
	void Duck ( );
};

UClass* UUTPlayerInput::pClassPointer = NULL;

// Class UTGame.DemoRecSpectator
// 0x0010 (0x0BC8 - 0x0BB8)
class ADemoRecSpectator : public AUTPlayerController
{
public:
	unsigned long                                      bFindPlayer : 1;                                  		// 0x0BB8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockRotationToViewTarget : 1;                    		// 0x0BB8 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bAutoSwitchPlayers : 1;                           		// 0x0BB8 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	class APlayerReplicationInfo*                      MyRealViewTarget;                                 		// 0x0BBC (0x0008) [0x0000000000000000]              
	float                                              AutoSwitchPlayerInterval;                         		// 0x0BC4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45905 ];

		return pClassPointer;
	};

	void UpdateRotation ( float DeltaTime );
	void eventGetPlayerViewPoint ( struct FVector* CameraLocation, struct FRotator* CameraRotation );
	void Pause ( );
	bool SetPause ( unsigned long bPause, struct FScriptDelegate CanUnpauseDelegate );
	void ClientSetRealViewTarget ( class APlayerReplicationInfo* NewTarget );
	void ServerViewSelf ( struct FViewTargetTransitionParams TransitionParams );
	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams );
	void DemoViewNextPlayer ( );
	void ViewClass ( class UClass* aClass, unsigned long bQuiet, unsigned long bCheat );
	void Slomo ( float NewTimeDilation );
	void InitPlayerReplicationInfo ( );
	void eventReceivedPlayer ( );
	void eventPostBeginPlay ( );
};

UClass* ADemoRecSpectator::pClassPointer = NULL;

// Class UTGame.ForcedDirVolume
// 0x0000 (0x0348 - 0x0348)
class AForcedDirVolume : public AUDKForcedDirectionVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45963 ];

		return pClassPointer;
	};

};

UClass* AForcedDirVolume::pClassPointer = NULL;

// Class UTGame.GFxMinimap
// 0x00F4 (0x0194 - 0x00A0)
class UGFxMinimap : public UGFxObject
{
public:
	class UGFxMinimapHud*                              HUD;                                              		// 0x00A0 (0x0008) [0x0000000000000000]              
	class AWorldInfo*                                  ThisWorld;                                        		// 0x00A8 (0x0008) [0x0000000000000000]              
	class UUTMapInfo*                                  MapInfo;                                          		// 0x00B0 (0x0008) [0x0000000000000000]              
	int                                                MapTexSize;                                       		// 0x00B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsUpdateData : 1;                             		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  PlayerIcon;                                       		// 0x00C0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CompassIcon;                                      		// 0x00C8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MapMC;                                            		// 0x00D0 (0x0008) [0x0000000000000000]              
	TArray< class UGFxObject* >                        EnemyIcons;                                       		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        MyTeamIcons;                                      		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        FlagIcons;                                        		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        ObjectiveIcons;                                   		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0118 (0x0008) MISSED OFFSET
	struct FMatrix                                     IconMatrix;                                       		// 0x0120 (0x0040) [0x0000000000000000]              
	class UGFxObject*                                  IconsRedMC;                                       		// 0x0160 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  IconsBlueMC;                                      		// 0x0168 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  IconsFlagMC;                                      		// 0x0170 (0x0008) [0x0000000000000000]              
	int                                                IconsRedCount;                                    		// 0x0178 (0x0004) [0x0000000000000000]              
	int                                                IconsBlueCount;                                   		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                IconsFlagCount;                                   		// 0x0180 (0x0004) [0x0000000000000000]              
	TArray< class AUTGameObjective* >                  Objectives;                                       		// 0x0184 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45966 ];

		return pClassPointer;
	};

	void Update ( float Scale );
	void UpdateIcons ( unsigned long bIsRedIconType, TArray< class AActor* >* Actors, TArray< class UGFxObject* >* ActorIcons );
	TArray< class UGFxObject* > GenFlagIcons ( int N );
	TArray< class UGFxObject* > GenEnemyIcons ( int N );
	TArray< class UGFxObject* > GenFriendIcons ( int N );
	void UpdateData ( );
	void Init ( class UGFxMinimapHud* H );
};

UClass* UGFxMinimap::pClassPointer = NULL;

// Class UTGame.UTMapInfo
// 0x00FC (0x0160 - 0x0064)
class UUTMapInfo : public UUDKMapInfo
{
public:
	int                                                RecommendedPlayersMin;                            		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RecommendedPlayersMax;                            		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UUTMapMusicInfo*                             MapMusicInfo;                                     		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    MapTexture;                                       		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MapTextureYaw;                                    		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MapCenter;                                        		// 0x0080 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MapExtent;                                        		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MapYaw;                                           		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotatingMiniMapRange;                             		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultMapSize;                                   		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AUTGameObjective* >                  Objectives;                                       		// 0x009C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bMapUpToDate : 1;                                 		// 0x00AC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class AActor*                                      CurrentActor;                                     		// 0x00B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      WatchedActor;                                     		// 0x00B8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UMaterial*                                   HudIcons;                                         		// 0x00C0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  HUDIconsT;                                        		// 0x00C8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MapRotX;                                          		// 0x00D0 (0x000C) [0x0000000000000000]              
	struct FVector                                     MapRotY;                                          		// 0x00DC (0x000C) [0x0000000000000000]              
	int                                                CurrentMapRotYaw;                                 		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MapMaterialInstance;                              		// 0x00EC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UMaterial*                                   MapMaterialReference;                             		// 0x00F4 (0x0008) [0x0000000000000000]              
	float                                              UseableRadius;                                    		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FVector                                     ActualMapCenter;                                  		// 0x0100 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadarWidth;                                       		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadarRange;                                       		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CenterPos;                                        		// 0x0114 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              MapScale;                                         		// 0x0120 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ColorPercent;                                     		// 0x0124 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   GreenIconMaterialInstance;                        		// 0x0128 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FTextureCoordinates                         PlayerIconCoords;                                 		// 0x0130 (0x0010) [0x0000000000000000]              
	class AUDKVehicle*                                 KeyVehicles[ 0x2 ];                               		// 0x0140 (0x0010) [0x0000000000000000]              
	TArray< class AUTGameObjective* >                  Sensors;                                          		// 0x0150 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45990 ];

		return pClassPointer;
	};

	struct FVector GetActorHudLocation ( class AActor* CActor );
	void DrawMapImage ( class UCanvas* Canvas, float X, float Y, float W, float H, float PlayerYaw, float BkgImgScaling );
	void ChangeMapRotation ( struct FRotator NewMapRotation );
	struct FVector UpdateHUDLocation ( struct FVector InLocation );
	void DrawRotatedMaterialTile ( class UCanvas* Canvas, class UMaterialInstanceConstant* M, struct FVector MapLocation, int InYaw, float XWidth, float YWidth, float XStart, float YStart, float XLength, float YLength );
	void DrawRotatedTile ( class UCanvas* Canvas, class UTexture2D* T, struct FVector MapLocation, int InYaw, float IconScale, struct FTextureCoordinates TexCoords, struct FLinearColor DrawColor );
	void AddKeyVehicle ( class AUTVehicle* V );
	void DrawMap ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, float XPos, float YPos, float Width, float Height, unsigned long bFullDetail, float AspectRatio );
	void UpdateNodes ( class AUTPlayerController* PlayerOwner );
	void RenderAdditionalInformation ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner );
	void RenderLinks ( class UCanvas* Canvas, class AUTPlayerController* PlayerOwner );
	void FindObjectives ( );
	void VerifyMapExtent ( );
};

UClass* UUTMapInfo::pClassPointer = NULL;

// Class UTGame.GFxMinimapHud
// 0x01EC (0x03D0 - 0x01E4)
class UGFxMinimapHud : public UGFxMoviePlayer
{
public:
	class AWorldInfo*                                  ThisWorld;                                        		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UGFxMinimap*                                 Minimap;                                          		// 0x01EC (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x01F4 (0x0004) [0x0000000000000000]              
	float                                              CurZoomf;                                         		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              NormalZoomf;                                      		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              MaxZoomf;                                         		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              MinZoomf;                                         		// 0x0204 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LogMC;                                            		// 0x0208 (0x0008) [0x0000000000000000]              
	TArray< struct FMessageRow >                       Messages;                                         		// 0x0210 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMessageRow >                       FreeMessages;                                     		// 0x0220 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MessageHeight;                                    		// 0x0230 (0x0004) [0x0000000000000000]              
	int                                                NumMessages;                                      		// 0x0234 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerStatsMC;                                    		// 0x0238 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TeamStatsMC;                                      		// 0x0240 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HealthTF;                                         		// 0x0248 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HealthBarMC;                                      		// 0x0250 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  AmmoCountTF;                                      		// 0x0258 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  AmmoBarMC;                                        		// 0x0260 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MaxAmmoMC;                                        		// 0x0268 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ArmorTF;                                          		// 0x0270 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ArmorMC;                                          		// 0x0278 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  VArmorMC;                                         		// 0x0280 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  VArmorTF;                                         		// 0x0288 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TimeTF;                                           		// 0x0290 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  WeaponMC;                                         		// 0x0298 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ArmorPercTF;                                      		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CenterTextMC;                                     		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CenterTextTF;                                     		// 0x02B0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ScoreBarMC[ 0x2 ];                                		// 0x02B8 (0x0010) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTF[ 0x2 ];                                   		// 0x02C8 (0x0010) [0x0000000000000000]              
	class UGFxObject*                                  FlagCarrierMC[ 0x2 ];                             		// 0x02D8 (0x0010) [0x0000000000000000]              
	class UGFxObject*                                  FlagCarrierTF[ 0x2 ];                             		// 0x02E8 (0x0010) [0x0000000000000000]              
	class UGFxObject*                                  EnemyNameTF;                                      		// 0x02F8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HitLocMC[ 0x8 ];                                  		// 0x0300 (0x0040) [0x0000000000000000]              
	class UGFxObject*                                  MultiKillN_TF;                                    		// 0x0340 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MultiKillMsg_TF;                                  		// 0x0348 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MultiKillMC;                                      		// 0x0350 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ReticuleMC;                                       		// 0x0358 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RBotMC;                                           		// 0x0360 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RRightMC;                                         		// 0x0368 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RTopMC;                                           		// 0x0370 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RLeftMC;                                          		// 0x0378 (0x0008) [0x0000000000000000]              
	class AUTVehicle*                                  LastVehicle;                                      		// 0x0380 (0x0008) [0x0000000000000000]              
	class AUTWeapon*                                   LastWeapon;                                       		// 0x0388 (0x0008) [0x0000000000000000]              
	float                                              LastHealth;                                       		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              LastArmor;                                        		// 0x0394 (0x0004) [0x0000000000000000]              
	float                                              LastVHealth;                                      		// 0x0398 (0x0004) [0x0000000000000000]              
	int                                                LastAmmoCount;                                    		// 0x039C (0x0004) [0x0000000000000000]              
	int                                                LastScore[ 0x2 ];                                 		// 0x03A0 (0x0008) [0x0000000000000000]              
	unsigned char                                      LastFlagHome[ 0x2 ];                              		// 0x03A8 (0x0002) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    LastEnemy;                                        		// 0x03AC (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    LastFlagCarrier[ 0x2 ];                           		// 0x03B4 (0x0010) [0x0000000000000000]              
	class AUTGameReplicationInfo*                      GRI;                                              		// 0x03C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsTeamHUD : 1;                                   		// 0x03CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDrawWeaponCrosshairs : 1;                        		// 0x03CC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45993 ];

		return pClassPointer;
	};

	void AddDeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Killed, class UClass* Dmg );
	struct FString GetRank ( class APlayerReplicationInfo* PRI );
	void SetCenterText ( struct FString Text );
	void ShowMultiKill ( int N, struct FString msg );
	void DisplayHit ( struct FVector HitDir, int Damage, class UClass* DamageType );
	void MinimapZoomIn ( );
	void MinimapZoomOut ( );
	void ToggleCrosshair ( unsigned long bToggle );
	void TickHud ( float DeltaTime );
	void UpdateGameHUD ( class AUTPlayerReplicationInfo* PRI );
	void AddMessage ( struct FString Type, struct FString msg );
	void RemoveMessage ( );
	void ClearStats ( unsigned long clearScores );
	struct FString FormatTime ( int Seconds );
	void Init ( class ULocalPlayer* Player );
	class UGFxObject* InitMessageRow ( );
	class UGFxObject* CreateMessageRow ( );
	void registerMiniMapView ( class UGFxMinimap* MC, float R );
};

UClass* UGFxMinimapHud::pClassPointer = NULL;

// Class UTGame.UTGFxTeamHUD
// 0x0000 (0x03D0 - 0x03D0)
class UUTGFxTeamHUD : public UGFxMinimapHud
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46003 ];

		return pClassPointer;
	};

	struct FString GetRank ( class APlayerReplicationInfo* PRI );
	void UpdateGameHUD ( class AUTPlayerReplicationInfo* PRI );
};

UClass* UUTGFxTeamHUD::pClassPointer = NULL;

// Class UTGame.UTVehicle_Hoverboard
// 0x019C (0x0EE4 - 0x0D48)
class AUTVehicle_Hoverboard : public AUTVehicle
{
public:
	class UUDKSkeletalMeshComponent*                   HoverboardMesh;                                   		// 0x0D48 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     MeshLocationOffset;                               		// 0x0D50 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MeshRotationOffset;                               		// 0x0D5C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpForceMag;                                     		// 0x0D68 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DodgeForceMag;                                    		// 0x0D6C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TrickJumpWarmupMax;                               		// 0x0D70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpCheckTraceDist;                               		// 0x0D74 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TrickSpinWarmup;                                  		// 0x0D78 (0x0004) [0x0000000000000000]              
	float                                              JumpDelay;                                        		// 0x0D7C (0x0004) [0x0000000000000000]              
	float                                              LastJumpTime;                                     		// 0x0D80 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDoHoverboardJump : 1;                            		// 0x0D84 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bIsDodging : 1;                                   		// 0x0D84 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGrabbingBoard : 1;                               		// 0x0D84 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNoVehicleEntry : 1;                              		// 0x0D84 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector                                     DodgeForce;                                       		// 0x0D88 (0x000C) [0x0000000000000000]              
	class URB_StayUprightSetup*                        LeanUprightConstraintSetup;                       		// 0x0D94 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class URB_ConstraintInstance*                      LeanUprightConstraintInstance;                    		// 0x0D9C (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class URB_ConstraintSetup*                         FootBoardConstraintSetup;                         		// 0x0DA4 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class URB_ConstraintInstance*                      LeftFootBoardConstraintInstance;                  		// 0x0DAC (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class URB_ConstraintInstance*                      RightFootBoardConstraintInstance;                 		// 0x0DB4 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USkelControlSingleBone*                      SpineTurnControl;                                 		// 0x0DBC (0x0008) [0x0000000000000000]              
	float                                              MaxTrackYaw;                                      		// 0x0DC4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentHeadYaw;                                   		// 0x0DC8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TurnLeanFactor;                                   		// 0x0DCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxLeanPitchSpeed;                                		// 0x0DD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetPitch;                                      		// 0x0DD4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URB_DistanceJointSetup*                      DistanceJointSetup;                               		// 0x0DD8 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class URB_ConstraintInstance*                      DistanceJointInstance;                            		// 0x0DE0 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             RedDustEffect;                                    		// 0x0DE8 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BlueDustEffect;                                   		// 0x0DF0 (0x0008) [0x0000000000000000]              
	struct FName                                       DustVelMagParamName;                              		// 0x0DF8 (0x0008) [0x0000000000000000]              
	struct FName                                       DustBoardHeightParamName;                         		// 0x0E00 (0x0008) [0x0000000000000000]              
	struct FName                                       DustVelParamName;                                 		// 0x0E08 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    ThrusterEffect;                                   		// 0x0E10 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       ThrusterEffectSocket;                             		// 0x0E18 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             RedThrusterEffect;                                		// 0x0E20 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BlueThrusterEffect;                               		// 0x0E28 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    RoosterEffect;                                    		// 0x0E30 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             RoosterEffectTemplate;                            		// 0x0E38 (0x0008) [0x0000000000000000]              
	float                                              RoosterTurnScale;                                 		// 0x0E40 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             RoosterNoise;                                     		// 0x0E44 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   RoosterSoundCue;                                  		// 0x0E4C (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             CurveSound;                                       		// 0x0E54 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   EngineThrustSound;                                		// 0x0E5C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   TurnSound;                                        		// 0x0E64 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   JumpSound;                                        		// 0x0E6C (0x0008) [0x0000000000000000]              
	float                                              CameraInitialOut;                                 		// 0x0E74 (0x0004) [0x0000000000000000]              
	struct FVector                                     HoverCamOffset;                                   		// 0x0E78 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    HoverCamRotOffset;                                		// 0x0E84 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VelLookAtOffset;                                  		// 0x0E90 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VelBasedCamOffset;                                		// 0x0E9C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelRollFactor;                                    		// 0x0EA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoverCamMaxVelUsed;                               		// 0x0EAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewRollRate;                                     		// 0x0EB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentViewRoll;                                  		// 0x0EB4 (0x0004) [0x0000000000000000]              
	float                                              TargetPhysicsWeight;                              		// 0x0EB8 (0x0004) [0x0000000000000000]              
	float                                              PhysWeightBlendTimeToGo;                          		// 0x0EBC (0x0004) [0x0000000000000000]              
	float                                              PhysWeightBlendTime;                              		// 0x0EC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DoubleClickMove;                                  		// 0x0EC4 (0x0001) [0x0000000000000000]              
	class UStaticMeshComponent*                        HandleMesh;                                       		// 0x0EC8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                FallingDamageRagdollThreshold;                    		// 0x0ED0 (0x0004) [0x0000000000000000]              
	float                                              ImpactGroundResetPhysRiderThresh;                 		// 0x0ED4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BigImpactPhysRiderZVel;                           		// 0x0ED8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DesiredSpeedSquared;                              		// 0x0EDC (0x0004) [0x0000000000000000]              
	float                                              LastDesiredSpeedTime;                             		// 0x0EE0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46173 ];

		return pClassPointer;
	};

	bool eventContinueOnFoot ( );
	void eventBelowSpeedThreshold ( );
	bool TooCloseToAttack ( class AActor* Other );
	void eventSpawnRoosterEffect ( );
	bool OnTouchForcedDirVolume ( class AUDKForcedDirectionVolume* Vol );
	void eventHoverboardLanded ( );
	void eventHideBoard ( );
	void eventToggleAnimBoard ( unsigned long bAnimBoard, float Delay );
	void StopVehicleSounds ( );
	void eventRBPenetrationDestroy ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void eventRanInto ( class AActor* Other );
	bool eventEncroachingOn ( class AActor* Other );
	void RagdollDriver ( );
	bool DisableVehicle ( );
	void ReplicatedEvent ( struct FName VarName );
	void SetOnlyControllableByTilt ( unsigned long bActive );
	void DrivingStatusChanged ( );
	void DriverLeft ( );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void IncomingMissile ( class AProjectile* P );
	bool Dodge ( unsigned char InDoubleClickMove );
	unsigned char ChooseFireMode ( );
	float GetChargePower ( );
	void NotifyDriverTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser, float DamageFalloffExp );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void OnHoverboardSpinJump ( class UUTSeqAct_HoverboardSpinJump* Action );
	void ClientForceSpinWarmup ( );
	void ServerSpin ( float Direction );
	void ForceSpinJump ( );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	void eventBoardJumpEffect ( );
	void ServerChangeSeat ( int RequestedSeat );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void DetachDriver ( class APawn* P );
	void InitPhysicsAnimPawn ( );
	void OnDriverPhysicsAssetChanged ( class AUTPawn* UTP );
	bool IsHumanDriver ( class AUTVehicle_Hoverboard* HB, class APawn* P );
	void TestResetPhys ( );
	void HandDamp ( float LinDamp );
	void HandSpring ( float LinSpring );
	void BackDamp ( float LinDamp );
	void BackSpring ( float LinSpring );
	void SetHoverboardRiderPhysics ( class AUTPawn* UTP );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void SetFlagAttachToBody ( class AUTPawn* UTP, unsigned long bAttached );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	void AttachDriver ( class APawn* P );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	struct FVector GetCameraStart ( int SeatIndex );
	bool DriverEnter ( class APawn* P );
	void AttachHoverboardEffects ( );
	void InitializeEffects ( );
	void DriverDied ( class UClass* DamageType );
	void WeaponRotationChanged ( int SeatIndex );
	void Tick ( float DeltaSeconds );
	void eventUpdateHoverboardDustEffect ( float DustHeight );
	void ServerRequestDodge ( unsigned long bDodgeLeft );
	void eventRequestDodge ( );
	bool KickOutBot ( );
	bool ShouldShowUseable ( class APlayerController* PC, float Dist );
	bool AnySeatAvailable ( );
	struct FVector GetCameraFocus ( int SeatIndex );
	void DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SeatIndex );
	float GetDisplayedHealth ( );
	void PlayHorn ( );
	bool CoversScreenSpace ( struct FVector ScreenLoc, class UCanvas* Canvas );
	void FindGoodEndView ( class APlayerController* InPC, struct FRotator* GoodRotation );
	void eventPostInitRigidBody ( class UPrimitiveComponent* PrimComp );
};

UClass* AUTVehicle_Hoverboard::pClassPointer = NULL;

// Class UTGame.UTBeamWeapon
// 0x0070 (0x07EC - 0x077C)
class AUTBeamWeapon : public AUTWeapon
{
public:
	class UParticleSystem*                             BeamTemplate[ 0x2 ];                              		// 0x077C (0x0010) [0x0000000000000000]              
	class UParticleSystemComponent*                    BeamEmitter[ 0x2 ];                               		// 0x078C (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       BeamSockets[ 0x2 ];                               		// 0x079C (0x0010) [0x0000000000000000]              
	struct FName                                       EndPointParamName;                                		// 0x07AC (0x0008) [0x0000000000000000]              
	struct FName                                       BeamPreFireAnim[ 0x2 ];                           		// 0x07B4 (0x0010) [0x0000000000000000]              
	struct FName                                       BeamFireAnim[ 0x2 ];                              		// 0x07C4 (0x0010) [0x0000000000000000]              
	struct FName                                       BeamPostFireAnim[ 0x2 ];                          		// 0x07D4 (0x0010) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      BeamWeaponFireWaveForm;                           		// 0x07E4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46217 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void UpdateBeam ( float DeltaTime );
	void ProcessBeamHit ( struct FVector StartTrace, struct FVector AimDir, float DeltaTime, struct FImpactInfo* TestImpact );
	void UpdateBeamEmitter ( struct FVector FlashLocation, struct FVector HitNormal, class AActor* HitActor );
	void SetBeamEmitterHidden ( unsigned long bHide );
	void KillBeamEmitter ( );
	void AddBeamEmitter ( );
};

UClass* AUTBeamWeapon::pClassPointer = NULL;

// Class UTGame.UTWeap_LinkGun
// 0x00E0 (0x08CC - 0x07EC)
class AUTWeap_LinkGun : public AUTBeamWeapon
{
public:
	class AActor*                                      LinkedTo;                                         		// 0x07EC (0x0008) [0x0000000000000020]              ( CPF_Net )
	class UPrimitiveComponent*                         LinkedComponent;                                  		// 0x07F4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              WeaponLinkDistance;                               		// 0x07FC (0x0004) [0x0000000000000000]              
	TArray< class AUTWeap_LinkGun* >                   LinkedList;                                       		// 0x0800 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      Victim;                                           		// 0x0810 (0x0008) [0x0000000000000000]              
	int                                                LinkStrength;                                     		// 0x0818 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LinkFlexibility;                                  		// 0x081C (0x0004) [0x0000000000000000]              
	float                                              LinkBreakDelay;                                   		// 0x0820 (0x0004) [0x0000000000000000]              
	float                                              MomentumTransfer;                                 		// 0x0824 (0x0004) [0x0000000000000000]              
	float                                              BeamAmmoUsePerSecond;                             		// 0x0828 (0x0004) [0x0000000000000000]              
	float                                              ReaccquireTimer;                                  		// 0x082C (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeamHit : 1;                                     		// 0x0830 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bAutoCharge : 1;                                  		// 0x0830 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFullPower : 1;                                   		// 0x0830 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	float                                              RechargeRate;                                     		// 0x0834 (0x0004) [0x0000000000000000]              
	float                                              SavedDamage;                                      		// 0x0838 (0x0004) [0x0000000000000000]              
	float                                              SavedAmmoUse;                                     		// 0x083C (0x0004) [0x0000000000000000]              
	float                                              MinimumDamage;                                    		// 0x0840 (0x0004) [0x0000000000000000]              
	float                                              PartialAmmo;                                      		// 0x0844 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   WeaponMaterialInstance;                           		// 0x0848 (0x0008) [0x0000000000000000]              
	class AUTLinkBeamLight*                            BeamLight;                                        		// 0x0850 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   StartAltFireSound;                                		// 0x0858 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   EndAltFireSound;                                  		// 0x0860 (0x0008) [0x0000000000000000]              
	class AUTEmitter*                                  BeamEndpointEffect;                               		// 0x0868 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PoweredUpEffect;                                  		// 0x0870 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       PoweredUpEffectSocket;                            		// 0x0878 (0x0008) [0x0000000000000000]              
	struct FVector                                     BeamAttachLocation;                               		// 0x0880 (0x000C) [0x0000000000000000]              
	float                                              LastBeamAttachTime;                               		// 0x088C (0x0004) [0x0000000000000000]              
	struct FVector                                     BeamAttachNormal;                                 		// 0x0890 (0x000C) [0x0000000000000000]              
	class AActor*                                      BeamAttachActor;                                  		// 0x089C (0x0008) [0x0000000000000000]              
	class UClass*                                      LinkAttachmentClass;                              		// 0x08A4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             TeamMuzzleFlashTemplates[ 0x3 ];                  		// 0x08AC (0x0018) [0x0000000000000000]              
	class UParticleSystem*                             HighPowerMuzzleFlashTemplate;                     		// 0x08C4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46216 ];

		return pClassPointer;
	};

	void BoostPower ( );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	float SuggestDefenseStyle ( );
	float SuggestAttackStyle ( );
	float GetOptimalRangeFor ( class AActor* Target );
	bool CanHeal ( class AActor* Other );
	unsigned char BestMode ( );
	bool FocusOnLeader ( unsigned long bLeaderFiring );
	float GetAIRating ( );
	void eventReplicatedEvent ( struct FName VarName );
	void ChangeVisibility ( unsigned long bIsVisible );
	void CalcLinkStrength ( );
	void GetLinkedWeapons ( TArray< class AUTWeap_LinkGun* >* LinkedWeapons );
	void FindLinkedWeapons ( );
	void UnLink ( unsigned long bDelayed );
	void AttemptLinkTo ( class AActor* Who, class UPrimitiveComponent* HitComponent );
	struct FVector GetLinkedToLocation ( );
	void ProcessBeamHit ( struct FVector StartTrace, struct FVector AimDir, float DeltaTime, struct FImpactInfo* TestImpact );
	void RechargeAmmo ( );
	void ConsumeBeamAmmo ( float Amount );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void KillEndpointEffect ( );
	void KillBeamEmitter ( );
	void SetBeamEmitterHidden ( unsigned long bHide );
	void eventDestroyed ( );
	class UClass* GetProjectileClass ( );
	void UpdateBeamEmitter ( struct FVector FlashLocation, struct FVector HitNormal, class AActor* HitActor );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void SetSkin ( class UMaterial* NewMaterial );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	class UParticleSystem* GetTeamMuzzleFlashTemplate ( unsigned char TeamNum );
	void PostBeginPlay ( );
};

UClass* AUTWeap_LinkGun::pClassPointer = NULL;

// Class UTGame.UTGFxTweenableMoviePlayer
// 0x0010 (0x01F4 - 0x01E4)
class UUTGFxTweenableMoviePlayer : public UGFxMoviePlayer
{
public:
	TArray< struct FGFxTween >                         TweenList;                                        		// 0x01E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46220 ];

		return pClassPointer;
	};

	void TweenComplete ( int Index );
	void PrintTweensToLog ( );
	void ClearsTweensOnMovieClip ( class UGFxObject* MC, unsigned long bReset );
	void Tick ( float DeltaTime );
	void ProcessTweenCallback ( struct FString Callback, class UGFxObject* TargetMC );
	void TweenTo ( class UGFxObject* MC, float Duration, struct FString Member, float Target, unsigned char NewTweenType, struct FString Callback );
};

UClass* UUTGFxTweenableMoviePlayer::pClassPointer = NULL;

// Class UTGame.GFxProjectedUI
// 0x01D0 (0x03C4 - 0x01F4)
class UGFxProjectedUI : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  Root;                                             		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Window;                                           		// 0x01FC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MainMC;                                           		// 0x0204 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BackpackMC;                                       		// 0x020C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ArsenalMC;                                        		// 0x0214 (0x0008) [0x0000000000000000]              
	TArray< class UGFxUI_InventoryButton* >            Buttons;                                          		// 0x021C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData >                         Items;                                            		// 0x022C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  EquippedWeapon;                                   		// 0x023C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  EquippedWeaponOutline;                            		// 0x0244 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  EquippedWeaponText1;                              		// 0x024C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  EquippedWeaponText2;                              		// 0x0254 (0x0008) [0x0000000000000000]              
	unsigned long                                      bArsenalTabFocused : 1;                           		// 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x025C (0x0004) [0x0000000000000000] [0x00000002] 
	class UGFxObject*                                  BackpackTabMC;                                    		// 0x0260 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ArsenalTabMC;                                     		// 0x0268 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  LeftArrow02;                                      		// 0x0270 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  LeftArrow01;                                      		// 0x0278 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BackgroundMC;                                     		// 0x0280 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CPCLogoMC;                                        		// 0x0288 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  StartUpTextMC;                                    		// 0x0290 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_LineMC;                                        		// 0x0298 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_ArrowMC;                                       		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Optic1MC;                                      		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Optic2MC;                                      		// 0x02B0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Optic3MC;                                      		// 0x02B8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Optic4MC;                                      		// 0x02C0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Edge_LeftBottom;                               		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Edge_LeftMiddle;                               		// 0x02D0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Edge_LeftTop;                                  		// 0x02D8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Edge_RightTop;                                 		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Edge_RightMiddle;                              		// 0x02E8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BG_Edge_RightBottom;                              		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoMC;                                           		// 0x02F8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoIconWeap;                                     		// 0x0300 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoIconItem;                                     		// 0x0308 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoText;                                         		// 0x0310 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoTitle;                                        		// 0x0318 (0x0008) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              rotval;                                           		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              PosX;                                             		// 0x0330 (0x0004) [0x0000000000000000]              
	float                                              PosY;                                             		// 0x0334 (0x0004) [0x0000000000000000]              
	float                                              rightThreshold;                                   		// 0x0338 (0x0004) [0x0000000000000000]              
	float                                              leftThreshold;                                    		// 0x033C (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponClass[ 0xB ];                               		// 0x0340 (0x0058) [0x0000000000000000]              
	struct FRotator                                    StartRotation;                                    		// 0x0398 (0x000C) [0x0000000000000000]              
	struct FString                                     AcceptString;                                     		// 0x03A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CancelString;                                     		// 0x03B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46262 ];

		return pClassPointer;
	};

	void CreateItemData ( );
	void UpdatePos ( );
	void FloatSelectionDown ( class UGFxObject* ButtonIconMC );
	void FloatSelectionUp ( class UGFxObject* ButtonIconMC );
	void TweenTurbines ( unsigned long Toggle );
	void ProcessTweenCallback ( struct FString Callback, class UGFxObject* TargetMC );
	void UpdateEquippedWeapon ( );
	void FakeUpdateEquippedWeapon ( int Index );
	void PopulateArsenal ( );
	void SetInfo ( int Index );
	void OnClickFakeItem ( struct FEventData ev );
	void OnFocusBackpackTab ( struct FEventData ev );
	void OnFocusArsenalTab ( struct FEventData ev );
	void OnFocusUpdateInfo ( struct FEventData ev );
	void OnClickWeaponButton ( struct FEventData ev );
	void OnFocusOutSelection ( struct FEventData ev );
	void OnFocusInSelection ( struct FEventData ev );
	void SwitchWeapon ( unsigned char Index );
	void SetupBackpackButtons ( );
	void SetupArsenalButtons ( );
	void PopulateBackpackFake ( );
	void SetupInfo ( );
	void SetupBackpack ( );
	void SetupArsenal ( );
	void SetupBorder ( );
	void SetupBG ( );
	void OnCloseAnimComplete ( );
	void StartCloseAnimation ( );
	void AddCaptureKeys ( );
	void ConfigureInventory ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UGFxProjectedUI::pClassPointer = NULL;

// Class UTGame.GFxUI_InventoryButton
// 0x0018 (0x00C8 - 0x00B0)
class UGFxUI_InventoryButton : public UGFxClikWidget
{
public:
	struct FString                                     Content;                                          		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  IconMC;                                           		// 0x00C0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46265 ];

		return pClassPointer;
	};

	void SetIconMC ( class UGFxObject* iconClip );
	void SetContent ( struct FString newContent );
};

UClass* UGFxUI_InventoryButton::pClassPointer = NULL;

// Class UTGame.UTItemPickupFactory
// 0x002C (0x051C - 0x04F0)
class AUTItemPickupFactory : public AUTPickupFactory
{
public:
	class USoundCue*                                   PickupSound;                                      		// 0x04F0 (0x0008) [0x0000000000000000]              
	struct FString                                     PickupMessage;                                    		// 0x04F8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              RespawnTime;                                      		// 0x0508 (0x0004) [0x0000000000000000]              
	struct FString                                     UseHintMessage;                                   		// 0x050C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46398 ];

		return pClassPointer;
	};

	float BotDesireability ( class APawn* P, class AController* C );
	float GetRespawnTime ( );
	void SetRespawn ( );
	void SpawnCopyFor ( class APawn* Recipient );
	struct FString GetLocalString ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01 );
	void InitializePickup ( );
};

UClass* AUTItemPickupFactory::pClassPointer = NULL;

// Class UTGame.UTHealthPickupFactory
// 0x0008 (0x0524 - 0x051C)
class AUTHealthPickupFactory : public AUTItemPickupFactory
{
public:
	int                                                HealingAmount;                                    		// 0x051C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuperHeal : 1;                                   		// 0x0520 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46397 ];

		return pClassPointer;
	};

	float BotDesireability ( class APawn* P, class AController* C );
	int HealAmount ( class APawn* Recipient );
	void SpawnCopyFor ( class APawn* Recipient );
	void UpdateHUD ( class AUTHUD* H );
};

UClass* AUTHealthPickupFactory::pClassPointer = NULL;

// Class UTGame.UTArmorPickupFactory
// 0x0004 (0x0520 - 0x051C)
class AUTArmorPickupFactory : public AUTItemPickupFactory
{
public:
	int                                                ShieldAmount;                                     		// 0x051C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46401 ];

		return pClassPointer;
	};

	float BotDesireability ( class APawn* Bot, class AController* C );
	void AddShieldStrength ( class AUTPawn* P );
	int CanUseShield ( class AUTPawn* P );
	void SpawnCopyFor ( class APawn* Recipient );
	void PostBeginPlay ( );
	void UpdateHUD ( class AUTHUD* H );
};

UClass* AUTArmorPickupFactory::pClassPointer = NULL;

// Class UTGame.UTWeap_ShockRifleBase
// 0x0000 (0x077C - 0x077C)
class AUTWeap_ShockRifleBase : public AUTWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46403 ];

		return pClassPointer;
	};

};

UClass* AUTWeap_ShockRifleBase::pClassPointer = NULL;

// Class UTGame.UTWeap_RocketLauncher
// 0x01A8 (0x0924 - 0x077C)
class AUTWeap_RocketLauncher : public AUTWeapon
{
public:
	unsigned char                                      LoadedFireMode;                                   		// 0x077C (0x0001) [0x0000000000000000]              
	class UClass*                                      SeekingRocketClass;                               		// 0x0780 (0x0008) [0x0000000000000000]              
	class UClass*                                      LoadedRocketClass;                                		// 0x0788 (0x0008) [0x0000000000000000]              
	class UClass*                                      GrenadeClass;                                     		// 0x0790 (0x0008) [0x0000000000000000]              
	int                                                GrenadeSpreadDist;                                		// 0x0798 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AltFireModeChangeSound;                           		// 0x079C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   RocketLoadedSound;                                		// 0x07A4 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   GrenadeFireSound;                                 		// 0x07AC (0x0008) [0x0000000000000000]              
	class UUDKSkeletalMeshComponent*                   SkeletonFirstPersonMesh;                          		// 0x07B4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bIsAnyAmmoHidden : 1;                             		// 0x07BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockedOnTarget : 1;                              		// 0x07BC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bTargetLockingActive : 1;                         		// 0x07BC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LockCheckTime;                                    		// 0x07C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockRange;                                        		// 0x07C4 (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime;                                  		// 0x07C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockTolerance;                                    		// 0x07CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      LockedTarget;                                     		// 0x07D0 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class APlayerReplicationInfo*                      LockedTargetPRI;                                  		// 0x07D8 (0x0008) [0x0000000000000000]              
	class AActor*                                      PendingLockedTarget;                              		// 0x07E0 (0x0008) [0x0000000000000000]              
	float                                              LastLockedOnTime;                                 		// 0x07E8 (0x0004) [0x0000000000000000]              
	float                                              PendingLockedTargetTime;                          		// 0x07EC (0x0004) [0x0000000000000000]              
	float                                              LastValidTargetTime;                              		// 0x07F0 (0x0004) [0x0000000000000000]              
	float                                              LockAim;                                          		// 0x07F4 (0x0004) [0x0000000000000000]              
	float                                              ConsoleLockAim;                                   		// 0x07F8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LockAcquiredSound;                                		// 0x07FC (0x0008) [0x0000000000000000]              
	class USoundCue*                                   LockLostSound;                                    		// 0x0804 (0x0008) [0x0000000000000000]              
	float                                              LastTargetLockCheckTime;                          		// 0x080C (0x0004) [0x0000000000000000]              
	int                                                LoadedShotCount;                                  		// 0x0810 (0x0004) [0x0000000000000000]              
	int                                                MaxLoadCount;                                     		// 0x0814 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponLoadedSnd;                                  		// 0x0818 (0x0008) [0x0000000000000000]              
	TArray< float >                                    AltFireQueueTimes;                                		// 0x0820 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    AltFireLaunchTimes;                               		// 0x0830 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    AltFireEndTimes;                                  		// 0x0840 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         AltFireSndQue;                                    		// 0x0850 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             MuzzleFlashSocketList;                            		// 0x0860 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUTParticleSystemComponent* >        MuzzleFlashPSCList;                               		// 0x0870 (0x0010) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	int                                                SpreadDist;                                       		// 0x0880 (0x0004) [0x0000000000000000]              
	float                                              GracePeriod;                                      		// 0x0884 (0x0004) [0x0000000000000000]              
	float                                              WaitToFirePct;                                    		// 0x0888 (0x0004) [0x0000000000000000]              
	struct FString                                     GrenadeString;                                    		// 0x088C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpiralString;                                     		// 0x089C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FTextureCoordinates                         LoadedIconCoords[ 0x3 ];                          		// 0x08AC (0x0030) [0x0000000000000000]              
	struct FName                                       LoadUpAnimList[ 0x3 ];                            		// 0x08DC (0x0018) [0x0000000000000000]              
	struct FName                                       WeaponAltFireLaunch[ 0x3 ];                       		// 0x08F4 (0x0018) [0x0000000000000000]              
	struct FName                                       WeaponAltFireLaunchEnd[ 0x3 ];                    		// 0x090C (0x0018) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46404 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	int AddAmmo ( int Amount );
	void UpdateAmmoVisibility ( );
	void HideRocket ( struct FName RocketName, unsigned long ShouldHide );
	void HideRocketAmmo ( );
	void PlayFiringSound ( );
	class UClass* GetProjectileClass ( );
	class AProjectile* ProjectileFire ( );
	void FireLoad ( );
	void WeaponFireLoad ( );
	int GetSpreadDist ( );
	unsigned char BestMode ( );
	float GetAIRating ( );
	float SuggestAttackStyle ( );
	void DrawLFMData ( class AHUD* HUD );
	void eventCauseMuzzleFlash ( );
	void DetachMuzzleFlash ( );
	void AttachMuzzleFlash ( );
	void eventCauseMuzzleFlashLight ( );
	void eventStopMuzzleFlash ( );
	void eventMuzzleFlashTimer ( );
	void ActiveRenderOverlays ( class AHUD* H );
	void eventDestroyed ( );
	void CheckTargetLock ( );
	void eventTick ( float DeltaTime );
	bool CanLockOnTo ( class AActor* TA );
	void AdjustLockTarget ( class AActor* NewLockTarget );
	void FireAmmunition ( );
	void GetWeaponDebug ( TArray< struct FString >* DebugInfo );
	float GetFireInterval ( unsigned char FireModeNum );
	void AdjustWeaponTimingForConsole ( );
};

UClass* AUTWeap_RocketLauncher::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd
// 0x00CC (0x02B0 - 0x01E4)
class UGFxUDKFrontEnd : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ManagerMC;                                        		// 0x01EC (0x0008) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x01F4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxUDKFrontEnd_MainMenu*                    MainMenuView;                                     		// 0x01F8 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_InstantAction*               InstantActionView;                                		// 0x0200 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_Multiplayer*                 MultiplayerView;                                  		// 0x0208 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_HostGame*                    HostGameView;                                     		// 0x0210 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_MapSelect*                   MapSelectView;                                    		// 0x0218 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_GameMode*                    GameModeView;                                     		// 0x0220 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_Mutators*                    MutatorsView;                                     		// 0x0228 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_Settings*                    SettingsView;                                     		// 0x0230 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_ServerSettings*              ServerSettingsView;                               		// 0x0238 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_JoinGame*                    JoinGameView;                                     		// 0x0240 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_InfoDialog*                  InfoDialog;                                       		// 0x0248 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_FilterDialog*                FilterDialog;                                     		// 0x0250 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_JoinDialog*                  JoinDialog;                                       		// 0x0258 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_ErrorDialog*                 ErrorDialog;                                      		// 0x0260 (0x0008) [0x0000000000000000]              
	class UGFxUDKFrontEnd_PasswordDialog*              PasswordDialog;                                   		// 0x0268 (0x0008) [0x0000000000000000]              
	TArray< struct FViewInfo >                         ViewData;                                         		// 0x0270 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UGFxUDKFrontEnd_View* >              ViewStack;                                        		// 0x0280 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             LoadedViews;                                      		// 0x0290 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EscapeDelegate__Delegate;                       		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46406 ];

		return pClassPointer;
	};

	bool FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void DestroyDependantViews ( struct FName InViewName );
	void LoadDependantViews ( struct FName InViewName );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool CheckLinkConnectionAndError ( struct FString AlternateTitle, struct FString AlternateMessage );
	void PostWidgetInit ( );
	void ASShowCursor ( unsigned long bShowCursor );
	void ConfigureView ( class UGFxUDKFrontEnd_View* InView, struct FName WidgetName, struct FName WidgetPath );
	void UpdateViewLayout ( );
	class UGFxObject* PopViewStub ( );
	class UGFxObject* PopView ( );
	void ASSetSelectionFocus ( class UGFxObject* MovieClip );
	void SetSelectionFocus ( class UGFxObject* MovieClip );
	void PushDialogView ( class UGFxUDKFrontEnd_View* dialogView );
	void PushView ( class UGFxUDKFrontEnd_View* TargetView );
	bool IsViewAllowed ( class UGFxUDKFrontEnd_View* TargetView );
	void ConfigureTargetView ( class UGFxUDKFrontEnd_View* TargetView );
	void ConfigureTargetDialog ( class UGFxUDKFrontEnd_View* TargetDialog );
	class UGFxUDKFrontEnd_Dialog* SpawnDialog ( struct FName TargetDialogName, class UGFxUDKFrontEnd_Screen* ParentView );
	void PushViewByName ( struct FName TargetViewName, class UGFxUDKFrontEnd_Screen* ParentView );
	void SetEscapeDelegate ( struct FScriptDelegate InDelegate );
	bool IsViewLoaded ( struct FName InViewName );
	void LoadViewByName ( struct FName InViewName );
	void LoadView ( struct FViewInfo InViewInfo );
	void LoadViews ( );
	void ConfigFrontEnd ( );
	bool Start ( unsigned long StartPaused );
	void EscapeDelegate ( );
};

UClass* UGFxUDKFrontEnd::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_Dialog
// 0x0038 (0x00EC - 0x00B4)
class UGFxUDKFrontEnd_Dialog : public UGFxUDKFrontEnd_View
{
public:
	class UGFxObject*                                  DialogMC;                                         		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleTxt;                                         		// 0x00BC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  InfoTxt;                                          		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              BackBtn;                                          		// 0x00CC (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              AcceptBtn;                                        		// 0x00D4 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __AcceptDelegate__Delegate;                       		// 0x00DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46418 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void Select_Back ( struct FEventData ev );
	void SetBackButton_OnPress ( struct FScriptDelegate EventListener );
	void SetBackButton ( class UGFxObject* InBackButton );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void AcceptDelegate ( struct FEventData ev );
};

UClass* UGFxUDKFrontEnd_Dialog::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_PasswordDialog
// 0x0018 (0x0104 - 0x00EC)
class UGFxUDKFrontEnd_PasswordDialog : public UGFxUDKFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              PasswordRendererMC;                               		// 0x00EC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PasswordTextField;                                		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinBtn;                                          		// 0x00FC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46417 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void ClearPasswordRenderer ( );
	struct FString GetPassword ( );
	void SetOKButtonListener ( struct FScriptDelegate DelegateListener );
	void SetBackButtonListener ( struct FScriptDelegate DelegateListener );
	void DisableSubComponents ( unsigned long bEnableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* UGFxUDKFrontEnd_PasswordDialog::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_ErrorDialog
// 0x0000 (0x00EC - 0x00EC)
class UGFxUDKFrontEnd_ErrorDialog : public UGFxUDKFrontEnd_Dialog
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46420 ];

		return pClassPointer;
	};

	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void SetButtonLabel ( struct FString ButtonLabel );
	void SetInfo ( struct FString Info );
	void SetTitle ( struct FString Title );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* UGFxUDKFrontEnd_ErrorDialog::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_JoinDialog
// 0x0020 (0x010C - 0x00EC)
class UGFxUDKFrontEnd_JoinDialog : public UGFxUDKFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              ServerInfoListMC;                                 		// 0x00EC (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MutatorListMC;                                    		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinBtn;                                          		// 0x00FC (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              SpectateBtn;                                      		// 0x0104 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46422 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetSpectateButtonPress ( struct FScriptDelegate SpectateButtonListener );
	void SetJoinButtonPress ( struct FScriptDelegate JoinButtonListener );
	void PopulateServerInfo ( class UOnlineGameSettings* GameSettings );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* UGFxUDKFrontEnd_JoinDialog::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_FilterDialog
// 0x0054 (0x0140 - 0x00EC)
class UGFxUDKFrontEnd_FilterDialog : public UGFxUDKFrontEnd_Dialog
{
public:
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00EC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUTDataStore_GameSearchDM*                   SearchDataStore;                                  		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterListMC;                                     		// 0x00FC (0x0008) [0x0000000000000000]              
	unsigned long                                      bFiltersHaveChanged : 1;                          		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  DataProvider;                                     		// 0x0108 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  NetworkTypeOptionItem;                            		// 0x0110 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  GameTypeOptionItem;                               		// 0x0118 (0x0008) [0x0000000000000000]              
	TArray< struct UGFxUDKFrontEnd_FilterDialog_FOption > ListOptions;                                      		// 0x0120 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSwitchedGameType__Delegate;                   		// 0x0130 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46424 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void PushFilterListUpdate ( );
	void SetupListDataProvider ( );
	void SetFilterNetworkType ( unsigned long bLAN, unsigned long bSkipUIUpdate );
	void OnFilterList_OptionChanged ( struct FEventData ev );
	struct FString GetGameClassByFriendlyName ( struct FString FriendlyName );
	void ValidateServerType ( );
	void SetBackButtonListener ( struct FScriptDelegate DelegateListener );
	void DisableSubComponents ( unsigned long bEnableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
	void OnSwitchedGameType ( );
};

UClass* UGFxUDKFrontEnd_FilterDialog::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_InfoDialog
// 0x0000 (0x00EC - 0x00EC)
class UGFxUDKFrontEnd_InfoDialog : public UGFxUDKFrontEnd_Dialog
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46426 ];

		return pClassPointer;
	};

	void SetAcceptButton_OnPress ( struct FScriptDelegate EventListener );
	void SetBackButtonLabel ( struct FString Label );
	void SetAcceptButtonLabel ( struct FString Label );
	void SetInfo ( struct FString Info );
	void SetTitle ( struct FString Title );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewClosed ( );
};

UClass* UGFxUDKFrontEnd_InfoDialog::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_SettingsBase
// 0x0040 (0x0174 - 0x0134)
class UGFxUDKFrontEnd_SettingsBase : public UGFxUDKFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                           		// 0x0134 (0x0008) [0x0000000000000000]              
	struct FString                                     SelectedOptionSet;                                		// 0x013C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ListDataProvider;                                 		// 0x014C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0154 (0x0008) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_MenuOption* >      SettingsList;                                     		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x016C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46430 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	int FindPropertyIndexByName ( struct FString InPropertyName );
	void Select_BackImpl ( );
	void OnEscapeKeyPress ( );
	int FindLocalizedSettingIndexByName ( struct FString InSettingName );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnOptionChanged ( struct FEventData ev );
	void OnListChange ( struct FEventData ev );
	void SetList ( class UGFxObject* List );
	void SaveState ( );
	void Select_Back ( struct FEventData ev );
	void LoadDataFromStore ( );
	void SetSelectedOptionSet ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_SettingsBase::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_ServerSettings
// 0x0004 (0x0178 - 0x0174)
class UGFxUDKFrontEnd_ServerSettings : public UGFxUDKFrontEnd_SettingsBase
{
public:
	unsigned long                                      bDataChangedByReqs : 1;                           		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46429 ];

		return pClassPointer;
	};

	struct FString FindControlByUTClassName ( unsigned char UTUIControlClass );
	void PopulateOptionDataProviderForIndex ( int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex );
	void UpdateListDataProvider ( );
	void SaveState ( );
	void OnOptionChanged ( struct FEventData ev );
	void SetSelectedOptionSet ( );
};

UClass* UGFxUDKFrontEnd_ServerSettings::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_Settings
// 0x0000 (0x0174 - 0x0174)
class UGFxUDKFrontEnd_Settings : public UGFxUDKFrontEnd_SettingsBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46432 ];

		return pClassPointer;
	};

	void PopulateOptionDataProviderForIndex ( int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex );
	void UpdateListDataProvider ( );
	void SetSelectedOptionSet ( );
};

UClass* UGFxUDKFrontEnd_Settings::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_Mutators
// 0x0064 (0x0198 - 0x0134)
class UGFxUDKFrontEnd_Mutators : public UGFxUDKFrontEnd_Screen
{
public:
	TArray< class UUTUIDataProvider_Mutator* >         AllMutatorsList;                                  		// 0x0134 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUTUIDataProvider_Mutator* >         AvailableMutatorList;                             		// 0x0144 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                    		// 0x0154 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      EnabledList;                                      		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x016C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0174 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x017C (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              ConfigListMC;                                     		// 0x0184 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ConfigListDataProvider;                           		// 0x018C (0x0008) [0x0000000000000000]              
	unsigned long                                      bFirstUpdateAfterActivation : 1;                  		// 0x0194 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46434 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetConfigList ( class UGFxObject* ConfigList );
	void SetList ( class UGFxObject* List );
	bool IsCurrentMutatorConfigurable ( );
	void ApplyGameModeFilter ( );
	int GetNumEnabledMutators ( );
	struct FString GetEnabledMutators ( );
	void AddMutatorAndFilterList ( int NewMutator );
	void SetMutatorEnabled ( int MutatorId );
	void UpdateConfigListDataProvider ( );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	unsigned char FindMutatorIndexByClass ( struct FString MutatorClass );
	void OnListItemPress ( struct FEventData ev );
	void PlayOpenAnimation ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void SortAllMutatorsBasedOnOfficialArray ( );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_Mutators::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_GameMode
// 0x0060 (0x0194 - 0x0134)
class UGFxUDKFrontEnd_GameMode : public UGFxUDKFrontEnd_Screen
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x0134 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x013C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     GameMode;                                         		// 0x0144 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0154 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x0164 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x016C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0174 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              ImgScrollerMC;                                    		// 0x017C (0x0008) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_GameModeInfo* >    GameModeList;                                     		// 0x0184 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46436 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void ASSetList ( class UGFxObject* List );
	void SetImgScroller ( class UGFxClikWidget* InImgScroller );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void OnGameModeChange ( int SelectedIndex );
	void OnGameModeSelected ( struct FString InGameMode, struct FString InDefaultMap, struct FString InGameSettingsClass );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_GameMode::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_MapSelect
// 0x0034 (0x0168 - 0x0134)
class UGFxUDKFrontEnd_MapSelect : public UGFxUDKFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                           		// 0x0134 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x013C (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              ImgScrollerMC;                                    		// 0x0144 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x014C (0x0008) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_MapInfo* >         MapList;                                          		// 0x0154 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastSelectedItem;                                 		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46438 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	struct FString GetMapFriendlyName ( struct FString Map );
	struct FString GetSelectedMap ( );
	void SetupMapCycle ( struct FString SelectedMap );
	struct FName GetCurrentGameMode ( );
	struct FString GetImageMarkupByMapName ( struct FString InMapName );
	void SetImgScroller ( class UGFxClikWidget* InImgScroller );
	void UpdateListDataProvider ( );
	void OnListItemPress ( struct FEventData ev );
	void SetList ( class UGFxObject* List );
	void OnMapList_ValueChanged ( struct FString InMapSelected, struct FString InMapImageSelected );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_MapSelect::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_LaunchGame
// 0x0110 (0x0244 - 0x0134)
class UGFxUDKFrontEnd_LaunchGame : public UGFxUDKFrontEnd_Screen
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x0134 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x013C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     DefaultMapName;                                   		// 0x0144 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultGameMode;                                  		// 0x0154 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultGameModeSettings;                          		// 0x0164 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultMapImage;                                  		// 0x0174 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultGameModePrefixes;                          		// 0x0184 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct UGFxUDKFrontEnd_LaunchGame_FOption > ListOptions;                                      		// 0x0194 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x01A4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x01AC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x01B4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MapImageMC;                                       		// 0x01BC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MapNameTxt;                                       		// 0x01C4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  GameTitleTxt;                                     		// 0x01CC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BotLvlTxt;                                        		// 0x01D4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  OpponentsTxt;                                     		// 0x01DC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTxt;                                         		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TimeTxt;                                          		// 0x01EC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MapTxt;                                           		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RespawnTxt;                                       		// 0x01FC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MutatorsTxt;                                      		// 0x0204 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MapLabelTxt;                                      		// 0x020C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BotLvlLabelTxt;                                   		// 0x0214 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  OpponentsLabelTxt;                                		// 0x021C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ScoreLabelTxt;                                    		// 0x0224 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TimeLabelTxt;                                     		// 0x022C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RespawnLabelTxt;                                  		// 0x0234 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MutatorsLabelTxt;                                 		// 0x023C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46441 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	struct FString GetGameModeFriendlyString ( struct FString InGameMode );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void UpdateGameSettingsPanel ( );
	void OnStartGame_Confirm ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_LaunchGame::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_HostGame
// 0x0000 (0x0244 - 0x0244)
class UGFxUDKFrontEnd_HostGame : public UGFxUDKFrontEnd_LaunchGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46440 ];

		return pClassPointer;
	};

	void OnStartGame_Confirm ( );
	void FinishStartDedicated ( );
	void OnGameCreated ( struct FName SessionName, unsigned long bWasSuccessful );
	void CreateOnlineGame ( int PlayerIndex );
	void SetupGameSettings ( );
	struct FString GenerateMutatorURLString ( );
	void ValidateServerType ( );
	struct FString StripInvalidPasswordCharacters ( struct FString PasswordString, struct FString InvalidChars );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
};

UClass* UGFxUDKFrontEnd_HostGame::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_Multiplayer
// 0x0028 (0x015C - 0x0134)
class UGFxUDKFrontEnd_Multiplayer : public UGFxUDKFrontEnd_Screen
{
public:
	TArray< struct UGFxUDKFrontEnd_Multiplayer_FOption > ListOptions;                                      		// 0x0134 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x0144 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x014C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0154 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46443 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void Select_HostGame ( );
	void Select_JoinGame ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_Multiplayer::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_InstantAction
// 0x0000 (0x0244 - 0x0244)
class UGFxUDKFrontEnd_InstantAction : public UGFxUDKFrontEnd_LaunchGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46445 ];

		return pClassPointer;
	};

	void OnStartGame_Confirm ( );
	void OnViewActivated ( );
};

UClass* UGFxUDKFrontEnd_InstantAction::pClassPointer = NULL;

// Class UTGame.GFxUDKFrontEnd_MainMenu
// 0x0031 (0x0165 - 0x0134)
class UGFxUDKFrontEnd_MainMenu : public UGFxUDKFrontEnd_Screen
{
public:
	TArray< struct UGFxUDKFrontEnd_MainMenu_FOption >  ListOptions;                                      		// 0x0134 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x0144 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x014C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  UserLabelTxt;                                     		// 0x0154 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  UserNameTxt;                                      		// 0x015C (0x0008) [0x0000000000000000]              
	unsigned char                                      LastSelectedIndex;                                		// 0x0164 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46447 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnEscapeKeyPress ( );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void ExitDialog_SelectBack ( struct FEventData ev );
	void ExitDialog_SelectOK ( struct FEventData ev );
	void Select_ExitGame ( );
	void Select_Multiplayer ( );
	void Select_InstantAction ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UGFxUDKFrontEnd_MainMenu::pClassPointer = NULL;

// Class UTGame.UTDataStore_GameSearchDM
// 0x0020 (0x00F8 - 0x00D8)
class UUTDataStore_GameSearchDM : public UUDKDataStore_GameSearchBase
{
public:
	class UClass*                                      HistoryGameSearchDataStoreClass;                  		// 0x00D8 (0x0008) [0x0000000000000000]              
	class UUTDataStore_GameSearchHistory*              HistoryGameSearchDataStore;                       		// 0x00E0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FGameSearchSettingsStorage >        StoredGameSearchValues;                           		// 0x00E8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46747 ];

		return pClassPointer;
	};

	void SaveGameSearchParameters ( );
	void LoadGameSearchParameters ( );
	int FindStoredSettingValueIndex ( int StoredGameSearchIndex, int LocalizedSettingId, unsigned long bAddIfNecessary );
	int FindStoredSearchIndex ( struct FName GameSearchName );
	bool HasOutstandingQueries ( unsigned long bRestrictCheckToSelf );
	bool eventSubmitGameSearch ( unsigned char ControllerIndex, unsigned long bInvalidateExistingSearchResults );
	void eventRegistered ( class ULocalPlayer* PlayerOwner );
};

UClass* UUTDataStore_GameSearchDM::pClassPointer = NULL;

// Class UTGame.UTUIDataStore_StringList
// 0x0000 (0x00A8 - 0x00A8)
class UUTUIDataStore_StringList : public UUDKUIDataStore_StringList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46749 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataStore_StringList::pClassPointer = NULL;

// Class UTGame.UTGameSettingsCommon
// 0x0018 (0x00FC - 0x00E4)
class UUTGameSettingsCommon : public UUDKGameSettingsCommon
{
public:
	int                                                MaxPlayers;                                       		// 0x00E4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	int                                                MinNetPlayers;                                    		// 0x00E8 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     SteamServerId;                                    		// 0x00EC (0x0010) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46774 ];

		return pClassPointer;
	};

	void SetCustomMutators ( class UUTUIDataStore_MenuItems* MenuDataStore, TArray< struct FString >* MutatorClassNames );
	int GenerateMutatorBitmaskFromURL ( class UUTUIDataStore_MenuItems* MenuDataStore, TArray< struct FString >* MutatorClassNames );
	void SetMutators ( struct FString* URL );
	void UpdateFromURL ( class AGameInfo* Game, struct FString* URL );
	void BuildURL ( struct FString* OutURL );
	void SetOfficialMutatorBitmask ( int MutatorBitMask );
};

UClass* UUTGameSettingsCommon::pClassPointer = NULL;

// Class UTGame.UTGameSearchCommon
// 0x0010 (0x015C - 0x014C)
class UUTGameSearchCommon : public UOnlineGameSearch
{
public:
	struct FString                                     GameClass;                                        		// 0x014C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46786 ];

		return pClassPointer;
	};

	void eventInitFilters ( );
};

UClass* UUTGameSearchCommon::pClassPointer = NULL;

// Class UTGame.UTGameSearchDM
// 0x0000 (0x015C - 0x015C)
class UUTGameSearchDM : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46785 ];

		return pClassPointer;
	};

};

UClass* UUTGameSearchDM::pClassPointer = NULL;

// Class UTGame.UTGameSearchCustom
// 0x0010 (0x016C - 0x015C)
class UUTGameSearchCustom : public UUTGameSearchDM
{
public:
	TArray< struct FPendingANDFilter >                 PendingFilters;                                   		// 0x015C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46784 ];

		return pClassPointer;
	};

	struct FString GetFilterPropertyName ( struct FString FilterId, unsigned char FilterType );
	void ResetFilters ( );
	void CommitFilters ( );
	void AddRawORFilter ( struct FName GroupName, struct FString FilterKey, unsigned char FilterOperator, struct FString FilterValue );
	void AddORFilter ( struct FName GroupName, struct FString FilterId, unsigned char FilterType, unsigned char FilterOperator, struct FString FilterValue );
	struct FName AddANDFilter ( struct FName GroupName );
};

UClass* UUTGameSearchCustom::pClassPointer = NULL;

// Class UTGame.UTUIResourceDataProvider
// 0x0000 (0x00B8 - 0x00B8)
class UUTUIResourceDataProvider : public UUDKUIResourceDataProvider
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46832 ];

		return pClassPointer;
	};

};

UClass* UUTUIResourceDataProvider::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_GameModeInfo
// 0x00A0 (0x0158 - 0x00B8)
class UUTUIDataProvider_GameModeInfo : public UUTUIResourceDataProvider
{
public:
	struct FString                                     GameMode;                                         		// 0x00B8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultMap;                                       		// 0x00C8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     GameSettingsClass;                                		// 0x00D8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     GameSearchClass;                                  		// 0x00E8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     OptionSet;                                        		// 0x00F8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0108 (0x0010) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreviewImageMarkup;                               		// 0x0118 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Prefixes;                                         		// 0x0128 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     IconImage;                                        		// 0x0138 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              IconU;                                            		// 0x0148 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              IconV;                                            		// 0x014C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              IconUL;                                           		// 0x0150 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              IconVL;                                           		// 0x0154 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46831 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_GameModeInfo::pClassPointer = NULL;

// Class UTGame.UTUIDataStore_MenuItems
// 0x0000 (0x0128 - 0x0128)
class UUTUIDataStore_MenuItems : public UUDKUIDataStore_MenuItems
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

UClass* UUTUIDataStore_MenuItems::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_MapInfo
// 0x0000 (0x00FC - 0x00FC)
class UUTUIDataProvider_MapInfo : public UUDKUIDataProvider_MapInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46939 ];

		return pClassPointer;
	};

	bool SupportedByCurrentGameMode ( );
	bool eventShouldBeFiltered ( );
};

UClass* UUTUIDataProvider_MapInfo::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_Mutator
// 0x0044 (0x00FC - 0x00B8)
class UUTUIDataProvider_Mutator : public UUTUIResourceDataProvider
{
public:
	struct FString                                     ClassName;                                        		// 0x00B8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x00C8 (0x0010) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GroupNames;                                       		// 0x00D8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SupportedGameTypes;                               		// 0x00E8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bStandaloneOnly : 1;                              		// 0x00F8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bOfficialMutator : 1;                             		// 0x00F8 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47011 ];

		return pClassPointer;
	};

	bool eventSupportsCurrentGameMode ( );
	bool eventShouldBeFiltered ( );
};

UClass* UUTUIDataProvider_Mutator::pClassPointer = NULL;

// Class UTGame.UTBot
// 0x01F8 (0x0790 - 0x0598)
class AUTBot : public AUDKBot
{
public:
	class APawn*                                       InstantWarningShooter;                            		// 0x0598 (0x0008) [0x0000000000000000]              
	float                                              LastWarningTime;                                  		// 0x05A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHuntPlayer : 1;                                  		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanFire : 1;                                     		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStrafeDir : 1;                                   		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bChangeDir : 1;                                   		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFrustrated : 1;                                  		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bInitLifeMessage : 1;                             		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bReachedGatherPoint : 1;                          		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bTacticalDoubleJump : 1;                          		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bWasNearObjective : 1;                            		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bHasFired : 1;                                    		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bForcedDirection : 1;                             		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bFireSuccess : 1;                                 		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bStoppedFiring : 1;                               		// 0x05A4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bMustCharge : 1;                                  		// 0x05A4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bPursuingFlag : 1;                                		// 0x05A4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bJustLanded : 1;                                  		// 0x05A4 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bRecommendFastMove : 1;                           		// 0x05A4 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bIgnoreEnemyChange : 1;                           		// 0x05A4 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bHasSuperWeapon : 1;                              		// 0x05A4 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bPendingDoubleJump : 1;                           		// 0x05A4 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bAllowedToImpactJump : 1;                         		// 0x05A4 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bScriptedFrozen : 1;                              		// 0x05A4 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bSendFlagMessage : 1;                             		// 0x05A4 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bForceNoDetours : 1;                              		// 0x05A4 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bShortCamp : 1;                                   		// 0x05A4 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bBetrayTeam : 1;                                  		// 0x05A4 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bSpawnedByKismet : 1;                             		// 0x05A4 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bFinalStretch : 1;                                		// 0x05A4 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bDirectHunt : 1;                                  		// 0x05A4 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bCheckDriverPickups : 1;                          		// 0x05A4 (0x0004) [0x0000000000002000] [0x20000000] ( CPF_Transient )
	unsigned long                                      bResetCombatTimer : 1;                            		// 0x05A4 (0x0004) [0x0000000000002000] [0x40000000] ( CPF_Transient )
	class AActor*                                      ImpactTarget;                                     		// 0x05A8 (0x0008) [0x0000000000000000]              
	float                                              ImpactJumpZ;                                      		// 0x05B0 (0x0004) [0x0000000000000000]              
	float                                              MaxSpecialJumpZ;                                  		// 0x05B4 (0x0004) [0x0000000000000000]              
	struct FName                                       OldMessageType;                                   		// 0x05B8 (0x0008) [0x0000000000000000]              
	int                                                OldMessageID;                                     		// 0x05C0 (0x0004) [0x0000000000000000]              
	int                                                LastTauntIndex;                                   		// 0x05C4 (0x0004) [0x0000000000000000]              
	class UClass*                                      KilledVehicleClass;                               		// 0x05C8 (0x0008) [0x0000000000000000]              
	struct FVector                                     HidingSpot;                                       		// 0x05D0 (0x000C) [0x0000000000000000]              
	float                                              Aggressiveness;                                   		// 0x05DC (0x0004) [0x0000000000000000]              
	float                                              LastAttractCheck;                                 		// 0x05E0 (0x0004) [0x0000000000000000]              
	class ANavigationPoint*                            BlockedPath;                                      		// 0x05E4 (0x0008) [0x0000000000000000]              
	float                                              AcquireTime;                                      		// 0x05EC (0x0004) [0x0000000000000000]              
	float                                              Aggression;                                       		// 0x05F0 (0x0004) [0x0000000000000000]              
	float                                              LoseEnemyCheckTime;                               		// 0x05F4 (0x0004) [0x0000000000000000]              
	class AActor*                                      StartleActor;                                     		// 0x05F8 (0x0008) [0x0000000000000000]              
	float                                              StartTacticalTime;                                		// 0x0600 (0x0004) [0x0000000000000000]              
	float                                              LastUnderFire;                                    		// 0x0604 (0x0004) [0x0000000000000000]              
	float                                              RetreatStartTime;                                 		// 0x0608 (0x0004) [0x0000000000000000]              
	float                                              ForcedFlagDropTime;                               		// 0x060C (0x0004) [0x0000000000000000]              
	float                                              BaseAlertness;                                    		// 0x0610 (0x0004) [0x0000000000000000]              
	float                                              Accuracy;                                         		// 0x0614 (0x0004) [0x0000000000000000]              
	float                                              BaseAggressiveness;                               		// 0x0618 (0x0004) [0x0000000000000000]              
	float                                              StrafingAbility;                                  		// 0x061C (0x0004) [0x0000000000000000]              
	float                                              CombatStyle;                                      		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              Tactics;                                          		// 0x0624 (0x0004) [0x0000000000000000]              
	float                                              ReactionTime;                                     		// 0x0628 (0x0004) [0x0000000000000000]              
	float                                              Jumpiness;                                        		// 0x062C (0x0004) [0x0000000000000000]              
	class UClass*                                      FavoriteWeapon;                                   		// 0x0630 (0x0008) [0x0000000000000000]              
	float                                              OldMessageTime;                                   		// 0x0638 (0x0004) [0x0000000000000000]              
	struct FString                                     GoalString;                                       		// 0x063C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SoakString;                                       		// 0x064C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AUTBot*                                      NextSquadMember;                                  		// 0x065C (0x0008) [0x0000000000000000]              
	float                                              ReTaskTime;                                       		// 0x0664 (0x0004) [0x0000000000000000]              
	class AUTDefensePoint*                             DefensePoint;                                     		// 0x0668 (0x0008) [0x0000000000000000]              
	class ANavigationPoint*                            DefensivePosition;                                		// 0x0670 (0x0008) [0x0000000000000000]              
	class AActor*                                      NoVehicleGoal;                                    		// 0x0678 (0x0008) [0x0000000000000000]              
	struct FVector                                     DirectionHint;                                    		// 0x0680 (0x000C) [0x0000000000000000]              
	float                                              StopStartTime;                                    		// 0x068C (0x0004) [0x0000000000000000]              
	float                                              LastRespawnTime;                                  		// 0x0690 (0x0004) [0x0000000000000000]              
	float                                              FailedHuntTime;                                   		// 0x0694 (0x0004) [0x0000000000000000]              
	class APawn*                                       FailedHuntEnemy;                                  		// 0x0698 (0x0008) [0x0000000000000000]              
	float                                              LastSearchTime;                                   		// 0x06A0 (0x0004) [0x0000000000000000]              
	float                                              LastSearchWeight;                                 		// 0x06A4 (0x0004) [0x0000000000000000]              
	float                                              CampTime;                                         		// 0x06A8 (0x0004) [0x0000000000000000]              
	int                                                NumRandomJumps;                                   		// 0x06AC (0x0004) [0x0000000000000000]              
	float                                              LastFireAttempt;                                  		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              GatherTime;                                       		// 0x06B4 (0x0004) [0x0000000000000000]              
	struct FName                                       OrderNames[ 0x10 ];                               		// 0x06B8 (0x0080) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       OldOrders;                                        		// 0x0738 (0x0008) [0x0000000000000000]              
	class AController*                                 OldOrderGiver;                                    		// 0x0740 (0x0008) [0x0000000000000000]              
	struct FVector                                     LastKnownPosition;                                		// 0x0748 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastKillerPosition;                               		// 0x0754 (0x000C) [0x0000000000000000]              
	class AActor*                                      ScriptedTarget;                                   		// 0x0760 (0x0008) [0x0000000000000000]              
	float                                              LastActionMusicUpdate;                            		// 0x0768 (0x0004) [0x0000000000000000]              
	float                                              LastTryHoverboardTime;                            		// 0x076C (0x0004) [0x0000000000000000]              
	class AActor*                                      LastFireTarget;                                   		// 0x0770 (0x0008) [0x0000000000000000]              
	float                                              LastCanAttackCheckTime;                           		// 0x0778 (0x0004) [0x0000000000000000]              
	float                                              LastInjuredVoiceMessageTime;                      		// 0x077C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __CustomActionFunc__Delegate;                     		// 0x0780 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47432 ];

		return pClassPointer;
	};

	bool eventHandlePathObstruction ( class AActor* BlockedBy );
	void UnderLift ( class ALiftCenter* M );
	void PerformCustomAction ( struct FScriptDelegate ActionFunc );
	bool CustomActionFunc ( class AUTBot* B );
	void StopMovement ( );
	bool FocusOnLeader ( unsigned long bLeaderFiring );
	bool IsShootingObjective ( );
	bool Stopped ( );
	bool FindViewSpot ( );
	bool IsHunting ( );
	bool EngageDirection ( struct FVector StrafeDir, unsigned long bForced );
	bool IsStrafing ( );
	bool DefendMelee ( float Dist );
	void DoRetreat ( );
	void DoTacticalMove ( );
	void DoCharge ( );
	void DoStakeOut ( );
	bool LoseEnemy ( );
	bool LostContact ( float MaxTime );
	float GetDesiredOffset ( );
	void ForceGiveWeapon ( );
	void Celebrate ( );
	void EnableBumps ( );
	void WanderOrCamp ( );
	void MoveAwayFrom ( class AController* C );
	void MoveToDefensePoint ( );
	bool ShouldDefendPosition ( );
	bool IsDefending ( );
	void OnAIFreeze ( class UUTSeqAct_AIFreeze* FreezeAction );
	bool IsRetreating ( );
	void DamageAttitudeTo ( class AController* Other, float Damage );
	bool SuperPickupNotSpokenFor ( class AUTPickupFactory* P );
	float eventSuperDesireability ( class APickupFactory* P );
	float eventRatePickup ( class AActor* PickupHolder, class UClass* InvClass );
	bool NeedWeapon ( );
	class AActor* FaceActor ( float StrafingModifier );
	bool ShouldStrafeTo ( class AActor* WayPoint );
	class AActor* FaceMoveTarget ( );
	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType );
	bool TryToDuck ( struct FVector duckDir, unsigned long bReversed );
	void ChangeStrafe ( );
	bool TryWallDodge ( struct FVector HitNormal, class AActor* HitActor );
	void eventMissedDodge ( );
	void eventNotifyFallingHitWall ( struct FVector HitNormal, class AActor* HitActor );
	void eventReceiveRunOverWarning ( class AUDKVehicle* V, float projSpeed, struct FVector VehicleDir );
	void eventReceiveWarning ( class APawn* shooter, float projSpeed, struct FVector FireDir );
	void DelayedInstantWarning ( );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void ReceiveProjectileWarning ( class AProjectile* Proj );
	void eventDelayedWarning ( );
	bool TryDuckTowardsMoveTarget ( struct FVector Dir, struct FVector Y );
	struct FRotator GetAdjustedAimFor ( class AWeapon* InWeapon, struct FVector projStart );
	float eventAdjustAimError ( float TargetDist, unsigned long bInstantProj );
	bool CheckFutureSight ( float DeltaTime );
	struct FVector GetDirectionHint ( );
	bool FindBestPathToward ( class AActor* A, unsigned long bCheckedReach, unsigned long bAllowDetour );
	bool eventAllowDetourTo ( class ANavigationPoint* N );
	bool SetRouteToGoal ( class AActor* A );
	bool StartMoveToward ( class AActor* O );
	void TimedDodgeToMoveTarget ( );
	void eventNotifyPostLanded ( );
	bool eventNotifyLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void SetFall ( );
	bool PriorityObjective ( );
	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal );
	bool AdjustAround ( class APawn* Other );
	void ClearPathFor ( class AController* C );
	bool CheckPathToGoalAround ( class APawn* P );
	void Restart ( unsigned long bVehicleTransition );
	bool FindRoamDest ( );
	void eventSoakStop ( struct FString problem );
	bool PickRetreatDestination ( );
	void TossFlagToPlayer ( class AController* OrderGiver );
	bool FindInventoryGoal ( float BestWeight );
	bool FindSuperPickup ( float MaxDist );
	void ChooseAttackMode ( );
	void DoRangedAttackOn ( class AActor* A );
	void FightEnemy ( unsigned long bCanCharge, float EnemyStrength );
	void VehicleFightEnemy ( unsigned long bCanCharge, float EnemyStrength );
	bool DoWaitForLanding ( );
	void eventDelayedLeaveVehicle ( );
	void LeaveVehicle ( unsigned long bBlocking );
	void EnterVehicle ( class AVehicle* V );
	void eventExecuteWhatToDoNext ( );
	void eventWhatToDoNext ( );
	void SetAlertness ( float NewAlertness );
	void SetPeripheralVision ( );
	void SetMaxDesiredSpeed ( );
	void ResetSkill ( );
	void Initialize ( float InSkill, struct FCharacterInfo* BotInfo );
	void Possess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void Reset ( );
	void eventNotifyMissedJump ( );
	void eventNotifyJumpApex ( );
	void eventMayDodgeToMoveTarget ( );
	void eventNotifyPhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	bool StrafeFromDamage ( float Damage, class UClass* DamageType, unsigned long bFindDest );
	void EnemyChanged ( unsigned long bNewEnemyVisible );
	void SetEnemyInfo ( unsigned long bNewEnemyVisible );
	float RelativeStrength ( class APawn* Other );
	bool AssignSquadResponsibility ( );
	void FreePoint ( );
	bool IsSniping ( );
	void CheckIfShouldCrouch ( struct FVector StartPosition, struct FVector TargetPosition, float probability );
	bool CanStakeOut ( );
	bool ClearShot ( struct FVector TargetLoc, unsigned long bImmediateFire );
	void SetAttractionState ( );
	void eventSeePlayer ( class APawn* SeenPlayer );
	void eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType );
	void ClearTemporaryOrders ( );
	void SetTemporaryOrders ( struct FName NewOrders, class AController* OrderGiver );
	void SetBotOrders ( struct FName NewOrders, class AController* OrderGiver, unsigned long bShouldAck );
	void SendMessage ( class APlayerReplicationInfo* Recipient, struct FName MessageType, float Wait, class UClass* DamageType );
	void YellAt ( class APlayerReplicationInfo* Moron );
	struct FName GetOrders ( );
	void DisplayDebug ( class AHUD* HUD, float* YL, float* YPos );
	bool CanCombo ( );
	bool CanComboMoving ( );
	bool ProficientWithWeapon ( );
	float WeaponPreference ( class AWeapon* W );
	float RateWeapon ( class AWeapon* W );
	void OnAIStopFire ( class UUTSeqAct_AIStopFire* FireAction );
	void StopFiring ( );
	void TimedFireWeaponAtScriptedTarget ( );
	void OnAIStartFireAt ( class UUTSeqAct_AIStartFireAt* FireAction );
	bool CanAttack ( class AActor* Other );
	bool FireWeaponAt ( class AActor* A );
	void TimedFireWeaponAtEnemy ( );
	bool ShouldFireAgain ( );
	bool WeaponFireAgain ( unsigned long bFinishedFire );
	void ReadyForLift ( );
	void WaitForMover ( class AInterpActor* M );
	void ResetDoubleJump ( );
	void eventTimeDJReset ( );
	bool CanImpactJump ( );
	void SetCombatTimer ( );
	void Startle ( class AActor* Feared );
	void FearThisSpot ( class AUTAvoidMarker* aSpot );
	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	void eventSetupSpecialPathAbilities ( );
	void NotifyAddInventory ( class AInventory* NewItem );
	bool HasTimedPowerup ( );
	bool LandingShake ( );
	void eventSpawnedByKismet ( );
	void PostBeginPlay ( );
	void Destroyed ( );
	void PawnDied ( class APawn* P );
	void StartMonitoring ( class APawn* P, float MaxDist );
	void WasKilledBy ( class AController* Other );
	void EnemyJustTeleported ( );
};

UClass* AUTBot::pClassPointer = NULL;

// Class UTGame.UTVictoryMessage
// 0x0030 (0x00B8 - 0x0088)
class UUTVictoryMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              VictorySounds[ 0x6 ];                             		// 0x0088 (0x0030) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47436 ];

		return pClassPointer;
	};

	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* UUTVictoryMessage::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_MenuOption
// 0x0000 (0x0120 - 0x0120)
class UUTUIDataProvider_MenuOption : public UUDKUIDataProvider_MenuOption
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47696 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_MenuOption::pClassPointer = NULL;

// Class UTGame.GFxUI_PauseMenu
// 0x0058 (0x024C - 0x01F4)
class UGFxUI_PauseMenu : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PauseMC;                                          		// 0x01FC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  OverlayMC;                                        		// 0x0204 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Btn_Resume_Wrapper;                               		// 0x020C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Btn_Exit_Wrapper;                                 		// 0x0214 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              Btn_ResumeMC;                                     		// 0x021C (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              Btn_ExitMC;                                       		// 0x0224 (0x0008) [0x0000000000000000]              
	struct FString                                     ResumeString;                                     		// 0x022C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ExitString;                                       		// 0x023C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47839 ];

		return pClassPointer;
	};

	void UT_ConsoleCommand ( struct FString Cmd, unsigned long bWriteToLog );
	void OnCloseAnimationComplete ( );
	void OnPlayAnimationComplete ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void OnPressExitButton ( struct FEventData ev );
	void OnPressResumeButton ( struct FEventData ev );
	bool Start ( unsigned long StartPaused );
};

UClass* UGFxUI_PauseMenu::pClassPointer = NULL;

// Class UTGame.GFxUIFrontEnd_TitleScreen
// 0x0071 (0x0255 - 0x01E4)
class UGFxUIFrontEnd_TitleScreen : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  TitleScreenMC;                                    		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MainMenuMC;                                       		// 0x01EC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuButtonsMC;                                    		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BlackMC;                                          		// 0x01FC (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MenuBtn1MC;                                       		// 0x0204 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MenuBtn2MC;                                       		// 0x020C (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MenuBtn3MC;                                       		// 0x0214 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MenuBtn4MC;                                       		// 0x021C (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MenuBtn5MC;                                       		// 0x0224 (0x0008) [0x0000000000000000]              
	class UGFxClikWidget*                              MenuBtn6MC;                                       		// 0x022C (0x0008) [0x0000000000000000]              
	struct FString                                     InstantActionMap;                                 		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CampaignMap;                                      		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Selection;                                        		// 0x0254 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47864 ];

		return pClassPointer;
	};

	void UT_ConsoleCommand ( struct FString Cmd, unsigned long bWriteToLog );
	void OnCloseAnimationComplete ( );
	void PlayCloseAnimation ( );
	void OnMenuButtonPress ( struct FEventData ev );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool Start ( unsigned long StartPaused );
};

UClass* UGFxUIFrontEnd_TitleScreen::pClassPointer = NULL;

// Class UTGame.GFxUILeaderboard
// 0x00F0 (0x02E4 - 0x01F4)
class UGFxUILeaderboard : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  LeaderboardMC;                                    		// 0x01FC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  OverlayMC;                                        		// 0x0204 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleMC;                                          		// 0x020C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListMC;                                           		// 0x0214 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CountMC;                                          		// 0x021C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CountTF;                                          		// 0x0224 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Title_TitleGMC;                                   		// 0x022C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleTF;                                          		// 0x0234 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleGMC;                                         		// 0x023C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListHeaderMC;                                     		// 0x0244 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListScoreTF;                                      		// 0x024C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ListTitleTF;                                      		// 0x0254 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FooterMC;                                         		// 0x025C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FooterItemMC;                                     		// 0x0264 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PlayerRow;                                        		// 0x026C (0x0008) [0x0000000000000000]              
	unsigned long                                      bPlayerRowTween : 1;                              		// 0x0274 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0274 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bResolvingLocalPlayer : 1;                        		// 0x0274 (0x0004) [0x0000000000000000] [0x00000004] 
	class UGFxObject*                                  Footer_NameTF;                                    		// 0x0278 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreLabelTF;                              		// 0x0280 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreTF;                                   		// 0x0288 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_RankLabelTF;                               		// 0x0290 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_RankTF;                                    		// 0x0298 (0x0008) [0x0000000000000000]              
	TArray< struct FListRow >                          ListItems;                                        		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LeaderboardReadCount;                             		// 0x02B0 (0x0004) [0x0000000000000000]              
	TArray< struct FUILeaderboardEntry >               LeaderboardData;                                  		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineStatsInterface*                       OSI;                                              		// 0x02C4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x02CC (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UUTLeaderboardRead*                          LeaderboardStatsRead;                             		// 0x02D4 (0x0008) [0x0000000000000000]              
	float                                              LastInitialReadAttempt;                           		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                ReadAttemptCount;                                 		// 0x02E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47895 ];

		return pClassPointer;
	};

	void ReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	void OnlineCleanup ( );
	void Tick ( float DeltaTime );
	void DoInitialLeaderboardRead ( );
	void OnlineInit ( );
	void OnOpenAnimComplete ( );
	void OnCloseAnimComplete ( );
	void ProcessTweenCallback ( struct FString Callback, class UGFxObject* TargetMC );
	void TweenPlayerRow ( class UGFxObject* RowMC );
	void FloatLeaderboardAnimationY ( unsigned long Direction );
	void FloatLeaderboardAnimationX ( unsigned long Direction );
	void UpdateFooter ( struct FUILeaderboardEntry FooterData );
	void UpdateHeaders ( );
	void SetPlayerRow ( class UGFxObject* UpdatedPlayerRow );
	void UpdateRow ( struct FListRow CurRow, struct FUILeaderboardEntry CurData );
	void UpdateLeaderboardLists ( );
	void Draw ( );
	void SetupList ( );
	void ConfigLeaderboard ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UGFxUILeaderboard::pClassPointer = NULL;

// Class UTGame.GFxUIScoreboard
// 0x03CC (0x05C0 - 0x01F4)
class UGFxUIScoreboard : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ScoreboardMC;                                     		// 0x01FC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  OverlayMC;                                        		// 0x0204 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleMC;                                          		// 0x020C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BlueTeamMC;                                       		// 0x0214 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RedTeamMC;                                        		// 0x021C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TimeMC;                                           		// 0x0224 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TimeTF;                                           		// 0x022C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Title_TitleGMC;                                   		// 0x0234 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleTF;                                          		// 0x023C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TitleGMC;                                         		// 0x0244 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BlueHeaderMC;                                     		// 0x024C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BlueScoreTF;                                      		// 0x0254 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BlueTitleTF;                                      		// 0x025C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RedHeaderMC;                                      		// 0x0264 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RedScoreTF;                                       		// 0x026C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  RedTitleTF;                                       		// 0x0274 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FooterMC;                                         		// 0x027C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FooterItemMC;                                     		// 0x0284 (0x0008) [0x0000000000000000]              
	unsigned char                                      RedTeamIndex;                                     		// 0x028C (0x0001) [0x0000000000000000]              
	unsigned char                                      BlueTeamIndex;                                    		// 0x028D (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  PlayerRow;                                        		// 0x0290 (0x0008) [0x0000000000000000]              
	unsigned long                                      bPlayerRowTween : 1;                              		// 0x0298 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTeamGame : 1;                                    		// 0x0298 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0298 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FScoreEntry                                 RedEntries[ 0xC ];                                		// 0x029C (0x0150) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScoreEntry                                 BlueEntries[ 0xC ];                               		// 0x03EC (0x0150) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScoreboardState                            PreviousState;                                    		// 0x053C (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScoreRow >                         BlueItems;                                        		// 0x0564 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScoreRow >                         RedItems;                                         		// 0x0574 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NameCnt;                                          		// 0x0584 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  Footer_NameTF;                                    		// 0x0588 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_PlaceLabelTF;                              		// 0x0590 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_PlaceTF;                                   		// 0x0598 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreLabelTF;                              		// 0x05A0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreTF;                                   		// 0x05A8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_DeathsLabelTF;                             		// 0x05B0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Footer_DeathsTF;                                  		// 0x05B8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47996 ];

		return pClassPointer;
	};

	struct FString GetTimeOnline ( class AUTPlayerReplicationInfo* PRI );
	bool IsValidScoreboardPlayer ( class AUTPlayerReplicationInfo* PRI );
	void ProcessTweenCallback ( struct FString Callback, class UGFxObject* TargetMC );
	void TweenPlayerRow ( class UGFxObject* RowMC );
	void FloatScoreboardAnimationY ( unsigned long Direction );
	void FloatScoreboardAnimationX ( unsigned long Direction );
	void UpdateFooter ( class AUTGameReplicationInfo* GRI, class AUTPlayerReplicationInfo* LocalPlayerPRI, unsigned char PRIIndex );
	void UpdateHeaders ( class AUTGameReplicationInfo* GRI );
	struct FString FormatTime ( int Seconds );
	void UpdatePreviousState ( class AUTGameReplicationInfo* GRI );
	void SetPlayerRow ( class UGFxObject* UpdatedPlayerRow );
	void Tick ( float DeltaTime );
	void UpdateRow ( struct FScoreRow ThisRow, class AUTPlayerReplicationInfo* ThisPRI, struct FScoreEntry* ThisEntry );
	void ClearRow ( struct FScoreRow ThisRow );
	void UpdatePRILists ( class AUTGameReplicationInfo* GRI );
	void Draw ( );
	void SetupRedTeam ( );
	void SetupBlueTeam ( );
	void ConfigScoreboard ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UGFxUIScoreboard::pClassPointer = NULL;

// Class UTGame.GFxUnitTest_ActionScriptThree
// 0x0008 (0x01EC - 0x01E4)
class UGFxUnitTest_ActionScriptThree : public UGFxMoviePlayer
{
public:
	class UGFxUnitTest_ActionScriptThreeWidget*        UnitTestWidget;                                   		// 0x01E4 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48134 ];

		return pClassPointer;
	};

	bool Callback_RunUnrealScriptTests ( );
	bool Callback_StructParam ( struct FUnitTestMultiMemberStruct StructParam );
	bool Callback_ArrayParam ( TArray< float > ArrayParam );
	bool Callback_MixedParam ( float NumParam, unsigned long BoolParam, struct FString StringParam );
	bool Callback_StringParam ( struct FString StringParam );
	bool Callback_BoolParam ( unsigned long BoolParam );
	bool Callback_NumParam ( float NumParam );
	bool Callback_UIntParam ( int UIntParam );
	bool Callback_IntParam ( int IntParam );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void eventPostWidgetInit ( );
};

UClass* UGFxUnitTest_ActionScriptThree::pClassPointer = NULL;

// Class UTGame.GFxUnitTest_ActionScriptThreeWidget
// 0x0064 (0x0104 - 0x00A0)
class UGFxUnitTest_ActionScriptThreeWidget : public UGFxObject
{
public:
	float                                              TestFloat;                                        		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TestInt;                                          		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                TestUInt;                                         		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      TestBool : 1;                                     		// 0x00AC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     TestString;                                       		// 0x00B0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< float >                                    TestArray;                                        		// 0x00C0 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FUnitTestMultiMemberStruct                  TestStruct;                                       		// 0x00D0 (0x0024) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __DelegateTest__Delegate;                         		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48136 ];

		return pClassPointer;
	};

	void AS_NonExistantFunctionInvoke ( float NumParam, unsigned long BoolParam, struct FString StringParam );
	void AS_NonExistantFunction ( float NumParam, unsigned long BoolParam, struct FString StringParam );
	void AS_ForceCallDelegate ( );
	void Callback_Delegate ( );
	void AS_SetDelegateTest ( struct FScriptDelegate Callback );
	void AS_ReturnValueArrayAsObjVerification ( unsigned long bVerified );
	class UGFxObject* AS_ReturnValueArrayAsObjTest ( );
	void AS_ReturnValueObjArrayVerification ( unsigned long bVerified );
	TArray< class UGFxObject* > AS_ReturnValueObjArrayTest ( );
	void AS_ReturnValueGFxObjectVerification ( unsigned long bVerified );
	class UGFxObject* AS_ReturnValueGFxObjectTest ( );
	void AS_ReturnValueStringVerification ( unsigned long bVerified );
	struct FString AS_ReturnValueStringTest ( );
	void AS_ReturnValueNumberVerification ( unsigned long bVerified );
	float AS_ReturnValueNumberTest ( );
	void AS_ReturnValueIntVerification ( unsigned long bVerified );
	int AS_ReturnValueIntTest ( );
	void AS_StructParam ( struct FUnitTestMultiMemberStruct StructParam );
	void AS_ArrayParam ( TArray< float > ArrayParam );
	void AS_MixedParamInvoke ( float NumParam, unsigned long BoolParam, struct FString StringParam );
	void AS_MixedParam ( float NumParam, unsigned long BoolParam, struct FString StringParam );
	void AS_StringParamInvoke ( struct FString StringParam );
	void AS_StringParam ( struct FString StringParam );
	void AS_BoolParamInvoke ( unsigned long BoolParam );
	void AS_BoolParam ( unsigned long BoolParam );
	void AS_NumberParamInvoke ( float NumParam );
	void AS_NumberParam ( float NumParam );
	void AS_UIntParamInvoke ( int UIntParam );
	void AS_UIntParam ( int UIntParam );
	void AS_IntParamInvoke ( int IntParam );
	void AS_IntParam ( int IntParam );
	void AS_EndUnrealScriptTests ( );
	bool IsSameAsTestStruct ( struct FUnitTestMultiMemberStruct* InStruct );
	void RunUnrealScriptTests ( );
	void DelegateTest ( );
};

UClass* UGFxUnitTest_ActionScriptThreeWidget::pClassPointer = NULL;

// Class UTGame.MorphTestActor
// 0x0010 (0x02FC - 0x02EC)
class AMorphTestActor : public ASkeletalMeshActor
{
public:
	class AActor*                                      LookAtActor;                                      		// 0x02EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinMorphDistance;                                 		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxMorphDistance;                                 		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48299 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaSeconds );
};

UClass* AMorphTestActor::pClassPointer = NULL;

// Class UTGame.PhysAnimTestActor
// 0x00A8 (0x0334 - 0x028C)
class APhysAnimTestActor : public AActor
{
public:
	TArray< struct FName >                             LowerBoneNames;                                   		// 0x028C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             LinearBoneSpringNames;                            		// 0x029C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             AngularBoneSpringNames;                           		// 0x02AC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x02BC (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      CurrentState;                                     		// 0x02C4 (0x0001) [0x0000000000000000]              
	unsigned long                                      bBlendToGetUp : 1;                                		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBlendingBack : 1;                                		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRampingDownMotors : 1;                           		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNextPokeKnocksDown : 1;                          		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              GetUpBlendStartTime;                              		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              GetUpBlendTime;                                   		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GetUpToIdleTime;                                  		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActorOriginHeight;                                		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PokePauseTime;                                    		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PokeBlendTime;                                    		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendBackStartTime;                               		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              MotorDownStartTime;                               		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              MotorDownTime;                                    		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MotorDownAnimTime;                                		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendStaggerAnimTime;                             		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StaggerSpeedAdj;                                  		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StaggerVel;                                       		// 0x02FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MoveDir;                                          		// 0x0300 (0x000C) [0x0000000000000000]              
	float                                              AngularHipDriveScale;                             		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StaggerMuscleScale;                               		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              BlendNode;                                        		// 0x0314 (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           GetUpNode;                                        		// 0x031C (0x0008) [0x0000000000000000]              
	class UAnimNodeSequence*                           RunNode;                                          		// 0x0324 (0x0008) [0x0000000000000000]              
	class URB_BodyInstance*                            HipBody;                                          		// 0x032C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48313 ];

		return pClassPointer;
	};

	void eventOnAnimEnd ( class UAnimNodeSequence* InSeqNode, float PlayedTime, float ExcessTime );
	void Tick ( float DeltaSeconds );
	void RecoverFromRagdoll ( );
	void SetBoneSprings ( unsigned long bEnabled );
	bool IsAngularBoneSpringName ( struct FName InName );
	bool IsLinearBoneSpringName ( struct FName InName );
	void SetLowerFixed ( );
	void DetachAttachments ( );
	bool IsLowerBodyName ( struct FName InName );
	void SetBodiesFixed ( unsigned long InFixed );
	void EnableMotors ( unsigned long InEnabled );
	void OnSetPATAState ( class USeqAct_SetPATAState* Action );
	void SetPATAState ( unsigned char NewState );
	void EndGrab ( );
	bool PreGrab ( );
	bool PrePokeActor ( struct FVector PokeDir );
	void PostBeginPlay ( );
};

UClass* APhysAnimTestActor::pClassPointer = NULL;

// Class UTGame.SeqAct_SetPATAState
// 0x0001 (0x0151 - 0x0150)
class USeqAct_SetPATAState : public USequenceAction
{
public:
	unsigned char                                      NewState;                                         		// 0x0150 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48343 ];

		return pClassPointer;
	};

};

UClass* USeqAct_SetPATAState::pClassPointer = NULL;

// Class UTGame.SeqAct_SetWheelParticles
// 0x0008 (0x0158 - 0x0150)
class USeqAct_SetWheelParticles : public USequenceAction
{
public:
	class UParticleSystem*                             NewParticleSystem;                                		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48415 ];

		return pClassPointer;
	};

};

UClass* USeqAct_SetWheelParticles::pClassPointer = NULL;

// Class UTGame.SeqAct_UTCrowdSpawner
// 0x0000 (0x019C - 0x019C)
class USeqAct_UTCrowdSpawner : public USeqAct_GameCrowdSpawner
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48418 ];

		return pClassPointer;
	};

};

UClass* USeqAct_UTCrowdSpawner::pClassPointer = NULL;

// Class UTGame.UTStatsReadAchievements
// 0x0000 (0x00C0 - 0x00C0)
class UUTStatsReadAchievements : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48554 ];

		return pClassPointer;
	};

};

UClass* UUTStatsReadAchievements::pClassPointer = NULL;

// Class UTGame.UTStatsWriteAchievements
// 0x0000 (0x00C4 - 0x00C4)
class UUTStatsWriteAchievements : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48555 ];

		return pClassPointer;
	};

};

UClass* UUTStatsWriteAchievements::pClassPointer = NULL;

// Class UTGame.UTActorFactoryAI
// 0x0004 (0x00D8 - 0x00D4)
class UUTActorFactoryAI : public UActorFactoryAI
{
public:
	unsigned long                                      bForceDeathmatchAI : 1;                           		// 0x00D4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseCompartment : 1;                              		// 0x00D4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48556 ];

		return pClassPointer;
	};

	void eventPostCreateActor ( class AActor* NewActor, class USeqAct_ActorFactory* ActorFactoryData );
};

UClass* UUTActorFactoryAI::pClassPointer = NULL;

// Class UTGame.UTSquadAI
// 0x00D8 (0x03BC - 0x02E4)
class AUTSquadAI : public AUDKSquadAI
{
public:
	class AController*                                 SquadLeader;                                      		// 0x02E4 (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    LeaderPRI;                                        		// 0x02EC (0x0008) [0x0000000000000020]              ( CPF_Net )
	class AUTSquadAI*                                  NextSquad;                                        		// 0x02F4 (0x0008) [0x0000000000000000]              
	int                                                Size;                                             		// 0x02FC (0x0004) [0x0000000000000000]              
	class AUTBot*                                      SquadMembers;                                     		// 0x0300 (0x0008) [0x0000000000000000]              
	struct FString                                     SupportString;                                    		// 0x0308 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DefendString;                                     		// 0x0318 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttackString;                                     		// 0x0328 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HoldString;                                       		// 0x0338 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FreelanceString;                                  		// 0x0348 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SupportStringTrailer;                             		// 0x0358 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FName                                       CurrentOrders;                                    		// 0x0368 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class APawn*                                       Enemies[ 0x8 ];                                   		// 0x0370 (0x0040) [0x0000000000000000]              
	int                                                MaxSquadSize;                                     		// 0x03B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFreelance : 1;                                   		// 0x03B4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bFreelanceAttack : 1;                             		// 0x03B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFreelanceDefend : 1;                             		// 0x03B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRoamingSquad : 1;                                		// 0x03B4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAddTransientCosts : 1;                           		// 0x03B4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bShouldUseGatherPoints : 1;                       		// 0x03B4 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              FormationSize;                                    		// 0x03B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48565 ];

		return pClassPointer;
	};

	bool HasOtherVisibleEnemy ( class AUTBot* B );
	void ModifyAggression ( class AUTBot* B, float* Aggression );
	void MarkHuntingSpots ( class AUTBot* B );
	bool HandlePathObstruction ( class AUTBot* B, class AActor* BlockedBy );
	bool AcceptableDefensivePosition ( class ANavigationPoint* N, class AUTBot* B );
	float RateDefensivePosition ( class ANavigationPoint* N, class AUTBot* CurrentBot, class AActor* Center );
	class ANavigationPoint* FindDefensivePositionFor ( class AUTBot* B );
	float GetMaxDefenseDistanceFrom ( class AActor* Center, class AUTBot* B );
	bool FriendlyToward ( class APawn* Other );
	bool IsDefending ( class AUTBot* B );
	bool ClearPathFor ( class AController* C );
	bool PickRetreatDestination ( class AUTBot* B );
	bool BeDevious ( class APawn* Enemy );
	void DisplayDebug ( class AHUD* HUD, float* YL, float* YPos );
	class AUTBot* PickBotToReassign ( );
	float BotSuitability ( class AUTBot* B );
	bool CheckSquadObjectives ( class AUTBot* B );
	bool CheckSuperItem ( class AUTBot* B, float SuperDist );
	bool ShouldCheckSuperVehicle ( class AUTBot* B );
	bool OverrideFollowPlayer ( class AUTBot* B );
	float VehicleDesireability ( class AUTVehicle* V, class AUTBot* B );
	bool ShouldUseHoverboard ( class AUTBot* B );
	bool CheckHoverboard ( class AUTBot* B );
	bool CheckVehicle ( class AUTBot* B );
	bool GotoVehicle ( class AUTVehicle* SquadVehicle, class AUTBot* B );
	bool EnterAndExitVehicle ( class AUTBot* B );
	bool GetOnHoverboard ( class AUTBot* B );
	bool IsOnPathToSquadObjective ( class AActor* Goal );
	void BotEnteredVehicle ( class AUTBot* B );
	bool NeverBail ( class APawn* P );
	bool AllowContinueOnFoot ( class AUTBot* B, class AUTVehicle* V );
	float MaxVehicleDist ( class APawn* P );
	bool AssignSquadResponsibility ( class AUTBot* B );
	void AddTransientCosts ( class AUTBot* B, float F );
	bool AllowTaunt ( class AUTBot* B );
	bool TellBotToFollow ( class AUTBot* B, class AController* C );
	void PickNewLeader ( );
	int GetSize ( );
	struct FString GetShortOrderStringFor ( class AUTPlayerReplicationInfo* PRI );
	struct FString GetOrderStringFor ( class AUTPlayerReplicationInfo* PRI );
	struct FName GetOrders ( );
	void Retask ( class AUTBot* B );
	void SetObjective ( class AUTGameObjective* O, unsigned long bForceUpdate );
	void SetDefenseScriptFor ( class AUTBot* B );
	void AddBot ( class AUTBot* B );
	void RemoveBot ( class AUTBot* B );
	void RemovePlayer ( class APlayerController* P );
	void eventSetLeader ( class AController* C );
	bool FindPathToObjective ( class AUTBot* B, class AActor* O );
	void LeaveVehicleAtParkingSpot ( class AUTBot* B, class AActor* O );
	bool MustCompleteOnFoot ( class AActor* O, class APawn* P );
	bool LeaveVehicleToReachObjective ( class AUTBot* B, class AActor* O );
	bool CloseEnoughToObjective ( class AUTBot* B, class AActor* O );
	bool TryToIntercept ( class AUTBot* B, class APawn* P, class AActor* RouteGoal );
	void SetAlternatePathTo ( class ANavigationPoint* NewRouteObjective, class AUTBot* RouteMaker );
	bool ShouldUseAlternatePaths ( );
	void Initialize ( class AUTTeamInfo* T, class AUTGameObjective* O, class AController* C );
	void MergeWith ( class AUTSquadAI* S );
	bool CloseToLeader ( class APawn* P );
	bool NearFormationCenter ( class APawn* P );
	bool WanderNearLeader ( class AUTBot* B );
	bool WaitAtThisPosition ( class APawn* P );
	bool ShouldDeferTo ( class AController* C );
	float AssessThreat ( class AUTBot* B, class APawn* NewThreat, unsigned long bThreatVisible );
	bool UnderFire ( class APawn* NewThreat, class AUTBot* Ignored );
	float ModifyThreat ( float Current, class APawn* NewThreat, unsigned long bThreatVisible, class AUTBot* B );
	bool FindNewEnemyFor ( class AUTBot* B, unsigned long bSeeEnemy );
	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType );
	void RemoveEnemy ( class APawn* E );
	bool IsOnSquad ( class AController* C );
	unsigned char PriorityObjective ( class AUTBot* B );
	bool SetEnemy ( class AUTBot* B, class APawn* NewEnemy );
	bool ValidEnemy ( class APawn* NewEnemy );
	bool AddEnemy ( class APawn* NewEnemy );
	bool MustKeepEnemy ( class APawn* E );
	bool LostEnemy ( class AUTBot* B );
	class AActor* FormationCenter ( class AController* C );
	struct FRotator GetFacingRotation ( );
	class AUTVehicle* GetLinkVehicle ( class AUTBot* B );
	class AActor* SetFacingActor ( class AUTBot* B );
	bool AllowImpactJumpBy ( class AUTBot* B );
	void Destroyed ( );
	bool AllowDetourTo ( class AUTBot* B, class ANavigationPoint* N );
	bool ShouldSuppressEnemy ( class AUTBot* B );
	void CriticalObjectiveWarning ( class APawn* NewEnemy );
	void Reset ( );
};

UClass* AUTSquadAI::pClassPointer = NULL;

// Class UTGame.UTActorFactoryPickup
// 0x0008 (0x00A4 - 0x009C)
class UUTActorFactoryPickup : public UActorFactory
{
public:
	class UClass*                                      InventoryClass;                                   		// 0x009C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48567 ];

		return pClassPointer;
	};

	void eventPostCreateActor ( class AActor* NewActor, class USeqAct_ActorFactory* ActorFactoryData );
};

UClass* UUTActorFactoryPickup::pClassPointer = NULL;

// Class UTGame.UTDroppedPickup
// 0x0020 (0x02C8 - 0x02A8)
class AUTDroppedPickup : public ADroppedPickup
{
public:
	class UPrimitiveComponent*                         PickupMesh;                                       		// 0x02A8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    PickupParticles;                                  		// 0x02B0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              StartScale;                                       		// 0x02B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPickupable : 1;                                  		// 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 
	class ULightEnvironmentComponent*                  MyLightEnvironment;                               		// 0x02C0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48574 ];

		return pClassPointer;
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventSetPickupParticles ( class UParticleSystemComponent* NewPickupParticles );
	void eventSetPickupMesh ( class UPrimitiveComponent* NewPickupMesh );
	void eventPreBeginPlay ( );
};

UClass* AUTDroppedPickup::pClassPointer = NULL;

// Class UTGame.UTActorFactoryTeamStaticMesh
// 0x0000 (0x00B0 - 0x00B0)
class UUTActorFactoryTeamStaticMesh : public UActorFactoryStaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48576 ];

		return pClassPointer;
	};

};

UClass* UUTActorFactoryTeamStaticMesh::pClassPointer = NULL;

// Class UTGame.UTTeamStaticMesh
// 0x001B (0x02B4 - 0x0299)
class AUTTeamStaticMesh : public AStaticMeshActor
{
public:
	TArray< class UMaterialInterface* >                TeamMaterials;                                    		// 0x029C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UMaterial*                                   NeutralMaterial;                                  		// 0x02AC (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48578 ];

		return pClassPointer;
	};

	void SetTeamNum ( unsigned char NewTeam );
	void eventPreBeginPlay ( );
};

UClass* AUTTeamStaticMesh::pClassPointer = NULL;

// Class UTGame.UTActorFactoryUTKActor
// 0x0000 (0x00E4 - 0x00E4)
class UUTActorFactoryUTKActor : public UActorFactoryRigidBody
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48579 ];

		return pClassPointer;
	};

};

UClass* UUTActorFactoryUTKActor::pClassPointer = NULL;

// Class UTGame.UTKActor
// 0x0000 (0x0404 - 0x0404)
class AUTKActor : public AUDKKActorBreakable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48581 ];

		return pClassPointer;
	};

};

UClass* AUTKActor::pClassPointer = NULL;

// Class UTGame.UTActorFactoryVehicle
// 0x0005 (0x00A9 - 0x00A4)
class UUTActorFactoryVehicle : public UActorFactoryVehicle
{
public:
	unsigned long                                      bTeamLocked : 1;                                  		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bKeyVehicle : 1;                                  		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      TeamNum;                                          		// 0x00A8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48582 ];

		return pClassPointer;
	};

	void eventPostCreateActor ( class AActor* NewActor, class USeqAct_ActorFactory* ActorFactoryData );
};

UClass* UUTActorFactoryVehicle::pClassPointer = NULL;

// Class UTGame.UTGib
// 0x0098 (0x0324 - 0x028C)
class AUTGib : public AActor
{
public:
	class UDynamicLightEnvironmentComponent*           GibLightEnvironment;                              		// 0x028C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   HitSound;                                         		// 0x0294 (0x0008) [0x0000000000000000]              
	class UMeshComponent*                              GibMeshComp;                                      		// 0x029C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   MIC_Gib;                                          		// 0x02A4 (0x0008) [0x0000000000000000]              
	class UMaterialInstance*                           MI_Decal;                                         		// 0x02AC (0x0008) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_DecalTemplate;                               		// 0x02B4 (0x0008) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x02BC (0x0008) [0x0000000000000000]              
	float                                              DecalWaitTimeBeforeDissolve;                      		// 0x02C4 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_GibMeshTemplate;                             		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_GibMeshTemplateSecondary;                    		// 0x02D0 (0x0008) [0x0000000000000000]              
	struct FName                                       GibMeshDissolveParamName;                         		// 0x02D8 (0x0008) [0x0000000000000000]              
	float                                              GibMeshWaitTimeBeforeDissolve;                    		// 0x02E0 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_GibEffect;                                    		// 0x02E4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_CustomEffect;                                  		// 0x02EC (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseUnrealPhysics : 1;                            		// 0x02F4 (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bStopMovingCamera : 1;                            		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FStaticMeshDatum >                  GibMeshesData;                                    		// 0x02F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     OldCamLoc;                                        		// 0x0308 (0x000C) [0x0000000000000000]              
	struct FRotator                                    OldCamRot;                                        		// 0x0314 (0x000C) [0x0000000000000000]              
	int                                                BounceCount;                                      		// 0x0320 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48661 ];

		return pClassPointer;
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void TurnOnCollision ( );
	void LeaveADecal ( struct FVector HitLoc, struct FVector HitNorm );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void eventBecomeViewTarget ( class APlayerController* PC );
	void Timer ( );
	void DoCustomGibEffects ( );
	void ChooseGib ( );
	void SetGibStaticMesh ( class UStaticMesh* NewStaticMesh );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void SetTexturesToBeResident ( float TimeToBeResident );
	void eventPreBeginPlay ( );
};

UClass* AUTGib::pClassPointer = NULL;

// Class UTGame.UTGib_Vehicle
// 0x0038 (0x035C - 0x0324)
class AUTGib_Vehicle : public AUTGib
{
public:
	float                                              TimeBeforeGibExplosionEffect;                     		// 0x0324 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             PS_GibExplosionEffect;                            		// 0x0328 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_GibTrailEffect;                                		// 0x0330 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   LoopedSound;                                      		// 0x0338 (0x0008) [0x0000000000000000]              
	struct FName                                       BurnName;                                         		// 0x0340 (0x0008) [0x0000000000000000]              
	float                                              BurnDuration;                                     		// 0x0348 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV;                                             		// 0x034C (0x0008) [0x0000000000000000]              
	class UClass*                                      OwningClass;                                      		// 0x0354 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48660 ];

		return pClassPointer;
	};

	void ActivateGibExplosionEffect ( );
	void eventPostBeginPlay ( );
};

UClass* AUTGib_Vehicle::pClassPointer = NULL;

// Class UTGame.UTVehicleDeathPiece
// 0x0008 (0x0364 - 0x035C)
class AUTVehicleDeathPiece : public AUTGib_Vehicle
{
public:
	class UParticleSystemComponent*                    PSC;                                              		// 0x035C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48659 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
};

UClass* AUTVehicleDeathPiece::pClassPointer = NULL;

// Class UTGame.UTVehicleFactory
// 0x0020 (0x03FC - 0x03DC)
class AUTVehicleFactory : public AUDKVehicleFactory
{
public:
	float                                              SpawnZOffset;                                     		// 0x03DC (0x0004) [0x0000000000000000]              
	unsigned long                                      bMayReverseSpawnDirection : 1;                    		// 0x03E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStartNeutral : 1;                                		// 0x03E0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisabled : 1;                                    		// 0x03E0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bKeyVehicle : 1;                                  		// 0x03E0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bForceAvoidReversing : 1;                         		// 0x03E0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	class AUTGameObjective*                            ReverseObjective;                                 		// 0x03E4 (0x0008) [0x0000000000000000]              
	TArray< struct FRotator >                          InitialGunRotations;                              		// 0x03EC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48696 ];

		return pClassPointer;
	};

	struct FRotator GetSpawnRotation ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void TriggerSpawnedEvent ( );
	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
	void Deactivate ( );
	void Activate ( unsigned char T );
	void RenderMapIcon ( class UUTMapInfo* MP, class UCanvas* Canvas, class AUTPlayerController* PlayerOwner, struct FLinearColor FinalColor );
	void eventSetInitialState ( );
	void AddToClosestObjective ( );
	void PostBeginPlay ( );
};

UClass* AUTVehicleFactory::pClassPointer = NULL;

// Class UTGame.UTConsolePlayerController
// 0x0024 (0x0BDC - 0x0BB8)
class AUTConsolePlayerController : public AUTPlayerController
{
public:
	unsigned long                                      bTargetAdhesionEnabled : 1;                       		// 0x0BB8 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bDebugTargetAdhesion : 1;                         		// 0x0BB8 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	TArray< struct FProfileSettingToUE3BindingDatum >  ProfileSettingToUE3BindingMapping360;             		// 0x0BBC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FProfileSettingToUE3BindingDatum >  ProfileSettingToUE3BindingMappingPS3;             		// 0x0BCC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48790 ];

		return pClassPointer;
	};

	void ResetPlayerMovementInput ( );
	void NextWeapon ( );
	void PrevWeapon ( );
	void ClientRestart ( class APawn* NewPawn );
	void ClientSmartUse ( );
	bool PerformedUseAction ( );
	float AimHelpModifier ( );
	bool AimingHelp ( unsigned long bInstantHit );
	void UpdateRotation ( float DeltaTime );
};

UClass* AUTConsolePlayerController::pClassPointer = NULL;

// Class UTGame.UTParticleSystemComponent
// 0x0000 (0x0398 - 0x0398)
class UUTParticleSystemComponent : public UUDKParticleSystemComponent
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

UClass* UUTParticleSystemComponent::pClassPointer = NULL;

// Class UTGame.UTAnimNodeSequence
// 0x0000 (0x01AC - 0x01AC)
class UUTAnimNodeSequence : public UUDKAnimNodeSequence
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48862 ];

		return pClassPointer;
	};

};

UClass* UUTAnimNodeSequence::pClassPointer = NULL;

// Class UTGame.UTVehicleMessage
// 0x0040 (0x00C8 - 0x0088)
class UUTVehicleMessage : public UUTLocalMessage
{
public:
	TArray< struct FString >                           MessageText;                                      		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FColor >                            DrawColors;                                       		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    MessageAnnouncements;                             		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CustomMessageArea;                                		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48869 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTVehicleMessage::pClassPointer = NULL;

// Class UTGame.UTVehicleWeapon
// 0x00E8 (0x0864 - 0x077C)
class AUTVehicleWeapon : public AUTWeapon
{
public:
	int                                                SeatIndex;                                        		// 0x077C (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUTVehicle*                                  MyVehicle;                                        		// 0x0780 (0x0008) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FName >                             FireTriggerTags;                                  		// 0x0788 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             AltFireTriggerTags;                               		// 0x0798 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialImpactEffect >             ImpactEffects;                                    		// 0x07A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialImpactEffect >             AltImpactEffects;                                 		// 0x07B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultImpactEffect;                              		// 0x07C8 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                           		// 0x0804 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   BulletWhip;                                       		// 0x0840 (0x0008) [0x0000000000000000]              
	float                                              LastCorrectAimTime;                               		// 0x0848 (0x0004) [0x0000000000000000]              
	float                                              LastInCorrectAimTime;                             		// 0x084C (0x0004) [0x0000000000000000]              
	float                                              CurrentCrosshairScaling;                          		// 0x0850 (0x0004) [0x0000000000000000]              
	float                                              MaxFinalAimAdjustment;                            		// 0x0854 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlaySoundFromSocket : 1;                         		// 0x0858 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCurrentlyZoomed : 1;                             		// 0x0858 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIgnoreSocketPitchRotation : 1;                   		// 0x0858 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIgnoreDownwardPitch : 1;                         		// 0x0858 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDebugTurret : 1;                                 		// 0x0858 (0x0004) [0x0000000000000000] [0x00000010] 
	class UClass*                                      VehicleClass;                                     		// 0x085C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48935 ];

		return pClassPointer;
	};

	void EndZoom ( class AUTPlayerController* PC );
	void StartZoom ( class AUTPlayerController* PC );
	void ServerSetZoom ( unsigned long bNowZoomed );
	unsigned char GetZoomedState ( );
	void WeaponPlaySound ( class UAkEvent* Sound, float NoiseLoudness );
	void NotifyVehicleUndeployed ( );
	void NotifyVehicleDeployed ( );
	float GetMaxFinalAimAdjustment ( );
	class AActor* GetTraceOwner ( );
	struct FVector InstantFireEndTrace ( struct FVector StartTrace );
	struct FVector InstantFireStartTrace ( );
	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void EndFire ( unsigned char FireModeNum );
	void BeginFire ( unsigned char FireModeNum );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void PutDownWeapon ( );
	void Activate ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	struct FMaterialImpactEffect GetImpactEffect ( class AActor* HitActor, class UPhysicalMaterial* HitMaterial, unsigned char FireModeNum );
	float GetFireInterval ( unsigned char FireModeNum );
	struct FName GetFireTriggerTag ( int BarrelIndex, int FireMode );
	bool eventIsAimCorrect ( );
	void GetFireStartLocationAndRotation ( struct FVector* StartLocation, struct FRotator* StartRotation );
	struct FVector eventGetDesiredAimPoint ( class AActor** TargetActor );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void GetCrosshairScaling ( class AHUD* HUD );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	bool CanHitDesiredTarget ( struct FVector SocketLocation, struct FRotator SocketRotation, struct FVector DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint );
};

UClass* AUTVehicleWeapon::pClassPointer = NULL;

// Class UTGame.UTLockWarningMessage
// 0x0028 (0x00B0 - 0x0088)
class UUTLockWarningMessage : public UUTLocalMessage
{
public:
	struct FString                                     MissileLockOnString;                              		// 0x0088 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RadarLockString;                                  		// 0x0098 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      RedColor;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FColor                                      YellowColor;                                      		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49110 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* UUTLockWarningMessage::pClassPointer = NULL;

// Class UTGame.UTSeqEvent_VehicleFactory
// 0x0008 (0x0178 - 0x0170)
class UUTSeqEvent_VehicleFactory : public USequenceEvent
{
public:
	class AUTVehicle*                                  SpawnedVehicle;                                   		// 0x0170 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49150 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqEvent_VehicleFactory::pClassPointer = NULL;

// Class UTGame.UTDmgType_Burning
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Burning : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49258 ];

		return pClassPointer;
	};

	float GetHitEffectDuration ( class APawn* P, float Damage );
	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UUTDmgType_Burning::pClassPointer = NULL;

// Class UTGame.UTDmgType_ScorpionSelfDestruct
// 0x0004 (0x0180 - 0x017C)
class UUTDmgType_ScorpionSelfDestruct : public UUTDmgType_Burning
{
public:
	int                                                DamageGivenForSelfDestruct;                       		// 0x017C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49257 ];

		return pClassPointer;
	};

	int IncrementKills ( class AUTPlayerReplicationInfo* KillerPRI );
};

UClass* UUTDmgType_ScorpionSelfDestruct::pClassPointer = NULL;

// Class UTGame.UTProjectile
// 0x0070 (0x039C - 0x032C)
class AUTProjectile : public AUDKProjectile
{
public:
	unsigned long                                      bSuppressSounds : 1;                              		// 0x032C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bImportantAmbientSound : 1;                       		// 0x032C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAdvanceExplosionEffect : 1;                      		// 0x032C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSuppressExplosionFX : 1;                         		// 0x032C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bWaitForEffects : 1;                              		// 0x032C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAttachExplosionToVehicles : 1;                   		// 0x032C (0x0004) [0x0000000000000000] [0x00000020] 
	class USoundCue*                                   AmbientSound;                                     		// 0x0330 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x0338 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    ProjEffects;                                      		// 0x0340 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ProjFlightTemplate;                               		// 0x0348 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ProjExplosionTemplate;                            		// 0x0350 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          ExplosionDecal;                                   		// 0x0358 (0x0008) [0x0000000000000000]              
	float                                              DecalWidth;                                       		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              DecalHeight;                                      		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              DurationOfDecal;                                  		// 0x0368 (0x0004) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x036C (0x0008) [0x0000000000000000]              
	float                                              MaxEffectDistance;                                		// 0x0374 (0x0004) [0x0000000000000000]              
	float                                              TossZ;                                            		// 0x0378 (0x0004) [0x0000000000000000]              
	float                                              GlobalCheckRadiusTweak;                           		// 0x037C (0x0004) [0x0000000000000000]              
	class UClass*                                      ProjectileLightClass;                             		// 0x0380 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        ProjectileLight;                                  		// 0x0388 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      ExplosionLightClass;                              		// 0x0390 (0x0008) [0x0000000000000000]              
	float                                              MaxExplosionLightDistance;                        		// 0x0398 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49264 ];

		return pClassPointer;
	};

	float GetRange ( );
	float GetTimeToLocation ( struct FVector TargetLoc );
	float StaticGetTimeToLocation ( struct FVector TargetLoc, struct FVector StartLoc, class AController* RequestedBy );
	float CalculateTravelTime ( float Dist, float MoveSpeed, float MaxMoveSpeed, float AccelMag );
	class APawn* GetPawnOwner ( );
	class AActor* eventGetHomingTarget ( class AUTProjectile* Seeker, class AController* InstigatedBy );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC );
	void Destroyed ( );
	void HideProjectile ( );
	void eventTornOff ( );
	void ShutDown ( );
	bool ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
	void SpawnFlightEffects ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void Init ( struct FVector Direction );
	void eventSetInitialState ( );
	void PostBeginPlay ( );
	void eventPreBeginPlay ( );
	bool CanSplash ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventCreateProjectileLight ( );
};

UClass* AUTProjectile::pClassPointer = NULL;

// Class UTGame.UTSkelControl_TurretConstrained
// 0x0000 (0x0184 - 0x0184)
class UUTSkelControl_TurretConstrained : public UUDKSkelControl_TurretConstrained
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49277 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_TurretConstrained::pClassPointer = NULL;

// Class UTGame.UTDmgType_VehicleCollision
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_VehicleCollision : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49500 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_VehicleCollision::pClassPointer = NULL;

// Class UTGame.UTSkelControl_Damage
// 0x0000 (0x01CC - 0x01CC)
class UUTSkelControl_Damage : public UUDKSkelControl_Damage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49542 ];

		return pClassPointer;
	};

	void eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible );
	void eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible );
};

UClass* UUTSkelControl_Damage::pClassPointer = NULL;

// Class UTGame.UTDmgType_VehicleExplosion
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_VehicleExplosion : public UUTDmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49553 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_VehicleExplosion::pClassPointer = NULL;

// Class UTGame.UTSeqAct_ExitVehicle
// 0x0000 (0x0150 - 0x0150)
class UUTSeqAct_ExitVehicle : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49672 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_ExitVehicle::pClassPointer = NULL;

// Class UTGame.VehicleMovementEffect
// 0x0000 (0x02AC - 0x02AC)
class AVehicleMovementEffect : public AUDKVehicleMovementEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49685 ];

		return pClassPointer;
	};

};

UClass* AVehicleMovementEffect::pClassPointer = NULL;

// Class UTGame.UTDmgType_RanOver
// 0x0004 (0x0180 - 0x017C)
class UUTDmgType_RanOver : public UUTDamageType
{
public:
	int                                                NumMessages;                                      		// 0x017C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49775 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
	void SmallReward ( class AUTPlayerController* Killer, int KillCount );
	int IncrementKills ( class AUTPlayerReplicationInfo* KillerPRI );
};

UClass* UUTDmgType_RanOver::pClassPointer = NULL;

// Class UTGame.UTDmgType_Drowned
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Drowned : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49776 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_Drowned::pClassPointer = NULL;

// Class UTGame.UTRocketExplosionLight
// 0x0000 (0x0270 - 0x0270)
class UUTRocketExplosionLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49777 ];

		return pClassPointer;
	};

};

UClass* UUTRocketExplosionLight::pClassPointer = NULL;

// Class UTGame.UTGib_VehiclePiece
// 0x0000 (0x035C - 0x035C)
class AUTGib_VehiclePiece : public AUTGib_Vehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49778 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
};

UClass* AUTGib_VehiclePiece::pClassPointer = NULL;

// Class UTGame.UTDmgType_Pancake
// 0x0000 (0x0180 - 0x0180)
class UUTDmgType_Pancake : public UUTDmgType_RanOver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49804 ];

		return pClassPointer;
	};

	void SmallReward ( class AUTPlayerController* Killer, int KillCount );
};

UClass* UUTDmgType_Pancake::pClassPointer = NULL;

// Class UTGame.UTAirVehicle
// 0x001C (0x0D64 - 0x0D48)
class AUTAirVehicle : public AUTVehicle
{
public:
	unsigned long                                      bAutoLand : 1;                                    		// 0x0D48 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PushForce;                                        		// 0x0D4C (0x0004) [0x0000000000000000]              
	struct FString                                     RadarLockMessage;                                 		// 0x0D50 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              LastRadarLockWarnTime;                            		// 0x0D60 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49805 ];

		return pClassPointer;
	};

	bool Dodge ( unsigned char DoubleClickMove );
	bool RecommendLongRangedAttack ( );
	void SetDriving ( unsigned long bNewDriving );
	void eventLockOnWarning ( class AUDKProjectile* IncomingMissile );
};

UClass* AUTAirVehicle::pClassPointer = NULL;

// Class UTGame.UTAmbientSoundComponent
// 0x0000 (0x02A4 - 0x02A4)
class UUTAmbientSoundComponent : public UAudioComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49838 ];

		return pClassPointer;
	};

	void eventOcclusionChanged ( unsigned long bNowOccluded );
};

UClass* UUTAmbientSoundComponent::pClassPointer = NULL;

// Class UTGame.UTInventory
// 0x0004 (0x0314 - 0x0310)
class AUTInventory : public AInventory
{
public:
	unsigned long                                      bReceiveOwnerEvents : 1;                          		// 0x0310 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49933 ];

		return pClassPointer;
	};

	void OwnerEvent ( struct FName EventName );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	void eventDestroyed ( );
	void ClientLostItem ( );
	void AddWeaponOverlay ( class AUTGameReplicationInfo* GRI );
};

UClass* AUTInventory::pClassPointer = NULL;

// Class UTGame.UTPickupInventory
// 0x0000 (0x0314 - 0x0314)
class AUTPickupInventory : public AUTInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49932 ];

		return pClassPointer;
	};

	float BotDesireability ( class AActor* PickupHolder, class APawn* P, class AController* C );
};

UClass* AUTPickupInventory::pClassPointer = NULL;

// Class UTGame.UTPickupMessage
// 0x0000 (0x0088 - 0x0088)
class UUTPickupMessage : public UUTLocalMessage
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

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTPickupMessage::pClassPointer = NULL;

// Class UTGame.UTAmmoPickupFactory
// 0x000C (0x0528 - 0x051C)
class AUTAmmoPickupFactory : public AUTItemPickupFactory
{
public:
	int                                                AmmoAmount;                                       		// 0x051C (0x0004) [0x0000000000000000]              
	class UClass*                                      TargetWeapon;                                     		// 0x0520 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49935 ];

		return pClassPointer;
	};

	float BotDesireability ( class APawn* P, class AController* C );
	void UpdateHUD ( class AUTHUD* H );
	void SpawnCopyFor ( class APawn* Recipient );
};

UClass* AUTAmmoPickupFactory::pClassPointer = NULL;

// Class UTGame.UTAmmo_LinkGun
// 0x0000 (0x0528 - 0x0528)
class AUTAmmo_LinkGun : public AUTAmmoPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49977 ];

		return pClassPointer;
	};

};

UClass* AUTAmmo_LinkGun::pClassPointer = NULL;

// Class UTGame.UTAmmo_RocketLauncher
// 0x0000 (0x0528 - 0x0528)
class AUTAmmo_RocketLauncher : public AUTAmmoPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49985 ];

		return pClassPointer;
	};

};

UClass* AUTAmmo_RocketLauncher::pClassPointer = NULL;

// Class UTGame.UTAmmo_ShockRifle
// 0x0000 (0x0528 - 0x0528)
class AUTAmmo_ShockRifle : public AUTAmmoPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49993 ];

		return pClassPointer;
	};

};

UClass* AUTAmmo_ShockRifle::pClassPointer = NULL;

// Class UTGame.UTAnimBlendBase
// 0x0000 (0x017C - 0x017C)
class UUTAnimBlendBase : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50001 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendBase::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByDriving
// 0x0000 (0x0150 - 0x0150)
class UUTAnimBlendByDriving : public UUDKAnimBlendByDriving
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50003 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByDriving::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByFall
// 0x0000 (0x019C - 0x019C)
class UUTAnimBlendByFall : public UUDKAnimBlendByFall
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50005 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByFall::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByFlying
// 0x0000 (0x01AC - 0x01AC)
class UUTAnimBlendByFlying : public UUDKAnimBlendByFlying
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50007 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByFlying::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByHoverboarding
// 0x0000 (0x0188 - 0x0188)
class UUTAnimBlendByHoverboarding : public UUDKAnimBlendByHoverboarding
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50009 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByHoverboarding::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByHoverboardTilt
// 0x0000 (0x0160 - 0x0160)
class UUTAnimBlendByHoverboardTilt : public UUDKAnimBlendByHoverboardTilt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50011 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByHoverboardTilt::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByHoverboardTurn
// 0x0000 (0x014C - 0x014C)
class UUTAnimBlendByHoverboardTurn : public UUDKAnimBlendByHoverboardTurn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50013 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByHoverboardTurn::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByHoverJump
// 0x0000 (0x019C - 0x019C)
class UUTAnimBlendByHoverJump : public UUTAnimBlendByFall
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50015 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByHoverJump::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByIdle
// 0x0000 (0x017C - 0x017C)
class UUTAnimBlendByIdle : public UUDKAnimBlendByIdle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50017 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByIdle::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByPhysics
// 0x0000 (0x01BC - 0x01BC)
class UUTAnimBlendByPhysics : public UUDKAnimBlendByPhysics
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50019 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByPhysics::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByPhysicsVolume
// 0x0000 (0x0194 - 0x0194)
class UUTAnimBlendByPhysicsVolume : public UUDKAnimBlendByPhysicsVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50021 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByPhysicsVolume::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByPosture
// 0x0000 (0x017C - 0x017C)
class UUTAnimBlendByPosture : public UUDKAnimBlendByPosture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50023 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByPosture::pClassPointer = NULL;

// Class UTGame.UTAnimBlendBySlotActive
// 0x0000 (0x018C - 0x018C)
class UUTAnimBlendBySlotActive : public UUDKAnimBlendBySlotActive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50025 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendBySlotActive::pClassPointer = NULL;

// Class UTGame.UTAnimBlendBySpeed
// 0x0000 (0x0158 - 0x0158)
class UUTAnimBlendBySpeed : public UUDKAnimBlendBySpeed
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50027 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendBySpeed::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByTurnInPlace
// 0x0000 (0x018C - 0x018C)
class UUTAnimBlendByTurnInPlace : public UUDKAnimBlendByTurnInPlace
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50029 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByTurnInPlace::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByVehicle
// 0x0000 (0x0188 - 0x0188)
class UUTAnimBlendByVehicle : public UUDKAnimBlendByVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50031 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByVehicle::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByWeapon
// 0x0000 (0x0194 - 0x0194)
class UUTAnimBlendByWeapon : public UUDKAnimBlendByWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50033 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByWeapon::pClassPointer = NULL;

// Class UTGame.UTAnimBlendByWeapType
// 0x0000 (0x0184 - 0x0184)
class UUTAnimBlendByWeapType : public UUDKAnimBlendByWeapType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50035 ];

		return pClassPointer;
	};

};

UClass* UUTAnimBlendByWeapType::pClassPointer = NULL;

// Class UTGame.UTAnimNodeCopyBoneTranslation
// 0x0000 (0x01B0 - 0x01B0)
class UUTAnimNodeCopyBoneTranslation : public UUDKAnimNodeCopyBoneTranslation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50037 ];

		return pClassPointer;
	};

};

UClass* UUTAnimNodeCopyBoneTranslation::pClassPointer = NULL;

// Class UTGame.UTAnimNodeFramePlayer
// 0x0000 (0x0198 - 0x0198)
class UUTAnimNodeFramePlayer : public UUDKAnimNodeFramePlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50039 ];

		return pClassPointer;
	};

};

UClass* UUTAnimNodeFramePlayer::pClassPointer = NULL;

// Class UTGame.UTAnimNodeJumpLeanOffset
// 0x0000 (0x01C8 - 0x01C8)
class UUTAnimNodeJumpLeanOffset : public UUDKAnimNodeJumpLeanOffset
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50041 ];

		return pClassPointer;
	};

};

UClass* UUTAnimNodeJumpLeanOffset::pClassPointer = NULL;

// Class UTGame.UTAnimNodeSequenceByBoneRotation
// 0x0000 (0x01B4 - 0x01B4)
class UUTAnimNodeSequenceByBoneRotation : public UUDKAnimNodeSequenceByBoneRotation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50044 ];

		return pClassPointer;
	};

};

UClass* UUTAnimNodeSequenceByBoneRotation::pClassPointer = NULL;

// Class UTGame.UTAnimNodeSeqWeap
// 0x0000 (0x01D4 - 0x01D4)
class UUTAnimNodeSeqWeap : public UUDKAnimNodeSeqWeap
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50046 ];

		return pClassPointer;
	};

};

UClass* UUTAnimNodeSeqWeap::pClassPointer = NULL;

// Class UTGame.UTQueuedAnnouncement
// 0x0024 (0x02B0 - 0x028C)
class AUTQueuedAnnouncement : public AInfo
{
public:
	class AUTQueuedAnnouncement*                       nextAnnouncement;                                 		// 0x028C (0x0008) [0x0000000000000000]              
	class UClass*                                      AnnouncementClass;                                		// 0x0294 (0x0008) [0x0000000000000000]              
	int                                                MessageIndex;                                     		// 0x029C (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UObject*                                     OptionalObject;                                   		// 0x02A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50055 ];

		return pClassPointer;
	};

};

UClass* AUTQueuedAnnouncement::pClassPointer = NULL;

// Class UTGame.UTVoice
// 0x00BC (0x0144 - 0x0088)
class UUTVoice : public UUTLocalMessage
{
public:
	TArray< class USoundNodeWave* >                    AckSounds;                                        		// 0x0088 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    FriendlyFireSounds;                               		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    GotYourBackSounds;                                		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    NeedOurFlagSounds;                                		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    SniperSounds;                                     		// 0x00C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    InPositionSounds;                                 		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    HaveFlagSounds;                                   		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    AreaSecureSounds;                                 		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundNodeWave*                              IncomingSound;                                    		// 0x0108 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              EnemyFlagCarrierSound;                            		// 0x0110 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              EnemyFlagCarrierHereSound;                        		// 0x0118 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              EnemyFlagCarrierHighSound;                        		// 0x0120 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              EnemyFlagCarrierLowSound;                         		// 0x0128 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              MidfieldSound;                                    		// 0x0130 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              GotOurFlagSound;                                  		// 0x0138 (0x0008) [0x0000000000000000]              
	int                                                LocationSpeechOffset;                             		// 0x0140 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50078 ];

		return pClassPointer;
	};

	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	void SendInPositionMessage ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	bool SendLocationUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, class AUTGame* G, class APawn* StatusPawn, unsigned long bDontSendMidfield );
	class USoundNodeWave* KilledVehicleSound ( class APlayerController* PC, class UObject* OptionalObject );
	void SendKilledVehicleMessage ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	void SendEnemyStatusUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	void InitSniperUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	void SendEnemyFlagCarrierHereUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	void SendLocalizedMessage ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, int MessageIndex, class UObject* LocationObject );
	void SetHoldingFlagUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	void InitCombatUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	void InitStatusUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	int GetMessageIndex ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, class UClass* DamageType );
	void SendVoiceMessage ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, class UClass* DamageType );
	bool AllowVoiceMessage ( struct FName MessageType, class AUTPlayerController* PC, class APlayerController* Recipient );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* EnemySound ( class APlayerController* PC, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	int GetNeedOurFlagMessageIndex ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	int GetGotYourBackMessageIndex ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	int GetFriendlyFireMessageIndex ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
	int GetAckMessageIndex ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType );
};

UClass* UUTVoice::pClassPointer = NULL;

// Class UTGame.UTScriptedVoiceMessage
// 0x0000 (0x0088 - 0x0088)
class UUTScriptedVoiceMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50079 ];

		return pClassPointer;
	};

	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
};

UClass* UUTScriptedVoiceMessage::pClassPointer = NULL;

// Class UTGame.UTAreaNamingVolume
// 0x0000 (0x02C8 - 0x02C8)
class AUTAreaNamingVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50098 ];

		return pClassPointer;
	};

};

UClass* AUTAreaNamingVolume::pClassPointer = NULL;

// Class UTGame.UTArmorPickupLight
// 0x0000 (0x0298 - 0x0298)
class AUTArmorPickupLight : public ALight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50138 ];

		return pClassPointer;
	};

};

UClass* AUTArmorPickupLight::pClassPointer = NULL;

// Class UTGame.UTSeqAct_PlayAnim
// 0x000C (0x015C - 0x0150)
class UUTSeqAct_PlayAnim : public USequenceAction
{
public:
	struct FName                                       AnimName;                                         		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0158 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50304 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_PlayAnim::pClassPointer = NULL;

// Class UTGame.UTCharInfo
// 0x002C (0x008C - 0x0060)
class UUTCharInfo : public UObject
{
public:
	TArray< struct FCharacterInfo >                    Characters;                                       		// 0x0060 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< class UClass* >                            Families;                                         		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LOD1DisplayFactor;                                		// 0x0080 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              LOD2DisplayFactor;                                		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              LOD3DisplayFactor;                                		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50307 ];

		return pClassPointer;
	};

	struct FString GetRandomCharClassName ( );
	class UClass* FindFamilyInfo ( struct FString InFamilyID );
};

UClass* UUTCharInfo::pClassPointer = NULL;

// Class UTGame.UTDmgType_Encroached
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Encroached : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50349 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_Encroached::pClassPointer = NULL;

// Class UTGame.UTPawnSoundGroup
// 0x00C0 (0x0120 - 0x0060)
class UUTPawnSoundGroup : public UObject
{
public:
	class USoundCue*                                   DodgeSound;                                       		// 0x0060 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DoubleJumpSound;                                  		// 0x0068 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DefaultJumpingSound;                              		// 0x0070 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   LandSound;                                        		// 0x0078 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   FallingDamageLandSound;                           		// 0x0080 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DyingSound;                                       		// 0x0088 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   HitSounds[ 0x3 ];                                 		// 0x0090 (0x0018) [0x0000000000000000]              
	class USoundCue*                                   GibSound;                                         		// 0x00A8 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DrownSound;                                       		// 0x00B0 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   GaspSound;                                        		// 0x00B8 (0x0008) [0x0000000000000000]              
	TArray< struct FFootstepSoundInfo >                FootstepSounds;                                   		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   DefaultFootstepSound;                             		// 0x00D0 (0x0008) [0x0000000000000000]              
	TArray< struct FFootstepSoundInfo >                JumpingSounds;                                    		// 0x00D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFootstepSoundInfo >                LandingSounds;                                    		// 0x00E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   DefaultLandingSound;                              		// 0x00F8 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   BulletImpactSound;                                		// 0x0100 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   CrushedSound;                                     		// 0x0108 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   BodyExplosionSound;                               		// 0x0110 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   InstagibSound;                                    		// 0x0118 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50547 ];

		return pClassPointer;
	};

	void PlayDrownSound ( class APawn* P );
	void PlayGaspSound ( class APawn* P );
	void PlayGibSound ( class APawn* P );
	void PlayTakeHitSound ( class APawn* P, int Damage );
	void PlayDyingSound ( class APawn* P );
	class USoundCue* GetLandSound ( struct FName MaterialType );
	class USoundCue* GetJumpSound ( struct FName MaterialType );
	class USoundCue* GetFootstepSound ( int FootDown, struct FName MaterialType );
	void PlayFallingDamageLandSound ( class APawn* P );
	void PlayLandSound ( class APawn* P );
	void PlayJumpSound ( class APawn* P );
	void PlayDoubleJumpSound ( class APawn* P );
	void PlayDodgeSound ( class APawn* P );
	void PlayBodyExplosion ( class APawn* P );
	void PlayCrushedSound ( class APawn* P );
	void PlayBulletImpact ( class APawn* P );
	void PlayInstagibSound ( class APawn* P );
};

UClass* UUTPawnSoundGroup::pClassPointer = NULL;

// Class UTGame.UTPhysicalMaterialProperty
// 0x0008 (0x0068 - 0x0060)
class UUTPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       MaterialType;                                     		// 0x0060 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50554 ];

		return pClassPointer;
	};

};

UClass* UUTPhysicalMaterialProperty::pClassPointer = NULL;

// Class UTGame.UTClientSideWeaponPawn
// 0x0000 (0x0780 - 0x0780)
class AUTClientSideWeaponPawn : public AUTWeaponPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50845 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void DetachDriver ( class APawn* P );
	void AttachDriver ( class APawn* P );
	void PreBeginPlay ( );
};

UClass* AUTClientSideWeaponPawn::pClassPointer = NULL;

// Class UTGame.UTWeaponAttachment
// 0x0155 (0x03E1 - 0x028C)
class AUTWeaponAttachment : public AActor
{
public:
	class UClass*                                      SplashEffect;                                     		// 0x028C (0x0008) [0x0000000000000000]              
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x0294 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      OverlayMesh;                                      		// 0x029C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       MuzzleFlashSocket;                                		// 0x02A4 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    MuzzleFlashPSC;                                   		// 0x02AC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             MuzzleFlashPSCTemplate;                           		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleFlashAltPSCTemplate;                        		// 0x02BC (0x0008) [0x0000000000000000]              
	struct FColor                                      MuzzleFlashColor;                                 		// 0x02C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMuzzleFlashPSCLoops : 1;                         		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShellCasingPSCLoops : 1;                         		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAlignToSurfaceNormal : 1;                        		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSuppressSounds : 1;                              		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bMakeSplash : 1;                                  		// 0x02C8 (0x0004) [0x0000000000000000] [0x00000010] 
	class UClass*                                      MuzzleFlashLightClass;                            		// 0x02CC (0x0008) [0x0000000000000000]              
	class UUDKExplosionLight*                          MuzzleFlashLight;                                 		// 0x02D4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MuzzleFlashDuration;                              		// 0x02DC (0x0004) [0x0000000000000000]              
	struct FName                                       ShellCasingSocket;                                		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    ShellCasingPSC;                                   		// 0x02E8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ShellCasingPSCTemplate;                           		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ShellCasingAltPSCTemplate;                        		// 0x02F8 (0x0008) [0x0000000000000000]              
	struct FColor                                      ShellCasingColor;                                 		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              ShellCasingDuration;                              		// 0x0304 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      OwnerMesh;                                        		// 0x0308 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       AttachmentSocket;                                 		// 0x0310 (0x0008) [0x0000000000000000]              
	TArray< struct FMaterialImpactEffect >             ImpactEffects;                                    		// 0x0318 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialImpactEffect >             AltImpactEffects;                                 		// 0x0328 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultImpactEffect;                              		// 0x0338 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                           		// 0x0374 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAkEvent*                                    BulletWhip;                                       		// 0x03B0 (0x0008) [0x0000000000000000]              
	float                                              MaxImpactEffectDistance;                          		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              MaxFireEffectDistance;                            		// 0x03BC (0x0004) [0x0000000000000000]              
	class UClass*                                      WeaponClass;                                      		// 0x03C0 (0x0008) [0x0000000000000000]              
	float                                              MaxDecalRangeSq;                                  		// 0x03C8 (0x0004) [0x0000000000000000]              
	float                                              DistFactorForRefPose;                             		// 0x03CC (0x0004) [0x0000000000000000]              
	struct FName                                       FireAnim;                                         		// 0x03D0 (0x0008) [0x0000000000000000]              
	struct FName                                       AltFireAnim;                                      		// 0x03D8 (0x0008) [0x0000000000000000]              
	unsigned char                                      WeapAnimType;                                     		// 0x03E0 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50869 ];

		return pClassPointer;
	};

	struct FVector GetEffectLocation ( );
	void FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication );
	void ChangeVisibility ( unsigned long bIsVisible );
	void SetWeaponOverlayFlags ( class AUTPawn* OwnerPawn );
	void CheckBulletWhip ( struct FVector FireDir, struct FVector HitLocation );
	void PlayImpactEffects ( struct FVector HitLocation );
	void SetImpactedActor ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal, struct FTraceHitInfo HitInfo );
	bool AllowImpactEffects ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
	void eventStopThirdPersonFireEffects ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void StopFirstPersonFireEffects ( class AWeapon* PawnWeapon );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void StopShellCasingEffects ( );
	void StopMuzzleFlash ( );
	void StartShellCasingEffects ( );
	void CauseMuzzleFlash ( );
	void ShellCasingTimer ( );
	void MuzzleFlashTimer ( );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void SetPuttingDownWeapon ( unsigned long bNowPuttingDown );
	void AttachTo ( class AUTPawn* OwnerPawn );
	void SetShellCasingParams ( class UParticleSystemComponent* PSC );
	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void SetSkin ( class UMaterial* NewMaterial );
	void CreateOverlayMesh ( );
	void CheckToForceRefPose ( );
	void eventPostBeginPlay ( );
};

UClass* AUTWeaponAttachment::pClassPointer = NULL;

// Class UTGame.UTEmit_HitEffect
// 0x0000 (0x02A0 - 0x02A0)
class AUTEmit_HitEffect : public AUTEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50893 ];

		return pClassPointer;
	};

	void PawnBaseDied ( );
	void AttachTo ( class APawn* P, struct FName NewBoneName );
};

UClass* AUTEmit_HitEffect::pClassPointer = NULL;

// Class UTGame.UTSeqAct_UseHoverboard
// 0x0008 (0x0158 - 0x0150)
class UUTSeqAct_UseHoverboard : public USequenceAction
{
public:
	class AUTVehicle*                                  Hoverboard;                                       		// 0x0150 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50916 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* UUTSeqAct_UseHoverboard::pClassPointer = NULL;

// Class UTGame.UTSeqAct_InfiniteAmmo
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_InfiniteAmmo : public USequenceAction
{
public:
	unsigned long                                      bInfiniteAmmo : 1;                                		// 0x0150 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50962 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_InfiniteAmmo::pClassPointer = NULL;

// Class UTGame.UTWaterVolume
// 0x0018 (0x0350 - 0x0338)
class AUTWaterVolume : public AWaterVolume
{
public:
	class UParticleSystem*                             PS_EnterWaterEffect_Pawn;                         		// 0x0338 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_EnterWaterEffect_Vehicle;                      		// 0x0340 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ProjectileEntryEffect;                            		// 0x0348 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51250 ];

		return pClassPointer;
	};

	void PlayEntrySplash ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AUTWaterVolume::pClassPointer = NULL;

// Class UTGame.UTBeamWeaponAttachment
// 0x0043 (0x0424 - 0x03E1)
class AUTBeamWeaponAttachment : public AUTWeaponAttachment
{
public:
	class UParticleSystem*                             BeamTemplate[ 0x2 ];                              		// 0x03E4 (0x0010) [0x0000000000000000]              
	class UParticleSystemComponent*                    BeamEmitter[ 0x2 ];                               		// 0x03F4 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       BeamSockets[ 0x2 ];                               		// 0x0404 (0x0010) [0x0000000000000000]              
	class AUTPawn*                                     PawnOwner;                                        		// 0x0414 (0x0008) [0x0000000000000000]              
	struct FName                                       EndPointParamName;                                		// 0x041C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51276 ];

		return pClassPointer;
	};

	void UpdateBeam ( unsigned char FireModeNum );
	void HideEmitter ( int Index, unsigned long bHide );
	void AddBeamEmitter ( );
};

UClass* AUTBeamWeaponAttachment::pClassPointer = NULL;

// Class UTGame.UTAttachment_LinkGun
// 0x00E8 (0x050C - 0x0424)
class AUTAttachment_LinkGun : public AUTBeamWeaponAttachment
{
public:
	struct FColor                                      LinkBeamColors[ 0x3 ];                            		// 0x0424 (0x000C) [0x0000000000000000]              
	class UParticleSystem*                             LinkBeamSystems[ 0x3 ];                           		// 0x0430 (0x0018) [0x0000000000000000]              
	struct FColor                                      HighPowerBeamColor;                               		// 0x0448 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HighPowerSystem;                                  		// 0x044C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   WeaponMaterialInstance;                           		// 0x0454 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             LinkHitSound;                                     		// 0x045C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bHittingWall : 1;                                 		// 0x0464 (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystem*                             WallHitTemplate;                                  		// 0x0468 (0x0008) [0x0000000000000000]              
	class AUTEmitter*                                  HitWallEffect;                                    		// 0x0470 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             TeamBeamEndpointTemplates[ 0x3 ];                 		// 0x0478 (0x0018) [0x0000000000000000]              
	class UParticleSystem*                             HighPowerBeamEndpointTemplate;                    		// 0x0490 (0x0008) [0x0000000000000000]              
	class AUTEmitter*                                  BeamEndpointEffect;                               		// 0x0498 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          BeamDecal;                                        		// 0x04A0 (0x0008) [0x0000000000000000]              
	float                                              DecalWidth;                                       		// 0x04A8 (0x0004) [0x0000000000000000]              
	float                                              DecalHeight;                                      		// 0x04AC (0x0004) [0x0000000000000000]              
	float                                              DurationOfDecal;                                  		// 0x04B0 (0x0004) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x04B4 (0x0008) [0x0000000000000000]              
	int                                                TicksBetweenDecals;                               		// 0x04BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TicksSinceLastDecal;                              		// 0x04C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TeamMuzzleFlashTemplates[ 0x3 ];                  		// 0x04C4 (0x0018) [0x0000000000000000]              
	class UParticleSystem*                             HighPowerMuzzleFlashTemplate;                     		// 0x04DC (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PoweredUpEffect;                                  		// 0x04E4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       PoweredUpEffectSocket;                            		// 0x04EC (0x0008) [0x0000000000000000]              
	TArray< struct FLinkConnection >                   Connections;                                      		// 0x04F4 (0x0010) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	class UParticleSystem*                             ConnectionEffectTemplate;                         		// 0x0504 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51297 ];

		return pClassPointer;
	};

	void ChangeVisibility ( unsigned long bIsVisible );
	void CheckPoweredUp ( );
	void HideEmitter ( int Index, unsigned long bHide );
	void KillEndpointEffect ( );
	void UpdateBeam ( unsigned char FireModeNum );
	void eventDestroyed ( );
	void StopThirdPersonFireEffects ( );
	void StopMuzzleFlash ( );
	void SetImpactedActor ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal, struct FTraceHitInfo HitInfo );
	void SetSkin ( class UMaterial* NewMaterial );
	void PostBeginPlay ( );
	class UParticleSystem* GetTeamMuzzleFlashTemplate ( unsigned char TeamNum );
	void GetTeamBeamInfo ( unsigned char TeamNum, struct FColor* BeamColor, class UParticleSystem** BeamSystem, class UParticleSystem** BeamEndpointTemplate );
};

UClass* AUTAttachment_LinkGun::pClassPointer = NULL;

// Class UTGame.UTLinkGunMuzzleFlashLight
// 0x0020 (0x0290 - 0x0270)
class UUTLinkGunMuzzleFlashLight : public UUDKExplosionLight
{
public:
	TArray< struct FLightValues >                      RedTeamTimeShift;                                 		// 0x0270 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLightValues >                      BlueTeamTimeShift;                                		// 0x0280 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51371 ];

		return pClassPointer;
	};

	void SetTeam ( unsigned char NewTeam );
};

UClass* UUTLinkGunMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTAutoCrouchVolume
// 0x0000 (0x02C8 - 0x02C8)
class AUTAutoCrouchVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51414 ];

		return pClassPointer;
	};

	void CrouchTimer ( );
	void eventUnTouch ( class AActor* Other );
	void SetCrouch ( class APawn* P, unsigned char bCrouch );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AUTAutoCrouchVolume::pClassPointer = NULL;

// Class UTGame.UTAvoidMarker
// 0x0008 (0x0294 - 0x028C)
class AUTAvoidMarker : public AActor
{
public:
	class UCylinderComponent*                          CollisionCylinder;                                		// 0x028C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51436 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AUTAvoidMarker::pClassPointer = NULL;

// Class UTGame.UTDefensePoint
// 0x0040 (0x03E8 - 0x03A8)
class AUTDefensePoint : public AUDKScriptedNavigationPoint
{
public:
	class AController*                                 CurrentUser;                                      		// 0x03A8 (0x0008) [0x0000000000000000]              
	class AUTDefensePoint*                             NextDefensePoint;                                 		// 0x03B0 (0x0008) [0x0000000000000000]              
	class AUDKGameObjective*                           DefendedObjective;                                		// 0x03B8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFirstScript : 1;                                 		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSniping : 1;                                     		// 0x03C0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOnlyOnFoot : 1;                                  		// 0x03C0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOnlySkilled : 1;                                 		// 0x03C0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class UClass*                                      WeaponPreference;                                 		// 0x03C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DefenseGroup;                                     		// 0x03CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DefensePriority;                                  		// 0x03D4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UTexture2D* >                        TeamSprites;                                      		// 0x03D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51970 ];

		return pClassPointer;
	};

	class AActor* GetMoveTarget ( );
	bool HigherPriorityThan ( class AUTDefensePoint* S, class AUTBot* B, unsigned long bAutoPointsInUse, unsigned long bPrioritizeSameGroup, int* NumChecked );
	void PreBeginPlay ( );
	bool CheckForErrors ( );
	void FreePoint ( );
	void Reset ( );
};

UClass* AUTDefensePoint::pClassPointer = NULL;

// Class UTGame.UTTimedPowerup
// 0x0044 (0x0358 - 0x0314)
class AUTTimedPowerup : public AUTInventory
{
public:
	float                                              TimeRemaining;                                    		// 0x0314 (0x0004) [0x0000000000000000]              
	int                                                HudIndex;                                         		// 0x0318 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PowerupOverSound;                                 		// 0x031C (0x0008) [0x0000000000000000]              
	struct FName                                       PowerupStatName;                                  		// 0x0324 (0x0008) [0x0000000000000000]              
	struct FTextureCoordinates                         IconCoords;                                       		// 0x032C (0x0010) [0x0000000000000000]              
	float                                              TransitionTime;                                   		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              TransitionDuration;                               		// 0x0340 (0x0004) [0x0000000000000000]              
	float                                              WarningTime;                                      		// 0x0344 (0x0004) [0x0000000000000000]              
	struct FVector                                     PP_Scene_HighLights;                              		// 0x0348 (0x000C) [0x0000000000000000]              
	float                                              PP_Scene_Desaturation;                            		// 0x0354 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52256 ];

		return pClassPointer;
	};

	struct FName GetPowerupStatName ( );
	float DetourWeight ( class APawn* Other, float PathWeight );
	float BotDesireability ( class AActor* PickupHolder, class APawn* P, class AController* C );
	void TimeExpired ( );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	void DisplayPowerup ( class UCanvas* Canvas, class AUTHUD* HUD, float ResolutionScale, float* YPos );
	void TimeRemaingUpdated ( );
	void ClientSetTimeRemaining ( float NewTimeRemaining );
	void ClientLostItem ( );
	void AdjustPPEffects ( class APawn* P, unsigned long bRemove );
	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void eventTick ( float DeltaTime );
};

UClass* AUTTimedPowerup::pClassPointer = NULL;

// Class UTGame.UTSeqAct_AIStartFireAt
// 0x0001 (0x0151 - 0x0150)
class UUTSeqAct_AIStartFireAt : public USequenceAction
{
public:
	unsigned char                                      ForcedFireMode;                                   		// 0x0150 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52306 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_AIStartFireAt::pClassPointer = NULL;

// Class UTGame.UTSeqAct_AIStopFire
// 0x0000 (0x0150 - 0x0150)
class UUTSeqAct_AIStopFire : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52312 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_AIStopFire::pClassPointer = NULL;

// Class UTGame.UTHoldSpot
// 0x0010 (0x03F8 - 0x03E8)
class AUTHoldSpot : public AUTDefensePoint
{
public:
	class AUTVehicle*                                  HoldVehicle;                                      		// 0x03E8 (0x0008) [0x0000000000000000]              
	class ANavigationPoint*                            LastAnchor;                                       		// 0x03F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52343 ];

		return pClassPointer;
	};

	void eventNotifyAnchorFindingResult ( class ANavigationPoint* EndAnchor, class APawn* RouteFinder );
	class ANavigationPoint* eventSpecifyEndAnchor ( class APawn* RouteFinder );
	void FreePoint ( );
	class AActor* GetMoveTarget ( );
	void PreBeginPlay ( );
};

UClass* AUTHoldSpot::pClassPointer = NULL;

// Class UTGame.UTDeathmatch
// 0x0000 (0x06C8 - 0x06C8)
class AUTDeathmatch : public AUTGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52504 ];

		return pClassPointer;
	};

	void CheckSpiceOfLifeAchievement ( );
	void CheckAchievements ( );
	void WriteOnlineStats ( );
	int GetHandicapNeed ( class APawn* Other );
	bool WantsPickups ( class AUTBot* B );
};

UClass* AUTDeathmatch::pClassPointer = NULL;

// Class UTGame.UTSeqAct_AIFreeze
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_AIFreeze : public USequenceAction
{
public:
	unsigned long                                      bAllowWeaponFiring : 1;                           		// 0x0150 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52735 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_AIFreeze::pClassPointer = NULL;

// Class UTGame.UTLastSecondMessage
// 0x0020 (0x00A8 - 0x0088)
class UUTLastSecondMessage : public UUTLocalMessage
{
public:
	struct FString                                     LastSecondRed;                                    		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LastSecondBlue;                                   		// 0x0098 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53421 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTLastSecondMessage::pClassPointer = NULL;

// Class UTGame.UTCarriedObjectMessage
// 0x00F0 (0x0178 - 0x0088)
class UUTCarriedObjectMessage : public UUTLocalMessage
{
public:
	struct FString                                     ReturnBlue;                                       		// 0x0088 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReturnRed;                                        		// 0x0098 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReturnedBlue;                                     		// 0x00A8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReturnedRed;                                      		// 0x00B8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CaptureBlue;                                      		// 0x00C8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CaptureRed;                                       		// 0x00D8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DroppedBlue;                                      		// 0x00E8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DroppedRed;                                       		// 0x00F8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HasBlue;                                          		// 0x0108 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HasRed;                                           		// 0x0118 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KilledBlue;                                       		// 0x0128 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KilledRed;                                        		// 0x0138 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              ReturnSounds[ 0x2 ];                              		// 0x0148 (0x0010) [0x0000000000000000]              
	class USoundNodeWave*                              DroppedSounds[ 0x2 ];                             		// 0x0158 (0x0010) [0x0000000000000000]              
	class USoundNodeWave*                              TakenSounds[ 0x2 ];                               		// 0x0168 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53513 ];

		return pClassPointer;
	};

	bool PartiallyDuplicates ( int Switch1, int Switch2, class UObject* OptionalObject1, class UObject* OptionalObject2 );
	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldRemoveFlagAnnouncement ( int MyMessageIndex, class UClass* NewAnnouncementClass, int NewMessageIndex );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTCarriedObjectMessage::pClassPointer = NULL;

// Class UTGame.UTFamilyInfo_Liandri
// 0x0000 (0x0244 - 0x0244)
class UUTFamilyInfo_Liandri : public UUTFamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53590 ];

		return pClassPointer;
	};

};

UClass* UUTFamilyInfo_Liandri::pClassPointer = NULL;

// Class UTGame.UTFamilyInfo_Liandri_Male
// 0x0000 (0x0244 - 0x0244)
class UUTFamilyInfo_Liandri_Male : public UUTFamilyInfo_Liandri
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53589 ];

		return pClassPointer;
	};

};

UClass* UUTFamilyInfo_Liandri_Male::pClassPointer = NULL;

// Class UTGame.UTDmgType_Rocket
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Rocket : public UUTDmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53620 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UUTDmgType_Rocket::pClassPointer = NULL;

// Class UTGame.UTCicadaRocketExplosionLight
// 0x0000 (0x0270 - 0x0270)
class UUTCicadaRocketExplosionLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53670 ];

		return pClassPointer;
	};

};

UClass* UUTCicadaRocketExplosionLight::pClassPointer = NULL;

// Class UTGame.UTConsole
// 0x0004 (0x0274 - 0x0270)
class UUTConsole : public UConsole
{
public:
	int                                                TextCount;                                        		// 0x0270 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53787 ];

		return pClassPointer;
	};

	void OutputTextLine ( struct FString Text );
	bool InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
};

UClass* UUTConsole::pClassPointer = NULL;

// Class UTGame.UTConsolePlayerInput
// 0x00CB (0x0620 - 0x0555)
class UUTConsolePlayerInput : public UUTPlayerInput
{
public:
	float                                              SensitivityMultiplier;                            		// 0x0558 (0x0004) [0x0000000000000000]              
	float                                              TurningAccelerationMultiplier;                    		// 0x055C (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoCenterPitch : 1;                             		// 0x0560 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bAutoCenterVehiclePitch : 1;                      		// 0x0560 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bViewAccelerationEnabled : 1;                     		// 0x0560 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bDebugViewAcceleration : 1;                       		// 0x0560 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bTargetFrictionEnabled : 1;                       		// 0x0560 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bDebugTargetFriction : 1;                         		// 0x0560 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bAppliedTargetFriction : 1;                       		// 0x0560 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bIsLookingUp : 1;                                 		// 0x0560 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsLookingDown : 1;                               		// 0x0560 (0x0004) [0x0000000000000000] [0x00000100] 
	float                                              LastTurnTime;                                     		// 0x0564 (0x0004) [0x0000000000000000]              
	float                                              AutoCenterDelay;                                  		// 0x0568 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              AutoVehicleCenterSpeed;                           		// 0x056C (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              SlowTurnScaling;                                  		// 0x0570 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              ViewAccel_YawThreshold;                           		// 0x0574 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ViewAccel_DiagonalThreshold;                      		// 0x0578 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ViewAccel_BaseMultiplier;                         		// 0x057C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ViewAccel_CurrMutliplier;                         		// 0x0580 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewAccel_TimeToHoldBeforeFastAcceleration;       		// 0x0584 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ViewAccel_TimeHeld;                               		// 0x0588 (0x0004) [0x0000000000000000]              
	float                                              ViewAccel_Twitchy;                                		// 0x058C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Dodge_Threshold;                                  		// 0x0590 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class APawn*                                       LastFrictionTarget;                               		// 0x0594 (0x0008) [0x0000000000000000]              
	float                                              LastFrictionTargetTime;                           		// 0x059C (0x0004) [0x0000000000000000]              
	float                                              LastDistToTarget;                                 		// 0x05A0 (0x0004) [0x0000000000000000]              
	float                                              LastDistMultiplier;                               		// 0x05A4 (0x0004) [0x0000000000000000]              
	float                                              LastDistFromAimZ;                                 		// 0x05A8 (0x0004) [0x0000000000000000]              
	float                                              LastDistFromAimY;                                 		// 0x05AC (0x0004) [0x0000000000000000]              
	float                                              LastFrictionMultiplier;                           		// 0x05B0 (0x0004) [0x0000000000000000]              
	float                                              LastAdhesionAmtY;                                 		// 0x05B4 (0x0004) [0x0000000000000000]              
	float                                              LastAdhesionAmtZ;                                 		// 0x05B8 (0x0004) [0x0000000000000000]              
	float                                              LastTargetRadius;                                 		// 0x05BC (0x0004) [0x0000000000000000]              
	float                                              LastTargetHeight;                                 		// 0x05C0 (0x0004) [0x0000000000000000]              
	float                                              LastDistFromAimYa;                                		// 0x05C4 (0x0004) [0x0000000000000000]              
	float                                              LastDistFromAimZa;                                		// 0x05C8 (0x0004) [0x0000000000000000]              
	float                                              LastAdjustY;                                      		// 0x05CC (0x0004) [0x0000000000000000]              
	float                                              LastAdjustZ;                                      		// 0x05D0 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastCamLoc;                                       		// 0x05D4 (0x000C) [0x0000000000000000]              
	struct FRotator                                    LastDeltaRot;                                     		// 0x05E0 (0x000C) [0x0000000000000000]              
	float                                              LeftThumbStickDeadZoneThreshold;                  		// 0x05EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              RightThumbStickDeadZoneThreshold;                 		// 0x05F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MagicScaleForSensitivityMiddle;                   		// 0x05F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MagicScaleForSensitivityEdge;                     		// 0x05F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ViewAccel_RampSpeed;                              		// 0x05FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ViewAccel_MaxTurnSpeed;                           		// 0x0600 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ViewAccel_PitchThreshold;                         		// 0x0604 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ViewAccel_LookingUpOrDownBoundary;                		// 0x0608 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ViewAccel_BackToCenterBoundary;                   		// 0x060C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ViewAccel_BackToCenterSpeed;                      		// 0x0610 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AutoPitchCenterSpeed;                             		// 0x0614 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AutoPitchStopAdjustingValue;                      		// 0x0618 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              HoverBoardPitchMultiplier;                        		// 0x061C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53821 ];

		return pClassPointer;
	};

	unsigned char CheckForDoubleClickMove ( float DeltaTime );
	void Jump ( );
	void SmartJump ( );
	void DebugTargetFriction ( );
	void DebugTargetAdhesion ( );
	void DebugViewAcceleration ( );
	void ApplyTargetFriction ( float DeltaTime, class AUTWeapon* W );
	void AdjustMouseSensitivity ( float FOVScale );
	void ApplyTargetAdhesion ( float DeltaTime, class AUTWeapon* W, int* out_YawRot, int* out_PitchRot );
	void ApplyViewAcceleration ( float DeltaTime );
	void ApplyViewAutoVehiclePitchCentering ( float DeltaTime );
	void ApplyViewAutoPitchCentering ( float DeltaTime );
	void PreProcessInput ( float DeltaTime );
	void eventPostBeginPlay ( );
};

UClass* UUTConsolePlayerInput::pClassPointer = NULL;

// Class UTGame.UTSeqEvent_FlagEvent
// 0x0000 (0x0170 - 0x0170)
class UUTSeqEvent_FlagEvent : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54189 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void Trigger ( struct FName EventType, class AController* EventInstigator );
};

UClass* UUTSeqEvent_FlagEvent::pClassPointer = NULL;

// Class UTGame.UTCTFBase
// 0x0080 (0x05BC - 0x053C)
class AUTCTFBase : public AUTGameObjective
{
public:
	class UAudioComponent*                             TakenSound;                                       		// 0x053C (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AUTCTFFlag*                                  myFlag;                                           		// 0x0544 (0x0008) [0x0000000000000000]              
	class UClass*                                      FlagType;                                         		// 0x054C (0x0008) [0x0000000000000000]              
	float                                              MidFieldHighZOffset;                              		// 0x0554 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MidFieldLowZOffset;                               		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NearBaseRadius;                                   		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseExitTime;                                     		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    FlagEmptyParticles;                               		// 0x0564 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   FlagBaseMaterial;                                 		// 0x056C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_FlagBaseColor;                                		// 0x0574 (0x0008) [0x0000000000000000]              
	class UStaticMeshComponent*                        FlagBaseMesh;                                     		// 0x057C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      CTFAnnouncerMessagesClass;                        		// 0x0584 (0x0008) [0x0000000000000000]              
	TArray< class USoundNodeWave* >                    NearLocationSpeech;                               		// 0x058C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    MidfieldHighSpeech;                               		// 0x059C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    MidfieldLowSpeech;                                		// 0x05AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54204 ];

		return pClassPointer;
	};

	bool eventIsActive ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetAlarm ( unsigned long bNowOn );
	class AUTCarriedObject* GetFlag ( );
	void ObjectiveChanged ( );
	class USoundNodeWave* GetLocationSpeechFor ( class APlayerController* PC, int LocationSpeechOffset, int MessageIndex );
	int GetLocationMessageIndex ( class AUTBot* B, class APawn* StatusPawn );
	class AActor* eventGetBestViewTarget ( );
	void PostBeginPlay ( );
};

UClass* AUTCTFBase::pClassPointer = NULL;

// Class UTGame.UTCTFFlag
// 0x0048 (0x0440 - 0x03F8)
class AUTCTFFlag : public AUTCarriedObject
{
public:
	class UParticleSystem*                             RespawnEffect;                                    		// 0x03F8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bBringUpBright : 1;                               		// 0x0400 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBringDownFromBright : 1;                         		// 0x0400 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFadingOut : 1;                                   		// 0x0400 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bRespawning : 1;                                  		// 0x0400 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bWasClothEnabled : 1;                             		// 0x0400 (0x0004) [0x0000000000000000] [0x00000010] 
	TArray< class UMaterialInstanceConstant* >         MICArray;                                         		// 0x0404 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     RunningClothVelClamp;                             		// 0x0414 (0x000C) [0x0000000000000000]              
	struct FVector                                     HoverboardingClothVelClamp;                       		// 0x0420 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    SuccessfulCaptureSystem;                          		// 0x042C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0434 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastLocationPingTime;                             		// 0x043C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54221 ];

		return pClassPointer;
	};

	void SetFlagDynamicLightToNotBeDynamic ( );
	void SetFlagPropertiesToStationaryFlagState ( );
	void Drop ( class AController* Killer );
	void CustomFadeOutEffects ( );
	void bringUpBrightOff ( );
	void CustomRespawnEffects ( );
	void SameTeamTouch ( class AController* C );
	bool ValidHolder ( class AActor* Other );
	void SetHolder ( class AController* C );
	void ClientReturnedHome ( );
	bool ShouldMinimapRenderFor ( class APlayerController* PC );
	void eventOnBaseChainChanged ( );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AUTCTFFlag::pClassPointer = NULL;

// Class UTGame.UTTeamGame
// 0x0068 (0x0730 - 0x06C8)
class AUTTeamGame : public AUTDeathmatch
{
public:
	unsigned long                                      bPlayersBalanceTeams : 1;                         		// 0x06C8 (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bAllowNonTeamChat : 1;                            		// 0x06C8 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bScoreTeamKills : 1;                              		// 0x06C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSpawnInTeamArea : 1;                             		// 0x06C8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bScoreVictimsTarget : 1;                          		// 0x06C8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bForceAllRed : 1;                                 		// 0x06C8 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              FriendlyFireScale;                                		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              TeammateBoost;                                    		// 0x06D0 (0x0004) [0x0000000000000000]              
	class AUTTeamInfo*                                 Teams[ 0x2 ];                                     		// 0x06D4 (0x0010) [0x0000000000000000]              
	class UClass*                                      TeamAIType[ 0x2 ];                                		// 0x06E4 (0x0010) [0x0000000000000000]              
	struct FString                                     TeamFactions[ 0x2 ];                              		// 0x06F4 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      TeamScoreMessageClass;                            		// 0x0714 (0x0008) [0x0000000000000000]              
	class APlayerController*                           PendingTeamSwap;                                  		// 0x071C (0x0008) [0x0000000000000000]              
	float                                              SwapRequestTime;                                  		// 0x0724 (0x0004) [0x0000000000000000]              
	struct FName                                       FlagKillMessageName;                              		// 0x0728 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54226 ];

		return pClassPointer;
	};

	void ProcessSpeechRecognition ( class AUTPlayerController* Speaker, TArray< struct FSpeechRecognizedWord >* Words );
	void ProcessSpeechOrders ( class AUTPlayerController* Speaker, TArray< struct FSpeechRecognizedWord >* Words, TArray< class AUTBot* >* Recipients );
	void ParseSpeechRecipients ( class AUTPlayerController* Speaker, TArray< struct FSpeechRecognizedWord >* Words, TArray< class AUTBot* >* Recipients );
	void eventHandleSeamlessTravelPlayer ( class AController** C );
	void Logout ( class AController* Exiting );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void ShowPathTo ( class APlayerController* P, int TeamNum );
	bool AllowClientToTeleport ( class AUTPlayerReplicationInfo* ClientPRI, class AActor* DestinationActor );
	void OverridePRI ( class APlayerController* PC, class APlayerReplicationInfo* OldPRI );
	void AnnounceScore ( int ScoringTeam );
	void PlayRegularEndOfMatchMessage ( );
	bool IsWinningTeam ( class ATeamInfo* T );
	bool IsAWinner ( class APlayerController* C );
	bool DominatingVictory ( );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void SendFlagKillMessage ( class AController* Killer, class AUTPlayerReplicationInfo* KillerPRI );
	void AdjustSkill ( class AAIController* B, class APlayerController* P, unsigned long bWinner );
	void CampaignSkillAdjust ( class AUTBot* aBot );
	void ScoreKill ( class AController* Killer, class AController* Other );
	bool NearGoal ( class AController* C );
	class APawn* FindVictimsTarget ( class AController* Other );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void SetTeam ( class AController* Other, class AUTTeamInfo* NewTeam, unsigned long bNewTeam );
	bool ChangeTeam ( class AController* Other, int Num, unsigned long bNewTeam );
	unsigned char PickTeam ( unsigned char Num, class AController* C );
	void RestartGame ( );
	bool CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget );
	void SetEndGameFocus ( class APlayerReplicationInfo* Winner );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void NotifyKilled ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	bool TooManyBots ( class AController* botToRemove );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	bool CheckMaxLives ( class APlayerReplicationInfo* Scorer );
	int LevelRecommendedPlayers ( );
	class AUTTeamInfo* GetBotTeam ( int TeamBots, unsigned long bUseTeamIndex, int TeamIndex );
	int GetHandicapNeed ( class APawn* Other );
	void AddBlueBots ( int Num );
	void AddRedBots ( int Num );
	void CreateTeam ( int TeamIndex );
	void FindNewObjectives ( class AUTGameObjective* DisabledObjective );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void PreBeginPlay ( );
};

UClass* AUTTeamGame::pClassPointer = NULL;

// Class UTGame.UTCTFGame
// 0x0018 (0x0748 - 0x0730)
class AUTCTFGame : public AUTTeamGame
{
public:
	class AUTCTFFlag*                                  Flags[ 0x2 ];                                     		// 0x0730 (0x0010) [0x0000000000000000]              
	class UClass*                                      AnnouncerMessageClass;                            		// 0x0740 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54225 ];

		return pClassPointer;
	};

	class AActor* GetAutoObjectiveFor ( class AUTPlayerController* PC );
	void ViewObjective ( class APlayerController* PC );
	void ScoreFlag ( class AController* Scorer, class AUTCTFFlag* theFlag );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	bool WantFastSpawnFor ( class AAIController* B );
	bool NearGoal ( class AController* C );
	void RegisterFlag ( class AUTCTFFlag* F, int TeamIndex );
	bool GetLocationFor ( class APawn* StatusPawn, int LocationSpeechOffset, class AActor** LocationObject, int* MessageIndex );
	int GetHandicapNeed ( class APawn* Other );
	void SetEndGameFocus ( class APlayerReplicationInfo* Winner );
	void PostBeginPlay ( );
};

UClass* AUTCTFGame::pClassPointer = NULL;

// Class UTGame.UTCTFSquadAI
// 0x003C (0x03F8 - 0x03BC)
class AUTCTFSquadAI : public AUTSquadAI
{
public:
	float                                              LastSeeFlagCarrier;                               		// 0x03BC (0x0004) [0x0000000000000000]              
	class AUTCTFFlag*                                  FriendlyFlag;                                     		// 0x03C0 (0x0008) [0x0000000000000000]              
	class AUTCTFFlag*                                  EnemyFlag;                                        		// 0x03C8 (0x0008) [0x0000000000000000]              
	class ANavigationPoint*                            HidePath;                                         		// 0x03D0 (0x0008) [0x0000000000000000]              
	TArray< struct FAlternateRoute >                   EnemyFlagRoutes;                                  		// 0x03D8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAlternateRoute >                   FriendlyFlagRoutes;                               		// 0x03E8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54283 ];

		return pClassPointer;
	};

	void ModifyAggression ( class AUTBot* B, float* Aggression );
	bool AllowContinueOnFoot ( class AUTBot* B, class AUTVehicle* V );
	float ModifyThreat ( float Current, class APawn* NewThreat, unsigned long bThreatVisible, class AUTBot* B );
	unsigned char PriorityObjective ( class AUTBot* B );
	bool ShouldDeferTo ( class AController* C );
	bool AllowTaunt ( class AUTBot* B );
	void EnemyFlagTakenBy ( class AController* C );
	bool CheckSquadObjectives ( class AUTBot* B );
	bool OverrideFollowPlayer ( class AUTBot* B );
	bool FlagNearBase ( );
	bool NearHomeBase ( class AUTBot* B );
	bool NearEnemyBase ( class AUTBot* B );
	bool MustKeepEnemy ( class APawn* E );
	bool OrdersForFlagCarrier ( class AUTBot* B );
	bool CheckVehicle ( class AUTBot* B );
	class ANavigationPoint* FindHidePathFor ( class AUTBot* B );
	bool VisibleToEnemiesOf ( class AActor* A, class AUTBot* B );
	class AActor* FormationCenter ( class AController* C );
	bool GoPickupFlag ( class AUTBot* B );
	bool FindPathToObjective ( class AUTBot* B, class AActor* O );
	bool BeDevious ( class APawn* Enemy );
	void SetAlternatePathTo ( class ANavigationPoint* NewRouteObjective, class AUTBot* RouteMaker );
	bool ShouldUseAlternatePaths ( );
	bool AllowDetourTo ( class AUTBot* B, class ANavigationPoint* N );
	void PostBeginPlay ( );
};

UClass* AUTCTFSquadAI::pClassPointer = NULL;

// Class UTGame.UTTeamAI
// 0x0120 (0x03B4 - 0x0294)
class AUTTeamAI : public AUDKTeamOwnedInfo
{
public:
	class AUTTeamInfo*                                 EnemyTeam;                                        		// 0x0294 (0x0008) [0x0000000000000000]              
	int                                                NumSupportingPlayer;                              		// 0x029C (0x0004) [0x0000000000000000]              
	class AUTGameObjective*                            Objectives;                                       		// 0x02A0 (0x0008) [0x0000000000000000]              
	class AUTGameObjective*                            PickedObjective;                                  		// 0x02A8 (0x0008) [0x0000000000000000]              
	class AUTGameObjective*                            PickedStandaloneObjective;                        		// 0x02B0 (0x0008) [0x0000000000000000]              
	class AUTSquadAI*                                  Squads;                                           		// 0x02B8 (0x0008) [0x0000000000000000]              
	class AUTSquadAI*                                  AttackSquad;                                      		// 0x02C0 (0x0008) [0x0000000000000000]              
	class AUTSquadAI*                                  FreelanceSquad;                                   		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UClass*                                      SquadType;                                        		// 0x02D0 (0x0008) [0x0000000000000000]              
	int                                                OrderOffset;                                      		// 0x02D8 (0x0004) [0x0000000000000000]              
	struct FName                                       OrderList[ 0x8 ];                                 		// 0x02DC (0x0040) [0x0000000000000000]              
	class AUTPickupFactory*                            SuperPickups[ 0x10 ];                             		// 0x031C (0x0080) [0x0000000000000000]              
	int                                                NumSuperPickups;                                  		// 0x039C (0x0004) [0x0000000000000000]              
	unsigned long                                      bFoundSuperItems : 1;                             		// 0x03A0 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class AUTVehicleFactory* >                 ImportantVehicleFactories;                        		// 0x03A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54285 ];

		return pClassPointer;
	};

	void RemoveFromTeam ( class AController* Other );
	void SetOrders ( class AUTBot* B, struct FName NewOrders, class AController* OrderGiver );
	void SetBotOrders ( class AUTBot* NewBot );
	void PutOnFreelance ( class AUTBot* B );
	void PutOnOffense ( class AUTBot* B );
	bool PutOnDefense ( class AUTBot* B );
	class AUTGameObjective* GetPriorityFreelanceObjectiveFor ( class AUTSquadAI* InFreelanceSquad );
	class AUTGameObjective* GetPriorityStandaloneObjectiveFor ( class AUTSquadAI* InAttackSquad, class AController* InController );
	class AUTGameObjective* GetPriorityAttackObjectiveFor ( class AUTSquadAI* InAttackSquad, class AController* InController );
	class AUTGameObjective* GetLeastDefendedObjective ( class AController* InController );
	class AUTSquadAI* AddSquadWithLeader ( class AController* C, class AUTGameObjective* O );
	void PutBotOnSquadLedBy ( class AController* C, class AUTBot* B );
	class AUTSquadAI* AddHumanSquad ( );
	class AUTSquadAI* FindHumanSquad ( );
	void SetObjectiveLists ( );
	bool FriendlyToward ( class APawn* Other );
	void RemoveSquad ( class AUTSquadAI* Squad );
	void FindNewObjectiveFor ( class AUTSquadAI* S, unsigned long bForceUpdate );
	void FindNewObjectives ( class AUTGameObjective* DisabledObjective );
	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType );
	void ReAssessStrategy ( );
	void Reset ( );
	void FindSuperItems ( );
	void CriticalObjectiveWarning ( class AUTGameObjective* G, class APawn* NewEnemy );
	void Timer ( );
	void PostBeginPlay ( );
};

UClass* AUTTeamAI::pClassPointer = NULL;

// Class UTGame.UTEntryGame
// 0x0000 (0x0730 - 0x0730)
class AUTEntryGame : public AUTTeamGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54348 ];

		return pClassPointer;
	};

	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	void StartMatch ( );
	void AddBots ( int Num );
	bool NeedPlayers ( );
};

UClass* AUTEntryGame::pClassPointer = NULL;

// Class UTGame.UTFirstBloodMessage
// 0x0010 (0x0098 - 0x0088)
class UUTFirstBloodMessage : public UUTLocalMessage
{
public:
	struct FString                                     FirstBloodString;                                 		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54412 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTFirstBloodMessage::pClassPointer = NULL;

// Class UTGame.UTWeap_Physicsgun
// 0x0034 (0x07B0 - 0x077C)
class AUTWeap_Physicsgun : public AUTWeapon
{
public:
	float                                              WeaponImpulse;                                    		// 0x077C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoldDistanceMin;                                  		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HoldDistanceMax;                                  		// 0x0784 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrowImpulse;                                     		// 0x0788 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChangeHoldDistanceIncrement;                      		// 0x078C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URB_Handle*                                  PhysicsGrabber;                                   		// 0x0790 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              HoldDistance;                                     		// 0x0798 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x079C (0x0004) MISSED OFFSET
	struct FQuat                                       HoldOrientation;                                  		// 0x07A0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54493 ];

		return pClassPointer;
	};

	void ConsumeAmmo ( unsigned char FireModeNum );
	void Tick ( float DeltaTime );
	bool DoOverrideNextWeapon ( );
	bool DoOverridePrevWeapon ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void ChangeVisibility ( unsigned long bIsVisible );
	void PostBeginPlay ( );
};

UClass* AUTWeap_Physicsgun::pClassPointer = NULL;

// Class UTGame.UTDMRoster
// 0x000C (0x0334 - 0x0328)
class AUTDMRoster : public AUTTeamInfo
{
public:
	int                                                Position;                                         		// 0x0328 (0x0004) [0x0000000000000000]              
	class UClass*                                      DMSquadClass;                                     		// 0x032C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54558 ];

		return pClassPointer;
	};

	bool AddToTeam ( class AController* Other );
};

UClass* AUTDMRoster::pClassPointer = NULL;

// Class UTGame.UTMutator
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator : public AMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54561 ];

		return pClassPointer;
	};

	void ProcessSpeechRecognition ( class AUTPlayerController* Speaker, TArray< struct FSpeechRecognizedWord >* Words );
	bool ReplaceWith ( class AActor* Other, struct FString aClassName );
	class AUTMutator* GetNextUTMutator ( );
	bool MutatorIsAllowed ( );
};

UClass* AUTMutator::pClassPointer = NULL;

// Class UTGame.UTKillingSpreeMessage
// 0x0140 (0x01C8 - 0x0088)
class UUTKillingSpreeMessage : public UUTLocalMessage
{
public:
	struct FString                                     EndSpreeNote;                                     		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EndSelfSpree;                                     		// 0x0098 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EndFemaleSpree;                                   		// 0x00A8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MultiKillString;                                  		// 0x00B8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpreeNote[ 0x6 ];                                 		// 0x00C8 (0x0060) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SelfSpreeNote[ 0x6 ];                             		// 0x0128 (0x0060) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              SpreeSound[ 0x6 ];                                		// 0x0188 (0x0030) [0x0000000000000000]              
	struct FString                                     EndSpreeNoteTrailer;                              		// 0x01B8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54589 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
};

UClass* UUTKillingSpreeMessage::pClassPointer = NULL;

// Class UTGame.UTSeqEvent_GameEnded
// 0x0010 (0x0180 - 0x0170)
class UUTSeqEvent_GameEnded : public USequenceEvent
{
public:
	class AActor*                                      Winner;                                           		// 0x0170 (0x0008) [0x0000000000000000]              
	class AActor*                                      ActualWinner;                                     		// 0x0178 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54621 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* UUTSeqEvent_GameEnded::pClassPointer = NULL;

// Class UTGame.UTKillsRemainingMessage
// 0x0048 (0x00D0 - 0x0088)
class UUTKillsRemainingMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              KillsRemainSounds[ 0x3 ];                         		// 0x0088 (0x0018) [0x0000000000000000]              
	struct FString                                     KillsRemainStrings[ 0x3 ];                        		// 0x00A0 (0x0030) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54770 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTKillsRemainingMessage::pClassPointer = NULL;

// Class UTGame.UTDeathMessage
// 0x0024 (0x00AC - 0x0088)
class UUTDeathMessage : public UUTLocalMessage
{
public:
	struct FString                                     KilledString;                                     		// 0x0088 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SomeoneString;                                    		// 0x0098 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bNoConsoleDeathMessages : 1;                      		// 0x00A8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54881 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FColor GetConsoleColor ( class APlayerReplicationInfo* RelatedPRI );
};

UClass* UUTDeathMessage::pClassPointer = NULL;

// Class UTGame.UTPopulationManager
// 0x0000 (0x0388 - 0x0388)
class AUTPopulationManager : public AGameCrowdPopulationManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54882 ];

		return pClassPointer;
	};

};

UClass* AUTPopulationManager::pClassPointer = NULL;

// Class UTGame.UTMutator_BigHead
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator_BigHead : public AUTMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54895 ];

		return pClassPointer;
	};

	void ModifyPlayer ( class APawn* P );
};

UClass* AUTMutator_BigHead::pClassPointer = NULL;

// Class UTGame.UTMutator_Handicap
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator_Handicap : public AUTMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54896 ];

		return pClassPointer;
	};

	void ModifyPlayer ( class APawn* P );
};

UClass* AUTMutator_Handicap::pClassPointer = NULL;

// Class UTGame.UTMutator_LowGrav
// 0x0004 (0x02AC - 0x02A8)
class AUTMutator_LowGrav : public AUTMutator
{
public:
	float                                              GravityZ;                                         		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54897 ];

		return pClassPointer;
	};

	void InitMutator ( struct FString Options, struct FString* ErrorMessage );
};

UClass* AUTMutator_LowGrav::pClassPointer = NULL;

// Class UTGame.UTMutator_NoPowerups
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator_NoPowerups : public AUTMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54898 ];

		return pClassPointer;
	};

	bool CheckReplacement ( class AActor* Other );
};

UClass* AUTMutator_NoPowerups::pClassPointer = NULL;

// Class UTGame.UTMutator_Slomo
// 0x0004 (0x02AC - 0x02A8)
class AUTMutator_Slomo : public AUTMutator
{
public:
	float                                              GameSpeed;                                        		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54899 ];

		return pClassPointer;
	};

	void InitMutator ( struct FString Options, struct FString* ErrorMessage );
};

UClass* AUTMutator_Slomo::pClassPointer = NULL;

// Class UTGame.UTMutator_SlowTimeKills
// 0x000C (0x02B4 - 0x02A8)
class AUTMutator_SlowTimeKills : public AUTMutator
{
public:
	float                                              SlowTime;                                         		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              RampUpTime;                                       		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              SlowSpeed;                                        		// 0x02B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54900 ];

		return pClassPointer;
	};

	void Timer ( );
	void ScoreKill ( class AController* Killer, class AController* Killed );
	bool MutatorIsAllowed ( );
};

UClass* AUTMutator_SlowTimeKills::pClassPointer = NULL;

// Class UTGame.UTMutator_SpeedFreak
// 0x0004 (0x02AC - 0x02A8)
class AUTMutator_SpeedFreak : public AUTMutator
{
public:
	float                                              GameSpeed;                                        		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54901 ];

		return pClassPointer;
	};

	void InitMutator ( struct FString Options, struct FString* ErrorMessage );
};

UClass* AUTMutator_SpeedFreak::pClassPointer = NULL;

// Class UTGame.UTMutator_SuperBerserk
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator_SuperBerserk : public AUTMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54902 ];

		return pClassPointer;
	};

	bool CheckReplacement ( class AActor* Other );
	void ModifyPlayer ( class APawn* Other );
};

UClass* AUTMutator_SuperBerserk::pClassPointer = NULL;

// Class UTGame.UTMutator_WeaponsRespawn
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator_WeaponsRespawn : public AUTMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54903 ];

		return pClassPointer;
	};

	void InitMutator ( struct FString Options, struct FString* ErrorMessage );
};

UClass* AUTMutator_WeaponsRespawn::pClassPointer = NULL;

// Class UTGame.UTStatsWriteDM
// 0x0000 (0x00C4 - 0x00C4)
class UUTStatsWriteDM : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54905 ];

		return pClassPointer;
	};

};

UClass* UUTStatsWriteDM::pClassPointer = NULL;

// Class UTGame.UTGameSettingsDM
// 0x0000 (0x00FC - 0x00FC)
class UUTGameSettingsDM : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54906 ];

		return pClassPointer;
	};

};

UClass* UUTGameSettingsDM::pClassPointer = NULL;

// Class UTGame.UTTeamPlayerStart
// 0x0000 (0x03C8 - 0x03C8)
class AUTTeamPlayerStart : public AUDKTeamPlayerStart
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55024 ];

		return pClassPointer;
	};

};

UClass* AUTTeamPlayerStart::pClassPointer = NULL;

// Class UTGame.UTStatsWriteTDM
// 0x0000 (0x00C4 - 0x00C4)
class UUTStatsWriteTDM : public UUTStatsWriteDM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55145 ];

		return pClassPointer;
	};

};

UClass* UUTStatsWriteTDM::pClassPointer = NULL;

// Class UTGame.UTGameSettingsTDM
// 0x0000 (0x00FC - 0x00FC)
class UUTGameSettingsTDM : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55146 ];

		return pClassPointer;
	};

};

UClass* UUTGameSettingsTDM::pClassPointer = NULL;

// Class UTGame.UTCTFTeamAI
// 0x0014 (0x03C8 - 0x03B4)
class AUTCTFTeamAI : public AUTTeamAI
{
public:
	class AUTCTFFlag*                                  FriendlyFlag;                                     		// 0x03B4 (0x0008) [0x0000000000000000]              
	class AUTCTFFlag*                                  EnemyFlag;                                        		// 0x03BC (0x0008) [0x0000000000000000]              
	float                                              LastGotFlag;                                      		// 0x03C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55152 ];

		return pClassPointer;
	};

	class AUTGameObjective* GetPriorityFreelanceObjectiveFor ( class AUTSquadAI* InFreelanceSquad );
	class AUTSquadAI* AddSquadWithLeader ( class AController* C, class AUTGameObjective* O );
};

UClass* AUTCTFTeamAI::pClassPointer = NULL;

// Class UTGame.UTTeamDeathMessage
// 0x0000 (0x00AC - 0x00AC)
class UUTTeamDeathMessage : public UUTDeathMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55213 ];

		return pClassPointer;
	};

};

UClass* UUTTeamDeathMessage::pClassPointer = NULL;

// Class UTGame.UTStatsWriteCTF
// 0x0000 (0x00C4 - 0x00C4)
class UUTStatsWriteCTF : public UUTStatsWriteDM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55214 ];

		return pClassPointer;
	};

};

UClass* UUTStatsWriteCTF::pClassPointer = NULL;

// Class UTGame.UTGameSettingsCTF
// 0x0000 (0x00FC - 0x00FC)
class UUTGameSettingsCTF : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55215 ];

		return pClassPointer;
	};

};

UClass* UUTGameSettingsCTF::pClassPointer = NULL;

// Class UTGame.UTSayMsg
// 0x0008 (0x0090 - 0x0088)
class UUTSayMsg : public UUTLocalMessage
{
public:
	struct FColor                                      RedTeamColor;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FColor                                      BlueTeamColor;                                    		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55536 ];

		return pClassPointer;
	};

	struct FColor GetConsoleColor ( class APlayerReplicationInfo* RelatedPRI );
};

UClass* UUTSayMsg::pClassPointer = NULL;

// Class UTGame.UTTeamSayMsg
// 0x0000 (0x0088 - 0x0088)
class UUTTeamSayMsg : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55537 ];

		return pClassPointer;
	};

};

UClass* UUTTeamSayMsg::pClassPointer = NULL;

// Class UTGame.UTGameViewportClient
// 0x0098 (0x0248 - 0x01B0)
class UUTGameViewportClient : public UUDKGameViewportClient
{
public:
	struct FString                                     LevelActionMessages[ 0x6 ];                       		// 0x01B0 (0x0060) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UTFrontEndString;                                 		// 0x0210 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UFont*                                       LoadingScreenMapNameFont;                         		// 0x0220 (0x0008) [0x0000000000000000]              
	class UFont*                                       LoadingScreenGameTypeNameFont;                    		// 0x0228 (0x0008) [0x0000000000000000]              
	class UFont*                                       LoadingScreenHintMessageFont;                     		// 0x0230 (0x0008) [0x0000000000000000]              
	struct FString                                     ProgressMessageSceneClassName;                    		// 0x0238 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55569 ];

		return pClassPointer;
	};

	void NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title );
	void eventSetProgressMessage ( unsigned char MessageType, struct FString Message, struct FString Title, unsigned long bIgnoreFutureNetworkMessages );
	void UpdateActiveSplitscreenType ( );
	void RenderHeader ( class UCanvas* Canvas );
	void DrawTransition ( class UCanvas* Canvas );
	void eventPostRender ( class UCanvas* Canvas );
};

UClass* UUTGameViewportClient::pClassPointer = NULL;

// Class UTGame.UTWeaponSwitchMessage
// 0x0000 (0x0088 - 0x0088)
class UUTWeaponSwitchMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55594 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTWeaponSwitchMessage::pClassPointer = NULL;

// Class UTGame.UTPowerupPickupFactory
// 0x0000 (0x04F0 - 0x04F0)
class AUTPowerupPickupFactory : public AUTPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55859 ];

		return pClassPointer;
	};

	void SpawnCopyFor ( class APawn* Recipient );
	void AddWeaponOverlay ( class AUTGameReplicationInfo* GRI );
};

UClass* AUTPowerupPickupFactory::pClassPointer = NULL;

// Class UTGame.UTCTFHUDMessage
// 0x0038 (0x00C0 - 0x0088)
class UUTCTFHUDMessage : public UUTLocalMessage
{
public:
	struct FString                                     YouHaveFlagString;                                		// 0x0088 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EnemyHasFlagString;                               		// 0x0098 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BothFlagsString;                                  		// 0x00A8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      RedColor;                                         		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      YellowColor;                                      		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55919 ];

		return pClassPointer;
	};

	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTCTFHUDMessage::pClassPointer = NULL;

// Class UTGame.UTWeaponRewardMessage
// 0x0108 (0x0190 - 0x0088)
class UUTWeaponRewardMessage : public UUTLocalMessage
{
public:
	struct FString                                     RewardString[ 0xB ];                              		// 0x0088 (0x00B0) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              RewardSounds[ 0xB ];                              		// 0x0138 (0x0058) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56685 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTWeaponRewardMessage::pClassPointer = NULL;

// Class UTGame.UTDataStore_GameSearchPersonal
// 0x00F8 (0x01D0 - 0x00D8)
class UUTDataStore_GameSearchPersonal : public UUDKDataStore_GameSearchBase
{
public:
	class UUTDataStore_GameSearchDM*                   PrimaryGameSearchDataStore;                       		// 0x00D8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ServerUniqueId[ 0xF ];                            		// 0x00E0 (0x00F0) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56693 ];

		return pClassPointer;
	};

	void GetServerStringList ( TArray< struct FString >* out_ServerList );
	void GetServerIdList ( TArray< struct FUniqueNetId >* out_ServerList );
	bool RemoveServer ( int ControllerId, struct FUniqueNetId IdToRemove );
	bool AddServer ( int ControllerId, struct FUniqueNetId IdToAdd );
	int FindServerIndexById ( int ControllerId, struct FUniqueNetId* IdToFind );
	int FindServerIndexByString ( int ControllerId, struct FString IdToFind );
	bool GetPlayerNetId ( int ControllerId, struct FUniqueNetId* out_PlayerId );
	struct FString GetPlayerName ( int ControllerId );
	bool OverrideQuerySubmission ( unsigned char ControllerId, class UOnlineGameSearch* Search );
	bool HasOutstandingQueries ( unsigned long bRestrictCheckToSelf );
};

UClass* UUTDataStore_GameSearchPersonal::pClassPointer = NULL;

// Class UTGame.UTDataStore_GameSearchHistory
// 0x0010 (0x01E0 - 0x01D0)
class UUTDataStore_GameSearchHistory : public UUTDataStore_GameSearchPersonal
{
public:
	class UClass*                                      FavoritesGameSearchDataStoreClass;                		// 0x01D0 (0x0008) [0x0000000000000000]              
	class UUTDataStore_GameSearchFavorites*            FavoritesGameSearchDataStore;                     		// 0x01D8 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56692 ];

		return pClassPointer;
	};

	bool HasOutstandingQueries ( unsigned long bRestrictCheckToSelf );
	void eventRegistered ( class ULocalPlayer* PlayerOwner );
};

UClass* UUTDataStore_GameSearchHistory::pClassPointer = NULL;

// Class UTGame.UTDataStore_GameSearchFavorites
// 0x0008 (0x01D8 - 0x01D0)
class UUTDataStore_GameSearchFavorites : public UUTDataStore_GameSearchPersonal
{
public:
	class UUTDataStore_GameSearchHistory*              HistoryGameSearchDataStore;                       		// 0x01D0 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56717 ];

		return pClassPointer;
	};

	bool HasOutstandingQueries ( unsigned long bRestrictCheckToSelf );
};

UClass* UUTDataStore_GameSearchFavorites::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_SearchResult
// 0x0000 (0x00CC - 0x00CC)
class UUTUIDataProvider_SearchResult : public UUDKUIDataProvider_SearchResult
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56749 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_SearchResult::pClassPointer = NULL;

// Class UTGame.UTGameSearchTDM
// 0x0000 (0x015C - 0x015C)
class UUTGameSearchTDM : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56750 ];

		return pClassPointer;
	};

};

UClass* UUTGameSearchTDM::pClassPointer = NULL;

// Class UTGame.UTGameSearchCTF
// 0x0000 (0x015C - 0x015C)
class UUTGameSearchCTF : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56751 ];

		return pClassPointer;
	};

};

UClass* UUTGameSearchCTF::pClassPointer = NULL;

// Class UTGame.UTGameSearchVCTF
// 0x0000 (0x015C - 0x015C)
class UUTGameSearchVCTF : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56752 ];

		return pClassPointer;
	};

};

UClass* UUTGameSearchVCTF::pClassPointer = NULL;

// Class UTGame.UTGameSettingsVCTF
// 0x0000 (0x00FC - 0x00FC)
class UUTGameSettingsVCTF : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56753 ];

		return pClassPointer;
	};

};

UClass* UUTGameSettingsVCTF::pClassPointer = NULL;

// Class UTGame.UTGameSearchPersonal
// 0x0000 (0x015C - 0x015C)
class UUTGameSearchPersonal : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56763 ];

		return pClassPointer;
	};

};

UClass* UUTGameSearchPersonal::pClassPointer = NULL;

// Class UTGame.UTGameSettingsPersonal
// 0x0000 (0x00FC - 0x00FC)
class UUTGameSettingsPersonal : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56819 ];

		return pClassPointer;
	};

};

UClass* UUTGameSettingsPersonal::pClassPointer = NULL;

// Class UTGame.UTDataStore_GameSettingsDM
// 0x0000 (0x00B4 - 0x00B4)
class UUTDataStore_GameSettingsDM : public UUIDataStore_OnlineGameSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56827 ];

		return pClassPointer;
	};

};

UClass* UUTDataStore_GameSettingsDM::pClassPointer = NULL;

// Class UTGame.UTWeaponKillMessage
// 0x0000 (0x0088 - 0x0088)
class UUTWeaponKillMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56853 ];

		return pClassPointer;
	};

};

UClass* UUTWeaponKillMessage::pClassPointer = NULL;

// Class UTGame.UTKillerMessage
// 0x0070 (0x00F8 - 0x0088)
class UUTKillerMessage : public UUTWeaponKillMessage
{
public:
	struct FString                                     YouKilled;                                        		// 0x0088 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouKilledTrailer;                                 		// 0x0098 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouTeamKilled;                                    		// 0x00A8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouTeamKilledTrailer;                             		// 0x00B8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OtherKilledPrefix;                                		// 0x00C8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OtherKilled;                                      		// 0x00D8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OtherKilledTrailer;                               		// 0x00E8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56852 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTKillerMessage::pClassPointer = NULL;

// Class UTGame.UTMultiKillMessage
// 0x0078 (0x0100 - 0x0088)
class UUTMultiKillMessage : public UUTLocalMessage
{
public:
	struct FString                                     KillString[ 0x5 ];                                		// 0x0088 (0x0050) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              KillSound[ 0x5 ];                                 		// 0x00D8 (0x0028) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56856 ];

		return pClassPointer;
	};

	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTMultiKillMessage::pClassPointer = NULL;

// Class UTGame.UTVictimMessage
// 0x0080 (0x0108 - 0x0088)
class UUTVictimMessage : public UUTWeaponKillMessage
{
public:
	struct FString                                     YouWereKilledBy;                                  		// 0x0088 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KilledByTrailer;                                  		// 0x0098 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OrbSuicideString;                                 		// 0x00A8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RunOverString;                                    		// 0x00B8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpiderMineString;                                 		// 0x00C8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ScorpionKamikazeString;                           		// 0x00D8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ViperKamikazeString;                              		// 0x00E8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TelefragString;                                   		// 0x00F8 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56858 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTVictimMessage::pClassPointer = NULL;

// Class UTGame.UTDecalManager
// 0x0000 (0x02C8 - 0x02C8)
class AUTDecalManager : public ADecalManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56862 ];

		return pClassPointer;
	};

	bool CanSpawnDecals ( );
};

UClass* AUTDecalManager::pClassPointer = NULL;

// Class UTGame.UTEmit_BodyFlame
// 0x0000 (0x02A0 - 0x02A0)
class AUTEmit_BodyFlame : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56891 ];

		return pClassPointer;
	};

};

UClass* AUTEmit_BodyFlame::pClassPointer = NULL;

// Class UTGame.UTEmit_VehicleHit
// 0x0000 (0x02A0 - 0x02A0)
class AUTEmit_VehicleHit : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56912 ];

		return pClassPointer;
	};

};

UClass* AUTEmit_VehicleHit::pClassPointer = NULL;

// Class UTGame.UTDmgType_Grenade
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Grenade : public UUTDmgType_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56921 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_Grenade::pClassPointer = NULL;

// Class UTGame.UTDmgType_Instagib
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Instagib : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56925 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UUTDmgType_Instagib::pClassPointer = NULL;

// Class UTGame.UTDmgType_Lava
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Lava : public UUTDmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56935 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_Lava::pClassPointer = NULL;

// Class UTGame.UTDmgType_LinkBeam
// 0x0018 (0x0194 - 0x017C)
class UUTDmgType_LinkBeam : public UUTDamageType
{
public:
	class UParticleSystem*                             PS_AttachToGib;                                   		// 0x017C (0x0008) [0x0000000000000000]              
	struct FName                                       BoneToAttach;                                     		// 0x0184 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_AttachToBody;                                  		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56939 ];

		return pClassPointer;
	};

	void SpawnExtraGibEffects ( class AUTGib* TheGib );
	void DoCustomDamageEffects ( class AUTPawn* ThePawn, class UClass* TheDamageType, struct FVector HitLocation, struct FTraceHitInfo* HitInfo );
};

UClass* UUTDmgType_LinkBeam::pClassPointer = NULL;

// Class UTGame.UTDmgType_LinkPlasma
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_LinkPlasma : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56959 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_LinkPlasma::pClassPointer = NULL;

// Class UTGame.UTVehicleKillMessage
// 0x00C0 (0x0148 - 0x0088)
class UUTVehicleKillMessage : public UUTLocalMessage
{
public:
	struct FString                                     KillString[ 0x8 ];                                		// 0x0088 (0x0080) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              KillSounds[ 0x8 ];                                		// 0x0108 (0x0040) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56971 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTVehicleKillMessage::pClassPointer = NULL;

// Class UTGame.UTDmgType_SeekingRocket
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_SeekingRocket : public UUTDmgType_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56993 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_SeekingRocket::pClassPointer = NULL;

// Class UTGame.UTDmgType_ShockBall
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_ShockBall : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56997 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_ShockBall::pClassPointer = NULL;

// Class UTGame.UTDmgType_ShockCombo
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_ShockCombo : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57001 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_ShockCombo::pClassPointer = NULL;

// Class UTGame.UTDmgType_ShockPrimary
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_ShockPrimary : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57007 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_ShockPrimary::pClassPointer = NULL;

// Class UTGame.UTDmgType_SpaceDeath
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_SpaceDeath : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57012 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_SpaceDeath::pClassPointer = NULL;

// Class UTGame.UTDmgType_Telefrag
// 0x0000 (0x017C - 0x017C)
class UUTDmgType_Telefrag : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57016 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_Telefrag::pClassPointer = NULL;

// Class UTGame.UTDMSquad
// 0x0000 (0x03BC - 0x03BC)
class AUTDMSquad : public AUTSquadAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57067 ];

		return pClassPointer;
	};

	bool AssignSquadResponsibility ( class AUTBot* B );
	float VehicleDesireability ( class AUTVehicle* V, class AUTBot* B );
	bool AllowContinueOnFoot ( class AUTBot* B, class AUTVehicle* V );
	bool FriendlyToward ( class APawn* Other );
	bool SetEnemy ( class AUTBot* B, class APawn* NewEnemy );
	struct FName GetOrders ( );
	bool BeDevious ( class APawn* Enemy );
	bool NearFormationCenter ( class APawn* P );
	bool WaitAtThisPosition ( class APawn* P );
	bool CheckSquadObjectives ( class AUTBot* B );
	bool ShouldDeferTo ( class AController* C );
	void RemoveBot ( class AUTBot* B );
	void AddBot ( class AUTBot* B );
	bool IsDefending ( class AUTBot* B );
	void DisplayDebug ( class AHUD* HUD, float* YL, float* YPos );
};

UClass* AUTDMSquad::pClassPointer = NULL;

// Class UTGame.UTDroppedItemPickup
// 0x000C (0x02D4 - 0x02C8)
class AUTDroppedItemPickup : public AUTDroppedPickup
{
public:
	float                                              MaxDesireability;                                 		// 0x02C8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PickupSound;                                      		// 0x02CC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57154 ];

		return pClassPointer;
	};

	void PickedUpBy ( class APawn* P );
	void DroppedFrom ( class APawn* P );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void eventSetPickupMesh ( class UPrimitiveComponent* NewPickupMesh );
	float BotDesireability ( class APawn* Bot, class AController* C );
};

UClass* AUTDroppedItemPickup::pClassPointer = NULL;

// Class UTGame.UTDummyPawn
// 0x0008 (0x0ACC - 0x0AC4)
class AUTDummyPawn : public AUTPawn
{
public:
	class UUTSeqAct_DummyWeaponFire*                   FireAction;                                       		// 0x0AC4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57175 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	struct FVector GetPawnViewLocation ( );
	struct FVector GetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon );
	void WeaponAttachmentChanged ( );
	struct FRotator GetAdjustedAimFor ( class AWeapon* InWeapon, struct FVector projStart );
	void SetWeaponAmbientSound ( class USoundCue* NewAmbientSound );
	void SetPawnAmbientSound ( class USoundCue* NewAmbientSound );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void PostBeginPlay ( );
};

UClass* AUTDummyPawn::pClassPointer = NULL;

// Class UTGame.UTSeqAct_DummyWeaponFire
// 0x003C (0x01A4 - 0x0168)
class UUTSeqAct_DummyWeaponFire : public USeqAct_Latent
{
public:
	class AUTDummyPawn*                                DummyPawn;                                        		// 0x0168 (0x0008) [0x0000000000000000]              
	int                                                ShotsToFire;                                      		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      WeaponClass;                                      		// 0x0174 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      FireMode;                                         		// 0x017C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Origin;                                           		// 0x0180 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Target;                                           		// 0x0188 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MaxSpread;                                        		// 0x0190 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSuppressSounds : 1;                              		// 0x019C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ShotsFired;                                       		// 0x01A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57177 ];

		return pClassPointer;
	};

	bool eventUpdate ( float DeltaTime );
	void NotifyDummyFire ( );
	void eventActivated ( );
};

UClass* UUTSeqAct_DummyWeaponFire::pClassPointer = NULL;

// Class UTGame.UTDynamicWaterVolume
// 0x0000 (0x0350 - 0x0350)
class AUTDynamicWaterVolume : public AUTWaterVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57240 ];

		return pClassPointer;
	};

};

UClass* AUTDynamicWaterVolume::pClassPointer = NULL;

// Class UTGame.UTEmit_BloodSpray
// 0x0000 (0x02A0 - 0x02A0)
class AUTEmit_BloodSpray : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57265 ];

		return pClassPointer;
	};

};

UClass* AUTEmit_BloodSpray::pClassPointer = NULL;

// Class UTGame.UTEmit_HeadShotHelmet
// 0x0000 (0x02AC - 0x02AC)
class AUTEmit_HeadShotHelmet : public AUTReplicatedEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57275 ];

		return pClassPointer;
	};

};

UClass* AUTEmit_HeadShotHelmet::pClassPointer = NULL;

// Class UTGame.UTEmit_ShockCombo
// 0x001C (0x02C8 - 0x02AC)
class AUTEmit_ShockCombo : public AUTReplicatedEmitter
{
public:
	class UClass*                                      ExplosionLightClass;                              		// 0x02AC (0x0008) [0x0000000000000000]              
	float                                              VortexForcePerSecond;                             		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              VortexRadius;                                     		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              VortexDuration;                                   		// 0x02BC (0x0004) [0x0000000000000000]              
	class UClass*                                      VortexDamageType;                                 		// 0x02C0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57279 ];

		return pClassPointer;
	};

	void eventSetInitialState ( );
};

UClass* AUTEmit_ShockCombo::pClassPointer = NULL;

// Class UTGame.UTShockComboExplosionLight
// 0x0000 (0x0270 - 0x0270)
class UUTShockComboExplosionLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57302 ];

		return pClassPointer;
	};

};

UClass* UUTShockComboExplosionLight::pClassPointer = NULL;

// Class UTGame.UTEmit_TransLocateOut
// 0x000C (0x02B8 - 0x02AC)
class AUTEmit_TransLocateOut : public AUTReplicatedEmitter
{
public:
	float                                              TLTrailKillWindow;                                		// 0x02AC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FirstPersonTemplate;                              		// 0x02B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57305 ];

		return pClassPointer;
	};

	void Timer ( );
	void PostBeginPlay ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
};

UClass* AUTEmit_TransLocateOut::pClassPointer = NULL;

// Class UTGame.UTEmit_TransLocateOutRed
// 0x0000 (0x02B8 - 0x02B8)
class AUTEmit_TransLocateOutRed : public AUTEmit_TransLocateOut
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57327 ];

		return pClassPointer;
	};

};

UClass* AUTEmit_TransLocateOutRed::pClassPointer = NULL;

// Class UTGame.UTEmitCameraEffect
// 0x0000 (0x02AC - 0x02AC)
class AUTEmitCameraEffect : public AUDKEmitCameraEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57335 ];

		return pClassPointer;
	};

};

UClass* AUTEmitCameraEffect::pClassPointer = NULL;

// Class UTGame.UTEntryPlayerController
// 0x0020 (0x0BD8 - 0x0BB8)
class AUTEntryPlayerController : public AUTPlayerController
{
public:
	class UPostProcessChain*                           EntryPostProcessChain;                            		// 0x0BB8 (0x0008) [0x0000000000000000]              
	TArray< class UPostProcessChain* >                 OldPostProcessChain;                              		// 0x0BC0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ULocalPlayer*                                OldPlayer;                                        		// 0x0BD0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57355 ];

		return pClassPointer;
	};

	void ShowScoreboard ( );
	void ShowMidGameMenu ( struct FName TabTag, unsigned long bEnableInput );
	void SetPawnConstructionScene ( unsigned long bShow );
	void QuitToMainMenu ( );
	void OnLinkStatusChanged ( unsigned long bConnected );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	void OnGameInviteReceived ( unsigned char LocalUserNum, struct FString RequestingNick );
	void OnControllerChanged ( int ControllerId, unsigned long bIsConnected );
	void eventDestroyed ( );
	void RestorePostProcessing ( );
	void eventInitInputSystem ( );
};

UClass* AUTEntryPlayerController::pClassPointer = NULL;

// Class UTGame.UTEntryHUD
// 0x0000 (0x05AC - 0x05AC)
class AUTEntryHUD : public AHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57356 ];

		return pClassPointer;
	};

	void eventPostRender ( );
};

UClass* AUTEntryHUD::pClassPointer = NULL;

// Class UTGame.UTPawnSoundGroup_Liandri
// 0x0000 (0x0120 - 0x0120)
class UUTPawnSoundGroup_Liandri : public UUTPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57465 ];

		return pClassPointer;
	};

};

UClass* UUTPawnSoundGroup_Liandri::pClassPointer = NULL;

// Class UTGame.UTVoice_Robot
// 0x0000 (0x0144 - 0x0144)
class UUTVoice_Robot : public UUTVoice
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57466 ];

		return pClassPointer;
	};

	bool SendLocationUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, class AUTGame* G, class APawn* StatusPawn, unsigned long bDontSendMidfield );
};

UClass* UUTVoice_Robot::pClassPointer = NULL;

// Class UTGame.UTGib_Robot
// 0x0008 (0x032C - 0x0324)
class AUTGib_Robot : public AUTGib
{
public:
	struct FName                                       CustomGibSocketName;                              		// 0x0324 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57473 ];

		return pClassPointer;
	};

	void DoCustomGibEffects ( );
};

UClass* AUTGib_Robot::pClassPointer = NULL;

// Class UTGame.UTGib_RobotArm
// 0x0000 (0x032C - 0x032C)
class AUTGib_RobotArm : public AUTGib_Robot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57472 ];

		return pClassPointer;
	};

};

UClass* AUTGib_RobotArm::pClassPointer = NULL;

// Class UTGame.UTGib_RobotHand
// 0x0000 (0x032C - 0x032C)
class AUTGib_RobotHand : public AUTGib_Robot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57474 ];

		return pClassPointer;
	};

};

UClass* AUTGib_RobotHand::pClassPointer = NULL;

// Class UTGame.UTGib_RobotLeg
// 0x0000 (0x032C - 0x032C)
class AUTGib_RobotLeg : public AUTGib_Robot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57475 ];

		return pClassPointer;
	};

};

UClass* AUTGib_RobotLeg::pClassPointer = NULL;

// Class UTGame.UTGib_RobotTorso
// 0x0000 (0x032C - 0x032C)
class AUTGib_RobotTorso : public AUTGib_Robot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57476 ];

		return pClassPointer;
	};

};

UClass* AUTGib_RobotTorso::pClassPointer = NULL;

// Class UTGame.UTGib_RobotChunk
// 0x0000 (0x032C - 0x032C)
class AUTGib_RobotChunk : public AUTGib_Robot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57477 ];

		return pClassPointer;
	};

};

UClass* AUTGib_RobotChunk::pClassPointer = NULL;

// Class UTGame.UTGib_RobotHead
// 0x0000 (0x032C - 0x032C)
class AUTGib_RobotHead : public AUTGib_Robot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57478 ];

		return pClassPointer;
	};

};

UClass* AUTGib_RobotHead::pClassPointer = NULL;

// Class UTGame.UTGameInteraction
// 0x0000 (0x01D8 - 0x01D8)
class UUTGameInteraction : public UUDKGameInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57511 ];

		return pClassPointer;
	};

};

UClass* UUTGameInteraction::pClassPointer = NULL;

// Class UTGame.UTGibStaticMeshComponent
// 0x0000 (0x02B8 - 0x02B8)
class UUTGibStaticMeshComponent : public UStaticMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57948 ];

		return pClassPointer;
	};

};

UClass* UUTGibStaticMeshComponent::pClassPointer = NULL;

// Class UTGame.UTGibSkeletalMeshComponent
// 0x0000 (0x0740 - 0x0740)
class UUTGibSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57957 ];

		return pClassPointer;
	};

};

UClass* UUTGibSkeletalMeshComponent::pClassPointer = NULL;

// Class UTGame.UTGreenMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UUTGreenMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58059 ];

		return pClassPointer;
	};

};

UClass* UUTGreenMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTHealthPickupLight
// 0x0000 (0x0298 - 0x0298)
class AUTHealthPickupLight : public ALight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58094 ];

		return pClassPointer;
	};

};

UClass* AUTHealthPickupLight::pClassPointer = NULL;

// Class UTGame.UTHoverWheel
// 0x0000 (0x0160 - 0x0160)
class UUTHoverWheel : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58109 ];

		return pClassPointer;
	};

};

UClass* UUTHoverWheel::pClassPointer = NULL;

// Class UTGame.UTHugeExplosionLight
// 0x0000 (0x0270 - 0x0270)
class UUTHugeExplosionLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58111 ];

		return pClassPointer;
	};

};

UClass* UUTHugeExplosionLight::pClassPointer = NULL;

// Class UTGame.UTRotatingDroppedPickup
// 0x0004 (0x02CC - 0x02C8)
class AUTRotatingDroppedPickup : public AUTDroppedPickup
{
public:
	float                                              YawRotationRate;                                  		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58133 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
};

UClass* AUTRotatingDroppedPickup::pClassPointer = NULL;

// Class UTGame.UTJumpLiftExit
// 0x0000 (0x03B0 - 0x03B0)
class AUTJumpLiftExit : public ALiftExit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58234 ];

		return pClassPointer;
	};

	bool CanBeReachedFromLiftBy ( class APawn* Other );
	void WaitForLift ( class APawn* Other );
	void PostBeginPlay ( );
};

UClass* AUTJumpLiftExit::pClassPointer = NULL;

// Class UTGame.UTJumpPad
// 0x0000 (0x03D0 - 0x03D0)
class AUTJumpPad : public AUDKJumpPad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58246 ];

		return pClassPointer;
	};

};

UClass* AUTJumpPad::pClassPointer = NULL;

// Class UTGame.UTJumpPadReachSpec
// 0x0000 (0x00C8 - 0x00C8)
class UUTJumpPadReachSpec : public UUDKJumpPadReachSpec
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58256 ];

		return pClassPointer;
	};

};

UClass* UUTJumpPadReachSpec::pClassPointer = NULL;

// Class UTGame.UTKillZVolume
// 0x0008 (0x0320 - 0x0318)
class AUTKillZVolume : public APhysicsVolume
{
public:
	class UClass*                                      KillZDamageType;                                  		// 0x0318 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58332 ];

		return pClassPointer;
	};

	void eventKillActor ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventPawnEnteredVolume ( class APawn* Other );
	void eventActorEnteredVolume ( class AActor* Other );
};

UClass* AUTKillZVolume::pClassPointer = NULL;

// Class UTGame.UTKismetAnnouncement
// 0x0000 (0x0088 - 0x0088)
class UUTKismetAnnouncement : public UUTObjectiveSpecificMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58382 ];

		return pClassPointer;
	};

	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	struct FObjectiveAnnouncementInfo GetObjectiveAnnouncement ( unsigned char MessageIndex, class UObject* Objective, class APlayerController* PC );
};

UClass* UUTKismetAnnouncement::pClassPointer = NULL;

// Class UTGame.UTSeqAct_PlayAnnouncement
// 0x0018 (0x0168 - 0x0150)
class UUTSeqAct_PlayAnnouncement : public USequenceAction
{
public:
	struct FObjectiveAnnouncementInfo                  Announcement;                                     		// 0x0150 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58386 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_PlayAnnouncement::pClassPointer = NULL;

// Class UTGame.UTLavaVolume
// 0x0000 (0x0338 - 0x0338)
class AUTLavaVolume : public AWaterVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58417 ];

		return pClassPointer;
	};

};

UClass* AUTLavaVolume::pClassPointer = NULL;

// Class UTGame.UTLeviathanMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UUTLeviathanMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58423 ];

		return pClassPointer;
	};

};

UClass* UUTLeviathanMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTLinkBeamLight
// 0x0008 (0x0294 - 0x028C)
class AUTLinkBeamLight : public AActor
{
public:
	class UPointLightComponent*                        BeamLight;                                        		// 0x028C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58425 ];

		return pClassPointer;
	};

};

UClass* AUTLinkBeamLight::pClassPointer = NULL;

// Class UTGame.UTMapMusicInfo
// 0x0000 (0x0154 - 0x0154)
class UUTMapMusicInfo : public UUDKMapMusicInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58485 ];

		return pClassPointer;
	};

};

UClass* UUTMapMusicInfo::pClassPointer = NULL;

// Class UTGame.UTMutator_Arena
// 0x0010 (0x02B8 - 0x02A8)
class AUTMutator_Arena : public AUTMutator
{
public:
	struct FString                                     ArenaWeaponClassPath;                             		// 0x02A8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58696 ];

		return pClassPointer;
	};

	void ModifyPlayer ( class APawn* Other );
	bool CheckReplacement ( class AActor* Other );
	void PostBeginPlay ( );
};

UClass* AUTMutator_Arena::pClassPointer = NULL;

// Class UTGame.UTMutator_FriendlyFire
// 0x0004 (0x02AC - 0x02A8)
class AUTMutator_FriendlyFire : public AUTMutator
{
public:
	float                                              FriendlyFireScale;                                		// 0x02A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58710 ];

		return pClassPointer;
	};

	void InitMutator ( struct FString Options, struct FString* ErrorMessage );
	bool MutatorIsAllowed ( );
};

UClass* AUTMutator_FriendlyFire::pClassPointer = NULL;

// Class UTGame.UTMutator_NoHoverboard
// 0x0000 (0x02A8 - 0x02A8)
class AUTMutator_NoHoverboard : public AUTMutator
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58729 ];

		return pClassPointer;
	};

	void InitMutator ( struct FString Options, struct FString* ErrorMessage );
};

UClass* AUTMutator_NoHoverboard::pClassPointer = NULL;

// Class UTGame.UTPickupFactory_HealthVial
// 0x0010 (0x0534 - 0x0524)
class AUTPickupFactory_HealthVial : public AUTHealthPickupFactory
{
public:
	TArray< class AUTPickupFactory_HealthVial* >       AdjacentVials;                                    		// 0x0524 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58918 ];

		return pClassPointer;
	};

	float BotDesireability ( class APawn* P, class AController* C );
	void SpawnCopyFor ( class APawn* Recipient );
	void FindAdjacentVials ( class AUTPickupFactory_HealthVial* InitialCaller, TArray< class AUTPickupFactory_HealthVial* >* InAdjacentVials );
	void PostBeginPlay ( );
};

UClass* AUTPickupFactory_HealthVial::pClassPointer = NULL;

// Class UTGame.UTPortal
// 0x0000 (0x02C0 - 0x02C0)
class AUTPortal : public APortalTeleporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59082 ];

		return pClassPointer;
	};

};

UClass* AUTPortal::pClassPointer = NULL;

// Class UTGame.UTProj_Grenade
// 0x0000 (0x039C - 0x039C)
class AUTProj_Grenade : public AUTProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59202 ];

		return pClassPointer;
	};

	void PhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Timer ( );
	void Init ( struct FVector Direction );
	void PostBeginPlay ( );
};

UClass* AUTProj_Grenade::pClassPointer = NULL;

// Class UTGame.UTProj_LinkPlasma
// 0x0018 (0x03B4 - 0x039C)
class AUTProj_LinkPlasma : public AUTProjectile
{
public:
	struct FVector                                     ColorLevel;                                       		// 0x039C (0x000C) [0x0000000000000000]              
	struct FVector                                     ExplosionColor;                                   		// 0x03A8 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59223 ];

		return pClassPointer;
	};

	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
	void SpawnFlightEffects ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AUTProj_LinkPlasma::pClassPointer = NULL;

// Class UTGame.UTProj_LinkPowerPlasma
// 0x0000 (0x03B4 - 0x03B4)
class AUTProj_LinkPowerPlasma : public AUTProj_LinkPlasma
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59242 ];

		return pClassPointer;
	};

};

UClass* AUTProj_LinkPowerPlasma::pClassPointer = NULL;

// Class UTGame.UTProj_Rocket
// 0x0000 (0x039C - 0x039C)
class AUTProj_Rocket : public AUTProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59245 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTProj_Rocket::pClassPointer = NULL;

// Class UTGame.UTRocketLight
// 0x0000 (0x0270 - 0x0270)
class UUTRocketLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59251 ];

		return pClassPointer;
	};

};

UClass* UUTRocketLight::pClassPointer = NULL;

// Class UTGame.UTProj_LoadedRocket
// 0x0034 (0x03D0 - 0x039C)
class AUTProj_LoadedRocket : public AUTProj_Rocket
{
public:
	unsigned char                                      FlockIndex;                                       		// 0x039C (0x0001) [0x0000000000000020]              ( CPF_Net )
	class AUTProj_LoadedRocket*                        Flock[ 0x2 ];                                     		// 0x03A0 (0x0010) [0x0000000000000000]              
	float                                              FlockRadius;                                      		// 0x03B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlockStiffness;                                   		// 0x03B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlockMaxForce;                                    		// 0x03B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FlockCurlForce;                                   		// 0x03BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCurl : 1;                                        		// 0x03C0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	struct FVector                                     Dir;                                              		// 0x03C4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59252 ];

		return pClassPointer;
	};

	void FlockTimer ( );
	void eventReplicatedEvent ( struct FName VarName );
	void Destroyed ( );
};

UClass* AUTProj_LoadedRocket::pClassPointer = NULL;

// Class UTGame.UTProj_ScorpionGlob_Base
// 0x0008 (0x03A4 - 0x039C)
class AUTProj_ScorpionGlob_Base : public AUTProjectile
{
public:
	class AUTAvoidMarker*                              FearSpot;                                         		// 0x039C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59273 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventPhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void ShutDown ( );
	void eventDestroyed ( );
};

UClass* AUTProj_ScorpionGlob_Base::pClassPointer = NULL;

// Class UTGame.UTProj_SeekingRocket
// 0x0000 (0x039C - 0x039C)
class AUTProj_SeekingRocket : public AUTProj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59284 ];

		return pClassPointer;
	};

};

UClass* AUTProj_SeekingRocket::pClassPointer = NULL;

// Class UTGame.UTRocketMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UUTRocketMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59290 ];

		return pClassPointer;
	};

};

UClass* UUTRocketMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTScavengerMessage
// 0x0010 (0x0098 - 0x0088)
class UUTScavengerMessage : public UUTLocalMessage
{
public:
	TArray< struct FString >                           MessageText;                                      		// 0x0088 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59305 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTScavengerMessage::pClassPointer = NULL;

// Class UTGame.UTScout
// 0x0000 (0x0650 - 0x0650)
class AUTScout : public AUDKScout
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59316 ];

		return pClassPointer;
	};

};

UClass* AUTScout::pClassPointer = NULL;

// Class UTGame.UTScriptedBotVolume
// 0x0000 (0x0318 - 0x0318)
class AUTScriptedBotVolume : public APhysicsVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59319 ];

		return pClassPointer;
	};

	void eventPawnLeavingVolume ( class APawn* Other );
};

UClass* AUTScriptedBotVolume::pClassPointer = NULL;

// Class UTGame.UTSD_SpawnedKActor
// 0x0000 (0x03B8 - 0x03B8)
class AUTSD_SpawnedKActor : public AKActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59347 ];

		return pClassPointer;
	};

};

UClass* AUTSD_SpawnedKActor::pClassPointer = NULL;

// Class UTGame.UTSeqAct_ActivateRocketBoosters
// 0x0000 (0x0150 - 0x0150)
class UUTSeqAct_ActivateRocketBoosters : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59351 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_ActivateRocketBoosters::pClassPointer = NULL;

// Class UTGame.UTSeqAct_AddNamedBot
// 0x0028 (0x0178 - 0x0150)
class UUTSeqAct_AddNamedBot : public USequenceAction
{
public:
	struct FString                                     BotName;                                          		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bForceTeam : 1;                                   		// 0x0160 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TeamIndex;                                        		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0168 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AUTBot*                                      SpawnedBot;                                       		// 0x0170 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59353 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* UUTSeqAct_AddNamedBot::pClassPointer = NULL;

// Class UTGame.UTSeqAct_ChangeTeam
// 0x0001 (0x0151 - 0x0150)
class UUTSeqAct_ChangeTeam : public USequenceAction
{
public:
	unsigned char                                      NewTeamNum;                                       		// 0x0150 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59367 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_ChangeTeam::pClassPointer = NULL;

// Class UTGame.UTSeqAct_EnterVehicle
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_EnterVehicle : public USequenceAction
{
public:
	int                                                SeatIndex;                                        		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59387 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_EnterVehicle::pClassPointer = NULL;

// Class UTGame.UTSeqAct_GetTeamNum
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_GetTeamNum : public USequenceAction
{
public:
	int                                                TeamNum;                                          		// 0x0150 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59396 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_GetTeamNum::pClassPointer = NULL;

// Class UTGame.UTSeqAct_HoverboardSpinJump
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_HoverboardSpinJump : public USequenceAction
{
public:
	float                                              WarmupTime;                                       		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59401 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_HoverboardSpinJump::pClassPointer = NULL;

// Class UTGame.UTSeqAct_ReturnCTFFlag
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_ReturnCTFFlag : public USequenceAction
{
public:
	int                                                TeamIndex;                                        		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59412 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_ReturnCTFFlag::pClassPointer = NULL;

// Class UTGame.UTSeqAct_ScriptedVoiceMessage
// 0x0018 (0x0168 - 0x0150)
class UUTSeqAct_ScriptedVoiceMessage : public USequenceAction
{
public:
	class USoundNodeWave*                              VoiceToPlay;                                      		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SpeakingCharacterName;                            		// 0x0158 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59418 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* UUTSeqAct_ScriptedVoiceMessage::pClassPointer = NULL;

// Class UTGame.UTSeqAct_SelfDestruct
// 0x0000 (0x0150 - 0x0150)
class UUTSeqAct_SelfDestruct : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59429 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_SelfDestruct::pClassPointer = NULL;

// Class UTGame.UTSeqAct_SetBotsMustComplete
// 0x0000 (0x0150 - 0x0150)
class UUTSeqAct_SetBotsMustComplete : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59431 ];

		return pClassPointer;
	};

};

UClass* UUTSeqAct_SetBotsMustComplete::pClassPointer = NULL;

// Class UTGame.UTSeqAct_SetVisibilityModifier
// 0x0004 (0x0154 - 0x0150)
class UUTSeqAct_SetVisibilityModifier : public USequenceAction
{
public:
	float                                              NewVisibilityModifier;                            		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59433 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_SetVisibilityModifier::pClassPointer = NULL;

// Class UTGame.UTSeqAct_SpawnProjectile
// 0x0008 (0x0158 - 0x0150)
class UUTSeqAct_SpawnProjectile : public USequenceAction
{
public:
	class UClass*                                      ProjectileClass;                                  		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59438 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_SpawnProjectile::pClassPointer = NULL;

// Class UTGame.UTSeqAct_ToggleAnnouncements
// 0x0000 (0x0150 - 0x0150)
class UUTSeqAct_ToggleAnnouncements : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59451 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_ToggleAnnouncements::pClassPointer = NULL;

// Class UTGame.UTSeqCond_CheckWeapon
// 0x0010 (0x0144 - 0x0134)
class UUTSeqCond_CheckWeapon : public USequenceCondition
{
public:
	class AActor*                                      Target;                                           		// 0x0134 (0x0008) [0x0000000000000000]              
	class UClass*                                      TestForWeaponClass;                               		// 0x013C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59458 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqCond_CheckWeapon::pClassPointer = NULL;

// Class UTGame.UTSeqCond_DoTutorial
// 0x0000 (0x0134 - 0x0134)
class UUTSeqCond_DoTutorial : public USequenceCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59466 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqCond_DoTutorial::pClassPointer = NULL;

// Class UTGame.UTSeqCond_HasInventory
// 0x0014 (0x0148 - 0x0134)
class UUTSeqCond_HasInventory : public USequenceCondition
{
public:
	class AActor*                                      Target;                                           		// 0x0134 (0x0008) [0x0000000000000000]              
	class UClass*                                      RequiredInventory;                                		// 0x013C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowSubclass : 1;                               		// 0x0144 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCheckVehicleDriver : 1;                          		// 0x0144 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59471 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqCond_HasInventory::pClassPointer = NULL;

// Class UTGame.UTSeqCond_IsCarryingFlag
// 0x0010 (0x0144 - 0x0134)
class UUTSeqCond_IsCarryingFlag : public USequenceCondition
{
public:
	class AActor*                                      Target;                                           		// 0x0134 (0x0008) [0x0000000000000000]              
	class AUTGameObjective*                            FlagBase;                                         		// 0x013C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59481 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqCond_IsCarryingFlag::pClassPointer = NULL;

// Class UTGame.UTSeqCond_IsConsole
// 0x0000 (0x0134 - 0x0134)
class UUTSeqCond_IsConsole : public USequenceCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59490 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqCond_IsConsole::pClassPointer = NULL;

// Class UTGame.UTSeqCond_IsUsingWeapon
// 0x0014 (0x0148 - 0x0134)
class UUTSeqCond_IsUsingWeapon : public USequenceCondition
{
public:
	class AActor*                                      Target;                                           		// 0x0134 (0x0008) [0x0000000000000000]              
	class UClass*                                      RequiredWeapon;                                   		// 0x013C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowSubclass : 1;                               		// 0x0144 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bMustBeImpactHammer : 1;                          		// 0x0144 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59493 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqCond_IsUsingWeapon::pClassPointer = NULL;

// Class UTGame.UTSeqEvent_ObjectiveCompleted
// 0x0000 (0x0170 - 0x0170)
class UUTSeqEvent_ObjectiveCompleted : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59519 ];

		return pClassPointer;
	};

};

UClass* UUTSeqEvent_ObjectiveCompleted::pClassPointer = NULL;

// Class UTGame.UTSeqEvent_SkipCinematic
// 0x0000 (0x0170 - 0x0170)
class UUTSeqEvent_SkipCinematic : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59521 ];

		return pClassPointer;
	};

};

UClass* UUTSeqEvent_SkipCinematic::pClassPointer = NULL;

// Class UTGame.UTShockBallLight
// 0x0000 (0x0240 - 0x0240)
class UUTShockBallLight : public UPointLightComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59526 ];

		return pClassPointer;
	};

};

UClass* UUTShockBallLight::pClassPointer = NULL;

// Class UTGame.UTShockImpactLight
// 0x0000 (0x0270 - 0x0270)
class UUTShockImpactLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59529 ];

		return pClassPointer;
	};

};

UClass* UUTShockImpactLight::pClassPointer = NULL;

// Class UTGame.UTShockMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UUTShockMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59531 ];

		return pClassPointer;
	};

};

UClass* UUTShockMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTSimpleDestroyable
// 0x0050 (0x032C - 0x02DC)
class AUTSimpleDestroyable : public ADynamicSMActor
{
public:
	unsigned long                                      bDestroyOnDamage : 1;                             		// 0x02DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDestroyOnPlayerTouch : 1;                        		// 0x02DC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDestroyOnVehicleTouch : 1;                       		// 0x02DC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDestroyed : 1;                                   		// 0x02DC (0x0004) [0x0000000000000000] [0x00000008] 
	class UStaticMesh*                                 MeshOnDestroy;                                    		// 0x02E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundOnDestroy;                                   		// 0x02E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticlesOnDestroy;                               		// 0x02F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 SpawnPhysMesh;                                    		// 0x02F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnPhysMeshLifeSpan;                            		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SpawnPhysMeshLinearVel;                           		// 0x0304 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SpawnPhysMeshAngularVel;                          		// 0x0310 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              RespawnTime;                                      		// 0x031C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 RespawnStaticMesh;                                		// 0x0320 (0x0008) [0x0000000000000000]              
	float                                              TimeToRespawn;                                    		// 0x0328 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59533 ];

		return pClassPointer;
	};

	void eventCheckRespawn ( );
	void Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void RespawnDestructible ( );
	void GoBoom ( );
	void PostBeginPlay ( );
};

UClass* AUTSimpleDestroyable::pClassPointer = NULL;

// Class UTGame.UTSkelControl_CantileverBeam
// 0x0000 (0x01D0 - 0x01D0)
class UUTSkelControl_CantileverBeam : public UUDKSkelControl_CantileverBeam
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59585 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_CantileverBeam::pClassPointer = NULL;

// Class UTGame.UTSkelControl_CicadaEngine
// 0x0024 (0x0148 - 0x0124)
class UUTSkelControl_CicadaEngine : public USkelControlSingleBone
{
public:
	float                                              ForwardPitch;                                     		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BackPitch;                                        		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchRate;                                        		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxVelocity;                                      		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinVelocity;                                      		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxVelocityPitchRateMultiplier;                   		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchTime;                                        		// 0x013C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastThrust;                                       		// 0x0140 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                DesiredPitch;                                     		// 0x0144 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59587 ];

		return pClassPointer;
	};

	void eventTickSkelControl ( float DeltaTime, class USkeletalMeshComponent* SkelComp );
};

UClass* UUTSkelControl_CicadaEngine::pClassPointer = NULL;

// Class UTGame.UTSkelControl_DamageHinge
// 0x0000 (0x01E0 - 0x01E0)
class UUTSkelControl_DamageHinge : public UUDKSkelControl_DamageHinge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59613 ];

		return pClassPointer;
	};

	void eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible );
	void eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible );
};

UClass* UUTSkelControl_DamageHinge::pClassPointer = NULL;

// Class UTGame.UTSkelControl_DamageSpring
// 0x0000 (0x0214 - 0x0214)
class UUTSkelControl_DamageSpring : public UUDKSkelControl_DamageSpring
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59623 ];

		return pClassPointer;
	};

	void eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible );
	void eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible );
};

UClass* UUTSkelControl_DamageSpring::pClassPointer = NULL;

// Class UTGame.UTSkelControl_HoverboardSuspension
// 0x0000 (0x0148 - 0x0148)
class UUTSkelControl_HoverboardSuspension : public UUDKSkelControl_HoverboardSuspension
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59633 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_HoverboardSuspension::pClassPointer = NULL;

// Class UTGame.UTSkelControl_HoverboardSwing
// 0x0000 (0x014C - 0x014C)
class UUTSkelControl_HoverboardSwing : public UUDKSkelControl_HoverboardSwing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59635 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_HoverboardSwing::pClassPointer = NULL;

// Class UTGame.UTSkelControl_HoverboardVibration
// 0x0000 (0x0138 - 0x0138)
class UUTSkelControl_HoverboardVibration : public UUDKSkelControl_HoverboardVibration
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59637 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_HoverboardVibration::pClassPointer = NULL;

// Class UTGame.UTSkelControl_HugGround
// 0x0000 (0x0148 - 0x0148)
class UUTSkelControl_HugGround : public UUDKSkelControl_HugGround
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59639 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_HugGround::pClassPointer = NULL;

// Class UTGame.UTSkelControl_JetThruster
// 0x000C (0x0130 - 0x0124)
class UUTSkelControl_JetThruster : public USkelControlSingleBone
{
public:
	float                                              MaxForwardVelocity;                               		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendRate;                                        		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DesiredStrength;                                  		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59641 ];

		return pClassPointer;
	};

	void eventTickSkelControl ( float DeltaTime, class USkeletalMeshComponent* SkelComp );
};

UClass* UUTSkelControl_JetThruster::pClassPointer = NULL;

// Class UTGame.UTSkelControl_LockRotation
// 0x0000 (0x011C - 0x011C)
class UUTSkelControl_LockRotation : public UUDKSkelControl_LockRotation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59653 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_LockRotation::pClassPointer = NULL;

// Class UTGame.UTSkelControl_LookAt
// 0x0000 (0x01A0 - 0x01A0)
class UUTSkelControl_LookAt : public UUDKSkelControl_LookAt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59655 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_LookAt::pClassPointer = NULL;

// Class UTGame.UTSkelControl_MantaBlade
// 0x0000 (0x0138 - 0x0138)
class UUTSkelControl_MantaBlade : public UUDKSkelControl_PropellerBlade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59657 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_MantaBlade::pClassPointer = NULL;

// Class UTGame.UTSkelControl_MantaFlaps
// 0x0000 (0x0144 - 0x0144)
class UUTSkelControl_MantaFlaps : public UUDKSkelControl_VehicleFlap
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59659 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_MantaFlaps::pClassPointer = NULL;

// Class UTGame.UTSkelControl_MassBoneScaling
// 0x0000 (0x0104 - 0x0104)
class UUTSkelControl_MassBoneScaling : public UUDKSkelControl_MassBoneScaling
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59661 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_MassBoneScaling::pClassPointer = NULL;

// Class UTGame.UTSkelControl_Oscillate
// 0x0018 (0x013C - 0x0124)
class UUTSkelControl_Oscillate : public USkelControlSingleBone
{
public:
	struct FVector                                     MaxDelta;                                         		// 0x0124 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Period;                                           		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentTime;                                      		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bReverseDirection : 1;                            		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59663 ];

		return pClassPointer;
	};

	void eventTickSkelControl ( float DeltaTime, class USkeletalMeshComponent* SkelComp );
};

UClass* UUTSkelControl_Oscillate::pClassPointer = NULL;

// Class UTGame.UTSkelControl_Rotate
// 0x0000 (0x013C - 0x013C)
class UUTSkelControl_Rotate : public UUDKSkelControl_Rotate
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59672 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_Rotate::pClassPointer = NULL;

// Class UTGame.UTSkelControl_SpinControl
// 0x0000 (0x0134 - 0x0134)
class UUTSkelControl_SpinControl : public UUDKSkelControl_SpinControl
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59674 ];

		return pClassPointer;
	};

};

UClass* UUTSkelControl_SpinControl::pClassPointer = NULL;

// Class UTGame.UTSlimeVolume
// 0x0000 (0x0338 - 0x0338)
class AUTSlimeVolume : public AWaterVolume
{
public:

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

UClass* AUTSlimeVolume::pClassPointer = NULL;

// Class UTGame.UTStingerMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UUTStingerMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59712 ];

		return pClassPointer;
	};

};

UClass* UUTStingerMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTTeleporterCustomMesh
// 0x001C (0x03EC - 0x03D0)
class AUTTeleporterCustomMesh : public ATeleporter
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x03D0 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   TeleportingSound;                                 		// 0x03D8 (0x0008) [0x0000000000000000]              
	class AUTPawn*                                     LastPawn;                                         		// 0x03E0 (0x0008) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x03E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59772 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	bool eventAccept ( class AActor* Incoming, class AActor* Source );
};

UClass* AUTTeleporterCustomMesh::pClassPointer = NULL;

// Class UTGame.UTTrajectoryReachSpec
// 0x0000 (0x00C8 - 0x00C8)
class UUTTrajectoryReachSpec : public UUDKTrajectoryReachSpec
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59877 ];

		return pClassPointer;
	};

};

UClass* UUTTrajectoryReachSpec::pClassPointer = NULL;

// Class UTGame.UTTurretMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UUTTurretMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59879 ];

		return pClassPointer;
	};

};

UClass* UUTTurretMuzzleFlashLight::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_KeyBinding
// 0x0014 (0x00CC - 0x00B8)
class UUTUIDataProvider_KeyBinding : public UUTUIResourceDataProvider
{
public:
	struct FString                                     Command;                                          		// 0x00B8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bIsCrucialBind : 1;                               		// 0x00C8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59889 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_KeyBinding::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_MultiplayerMenuItem
// 0x0014 (0x00CC - 0x00B8)
class UUTUIDataProvider_MultiplayerMenuItem : public UUTUIResourceDataProvider
{
public:
	struct FString                                     Description;                                      		// 0x00B8 (0x0010) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bRequiresOnlineAccess : 1;                        		// 0x00C8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59905 ];

		return pClassPointer;
	};

	bool eventShouldBeFiltered ( );
};

UClass* UUTUIDataProvider_MultiplayerMenuItem::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_ServerDetails
// 0x0000 (0x0074 - 0x0074)
class UUTUIDataProvider_ServerDetails : public UUDKUIDataProvider_ServerDetails
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59926 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_ServerDetails::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_SettingsMenuItem
// 0x0014 (0x00CC - 0x00B8)
class UUTUIDataProvider_SettingsMenuItem : public UUTUIResourceDataProvider
{
public:
	struct FString                                     Description;                                      		// 0x00B8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bFrontEndOnly : 1;                                		// 0x00C8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59928 ];

		return pClassPointer;
	};

	bool eventShouldBeFiltered ( );
};

UClass* UUTUIDataProvider_SettingsMenuItem::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_SimpleElementProvider
// 0x0000 (0x0070 - 0x0070)
class UUTUIDataProvider_SimpleElementProvider : public UUDKUIDataProvider_SimpleElementProvider
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59934 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_SimpleElementProvider::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_StringArray
// 0x0000 (0x0080 - 0x0080)
class UUTUIDataProvider_StringArray : public UUDKUIDataProvider_StringArray
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59936 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_StringArray::pClassPointer = NULL;

// Class UTGame.UTUIDataProvider_Weapon
// 0x0040 (0x00F8 - 0x00B8)
class UUTUIDataProvider_Weapon : public UUTUIResourceDataProvider
{
public:
	struct FString                                     ClassName;                                        		// 0x00B8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AmmoClassPath;                                    		// 0x00C8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Flags;                                            		// 0x00D8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x00E8 (0x0010) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59938 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataProvider_Weapon::pClassPointer = NULL;

// Class UTGame.UTUIDataStore_Options
// 0x0000 (0x0148 - 0x0148)
class UUTUIDataStore_Options : public UUDKUIDataStore_Options
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59945 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataStore_Options::pClassPointer = NULL;

// Class UTGame.UTUIDataStore_StringAliasMap
// 0x0000 (0x00F8 - 0x00F8)
class UUTUIDataStore_StringAliasMap : public UUDKUIDataStore_StringAliasMap
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59948 ];

		return pClassPointer;
	};

};

UClass* UUTUIDataStore_StringAliasMap::pClassPointer = NULL;

// Class UTGame.UTVehicle_Cicada
// 0x0048 (0x0DAC - 0x0D64)
class AUTVehicle_Cicada : public AUTAirVehicle
{
public:
	struct FVector                                     TurretFlashLocation;                              		// 0x0D64 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    TurretWeaponRotation;                             		// 0x0D70 (0x000C) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      TurretFlashCount;                                 		// 0x0D7C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      TurretFiringMode;                                 		// 0x0D7D (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bFreelanceStart : 1;                              		// 0x0D80 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      JetEffectIndices;                                 		// 0x0D84 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             TurretBeamTemplate;                               		// 0x0D94 (0x0008) [0x0000000000000000]              
	class UUTSkelControl_JetThruster*                  JetControl;                                       		// 0x0D9C (0x0008) [0x0000000000000000]              
	struct FName                                       JetScalingParam;                                  		// 0x0DA4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59951 ];

		return pClassPointer;
	};

	bool ShouldClamp ( );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	struct FVector GetCameraStart ( int SeatIndex );
	void VehicleWeaponImpactEffects ( struct FVector HitLocation, int SeatIndex );
	bool RecommendLongRangedAttack ( );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	void PassengerLeave ( int SeatIndex );
	void DriverLeft ( );
	bool DriverEnter ( class APawn* P );
	bool ImportantVehicle ( );
	void ResetTurningSpeed ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void eventTick ( float DeltaTime );
};

UClass* AUTVehicle_Cicada::pClassPointer = NULL;

// Class UTGame.UTVWeap_TowCable
// 0x001C (0x0880 - 0x0864)
class AUTVWeap_TowCable : public AUTVehicleWeapon
{
public:
	class AUTVehicle_Hoverboard*                       MyHoverboard;                                     		// 0x0864 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              MaxAttachRange;                                   		// 0x086C (0x0004) [0x0000000000000000]              
	float                                              CrossScaler;                                      		// 0x0870 (0x0004) [0x0000000000000000]              
	float                                              CrossScaleTime;                                   		// 0x0874 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  CrossHairTexture;                                 		// 0x0878 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60346 ];

		return pClassPointer;
	};

	void ResetCrosshair ( class UCanvas* Canvas );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void BeginFire ( unsigned char FireModeNum );
	void CustomFire ( );
	void EndFire ( unsigned char FireModeNum );
	unsigned char BestMode ( );
	float MaxRange ( );
	void PostBeginPlay ( );
};

UClass* AUTVWeap_TowCable::pClassPointer = NULL;

// Class UTGame.UTVehicle_Manta
// 0x0070 (0x0DB8 - 0x0D48)
class AUTVehicle_Manta : public AUTVehicle
{
public:
	float                                              JumpForceMag;                                     		// 0x0D48 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxJumpZVel;                                      		// 0x0D4C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpCheckTraceDist;                               		// 0x0D50 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpDelay;                                        		// 0x0D54 (0x0004) [0x0000000000000000]              
	float                                              LastJumpTime;                                     		// 0x0D58 (0x0004) [0x0000000000000000]              
	float                                              DuckForceMag;                                     		// 0x0D5C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoBikeJump : 1;                                  		// 0x0D60 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bHoldingDuck : 1;                                 		// 0x0D60 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bPressingAltFire : 1;                             		// 0x0D60 (0x0004) [0x0000000000000000] [0x00000004] 
	class USoundCue*                                   JumpSound;                                        		// 0x0D64 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DuckSound;                                        		// 0x0D6C (0x0008) [0x0000000000000000]              
	float                                              BladeBlur;                                        		// 0x0D74 (0x0004) [0x0000000000000000]              
	float                                              DesiredBladeBlur;                                 		// 0x0D78 (0x0004) [0x0000000000000000]              
	int                                                FanEffectIndex;                                   		// 0x0D7C (0x0004) [0x0000000000000000]              
	struct FName                                       FanEffectParameterName;                           		// 0x0D80 (0x0008) [0x0000000000000000]              
	struct FName                                       FlameJetEffectParameterName;                      		// 0x0D88 (0x0008) [0x0000000000000000]              
	float                                              FlameJetValue;                                    		// 0x0D90 (0x0004) [0x0000000000000000]              
	float                                              DesiredFlameJetValue;                             		// 0x0D94 (0x0004) [0x0000000000000000]              
	float                                              FullWheelSuspensionTravel;                        		// 0x0D98 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrouchedWheelSuspensionTravel;                    		// 0x0D9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SuspensionTravelAdjustSpeed;                      		// 0x0DA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullWheelSuspensionStiffness;                     		// 0x0DA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrouchedWheelSuspensionStiffness;                 		// 0x0DA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneOffsetZAdjust;                                		// 0x0DAC (0x0004) [0x0000000000000000]              
	float                                              CrouchedAirSpeed;                                 		// 0x0DB0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullAirSpeed;                                     		// 0x0DB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60349 ];

		return pClassPointer;
	};

	bool RecommendCharge ( class AUTBot* B, class APawn* Enemy );
	bool TooCloseToAttack ( class AActor* Other );
	bool ShouldClamp ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	float GetChargePower ( );
	void eventReplicatedEvent ( struct FName VarName );
	void DrivingStatusChanged ( );
	void IncomingMissile ( class AProjectile* P );
	bool Dodge ( unsigned char DoubleClickMove );
	unsigned char ChooseFireMode ( );
	void MantaDuckEffect ( );
	void MantaJumpEffect ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	bool OverrideEndFire ( unsigned char FireModeNum );
	bool OverrideBeginFire ( unsigned char FireModeNum );
	bool DriverEnter ( class APawn* P );
	bool CanBeBaseForPawn ( class APawn* aPawn );
	void eventTick ( float DeltaSeconds );
};

UClass* AUTVehicle_Manta::pClassPointer = NULL;

// Class UTGame.UTVehicleScorpionWheel
// 0x0000 (0x0160 - 0x0160)
class UUTVehicleScorpionWheel : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60450 ];

		return pClassPointer;
	};

};

UClass* UUTVehicleScorpionWheel::pClassPointer = NULL;

// Class UTGame.UTVehicle_Scorpion
// 0x01A4 (0x0EEC - 0x0D48)
class AUTVehicle_Scorpion : public AUTVehicle
{
public:
	class UUTAnimBlendByWeapon*                        BladeBlend;                                       		// 0x0D48 (0x0008) [0x0000000000000000]              
	unsigned long                                      bBrakeLightOn : 1;                                		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReverseLightOn : 1;                              		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHeadlightsOn : 1;                                		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bBladesExtended : 1;                              		// 0x0D50 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bLeftBladeBroken : 1;                             		// 0x0D50 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bRightBladeBroken : 1;                            		// 0x0D50 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bBoostersActivated : 1;                           		// 0x0D50 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bSteeringLimited : 1;                             		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bScriptedBoosters : 1;                            		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bSelfDestructArmed : 1;                           		// 0x0D50 (0x0004) [0x0000000000000020] [0x00000200] ( CPF_Net )
	unsigned long                                      bTryToBoost : 1;                                  		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bWasThrottle : 1;                                 		// 0x0D50 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bAISelfDestruct : 1;                              		// 0x0D50 (0x0004) [0x0000000000000000] [0x00001000] 
	float                                              BladeBreakPoint;                                  		// 0x0D54 (0x0004) [0x0000000000000000]              
	struct FName                                       BrakeLightParameterName;                          		// 0x0D58 (0x0008) [0x0000000000000000]              
	struct FName                                       ReverseLightParameterName;                        		// 0x0D60 (0x0008) [0x0000000000000000]              
	struct FName                                       HeadLightParameterName;                           		// 0x0D68 (0x0008) [0x0000000000000000]              
	struct FName                                       RightBladeStartSocket;                            		// 0x0D70 (0x0008) [0x0000000000000000]              
	struct FName                                       RightBladeEndSocket;                              		// 0x0D78 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftBladeStartSocket;                             		// 0x0D80 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftBladeEndSocket;                               		// 0x0D88 (0x0008) [0x0000000000000000]              
	class UClass*                                      BladeDamageType;                                  		// 0x0D90 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   BladeBreakSound;                                  		// 0x0D98 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   BladeExtendSound;                                 		// 0x0DA0 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   BladeRetractSound;                                		// 0x0DA8 (0x0008) [0x0000000000000000]              
	float                                              BoosterForceMagnitude;                            		// 0x0DB0 (0x0004) [0x0000000000000000]              
	class AController*                                 SelfDestructInstigator;                           		// 0x0DB4 (0x0008) [0x0000000000000000]              
	float                                              BoosterCheckRadius;                               		// 0x0DBC (0x0004) [0x0000000000000000]              
	float                                              MaxBoostDuration;                                 		// 0x0DC0 (0x0004) [0x0000000000000000]              
	float                                              BoostStartTime;                                   		// 0x0DC4 (0x0004) [0x0000000000000000]              
	float                                              BoostChargeDuration;                              		// 0x0DC8 (0x0004) [0x0000000000000000]              
	float                                              BoostChargeTime;                                  		// 0x0DCC (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             BoosterSound;                                     		// 0x0DD0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FTextureCoordinates                         BoostToolTipIconCoords;                           		// 0x0DD8 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         EjectToolTipIconCoords;                           		// 0x0DE8 (0x0010) [0x0000000000000000]              
	class UClass*                                      SelfDestructDamageType;                           		// 0x0DF8 (0x0008) [0x0000000000000000]              
	float                                              BoostPowerSpeed;                                  		// 0x0E00 (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseTime;                                 		// 0x0E04 (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseDelay;                                		// 0x0E08 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SelfDestructSoundCue;                             		// 0x0E0C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SelfDestructReadyCue;                             		// 0x0E14 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SelfDestructWarningSound;                         		// 0x0E1C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SelfDestructEnabledSound;                         		// 0x0E24 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SelfDestructEnabledLoop;                          		// 0x0E2C (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 RedBoostCamAnim;                                  		// 0x0E34 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 BlueBoostCamAnim;                                 		// 0x0E3C (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SuspensionShiftSound;                             		// 0x0E44 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             SelfDestructEnabledComponent;                     		// 0x0E4C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             SelfDestructWarningComponent;                     		// 0x0E54 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             SelfDestructReadyComponent;                       		// 0x0E5C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   EjectSoundCue;                                    		// 0x0E64 (0x0008) [0x0000000000000000]              
	float                                              BoosterFOVAngle;                                  		// 0x0E6C (0x0004) [0x0000000000000000]              
	class UUTAnimBlendByWeapon*                        BoosterBlend;                                     		// 0x0E70 (0x0008) [0x0000000000000000]              
	float                                              ThrottleStartTime;                                		// 0x0E78 (0x0004) [0x0000000000000000]              
	float                                              BoostUprightTorqueFactor;                         		// 0x0E7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostUprightMaxTorque;                            		// 0x0E80 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultUprightTorqueFactor;                       		// 0x0E84 (0x0004) [0x0000000000000000]              
	float                                              DefaultUprightMaxTorque;                          		// 0x0E88 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        LeftBoosterLight;                                 		// 0x0E8C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPointLightComponent*                        RightBoosterLight;                                		// 0x0E94 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ARB_ConstraintActor*                         BladeVictimConstraint[ 0x2 ];                     		// 0x0E9C (0x0010) [0x0000000000000000]              
	class UStaticMesh*                                 ScorpionHood;                                     		// 0x0EAC (0x0008) [0x0000000000000000]              
	float                                              RocketSpeed;                                      		// 0x0EB4 (0x0004) [0x0000000000000000]              
	float                                              SelfDestructSpeedSquared;                         		// 0x0EB8 (0x0004) [0x0000000000000000]              
	float                                              LockSuspensionTravel;                             		// 0x0EBC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockSuspensionStiffness;                          		// 0x0EC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostSteerFactors[ 0x3 ];                         		// 0x0EC4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             SelfDestructExplosionTemplate;                    		// 0x0ED0 (0x0008) [0x0000000000000000]              
	class UClass*                                      HatchGibClass;                                    		// 0x0ED8 (0x0008) [0x0000000000000000]              
	class UStaticMesh*                                 BrokenBladeMesh;                                  		// 0x0EE0 (0x0008) [0x0000000000000000]              
	float                                              LastBladeBoostTime;                               		// 0x0EE8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60452 ];

		return pClassPointer;
	};

	bool CriticalChargeAttack ( class AUTBot* B );
	bool RecommendCharge ( class AUTBot* B, class APawn* Enemy );
	void SetBurnOut ( );
	void CauseMuzzleFlashLight ( int SeatIndex );
	void BreakOffBlade ( unsigned long bLeftBlade );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void CheckScriptedSelfDestruct ( );
	void OnSelfDestruct ( class UUTSeqAct_SelfDestruct* Action );
	void TeamChanged ( );
	void IncomingMissile ( class AProjectile* P );
	bool TooCloseToAttack ( class AActor* Other );
	unsigned char ChooseFireMode ( );
	bool FindAutoExit ( class APawn* ExitingDriver );
	void eventBladeHit ( class AActor* HitActor, struct FVector HitLocation, unsigned long bLeftBlade );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void DriverLeft ( );
	void DisplayHud ( class AUTHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SeatIndex );
	void PlaySelfDestruct ( );
	void SetBladesExtended ( unsigned long bExtended );
	bool OverrideEndFire ( unsigned char FireModeNum );
	bool OverrideBeginFire ( unsigned char FireModeNum );
	void eventReplicatedEvent ( struct FName VarName );
	bool TryToDrive ( class APawn* P );
	void eventSelfDestruct ( class AActor* ImpactedActor );
	void BlowupVehicle ( );
	bool DisableVehicle ( );
	void ServerBoost ( );
	void OnActivateRocketBoosters ( class UUTSeqAct_ActivateRocketBoosters* BoosterAction );
	void eventDeactivateRocketBoosters ( );
	void eventEnableFullSteering ( );
	void DeactivateHandbrake ( );
	void eventActivateRocketBoosters ( );
	void UnlockWheels ( );
	void LockWheels ( );
	void eventSuspensionHeavyShift ( float Delta );
	void StopVehicleSounds ( );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	bool DriverEnter ( class APawn* P );
	bool CanBeBaseForPawn ( class APawn* aPawn );
	void PancakeOther ( class APawn* Other );
	void eventRanInto ( class AActor* Other );
	void PostBeginPlay ( );
	void Tick ( float DeltaSeconds );
	bool ReadyToSelfDestruct ( );
};

UClass* AUTVehicle_Scorpion::pClassPointer = NULL;

// Class UTGame.UTVehicleBoostPad
// 0x002C (0x02B8 - 0x028C)
class AUTVehicleBoostPad : public AActor
{
public:
	unsigned long                                      bInitiallyOn : 1;                                 		// 0x028C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCurrentlyActive : 1;                             		// 0x028C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              BoostPower;                                       		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostDamping;                                     		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            AffectedVehicles;                                 		// 0x0298 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AUTVehicle* >                        VehicleList;                                      		// 0x02A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60675 ];

		return pClassPointer;
	};

	void Tick ( float DT );
	struct FVector CalculateForce ( struct FVector CarLocation, struct FVector CarVelocity );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void Trigger ( class AActor* Other, class APawn* EventInstigator );
	void eventPostBeginPlay ( );
};

UClass* AUTVehicleBoostPad::pClassPointer = NULL;

// Class UTGame.UTVehicleCTFGame
// 0x0000 (0x0748 - 0x0748)
class AUTVehicleCTFGame : public AUTCTFGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60738 ];

		return pClassPointer;
	};

	bool AllowMutator ( struct FString MutatorClassName );
};

UClass* AUTVehicleCTFGame::pClassPointer = NULL;

// Class UTGame.UTVehicleCTFHUD
// 0x0002 (0x0D24 - 0x0D22)
class AUTVehicleCTFHUD : public AUTCTFHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60743 ];

		return pClassPointer;
	};

};

UClass* AUTVehicleCTFHUD::pClassPointer = NULL;

// Class UTGame.UTVehicleShield
// 0x0028 (0x02B8 - 0x0290)
class AUTVehicleShield : public AUDKWeaponShield
{
public:
	class USoundCue*                                   ActivatedSound;                                   		// 0x0290 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DeactivatedSound;                                 		// 0x0298 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             AmbientComponent;                                 		// 0x02A0 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    ShieldEffectComponent;                            		// 0x02A8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ShieldActivatedTime;                              		// 0x02B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFullyActive : 1;                                 		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60864 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ShieldFullyOnline ( );
	void SetActive ( unsigned long bNowActive );
};

UClass* AUTVehicleShield::pClassPointer = NULL;

// Class UTGame.UTWeaponLockerPickupLight
// 0x0000 (0x0298 - 0x0298)
class AUTWeaponLockerPickupLight : public ALight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61910 ];

		return pClassPointer;
	};

};

UClass* AUTWeaponLockerPickupLight::pClassPointer = NULL;

// Class UTGame.UTWeaponPickupLight
// 0x0000 (0x0298 - 0x0298)
class AUTWeaponPickupLight : public ALight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61976 ];

		return pClassPointer;
	};

};

UClass* AUTWeaponPickupLight::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif