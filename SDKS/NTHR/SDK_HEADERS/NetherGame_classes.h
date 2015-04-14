/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: NetherGame_classes.h
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

#define CONST_CHAR_SLOTS_MAX                                     1
#define CONST_OptionBoxSpacing                                   35
#define CONST_DROP_DOWN_BUTTON_OFFSET                            -15
#define CONST_NumMessages                                        10
#define CONST_ScaleInSpeed                                       2
#define CONST_MAX_MESSAGE_COUNT                                  40
#define CONST_SelectionIndicatorXOffset                          15
#define CONST_SelectionIndicatorYOffset                          15
#define CONST_MAX_NUM_TAGS                                       3
#define CONST_SEARCH_RANGE                                       1000
#define CONST_MIN_FOCUS_TIME                                     1.5
#define CONST_MIN_FADE_TIME                                      0.25
#define CONST_NINVID_None                                        0
#define CONST_NINVID_Glock                                       1
#define CONST_NINVID_Carbine                                     2
#define CONST_NINVID_Spas12                                      3
#define CONST_NINVID_Machete                                     4
#define CONST_NINVID_HealthFirstAidKit                           5
#define CONST_NINVID_HealthBandages                              6
#define CONST_NINVID_HealthPainPills                             7
#define CONST_NINVID_HealthDoctorsBag                            8
#define CONST_NINVID_FoodSnackPackage                            9
#define CONST_NINVID_FoodCanned                                  10
#define CONST_NINVID_FoodEnergyBar                               11
#define CONST_NINVID_FoodRations                                 12
#define CONST_NINVID_FoodEnergyDrink                             13
#define CONST_NINVID_FoodWater                                   14
#define CONST_NINVID_50calAmmo                                   15
#define CONST_NINVID_5pt56Ammo                                   16
#define CONST_NINVID_12GaugeAmmo                                 17
#define CONST_NINVID_Backpack                                    18
#define CONST_NINVID_Hands                                       19
#define CONST_NINVID_DesertEagle                                 20
#define CONST_NINVID_AA12                                        21
#define CONST_NINVID_HolyCrossbow                                22
#define CONST_NINVID_RAB47                                       23
#define CONST_NINVID_RugerMini                                   24
#define CONST_NINVID_UMP45                                       25
#define CONST_NINVID_Uzi                                         26
#define CONST_NINVID_Knife                                       27
#define CONST_NINVID_Crowbar                                     28
#define CONST_NINVID_Axe                                         29
#define CONST_NINVID_45ACPAmmo                                   30
#define CONST_NINVID_9mmAmmo                                     31
#define CONST_NINVID_7pt62Ammo                                   32
#define CONST_NINVID_WardrobeHelmet1                             33
#define CONST_NINVID_WardrobeArms1                               34
#define CONST_NINVID_ChewingGum                                  35
#define CONST_NINVID_Cigarettes                                  36
#define CONST_NINVID_BagOfSalt                                   37
#define CONST_NINVID_PlayingCards                                38
#define CONST_NINVID_Bleach                                      39
#define CONST_NINVID_Cookware                                    40
#define CONST_NINVID_BoxedSoap                                   41
#define CONST_NINVID_Toiletries                                  42
#define CONST_NINVID_InsectRepellent                             43
#define CONST_NINVID_SewingKit                                   44
#define CONST_NINVID_Mach9                                       45
#define CONST_NINVID_BackpackMedium                              46
#define CONST_NINVID_BackpackLarge                               47
#define CONST_NINVID_BackpackExtraLarge                          48
#define CONST_NINVID_BackpackMilitary                            49
#define CONST_NINVID_Bandana_01_v01                              50
#define CONST_NINVID_Bandana_02_v01                              51
#define CONST_NINVID_Bomber_Cowl_01_v01                          52
#define CONST_NINVID_Bomber_Hat_01_v01                           53
#define CONST_NINVID_Bomber_Hat_01_v02                           54
#define CONST_NINVID_Bomber_Hat_01_v03                           55
#define CONST_NINVID_Bomber_Hat_02_v01                           56
#define CONST_NINVID_Bomber_Hat_02_v02                           57
#define CONST_NINVID_Bomber_Hat_02_v03                           58
#define CONST_NINVID_Gas_Mask_01_v01                             59
#define CONST_NINVID_Gas_Mask_01_v02                             60
#define CONST_NINVID_Gas_Mask_02_v01                             61
#define CONST_NINVID_Gas_Mask_02_v02                             62
#define CONST_NINVID_Gas_Mask_Full_01_v01                        63
#define CONST_NINVID_Gas_Mask_Full_01_v02                        64
#define CONST_NINVID_Gas_Mask_Full_01_v03                        65
#define CONST_NINVID_Gas_Mask_Full_01_v04                        66
#define CONST_NINVID_Gas_Mask_Full_01_v05                        67
#define CONST_NINVID_NetherSkin_Backpack                         68
#define CONST_NINVID_NetherSkin_Hat                              69
#define CONST_NINVID_SmokeGrenade                                73
#define CONST_NINVID_PilgrimHat_01_v01                           76
#define CONST_NINVID_PilgrimHat_02_v01                           77
#define CONST_NINVID_Horn_Hat_01_v01                             79
#define CONST_NINVID_Ninja_Mask_01_v01                           80
#define CONST_NINVID_Ninja_Mask_01_v02                           81
#define CONST_NINVID_Ninja_Mask_01_v03                           82
#define CONST_NINVID_Ninja_Mask_01_v04                           83
#define CONST_NINVID_Ninja_Mask_01_v05                           84
#define CONST_NINVID_Ninja_Mask_01_v06                           85
#define CONST_NINVID_Ninja_Mask_02_v01                           86
#define CONST_NINVID_Ninja_Mask_02_v02                           87
#define CONST_NINVID_Ninja_Mask_02_v03                           88
#define CONST_NINVID_Ninja_Mask_02_v04                           89
#define CONST_NINVID_Ninja_Mask_02_v05                           90
#define CONST_NINVID_Ninja_Mask_02_v06                           91
#define CONST_NINVID_Ninja_Mask_03_v01                           92
#define CONST_NINVID_Ninja_Mask_03_v02                           93
#define CONST_NINVID_Ninja_Mask_03_v03                           94
#define CONST_NINVID_Ninja_Mask_03_v04                           95
#define CONST_NINVID_Ninja_Mask_03_v05                           96
#define CONST_NINVID_Ninja_Mask_03_v06                           97
#define CONST_NINVID_Paintball_Helmet_01_v01                     98
#define CONST_NINVID_Paintball_Helmet_01_v02                     99
#define CONST_NINVID_Paintball_Helmet_01_v03                     100
#define CONST_NINVID_Paintball_Helmet_01_v04                     101
#define CONST_NINVID_Paintball_Helmet_01_v05                     102
#define CONST_NINVID_Paintball_Helmet_02_v01                     103
#define CONST_NINVID_Paintball_Helmet_02_v02                     104
#define CONST_NINVID_Paintball_Helmet_02_v03                     105
#define CONST_NINVID_Paintball_Helmet_02_v04                     106
#define CONST_NINVID_Paintball_Helmet_02_v05                     107
#define CONST_NINVID_Painted_Mask_01_v01                         108
#define CONST_NINVID_Painted_Mask_01_v02                         109
#define CONST_NINVID_Painted_Mask_01_v03                         110
#define CONST_NINVID_Painted_Mask_01_v04                         111
#define CONST_NINVID_Painted_Mask_01_v05                         112
#define CONST_NINVID_Painted_Mask_01_v06                         113
#define CONST_NINVID_Painted_Mask_01_v07                         114
#define CONST_NINVID_Painted_Mask_01_v08                         115
#define CONST_NINVID_Painted_Mask_01_v09                         116
#define CONST_NINVID_Painted_Mask_01_v10                         117
#define CONST_NINVID_Painted_Mask_01_v11                         118
#define CONST_NINVID_Riot_Mask_01_v01                            119
#define CONST_NINVID_Riot_Mask_02_v01                            120
#define CONST_NINVID_Riot_Mask_02_v02                            121
#define CONST_NINVID_Riot_Mask_02_v03                            122
#define CONST_NINVID_Riot_Mask_02_v04                            123
#define CONST_NINVID_Riot_Mask_02_v05                            124
#define CONST_NINVID_Riot_Mask_02_v06                            125
#define CONST_NINVID_Riot_Mask_03_v01                            126
#define CONST_NINVID_Chains_01_v01                               127
#define CONST_NINVID_Chains_01_v02                               128
#define CONST_NINVID_Metal_Leather_01_v01                        129
#define CONST_NINVID_Metal_Leather_01_v02                        130
#define CONST_NINVID_Ninja_Forearm_01_v01                        131
#define CONST_NINVID_Sign_Armor_01_v01                           132
#define CONST_NINVID_Sign_Armor_01_v02                           133
#define CONST_NINVID_Sign_Armor_01_v03                           134
#define CONST_NINVID_Sign_Armor_01_v04                           135
#define CONST_NINVID_Spikes_01_v01                               136
#define CONST_NINVID_BackpackMilitaryLarge                       137
#define CONST_NINVID_Bat                                         138
#define CONST_NINVID_BattleAxe                                   139
#define CONST_NINVID_Bolo                                        140
#define CONST_NINVID_EastSword                                   141
#define CONST_NINVID_Katana                                      142
#define CONST_NINVID_Flashlight                                  143
#define CONST_NINVID_Flashlight_Red                              144
#define CONST_NINVID_Flashlight_Green                            145
#define CONST_NINVID_Flare                                       146
#define CONST_NINVID_AggroBomb                                   147
#define CONST_NINVID_Flashbang                                   148
#define CONST_NINVID_FragGrenade                                 149
#define CONST_NINVID_Wings                                       150
#define CONST_NINVID_PortableAntiNetherDevice                    151
#define CONST_NINVID_Package_SZToRTO                             152
#define CONST_NINVID_Package_SZToWTO                             153
#define CONST_NINVID_Package_SZToMTO                             154
#define CONST_NINVID_Package_RTOToWTO                            155
#define CONST_NINVID_Package_RTOToMTO                            156
#define CONST_NINVID_Package_RTOToSZ                             157
#define CONST_NINVID_Package_WTOToRTO                            158
#define CONST_NINVID_Package_WTOToMTO                            159
#define CONST_NINVID_Package_WTOToSZ                             160
#define CONST_NINVID_Package_MTOToRTO                            161
#define CONST_NINVID_Package_MTOToWTO                            162
#define CONST_NINVID_Package_MTOToSZ                             163
#define CONST_NINVID_Max                                         164
#define CONST_NINV_NumGlobalSlots                                20
#define CONST_NINV_MaxBackpackSize                               40
#define CONST_NINV_MaxQuickslots                                 4
#define CONST_NSLOTNUM_BackpackSlot                              -4
#define CONST_NSLOTNUM_RangedSlot                                -5
#define CONST_NSLOTNUM_SidearmSlot                               -6
#define CONST_NSLOTNUM_MeleeSlot                                 -7
#define CONST_NSLOTNUM_HeadSlot                                  -8
#define CONST_NSLOTNUM_LeftArmSlot                               -9
#define CONST_NSLOTNUM_RightArmSlot                              -10
#define CONST_NITEMTYPE_Normal                                   20
#define CONST_NITEMTYPE_RangedWeapon                             21
#define CONST_NITEMTYPE_SidearmWeapon                            22
#define CONST_NITEMTYPE_MeleeWeapon                              23
#define CONST_NITEMTYPE_UnarmedWeapon                            24
#define CONST_NITEMTYPE_Food                                     25
#define CONST_NITEMTYPE_Health                                   26
#define CONST_NITEMTYPE_Ammo                                     27
#define CONST_NITEMTYPE_HeadAccessory                            28
#define CONST_NITEMTYPE_ArmAccessory                             29
#define CONST_NITEMTYPE_Backpack                                 30
#define CONST_NITEMTYPE_QuestItem                                31
#define CONST_NITEMTYPE_MAX                                      32
#define CONST_NSLOTTYPE_Backpack                                 0
#define CONST_NSLOTTYPE_Global                                   1
#define CONST_NSLOTTYPE_Store                                    2
#define CONST_NSLOTNUM_GlobalSlotMax                             -100
#define CONST_NSLOTNUM_GlobalSlot0                               -10000
#define CONST_NSLOTNUM_StoreSlot0                                -20000
#define CONST_NTEMPLATEID_UrbanWarrior01                         0
#define CONST_NTEMPLATEID_UrbanWarrior02                         1
#define CONST_NTEMPLATEID_Soldier01                              2
#define CONST_NTEMPLATEID_Soldier02                              3
#define CONST_NTEMPLATEID_Max                                    4
#define CONST_MAX_TemplateSlots                                  10
#define CONST_NSPAWN_FewEnemiesThreshold                         1
#define CONST_NSPAWN_FewPlayersThreshold                         1
#define CONST_NETHER_CONTEXT_GAME_MODE_DEFAULT                   1
#define CONST_NETHER_CONTEXT_GAME_MODE                           0
#define CONST_NETHER_CONTEXT_FULLSERVER                          1
#define CONST_NETHER_CONTEXT_EMPTYSERVER                         2
#define CONST_NETHER_CONTEXT_DEDICATEDSERVER                     3
#define CONST_NETHER_CONTEXT_FULLSERVER_NO                       0
#define CONST_NETHER_CONTEXT_FULLSERVER_YES                      1
#define CONST_NETHER_CONTEXT_EMPTYSERVER_NO                      0
#define CONST_NETHER_CONTEXT_EMPTYSERVER_YES                     1
#define CONST_NETHER_CONTEXT_DEDICATEDSERVER_NO                  0
#define CONST_NETHER_CONTEXT_DEDICATEDSERVER_YES                 1
#define CONST_NETHER_PROPERTY_SERVERDESCRIPTION                  0x40000001
#define CONST_NETHER_QUERY_DEFAULT                               0
#define CONST_SCALEFORM_RES_X                                    1280
#define CONST_SCALEFORM_RES_Y                                    720
#define CONST_GlobalSlotRowLen                                   5
#define CONST_StoreSlotRowLen                                    4
#define CONST_BackpackSlotRowLen                                 4
#define CONST_SERVER_LIST_PADDING                                6
#define CONST_OPTION_GROUP_SIDE_PADDING                          0
#define CONST_OPTION_GROUP_TOP_PADDING                           0
#define CONST_OPTION_SPACING                                     40
#define CONST_CHECKBOX_LABEL_OFFSET_X                            40
#define CONST_CHECKBOX_LABEL_OFFSET_Y                            0
#define CONST_DROPDOWN_LABEL_OFFSET_X                            0
#define CONST_DROPDOWN_LABEL_OFFSET_Y                            -30
#define CONST_SLIDER_LABEL_OFFSET_X                              0
#define CONST_SLIDER_LABEL_OFFSET_Y                              -30
#define CONST_SLIDER_WIDTH                                       160
#define CONST_OPTION_COLUMN_WIDTH                                260

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum NetherGame.NetherDataTypes.ENetherEnemyAttack
/*enum ENetherEnemyAttack
{
	NEA_BasicAttack                                    = 0,
	NEA_JumpAttack                                     = 1,
	NEA_AOEAttack                                      = 2,
	NEA_MAX                                            = 3
};*/

// Enum NetherGame.NetherDataTypes.ENetherAggroAction
/*enum ENetherAggroAction
{
	NAA_None                                           = 0,
	NAA_AggroForward                                   = 1,
	NAA_AggroLeft                                      = 2,
	NAA_AggroRight                                     = 3,
	NAA_AggroBackLeft                                  = 4,
	NAA_AggroBackRight                                 = 5,
	NAA_MAX                                            = 6
};*/

// Enum NetherGame.NetherDataTypes.ENetherObjectiveType
/*enum ENetherObjectiveType
{
	NOB_None                                           = 0,
	NOB_SafeZoneDefense                                = 1,
	NOB_KillBoss                                       = 2,
	NOB_Surge                                          = 3,
	NOB_MAX                                            = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherAttribute
/*enum ENetherAttribute
{
	NAB_Guns                                           = 0,
	NAB_Melee                                          = 1,
	NAB_Stamina                                        = 2,
	NAB_Stealth                                        = 3,
	NAB_Strength                                       = 4,
	NAB_Survival                                       = 5,
	NAB_MAX                                            = 6
};*/

// Enum NetherGame.NetherDataTypes.NetherPopupID
/*enum NetherPopupID
{
	NPID_Generic                                       = 0,
	NPID_Barter                                        = 1,
	NPID_MAX                                           = 2
};*/

// Enum NetherGame.NetherDataTypes.ENetherObjectiveIcon
/*enum ENetherObjectiveIcon
{
	NOI_None                                           = 0,
	NOI_Exclamation                                    = 1,
	NOI_Bullseye                                       = 2,
	NOI_X                                              = 3,
	NOI_RadioTower                                     = 4,
	NOI_Diamond                                        = 5,
	NOI_MAX                                            = 6
};*/

// Enum NetherGame.NetherDataTypes.ENetherSwingDirection
/*enum ENetherSwingDirection
{
	NSD_RightToLeft                                    = 0,
	NSD_LeftToRight                                    = 1,
	NSD_TopToBottom                                    = 2,
	NSD_Heavy                                          = 3,
	NSD_MAX                                            = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherRadarSound
/*enum ENetherRadarSound
{
	NRS_Silent                                         = 0,
	NRS_Quiet                                          = 1,
	NRS_Loud                                           = 2,
	NRS_VeryLoud                                       = 3,
	NRS_MAX                                            = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherPOIType
/*enum ENetherPOIType
{
	NPT_Landmark                                       = 0,
	NPT_SafeZone                                       = 1,
	NPT_Street_EastWest                                = 2,
	NPT_Street_NorthSouth                              = 3,
	NPT_MAX                                            = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherOverlaySlave
/*enum ENetherOverlaySlave
{
	NOS_Exit                                           = 0,
	NOS_Character                                      = 1,
	NOS_CAP                                            = 2,
	NOS_Inventory                                      = 3,
	NOS_Settings                                       = 4,
	NOS_Map                                            = 5,
	NOS_ServerList                                     = 6,
	NOS_MAX                                            = 7
};*/

// Enum NetherGame.NetherDataTypes.ENetherRangedFireType
/*enum ENetherRangedFireType
{
	NRFT_SemiAuto                                      = 0,
	NRFT_FullAuto                                      = 1,
	NRFT_Burst                                         = 2,
	NRFT_MAX                                           = 3
};*/

// Enum NetherGame.NetherDataTypes.ENetherSlotType
/*enum ENetherSlotType
{
	NST_Normal                                         = 0,
	NST_Ranged                                         = 1,
	NST_SideArm                                        = 2,
	NST_Melee                                          = 3,
	NST_MAX                                            = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherPhyMatInteractionTypes
/*enum ENetherPhyMatInteractionTypes
{
	NPMIT_None                                         = 0,
	NPMIT_Anim_Footstep                                = 1,
	NPMIT_Anim_Footstep_AI                             = 2,
	NPMIT_Anim_Footstep_Soft                           = 3,
	NPMIT_Anim_Bodyslide                               = 4,
	NPMIT_Anim_Hand                                    = 5,
	NPMIT_Anim_Footscuff                               = 6,
	NPMIT_Anim_Footland                                = 7,
	NPMIT_Anim_Footland_AI                             = 8,
	NPMIT_Anim_Bodyland                                = 9,
	NPMIT_Weapon_All                                   = 10,
	NPMIT_Weapon_Ranged                                = 11,
	NPMIT_Weapon_Melee                                 = 12,
	NPMIT_Weapon_Hands                                 = 13,
	NPMIT_Weapon_Machete                               = 14,
	NPMIT_Weapon_Ironsight                             = 15,
	NPMIT_Weapon_Rifle                                 = 16,
	NPMIT_Weapon_Pistol                                = 17,
	NPMIT_Weapon_Shotgun                               = 18,
	NPMIT_MAX                                          = 19
};*/

// Enum NetherGame.NetherDataTypes.ENetherSafeZoneTrigger
/*enum ENetherSafeZoneTrigger
{
	NSZ_GlobalInventory                                = 0,
	NSZ_Market                                         = 1,
	NSZ_MAX                                            = 2
};*/

// Enum NetherGame.NetherDataTypes.ENetherTimeOfDay
/*enum ENetherTimeOfDay
{
	NTOD_Day                                           = 0,
	NTOD_Night                                         = 1,
	NTOD_MAX                                           = 2
};*/

// Enum NetherGame.NetherDataTypes.ENetherAggroType
/*enum ENetherAggroType
{
	Aggro_NONE                                         = 0,
	Aggro_SOUND                                        = 1,
	Aggro_SIGHT                                        = 2,
	Aggro_DAMAGE                                       = 3,
	Aggro_MAX                                          = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherWeaponType
/*enum ENetherWeaponType
{
	NWT_Melee                                          = 0,
	NWT_Pistol                                         = 1,
	NWT_Rifle                                          = 2,
	NWT_MAX                                            = 3
};*/

// Enum NetherGame.NetherDataTypes.ENetherWeaponAction
/*enum ENetherWeaponAction
{
	NWA_None                                           = 0,
	NWA_Reloading                                      = 1,
	NWA_ReloadingLoop_Intro                            = 2,
	NWA_ReloadingLoop                                  = 3,
	NWA_ReloadingLoop_Outro                            = 4,
	NWA_Equipping                                      = 5,
	NWA_UnEquipping                                    = 6,
	NWA_MAX                                            = 7
};*/

// Enum NetherGame.NetherDataTypes.ENetherMeleeActionType
/*enum ENetherMeleeActionType
{
	NMAT_None                                          = 0,
	NMAT_ReleaseAttack                                 = 1,
	NMAT_BeginCharge                                   = 2,
	NMAT_Block                                         = 3,
	NMAT_WeakAttack                                    = 4,
	NMAT_MAX                                           = 5
};*/

// Enum NetherGame.NetherDataTypes.ENetherHitReactType
/*enum ENetherHitReactType
{
	NHRT_HitReactUp                                    = 0,
	NHRT_HitReactDown                                  = 1,
	NHRT_HitReactLeft                                  = 2,
	NHRT_HitReactRight                                 = 3,
	NHRT_MAX                                           = 4
};*/

// Enum NetherGame.NetherDataTypes.ENetherDodgeType
/*enum ENetherDodgeType
{
	NDT_DodgeNone                                      = 0,
	NDT_DodgeForward                                   = 1,
	NDT_DodgeBack                                      = 2,
	NDT_DodgeLeft                                      = 3,
	NDT_DodgeRight                                     = 4,
	NDT_MAX                                            = 5
};*/

// Enum NetherGame.NetherDataTypes.ENetherRangedPose
/*enum ENetherRangedPose
{
	NRP_SafeZone                                       = 0,
	NRP_Idle                                           = 1,
	NRP_Firing                                         = 2,
	NRP_Zoomed                                         = 3,
	NRP_SniperZoomed                                   = 4,
	NRP_MAX                                            = 5
};*/

// Enum NetherGame.NetherDataTypes.ENetherPlayerPosture
/*enum ENetherPlayerPosture
{
	NPP_Stand                                          = 0,
	NPP_Sprint                                         = 1,
	NPP_Crouch                                         = 2,
	NPP_Crawl                                          = 3,
	NPP_MAX                                            = 4
};*/

// Enum NetherGame.GFxAnimatedObject.NetherAnimationState
/*enum NetherAnimationState
{
	NAS_PlayingShow                                    = 0,
	NAS_PlayingHide                                    = 1,
	NAS_Showing                                        = 2,
	NAS_Hidden                                         = 3,
	NAS_MAX                                            = 4
};*/

// Enum NetherGame.NetherMoviePlayer.NetherClickLayer
/*enum NetherClickLayer
{
	NCL_Bottom                                         = 0,
	NCL_Middle                                         = 1,
	NCL_Top                                            = 2,
	NCL_MAX                                            = 3
};*/

// Enum NetherGame.NetherMoviePlayer.NetherMoviePriority
/*enum NetherMoviePriority
{
	NMP_Low                                            = 0,
	NMP_Medium                                         = 1,
	NMP_High                                           = 2,
	NMP_ExtraHigh                                      = 3,
	NMP_MAX                                            = 4
};*/

// Enum NetherGame.NetherPlayerController.eDebugPointColor
/*enum eDebugPointColor
{
	DPC_Red                                            = 0,
	DPC_Yellow                                         = 1,
	DPC_Green                                          = 2,
	DPC_Cyan                                           = 3,
	DPC_Blue                                           = 4,
	DPC_Magenta                                        = 5,
	DPC_White                                          = 6,
	DPC_MAX                                            = 7
};*/

// Enum NetherGame.NetherServerScreenUI.EQueryCompletionAction
/*enum EQueryCompletionAction
{
	QUERYACTION_None                                   = 0,
	QUERYACTION_Default                                = 1,
	QUERYACTION_CloseScene                             = 2,
	QUERYACTION_JoinServer                             = 3,
	QUERYACTION_RefreshAll                             = 4,
	QUERYACTION_MAX                                    = 5
};*/

// Enum NetherGame.NetherSettingsUI.NETHER_WIDGET_TYPE
/*enum NETHER_WIDGET_TYPE
{
	NWT_DropDown                                       = 0,
	NWT_CheckBox                                       = 1,
	NWT_Slider                                         = 2,
	NWT_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class NetherGame.NetherDataTypes
// 0x0000 (0x0060 - 0x0060)
class UNetherDataTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1982 ];

		return pClassPointer;
	};

};

UClass* UNetherDataTypes::pClassPointer = NULL;

// Class NetherGame.NetherDayNightCycleManager
// 0x0038 (0x02C4 - 0x028C)
class ANetherDayNightCycleManager : public AActor
{
public:
	float                                              ClientUpdateInterval_Current;                     		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              ClientUpdateInterval_Max;                         		// 0x0290 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PlayRateDay;                                      		// 0x0294 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PlayRateNight;                                    		// 0x0298 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CurrentPlayRate;                                  		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              CurrentWorldTime;                                 		// 0x02A0 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentTimeState;                                 		// 0x02A4 (0x0001) [0x0000000000000000]              
	float                                              RealtimePlayRate;                                 		// 0x02A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AnimDayLength;                                    		// 0x02AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AnimDayCount;                                     		// 0x02B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DaytimeStart;                                     		// 0x02B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DaytimeEnd;                                       		// 0x02B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TimeOffset;                                       		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                CurrentDay;                                       		// 0x02C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1983 ];

		return pClassPointer;
	};

	void SetKismetTime ( );
	void ClientUpdateWorldTime ( float InWorldTime );
	void OnTODChanged ( );
	void Tick ( float DeltaTime );
	void PickDay ( );
	void eventPostBeginPlay ( );
};

UClass* ANetherDayNightCycleManager::pClassPointer = NULL;

// Class NetherGame.NetherEngine
// 0x0004 (0x0AC0 - 0x0ABC)
class UNetherEngine : public UGameEngine
{
public:
	unsigned long                                      bEnableStartScreen : 1;                           		// 0x0ABC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bMapFinishedLoading : 1;                          		// 0x0ABC (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1984 ];

		return pClassPointer;
	};

	struct FString FormatTime ( int Seconds );
	void eventMapFinishedLoading ( );
};

UClass* UNetherEngine::pClassPointer = NULL;

// Class NetherGame.NetherHUD
// 0x0194 (0x0740 - 0x05AC)
class ANetherHUD : public AHUD
{
public:
	class UNetherMoviePlayer*                          HudMovie;                                         		// 0x05AC (0x0008) [0x0000000000000000]              
	class UNetherInputOverlayUI*                       InputOverlay;                                     		// 0x05B4 (0x0008) [0x0000000000000000]              
	class UNetherPopupUI*                              PopupMovie;                                       		// 0x05BC (0x0008) [0x0000000000000000]              
	class UNetherMenuOverlayUI*                        MenuScreen;                                       		// 0x05C4 (0x0008) [0x0000000000000000]              
	struct FString                                     HeaderString;                                     		// 0x05CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  AmmoBar;                                          		// 0x05DC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  StaminaBar;                                       		// 0x05E4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HungerBar;                                        		// 0x05EC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  WeaponNameText;                                   		// 0x05F4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MessageBoxText;                                   		// 0x05FC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MessageBoxMask;                                   		// 0x0604 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  QuickSlotGroup;                                   		// 0x060C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BloodLevelText;                                   		// 0x0614 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HealthText;                                       		// 0x061C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ClipAmmoText;                                     		// 0x0624 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ReserveAmmoText;                                  		// 0x062C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ObjectiveInfoText;                                		// 0x0634 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HudHeaderText;                                    		// 0x063C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PickupPromptText;                                 		// 0x0644 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PlayerListText;                                   		// 0x064C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  crosshair;                                        		// 0x0654 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ProneIcon;                                        		// 0x065C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CrouchIcon;                                       		// 0x0664 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PlayersText;                                      		// 0x066C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ChatHeader;                                       		// 0x0674 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  BloodMeterWrapper;                                		// 0x067C (0x0008) [0x0000000000000000]              
	class UGFxAnimatedObject*                          PlayerList;                                       		// 0x0684 (0x0008) [0x0000000000000000]              
	class UGFxMessageBox*                              MessageBox;                                       		// 0x068C (0x0008) [0x0000000000000000]              
	class UGFxMessageBox*                              MessageBox2;                                      		// 0x0694 (0x0008) [0x0000000000000000]              
	class UGFxMessageWindow*                           MessageWindow;                                    		// 0x069C (0x0008) [0x0000000000000000]              
	class UGFxScrollWindow*                            PlayerListWindow;                                 		// 0x06A4 (0x0008) [0x0000000000000000]              
	class UGFxCircleMeter*                             PickupMeter;                                      		// 0x06AC (0x0008) [0x0000000000000000]              
	class UGFxCircleMeter*                             QuickSlot0Meter;                                  		// 0x06B4 (0x0008) [0x0000000000000000]              
	class UGFxCircleMeter*                             QuickSlot1Meter;                                  		// 0x06BC (0x0008) [0x0000000000000000]              
	class UGFxCircleMeter*                             QuickSlot2Meter;                                  		// 0x06C4 (0x0008) [0x0000000000000000]              
	class UGFxCircleMeter*                             QuickSlot3Meter;                                  		// 0x06CC (0x0008) [0x0000000000000000]              
	class UGFxHitIndicator*                            HitIndicator;                                     		// 0x06D4 (0x0008) [0x0000000000000000]              
	class UGFxBarMeter*                                BloodMeter;                                       		// 0x06DC (0x0008) [0x0000000000000000]              
	class UGFxRadar*                                   Radar;                                            		// 0x06E4 (0x0008) [0x0000000000000000]              
	class ANameTagManager*                             NameTagManager;                                   		// 0x06EC (0x0008) [0x0000000000000000]              
	TArray< class UGFxCircleMeter* >                   QuickSlotMeters;                                  		// 0x06F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              QuickSlotsHideTime;                               		// 0x0704 (0x0004) [0x0000000000000000]              
	unsigned long                                      bQuickSlotAutoHide : 1;                           		// 0x0708 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowChatForNewMessage : 1;                       		// 0x0708 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bHideChatMessages : 1;                            		// 0x0708 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bPlayingShowMessageAnimation : 1;                 		// 0x0708 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPlayingClearMessageAnimation : 1;                		// 0x0708 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHudShowing : 1;                                  		// 0x0708 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCursorModeEnabled : 1;                           		// 0x0708 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bChatWindowAlwaysShow : 1;                        		// 0x0708 (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              ChatWindowHideTime;                               		// 0x070C (0x0004) [0x0000000000000000]              
	float                                              TimerFadeSpeed;                                   		// 0x0710 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BlackColor;                                       		// 0x0714 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    UIBackSound;                                      		// 0x0718 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    UISelectSound;                                    		// 0x0720 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    UIConfirmSound;                                   		// 0x0728 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PlayersString;                                    		// 0x0730 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1985 ];

		return pClassPointer;
	};

	void KeyDown ( int KeyCode );
	void MouseWheel ( int Delta );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	void MouseMoved ( float X, float Y );
	void AS_SetHeaderStyle ( int FontSize, struct FString Align, int FontColor );
	void AS_PlayQuickSlotUseAnimation ( int SlotIndex );
	void AS_HideQuickSlots ( );
	void AS_ShowQuickSlots ( );
	void AS_UpdateQuickSlotHudIcon ( int SlotIndex, int ItemId, int ItemCount );
	void AS_SetHealth ( int currentHealth, int maxHealth );
	void AS_RotateMiniMap ( float Angle );
	void AS_SetStaminaBar ( float Percent );
	void AS_SetHungerBar ( float Percent );
	bool GetHideChatMessages ( );
	void ToggleHideChatMessages ( unsigned long bValue );
	bool GetShowChatForNewMessage ( );
	void ToggleShowChatForNewMessage ( unsigned long bValue );
	void CloseMenuScreen ( );
	void StartClosingMenuScreen ( );
	void ToggleMenuScreen ( unsigned char StartingMenu, unsigned long bCloseRegardless );
	void SetBloodLevel ( int BloodLevel );
	void DecayBloodMeter ( float Amount );
	void SetBloodMeter ( float Amount );
	void SetChatHeaderText ( struct FString HeaderText );
	void ShowBarterObjectivePopup ( struct FString TradeDescription, struct FScriptDelegate FunctionToConfirm, class ANInteractiveObject_Barter* BarterObject, unsigned long bPlayerHasItems );
	void ShowPopupNotification ( struct FString HeaderText, struct FString BodyText, struct FString ButtonText );
	void ConfirmWithPopup ( struct FScriptDelegate FunctionToConfirm, struct FScriptDelegate FunctionToDecline, struct FString HeaderText, struct FString BodyText, struct FString ConfirmButtonText, struct FString CancelButtonText );
	int ClosePopup ( class UGFxButton* Button );
	void CreatePopup ( );
	bool ClosePopupByID ( unsigned char IDToClose );
	void OpenMenuScreen ( );
	void ToggleCAP ( );
	void ToggleGeneralMenu ( );
	void ToggleCharacter ( );
	void ToggleMap ( );
	void ToggleInventory ( );
	void DisableHudCursorMode ( unsigned long bForceCloseChat );
	void EnableHudCursorMode ( );
	void ToggleHUDCursorMode ( );
	void PlayQuickSlotUseAnimation ( int SlotIndex );
	void StopQuickSlotFillUpAnimation ( int SlotIndex, unsigned long SkipAnimation );
	void StartQuickSlotFillUpAnimation ( int SlotIndex, float Duration );
	void DisplayObjectiveInfo ( class ANetherPawn* NPawn );
	void DisplayHealth ( class ANetherPawn* NPawn );
	void DisplayStamina ( class ANetherPawn* NPawn );
	void StopPickupTimer ( unsigned long bSkipAnimation );
	void StartPickupTimer ( float Duration, class AInventory* Inv );
	void ClearPickupPrompt ( );
	void DisplayPickupPrompt ( struct FString ActionText );
	void DisplayHunger ( class ANetherPawn* NPawn );
	void DisplayAmmo ( class ANWeap* Weapon );
	void HideHUD ( );
	void ShowHUD ( );
	void HideQuickSlots ( );
	void ShowQuickSlots ( unsigned long bAutoHide );
	void RefreshPlayerList ( );
	void SubmitInputText ( );
	void RefreshQuickSlotIcons ( );
	void DrawPlayerHUD ( );
	void DrawHUD ( );
	void DrawCrosshair ( float Scale );
	void ClearHeaderText ( );
	void SetHeaderText ( struct FString Text, int FontSize, int FontColor );
	void HideMessageWindow ( );
	void PostMessageToWindow ( struct FString Message, int HexColor );
	void Message ( class APlayerReplicationInfo* PRI, struct FString msg, struct FName MsgType, float Lifetime );
	void ToggleChatFade ( );
	void DisplayConsoleMessages ( );
	void DisplayLocalMessages ( );
	void PostNote ( struct FString Text, float NoteTime );
	void PostBigMessage ( struct FString Text, unsigned long bShowImmediately, unsigned long bShowOnlyIfUnique, float Width, float Duration, unsigned long bClearQueue );
	void PostNotification ( struct FString Text, unsigned long bShowImmediately, unsigned long bShowOnlyIfUnique );
	void PostMessage ( struct FString Text, float Duration, int PosX, int PosY, int FontSize, struct FString Align, int FontColor, unsigned long bShowImmediately, unsigned long bShowOnlyIfUnique, float Width, unsigned long bClearQueue );
	void InitializePlayerHUD ( );
	void PostBeginPlay ( );
};

UClass* ANetherHUD::pClassPointer = NULL;

// Class NetherGame.NetherPhysicalMaterialProperty
// 0x0010 (0x0070 - 0x0060)
class UNetherPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	TArray< class UNetherPhysicalMaterialPropertyItem* > InteractionEntries;                               		// 0x0060 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1986 ];

		return pClassPointer;
	};

};

UClass* UNetherPhysicalMaterialProperty::pClassPointer = NULL;

// Class NetherGame.NetherPhysicalMaterialPropertyItem
// 0x001C (0x007C - 0x0060)
class UNetherPhysicalMaterialPropertyItem : public UObject
{
public:
	unsigned char                                      Interaction;                                      		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    Sound;                                            		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            Overrides;                                        		// 0x006C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1987 ];

		return pClassPointer;
	};

};

UClass* UNetherPhysicalMaterialPropertyItem::pClassPointer = NULL;

// Class NetherGame.NetherPlayerControllerBase
// 0x001C (0x0BD4 - 0x0BB8)
class ANetherPlayerControllerBase : public AUTPlayerController
{
public:
	unsigned long                                      bDisablePlayerHUD : 1;                            		// 0x0BB8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FString                                     MberID;                                           		// 0x0BBC (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FQWord                                      ClientUID;                                        		// 0x0BCC (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1988 ];

		return pClassPointer;
	};

	void Debug_DeleteServerDocs ( );
	void DebugDeleteServerDocs ( );
	bool ShouldDeleteServerDocsOnStartup ( );
	void ClientLoggedIn ( );
};

UClass* ANetherPlayerControllerBase::pClassPointer = NULL;

// Class NetherGame.NetherServerDocument
// 0x0014 (0x02A0 - 0x028C)
class ANetherServerDocument : public AActor
{
public:
	unsigned long                                      bSafeToSaveDocument : 1;                          		// 0x028C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSaveInTimeIntervals : 1;                         		// 0x028C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDocumentDirty : 1;                               		// 0x028C (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FPointer >                          MberAsyncOps;                                     		// 0x0290 (0x0010) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1989 ];

		return pClassPointer;
	};

	void ClearAsyncOps ( );
	void eventGetDocumentTags ( TArray< struct FString >* DocumentTags );
	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
	void eventOnDocumentCreate ( unsigned long bWasSuccessful );
	void eventPostBeginPlay ( );
	void ResetToDefault ( );
	bool AutoSaveDocument ( );
	bool SafeToSave ( );
	bool ShouldAutoSaveDocument ( );
	void SaveDocument ( );
	void eventDestroyed ( );
	struct FString eventGetDocumentName ( );
};

UClass* ANetherServerDocument::pClassPointer = NULL;

// Class NetherGame.NetherServerDocumentClassOverride
// 0x0008 (0x02A8 - 0x02A0)
class ANetherServerDocumentClassOverride : public ANetherServerDocument
{
public:
	class UClass*                                      OverrideClass;                                    		// 0x02A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1990 ];

		return pClassPointer;
	};

	void eventGetDocumentTags ( TArray< struct FString >* DocumentTags );
	void SaveDocument ( );
	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
	void UpdateDocumentTimer ( );
	void SyncDocumentToServer ( );
	void eventPostBeginPlay ( );
	struct FString eventGetDocumentName ( );
};

UClass* ANetherServerDocumentClassOverride::pClassPointer = NULL;

// Class NetherGame.NetherServerPlayerDocument
// 0x0014 (0x02B4 - 0x02A0)
class ANetherServerPlayerDocument : public ANetherServerDocument
{
public:
	struct FString                                     OwningPlayerId;                                   		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AutoSaveTimer;                                    		// 0x02B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1991 ];

		return pClassPointer;
	};

	void eventGetDocumentTags ( TArray< struct FString >* DocumentTags );
	struct FString eventGetDocumentName ( );
	void eventPostBeginPlay ( );
	void eventTick ( float DeltaTime );
	void PreAutosave ( );
	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
	void eventOnDocumentCreate ( unsigned long bWasSuccessful );
	void InitForPlayer ( class ANetherPlayerController* PC, int CharacterIndex );
};

UClass* ANetherServerPlayerDocument::pClassPointer = NULL;

// Class NetherGame.NThrownObject
// 0x0020 (0x02AC - 0x028C)
class ANThrownObject : public AActor
{
public:
	float                                              ThrowSpeed;                                       		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              LifeTimer;                                        		// 0x0290 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              TimeToLive;                                       		// 0x0294 (0x0004) [0x0000000000000000]              
	class ANetherPlayerController*                     Thrower;                                          		// 0x0298 (0x0008) [0x0000000000000000]              
	float                                              YawRate;                                          		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              PitchRate;                                        		// 0x02A4 (0x0004) [0x0000000000000000]              
	float                                              RollRate;                                         		// 0x02A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1992 ];

		return pClassPointer;
	};

	void OnLifeExpired ( );
	void eventTick ( float DeltaTime );
	void eventSetInitialState ( );
};

UClass* ANThrownObject::pClassPointer = NULL;

// Class NetherGame.NThrownObject_AOEGrenadeBase
// 0x0034 (0x02E0 - 0x02AC)
class ANThrownObject_AOEGrenadeBase : public ANThrownObject
{
public:
	float                                              FuseLength;                                       		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              FuseTimer;                                        		// 0x02B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsLOS : 1;                                    		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasExploded : 1;                                 		// 0x02B4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bMakesNoise : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bImpactGrenade : 1;                               		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MinLOSCheckDistance;                              		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              FastTraceOffset;                                  		// 0x02BC (0x0004) [0x0000000000000000]              
	float                                              BlastRadius;                                      		// 0x02C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleEffect;                                   		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    SpawnedEffect;                                    		// 0x02CC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAkEvent*                                    GrenadeExplodeSound;                              		// 0x02D4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              ExplosionLoudness;                                		// 0x02DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1993 ];

		return pClassPointer;
	};

	TArray< struct FHitPawn > GetAllPawns ( float GrenadeRadius );
	void ExplosionFX ( );
	void AreaEffect ( struct FHitPawn InHitPawn );
	bool CheckGrenadeLOS ( class APawn* PawnToCheck );
	void ExplosionAOE ( );
	void eventTick ( float DeltaTime );
	void eventReplicatedEvent ( struct FName VarName );
	void eventSetInitialState ( );
};

UClass* ANThrownObject_AOEGrenadeBase::pClassPointer = NULL;

// Class NetherGame.OnlineAuthInterfaceNether
// 0x0000 (0x0324 - 0x0324)
class UOnlineAuthInterfaceNether : public UOnlineAuthInterfaceSteamworks
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1994 ];

		return pClassPointer;
	};

	bool VerifySteamClientAuthSession ( struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int AuthTicketUID );
	bool VerifyClientAuthSession ( struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int AuthTicketUID );
	bool CreateClientAuthSession ( struct FUniqueNetId ServerUID, int ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID );
};

UClass* UOnlineAuthInterfaceNether::pClassPointer = NULL;

// Class NetherGame.OnlineSubsystemNether
// 0x00B8 (0x0924 - 0x086C)
class UOnlineSubsystemNether : public UOnlineSubsystemSteamworks
{
public:
	struct FString                                     NetherUsername;                                   		// 0x086C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     NetherPassword;                                   		// 0x087C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     MberServerUID;                                    		// 0x088C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MberServerName;                                   		// 0x089C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MberServerHost;                                   		// 0x08AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerMOTD;                                       		// 0x08BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerMessage;                                    		// 0x08CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x08DC (0x0048) UNKNOWN PROPERTY: MapProperty NetherGame.OnlineSubsystemNether.PlayerHash

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1995 ];

		return pClassPointer;
	};

	struct FString GetCurrentUTCTime ( );
	int GetSecondsFromTimeString ( struct FString TimeString );
	void Mber_GetData ( class ANetherServerDocument* Data );
	struct FString Mber_ClientGetAuthToken ( );
	bool Mber_ClientLogin ( );
	void Mber_ServerList ( TArray< struct FServerDesc >* ServerListArray );
	void Mber_ServerHeartbeat ( float ServerTick );
	void Mber_ServerRegister ( );
	void Mber_ServerBanPlayer ( struct FString PlayerID );
	void Mber_ServerCleanupPlayer ( class ANetherPlayerController* PC );
	void Mber_ServerSpendGoldFor ( class ANetherPlayerController* PC, struct FString Reason, int AmountSpent );
	void Mber_ServerUpdateGoldAmount ( class ANetherPlayerController* PC );
	void Mber_ServerDeleteServerDocs ( class ANetherPlayerControllerBase* PC );
	bool Mber_ServerAuthorizePlayer ( class ANetherPlayerControllerBase* PC );
	void Mber_ServerCreateData ( class ANetherServerDocument* Data );
	void Mber_ServerWriteData ( class ANetherServerDocument* Data );
	void Mber_ServerLogin ( );
	class UOnlineAuthInterfaceSteamworks* CreateAuthInterface ( );
};

UClass* UOnlineSubsystemNether::pClassPointer = NULL;

// Class NetherGame.AnimNotify_HitBox
// 0x001C (0x0080 - 0x0064)
class UAnimNotify_HitBox : public UAnimNotify
{
public:
	int                                                AttackDirection;                                  		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AttackRange;                                      		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Extents;                                          		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                DamageDay;                                        		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DamageNight;                                      		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1996 ];

		return pClassPointer;
	};

};

UClass* UAnimNotify_HitBox::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByAggro
// 0x0034 (0x01B8 - 0x0184)
class UNetherAnimBlendByAggro : public UAnimNodeBlendPerBone
{
public:
	struct FName                                       AggroForward;                                     		// 0x0184 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       AggroLeft;                                        		// 0x018C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       AggroRight;                                       		// 0x0194 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       AggroBackLeft;                                    		// 0x019C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       AggroBackRight;                                   		// 0x01A4 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BlendTime;                                        		// 0x01AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSequence*                           AggroAnimNode;                                    		// 0x01B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1997 ];

		return pClassPointer;
	};

	unsigned char GetAggroDirection ( struct FVector AttackerDir );
	void eventAnimStopAggroAction ( );
	float AnimPlayAggroAction ( unsigned char AggroAction );
};

UClass* UNetherAnimBlendByAggro::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByDodgeType
// 0x0000 (0x017C - 0x017C)
class UNetherAnimBlendByDodgeType : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1998 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimBlendByDodgeType::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByHitReact
// 0x0050 (0x01D4 - 0x0184)
class UNetherAnimBlendByHitReact : public UAnimNodeBlendPerBone
{
public:
	TArray< struct FName >                             HitReactAnims;                                    		// 0x0184 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             HitReactAnims_Crawling;                           		// 0x0194 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             HitReactAnims_Melee;                              		// 0x01A4 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FName >                             HitReactAnims_MeleeBlocking;                      		// 0x01B4 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              BlendTime;                                        		// 0x01C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendWeight_HitReact;                             		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSequence*                           HitReactSeqNode;                                  		// 0x01CC (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1999 ];

		return pClassPointer;
	};

	unsigned char GetHitReactDirection ( struct FVector AttackerDir );
	void AnimStopHitReact ( );
	float AnimPlayHitReact ( struct FVector AttackerDir, unsigned char PlayerPosture, unsigned long bIsMeleeDamage, unsigned long bIsMeleeBlocking );
	bool IsPlayingAnim ( );
};

UClass* UNetherAnimBlendByHitReact::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByMeleeAction
// 0x0050 (0x01D4 - 0x0184)
class UNetherAnimBlendByMeleeAction : public UAnimNodeBlendPerBone
{
public:
	TArray< struct FBasicMeleeAttack >                 BasicMeleeAttackAnims;                            		// 0x0184 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBasicMeleeAttack >                 WeakMeleeAttackAnims;                             		// 0x0194 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FName                                       HeavyMeleeAttack_Intro;                           		// 0x01A4 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       HeavyMeleeAttack_Loop;                            		// 0x01AC (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       HeavyMeleeAttack_Release;                         		// 0x01B4 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       MeleeBlock;                                       		// 0x01BC (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BlendTime;                                        		// 0x01C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSequence*                           MeleeActionNode;                                  		// 0x01C8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsCharging : 1;                                  		// 0x01D0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2000 ];

		return pClassPointer;
	};

	void StopMeleeAction ( );
	void BeginMeleeBlock ( );
	unsigned char ReleaseMeleeAttack ( unsigned long bIsExhausted, float* AnimDuration );
	void BeginMeleeHeavyAttack ( );
};

UClass* UNetherAnimBlendByMeleeAction::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByOneOff
// 0x000C (0x0190 - 0x0184)
class UNetherAnimBlendByOneOff : public UAnimNodeBlendPerBone
{
public:
	float                                              PendingBlendOutTime;                              		// 0x0184 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           CustomAnimSeqNode;                                		// 0x0188 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2001 ];

		return pClassPointer;
	};

	void EndCustomAnim ( float BlendOutTime );
	bool IsPlayingAnim ( );
	float BeginCustomAnim ( struct FName CustomAnimName, float AnimRate, float BlendInTime, float BlendOutTime );
};

UClass* UNetherAnimBlendByOneOff::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByPosture
// 0x0000 (0x017C - 0x017C)
class UNetherAnimBlendByPosture : public UUDKAnimBlendByPosture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2002 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimBlendByPosture::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByWeaponPose
// 0x0000 (0x017C - 0x017C)
class UNetherAnimBlendByWeaponPose : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2003 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimBlendByWeaponPose::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendByWeaponUpdate
// 0x0000 (0x017C - 0x017C)
class UNetherAnimBlendByWeaponUpdate : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2004 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimBlendByWeaponUpdate::pClassPointer = NULL;

// Class NetherGame.NetherAnimBlendWeaponIK
// 0x0003 (0x0140 - 0x013D)
class UNetherAnimBlendWeaponIK : public UAnimNodeBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2005 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimBlendWeaponIK::pClassPointer = NULL;

// Class NetherGame.NetherAnimNodeSeqWeap
// 0x0010 (0x01E4 - 0x01D4)
class UNetherAnimNodeSeqWeap : public UUDKAnimNodeSeqWeap
{
public:
	struct FName                                       RifleAnim;                                        		// 0x01D4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MeleeAnim;                                        		// 0x01DC (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2006 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimNodeSeqWeap::pClassPointer = NULL;

// Class NetherGame.NetherAnimNotify_PhysicalSound
// 0x0001 (0x0079 - 0x0078)
class UNetherAnimNotify_PhysicalSound : public UAnimNotify_AkEvent
{
public:
	unsigned char                                      Interaction;                                      		// 0x0078 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2007 ];

		return pClassPointer;
	};

};

UClass* UNetherAnimNotify_PhysicalSound::pClassPointer = NULL;

// Class NetherGame.NetherCameraMode_Socket
// 0x0003 (0x0258 - 0x0255)
class UNetherCameraMode_Socket : public UGameThirdPersonCameraMode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2008 ];

		return pClassPointer;
	};

	void OnBecomeActive ( class APawn* CameraTarget, class UGameThirdPersonCameraMode* PrevMode );
};

UClass* UNetherCameraMode_Socket::pClassPointer = NULL;

// Class NetherGame.NetherPlayerController
// 0x040C (0x0FE0 - 0x0BD4)
class ANetherPlayerController : public ANetherPlayerControllerBase
{
public:
	class UNetherInventoryUI*                          InventoryScreen;                                  		// 0x0BD4 (0x0008) [0x0000000000000000]              
	unsigned char                                      bCrawl;                                           		// 0x0BDC (0x0001) [0x0000000000000004]              ( CPF_Input )
	float                                              QuickSlotHoldToUseTime;                           		// 0x0BE0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QuickSlotBeingHeld;                               		// 0x0BE4 (0x0004) [0x0000000000000000]              
	float                                              GrabbingItemDuration;                             		// 0x0BE8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCompletedGrabbingItem : 1;                       		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPickedCharacter : 1;                             		// 0x0BEC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bUsePersistentGlobalInventory : 1;                		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEnableDebugAim : 1;                              		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDebugPickupFinderEnabled : 1;                    		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bGrantPreorderArmband : 1;                        		// 0x0BEC (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      bVisualFlashbangStunned : 1;                      		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bVisualFlashbangStunIntialized : 1;               		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bAudioFlashbangStunned : 1;                       		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDebugShowPlayerMapData : 1;                      		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bDebugShowEnemyMapData : 1;                       		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bDebugShowEnemySpawnMapData : 1;                  		// 0x0BEC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDebugShowLootMapData : 1;                        		// 0x0BEC (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDebugShowLootSpawnMapData : 1;                   		// 0x0BEC (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bDebugShowAdminMapData : 1;                       		// 0x0BEC (0x0004) [0x0000000000000000] [0x00004000] 
	class AActor*                                      CurrentInteractActor;                             		// 0x0BF0 (0x0008) [0x0000000000000000]              
	class AActor*                                      CurrentPickup;                                    		// 0x0BF8 (0x0008) [0x0000000000000000]              
	float                                              PickupCheckInterval;                              		// 0x0C00 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PickupCheckTimestamp;                             		// 0x0C04 (0x0004) [0x0000000000000000]              
	float                                              PickUpCone;                                       		// 0x0C08 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                CurrentCharacterSlotIdx;                          		// 0x0C0C (0x0004) [0x0000000000000000]              
	class ANPlayerPreviewMesh*                         PreviewMesh;                                      		// 0x0C10 (0x0008) [0x0000000000000000]              
	float                                              ServerDocSaveInterval;                            		// 0x0C18 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastServerDocSaveTime;                            		// 0x0C1C (0x0004) [0x0000000000000000]              
	struct FVector                                     ServerIronsightsStartLoc;                         		// 0x0C20 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ServerIronsightsRot;                              		// 0x0C2C (0x000C) [0x0000000000000000]              
	class ANStore*                                     Store;                                            		// 0x0C38 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              ServerDocUpdateTimer;                             		// 0x0C40 (0x0004) [0x0000000000000000]              
	int                                                CurrentGold;                                      		// 0x0C44 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FPointer >                          MberAsyncOps;                                     		// 0x0C48 (0x0010) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FVector >                           RadarLocations;                                   		// 0x0C58 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RadarTimer;                                       		// 0x0C68 (0x0004) [0x0000000000000000]              
	float                                              RadarUpdateTime;                                  		// 0x0C6C (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            NoiseMakers;                                      		// 0x0C70 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RadarQuietDist;                                   		// 0x0C80 (0x0004) [0x0000000000000000]              
	float                                              RadarLoudDist;                                    		// 0x0C84 (0x0004) [0x0000000000000000]              
	float                                              RadarVeryLoudDist;                                		// 0x0C88 (0x0004) [0x0000000000000000]              
	struct FString                                     DisconnectDelayDesc;                              		// 0x0C8C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DisconnectCancelled;                              		// 0x0C9C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                DisconnectDelay_Max;                              		// 0x0CAC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DisconnectDelay_Current;                          		// 0x0CB0 (0x0004) [0x0000000000000000]              
	struct FString                                     AttributeNameString_Guns;                         		// 0x0CB4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeNameString_Melee;                        		// 0x0CC4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeNameString_Stamina;                      		// 0x0CD4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeNameString_Strength;                     		// 0x0CE4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeNameString_Survival;                     		// 0x0CF4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeNameString_Stealth;                      		// 0x0D04 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeDescriptionString_Guns;                  		// 0x0D14 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeDescriptionString_Melee;                 		// 0x0D24 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeDescriptionString_Stamina;               		// 0x0D34 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeDescriptionString_Strength;              		// 0x0D44 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeDescriptionString_Survival;              		// 0x0D54 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AttributeDescriptionString_Stealth;               		// 0x0D64 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              Skill1Level;                                      		// 0x0D74 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Skill2Level;                                      		// 0x0D78 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Skill3Level;                                      		// 0x0D7C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaBonusPerLevel;                             		// 0x0D80 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaBonus_ReducedMeleeCost;                    		// 0x0D84 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaBonus_JumpHeight;                          		// 0x0D88 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaBonus_SprintSpeed;                         		// 0x0D8C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StrengthBonusPerLevel;                            		// 0x0D90 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StrengthBonus_ThickSkin;                          		// 0x0D94 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StrengthBonus_StrongGripSpread;                   		// 0x0D98 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StrengthBonus_ExtraSlots;                         		// 0x0D9C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MeleeBonusPerLevel;                               		// 0x0DA0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MeleeBonus_SideCritcal;                           		// 0x0DA4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MeleeBonus_BackCritcal;                           		// 0x0DA8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GunsBonusPerLevel;                                		// 0x0DAC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GunsBonus_DamageBoost;                            		// 0x0DB0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GunsBonus_CriticalDamageBoost;                    		// 0x0DB4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GunsBonus_HeadShotDamageBoost;                    		// 0x0DB8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SurvivalBonusPerLevel;                            		// 0x0DBC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SurvivalBonus_FoodRestore;                        		// 0x0DC0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SurvivalBonus_OverflowToHealth;                   		// 0x0DC4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SurvivalBonus_FirstAidRestore;                    		// 0x0DC8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StealthBonusPerLevel;                             		// 0x0DCC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StealthBonus_Damage;                              		// 0x0DD0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UNCharacterTemplate*                         CharTemplate;                                     		// 0x0DD4 (0x0008) [0x0000000000000000]              
	struct FString                                     CurrentServerName;                                		// 0x0DDC (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FPostProcessSettings                        SavedSettings;                                    		// 0x0DEC (0x0160) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              VisualStunnedTimer;                               		// 0x0F4C (0x0004) [0x0000000000000000]              
	float                                              VisualStunnedTime;                                		// 0x0F50 (0x0004) [0x0000000000000000]              
	float                                              FlashbangFullBlindedPercent;                      		// 0x0F54 (0x0004) [0x0000000000000000]              
	float                                              AudioStunnedTimer;                                		// 0x0F58 (0x0004) [0x0000000000000000]              
	float                                              AudioStunnedTime;                                 		// 0x0F5C (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    FlashbangRingStart;                               		// 0x0F60 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    FlashbangRingEnd;                                 		// 0x0F68 (0x0008) [0x0000000000000000]              
	TArray< class AVolume* >                           SubwayVolumes;                                    		// 0x0F70 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AVolume* >                           SubwayTransitionVolumes;                          		// 0x0F80 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDebugNetherMapData >               DebugMapData;                                     		// 0x0F90 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FNetherServerDocSet                         AllPlayerDocs;                                    		// 0x0FA0 (0x0014) [0x0000000000000020]              ( CPF_Net )
	class ANDocument_CharacterInfo*                    Document_CharacterInfo;                           		// 0x0FB4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANDocument_CharacterInv*                     Document_CharacterInv;                            		// 0x0FBC (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANDocument_PlayerInv*                        Document_PlayerInv;                               		// 0x0FC4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                DocumentUpdateCount;                              		// 0x0FCC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              EnemyXPRadius;                                    		// 0x0FD0 (0x0004) [0x0000000000000000]              
	float                                              EnemyXPPercent;                                   		// 0x0FD4 (0x0004) [0x0000000000000000]              
	float                                              BloodLevelLoudnessBase;                           		// 0x0FD8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BloodLevelMaxLoudness;                            		// 0x0FDC (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2009 ];

		return pClassPointer;
	};

	void ClearAsyncOps ( );
	void CheckBulletWhip ( class UAkEvent* BulletWhip, struct FVector FireLocation, struct FVector FireDir, struct FVector HitLocation );
	void UpdateGoldAmount ( );
	bool TryPurchaseTemplatePremium ( int TemplateID );
	void TryPurchaseItemPremium ( int ItemId );
	void TryPurchaseItem ( int ItemId );
	int GetFirstOpenSlot ( int ItemType );
	void ClientResetInventoryUI ( );
	void ServerTrySellItem ( int SlotNumber );
	int CompleteTrade ( class UGFxButton* Button, class UObject* BarterObject );
	void ClientShowBarterPopup ( struct FString TradeDescription, unsigned long bPlayerHasItems, class ANInteractiveObject_Barter* BarterObject );
	void ClientPlayLocalSound ( class UAkEvent* Sound );
	void ClearClientHeader ( );
	void UpdateClientHeader ( struct FString HeaderContents );
	void ClientPostNote ( struct FString Note, float NoteTime );
	void PostABigMessageToClient ( struct FString Message, unsigned long bShowImmediately, unsigned long bClearQueue );
	void ClientStopPickupTimer ( unsigned long bSkipAnimation );
	void ClientStartPickUpTimer ( float AdjustedPickUpTime, class AInventory* Inv );
	void NetherServerStopUse ( );
	void StopUse ( );
	void NetherServerUse ( );
	void Use ( );
	class AActor* FindPickup ( );
	bool IsValidPickup ( class AActor* Pickup );
	void ResetAttributes ( );
	void ClientPawnDied ( );
	void PawnDied ( class APawn* inPawn );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	float eventGetBloodLevelNoiseScale ( );
	int GetBloodLevel ( );
	void AddBloodPoint ( );
	void CountdownBloodMeter ( );
	void OnBloodPointsChanged ( int NewBloodPoints );
	void eventPostBeginPlay ( );
	void ServerTestBloodPointAdd ( );
	void TestBloodPointAdd ( );
	void ClientSetMenuGroupSoundState ( struct FName InState );
	void ClientDisconnect ( );
	void ServerEnablePlayerMovement ( );
	void EnablePlayerMovement ( );
	void ServerDisablePlayerMovement ( struct FName DisabledState );
	void DisablePlayerMovement ( struct FName DisabledState );
	bool PlayerIsDisconnecting ( );
	bool IsPlayerGrabbingItem ( );
	bool PlayerIsUpdatingWeapon ( );
	void OnEndWeaponUpdate ( );
	void OnBeginWeaponUpdate ( );
	bool PlayerIsDisabled ( );
	void Taunt ( int TauntIndex );
	void PlayBeepSound ( );
	bool CanAffordCost ( int InNormalCost, int InPremiumCost );
	bool SpendGC ( int AmountToSpend, struct FString Reason );
	bool SpendMoney ( int AmountToSpend );
	float GetAttributeBonus ( unsigned char AttributeType );
	int GetAttributeLevel ( unsigned char AttributeType );
	struct FString GetAttributeDiscription ( unsigned char AttributeType );
	struct FString GetAttributeName ( unsigned char AttributeType );
	void ServerAskToBuyStatPoint ( unsigned char AttributeType );
	bool CheckSkillUnlock ( unsigned char AttributeType, int SkillNumber );
	int GetAttributeMaxLevel ( );
	int GetCash ( );
	int GetGold ( );
	int GetCiviliansKilledStat ( );
	int GetEnemiesKilledStat ( );
	int GetBanditsKilledStat ( );
	int GetPlayersKilledStat ( );
	void CleanupPreviewMesh ( );
	void SpawnPreviewMesh ( );
	void TrySetCharacterTemplate ( int TemplateID, int Head, int Body, int Legs );
	bool AreValidTemplateSettings ( int TemplateID, int Head, int Body, int Legs );
	void ServerSetCharacterTemplate ( int TemplateID, int Head, int Body, int Legs );
	void SetCharacterTemplate ( int TemplateID, int Head, int Body, int Legs );
	bool HasPickedCharacter ( );
	void ClientPlayerPickedCharacter ( );
	void PlayerPickedCharacter ( );
	void ServerStartSpectating ( );
	void StartSpectating ( );
	void TogglePersistentGlobalInventory ( );
	bool IsInventoryScreenOpen ( );
	bool CanOpenMenu ( );
	void SpawnStore ( class ANetherServerDocument_Store* StoreDoc );
	bool AttemptUseQuickSlot ( );
	void OnQuickSlotHoldTimerComplete ( );
	void QuickSlotReleased ( int QuickSlotNum, unsigned long bItemUsed );
	void StartUsingQuickSlot ( int QuickSlotNum );
	void RequestDisconnect ( );
	void ToggleHUDCursor ( );
	void ClientShowStartScreen ( );
	int DeathButtonExit ( class UGFxButton* Button );
	int DeathButtonContinue ( class UGFxButton* Button );
	void ClientPostChatMessage ( struct FString Message, int HexColor );
	void ClientShowDeathMessage ( );
	void BringUpStartScreenAfterDeath ( );
	void ToggleChatFade ( );
	void ServerEquipMeleeWeapon ( );
	void EquipMeleeWeapon ( );
	void ServerEquipSidearmWeapon ( );
	void EquipSidearmWeapon ( );
	void ServerEquipRangedWeapon ( );
	void EquipRangedWeapon ( );
	void KilledPlayer ( );
	void KilledEnemy ( );
	bool AddCash ( int CashGiven );
	bool eventAddXP ( int XPGiven );
	bool eventAddXPInRadius ( int XPGiven, float Radius );
	bool MoveToGlobalInventory ( class AInventory* NInv, int SlotNumber );
	void SetInventorySlotInDocuments ( int Slot, class AInventory* NInv, unsigned long bForceSave );
	void ClearInventorySlotInDocuments ( int Slot, unsigned long bForceSave );
	bool AttemptQuickslotFromDocs ( class AInventory* NInv );
	bool SaveQuickslotItem ( class AInventory* NInv, int Slot );
	bool SetSlot ( class AInventory* NInv, int Slot, unsigned long bForceSave );
	void ServerSetInventoryToQuickslot ( int SlotNumber, int QuickSlot );
	bool ClearSlot ( class AInventory* Inv );
	void TryToSwapSlots ( int SlotA, int SlotB );
	void TryToSwapBackpack ( int NewBackpackSlot );
	bool IsGlobalSlot ( int Slot );
	bool EquipRArmItem ( class AInventory* Inv );
	bool EquipLArmItem ( class AInventory* Inv );
	bool EquipHeadItem ( class AInventory* Inv );
	bool EquipInventoryItem ( class AInventory* Inv );
	void ServerConsumeInventoryItem ( int SlotNumber );
	void UnloadGun ( int SlotNumber );
	void DropItemInFrontOfPlayer ( int SlotNumber );
	int GetBackpackSlots ( );
	float GetBackpackWeightCapacity ( );
	float GetBackpackWeight ( );
	void DropCurrentWeapon ( );
	void ClientXPAdded ( int XPGiven );
	bool IsDebugAimEnabled ( );
	void ToggleDebugAim ( );
	void ClientCashAdded ( int CashAmount );
	void InternalAddCash ( int CashToGive );
	void Debug_ServerGiveCash ( int CashToGive );
	int GetUnusedStatPoints ( );
	void ClientPlayerLeveledUp ( int NewLevel );
	void CheckPlayerLevelUp ( );
	void InternalAddXP ( int XPToGive );
	void LogSpeedHack ( );
	void Debug_ServerGiveXP ( int XPToGive );
	int GetNextLevelXP ( );
	int GetPlayerXP ( );
	int GetPlayerLevel ( );
	int GetPlayerMaxHealth ( );
	int GetPlayerMaxStamina ( );
	int GetPlayerHealth ( );
	struct FVector GetLogoutPosition ( );
	void ServerWriteIfShouldLoadPos ( unsigned long bShould );
	void UpdateCharacterLogoutPosition ( );
	void NextWeapon ( );
	void PrevWeapon ( );
	bool CanChangeWeapon ( );
	bool CanAccessMarket ( );
	bool CanAccessGlobalInventory ( );
	bool RemoveFromInventory ( class UClass* ItemToRemove, int Count, unsigned long CheckFirst );
	bool HasInInventory ( class UClass* ItemToSearch, int Count );
	void RequestReload ( );
	void FixFOV ( );
	float GetFOV ( );
	void UpdateRotation ( float DeltaTime );
	void ServerChangeCamera ( );
	void ClearPostOverride ( );
	void FadeOutFlashbangEffect ( float Duration );
	void StartFlashbangVisualEffect ( );
	void UpdateVisualStun ( float DeltaTime );
	void UpdateAudioStun ( float DeltaTime );
	void EndFlashbangAudioEffect ( );
	void StartFlashbangAudioEffect ( );
	void StartFlashbangEffect ( float Duration, unsigned long VisualEffect );
	void ScaleBlur ( float Scale );
	class UUberPostProcessEffect* GetUberEffect ( );
	void ChangeCamera ( );
	bool UsePlayerCameraForViewPoint ( );
	struct FRotator GetServerIronsightsRot ( );
	struct FVector GetServerIronsightsStartLoc ( );
	void NetherServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, unsigned char MoveFlags, unsigned char ClientRoll, int View, unsigned long InbCrawl );
	void NetherShortServerMove ( float TimeStamp, struct FVector ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, int View, unsigned long InbCrawl );
	void RMServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, unsigned char MoveFlags, unsigned char ClientRoll, int View, unsigned long InbCrawl );
	void NetherIronsightsServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, unsigned char MoveFlags, unsigned char ClientRoll, int View, unsigned long InbCrawl, struct FVector IronLoc, int IronAim );
	void NetherDualServerMove ( float TimeStamp0, struct FVector InAccel0, unsigned char PendingFlags, int View0, float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, int View, unsigned long InbCrawl );
	void CallServerMove ( class USavedMove* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, class USavedMove* OldMove );
	void CheckJumpOrDuck ( );
	void HandleWalking ( );
	void ClientShowPopupNotification ( struct FString HeaderText, struct FString BodyText, struct FString ButtonText );
	void ClientCloseBarterPopup ( );
	void ClientClosePopupByID ( unsigned char Id );
	void ClientClearPrompt ( );
	void ClientShowPrompt ( struct FString Prompt );
	void eventToggleAdminMapdata ( unsigned long bInShowAdminMapData );
	void DebugShowMapLocations ( unsigned long InDebugShowPlayerMapData, unsigned long InDebugShowEnemyMapData, unsigned long InDebugShowEnemySpawnMapData, unsigned long InDebugShowLootMapData, unsigned long InDebugShowLootSpawnMapData );
	void DebugServerUpdateMapLocations ( );
	void NativeServerUpdateMapLocations ( );
	void ShowInteractPrompt ( class AActor* InteractActor );
	void eventPlayerTick ( float DeltaTime );
	void eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation );
	void AddOnlineDelegates ( unsigned long bRegisterVoice );
	class ANetherPawn* GetNetherPawn ( );
	void UpdateSpawnStats_Enemies ( int NumActive, int NumPooled, int NumMax, float CycleTime );
	void UpdateSpawnStats_Pickups ( int NumActive, int NumPooled, int NumMax, float CycleTime );
	void eventClientUpdateSpawnStats_Enemies ( int NumActive, int NumPooled, int NumMax, float CycleTime );
	void eventClientUpdateSpawnStats_Pickups ( int NumActive, int NumPooled, int NumMax, float CycleTime );
	bool IsDebugPickupFinderEnabled ( );
	void ToggleDebugPickupFinder ( );
	void DebugServerSpawnPool_Enemies ( unsigned long bForceFullAlloc, int AllocMax );
	void DebugSpawnPool_Enemies ( unsigned long bForceFullAlloc, int AllocMax );
	void DebugServerSpawnPool_Pickups ( unsigned long bForceFullAlloc, int AllocMax );
	void DebugSpawnPool_Pickups ( unsigned long bForceFullAlloc, int AllocMax );
	void ToggleFlashlight ( );
	void CleanupData ( );
	void eventPrepareLogout ( );
	void ResetServerDocs ( );
	bool CanRestartPlayer ( );
	void eventRevokeGCPurchase ( );
	void ClientPrintSystemMessage ( struct FString SysMessage );
	void SendMOTD ( );
	void ServerPrintPlayerList ( );
	void PrintPlayerList ( );
	void ServerWhoIs ( struct FString PlayerName );
	void WhoIs ( struct FString PlayerName );
	void ServerBanPlayer ( struct FString MberPlayerId );
	void BanPlayer ( struct FString PlayerID );
	void AskToBuyGold ( );
	void eventUpdateGoldCurrency ( int Amount );
	bool AttemptAutoConnect ( );
	void BringUpStartScreen ( );
	void TryBringUpStartScreen ( );
	void OnDocumentUpdate ( class ANetherServerDocument* Doc );
	bool IsUpdatingServerDocs ( );
	void SpawnDocuments ( );
	void ServerSpawnDocuments ( );
	void SwapServerDocs ( int NewSlotIndex );
	void ServerSetCharacterSlot ( int NewSlotIndex );
	void SetCharacterSlot ( int NewSlotIndex );
	void eventReplicatedEvent ( struct FName VarName );
	void ServerTryResetPosition ( );
	void ServerSuicide ( );
	int GetCurrentDate ( );
	void GetSubwayVolumes ( );
	void eventSetInitialState ( );
	int TryResetPosition ( class UGFxButton* Button );
	void ResetPosition ( );
	void CleanupPawn ( );
};

UClass* ANetherPlayerController::pClassPointer = NULL;

// Class NetherGame.NetherSafeZone
// 0x0008 (0x0294 - 0x028C)
class ANetherSafeZone : public AActor
{
public:
	class ANetherTerritoryVolume*                      OwningVolume;                                     		// 0x028C (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2010 ];

		return pClassPointer;
	};

	void EnterAllPlayers ( );
	void ExitAllPlayers ( );
	void IntializeSafeZone ( class ANetherTerritoryVolume* VolumeOwner );
	void ObjectiveActiveInSafeZone ( );
	void DisableSafeZone ( );
	void EnableSafeZone ( );
	bool eventIsActive ( );
};

UClass* ANetherSafeZone::pClassPointer = NULL;

// Class NetherGame.NetherTerritoryVolume
// 0x00B0 (0x0378 - 0x02C8)
class ANetherTerritoryVolume : public AVolume
{
public:
	class UNetherSpawnGroup_Enemies*                   SpawnGroup_Enemies;                               		// 0x02C8 (0x0008) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class UNetherSpawnGroup_Pickups*                   SpawnGroup_Pickups;                               		// 0x02D0 (0x0008) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
	class ANetherSafeZone*                             SafeZoneTemplate;                                 		// 0x02D8 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bDebugSimulateMultiplayer : 1;                    		// 0x02E0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< class APlayerStart* >                      PlayerSpawners;                                   		// 0x02E4 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              PlayerPawnCacheTimestamp;                         		// 0x02F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ANetherPawn* >                       CachedPlayerPawns;                                		// 0x02F8 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANetherSafeZone*                             AttachedSafeZone;                                 		// 0x0308 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ObjectiveTag;                                     		// 0x0310 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class ANetherSafeZone_Trigger*                     MarketTrigger;                                    		// 0x0320 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ANInteractiveObject_SoundBox* >      SoundBoxes;                                       		// 0x0328 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTouch__Delegate;                              		// 0x0338 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnTouch__Delegate;                            		// 0x0348 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTouchSafeZone__Delegate;                      		// 0x0358 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnTouchSafeZone__Delegate;                    		// 0x0368 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2011 ];

		return pClassPointer;
	};

	class ANetherSafeZone* GetSafeZone ( );
	bool IsSafeZone ( );
	void CleanUpAllEnemies ( );
	void ExitAllPlayersFromSafeZone ( );
	bool eventAllowedToSpawn ( );
	class ANPawnEnemy* ObjectiveRequest_SpawnEnemy ( class UClass* EnemyType, int XPBonus );
	void PreObjectiveActivation ( unsigned long bClearEnemies, unsigned long bClearPickups );
	TArray< class ANetherPawn* > GetAllPlayers ( );
	int GetEnemyCount ( );
	void AwardPawnXP ( int XPAmount );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
	void OnUnTouchSafeZone ( class AActor* Other );
	void OnTouchSafeZone ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void OnUnTouch ( class AActor* Other );
	void OnTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANetherTerritoryVolume::pClassPointer = NULL;

// Class NetherGame.NBotEnemy
// 0x0074 (0x055C - 0x04E8)
class ANBotEnemy : public AGameAIController
{
public:
	class ANetherPawn*                                 HuntedPlayer;                                     		// 0x04E8 (0x0008) [0x0000000000000000]              
	class ANPawnEnemy*                                 EnemyPawn;                                        		// 0x04F0 (0x0008) [0x0000000000000000]              
	struct FVector                                     LeashPosition;                                    		// 0x04F8 (0x000C) [0x0000000000000000]              
	float                                              StuckDuration;                                    		// 0x0504 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StuckDistance;                                    		// 0x0508 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     StuckPosition;                                    		// 0x050C (0x000C) [0x0000000000000000]              
	float                                              MinimumDespawnDistance;                           		// 0x0518 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DistanceAwayFromIntialPos;                        		// 0x051C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CurrentLoudestVolume;                             		// 0x0520 (0x0004) [0x0000000000000000]              
	float                                              LoudnessThreshold_Quiet;                          		// 0x0524 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LoudnessThreshold_Medium;                         		// 0x0528 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LoudnessThreshold_Loud;                           		// 0x052C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CurrentStunDuration;                              		// 0x0530 (0x0004) [0x0000000000000000]              
	float                                              AggroingDuration;                                 		// 0x0534 (0x0004) [0x0000000000000000]              
	TArray< struct FEnemyAttackAnimEvent >             AttackEvents;                                     		// 0x0538 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AttackAnimEndTime;                                		// 0x0548 (0x0004) [0x0000000000000000]              
	class AActor*                                      InvestigatingObject;                              		// 0x054C (0x0008) [0x0000000000000000]              
	float                                              InvestigatingDuration;                            		// 0x0554 (0x0004) [0x0000000000000000]              
	float                                              InvestigatingDistance;                            		// 0x0558 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2012 ];

		return pClassPointer;
	};

	bool IsStunned ( );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	bool IsAttacking ( );
	void HuntOrAttack ( );
	void OnNPawnDied ( class ANetherPawn* NPawn );
	void ClearHuntedPlayer ( );
	void AssignHuntedPlayer ( class ANetherPawn* InHuntedPlayer );
	void GetUnstuck ( );
	bool IsStuck ( );
	void CheckIfStuck ( );
	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	void DropAggro ( );
	void OnAggroEnded ( );
	void InvestigateObject ( class AActor* AggroObject );
	void AssignAggro ( class ANetherPawn* PlayerPawn, unsigned char AggroType );
	void eventSeePlayer ( class APawn* SeenPlayer );
	void eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType );
	bool ObjectiveAllowsDespawn ( );
	void NotifyStunned ( float InStunDuration );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ANBotEnemy::pClassPointer = NULL;

// Class NetherGame.NPawnEnemy
// 0x0154 (0x0C18 - 0x0AC4)
class ANPawnEnemy : public AUTPawn
{
public:
	unsigned char                                      RadarLoudestSound;                                		// 0x0AC4 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentTimeOfDay;                                 		// 0x0AC5 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentAggro;                                     		// 0x0AC6 (0x0001) [0x0000000000000000]              
	unsigned char                                      AggroingAction;                                   		// 0x0AC7 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              RadarSoundTimeStamp;                              		// 0x0AC8 (0x0004) [0x0000000000000000]              
	float                                              RadarSoundClearTime;                              		// 0x0ACC (0x0004) [0x0000000000000000]              
	unsigned long                                      PassedSoundToPlayer : 1;                          		// 0x0AD0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPawnDoesHitReacts : 1;                           		// 0x0AD0 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bAggroDebugEnabled : 1;                           		// 0x0AD0 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FTimeOfDayVariables >               TimeOfDayEnemyVariableSets;                       		// 0x0AD4 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              CooldownDuration;                                 		// 0x0AE4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CurrentLeashDistance;                             		// 0x0AE8 (0x0004) [0x0000000000000000]              
	float                                              EnemyAttackRange;                                 		// 0x0AEC (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class AActor* >                            SwingHurtList;                                    		// 0x0AF0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UNetherAnimBlendByHitReact*                  EnemyAnimNode_HitReact;                           		// 0x0B00 (0x0008) [0x0000000000000000]              
	class UNetherAnimBlendByAggro*                     EnemyAnimNode_Aggro;                              		// 0x0B08 (0x0008) [0x0000000000000000]              
	class UNetherAnimBlendByOneOff*                    EnemyAnimNode_OneOff;                             		// 0x0B10 (0x0008) [0x0000000000000000]              
	int                                                AttackScriptIndex;                                		// 0x0B18 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                TeleportScriptIndex;                              		// 0x0B1C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CustomAnimIndex;                                  		// 0x0B20 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              CurrentHighestDamage;                             		// 0x0B24 (0x0004) [0x0000000000000000]              
	TArray< struct FEnemyAttackScript >                EnemyAttackScripts;                               		// 0x0B28 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FEnemyAttackScript >                TeleportAttackScripts;                            		// 0x0B38 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FCustomAnimInfo >                   EnemyCustomAnims;                                 		// 0x0B48 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UAkEvent*                                    MeleeHitSound;                                    		// 0x0B58 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    GruntSound;                                       		// 0x0B60 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              EnemyLeashDuration;                               		// 0x0B68 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              EnemyLeashTimestamp;                              		// 0x0B6C (0x0004) [0x0000000000000000]              
	struct FString                                     EnemyDisplayName;                                 		// 0x0B70 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              StumbleSpeed;                                     		// 0x0B80 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ChaseSpeed;                                       		// 0x0B84 (0x0004) [0x0000000000000000]              
	float                                              StumbleDistance;                                  		// 0x0B88 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StumbleTimerMin;                                  		// 0x0B8C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StumbleTimerMax;                                  		// 0x0B90 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class ANetherObjective*                            AttachedObjective;                                		// 0x0B94 (0x0008) [0x0000000000000000]              
	class ANetherTerritoryVolume*                      SpawnedVolume;                                    		// 0x0B9C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             HeadshotTemplate;                                 		// 0x0BA4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RangedTemplate;                                   		// 0x0BAC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MeleeTemplate;                                    		// 0x0BB4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     InitialPosition;                                  		// 0x0BBC (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             __OnDeathAnimEnded__Delegate;                     		// 0x0BC8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeSpawnAnimEnded__Delegate;                   		// 0x0BD8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDied__Delegate;                               		// 0x0BE8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecycled__Delegate;                           		// 0x0BF8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeathNotifyEvent__Delegate;                   		// 0x0C08 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2013 ];

		return pClassPointer;
	};

	bool IsSpawning ( );
	bool IsDespawning ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void PlayJumpingSound ( );
	void PlayLandingSound ( );
	void eventReplicatedEvent ( struct FName VarName );
	void OneOffAnim_End ( );
	float OneOffAnim_Play ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime );
	void EndCustomAnim ( );
	float PlayCustomAnim ( int InCustomAnimIndex );
	void OnTODChanged ( unsigned char NewTimeOfDay );
	void eventTick ( float DeltaTime );
	void SetLoudestSound ( unsigned char SoundType );
	void RegisterAsNoiseMaker ( );
	void BuildCustomAnimScripts ( );
	bool AddToSwingHurtList ( class AActor* newEntry );
	void DamagePlayerPawn_AOE ( float DamageAmount, float DamageRadius, float Momentum, class UClass* AOEDamageType );
	bool DamagePlayerPawn_Swipe ( float DamageAmount, float DamageRange, float Momentum, struct FVector Extents, class UClass* DamageType );
	void AttemptDamagePlayer ( unsigned long bTeleportAttack );
	float PlayAttackAnim ( int InAttackScriptIndex, unsigned long bTeleportAttack );
	void EndAttack ( );
	float BeginAttack ( unsigned long bTeleportAttack, struct FEnemyAttackScript* RandomAttack );
	float EndPlayerAggro ( );
	float BeginPlayerAggro ( unsigned char InAggroType );
	bool IsAggroed ( );
	bool IsHeadShot ( struct FVector HitLocation, float AdditionalScale );
	void PlayTakeHitEffects ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void TurnOff ( );
	void TurnOn ( );
	void GoToInitialPosition ( );
	void InitializeDeSpawn ( );
	void InitializeFromPool ( );
	void CleanupForRecycle ( unsigned long bEnemyDied );
	void UpdateDayNightVars ( );
	float GetHealthPercentage ( );
	float GetEnemyLeashTimestamp ( );
	void SetEnemyLeashTimestamp ( float Time );
	void SetInitialPosition ( struct FVector InInitialPosition );
	void SetCharacterClassFromInfo ( class UClass* Info );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void ToggleAggroDisplay ( unsigned long bEnableSight, unsigned long bEnableSound );
	class UDrawCylinderComponent* CreateAggroComponent ( float InnerRadius, float OuterRadius, struct FColor InColor, float Height, float HeightOffset );
	void PostBeginPlay ( );
	void OnDeathNotifyEvent ( class ANPawnEnemy* Enemy );
	void OnRecycled ( class ANPawnEnemy* Enemy, unsigned long bEnemyDied );
	void OnDied ( class ANPawnEnemy* Enemy, class ANetherPawn* Killer );
	void OnDeSpawnAnimEnded ( class ANPawnEnemy* Enemy );
	void OnDeathAnimEnded ( class ANPawnEnemy* Enemy );
};

UClass* ANPawnEnemy::pClassPointer = NULL;

// Class NetherGame.TeleporterPawn
// 0x0010 (0x0C28 - 0x0C18)
class ATeleporterPawn : public ANPawnEnemy
{
public:
	TArray< struct FTimeOfDayVariables_Teleporter >    TODvars_Teleporter;                               		// 0x0C18 (0x0010) [0x0000000000400043]              ( CPF_Edit | CPF_Const | CPF_EditConstArray | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2014 ];

		return pClassPointer;
	};

	float GetMaxJumpForwardOffset ( );
	float GetAttackedMaxJumpToOffsetMax ( );
	float GetAttackedMaxJumpToOffsetMin ( );
	float GetMaxJumpToOffset ( );
	float GetMinJumpToOffset ( );
	float GetMaxRunningThreshold ( );
	float GetMaxDistancePerTeleport ( );
	float GetMinDistancePerTeleport ( );
	float GetTeleportAttackRespawnMax ( );
	float GetTeleportAttackRespawnMin ( );
	float GetTeleportRespawnMax ( );
	float GetTeleportRespawnMin ( );
	float GetTimeBeforeTeleMax ( );
	float GetTimeBeforeTeleMin ( );
};

UClass* ATeleporterPawn::pClassPointer = NULL;

// Class NetherGame.ShriekerPawn
// 0x0004 (0x0C2C - 0x0C28)
class AShriekerPawn : public ATeleporterPawn
{
public:
	int                                                CallRadius;                                       		// 0x0C28 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2015 ];

		return pClassPointer;
	};

};

UClass* AShriekerPawn::pClassPointer = NULL;

// Class NetherGame.NetherObjective
// 0x0068 (0x02F4 - 0x028C)
class ANetherObjective : public AActor
{
public:
	float                                              TimeBetweenChecks_Min;                            		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeBetweenChecks_Max;                            		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChanceToActivate;                                 		// 0x0294 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTimerActivated : 1;                              		// 0x0298 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bAllowNormalSpawningWhileActive : 1;              		// 0x0298 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bGetsUntouchNotifications : 1;                    		// 0x0298 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bIsActive : 1;                                    		// 0x0298 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	struct FString                                     ObjectiveName;                                    		// 0x029C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              ObjectiveDuration;                                		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CooldownDuration;                                 		// 0x02B0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                CompletetionReward_XP;                            		// 0x02B4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PercentageComplete;                               		// 0x02B8 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned char                                      ObjectiveType;                                    		// 0x02BC (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned char                                      ObjectiveIcon;                                    		// 0x02BD (0x0001) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x02C0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< class ANetherTerritoryVolume* >            ActiveVolumes;                                    		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPossibleVolumeInfo >               PossibleVolumes;                                  		// 0x02D4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              WarningTimeBeforeObjectiveStarts;                 		// 0x02E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     ObjectiveIconLocation;                            		// 0x02E8 (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2016 ];

		return pClassPointer;
	};

	void DebugWin ( );
	void UnTouched ( class AActor* Other );
	struct FString GetPercentCompleteString ( );
	struct FString GetObjectiveDescription ( );
	bool IsLost ( );
	bool IsInCooldown ( );
	bool eventCanBeActivated ( );
	bool eventIsActive ( );
	class ANetherTerritoryVolume* GetRandomPossibleVolume ( );
	void OnObjectiveLost ( );
	void OnObjectiveWon ( );
	void OnObjectiveEnded ( unsigned long bWasCompleted );
	bool TryActivate ( );
	void Activate ( );
	void PostMessageForPlayersInVol ( struct FString MessageContents );
	void UpdateHeadersForPlayersInVol ( struct FString HeaderContents );
	struct FString FormatSeconds ( float TotalSeconds );
	void InitObjective ( );
};

UClass* ANetherObjective::pClassPointer = NULL;

// Class NetherGame.NetherPawn
// 0x027C (0x0D40 - 0x0AC4)
class ANetherPawn : public AUTPawn
{
public:
	unsigned char                                      CurrentRangedPose;                                		// 0x0AC4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentWeaponType;                                		// 0x0AC5 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentDodgeType;                                 		// 0x0AC6 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentMeleeAction;                               		// 0x0AC7 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      CurrentWeaponAction;                              		// 0x0AC8 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              CrawlSpeed;                                       		// 0x0ACC (0x0004) [0x0000000000000000]              
	float                                              CrouchSpeed;                                      		// 0x0AD0 (0x0004) [0x0000000000000000]              
	float                                              WalkSpeed;                                        		// 0x0AD4 (0x0004) [0x0000000000000000]              
	float                                              BaseSprintSpeed;                                  		// 0x0AD8 (0x0004) [0x0000000000000000]              
	float                                              ActualSprintSpeed;                                		// 0x0ADC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bWantsToCrawl : 1;                                		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsCrawling : 1;                                  		// 0x0AE0 (0x0004) [0x0000000000000022] [0x00000002] ( CPF_Const | CPF_Net )
	unsigned long                                      bHungerStarving : 1;                              		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsExhausted : 1;                                 		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bIsSprinting : 1;                                 		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bIsHoldingBreath : 1;                             		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bWasInAggroRadius : 1;                            		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      PlayingSound : 1;                                 		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsBluringSights : 1;                             		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bJustTookHit : 1;                                 		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bPlayHitBlur : 1;                                 		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bInSafeZone : 1;                                  		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00000800] ( CPF_Net )
	unsigned long                                      bCanAccessGlobalInventory : 1;                    		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00001000] ( CPF_Net )
	unsigned long                                      bCanAccessMarket : 1;                             		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00002000] ( CPF_Net )
	unsigned long                                      bPlayingNearDeathEffects : 1;                     		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bAggroSplashed : 1;                               		// 0x0AE0 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bHasActiveWings : 1;                              		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00010000] ( CPF_Net )
	unsigned long                                      bInSubway : 1;                                    		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00020000] ( CPF_Net )
	unsigned long                                      bInSubwayTransition : 1;                          		// 0x0AE0 (0x0004) [0x0000000000000020] [0x00040000] ( CPF_Net )
	float                                              CrawlHeight;                                      		// 0x0AE4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CrawlRadius;                                      		// 0x0AE8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ViewPitchMin_Crawl;                               		// 0x0AEC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BaseGroundSpeed;                                  		// 0x0AF0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BaseAirSpeed;                                     		// 0x0AF4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BaseWaterSpeed;                                   		// 0x0AF8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BaseJumpZ;                                        		// 0x0AFC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FirstPersonTranslationOffset;                     		// 0x0B00 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ClientHungerAmount;                               		// 0x0B04 (0x0004) [0x0000000000000000]              
	int                                                HungerAmountMax;                                  		// 0x0B08 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDrain_Base;                                 		// 0x0B0C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDrain_Sprint;                               		// 0x0B10 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDrain_Jump;                                 		// 0x0B14 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDrain_MeleeAttack;                          		// 0x0B18 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDrain_MeleeCharge;                          		// 0x0B1C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDrain_Dodge;                                		// 0x0B20 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerHealThreshold;                              		// 0x0B24 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerHeal_Base;                                  		// 0x0B28 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerDamage_Cumulative;                          		// 0x0B2C (0x0004) [0x0000000000000000]              
	float                                              HungerHeal_Cumulative;                            		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              HungerStarvingDamage_Base;                        		// 0x0B34 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungerStaminaSyncTime_Current;                    		// 0x0B38 (0x0004) [0x0000000000000000]              
	float                                              HungerStaminaSyncTime_Max;                        		// 0x0B3C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              headMultiplier;                                   		// 0x0B40 (0x0004) [0x0000000000000000]              
	float                                              strafeMultiplier;                                 		// 0x0B44 (0x0004) [0x0000000000000000]              
	float                                              NearbyCheckTime;                                  		// 0x0B48 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NearbyCheckTimeStamp;                             		// 0x0B4C (0x0004) [0x0000000000000000]              
	float                                              BaseWeightLimit;                                  		// 0x0B50 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaAmountCurrent;                             		// 0x0B54 (0x0004) [0x0000000000000000]              
	float                                              StaminaRecover;                                   		// 0x0B58 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaDrain_Sprint;                              		// 0x0B5C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaDrain_SprintInitial;                       		// 0x0B60 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaRecoveryThreshold;                         		// 0x0B64 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastStaminaDrainTimestamp;                        		// 0x0B68 (0x0004) [0x0000000000000000]              
	float                                              StaminaRecoveryDelay;                             		// 0x0B6C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaDrain_Jump;                                		// 0x0B70 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaDrain_Dodge;                               		// 0x0B74 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaDrain_MeleeAttack;                         		// 0x0B78 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              StaminaDrain_MeleeCharge;                         		// 0x0B7C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Loudness_Sprint;                                  		// 0x0B80 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Loudness_Walk;                                    		// 0x0B84 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Loudness_Crouch;                                  		// 0x0B88 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Loudness_Crawl;                                   		// 0x0B8C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UCameraShake*                                SprintingCameraShake;                             		// 0x0B90 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UCameraShake*                                RunningCameraShake;                               		// 0x0B98 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UCameraShake*                                MeleeHitCameraShake;                              		// 0x0BA0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UCameraShake*                                MeleeHorizontalShake;                             		// 0x0BA8 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                MeleeVerticalShake;                               		// 0x0BB0 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                MeleeChargeShake;                                 		// 0x0BB8 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                MeleeBlockShake;                                  		// 0x0BC0 (0x0008) [0x0000000000000000]              
	class UAnimTree*                                   AnimTree_FirstPerson;                             		// 0x0BC8 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAnimTree*                                   AnimTree_ThirdPerson;                             		// 0x0BD0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class USkelControlLimb*                            LeftHand_BoneIK;                                  		// 0x0BD8 (0x0008) [0x0000000000000000]              
	class UNetherAnimBlendByHitReact*                  AnimNode_HitReact;                                		// 0x0BE0 (0x0008) [0x0000000000000000]              
	class UNetherAnimBlendByMeleeAction*               AnimNode_MeleeAction;                             		// 0x0BE8 (0x0008) [0x0000000000000000]              
	class UNetherAnimBlendByOneOff*                    AnimNode_OneOff;                                  		// 0x0BF0 (0x0008) [0x0000000000000000]              
	float                                              MeleeBlock_StaminaPerDamageCost;                  		// 0x0BF8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PlayerAnimStandToCrouch;                          		// 0x0BFC (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PlayerAnimCrouchToStand;                          		// 0x0C04 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PlayerAnimStandToProne;                           		// 0x0C0C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PlayerAnimProneToStand;                           		// 0x0C14 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PlayerAnimProneToCrouch;                          		// 0x0C1C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PlayerAnimCrouchToProne;                          		// 0x0C24 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PostureViewSocket_Default;                        		// 0x0C2C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PostureViewSocket_Sprint;                         		// 0x0C34 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PostureViewSocket_Jump;                           		// 0x0C3C (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              LootPickupRadius;                                 		// 0x0C44 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                BaseXPGiven;                                      		// 0x0C48 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                BonusExpForLevelKill;                             		// 0x0C4C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SightRadiusClose;                                 		// 0x0C50 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SightRadiusFar;                                   		// 0x0C54 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    PlayerNoticedSoundStart;                          		// 0x0C58 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    PlayerNoticedSoundEnd;                            		// 0x0C60 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              HitTimeStamp;                                     		// 0x0C68 (0x0004) [0x0000000000000000]              
	class ANFlashlight*                                FlashlightCurrent;                                		// 0x0C6C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    PlayerHurtSound;                                  		// 0x0C74 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    PlayerFallDamageSound;                            		// 0x0C7C (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    HumSoundStart;                                    		// 0x0C84 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    HumSoundEnd;                                      		// 0x0C8C (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    NearDeathSoundStart;                              		// 0x0C94 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    NearDeathSoundEnd;                                		// 0x0C9C (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    GliderUseSoundStart;                              		// 0x0CA4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    GliderUseSoundStop;                               		// 0x0CAC (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              NearDeathPercent;                                 		// 0x0CB4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PlayerBreathingTimer;                             		// 0x0CB8 (0x0004) [0x0000000000000000]              
	float                                              FallDamage_LoudnessScalar;                        		// 0x0CBC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FallDamage_DamageScalar;                          		// 0x0CC0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             HeadshotTemplate;                                 		// 0x0CC4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             RangedTemplate;                                   		// 0x0CCC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UParticleSystem*                             MeleeTemplate;                                    		// 0x0CD4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              FootStepUpdateDuration;                           		// 0x0CDC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FootStepCurrentTime;                              		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              FootStepLoudness;                                 		// 0x0CE4 (0x0004) [0x0000000000000000]              
	float                                              AggroTimer;                                       		// 0x0CE8 (0x0004) [0x0000000000000000]              
	float                                              AggroDuration;                                    		// 0x0CEC (0x0004) [0x0000000000000000]              
	float                                              AggroNoise;                                       		// 0x0CF0 (0x0004) [0x0000000000000000]              
	float                                              AggroNoiseInterval;                               		// 0x0CF4 (0x0004) [0x0000000000000000]              
	float                                              AggroNoiseTimer;                                  		// 0x0CF8 (0x0004) [0x0000000000000000]              
	float                                              HunterSlowDuration;                               		// 0x0CFC (0x0004) [0x0000000000000000]              
	float                                              HunterSlowTimeStamp;                              		// 0x0D00 (0x0004) [0x0000000000000000]              
	float                                              HunterSlowPercent;                                		// 0x0D04 (0x0004) [0x0000000000000000]              
	float                                              HunterSlowMin;                                    		// 0x0D08 (0x0004) [0x0000000000000000]              
	float                                              LastJumpZ;                                        		// 0x0D0C (0x0004) [0x0000000000000000]              
	float                                              FallDamageHeight;                                 		// 0x0D10 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Wings_FlightRollCap;                              		// 0x0D14 (0x0004) [0x0000000000000000]              
	int                                                Wings_FlightPitchMin;                             		// 0x0D18 (0x0004) [0x0000000000000000]              
	int                                                Wings_FlightPitchMax;                             		// 0x0D1C (0x0004) [0x0000000000000000]              
	float                                              Wings_TurnSpeed;                                  		// 0x0D20 (0x0004) [0x0000000000000000]              
	float                                              Wings_RollSpeed;                                  		// 0x0D24 (0x0004) [0x0000000000000000]              
	float                                              Wings_PitchSpeed;                                 		// 0x0D28 (0x0004) [0x0000000000000000]              
	float                                              Wings_ForwardSpeedMax;                            		// 0x0D2C (0x0004) [0x0000000000000000]              
	float                                              Wings_ForwardSpeedMin;                            		// 0x0D30 (0x0004) [0x0000000000000000]              
	float                                              Wings_DownwardSpeedMax;                           		// 0x0D34 (0x0004) [0x0000000000000000]              
	float                                              Wings_DownwardSpeedMin;                           		// 0x0D38 (0x0004) [0x0000000000000000]              
	int                                                Wings_WallCollisionDamage;                        		// 0x0D3C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2017 ];

		return pClassPointer;
	};

	bool CanAccessMarket ( );
	bool CanAccessGlobalInventory ( );
	bool IsInSafeZone ( );
	void ExitedMarketZone ( );
	void EnteredMarketZone ( );
	void ExitedGlobalInventoryZone ( );
	void EnteredGlobalInventoryZone ( );
	bool eventInSubwayTransition ( );
	void ExitedSubwayTransition ( );
	void EnteredSubwayTransition ( );
	bool eventInSubway ( );
	void ExitedSubway ( );
	void EnteredSubway ( );
	void ExitedSafeZone ( unsigned long bIsStartingObjective );
	void ClientExitedSafeZone ( );
	void ClientEnteredSafeZone ( );
	void EnteredSafeZone ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void PlayDyingSound ( );
	void DoDoubleJump ( unsigned long bUpdating );
	void ServerSetDodgeType ( unsigned char InDodgeType );
	bool Dodge ( unsigned char DoubleClickMove );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void ThrowWeaponOnDeath ( );
	void AddDefaultInventory ( );
	void PlayWeaponSwitch ( class AWeapon* OldWeapon, class AWeapon* NewWeapon );
	unsigned char GetCurrentRangedPose ( );
	void SetCurrentWeaponType ( unsigned char WeaponType );
	void ServerSetCurrentRangedPose ( unsigned char RangedPose );
	void SetCurrentRangedPose ( unsigned char RangedPose );
	bool ShouldUseZoomCam ( );
	bool IsReloading ( );
	void TogglePlayerSprint ( unsigned long bShouldSprint );
	void ToggleHoldingBreath ( unsigned long bHold );
	void UpdateSprint ( float DeltaTime );
	bool CanSprint ( );
	bool IsMoving ( );
	bool IsSprinting ( );
	bool IsHoldingBreath ( );
	bool IsExhausted ( );
	bool IsCrawling ( );
	bool IsCrouched ( );
	float GetStaminaAmountMax ( );
	float GetStaminaAmountCurrent ( );
	void ClientAttemptDrainStamina ( float Amount );
	bool AttemptDrainStamina ( float Amount, unsigned long bUpdateClient, unsigned long bIsMelee );
	void ClientAddStamina ( float Amount, unsigned long bEndExhaustion );
	void AddStamina ( float Amount, unsigned long bUpdateClient, unsigned long bEndExhaustion );
	bool HasStamina ( float StaminaAmount );
	void HandlePickup ( class AInventory* Inv );
	void ServerMakeNoise ( float Volume );
	void ActuallyPlayFootstepSound ( int FootDown );
	void eventEndCrouch ( float HeightAdjust );
	void eventNetherStartCrouch ( float MeshOffset, float HeightAdjust );
	void eventEndCrawl ( float HeightAdjust );
	void eventNetherStartCrawl ( float MeshOffset, float HeightAdjust );
	void ShouldCrawl ( unsigned long bCrawl );
	void PlayJumpingSound ( );
	void PlayLandingSound ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventDeactivateWings ( );
	void SetWingsActive ( unsigned long bActive );
	void TakeFallingDamage ( );
	void eventFalling ( );
	bool NetherDoJump ( unsigned long bUpdating );
	bool DoJump ( unsigned long bUpdating );
	void PlaySpawnSound ( );
	void PlayTeleportSound ( );
	void eventStartDriving ( class AVehicle* V );
	struct FRotator eventGetBaseAimRotation ( );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	struct FVector GetPawnViewLocation ( );
	struct FRotator eventGetViewRotation ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy );
	void eventBecomeViewTarget ( class APlayerController* PC );
	void SwingShake ( unsigned char AttackDirection, float Duration, float ShakeScale );
	void ServerSetCurrentWeaponAction ( unsigned char InWeaponAction );
	void SetCurrentWeaponAction ( unsigned char InWeaponAction, unsigned long bReplicateToServer );
	void ClientPlayImpactEffects ( struct FVector HitLocation );
	void PlayImpactEffects ( struct FVector HitLocation, unsigned long bViaReplication );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	bool IsMeleeBlocking ( );
	float OnMeleeActionUpdated ( );
	float SetMeleeAction ( unsigned char InMeleeAction );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	struct FVector GetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon );
	void SetBaseEyeheight ( );
	void DirectionUpdate ( );
	void PlayerMovementEffects ( float DeltaTime );
	void UpdateDOF ( );
	void ModifyPostProcessChain ( unsigned long bShouldBlurSights, unsigned long bHitEffect );
	void FindEnemiesNearby ( float DeltaTime );
	void eventTick ( float DeltaTime );
	void SetCharacterMeshInfo ( class USkeletalMesh* SkelMesh, class UMaterialInterface* HeadMaterial, class UMaterialInterface* BodyMaterial );
	class ANetherPlayerReplicationInfo* GetNetherPlayerReplicationInfo ( );
	void SetCharacterClassFromInfo ( class UClass* Info );
	void eventAdjustSpeedForCurrentPosture ( );
	void SetPawnSpeed ( float GSpeed, float ASpeed, float WSpeed, float JZ );
	bool IsLocalFirstPerson ( );
	void UpdatePawnForPerspective ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	class ANetherPlayerController* GetNetherController ( );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void eventReplicatedEvent ( struct FName VarName );
	unsigned char GetCurrentPosture ( );
	void SetWeapAnimType ( unsigned char AnimType );
	void OneOffAnim_End ( );
	float OneOffAnim_Play ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime );
	bool IsHeadShot ( struct FVector HitLocation, float AdditionalScale );
	void PlayTakeHitEffects ( );
	void ClientPlayDamageEffect ( class UClass* CamHitEffect );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	void DisplayHitIndicator ( float HitIntensity, struct FVector HitDirection );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ClientDied ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventEncroachedBy ( class AActor* Other );
	bool eventHealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	bool AdjustedHeal ( int Amount, class AController* Healer, class UClass* DamageType, unsigned long bIsFirstAid );
	bool CanHeal ( int HealAmount );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum );
	void UpdateHunger ( float DeltaTime );
	void ClientSetStamina ( float InStamina );
	void ClientSetHunger ( float InHunger );
	bool AttemptDrainHunger ( float Amount );
	bool AttemptAddHunger ( float Amount );
	bool IsStarving ( );
	float GetHungerAmountMax ( );
	float GetHungerAmountCurrent ( );
	void DebugActivateSpeedGod ( );
	float GetSprintSpeed ( );
	void ClientSetHealthSound ( struct FName StateName );
	void UpdateHealthSound ( );
	void eventSetHealth ( int NewHealth );
	int GetHealthMax ( );
	void UpdateAggroSplash ( float DeltaTime );
	void NotifyAggroSplashed ( float SplashDuration, float SplashStrength );
	void GetFlashlight ( );
	void ServerToggleFlashlight ( );
	void ToggleFlashlight ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
};

UClass* ANetherPawn::pClassPointer = NULL;

// Class NetherGame.NetherEnemyLootTable
// 0x0014 (0x0074 - 0x0060)
class UNetherEnemyLootTable : public UObject
{
public:
	int                                                Loot_XP;                                          		// 0x0060 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UNetherSpawnGroupData_Pickups*               Loot_PickupData;                                  		// 0x0064 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LootDropDistance;                                 		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LootAutoRecycleTime;                              		// 0x0070 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2018 ];

		return pClassPointer;
	};

	void AwardLootTable ( class ANetherPawn* PawnToAward, struct FVector DropLocation );
	class ANetherSpawnManager_Pickups* eventGetSpawnManager ( );
};

UClass* UNetherEnemyLootTable::pClassPointer = NULL;

// Class NetherGame.NetherSpawnGroup
// 0x000C (0x006C - 0x0060)
class UNetherSpawnGroup : public UObject
{
public:
	class ANetherTerritoryVolume*                      TerritoryVolumeOwner;                             		// 0x0060 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                PriorityLevel;                                    		// 0x0068 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2019 ];

		return pClassPointer;
	};

	void InitSpawnGroup ( class ANetherTerritoryVolume* VolumeOwner );
};

UClass* UNetherSpawnGroup::pClassPointer = NULL;

// Class NetherGame.NetherSpawnGroup_Enemies
// 0x0020 (0x008C - 0x006C)
class UNetherSpawnGroup_Enemies : public UNetherSpawnGroup
{
public:
	TArray< class ANetherSpawnPoint_Enemy* >           ManagedEnemySpawners;                             		// 0x006C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UNetherSpawnGroupData_Enemies*               EnemySpawnGroupData;                              		// 0x007C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ANetherSpawnManager_Enemies*                 SpawnManager_Enemies;                             		// 0x0084 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2020 ];

		return pClassPointer;
	};

	void OnSpawnerEnemyRecycled ( class ANPawnEnemy* Enemy, unsigned long bEnemyDied );
	void OnSpawnerEnemyDied ( class ANPawnEnemy* Enemy, class ANetherPawn* Killer );
	void InitSpawnGroup ( class ANetherTerritoryVolume* VolumeOwner );
};

UClass* UNetherSpawnGroup_Enemies::pClassPointer = NULL;

// Class NetherGame.NetherSpawnGroup_Pickups
// 0x0020 (0x008C - 0x006C)
class UNetherSpawnGroup_Pickups : public UNetherSpawnGroup
{
public:
	TArray< class ANetherSpawnPoint_Pickup* >          ManagedPickupSpawners;                            		// 0x006C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UNetherSpawnGroupData_Pickups*               PickupSpawnGroupData;                             		// 0x007C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ANetherSpawnManager_Pickups*                 SpawnManager_Pickups;                             		// 0x0084 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2021 ];

		return pClassPointer;
	};

	void OnSpawnerPickupRecycled ( class AUDKPickupFactory* PickupFactory, unsigned long bWasPickedUp );
	void InitSpawnGroup ( class ANetherTerritoryVolume* VolumeOwner );
};

UClass* UNetherSpawnGroup_Pickups::pClassPointer = NULL;

// Class NetherGame.NetherSpawnGroupData
// 0x0000 (0x0060 - 0x0060)
class UNetherSpawnGroupData : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2022 ];

		return pClassPointer;
	};

};

UClass* UNetherSpawnGroupData::pClassPointer = NULL;

// Class NetherGame.NetherSpawnGroupData_Enemies
// 0x0010 (0x0070 - 0x0060)
class UNetherSpawnGroupData_Enemies : public UNetherSpawnGroupData
{
public:
	TArray< struct FGroupData_Enemies >                Enemies;                                          		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2023 ];

		return pClassPointer;
	};

};

UClass* UNetherSpawnGroupData_Enemies::pClassPointer = NULL;

// Class NetherGame.NetherSpawnGroupData_Pickups
// 0x0018 (0x0078 - 0x0060)
class UNetherSpawnGroupData_Pickups : public UNetherSpawnGroupData
{
public:
	float                                              GroupCooldownDuration;                            		// 0x0060 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FGroupData_Pickups >                PickupFactories;                                  		// 0x0064 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CooldownEndTimestamp;                             		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2024 ];

		return pClassPointer;
	};

};

UClass* UNetherSpawnGroupData_Pickups::pClassPointer = NULL;

// Class NetherGame.NetherSpawnManager
// 0x0028 (0x02B4 - 0x028C)
class ANetherSpawnManager : public AActor
{
public:
	unsigned long                                      bDebugSpawn : 1;                                  		// 0x028C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bPrintDebugToScreen : 1;                          		// 0x028C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bForceMaxAllocation : 1;                          		// 0x028C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              SpawnRefreshInterval_Elapsed;                     		// 0x0290 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              SpawnRefreshInterval_Max;                         		// 0x0294 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                MaxActiveInstances;                               		// 0x0298 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ANetherTerritoryVolume* >            TerritoryVolumes;                                 		// 0x029C (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class ANetherDayNightCycleManager*                 DayNightCycleManager;                             		// 0x02AC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2025 ];

		return pClassPointer;
	};

	void ValidateTerritoryVolumes ( );
	void LogSpawnDebug ( struct FString InLog );
	int GetMaxActiveInstances ( );
	void AlterMaxAllocation ( unsigned long ForceMaxAllocation, int NewMaxActiveInstances );
	void ToggleSpawnDebug ( unsigned long bPrintToScreen );
	void CacheDayNightManager ( );
	void PostBeginPlay ( );
	void AddTerritoryVolume ( class ANetherTerritoryVolume* Territory );
};

UClass* ANetherSpawnManager::pClassPointer = NULL;

// Class NetherGame.NetherSpawnManager_Enemies
// 0x0020 (0x02D4 - 0x02B4)
class ANetherSpawnManager_Enemies : public ANetherSpawnManager
{
public:
	TArray< class ANPawnEnemy* >                       PooledEnemies;                                    		// 0x02B4 (0x0010) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< class ANPawnEnemy* >                       ActiveEnemies;                                    		// 0x02C4 (0x0010) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2026 ];

		return pClassPointer;
	};

	void OnEnemyDeathAnimEnded ( class ANPawnEnemy* Enemy );
	void OnEnemyDeSpawnAnimEnded ( class ANPawnEnemy* Enemy );
	class ANPawnEnemy* eventRetrieveAndInitializeEnemy ( class UClass* EnemyType );
	void ReturnAndDisableEnemy ( class ANPawnEnemy* Enemy, unsigned long bEnemyDied );
	class ANPawnEnemy* GetPooledEnemy ( class UClass* EnemyType );
	void ReturnEnemyToPool ( class ANPawnEnemy* Enemy );
};

UClass* ANetherSpawnManager_Enemies::pClassPointer = NULL;

// Class NetherGame.NetherSpawnManager_Pickups
// 0x0020 (0x02D4 - 0x02B4)
class ANetherSpawnManager_Pickups : public ANetherSpawnManager
{
public:
	TArray< class AUDKPickupFactory* >                 PooledPickupActors;                               		// 0x02B4 (0x0010) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	TArray< class AUDKPickupFactory* >                 ActivePickupActors;                               		// 0x02C4 (0x0010) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2027 ];

		return pClassPointer;
	};

	class AUDKPickupFactory* eventRetrieveAndInitializePickup ( class UClass* PickupType, float AutoRecycleTimer );
	void ReturnPickupActor ( class ANPickupFactory* PickupActor, unsigned long bWasPickedUp );
	class AUDKPickupFactory* GetPooledPickupActor ( class UClass* PickupType );
	void ReturnPickupActorToPool ( class AUDKPickupFactory* PickupActor );
};

UClass* ANetherSpawnManager_Pickups::pClassPointer = NULL;

// Class NetherGame.NetherSpawnPoint
// 0x000C (0x0298 - 0x028C)
class ANetherSpawnPoint : public AActor
{
public:
	class UNetherSpawnGroup*                           ParentSpawnGroup;                                 		// 0x028C (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              Timestamp_CoolDownEnd;                            		// 0x0294 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2028 ];

		return pClassPointer;
	};

	bool IsOnCooldown ( );
	void AssignParentGroup ( class UNetherSpawnGroup* ParentGroup );
	void BeginCooldown ( float CooldownDuration );
};

UClass* ANetherSpawnPoint::pClassPointer = NULL;

// Class NetherGame.NetherSpawnPoint_Enemy
// 0x0024 (0x02BC - 0x0298)
class ANetherSpawnPoint_Enemy : public ANetherSpawnPoint
{
public:
	float                                              RequiredPlayerDistance;                           		// 0x0298 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              MaxPlayerDistance;                                		// 0x029C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class UClass* >                            FilteredEnemyTypes;                               		// 0x02A0 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class ANPawnEnemy*                                 TetheredEnemy;                                    		// 0x02B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bPendingEnemyRecycle : 1;                         		// 0x02B8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2029 ];

		return pClassPointer;
	};

	void OnTetheredEnemyRecycled ( class ANPawnEnemy* Enemy, unsigned long bEnemyDied );
	void OnTetheredEnemyDied ( class ANPawnEnemy* Enemy, class ANetherPawn* Killer );
	bool eventAttemptDeSpawnTetheredEnemy ( struct FString* NoDespawnMessage );
	void eventSpawnEnemy ( class ANPawnEnemy* Enemy, unsigned long bBeginCooldown );
};

UClass* ANetherSpawnPoint_Enemy::pClassPointer = NULL;

// Class NetherGame.NetherSpawnPoint_Pickup
// 0x0020 (0x02B8 - 0x0298)
class ANetherSpawnPoint_Pickup : public ANetherSpawnPoint
{
public:
	TArray< class UClass* >                            FilteredPickupTypes;                              		// 0x0298 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class AUDKPickupFactory*                           OccupyingPickupFactory;                           		// 0x02A8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      CachedPickupFactoryClass;                         		// 0x02B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2030 ];

		return pClassPointer;
	};

	void OnNPickupRecycled ( class ANPickupFactory* NetherPickupFactory, unsigned long bWasPickedUp );
	void eventRecycleOccupyingPickup ( );
	void eventOccupySpawnerWith ( class AUDKPickupFactory* PickupFactory );
};

UClass* ANetherSpawnPoint_Pickup::pClassPointer = NULL;

// Class NetherGame.GFxNetherObject
// 0x0014 (0x00B4 - 0x00A0)
class UGFxNetherObject : public UGFxObject
{
public:
	class UGFxNetherObject*                            NextObject;                                       		// 0x00A0 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            ClickMask;                                        		// 0x00A8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMouseOver : 1;                                   		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69654 ];

		return pClassPointer;
	};

	bool GetMouseOver ( );
	void MouseOut ( );
	void MouseOver ( );
	int AS_PointOver ( float X, float Y );
	bool PointOver ( float X, float Y );
	class UGFxNetherObject* GetParent ( );
	struct FVector GetGlobalPos ( );
	void SetScale ( float XScale, float YScale );
	float GetHeight ( );
	float GetWidth ( );
	void RemoveChild ( class UGFxObject* Child );
	void AddChild ( class UGFxObject* Child );
};

UClass* UGFxNetherObject::pClassPointer = NULL;

// Class NetherGame.GFxButton
// 0x002C (0x00E0 - 0x00B4)
class UGFxButton : public UGFxNetherObject
{
public:
	unsigned long                                      bEnabled : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     ButtonClickedParams;                              		// 0x00B8 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __ButtonAction__Delegate;                         		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __ButtonClicked__Delegate;                        		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69692 ];

		return pClassPointer;
	};

	bool PointOver ( float X, float Y );
	void AS_DisableOutline ( );
	void AS_EnableOutline ( );
	bool IsEnabled ( );
	void EnableButton ( );
	void DisableButton ( );
	void RightMouseUp ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	void SetButtonClicked ( struct FScriptDelegate ButtonClickedDelegate, class UObject* Params );
	void SetLabel ( struct FString Text );
	int ButtonClicked ( class UGFxButton* Button, class UObject* Params );
	int ButtonAction ( class UGFxButton* Button );
};

UClass* UGFxButton::pClassPointer = NULL;

// Class NetherGame.IGFxClickable
// 0x0000 (0x0060 - 0x0060)
class UIGFxClickable : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69733 ];

		return pClassPointer;
	};

	bool PointOver ( float X, float Y );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
};

UClass* UIGFxClickable::pClassPointer = NULL;

// Class NetherGame.GFxAbilityNode
// 0x0008 (0x00E8 - 0x00E0)
class UGFxAbilityNode : public UGFxButton
{
public:
	unsigned char                                      Attrib;                                           		// 0x00E0 (0x0001) [0x0000000000000000]              
	int                                                Level;                                            		// 0x00E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69794 ];

		return pClassPointer;
	};

};

UClass* UGFxAbilityNode::pClassPointer = NULL;

// Class NetherGame.GFxAnimatedObject
// 0x0005 (0x00B9 - 0x00B4)
class UGFxAnimatedObject : public UGFxNetherObject
{
public:
	float                                              FadeSpeed;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	unsigned char                                      AnimationState;                                   		// 0x00B8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69798 ];

		return pClassPointer;
	};

	void PlayOpenAnimation ( unsigned long bStartFromBeginning );
	void PlayCloseAnimation ( );
	void Tick ( float DeltaTime );
};

UClass* UGFxAnimatedObject::pClassPointer = NULL;

// Class NetherGame.GFxBarMeter
// 0x0008 (0x00BC - 0x00B4)
class UGFxBarMeter : public UGFxNetherObject
{
public:
	class UGFxObject*                                  Forground;                                        		// 0x00B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69809 ];

		return pClassPointer;
	};

	float GetAmountFull ( );
	void SetAmountFull ( float Amount );
	void Initialize ( );
};

UClass* UGFxBarMeter::pClassPointer = NULL;

// Class NetherGame.GFxCharacterSlot
// 0x0054 (0x0134 - 0x00E0)
class UGFxCharacterSlot : public UGFxButton
{
public:
	class ANetherPlayerController*                     SlotOwner;                                        		// 0x00E0 (0x0008) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SelectionBackground;                              		// 0x00EC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CharacterNameObj;                                 		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UGFxBarMeter*                                LevelMeter;                                       		// 0x00FC (0x0008) [0x0000000000000000]              
	class UGFxBarMeter*                                HealthMeter;                                      		// 0x0104 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  DeleteButton;                                     		// 0x010C (0x0008) [0x0000000000000000]              
	struct FString                                     Level;                                            		// 0x0114 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Health;                                           		// 0x0124 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69817 ];

		return pClassPointer;
	};

	int AS_MouseIsOver ( );
	bool MouseIsOver ( );
	void Refresh ( unsigned long bPlayAnimations );
	void PlayAnimations ( );
	void Deselect ( );
	void Select ( );
	void Initialize ( class ANetherPlayerController* InSlotOwner, int InSlotIndex );
};

UClass* UGFxCharacterSlot::pClassPointer = NULL;

// Class NetherGame.NetherServerCharacterDocument
// 0x0004 (0x02B8 - 0x02B4)
class ANetherServerCharacterDocument : public ANetherServerPlayerDocument
{
public:
	int                                                CharacterSlotIdx;                                 		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69836 ];

		return pClassPointer;
	};

	struct FString eventGetDocumentName ( );
	void InitForPlayer ( class ANetherPlayerController* PC, int CharacterIndex );
};

UClass* ANetherServerCharacterDocument::pClassPointer = NULL;

// Class NetherGame.NDocument_CharacterInfo
// 0x0078 (0x0330 - 0x02B8)
class ANDocument_CharacterInfo : public ANetherServerCharacterDocument
{
public:
	struct FString                                     PlayerName;                                       		// 0x02B8 (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	int                                                PlayerHealth;                                     		// 0x02C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                PlayerLevel;                                      		// 0x02CC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                PlayerXP;                                         		// 0x02D0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                UnallocatedStatPoints;                            		// 0x02D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              HungerLevel;                                      		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                PlayerMaxStamina;                                 		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                Cash;                                             		// 0x02E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                StaminaLevel;                                     		// 0x02E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                StrengthLevel;                                    		// 0x02E8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MeleeLevel;                                       		// 0x02EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                GunsLevel;                                        		// 0x02F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                SurvivalLevel;                                    		// 0x02F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                StealthLevel;                                     		// 0x02F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MaxAttributeLevel;                                		// 0x02FC (0x0004) [0x0000000000000000]              
	int                                                ShouldLoadPos;                                    		// 0x0300 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                PlayersKilled;                                    		// 0x0304 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                EnemiesKilled;                                    		// 0x0308 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                BanditsKilled;                                    		// 0x030C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CiviliansKilled;                                  		// 0x0310 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LastRespawnUsed;                                  		// 0x0314 (0x0004) [0x0000000000000000]              
	int                                                NumSpeedHacks;                                    		// 0x0318 (0x0004) [0x0000000000000000]              
	int                                                NextBloodPointDecay;                              		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                CurrentBloodPoints;                               		// 0x0320 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LogoutPosX;                                       		// 0x0324 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LogoutPosY;                                       		// 0x0328 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LogoutPosZ;                                       		// 0x032C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69835 ];

		return pClassPointer;
	};

	void ResetCharacterStatstoDefault ( );
	void ResetToDefault ( );
	void ServerChangePlayerName ( struct FString NewName );
	bool RequestCashSpending ( int CashToSpend );
	void AddCash ( int CashGiven );
	int GetMaxHealth ( );
	void HealPlayerOnUnlock ( int Level );
	void SetStatLevel ( unsigned char StatName, int Level );
	int GetAttributeLevel ( unsigned char AttributeType );
	void RequestStatAdd ( unsigned char StatName );
	bool RequestStatPointSpending ( int PointsToSpend );
	void AddPlayerLevel ( int StatPoints );
	void AddPlayerXP ( int XPGiven );
	void AddCivilianKill ( );
	void AddBanditKill ( );
	void AddPlayerKill ( );
	void AddEnemyKill ( );
	void RequestHungerWrite ( float Amount );
	void RequestHealthWrite ( int HealthAmount );
	void LogSpeedHack ( );
	void AddBloodPoint ( );
	void DecayBloodPoints ( );
	void ResetBloodPointTimer ( );
	void StartBloodPointDecay ( );
	void RequestShouldLoadWrite ( unsigned long bShould );
	void RequestPositionWrite ( float VecX, float VecY, float VecZ );
	bool TryUseRespawn ( int CurrentDate );
	void SaveDocument ( );
	void PreAutosave ( );
	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ANDocument_CharacterInfo::pClassPointer = NULL;

// Class NetherGame.NCharacterTemplate
// 0x0010 (0x0070 - 0x0060)
class UNCharacterTemplate : public UObject
{
public:
	TArray< struct FLevelUpRewards >                   LevelRewards;                                     		// 0x0060 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69843 ];

		return pClassPointer;
	};

};

UClass* UNCharacterTemplate::pClassPointer = NULL;

// Class NetherGame.GFxCheckBox
// 0x0027 (0x00E0 - 0x00B9)
class UGFxCheckBox : public UGFxAnimatedObject
{
public:
	class UGFxNetherObject*                            SelectedIcon;                                     		// 0x00BC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Border;                                           		// 0x00C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSelected : 1;                                    		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bApplyImmediately : 1;                            		// 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             __OptionSelectedAction__Delegate;                 		// 0x00D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69856 ];

		return pClassPointer;
	};

	void Unselect ( );
	bool PointOver ( float X, float Y );
	void Select ( );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	void ApplyCurrentOption ( unsigned long bApplyAutomatically );
	void SetCurrentlySelectedOption ( int OptionIndex );
	int GetCurrentlySelectedOption ( );
	void Initialize ( );
	int OptionSelectedAction ( int OptionIndex );
};

UClass* UGFxCheckBox::pClassPointer = NULL;

// Class NetherGame.IGFxOptionSelector
// 0x0000 (0x0060 - 0x0060)
class UIGFxOptionSelector : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69890 ];

		return pClassPointer;
	};

	void ApplyCurrentOption ( unsigned long bApplyAutomatically );
};

UClass* UIGFxOptionSelector::pClassPointer = NULL;

// Class NetherGame.GFxCircleMeter
// 0x0000 (0x00A0 - 0x00A0)
class UGFxCircleMeter : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69892 ];

		return pClassPointer;
	};

	void StopTimedFillUp ( unsigned long SkipAnimation );
	void FadeIn ( float FadeSpeed );
	void FadeAway ( float FadeSpeed );
	void StartTimedFillUp ( float Duration );
	void SetAmountFull ( float Amount );
};

UClass* UGFxCircleMeter::pClassPointer = NULL;

// Class NetherGame.GFxMapIcon
// 0x0004 (0x00A4 - 0x00A0)
class UGFxMapIcon : public UGFxObject
{
public:
	int                                                InitialRotation;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69904 ];

		return pClassPointer;
	};

	void SetIconRotation ( int NewRotaion );
	void CorrectScale ( float Amount );
};

UClass* UGFxMapIcon::pClassPointer = NULL;

// Class NetherGame.GFxDebugPoint
// 0x0000 (0x00A4 - 0x00A4)
class UGFxDebugPoint : public UGFxMapIcon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69912 ];

		return pClassPointer;
	};

	void CorrectScale ( float Amount );
	void AS_SetColor ( int ColorIndex );
};

UClass* UGFxDebugPoint::pClassPointer = NULL;

// Class NetherGame.GFxDropDown
// 0x0047 (0x0100 - 0x00B9)
class UGFxDropDown : public UGFxAnimatedObject
{
public:
	int                                                CurrentlySelectedOption;                          		// 0x00BC (0x0004) [0x0000000000000000]              
	TArray< class UGFxOptionBox* >                     OptionBoxes;                                      		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxButton*                                  DropDownButton;                                   		// 0x00D0 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            CurrentSelectionText;                             		// 0x00D8 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Border;                                           		// 0x00E0 (0x0008) [0x0000000000000000]              
	unsigned long                                      bDropDownListOpen : 1;                            		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bApplyImmediately : 1;                            		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Width;                                            		// 0x00EC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OptionSelectedAction__Delegate;                 		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69918 ];

		return pClassPointer;
	};

	int DropDownButtonClicked ( class UGFxButton* Button );
	int CloseDropDownList ( class UGFxButton* Button );
	int OpenDropDownList ( class UGFxButton* Button );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void ApplyCurrentOption ( unsigned long bApplyAutomatically );
	bool PointOver ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	void SetWidth ( float NewWidth );
	bool SetOptionLabel ( int Index, struct FString Label );
	bool AddOption ( struct FString Label );
	void SetCurrentlySelectedOption ( int OptionIndex );
	int GetCurrentlySelectedOption ( );
	void Initialize ( );
	int OptionSelectedAction ( int OptionIndex );
};

UClass* UGFxDropDown::pClassPointer = NULL;

// Class NetherGame.GFxOptionBox
// 0x0018 (0x00CC - 0x00B4)
class UGFxOptionBox : public UGFxNetherObject
{
public:
	class UGFxNetherObject*                            LabelText;                                        		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Border;                                           		// 0x00BC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            SelectionIndicator;                               		// 0x00C4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69921 ];

		return pClassPointer;
	};

	int AS_MouseIsOver ( );
	bool MouseIsOver ( );
	void Unselect ( );
	void Select ( );
	struct FString GetLabel ( );
	void SetLabel ( struct FString NewLabelText );
	void SetWidth ( float NewWidth );
	void Initialize ( );
};

UClass* UGFxOptionBox::pClassPointer = NULL;

// Class NetherGame.GFxHitIndicator
// 0x0013 (0x00CC - 0x00B9)
class UGFxHitIndicator : public UGFxAnimatedObject
{
public:
	unsigned long                                      bFlashing : 1;                                    		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Amplitude;                                        		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceFlash;                                   		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              FlashDuration;                                    		// 0x00C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69990 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void Flash ( float Intensity, struct FVector HitDirection, struct FVector PlayerDirection );
};

UClass* UGFxHitIndicator::pClassPointer = NULL;

// Class NetherGame.GFxItem
// 0x000C (0x00C0 - 0x00B4)
class UGFxItem : public UGFxNetherObject
{
public:
	int                                                ItemId;                                           		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x00B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPremium : 1;                                   		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70008 ];

		return pClassPointer;
	};

	void ShowCount ( );
	void HideCount ( );
	void ClearPrice ( );
	void SetPrice ( float NormalPrice, float PremiumPrice );
	void RefreshIcon ( );
	int GetInventoryID ( );
	int GetItemType ( );
	bool IsPremium ( );
	class UClass* GetInventoryClass ( );
	void SetInventoryInfo ( int InItemID, int InItemCount );
};

UClass* UGFxItem::pClassPointer = NULL;

// Class NetherGame.NetherInventoryManager
// 0x0088 (0x0368 - 0x02E0)
class ANetherInventoryManager : public AUTInventoryManager
{
public:
	int                                                WeaponSlotEquipped;                               		// 0x02E0 (0x0004) [0x0000000000000000]              
	class ANWeap*                                      UnarmedWeapon;                                    		// 0x02E4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANWardrobe*                                  HeadSlot;                                         		// 0x02EC (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANWardrobe*                                  LArmSlot;                                         		// 0x02F4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANWardrobe*                                  RArmSlot;                                         		// 0x02FC (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANBackpack*                                  BackpackSlot;                                     		// 0x0304 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              CashDropPercentage;                               		// 0x030C (0x0004) [0x0000000000000000]              
	TArray< struct FWeaponAmmoKeyPair >                AmmoPair;                                         		// 0x0310 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            InventoryItemTypes;                               		// 0x0320 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            TemplateTypes;                                    		// 0x0330 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< int >                                      QuickSlotIDs;                                     		// 0x0340 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class AInventory* >                        QuickSlotedItems;                                 		// 0x0350 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumQuickSlots;                                    		// 0x0360 (0x0004) [0x0000000000000000]              
	int                                                ItemsRedirectedToStore;                           		// 0x0364 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70018 ];

		return pClassPointer;
	};

	class ANBackpack* GetBackpack ( );
	class AInventory* GetInventoryByID ( int ItemId );
	class AInventory* GetInventoryBySlot ( int ItemSlot );
	void GetBackPackItems ( TArray< class AInventory* >* Items );
	int GetGold ( );
	int GetMoney ( );
	class UClass* GetTemplateClassFromID ( int InID );
	class UClass* GetNetherInvClassFromID ( int InID );
	int AddAmmoForWeapon ( int WeaponID, int AmountToAdd );
	int ConsumeAmmo ( int WeaponID, int Amount );
	class UClass* GetAmmoClassForWeapon ( int WeaponID );
	int GetAmmoCountForWeapon ( int WeaponID );
	bool IsAnEquippedWeapon ( class ANWeap* Inv );
	float GetBackpackWeight ( );
	int GetFirstOpenBackpackSlot ( int ItemType );
	bool HasBackpackSlotOpen ( int ItemType );
	bool EquipWeapon ( class ANWeap* ToEquip, unsigned long bForceWeaponSwitch );
	bool EquipHeadItem ( class ANWardrobe* ToEquip );
	bool EquipRArmItem ( class ANWardrobe* ToEquip );
	bool EquipLArmItem ( class ANWardrobe* ToEquip );
	bool EquipWeaponBySlot ( int ItemSlot, unsigned long bForceWeaponSwitch );
	void ClearItemBySlot ( int SlotNum );
	void SwitchToBestWeapon ( unsigned long bForceADifferentWeapon );
	void ServerSetCurrentWeapon ( class AWeapon* DesiredWeapon );
	void SetCurrentWeapon ( class AWeapon* DesiredWeapon );
	void ClientWeaponSet ( class AWeapon* NewWeapon, unsigned long bOptionalSet, unsigned long bDoNotActivate );
	int GetNextWeaponSlot ( int CurrentWeaponSlot );
	void ServerNextWeapon ( );
	void NextWeapon ( );
	int GetPreviousWeaponSlot ( int CurrentWeaponSlot );
	void ServerPrevWeapon ( );
	void PrevWeapon ( );
	class AWeapon* GetBestWeapon ( unsigned long bForceADifferentWeapon );
	void ClientSetInventoryToQuickSlot ( class AInventory* Inv, int QuickSlot );
	void ServerSetInventoryToQuickslot ( int SlotNumber, int QuickSlot );
	bool ConsumeInventoryItem ( class AInventory* Item );
	void ServerConsumeInventoryItem ( class AInventory* Item );
	bool ClearFromQuickSlots ( class AInventory* Inv );
	bool TryToAutomaticallySetToEmptyQuickslot ( class AInventory* Inv );
	bool SetInventoryToQuickSlot ( class AInventory* Inv, int QuickSlotNumber );
	bool UseQuickSlot ( int SlotNum );
	void DiscardInventory ( );
	bool UnloadGun ( class AInventory* Item );
	bool DropItemInFrontOfPlayer ( class AInventory* Item );
	bool DropItem ( class AInventory* Item );
	void DropBackpack ( );
	int AddItemStacks ( int ItemId, int Stacks, unsigned long bAddItemIfMissing, class UClass* StackableItemClass );
	bool RemoveFromStacks ( class UClass* StackableItem, int Count );
	class AInventory* GetStackableInstance ( class UClass* ClassToFind );
	TArray< class AInventory* > GetAllInstancesOfClass ( class UClass* ClassToFind );
	bool HandlePickupQuerySimulated ( class UClass* ItemClass, class AActor* Pickup );
	void RemoveFromInventory ( class AInventory* NInv );
	void ClientRemoveFromInventory ( class AInventory* NInv );
	bool AddInventory ( class AInventory* NewItem, unsigned long bDoNotActivate );
	bool AddInventoryToSlot ( class AInventory* NewItem, int Slot, int Stacks, unsigned long bDoNotActivate );
	class AInventory* HasInventoryOfClassOrSubClass ( class UClass* InvClass );
	void SaveWeaponAmmoCounts ( );
	bool CreateInventoryInSlot ( int ItemId, int Stacks, int Slot, unsigned long bDoNotActivate );
	void UpdateBackpackVisibility ( );
	void SwitchWeapon ( unsigned char NewGroup );
	void UpdateAttachmentsForThirdPerson ( );
	void eventDestroyed ( );
};

UClass* ANetherInventoryManager::pClassPointer = NULL;

// Class NetherGame.NetherMoviePlayer
// 0x00E0 (0x02C4 - 0x01E4)
class UNetherMoviePlayer : public UGFxMoviePlayer
{
public:
	float                                              PrevMouseX;                                       		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              PrevMouseY;                                       		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              MouseX;                                           		// 0x01EC (0x0004) [0x0000000000000000]              
	float                                              MouseY;                                           		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RootObj;                                          		// 0x01F4 (0x0008) [0x0000000000000000]              
	unsigned char                                      NPriority;                                        		// 0x01FC (0x0001) [0x0000000000000000]              
	unsigned long                                      bLeftMouseDown : 1;                               		// 0x0200 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRightMouseDown : 1;                              		// 0x0200 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisablePlayerInputOnLoad : 1;                    		// 0x0200 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< class UGFxButton* >                        Buttons;                                          		// 0x0204 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxAnimatedObject* >                AnimatedElements;                                 		// 0x0214 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIGFxScrollable* >                   ScrollableElements;                               		// 0x0224 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIGFxClickable* >                    ClickableElementsBottom;                          		// 0x0234 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIGFxClickable* >                    ClickableElementsMiddle;                          		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIGFxClickable* >                    ClickableElementsTop;                             		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UIGFxOptionSelector* >               OptionSelectors;                                  		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxNetherObject* >                  MouseOverElements;                                		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BackgroundPath;                                   		// 0x0284 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     AlignmentContainerPath;                           		// 0x0294 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEnableMenuCloseButton__Delegate;              		// 0x02A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDisableMenuCloseButton__Delegate;             		// 0x02B4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70033 ];

		return pClassPointer;
	};

	void ClearMenuCloseButtonDelegates ( );
	void SetMenuCloseButtonDelegates ( struct FScriptDelegate EnableButtonDelegate, struct FScriptDelegate DisableButtonDelegate );
	void DisableMenuCloseButton ( );
	void EnableMenuCloseButton ( );
	void RefreshUI ( );
	void KeyDown ( int KeyCode );
	void MouseWheel ( int Delta );
	void RightMouseDownCallBack ( class UIGFxClickable* ClickableElement );
	void LeftMouseDownCallBack ( class UIGFxClickable* ClickableElement );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	void MouseMoved ( float X, float Y );
	class UIGFxClickable* CheckIfMouseOverClickableElement ( float X, float Y );
	class UGFxButton* CheckIfMouseOverButtons ( );
	struct FString ToFixed ( float Number, int NumDecimals );
	bool IsFrontendMovie ( );
	class ANetherHUD* GetHUD ( );
	class ANetherPawn* GetNetherPawn ( );
	class ANetherPlayerController* GetNetherPC ( );
	class ANetherInventoryManager* GetInventoryManager ( );
	float GetMouseY ( );
	float GetMouseX ( );
	void OverrideMouseCursor ( class UGFxObject* NewCursor );
	class UGFxAnimatedObject* GetAnimatedObject ( struct FString Path );
	class UGFxNetherObject* GetNetherVariableObject ( struct FString Path );
	float GetRotationAngleZ ( struct FRotator Rotation );
	class UGFxObject* GetRootObj ( );
	void Tick ( float DeltaTime );
	void StartClosing ( );
	void AddMouseOverElement ( class UGFxNetherObject* MouseOverElement );
	void AddClickableElement ( class UIGFxClickable* ClickableElement, unsigned char Layer );
	void Init ( class ULocalPlayer* Player );
	void OnDisableMenuCloseButton ( );
	void OnEnableMenuCloseButton ( );
};

UClass* UNetherMoviePlayer::pClassPointer = NULL;

// Class NetherGame.GFxItemSlot
// 0x0028 (0x00DC - 0x00B4)
class UGFxItemSlot : public UGFxNetherObject
{
public:
	int                                                ItemType;                                         		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                SlotType;                                         		// 0x00B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SlotNumber;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UGFxItem*                                    Item;                                             		// 0x00C4 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __SlotSelectedAction__Delegate;                   		// 0x00CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70039 ];

		return pClassPointer;
	};

	bool IsLocked ( );
	void Unlock ( );
	void Lock ( );
	void SetType ( int ItemTypeIn );
	void ResetItemPosition ( );
	int AS_MouseIsOver ( );
	bool CheckMouseSelection ( float X, float Y );
	bool MouseIsOver ( );
	class UGFxItem* RemoveItem ( );
	bool AddInventory ( class AInventory* Inv );
	void AddItem ( class UGFxItem* ItemIn );
	bool SlotSelectedAction ( class UGFxItemSlot* Slot );
};

UClass* UGFxItemSlot::pClassPointer = NULL;

// Class NetherGame.GFxMessageBox
// 0x0250 (0x0304 - 0x00B4)
class UGFxMessageBox : public UGFxNetherObject
{
public:
	class UGFxObject*                                  MessageBoxText;                                   		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MessageBoxMask;                                   		// 0x00BC (0x0008) [0x0000000000000000]              
	unsigned long                                      bPlayingShowMessageAnimation : 1;                 		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayingClearMessageAnimation : 1;                		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MessageDuration;                                  		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceMessagePost;                             		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FMessage                                    Messages[ 0xA ];                                  		// 0x00D0 (0x0230) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentMessageIndex;                              		// 0x0300 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70074 ];

		return pClassPointer;
	};

	void AS_SetMessageStyle ( int FontSize, struct FString Align, int FontColor );
	void MessageDone ( );
	void Tick ( float DeltaTime );
	void PlayClearMessageAnimation ( );
	void PlayShowMessageAnimation ( struct FMessage MessageIn );
	void PostMessage ( struct FString Text, float Duration, int PosX, int PosY, int FontSize, struct FString Align, int FontColor, unsigned long bShowImmediately, unsigned long bShowOnlyIfUnique, float Width, unsigned long bClearQueue );
	void ClearMessageQueue ( );
	void Initialize ( );
};

UClass* UGFxMessageBox::pClassPointer = NULL;

// Class NetherGame.GFxMessageWindow
// 0x004B (0x0104 - 0x00B9)
class UGFxMessageWindow : public UGFxAnimatedObject
{
public:
	class UGFxObject*                                  Background;                                       		// 0x00BC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ChatInput;                                        		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UGFxScrollWindow*                            Window;                                           		// 0x00CC (0x0008) [0x0000000000000000]              
	float                                              Width;                                            		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              MessageListHeight;                                		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                NumMessagesDisplayed;                             		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              SidePadding;                                      		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              MessageSpacing;                                   		// 0x00E8 (0x0004) [0x0000000000000000]              
	class ANetherHUD*                                  NHUD;                                             		// 0x00EC (0x0008) [0x0000000000000000]              
	class UGFxTextBox*                                 HeadMessage;                                      		// 0x00F4 (0x0008) [0x0000000000000000]              
	class UGFxTextBox*                                 TailMessage;                                      		// 0x00FC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70129 ];

		return pClassPointer;
	};

	void MouseMoved ( int X, int Y );
	bool AlwaysScroll ( );
	bool PointOver ( float X, float Y );
	void Scroll ( int Delta );
	void SetSize ( float NewWidth, float NewHeight );
	class UGFxTextBox* CreateTextBox ( struct FString NewMessage );
	void Tick ( float DeltaTime );
	void MoveMessages ( float AmountY );
	void PostMessage ( struct FString NewMessage, int HexColor );
	void Initialize ( );
	void AddMessageToList ( class UGFxTextBox* NewMessage );
};

UClass* UGFxMessageWindow::pClassPointer = NULL;

// Class NetherGame.GFxTextBox
// 0x0000 (0x00B4 - 0x00B4)
class UGFxTextBox : public UGFxNetherObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70132 ];

		return pClassPointer;
	};

	void SetColor ( int HexColor );
	void SetMessageStyle ( int Size, struct FString Align, int HexColor );
};

UClass* UGFxTextBox::pClassPointer = NULL;

// Class NetherGame.GFxScrollWindow
// 0x0043 (0x00FC - 0x00B9)
class UGFxScrollWindow : public UGFxAnimatedObject
{
public:
	unsigned long                                      bInitialized : 1;                                 		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSmoothScrollOn : 1;                              		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAlwaysScroll : 1;                                		// 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              WindowWidth;                                      		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              WindowHeight;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	class UGFxNetherObject*                            Mask;                                             		// 0x00C8 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Content;                                          		// 0x00D0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  HitArea;                                          		// 0x00D8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Border;                                           		// 0x00E0 (0x0008) [0x0000000000000000]              
	float                                              ScrollStep;                                       		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              TopPadding;                                       		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              BottomPadding;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              SmoothFactor;                                     		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              TargetY;                                          		// 0x00F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70142 ];

		return pClassPointer;
	};

	bool AlwaysScroll ( );
	void DisableBorder ( );
	void EnableBorder ( );
	void SetPadding ( float Amount );
	void ScrollToTop ( );
	void ScrollToBottom ( );
	void ScrollY ( float Amount );
	void Scroll ( int Delta );
	void ScrollDown ( );
	void ScrollUp ( );
	void RemoveFromWindow ( class UGFxObject* Child );
	void AddToWindow ( class UGFxObject* Child );
	void SetSize ( float WidthIn, float HeightIn );
	void Tick ( float DeltaTime );
	void Initialize ( );
};

UClass* UGFxScrollWindow::pClassPointer = NULL;

// Class NetherGame.IGFxScrollable
// 0x0000 (0x0060 - 0x0060)
class UIGFxScrollable : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70180 ];

		return pClassPointer;
	};

	bool PointOver ( float X, float Y );
	bool AlwaysScroll ( );
	void Scroll ( int Delta );
};

UClass* UIGFxScrollable::pClassPointer = NULL;

// Class NetherGame.GFxNameTag
// 0x0023 (0x00DC - 0x00B9)
class UGFxNameTag : public UGFxAnimatedObject
{
public:
	class UGFxNetherObject*                            NameText;                                         		// 0x00BC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Background;                                       		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Border;                                           		// 0x00CC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            DevBorder;                                        		// 0x00D4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70182 ];

		return pClassPointer;
	};

	void RefreshSize ( );
	void SetDevBorderVisible ( unsigned long bVisiblity );
	void SetName ( struct FString NewName );
	void Initialize ( );
};

UClass* UGFxNameTag::pClassPointer = NULL;

// Class NetherGame.GFxObjectiveIcon
// 0x0008 (0x00AC - 0x00A4)
class UGFxObjectiveIcon : public UGFxMapIcon
{
public:
	class ANetherObjective*                            Objective;                                        		// 0x00A4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70197 ];

		return pClassPointer;
	};

	void SetTimeRemaining ( struct FString TimeRemaining );
	void SetPercentComplete ( struct FString PercentCompleteText );
	void SetName ( struct FString Text );
	void UpdateInfo ( );
	void Init ( class ANetherObjective* InObjective );
};

UClass* UGFxObjectiveIcon::pClassPointer = NULL;

// Class NetherGame.GFxObjectiveInfo
// 0x0000 (0x00A0 - 0x00A0)
class UGFxObjectiveInfo : public UGFxObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70217 ];

		return pClassPointer;
	};

	void SetObjectiveType ( int eObjectiveType );
	void SetTimeRemaining ( struct FString TimeRemaining );
	void SetPercentComplete ( float Percent );
	void SetName ( struct FString Text );
};

UClass* UGFxObjectiveInfo::pClassPointer = NULL;

// Class NetherGame.GFxPointOfInterestIcon
// 0x0000 (0x00A4 - 0x00A4)
class UGFxPointOfInterestIcon : public UGFxMapIcon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70244 ];

		return pClassPointer;
	};

	void AS_SetFontSize ( float NewFontSize );
	void SetName ( struct FString Text );
};

UClass* UGFxPointOfInterestIcon::pClassPointer = NULL;

// Class NetherGame.GFxRadar
// 0x0024 (0x00D8 - 0x00B4)
class UGFxRadar : public UGFxNetherObject
{
public:
	int                                                DotPoolSize;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	class UGFxNetherObject*                            Container;                                        		// 0x00B8 (0x0008) [0x0000000000000000]              
	TArray< class UGFxObject* >                        DotPool;                                          		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              RadarRadius;                                      		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              ViewRange;                                        		// 0x00D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70250 ];

		return pClassPointer;
	};

	void RotateMap ( float angleInDegrees );
	void Tick ( float DeltaTime );
	void DrawDots ( struct FVector PlayerLoc, TArray< struct FVector > Dots );
	void Initialize ( );
};

UClass* UGFxRadar::pClassPointer = NULL;

// Class NetherGame.GFxRevealMask
// 0x000F (0x00C8 - 0x00B9)
class UGFxRevealMask : public UGFxAnimatedObject
{
public:
	float                                              RevealSpeed;                                      		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70271 ];

		return pClassPointer;
	};

	void SetSize ( float NewWidth, float NewHeight );
	void Show ( );
	void Hide ( unsigned long bSkipAnimation );
	void Tick ( float DeltaTime );
	void Initialize ( );
};

UClass* UGFxRevealMask::pClassPointer = NULL;

// Class NetherGame.GFxSafeZoneIcon
// 0x0000 (0x00A4 - 0x00A4)
class UGFxSafeZoneIcon : public UGFxMapIcon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70287 ];

		return pClassPointer;
	};

	void CorrectScale ( float Amount );
	void SetRadius ( float Radius );
};

UClass* UGFxSafeZoneIcon::pClassPointer = NULL;

// Class NetherGame.GFxSafeZoneTriggerIcon
// 0x0000 (0x00A4 - 0x00A4)
class UGFxSafeZoneTriggerIcon : public UGFxMapIcon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70295 ];

		return pClassPointer;
	};

	void AS_SetFontSize ( float NewFontSize );
	void SetName ( struct FString Text );
};

UClass* UGFxSafeZoneTriggerIcon::pClassPointer = NULL;

// Class NetherGame.GFxServerButton
// 0x002C (0x010C - 0x00E0)
class UGFxServerButton : public UGFxButton
{
public:
	int                                                ServerListIndex;                                  		// 0x00E0 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x00E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerAddress;                                    		// 0x00F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentNumPlayers;                                		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                CurrentMaxPlayers;                                		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70345 ];

		return pClassPointer;
	};

	void Deselect ( );
	void Select ( );
	bool IsCustomServer ( );
	void SetCustomServer ( struct FString InServerAddress );
	bool AllowJoinServer ( );
	void SetPlayerStats ( int PlayerCount, int MaxPlayers );
	void Init ( int InIndex, struct FString InServerName );
};

UClass* UGFxServerButton::pClassPointer = NULL;

// Class NetherGame.GFxSlider
// 0x0047 (0x0100 - 0x00B9)
class UGFxSlider : public UGFxAnimatedObject
{
public:
	float                                              CurrentlySelectedValue;                           		// 0x00BC (0x0004) [0x0000000000000000]              
	class UGFxNetherObject*                            CurrentSelectionText;                             		// 0x00C0 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            SliderHandle;                                     		// 0x00C8 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Background;                                       		// 0x00D0 (0x0008) [0x0000000000000000]              
	unsigned long                                      bApplyImmediately : 1;                            		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDraggingHandle : 1;                              		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MinRange;                                         		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              MaxRange;                                         		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              ClickOffsetX;                                     		// 0x00E4 (0x0004) [0x0000000000000000]              
	class UNetherInputOverlayUI*                       InputOverlay;                                     		// 0x00E8 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OptionSelectedAction__Delegate;                 		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70368 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	void ApplyCurrentOption ( unsigned long bApplyAutomatically );
	void SetRange ( float Min, float Max );
	void RefreshCurrentlySelectedValue ( );
	void RefreshSliderPos ( );
	void SetWidth ( float NewWidth );
	void SetCurrentlySelectedOption ( float OptionValue );
	float GetCurrentlySelectedValue ( );
	void Initialize ( class UNetherInputOverlayUI* InputOverlayIn );
	void OptionSelectedAction ( float OptionValue );
};

UClass* UGFxSlider::pClassPointer = NULL;

// Class NetherGame.NetherInputOverlayUI
// 0x0020 (0x02E4 - 0x02C4)
class UNetherInputOverlayUI : public UNetherMoviePlayer
{
public:
	class UGFxObject*                                  MouseCursor;                                      		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Container;                                        		// 0x02CC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TextInputBox;                                     		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  TextInput;                                        		// 0x02DC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70372 ];

		return pClassPointer;
	};

	float GetMouseYDelta ( );
	float GetMouseXDelta ( );
	float GetMouseYPrev ( );
	float GetMouseXPrev ( );
	float GetMouseY ( );
	float GetMouseX ( );
	void AS_SetFocuseToTextInput ( );
	void AS_ResetFocus ( );
	void ClearInputText ( );
	struct FString GetInputText ( );
	void HideTextInput ( );
	void ShowTextInput ( );
	void HideMouseCursor ( );
	void ShowMouseCursor ( );
	void AS_KeyUp ( int KeyCode );
	void AS_KeyDown ( int KeyCode );
	void AS_MouseWheel ( int Delta );
	void AS_RightMouseUp ( );
	void AS_RightMouseDown ( );
	void AS_LeftMouseUp ( );
	void AS_LeftMouseDown ( );
	void AS_MouseMoved ( float X, float Y );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherInputOverlayUI::pClassPointer = NULL;

// Class NetherGame.GFxStatModifierButton
// 0x0020 (0x0100 - 0x00E0)
class UGFxStatModifierButton : public UGFxButton
{
public:
	struct FScriptDelegate                             __SpendPointDelegate__Delegate;                   		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __RemovePointDelegate__Delegate;                  		// 0x00F0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70418 ];

		return pClassPointer;
	};

	void RemoveStatPoint ( );
	void SetRemoveDelegate ( struct FScriptDelegate InDelegate );
	void SpendStatPoint ( );
	void SetSpendDelegate ( struct FScriptDelegate InDelegate );
	void Initialize ( );
	void RemovePointDelegate ( );
	void SpendPointDelegate ( );
};

UClass* UGFxStatModifierButton::pClassPointer = NULL;

// Class NetherGame.GFxStatWidget
// 0x0057 (0x0110 - 0x00B9)
class UGFxStatWidget : public UGFxAnimatedObject
{
public:
	unsigned char                                      Stat;                                             		// 0x00BC (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class ANetherPlayerController*                     Controller;                                       		// 0x00C0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UGFxStatModifierButton*                      PlusButton;                                       		// 0x00C8 (0x0008) [0x0000000000000000]              
	class UGFxStatModifierButton*                      MinusButton;                                      		// 0x00D0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ProgressBar;                                      		// 0x00D8 (0x0008) [0x0000000000000000]              
	TArray< class UGFxAbilityNode* >                   ProgressNodes;                                    		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ProgressBarTargetXScale;                          		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              ProgressBarScaleFactor;                           		// 0x00F4 (0x0004) [0x0000000000000000]              
	int                                                UpgradeCount;                                     		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                MaxLevel;                                         		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnStatAllocated__Delegate;                      		// 0x0100 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70431 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void ScaleProgressBar ( int Level );
	void ApplyUpgrades ( );
	int AskServerToAddPoint ( class UGFxAbilityNode* Button );
	void AddPoint ( );
	void SetData ( );
	void Initialize ( unsigned char NewStat, class ANetherPlayerController* PlayerController );
	void OnStatAllocated ( );
};

UClass* UGFxStatWidget::pClassPointer = NULL;

// Class NetherGame.GFxToolTip
// 0x0017 (0x00D0 - 0x00B9)
class UGFxToolTip : public UGFxAnimatedObject
{
public:
	class UGFxNetherObject*                            Background;                                       		// 0x00BC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            ToolTipText;                                      		// 0x00C4 (0x0008) [0x0000000000000000]              
	float                                              Width;                                            		// 0x00CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70479 ];

		return pClassPointer;
	};

	void SetToolTipText ( struct FString Text );
	void SetSize ( float NewWidth, float NewHeight );
	void Initialize ( );
};

UClass* UGFxToolTip::pClassPointer = NULL;

// Class NetherGame.NDmgType
// 0x0024 (0x01A0 - 0x017C)
class UNDmgType : public UUTDamageType
{
public:
	struct FName                                       HitAnim;                                          		// 0x017C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitAnimBack;                                      		// 0x0184 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DeathAnimBack;                                    		// 0x018C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FullBodyAnimOnHit : 1;                            		// 0x0194 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UClass*                                      CamHitEffect;                                     		// 0x0198 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70623 ];

		return pClassPointer;
	};

};

UClass* UNDmgType::pClassPointer = NULL;

// Class NetherGame.NDmgType_Melee
// 0x0000 (0x01A0 - 0x01A0)
class UNDmgType_Melee : public UNDmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70626 ];

		return pClassPointer;
	};

};

UClass* UNDmgType_Melee::pClassPointer = NULL;

// Class NetherGame.NDmgType_Ranged
// 0x0000 (0x01A0 - 0x01A0)
class UNDmgType_Ranged : public UNDmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70627 ];

		return pClassPointer;
	};

};

UClass* UNDmgType_Ranged::pClassPointer = NULL;

// Class NetherGame.NetherEnemyHSEffect
// 0x0000 (0x02A0 - 0x02A0)
class ANetherEnemyHSEffect : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70628 ];

		return pClassPointer;
	};

};

UClass* ANetherEnemyHSEffect::pClassPointer = NULL;

// Class NetherGame.NetherEnemyMeleeHitEffect
// 0x0000 (0x02A0 - 0x02A0)
class ANetherEnemyMeleeHitEffect : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70629 ];

		return pClassPointer;
	};

};

UClass* ANetherEnemyMeleeHitEffect::pClassPointer = NULL;

// Class NetherGame.NetherEnemyRangedHitEffect
// 0x0000 (0x02A0 - 0x02A0)
class ANetherEnemyRangedHitEffect : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70630 ];

		return pClassPointer;
	};

};

UClass* ANetherEnemyRangedHitEffect::pClassPointer = NULL;

// Class NetherGame.NBotEnemy_Teleporter
// 0x0020 (0x057C - 0x055C)
class ANBotEnemy_Teleporter : public ANBotEnemy
{
public:
	class ATeleporterPawn*                             TPawn;                                            		// 0x055C (0x0008) [0x0000000000000000]              
	unsigned long                                      bJumpToPlayer : 1;                                		// 0x0564 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTeleportSuccess : 1;                             		// 0x0564 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              NextTeleportTime;                                 		// 0x0568 (0x0004) [0x0000000000000000]              
	int                                                NumTeleportAttempts_Current;                      		// 0x056C (0x0004) [0x0000000000000000]              
	int                                                NumTeleportAttempts_Max;                          		// 0x0570 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TeleportDuration;                                 		// 0x0574 (0x0004) [0x0000000000000000]              
	float                                              ChanceToTPAttack;                                 		// 0x0578 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70890 ];

		return pClassPointer;
	};

	struct FVector GetPlayerTeleportLocation ( );
	struct FVector GetObjectTeleportLocation ( );
	struct FVector GetForwardTeleportLocation ( );
	bool AttemptTeleportToObject ( class AActor* TargetActor );
	bool AttemptTeleport ( );
	void GetUnstuck ( );
	bool IsTeleporting ( );
	void OnAggroEnded ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ANBotEnemy_Teleporter::pClassPointer = NULL;

// Class NetherGame.HorrorBandit
// 0x0000 (0x0C28 - 0x0C28)
class AHorrorBandit : public ATeleporterPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70895 ];

		return pClassPointer;
	};

};

UClass* AHorrorBandit::pClassPointer = NULL;

// Class NetherGame.NDmgType_BlockBreak
// 0x0000 (0x01A0 - 0x01A0)
class UNDmgType_BlockBreak : public UNDmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70905 ];

		return pClassPointer;
	};

};

UClass* UNDmgType_BlockBreak::pClassPointer = NULL;

// Class NetherGame.HorrorGolem
// 0x0000 (0x0C28 - 0x0C28)
class AHorrorGolem : public ATeleporterPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70907 ];

		return pClassPointer;
	};

};

UClass* AHorrorGolem::pClassPointer = NULL;

// Class NetherGame.HorrorHunter
// 0x0000 (0x0C28 - 0x0C28)
class AHorrorHunter : public ATeleporterPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70919 ];

		return pClassPointer;
	};

};

UClass* AHorrorHunter::pClassPointer = NULL;

// Class NetherGame.NBotEnemy_Watcher
// 0x0000 (0x057C - 0x057C)
class ANBotEnemy_Watcher : public ANBotEnemy_Teleporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70930 ];

		return pClassPointer;
	};

};

UClass* ANBotEnemy_Watcher::pClassPointer = NULL;

// Class NetherGame.HorrorHunter2
// 0x0000 (0x0C28 - 0x0C28)
class AHorrorHunter2 : public AHorrorHunter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70936 ];

		return pClassPointer;
	};

};

UClass* AHorrorHunter2::pClassPointer = NULL;

// Class NetherGame.HorrorLost
// 0x0008 (0x0C20 - 0x0C18)
class AHorrorLost : public ANPawnEnemy
{
public:
	float                                              SuicideDamageRadius;                              		// 0x0C18 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SuicideDamageAmount;                              		// 0x0C1C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70947 ];

		return pClassPointer;
	};

};

UClass* AHorrorLost::pClassPointer = NULL;

// Class NetherGame.NBotEnemy_Lost
// 0x0000 (0x055C - 0x055C)
class ANBotEnemy_Lost : public ANBotEnemy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70964 ];

		return pClassPointer;
	};

};

UClass* ANBotEnemy_Lost::pClassPointer = NULL;

// Class NetherGame.HorrorLost02
// 0x0000 (0x0C20 - 0x0C20)
class AHorrorLost02 : public AHorrorLost
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70971 ];

		return pClassPointer;
	};

};

UClass* AHorrorLost02::pClassPointer = NULL;

// Class NetherGame.HorrorLost03
// 0x0000 (0x0C20 - 0x0C20)
class AHorrorLost03 : public AHorrorLost
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70982 ];

		return pClassPointer;
	};

};

UClass* AHorrorLost03::pClassPointer = NULL;

// Class NetherGame.HorrorLost04
// 0x0000 (0x0C20 - 0x0C20)
class AHorrorLost04 : public AHorrorLost
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70993 ];

		return pClassPointer;
	};

};

UClass* AHorrorLost04::pClassPointer = NULL;

// Class NetherGame.HorrorLostLaying
// 0x0000 (0x0C20 - 0x0C20)
class AHorrorLostLaying : public AHorrorLost
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71004 ];

		return pClassPointer;
	};

};

UClass* AHorrorLostLaying::pClassPointer = NULL;

// Class NetherGame.HorrorPawn
// 0x0000 (0x0C28 - 0x0C28)
class AHorrorPawn : public ATeleporterPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71015 ];

		return pClassPointer;
	};

};

UClass* AHorrorPawn::pClassPointer = NULL;

// Class NetherGame.HorrorSubBoss
// 0x0014 (0x0C2C - 0x0C18)
class AHorrorSubBoss : public ANPawnEnemy
{
public:
	int                                                ObjectiveAwardXP;                                 		// 0x0C18 (0x0004) [0x0000000000000000]              
	TArray< struct FXPOwed >                           PendingXPAwards;                                  		// 0x0C1C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71026 ];

		return pClassPointer;
	};

	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
};

UClass* AHorrorSubBoss::pClassPointer = NULL;

// Class NetherGame.NBotEnemy_Subboss
// 0x0000 (0x055C - 0x055C)
class ANBotEnemy_Subboss : public ANBotEnemy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71063 ];

		return pClassPointer;
	};

	void NotifyStunned ( float InStunDuration );
};

UClass* ANBotEnemy_Subboss::pClassPointer = NULL;

// Class NetherGame.MICReflectionUpdater
// 0x0010 (0x029C - 0x028C)
class AMICReflectionUpdater : public AActor
{
public:
	class AStaticMeshActor*                            Mesh;                                             		// 0x028C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0294 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71093 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
};

UClass* AMICReflectionUpdater::pClassPointer = NULL;

// Class NetherGame.NameTagManager
// 0x0018 (0x02A4 - 0x028C)
class ANameTagManager : public AActor
{
public:
	class ANetherHUD*                                  NHUD;                                             		// 0x028C (0x0008) [0x0000000000000000]              
	TArray< struct FNameTagData >                      NameTags;                                         		// 0x0294 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71107 ];

		return pClassPointer;
	};

	void Draw ( );
	void Initialize ( class ANetherHUD* NewHud );
};

UClass* ANameTagManager::pClassPointer = NULL;

// Class NetherGame.NStackableItem
// 0x0028 (0x0338 - 0x0310)
class ANStackableItem : public AInventory
{
public:
	struct FString                                     ItemDesc;                                         		// 0x0310 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                MinCountPickup;                                   		// 0x0324 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxCountPickup;                                   		// 0x0328 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxCountPerStack;                                 		// 0x032C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ItemWeight;                                       		// 0x0330 (0x0004) [0x0000000000000000]              
	int                                                SlotNumber;                                       		// 0x0334 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71147 ];

		return pClassPointer;
	};

	void AnnouncePickup ( class APawn* Other );
	class UClass* GetInvClass ( );
	int GetItemType ( );
	void SetSlotNumber ( int NewSlotNumber );
	int GetSlotNumber ( );
	bool IsQuickSlotable ( );
	int GetInventoryCount ( );
	int GetDefaultInventoryCount ( );
	int RemoveItemStacks ( int Amount );
	void SetItemStacks ( int Amount );
	void ClientSetItemStacks ( int Amount );
	int AddItemStacks ( int Amount );
	bool ConsumeItem ( class APawn* Consumer );
	int GetInventoryID ( );
	float GetWeight ( );
	float GetStackCap ( );
	bool IsStackable ( );
	struct FString GetInventoryDesc ( );
	struct FString GetInventoryName ( );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
};

UClass* ANStackableItem::pClassPointer = NULL;

// Class NetherGame.NDroppedPickup
// 0x0000 (0x02C8 - 0x02C8)
class ANDroppedPickup : public AUTDroppedPickup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71398 ];

		return pClassPointer;
	};

	bool IsInUse ( );
	void ReleaseFromUse ( );
	void MarkForUse ( );
	bool PawnHasSight ( class APawn* Other );
	void eventSetPickupMesh ( class UPrimitiveComponent* NewPickupMesh );
};

UClass* ANDroppedPickup::pClassPointer = NULL;

// Class NetherGame.NAmmo
// 0x0000 (0x0338 - 0x0338)
class ANAmmo : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71399 ];

		return pClassPointer;
	};

	int GetItemType ( );
};

UClass* ANAmmo::pClassPointer = NULL;

// Class NetherGame.NAmmo_12Gauge
// 0x0000 (0x0338 - 0x0338)
class ANAmmo_12Gauge : public ANAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71404 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANAmmo_12Gauge::pClassPointer = NULL;

// Class NetherGame.NAmmo_45ACP
// 0x0000 (0x0338 - 0x0338)
class ANAmmo_45ACP : public ANAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71409 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANAmmo_45ACP::pClassPointer = NULL;

// Class NetherGame.NAmmo_50cal
// 0x0000 (0x0338 - 0x0338)
class ANAmmo_50cal : public ANAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71414 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANAmmo_50cal::pClassPointer = NULL;

// Class NetherGame.NAmmo_5pt56
// 0x0000 (0x0338 - 0x0338)
class ANAmmo_5pt56 : public ANAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71419 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANAmmo_5pt56::pClassPointer = NULL;

// Class NetherGame.NAmmo_7pt62
// 0x0000 (0x0338 - 0x0338)
class ANAmmo_7pt62 : public ANAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71424 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANAmmo_7pt62::pClassPointer = NULL;

// Class NetherGame.NAmmo_9mm
// 0x0000 (0x0338 - 0x0338)
class ANAmmo_9mm : public ANAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71429 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANAmmo_9mm::pClassPointer = NULL;

// Class NetherGame.NAttachment
// 0x0013 (0x03F4 - 0x03E1)
class ANAttachment : public AUTWeaponAttachment
{
public:
	class UAkEvent*                                    WeaponFireSnd_Local;                              		// 0x03E4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    WeaponFireSnd_Remote;                             		// 0x03EC (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71435 ];

		return pClassPointer;
	};

	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void UpdateAttachmentDepthPriority ( );
	void AttachTo ( class AUTPawn* OwnerPawn );
};

UClass* ANAttachment::pClassPointer = NULL;

// Class NetherGame.NAttachment_Ranged
// 0x0010 (0x0404 - 0x03F4)
class ANAttachment_Ranged : public ANAttachment
{
public:
	class UParticleSystem*                             BeamTemplate;                                     		// 0x03F4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                CurrentPath;                                      		// 0x03FC (0x0004) [0x0000000000000000]              
	float                                              ChanceToFireTrace;                                		// 0x0400 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71446 ];

		return pClassPointer;
	};

	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void AttachTo ( class AUTPawn* OwnerPawn );
	struct FVector GetMuzzleLoc ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void SpawnBeam ( struct FVector Start, struct FVector End, unsigned long bFirstPerson );
};

UClass* ANAttachment_Ranged::pClassPointer = NULL;

// Class NetherGame.NWeap
// 0x0060 (0x07DC - 0x077C)
class ANWeap : public AUTWeapon
{
public:
	float                                              Weight;                                           		// 0x077C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                InvType;                                          		// 0x0780 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ItemDesc;                                         		// 0x0784 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                SlotNumber;                                       		// 0x0794 (0x0004) [0x0000000000000000]              
	float                                              WeaponLoudness;                                   		// 0x0798 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       WeaponViewSocketName;                             		// 0x079C (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< unsigned char >                            PhysMatInteractions;                              		// 0x07A4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       WeaponAnim_PutDown;                               		// 0x07B4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       WeaponAnim_Equip;                                 		// 0x07BC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    EnemyImpactSound_Local;                           		// 0x07C4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    EnemyImpactSound_Remote;                          		// 0x07CC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    VictimImpactSound_Local;                          		// 0x07D4 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71459 ];

		return pClassPointer;
	};

	bool OverrideViewRotation ( struct FRotator* WeaponViewRotation );
	bool OverrideViewLocation ( struct FVector* WeaponViewLocation );
	bool OverrideViewSocketRotation ( struct FName* WeaponViewSocket );
	bool OverrideViewSocket ( struct FName* WeaponViewSocket );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	bool CanPlayerSprint ( );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	bool CanDrawWeaponCrosshair ( );
	void PlayWeaponAnim ( struct FName InAnimName, float InAnimDuration );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void AnnouncePickup ( class APawn* Other );
	void WeaponPlaySound ( class UAkEvent* Sound, float NoiseLoudness );
	void PlayFiringSound ( );
	void FireAmmunition ( );
	bool CanThrow ( );
	void SetSlotNumber ( int NewSlotNumber );
	int GetSlotNumber ( );
	bool IsQuickSlotable ( );
	float GetNumStacksToAdd ( );
	struct FString GetInventoryDesc ( );
	struct FString GetInventoryName ( );
	int GetInventoryID ( );
	float GetWeight ( );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits, float HeadShot );
	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList, float* fHeadShot );
	void DetachWeapon ( );
	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void PostBeginPlay ( );
	class UClass* GetInvClass ( );
};

UClass* ANWeap::pClassPointer = NULL;

// Class NetherGame.NWeapRanged
// 0x00E8 (0x08C4 - 0x07DC)
class ANWeapRanged : public ANWeap
{
public:
	int                                                ClipSize;                                         		// 0x07DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    ReloadRotationOffset;                             		// 0x07E0 (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              CrosshairScaling_Src;                             		// 0x07EC (0x0004) [0x0000000000000000]              
	float                                              CrosshairScaling_Dst;                             		// 0x07F0 (0x0004) [0x0000000000000000]              
	float                                              CrosshairInterpDuration_Current;                  		// 0x07F4 (0x0004) [0x0000000000000000]              
	float                                              CrosshairInterpDuration_Max;                      		// 0x07F8 (0x0004) [0x0000000000000000]              
	struct FName                                       WeaponAnim_Reload;                                		// 0x07FC (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       WeaponAnim_Reload_Intro;                          		// 0x0804 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       WeaponAnim_Reload_Outro;                          		// 0x080C (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bUseSingleReload : 1;                             		// 0x0814 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bCancelReload : 1;                                		// 0x0814 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsInBurst : 1;                                   		// 0x0814 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                SingleReload_CurrentClip;                         		// 0x0818 (0x0004) [0x0000000000000000]              
	float                                              ReloadIntroDuration;                              		// 0x081C (0x0004) [0x0000000000000000]              
	float                                              ReloadOutroDuration;                              		// 0x0820 (0x0004) [0x0000000000000000]              
	float                                              Spread_Desired;                                   		// 0x0824 (0x0004) [0x0000000000000000]              
	float                                              Spread_Base;                                      		// 0x0828 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpreadScalar_Standing;                            		// 0x082C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpreadScalar_Crouch;                              		// 0x0830 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpreadScalar_Crawl;                               		// 0x0834 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpreadScalar_Moving;                              		// 0x0838 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Spread_FireIncrease;                              		// 0x083C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Spread_DeltaInterp;                               		// 0x0840 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Spread_Min;                                       		// 0x0844 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Spread_Max;                                       		// 0x0848 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UCameraShake*                                WeapFireCameraShakeNonZoomed;                     		// 0x084C (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UCameraShake*                                WeapFireCameraShakeZoomed;                        		// 0x0854 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RangedFireType;                                   		// 0x085C (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                BurstShots_Max;                                   		// 0x0860 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                BurstShots_Current;                               		// 0x0864 (0x0004) [0x0000000000000000]              
	int                                                MinAmmoPickup;                                    		// 0x0868 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxAmmoPickup;                                    		// 0x086C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Price;                                            		// 0x0870 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ResalePrice;                                      		// 0x0874 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FVector >                           IKRecoil_AmplitudeRot;                            		// 0x0878 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FVector >                           IKRecoil_AmplitudeLoc;                            		// 0x0888 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              IKRecoil_Duration;                                		// 0x0898 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     IKLeftHand_EffectorLocation;                      		// 0x089C (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    AimRecoil_ViewOffset;                             		// 0x08A8 (0x000C) [0x0000000000000000]              
	float                                              AimRecoil_OffsetInterpSpeed;                      		// 0x08B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AimRecoil_PitchOffset;                            		// 0x08B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    WeaponEmptySound;                                 		// 0x08BC (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71458 ];

		return pClassPointer;
	};

	int GetItemType ( );
	void eventStopMuzzleFlash ( );
	void FireAmmunition ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ReloadWeapon ( int ReloadAmount );
	struct FVector GetEffectLocation ( );
	void eventTick ( float DeltaTime );
	float GetPostureSpreadScalar ( );
	void DebugDrawSpread ( );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	struct FRotator GetWeaponBaseAim ( struct FVector StartFireLoc );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	struct FVector eventGetMuzzleLoc ( );
	struct FVector eventGetPhysicalFireStartLoc ( struct FVector AimDir );
	bool IsUnloadable ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void ClearGun ( );
	int AddAmmo ( int Amount );
	void WeaponEmpty ( );
	void ClientAttemptReload ( );
	void ServerAttemptReload ( );
	bool CanReload ( );
	bool IsReloading ( );
	void UpdateIKRecoil ( int Num );
	void OnPawnSwitchedPerspective ( );
	void LowerWeapon ( );
	void EndFire ( unsigned char FireModeNum );
	void BeginFire ( unsigned char FireModeNum );
	float GetInstantHitDamage ( int FireMode );
	int GetReserveAmmo ( );
	int GetClipSize ( );
	void Activate ( );
	int GetInventoryCount ( );
	void eventPostBeginPlay ( );
};

UClass* ANWeapRanged::pClassPointer = NULL;

// Class NetherGame.NAttachment_AA12
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_AA12 : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71484 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_AA12::pClassPointer = NULL;

// Class NetherGame.NRifleMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UNRifleMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71494 ];

		return pClassPointer;
	};

};

UClass* UNRifleMuzzleFlashLight::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Ironsight
// 0x0020 (0x08E4 - 0x08C4)
class ANWeapRanged_Ironsight : public ANWeapRanged
{
public:
	float                                              SpreadScalarScoped_Stand;                         		// 0x08C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpreadScalarScoped_Crouch;                        		// 0x08C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpreadScalarScoped_Crawl;                         		// 0x08CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DofFocusDistance;                                 		// 0x08D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       IronsightsAimSocket;                              		// 0x08D4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       IronsightViewSocket;                              		// 0x08DC (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71500 ];

		return pClassPointer;
	};

	bool CanPlayerSprint ( );
	void ShakeView ( );
	bool OverrideViewRotation ( struct FRotator* WeaponViewRotation );
	bool OverrideViewLocation ( struct FVector* WeaponViewLocation );
	struct FRotator GetWeaponBaseAim ( struct FVector StartTrace );
	struct FVector InstantFireStartTrace ( );
	bool HasSocket ( struct FName InSocketName );
	bool CanDrawWeaponCrosshair ( );
	void eventSetPosition ( class AUDKPawn* Holder );
	void OnPawnSwitchedPerspective ( );
	bool CheckZoom ( unsigned char FireModeNum );
	void EndZoom ( class AUTPlayerController* PC );
	void StartZoom ( class AUTPlayerController* PC );
	void ServerCheckMyZoom ( );
	float GetPostureSpreadScalar ( );
	void CheckMyZoom ( );
	bool IsZoomed ( );
	unsigned char GetZoomedState ( );
	void LowerWeapon ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void Activate ( );
	void DeactivateZoom ( );
	void EndFire ( unsigned char FireModeNum );
	void PostBeginPlay ( );
};

UClass* ANWeapRanged_Ironsight::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Rifle
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_Rifle : public ANWeapRanged_Ironsight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71499 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapRanged_Rifle::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Shotgun
// 0x0010 (0x08F4 - 0x08E4)
class ANWeapRanged_Shotgun : public ANWeapRanged_Rifle
{
public:
	TArray< struct FVector2D >                         PelletSpread;                                     		// 0x08E4 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71498 ];

		return pClassPointer;
	};

	void DebugDrawSpread ( );
	float GetInstantHitDamage ( int FireMode );
	void FireAllPellets ( struct FVector StartLocation, struct FRotator InAimRot, unsigned char FireModeNum, struct FImpactInfo* OutImpactInfo );
	void CustomFire ( );
	void PostBeginPlay ( );
};

UClass* ANWeapRanged_Shotgun::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_AA12
// 0x0000 (0x08F4 - 0x08F4)
class ANWeapRanged_AA12 : public ANWeapRanged_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71497 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_AA12::pClassPointer = NULL;

// Class NetherGame.NAttachment_Melee
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Melee : public ANAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71501 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Melee::pClassPointer = NULL;

// Class NetherGame.NAttachment_Axe
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Axe : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71505 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Axe::pClassPointer = NULL;

// Class NetherGame.NWeapMelee
// 0x004C (0x0828 - 0x07DC)
class ANWeapMelee : public ANWeap
{
public:
	struct FVector                                     MeleeExtents;                                     		// 0x07DC (0x000C) [0x0000000000000000]              
	float                                              ChargeDuration_Min;                               		// 0x07E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ChargeDuration_Current;                           		// 0x07EC (0x0004) [0x0000000000000000]              
	float                                              Damage_Base;                                      		// 0x07F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DamageChargeScalar_Current;                       		// 0x07F4 (0x0004) [0x0000000000000000]              
	float                                              DamageChargeScalar_PerSec;                        		// 0x07F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DamageChargeScalar_Max;                           		// 0x07FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bStartedChargeAnim : 1;                           		// 0x0800 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanFire : 1;                                     		// 0x0800 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWeakSwing : 1;                                   		// 0x0800 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              AnimDuration;                                     		// 0x0804 (0x0004) [0x0000000000000000]              
	float                                              ExhustedDamageScalar;                             		// 0x0808 (0x0004) [0x0000000000000000]              
	TArray< struct FImpactInfo >                       HitEnemiesList;                                   		// 0x080C (0x0010) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	int                                                HitEnemies_Max;                                   		// 0x081C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumHitBoxChecks_Current;                          		// 0x0820 (0x0004) [0x0000000000000000]              
	int                                                NumHitBoxChecks_Max;                              		// 0x0824 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71509 ];

		return pClassPointer;
	};

	int GetItemType ( );
	float CalculateMeleeCritical ( class AActor* HitActor, struct FVector RayDir );
	void InstantFire ( );
	bool IsBlocking ( );
	bool IsInChargedAttack ( );
	struct FVector InstantFireStartTrace ( );
	void HandleFinishedFiring ( );
	void ServerCancelPendingAction ( );
	void CancelPendingAction ( );
	void EndFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	float GetInstantHitDamage ( int FireMode );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	bool HasAnyAmmo ( );
	void Activate ( );
	void PostBeginPlay ( );
};

UClass* ANWeapMelee::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Axe
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Axe : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71508 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Axe::pClassPointer = NULL;

// Class NetherGame.NAttachment_Bat
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Bat : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71510 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Bat::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Bat
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Bat : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71513 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Bat::pClassPointer = NULL;

// Class NetherGame.NAttachment_BattleAxe
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_BattleAxe : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71514 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_BattleAxe::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_BattleAxe
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_BattleAxe : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71517 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_BattleAxe::pClassPointer = NULL;

// Class NetherGame.NAttachment_Bolo
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Bolo : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71518 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Bolo::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Bolo
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Bolo : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71521 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Bolo::pClassPointer = NULL;

// Class NetherGame.NAttachment_Carbine
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_Carbine : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71522 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Carbine::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Carbine
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_Carbine : public ANWeapRanged_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71530 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_Carbine::pClassPointer = NULL;

// Class NetherGame.NAttachment_Crowbar
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Crowbar : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71531 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Crowbar::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Crowbar
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Crowbar : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71534 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Crowbar::pClassPointer = NULL;

// Class NetherGame.NAttachment_DesertEagle
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_DesertEagle : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71535 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_DesertEagle::pClassPointer = NULL;

// Class NetherGame.NPistolMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UNPistolMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71541 ];

		return pClassPointer;
	};

};

UClass* UNPistolMuzzleFlashLight::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Pistol
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_Pistol : public ANWeapRanged_Ironsight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71544 ];

		return pClassPointer;
	};

	int GetItemType ( );
	void PostBeginPlay ( );
};

UClass* ANWeapRanged_Pistol::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_DesertEagle
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_DesertEagle : public ANWeapRanged_Pistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71543 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_DesertEagle::pClassPointer = NULL;

// Class NetherGame.NAttachment_EastSword
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_EastSword : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71545 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_EastSword::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_EastSword
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_EastSword : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71548 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_EastSword::pClassPointer = NULL;

// Class NetherGame.NAttachment_Glock17
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_Glock17 : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71549 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Glock17::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Glock
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_Glock : public ANWeapRanged_Pistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71554 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_Glock::pClassPointer = NULL;

// Class NetherGame.NAttachment_Hands
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Hands : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71555 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Hands::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Hands
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Hands : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71558 ];

		return pClassPointer;
	};

	int GetBackpackSlotCapacity ( );
	void SetSlotNumber ( int NewSlotNumber );
	int GetSlotNumber ( );
	int GetItemType ( );
	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Hands::pClassPointer = NULL;

// Class NetherGame.NAttachment_HolyCrossbow
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_HolyCrossbow : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71559 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_HolyCrossbow::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_HolyCrossbow
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_HolyCrossbow : public ANWeapRanged_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71562 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_HolyCrossbow::pClassPointer = NULL;

// Class NetherGame.NAttachment_Katana
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Katana : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71563 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Katana::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Katana
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Katana : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71566 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Katana::pClassPointer = NULL;

// Class NetherGame.NAttachment_Knife
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Knife : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71567 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Knife::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Knife
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Knife : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71570 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Knife::pClassPointer = NULL;

// Class NetherGame.NAttachment_Mach9
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_Mach9 : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71571 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Mach9::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Mach9
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_Mach9 : public ANWeapRanged_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71575 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_Mach9::pClassPointer = NULL;

// Class NetherGame.NAttachment_Machete
// 0x0000 (0x03F4 - 0x03F4)
class ANAttachment_Machete : public ANAttachment_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71576 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Machete::pClassPointer = NULL;

// Class NetherGame.NWeapMelee_Machete
// 0x0000 (0x0828 - 0x0828)
class ANWeapMelee_Machete : public ANWeapMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71579 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ANWeapMelee_Machete::pClassPointer = NULL;

// Class NetherGame.NAttachment_RAB47
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_RAB47 : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71580 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_RAB47::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_RAB47
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_RAB47 : public ANWeapRanged_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71585 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_RAB47::pClassPointer = NULL;

// Class NetherGame.NAttachment_RugerMini
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_RugerMini : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71586 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_RugerMini::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Sniper
// 0x0030 (0x0914 - 0x08E4)
class ANWeapRanged_Sniper : public ANWeapRanged_Rifle
{
public:
	class UAkEvent*                                    SniperBreathSoundStart;                           		// 0x08E4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    SniperBreathSoundEnd;                             		// 0x08EC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    SniperBreathInhale;                               		// 0x08F4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    SniperBreathExhale;                               		// 0x08FC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   AlphaZero;                                        		// 0x0904 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UMaterialInstanceConstant*                   AlphaScope;                                       		// 0x090C (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71593 ];

		return pClassPointer;
	};

	void TakeOffMaterial ( );
	void EndZoom ( class AUTPlayerController* PC );
	void SniperReleaseBreath ( );
	void SniperHoldBreath ( );
	void PutOnMaterial ( );
	void StartZoom ( class AUTPlayerController* PC );
	void PostBeginPlay ( );
};

UClass* ANWeapRanged_Sniper::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_RugerMini
// 0x0000 (0x0914 - 0x0914)
class ANWeapRanged_RugerMini : public ANWeapRanged_Sniper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71592 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_RugerMini::pClassPointer = NULL;

// Class NetherGame.NAttachment_Spas12
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_Spas12 : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71594 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Spas12::pClassPointer = NULL;

// Class NetherGame.NShotgunMuzzleFlashLight
// 0x0000 (0x0270 - 0x0270)
class UNShotgunMuzzleFlashLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71597 ];

		return pClassPointer;
	};

};

UClass* UNShotgunMuzzleFlashLight::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Spas12
// 0x0000 (0x08F4 - 0x08F4)
class ANWeapRanged_Spas12 : public ANWeapRanged_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71598 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_Spas12::pClassPointer = NULL;

// Class NetherGame.NAttachment_UMP45
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_UMP45 : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71599 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_UMP45::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_UMP45
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_UMP45 : public ANWeapRanged_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71602 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_UMP45::pClassPointer = NULL;

// Class NetherGame.NAttachment_Uzi
// 0x0000 (0x0404 - 0x0404)
class ANAttachment_Uzi : public ANAttachment_Ranged
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71603 ];

		return pClassPointer;
	};

};

UClass* ANAttachment_Uzi::pClassPointer = NULL;

// Class NetherGame.NWeapRanged_Uzi
// 0x0000 (0x08E4 - 0x08E4)
class ANWeapRanged_Uzi : public ANWeapRanged_Pistol
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71606 ];

		return pClassPointer;
	};

};

UClass* ANWeapRanged_Uzi::pClassPointer = NULL;

// Class NetherGame.NWardrobe
// 0x0034 (0x0344 - 0x0310)
class ANWardrobe : public AInventory
{
public:
	struct FString                                     ItemDesc;                                         		// 0x0310 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              Weight;                                           		// 0x0320 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                InvType;                                          		// 0x0324 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SlotNumber;                                       		// 0x0328 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ANetherPawn*                                 OwningPawn;                                       		// 0x032C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0334 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      OwnerMesh;                                        		// 0x033C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71607 ];

		return pClassPointer;
	};

	void AnnouncePickup ( class APawn* Other );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	void SetSlotNumber ( int NewSlotNumber );
	bool IsDroppable ( );
	int GetSlotNumber ( );
	struct FString GetInventoryDesc ( );
	struct FString GetInventoryName ( );
	int GetInventoryID ( );
	float GetWeight ( );
	bool ConsumeItem ( class APawn* Consumer );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void AttachTo ( class ANetherPawn* OwnerPawn, struct FName AttachmentSocket );
	void SetSkin ( class UMaterial* NewMaterial );
	void eventPostBeginPlay ( );
	class UClass* GetInvClass ( );
};

UClass* ANWardrobe::pClassPointer = NULL;

// Class NetherGame.NBackpack
// 0x0004 (0x0348 - 0x0344)
class ANBackpack : public ANWardrobe
{
public:
	int                                                SlotsContained;                                   		// 0x0344 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71851 ];

		return pClassPointer;
	};

	void UpdateVisibility ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetSlotNumber ( int NewSlotNumber );
	int GetItemType ( );
	bool IsQuickSlotable ( );
	bool IsStackable ( );
	bool IsDroppable ( );
	float GetWeight ( );
};

UClass* ANBackpack::pClassPointer = NULL;

// Class NetherGame.NBackpack_ExtraLarge
// 0x0000 (0x0348 - 0x0348)
class ANBackpack_ExtraLarge : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71876 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANBackpack_ExtraLarge::pClassPointer = NULL;

// Class NetherGame.NBackpack_Large
// 0x0000 (0x0348 - 0x0348)
class ANBackpack_Large : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71881 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANBackpack_Large::pClassPointer = NULL;

// Class NetherGame.NBackpack_Medium
// 0x0000 (0x0348 - 0x0348)
class ANBackpack_Medium : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71886 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANBackpack_Medium::pClassPointer = NULL;

// Class NetherGame.NBackpack_Military
// 0x0000 (0x0348 - 0x0348)
class ANBackpack_Military : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71891 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANBackpack_Military::pClassPointer = NULL;

// Class NetherGame.NBackpack_MilitaryLarge
// 0x0000 (0x0348 - 0x0348)
class ANBackpack_MilitaryLarge : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71896 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANBackpack_MilitaryLarge::pClassPointer = NULL;

// Class NetherGame.NBackpack_Small
// 0x0000 (0x0348 - 0x0348)
class ANBackpack_Small : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71901 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANBackpack_Small::pClassPointer = NULL;

// Class NetherGame.NBotEnemy_Shrieker
// 0x0018 (0x0594 - 0x057C)
class ANBotEnemy_Shrieker : public ANBotEnemy_Teleporter
{
public:
	class AShriekerPawn*                               Spawn;                                            		// 0x057C (0x0008) [0x0000000000000000]              
	float                                              RunAwaySpeed;                                     		// 0x0584 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              RunAwayDistance;                                  		// 0x0588 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CallFriendsCoolDown;                              		// 0x058C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CallFriendsTimeStamp;                             		// 0x0590 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72159 ];

		return pClassPointer;
	};

	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ANBotEnemy_Shrieker::pClassPointer = NULL;

// Class NetherGame.NCash
// 0x0014 (0x0324 - 0x0310)
class ANCash : public AInventory
{
public:
	int                                                CashAmount;                                       		// 0x0310 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemDesc;                                         		// 0x0314 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72203 ];

		return pClassPointer;
	};

	void AnnouncePickup ( class APawn* Other );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	struct FString GetInventoryDesc ( );
	struct FString GetInventoryName ( );
	bool ConsumeItem ( class APawn* Consumer );
	bool ShouldConsumeImmediately ( );
	void SetCash ( int NewAmount );
};

UClass* ANCash::pClassPointer = NULL;

// Class NetherGame.NCash_ExtraLarge
// 0x0000 (0x0324 - 0x0324)
class ANCash_ExtraLarge : public ANCash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72423 ];

		return pClassPointer;
	};

};

UClass* ANCash_ExtraLarge::pClassPointer = NULL;

// Class NetherGame.NCash_Large
// 0x0000 (0x0324 - 0x0324)
class ANCash_Large : public ANCash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72426 ];

		return pClassPointer;
	};

};

UClass* ANCash_Large::pClassPointer = NULL;

// Class NetherGame.NCash_Medium
// 0x0000 (0x0324 - 0x0324)
class ANCash_Medium : public ANCash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72429 ];

		return pClassPointer;
	};

};

UClass* ANCash_Medium::pClassPointer = NULL;

// Class NetherGame.NCash_Small
// 0x0000 (0x0324 - 0x0324)
class ANCash_Small : public ANCash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72432 ];

		return pClassPointer;
	};

};

UClass* ANCash_Small::pClassPointer = NULL;

// Class NetherGame.NDataStore_GameSearch
// 0x0000 (0x00F8 - 0x00F8)
class UNDataStore_GameSearch : public UUTDataStore_GameSearchDM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72437 ];

		return pClassPointer;
	};

};

UClass* UNDataStore_GameSearch::pClassPointer = NULL;

// Class NetherGame.NetherGameSearch
// 0x0000 (0x014C - 0x014C)
class UNetherGameSearch : public UOnlineGameSearch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72439 ];

		return pClassPointer;
	};

};

UClass* UNetherGameSearch::pClassPointer = NULL;

// Class NetherGame.NetherGameSettings
// 0x0014 (0x00F8 - 0x00E4)
class UNetherGameSettings : public UUDKGameSettingsCommon
{
public:
	int                                                MaxPlayers;                                       		// 0x00E4 (0x0004) [0x0000000040000000]              ( CPF_EditInlineNotify )
	struct FString                                     SteamServerId;                                    		// 0x00E8 (0x0010) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72440 ];

		return pClassPointer;
	};

	struct FString GetServerDescription ( );
	void UpdateFromURL ( class AGameInfo* Game, struct FString* URL );
};

UClass* UNetherGameSettings::pClassPointer = NULL;

// Class NetherGame.NetherCamEffect_Damaged
// 0x0000 (0x02D4 - 0x02D4)
class ANetherCamEffect_Damaged : public AEmitterCameraLensEffectBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72447 ];

		return pClassPointer;
	};

};

UClass* ANetherCamEffect_Damaged::pClassPointer = NULL;

// Class NetherGame.NDmgType_Acid
// 0x0000 (0x01A0 - 0x01A0)
class UNDmgType_Acid : public UNDmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72450 ];

		return pClassPointer;
	};

};

UClass* UNDmgType_Acid::pClassPointer = NULL;

// Class NetherGame.NetherCamEffect_Acid
// 0x0000 (0x02D4 - 0x02D4)
class ANetherCamEffect_Acid : public AEmitterCameraLensEffectBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72452 ];

		return pClassPointer;
	};

};

UClass* ANetherCamEffect_Acid::pClassPointer = NULL;

// Class NetherGame.NDmgType_Hunger
// 0x0000 (0x01A0 - 0x01A0)
class UNDmgType_Hunger : public UNDmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72458 ];

		return pClassPointer;
	};

};

UClass* UNDmgType_Hunger::pClassPointer = NULL;

// Class NetherGame.NetherGame
// 0x007C (0x0744 - 0x06C8)
class ANetherGame : public AUTGame
{
public:
	struct FString                                     KilledByText_Nether;                              		// 0x06C8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KilledByText_Player;                              		// 0x06D8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KilledByText_Self;                                		// 0x06E8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                MessageColorDeath;                                		// 0x06F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MessageColorSuicide;                              		// 0x06FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MovingAverageTick;                                		// 0x0700 (0x0004) [0x0000000000000000]              
	class ANetherSpawnManager_Enemies*                 SpawnManager_Enemies;                             		// 0x0704 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class ANetherSpawnManager_Pickups*                 SpawnManager_Pickups;                             		// 0x070C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class ANetherObjectiveManager*                     ObjectiveManager;                                 		// 0x0714 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class ANetherDayNightCycleManager*                 DayNightManager;                                  		// 0x071C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineSubsystemNether*                      NetherOnlineSub;                                  		// 0x0724 (0x0008) [0x0000000000000000]              
	class ANetherServerDocument_Store*                 StoreDoc;                                         		// 0x072C (0x0008) [0x0000000000000000]              
	class ANetherServerDocument_Server*                ServerDoc;                                        		// 0x0734 (0x0008) [0x0000000000000000]              
	class ANetherServerDocument_ServerSettings*        SettingsDoc;                                      		// 0x073C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72511 ];

		return pClassPointer;
	};

	void AddDefaultInventory ( class APawn* P );
	bool NeedPlayers ( );
	void BroadcastChatMessage ( struct FString Message, int HexColor );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void RestartPlayer ( class AController* aPlayer );
	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	void PreBeginPlay ( );
	void Logout ( class AController* Exiting );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void ServerHeartbeat ( );
	void SendServerMessage ( );
	void ShutdownServer ( );
	void PostBeginPlay ( );
	void eventForceKickPlayer ( class APlayerController* PC, struct FString KickReason );
	void SpawnClassOverrideDocuments ( );
	void ReplicateStreamingStatus ( class APlayerController* PC );
	void eventTick ( float DeltaTime );
	void PostBigMessageToAllPlayers ( struct FString Message );
	bool CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void ScoreFlag ( class AController* Scorer, class AUTCTFFlag* theFlag );
	void ScoreKill ( class AController* Killer, class AController* Other );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	void CheckLives ( );
};

UClass* ANetherGame::pClassPointer = NULL;

// Class NetherGame.NetherServerDocument_ServerSettings
// 0x001C (0x02BC - 0x02A0)
class ANetherServerDocument_ServerSettings : public ANetherServerDocument
{
public:
	float                                              PlayerDocumentSaveInterval;                       		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              GoldCurrencyCheckInterval;                        		// 0x02A4 (0x0004) [0x0000000000000000]              
	float                                              ServerHeartbeatInterval;                          		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                BloodPointDecayBase;                              		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                BloodPointDecayMultiplier;                        		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                MaxBloodPoints;                                   		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              NumberOfSpawnAttempts;                            		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72513 ];

		return pClassPointer;
	};

};

UClass* ANetherServerDocument_ServerSettings::pClassPointer = NULL;

// Class NetherGame.NDocument_CharacterInv
// 0x0184 (0x043C - 0x02B8)
class ANDocument_CharacterInv : public ANetherServerCharacterDocument
{
public:
	int                                                BackpackItem;                                     		// 0x02B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                InventoryItems[ 0x28 ];                           		// 0x02BC (0x00A0) [0x0000000000000020]              ( CPF_Net )
	int                                                InventoryCount[ 0x28 ];                           		// 0x035C (0x00A0) [0x0000000000000020]              ( CPF_Net )
	int                                                QuickSlotItems[ 0x4 ];                            		// 0x03FC (0x0010) [0x0000000000000020]              ( CPF_Net )
	int                                                RangedItem;                                       		// 0x040C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                RangedCount;                                      		// 0x0410 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                SidearmItem;                                      		// 0x0414 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                SidearmCount;                                     		// 0x0418 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MeleeItem;                                        		// 0x041C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                HeadItem;                                         		// 0x0420 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                LArmItem;                                         		// 0x0424 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                RArmItem;                                         		// 0x0428 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CharacterTemplateID;                              		// 0x042C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CharacterHeadSelection;                           		// 0x0430 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CharacterBodySelection;                           		// 0x0434 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CharacterLegsSelection;                           		// 0x0438 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72617 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void ResetToDefault ( );
	void SetCharacterTemplateID ( int TemplateID, int Head, int Body, int Legs );
	int GetItemCount ( int SlotNum );
	int GetItemID ( int SlotNum );
	int GetQuickslotNumber ( int ItemId );
	bool SetQuickslotItem ( int Slot, int ItemId );
	void SetSlot ( int SlotNum, int ItemId, int ItemCount, unsigned long bForceSave );
	void ClearSlot ( int SlotNum, unsigned long bForceSave );
	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
};

UClass* ANDocument_CharacterInv::pClassPointer = NULL;

// Class NetherGame.NDocument_PlayerInv
// 0x00C8 (0x037C - 0x02B4)
class ANDocument_PlayerInv : public ANetherServerPlayerDocument
{
public:
	int                                                GlobalInventory[ 0x14 ];                          		// 0x02B4 (0x0050) [0x0000000000000020]              ( CPF_Net )
	int                                                GlobalInventoryCount[ 0x14 ];                     		// 0x0304 (0x0050) [0x0000000000000020]              ( CPF_Net )
	int                                                PurchasedTemplates[ 0xA ];                        		// 0x0354 (0x0028) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72866 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	int GetAvailableTemplateSlots ( );
	void AddPurchasedCharacterTemplate ( int TemplateID );
	bool OwnsCharacterTemplate ( int TemplateID );
	int GetItemCount ( int Slot );
	int GetItemID ( int Slot );
	void SetSlot ( int Slot, int ItemId, int ItemCount, unsigned long bForceSave );
	void ClearSlot ( int SlotNum, unsigned long bForceSave );
	void InitForPlayer ( class ANetherPlayerController* PC, int CharacterIndex );
};

UClass* ANDocument_PlayerInv::pClassPointer = NULL;

// Class NetherGame.NetherCamEffect_Blocked
// 0x0000 (0x02D4 - 0x02D4)
class ANetherCamEffect_Blocked : public AEmitterCameraLensEffectBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73193 ];

		return pClassPointer;
	};

};

UClass* ANetherCamEffect_Blocked::pClassPointer = NULL;

// Class NetherGame.NetherThirdPersonCameraMode
// 0x0017 (0x026C - 0x0255)
class UNetherThirdPersonCameraMode : public UGameThirdPersonCameraMode
{
public:
	float                                              CamViewPitchMin;                                  		// 0x0258 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CamViewPitchMax;                                  		// 0x025C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     DefaultOffset;                                    		// 0x0260 (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73201 ];

		return pClassPointer;
	};

	struct FVector eventAdjustViewOffset ( class APawn* P, struct FVector Offset );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
};

UClass* UNetherThirdPersonCameraMode::pClassPointer = NULL;

// Class NetherGame.NetherCameraMode_SocketIronsights
// 0x0000 (0x0258 - 0x0258)
class UNetherCameraMode_SocketIronsights : public UNetherCameraMode_Socket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73202 ];

		return pClassPointer;
	};

	float GetDesiredFOV ( class APawn* ViewedPawn );
};

UClass* UNetherCameraMode_SocketIronsights::pClassPointer = NULL;

// Class NetherGame.NetherFrontendGame
// 0x0008 (0x04E0 - 0x04D8)
class ANetherFrontendGame : public AGameInfo
{
public:
	class UOnlineSubsystemNether*                      NetherOnlineSub;                                  		// 0x04D8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73282 ];

		return pClassPointer;
	};

	void eventPostLogin ( class APlayerController* NewPlayer );
};

UClass* ANetherFrontendGame::pClassPointer = NULL;

// Class NetherGame.NetherCAPUI
// 0x0028 (0x02EC - 0x02C4)
class UNetherCAPUI : public UNetherMoviePlayer
{
public:
	class UGFxObject*                                  ParentObj;                                        		// 0x02C4 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  Template1;                                        		// 0x02CC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  Template2;                                        		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  ArmsCategory;                                     		// 0x02DC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  TorsoCategory;                                    		// 0x02E4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73333 ];

		return pClassPointer;
	};

	void HideCAPScreen ( );
	void ShowCAPScreen ( );
	void AS_StartClosing ( );
	void BuildOnComplete ( );
	void LeftMouseDown ( float X, float Y );
	void CloseCAPScreen ( );
	void StartClosing ( );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherCAPUI::pClassPointer = NULL;

// Class NetherGame.NetherCharacterUI
// 0x01C0 (0x0484 - 0x02C4)
class UNetherCharacterUI : public UNetherMoviePlayer
{
public:
	class UGFxObject*                                  ParentObj;                                        		// 0x02C4 (0x0008) [0x0000000000000000]              
	TArray< class UGFxStatWidget* >                    StatWidgets;                                      		// 0x02CC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StatPointsString;                                 		// 0x02DC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PlayersKilledString;                              		// 0x02EC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     EnemiesKilledString;                              		// 0x02FC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BanditsKilledString;                              		// 0x030C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CiviliansKilledString;                            		// 0x031C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TimePlayedString;                                 		// 0x032C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ExperienceString;                                 		// 0x033C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GunsAbility0String;                               		// 0x034C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GunsAbility1String;                               		// 0x035C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GunsAbility2String;                               		// 0x036C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StaminaAbility0String;                            		// 0x037C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StaminaAbility1String;                            		// 0x038C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StaminaAbility2String;                            		// 0x039C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SurvivalAbility0String;                           		// 0x03AC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SurvivalAbility1String;                           		// 0x03BC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SurvivalAbility2String;                           		// 0x03CC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrengthAbility0String;                           		// 0x03DC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrengthAbility1String;                           		// 0x03EC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StrengthAbility2String;                           		// 0x03FC (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StealthAbility0String;                            		// 0x040C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StealthAbility1String;                            		// 0x041C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StealthAbility2String;                            		// 0x042C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MeleeAbility0String;                              		// 0x043C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MeleeAbility1String;                              		// 0x044C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MeleeAbility2String;                              		// 0x045C (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UGFxToolTip*                                 ToolTip;                                          		// 0x046C (0x0008) [0x0000000000000000]              
	TArray< int >                                      AbilityLevels;                                    		// 0x0474 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73353 ];

		return pClassPointer;
	};

	struct FString GetAbilityDescriptionString ( unsigned char Attrib, int Level );
	void HideCharacterScreen ( );
	void ShowCharacterScreen ( );
	void AS_SetGlobalData ( class UGFxObject* Data );
	void AS_StartClosing ( );
	void RefreshUI ( );
	void ShowToolTip ( float X, float Y, struct FString DescriptionText );
	int AbilityNodeClicked ( class UGFxButton* Button );
	int MinusButtonPressed ( class UGFxButton* MinusButton );
	int PlusButtonPressed ( class UGFxButton* PlusButton );
	void LeftMouseDown ( float X, float Y );
	void StartClosing ( );
	void CloseCharacter ( );
	void InitStatWidget ( struct FString WidgetPath, unsigned char AttributeType );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherCharacterUI::pClassPointer = NULL;

// Class NetherGame.NetherCheatManager
// 0x0070 (0x0110 - 0x00A0)
class UNetherCheatManager : public UGameCheatManager
{
public:
	TArray< class UClass* >                            AllWeapons_Melee;                                 		// 0x00A0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            AllWeapons_Ranged;                                		// 0x00B0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            HealthConsumables;                                		// 0x00C0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            EnergyConsumables;                                		// 0x00D0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            AllBackpacks;                                     		// 0x00E0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            AllAmmo;                                          		// 0x00F0 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            AllPackages;                                      		// 0x0100 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73445 ];

		return pClassPointer;
	};

	void SpeedGod ( );
	void ValidateTerritoryVolumes ( );
	void ToggleDebugPickupFinder ( );
	void KillNearbyEnemies ( );
	void TakeDamage ( int DamageAmount );
	void GiveGold ( int Amount );
	void GiveCash ( int CashToGive );
	void DebugResetServerDocs ( );
	void GiveAllWeapons_Ranged ( );
	void GiveAllWeapons_Melee ( );
	void GiveAllWeapons ( );
	void GiveBiggestBackpack ( );
	void GiveXP ( int XPToGive );
	void Invisible ( unsigned long B );
	void ToggleAggroDisplay ( unsigned long bSight, unsigned long bSound );
	void ToggleGlobalInventory ( );
	void ToggleDebugAim ( );
	void ToggleDebugSpawn ( unsigned long bPrintToScreen );
	void GiveAmmo ( int Amount );
	void TossItemInFrontOfPlayer ( class UClass* InvClass );
	void DebugSpawnPackages ( );
	void DebugSpawnAmmo ( );
	void DebugSpawnWings ( );
	void DebugSpawnConsumables_Health ( );
	void DebugSpawnConsumables_Energy ( );
	void DebugSpawnBackpacks ( );
	void DebugDropBackpack ( );
	void DebugDropWeapon ( );
};

UClass* UNetherCheatManager::pClassPointer = NULL;

// Class NetherGame.NHealthConsumable
// 0x0014 (0x034C - 0x0338)
class ANHealthConsumable : public ANStackableItem
{
public:
	int                                                HealthRestored_Constant;                          		// 0x0338 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                SprintRestored_Constant;                          		// 0x033C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SprintRestored_Percent;                           		// 0x0340 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    ConsumeItemSound;                                 		// 0x0344 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73452 ];

		return pClassPointer;
	};

	int GetItemType ( );
	bool IsQuickSlotable ( );
	void SetSlotNumber ( int NewSlotNumber );
	bool ConsumeItem ( class APawn* Consumer );
};

UClass* ANHealthConsumable::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable
// 0x0008 (0x0354 - 0x034C)
class ANFoodConsumable : public ANHealthConsumable
{
public:
	int                                                HungerReduction;                                  		// 0x034C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StaminaRestored;                                  		// 0x0350 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73455 ];

		return pClassPointer;
	};

	int GetItemType ( );
	bool ConsumeItem ( class APawn* Consumer );
};

UClass* ANFoodConsumable::pClassPointer = NULL;

// Class NetherGame.NPackage
// 0x001C (0x032C - 0x0310)
class ANPackage : public AInventory
{
public:
	struct FString                                     ItemDesc;                                         		// 0x0310 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              ItemWeight;                                       		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                SlotNumber;                                       		// 0x0328 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73462 ];

		return pClassPointer;
	};

	bool SaveBetweenSessions ( );
	bool CanBeStoredInGlobalInventory ( );
	void AnnouncePickup ( class APawn* Other );
	class UClass* GetInvClass ( );
	int GetItemType ( );
	void SetSlotNumber ( int NewSlotNumber );
	int GetSlotNumber ( );
	int GetInventoryCount ( );
	int GetDefaultInventoryCount ( );
	int GetInventoryID ( );
	float GetWeight ( );
	struct FString GetInventoryDesc ( );
	struct FString GetInventoryName ( );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
};

UClass* ANPackage::pClassPointer = NULL;

// Class NetherGame.NWings
// 0x0004 (0x0348 - 0x0344)
class ANWings : public ANWardrobe
{
public:
	unsigned long                                      bCurrentlyActive : 1;                             		// 0x0344 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73476 ];

		return pClassPointer;
	};

	int GetInventoryCount ( );
	void ItemRemovedFromInvManager ( );
	bool ConsumeItem ( class APawn* Consumer );
	void SetWingsActive ( unsigned long bActive );
	bool IsQuickSlotable ( );
	bool IsDroppable ( );
	int GetItemType ( );
	void UpdateAttachment ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ANWings::pClassPointer = NULL;

// Class NetherGame.NPickupFactory
// 0x0024 (0x0514 - 0x04F0)
class ANPickupFactory : public AUTPickupFactory
{
public:
	float                                              ItemWeight;                                       		// 0x04F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsStackable : 1;                                 		// 0x04F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoresPickupRules : 1;                          		// 0x04F4 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	int                                                RandomContentsCount;                              		// 0x04F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UDrawCylinderComponent*                      DebugDrawCylinder;                                		// 0x04FC (0x0008) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FScriptDelegate                             __OnPickupRecycled__Delegate;                     		// 0x0504 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73541 ];

		return pClassPointer;
	};

	void EnablePickup ( );
	void PickedUpBy ( class APawn* P );
	void SetRecycleTimer ( float InTimerDuration );
	void InitializeRecycle ( unsigned long bWasPickedUp );
	bool IsInUse ( );
	void ReleaseFromUse ( );
	void MarkForUse ( );
	int GetWeight ( );
	void SpawnCopyFor ( class APawn* Recipient );
	void InitializeContents ( int ServerRandom, float ServerWeight );
	void PostBeginPlay ( );
	bool PawnHasSight ( class APawn* Other );
	void RefreshPickupFinderDebug ( );
	void eventInitPickupMeshEffects ( );
	void OnPickupRecycled ( class ANPickupFactory* NetherPickupFactory, unsigned long bWasPickedUp );
};

UClass* ANPickupFactory::pClassPointer = NULL;

// Class NetherGame.NHealthConsumable_DoctorsBag
// 0x0000 (0x034C - 0x034C)
class ANHealthConsumable_DoctorsBag : public ANHealthConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73549 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANHealthConsumable_DoctorsBag::pClassPointer = NULL;

// Class NetherGame.NHealthConsumable_FirstAidKit
// 0x0000 (0x034C - 0x034C)
class ANHealthConsumable_FirstAidKit : public ANHealthConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73550 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANHealthConsumable_FirstAidKit::pClassPointer = NULL;

// Class NetherGame.NHealthConsumable_PainPills
// 0x0000 (0x034C - 0x034C)
class ANHealthConsumable_PainPills : public ANHealthConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73551 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANHealthConsumable_PainPills::pClassPointer = NULL;

// Class NetherGame.NHealthConsumable_Bandages
// 0x0000 (0x034C - 0x034C)
class ANHealthConsumable_Bandages : public ANHealthConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73552 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANHealthConsumable_Bandages::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable_EnergyBar
// 0x0000 (0x0354 - 0x0354)
class ANFoodConsumable_EnergyBar : public ANFoodConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73553 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANFoodConsumable_EnergyBar::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable_EnergyDrink
// 0x0000 (0x0354 - 0x0354)
class ANFoodConsumable_EnergyDrink : public ANFoodConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73554 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANFoodConsumable_EnergyDrink::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable_Rations
// 0x0000 (0x0354 - 0x0354)
class ANFoodConsumable_Rations : public ANFoodConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73555 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANFoodConsumable_Rations::pClassPointer = NULL;

// Class NetherGame.NPackage_WTOToSZ
// 0x0000 (0x032C - 0x032C)
class ANPackage_WTOToSZ : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73556 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_WTOToSZ::pClassPointer = NULL;

// Class NetherGame.NPackage_WTOToRTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_WTOToRTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73557 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_WTOToRTO::pClassPointer = NULL;

// Class NetherGame.NPackage_WTOToMTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_WTOToMTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73558 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_WTOToMTO::pClassPointer = NULL;

// Class NetherGame.NPackage_SZToWTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_SZToWTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73559 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_SZToWTO::pClassPointer = NULL;

// Class NetherGame.NPackage_SZToRTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_SZToRTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73560 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_SZToRTO::pClassPointer = NULL;

// Class NetherGame.NPackage_RTOToWTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_RTOToWTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73561 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_RTOToWTO::pClassPointer = NULL;

// Class NetherGame.NPackage_RTOToSZ
// 0x0000 (0x032C - 0x032C)
class ANPackage_RTOToSZ : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73562 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_RTOToSZ::pClassPointer = NULL;

// Class NetherGame.NPackage_RTOToMTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_RTOToMTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73563 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_RTOToMTO::pClassPointer = NULL;

// Class NetherGame.NPackage_MTOToWTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_MTOToWTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73564 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_MTOToWTO::pClassPointer = NULL;

// Class NetherGame.NPackage_MTOToSZ
// 0x0000 (0x032C - 0x032C)
class ANPackage_MTOToSZ : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73565 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_MTOToSZ::pClassPointer = NULL;

// Class NetherGame.NPackage_MTOToRTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_MTOToRTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73566 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_MTOToRTO::pClassPointer = NULL;

// Class NetherGame.NPackage_SZToMTO
// 0x0000 (0x032C - 0x032C)
class ANPackage_SZToMTO : public ANPackage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73567 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANPackage_SZToMTO::pClassPointer = NULL;

// Class NetherGame.NetherPopupUI
// 0x0074 (0x0338 - 0x02C4)
class UNetherPopupUI : public UNetherMoviePlayer
{
public:
	unsigned char                                      Id;                                               		// 0x02C4 (0x0001) [0x0000000000000000]              
	unsigned char                                      AnimationState;                                   		// 0x02C5 (0x0001) [0x0000000000000000]              
	class UGFxNetherObject*                            Container;                                        		// 0x02C8 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            MessageBody;                                      		// 0x02D0 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            MessageHeader;                                    		// 0x02D8 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            ButtonContainer;                                  		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Border;                                           		// 0x02E8 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Background;                                       		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Line;                                             		// 0x02F8 (0x0008) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              BorderPadding;                                    		// 0x0308 (0x0004) [0x0000000000000000]              
	float                                              ButtonSpacing;                                    		// 0x030C (0x0004) [0x0000000000000000]              
	float                                              PosX;                                             		// 0x0310 (0x0004) [0x0000000000000000]              
	float                                              PosY;                                             		// 0x0314 (0x0004) [0x0000000000000000]              
	TArray< class UGFxButton* >                        PopupButtons;                                     		// 0x0318 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ScaleInSpeed;                                     		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              AnimationRandomXVariance;                         		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              AnimationStartingXScale;                          		// 0x0330 (0x0004) [0x0000000000000000]              
	float                                              AnimationStartingYScale;                          		// 0x0334 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73568 ];

		return pClassPointer;
	};

	void RefreshButtonLayout ( );
	void ResizeBorder ( float NewWidth, float NewHeight );
	void SetPosition ( float NewPosX, float NewPosY );
	void AddButtonWithParams ( struct FString ButtonLabel, struct FScriptDelegate BA, class UObject* Params );
	void AddButton ( struct FString ButtonLabel, struct FScriptDelegate BA );
	void RefreshLayout ( );
	void SetPopupID ( unsigned char NewId );
	unsigned char GetID ( );
	void SetWidth ( float NewWidth );
	void SetBodyText ( struct FString BodyText );
	void SetHeaderText ( struct FString HeaderText );
	void AS_StartClosing ( );
	void LeftMouseDownCallBack ( class UIGFxClickable* ClickableElement );
	void Tick ( float DeltaTime );
	void StartClosing ( );
	void ClosePopup ( );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherPopupUI::pClassPointer = NULL;

// Class NetherGame.NetherConfirmationPopupUI
// 0x0000 (0x0338 - 0x0338)
class UNetherConfirmationPopupUI : public UNetherPopupUI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73641 ];

		return pClassPointer;
	};

};

UClass* UNetherConfirmationPopupUI::pClassPointer = NULL;

// Class NetherGame.NSeqEvent_SyncDayNightCycle
// 0x0008 (0x0178 - 0x0170)
class UNSeqEvent_SyncDayNightCycle : public USequenceEvent
{
public:
	float                                              SyncTime;                                         		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              PlayRate;                                         		// 0x0174 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73666 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* UNSeqEvent_SyncDayNightCycle::pClassPointer = NULL;

// Class NetherGame.NetherFamilyInfo
// 0x0040 (0x0284 - 0x0244)
class UNetherFamilyInfo : public UUTFamilyInfo_Liandri_Male
{
public:
	TArray< struct FVector2D >                         HeadSelections;                                   		// 0x0244 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         TorsoSelections;                                  		// 0x0254 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         LegSelections;                                    		// 0x0264 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UITag;                                            		// 0x0274 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73691 ];

		return pClassPointer;
	};

	class UMaterialInterface* GetFirstPersonArmsMaterial ( int TeamNum );
	class USkeletalMesh* GetFirstPersonArms ( );
};

UClass* UNetherFamilyInfo::pClassPointer = NULL;

// Class NetherGame.NetherFrontendPlayerPawn
// 0x0000 (0x05A0 - 0x05A0)
class ANetherFrontendPlayerPawn : public APawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73721 ];

		return pClassPointer;
	};

};

UClass* ANetherFrontendPlayerPawn::pClassPointer = NULL;

// Class NetherGame.NetherFrontendPlayerController
// 0x0000 (0x0BD4 - 0x0BD4)
class ANetherFrontendPlayerController : public ANetherPlayerControllerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73722 ];

		return pClassPointer;
	};

	void ClientLoggedIn ( );
};

UClass* ANetherFrontendPlayerController::pClassPointer = NULL;

// Class NetherGame.NetherPlayerReplicationInfo
// 0x000F (0x04BC - 0x04AD)
class ANetherPlayerReplicationInfo : public AUTPlayerReplicationInfo
{
public:
	int                                                CAPTorsoOffset;                                   		// 0x04B0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CAPLegsOffset;                                    		// 0x04B4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CAPHeadOffset;                                    		// 0x04B8 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73723 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void SeamlessTravelTo ( class APlayerReplicationInfo* NewPRI );
	void CopyProperties ( class APlayerReplicationInfo* PRI );
	class UClass* GetNFIClass ( );
};

UClass* ANetherPlayerReplicationInfo::pClassPointer = NULL;

// Class NetherGame.NetherServerDocument_Server
// 0x0040 (0x02E0 - 0x02A0)
class ANetherServerDocument_Server : public ANetherServerDocument
{
public:
	struct FString                                     ServerNextShutdownTime;                           		// 0x02A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerNextMessageTime;                            		// 0x02B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerNextMessage;                                		// 0x02C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerMOTD;                                       		// 0x02D0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73746 ];

		return pClassPointer;
	};

	void UpdateDocument ( );
	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
	void eventOnDocumentCreate ( unsigned long bWasSuccessful );
	void eventGetDocumentTags ( TArray< struct FString >* DocumentTags );
	struct FString eventGetDocumentName ( );
};

UClass* ANetherServerDocument_Server::pClassPointer = NULL;

// Class NetherGame.NetherServerDocument_Store
// 0x07E0 (0x0A80 - 0x02A0)
class ANetherServerDocument_Store : public ANetherServerDocument
{
public:
	int                                                StoreItemNormalCost[ 0xA4 ];                      		// 0x02A0 (0x0290) [0x0000000000000000]              
	int                                                StoreItemPremiumCost[ 0xA4 ];                     		// 0x0530 (0x0290) [0x0000000000000000]              
	int                                                StoreItemSalePrice[ 0xA4 ];                       		// 0x07C0 (0x0290) [0x0000000000000000]              
	int                                                StoreTemplateNormalCost[ 0x4 ];                   		// 0x0A50 (0x0010) [0x0000000000000000]              
	int                                                StoreTemplatePremiumCost[ 0x4 ];                  		// 0x0A60 (0x0010) [0x0000000000000000]              
	int                                                StoreTemplateSalePrice[ 0x4 ];                    		// 0x0A70 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73748 ];

		return pClassPointer;
	};

	bool SafeToSave ( );
};

UClass* ANetherServerDocument_Store::pClassPointer = NULL;

// Class NetherGame.NetherObjectiveManager
// 0x001C (0x02A8 - 0x028C)
class ANetherObjectiveManager : public AActor
{
public:
	TArray< class ANetherObjective* >                  Objectives;                                       		// 0x028C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANetherObjectiveContainer*                   ObjectiveTemplateContainer;                       		// 0x029C (0x0008) [0x0000000000000000]              
	float                                              WaitTime;                                         		// 0x02A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73752 ];

		return pClassPointer;
	};

	void GetObjectives ( TArray< class ANetherObjective* >* OutObjectives );
	void AddObjective ( class ANetherObjective* NObjective );
	bool AmIAllowedToSpawn ( class ANetherTerritoryVolume* VolumeToCheck );
	void InitializeObjectives ( );
	void eventSetInitialState ( );
	void PostBeginPlay ( );
};

UClass* ANetherObjectiveManager::pClassPointer = NULL;

// Class NetherGame.NetherPlayerStart
// 0x0008 (0x03BC - 0x03B4)
class ANetherPlayerStart : public APlayerStart
{
public:
	class UCylinderComponent*                          EnemyDetectionComponent;                          		// 0x03B4 (0x0008) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73841 ];

		return pClassPointer;
	};

	int GetNearbyPlayerCount ( );
	int GetNearbyEnemyCount ( );
};

UClass* ANetherPlayerStart::pClassPointer = NULL;

// Class NetherGame.NetherMenuOverlayUI
// 0x01A0 (0x0464 - 0x02C4)
class UNetherMenuOverlayUI : public UNetherMoviePlayer
{
public:
	TArray< struct FOverlaySlaveDefinition >           Slaves;                                           		// 0x02C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentSlave;                                     		// 0x02D4 (0x0001) [0x0000000000000000]              
	unsigned char                                      InitialSlave;                                     		// 0x02D5 (0x0001) [0x0000000000000000]              
	int                                                CurrentTemplate;                                  		// 0x02D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsStartScreen : 1;                               		// 0x02DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsClosing : 1;                                   		// 0x02DC (0x0004) [0x0000000000000000] [0x00000002] 
	class UGFxObject*                                  Container;                                        		// 0x02E0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  SlotsPaneObj;                                     		// 0x02E8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  SlotsPaneBGObj;                                   		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  CharacterTemplateText;                            		// 0x02F8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PriceLabel;                                       		// 0x0300 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  PlayButton;                                       		// 0x0308 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  HeadFwdButton;                                    		// 0x0310 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  HeadBwdButton;                                    		// 0x0318 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  BodyFwdButton;                                    		// 0x0320 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  BodyBwdButton;                                    		// 0x0328 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  LegsFwdButton;                                    		// 0x0330 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  LegsBwdButton;                                    		// 0x0338 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  TemplateFwdButton;                                		// 0x0340 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  TemplateBwdButton;                                		// 0x0348 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  PurchaseButton;                                   		// 0x0350 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MenuItem1;                                        		// 0x0358 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MenuItem2;                                        		// 0x0360 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MenuItem3;                                        		// 0x0368 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MenuItem4;                                        		// 0x0370 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MenuItem5;                                        		// 0x0378 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuText1;                                        		// 0x0380 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuText2;                                        		// 0x0388 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuText3;                                        		// 0x0390 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuText4;                                        		// 0x0398 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MenuText5;                                        		// 0x03A0 (0x0008) [0x0000000000000000]              
	TArray< class UGFxCharacterSlot* >                 SlotWidgets;                                      		// 0x03A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxCharacterSlot*                           SelectedSlotWidget;                               		// 0x03B8 (0x0008) [0x0000000000000000]              
	class UTextureRenderTarget2D*                      MeshRenderTarget;                                 		// 0x03C0 (0x0008) [0x0000000000000000]              
	struct FString                                     CharacterTitle;                                   		// 0x03C8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CustomizedTitle;                                  		// 0x03D8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ItemsTitle;                                       		// 0x03E8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SettingTitle;                                     		// 0x03F8 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ExitTitle;                                        		// 0x0408 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MapTitle;                                         		// 0x0418 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Play;                                             		// 0x0428 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Connect;                                          		// 0x0438 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ServerTitle;                                      		// 0x0448 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                CurrentHead;                                      		// 0x0458 (0x0004) [0x0000000000000000]              
	int                                                CurrentLegs;                                      		// 0x045C (0x0004) [0x0000000000000000]              
	int                                                CurrentBody;                                      		// 0x0460 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73959 ];

		return pClassPointer;
	};

	class UNetherMoviePlayer* GetCurrentMovie ( );
	void AS_StartClosing ( );
	class UGFxButton* InitMenuButton ( struct FString ButtonPath );
	void MouseWheel ( int Delta );
	void RightMouseUp ( float X, float Y );
	void RightMouseDown ( float X, float Y );
	void LeftMouseUp ( float X, float Y );
	void MouseMoved ( float X, float Y );
	void LeftMouseDown ( float X, float Y );
	int DeleteButtonConfirmed ( class UGFxButton* Button );
	int OnDeleteCharacter ( class UGFxButton* Button );
	void DisablePlayButton ( );
	void EnablePlayButton ( );
	int PlayButtonPressed ( class UGFxButton* Button );
	int ExitButtonConfirmed ( class UGFxButton* Button );
	int ExitButtonPressed ( class UGFxButton* Button );
	int ServerButtonPressed ( class UGFxButton* Button );
	int MapButtonPressed ( class UGFxButton* Button );
	int SettingsButtonPressed ( class UGFxButton* Button );
	int ItemsButtonPressed ( class UGFxButton* Button );
	int CustomizeButtonPressed ( class UGFxButton* Button );
	int CharacterButtonPressed ( class UGFxButton* Button );
	int CharacterSlotPressed ( class UGFxButton* Button );
	void DeselectAllSlotWidgets ( );
	void SelectSlotWidget ( class UGFxCharacterSlot* ToSelect );
	void SelectButton ( class UGFxButton* ToSelect );
	bool IsSlaveMovieEnabled ( unsigned char MovieType );
	bool IsSlaveMovieOpen ( unsigned char MovieType );
	void UpdatePurchaseInfo ( );
	void RefreshUI ( );
	bool IsClosing ( );
	void SetSlaveMovie ( unsigned char NewSlave );
	void OpenSlaveMovie ( unsigned char NewSlave );
	int OnPrevLegs ( class UGFxButton* Button );
	int OnNextLegs ( class UGFxButton* Button );
	int OnPrevBody ( class UGFxButton* Button );
	int OnNextBody ( class UGFxButton* Button );
	int OnPrevHead ( class UGFxButton* Button );
	int OnNextHead ( class UGFxButton* Button );
	class UClass* GetFamilyInfo ( int TemplateID );
	int OnConfirmTemplatePurchase ( class UGFxButton* Button );
	int OnPurchaseTemplate ( class UGFxButton* Button );
	int OnPrevTemplate ( class UGFxButton* Button );
	int OnNextTemplate ( class UGFxButton* Button );
	void SetCharacterTemplate ( int TemplateID );
	void CloseMenuOverlay ( );
	void StartClosing ( );
	void BuildOnComplete ( );
	void Tick ( float DeltaTime );
	void InitSlotWidget ( struct FString WidgetPath, int SlotIndex );
	void InitGameMenus ( );
	void InitStartScreenMenus ( );
	void InitFrontendMenus ( );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherMenuOverlayUI::pClassPointer = NULL;

// Class NetherGame.NInteractiveObject
// 0x0038 (0x02C4 - 0x028C)
class ANInteractiveObject : public AActor
{
public:
	float                                              UseTime;                                          		// 0x028C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInUse : 1;                                       		// 0x0290 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bIsVolume : 1;                                    		// 0x0290 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class UStaticMeshComponent*                        StaticMesh;                                       		// 0x0294 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x029C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ANetherPlayerController*                     InteractingPlayer;                                		// 0x02A4 (0x0008) [0x0000000000000000]              
	struct FString                                     UseText;                                          		// 0x02AC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UStaticMesh*                                 ReplicatedMesh;                                   		// 0x02BC (0x0008) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74140 ];

		return pClassPointer;
	};

	float TimeLeftToUse ( );
	void ReleaseFromUse ( );
	bool IsValidUse ( );
	void MarkForUse ( class ANetherPlayerController* User );
	bool IsInUse ( );
	void eventReplicatedEvent ( struct FName VarName );
	bool IsVolume ( );
	void OnUse ( class ANetherPlayerController* User );
	void eventPostBeginPlay ( );
};

UClass* ANInteractiveObject::pClassPointer = NULL;

// Class NetherGame.NInteractiveObject_Barter
// 0x002C (0x02F0 - 0x02C4)
class ANInteractiveObject_Barter : public ANInteractiveObject
{
public:
	class ANetherTerritoryVolume*                      TerritoryVolume;                                  		// 0x02C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UNetherTradeData*                            TradeData;                                        		// 0x02CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TradeTimer;                                       		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                CurrentTradeDeal;                                 		// 0x02D8 (0x0004) [0x0000000000000000]              
	struct FString                                     TradeHeader;                                      		// 0x02DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUsable : 1;                                      		// 0x02EC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74139 ];

		return pClassPointer;
	};

	bool IsValidUse ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void CompleteTrade ( class ANetherPlayerController* User );
	void OnUse ( class ANetherPlayerController* User );
	bool PlayerHasNecessaryItems ( class ANetherPlayerController* User );
	void eventTick ( float DeltaTime );
	struct FString MakeTradeHeader ( );
	void CancelOverlappingNPawnPopup ( );
	void UpdateOverlappingNPawnText ( struct FString HeaderText, struct FString PromptText );
	void PickANewTrade ( );
	void ClientClearMesh ( );
	void eventPostBeginPlay ( );
};

UClass* ANInteractiveObject_Barter::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable_SnackPackage
// 0x0000 (0x0354 - 0x0354)
class ANFoodConsumable_SnackPackage : public ANFoodConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74731 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANFoodConsumable_SnackPackage::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable_Canned
// 0x0000 (0x0354 - 0x0354)
class ANFoodConsumable_Canned : public ANFoodConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74732 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANFoodConsumable_Canned::pClassPointer = NULL;

// Class NetherGame.NFoodConsumable_Water
// 0x0000 (0x0354 - 0x0354)
class ANFoodConsumable_Water : public ANFoodConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74733 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANFoodConsumable_Water::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Head
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Head : public ANWardrobe
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74735 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void SetSlotNumber ( int NewSlotNumber );
	int GetItemType ( );
};

UClass* ANWardrobe_Head::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Helmet1
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Helmet1 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74734 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Helmet1::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Arm
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Arm : public ANWardrobe
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74737 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void SetSlotNumber ( int NewSlotNumber );
	int GetItemType ( );
};

UClass* ANWardrobe_Arm::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Arms1
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Arms1 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74736 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Arms1::pClassPointer = NULL;

// Class NetherGame.NMisc_ChewingGum
// 0x0000 (0x0338 - 0x0338)
class ANMisc_ChewingGum : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74738 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_ChewingGum::pClassPointer = NULL;

// Class NetherGame.NMisc_Cigarettes
// 0x0000 (0x0338 - 0x0338)
class ANMisc_Cigarettes : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74739 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_Cigarettes::pClassPointer = NULL;

// Class NetherGame.NMisc_BagOfSalt
// 0x0000 (0x0338 - 0x0338)
class ANMisc_BagOfSalt : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74740 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_BagOfSalt::pClassPointer = NULL;

// Class NetherGame.NMisc_PlayingCards
// 0x0000 (0x0338 - 0x0338)
class ANMisc_PlayingCards : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74741 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_PlayingCards::pClassPointer = NULL;

// Class NetherGame.NMisc_Bleach
// 0x0000 (0x0338 - 0x0338)
class ANMisc_Bleach : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74742 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_Bleach::pClassPointer = NULL;

// Class NetherGame.NMisc_Cookware
// 0x0000 (0x0338 - 0x0338)
class ANMisc_Cookware : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74743 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_Cookware::pClassPointer = NULL;

// Class NetherGame.NMisc_BoxedSoap
// 0x0000 (0x0338 - 0x0338)
class ANMisc_BoxedSoap : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74744 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_BoxedSoap::pClassPointer = NULL;

// Class NetherGame.NMisc_Toiletries
// 0x0000 (0x0338 - 0x0338)
class ANMisc_Toiletries : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74745 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_Toiletries::pClassPointer = NULL;

// Class NetherGame.NMisc_InsectRepellent
// 0x0000 (0x0338 - 0x0338)
class ANMisc_InsectRepellent : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74746 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_InsectRepellent::pClassPointer = NULL;

// Class NetherGame.NMisc_SewingKit
// 0x0000 (0x0338 - 0x0338)
class ANMisc_SewingKit : public ANStackableItem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74747 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANMisc_SewingKit::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bandana_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bandana_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74748 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bandana_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bandana_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bandana_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74749 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bandana_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Cowl_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Cowl_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74750 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Cowl_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Hat_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Hat_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74751 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Hat_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Hat_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Hat_01_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74752 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Hat_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Hat_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Hat_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74753 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Hat_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Hat_02_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Hat_02_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74754 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Hat_02_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74755 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_01_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74756 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74757 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_02_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_02_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74758 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_02_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_Full_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_Full_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74759 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_Full_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_Full_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_Full_01_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74760 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_Full_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_Full_01_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_Full_01_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74761 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_Full_01_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_Full_01_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_Full_01_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74762 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_Full_01_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Gas_Mask_Full_01_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Gas_Mask_Full_01_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74763 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Gas_Mask_Full_01_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_NetherSkin_Backpack
// 0x0000 (0x0348 - 0x0348)
class ANWardrobe_NetherSkin_Backpack : public ANBackpack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74764 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANWardrobe_NetherSkin_Backpack::pClassPointer = NULL;

// Class NetherGame.NWardrobe_NetherSkin_Hat_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_NetherSkin_Hat_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74765 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_NetherSkin_Hat_01_v01::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable
// 0x0008 (0x0340 - 0x0338)
class ANThrowableConsumable : public ANStackableItem
{
public:
	class UClass*                                      ObjectToThrow;                                    		// 0x0338 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74767 ];

		return pClassPointer;
	};

	int GetItemType ( );
	bool IsQuickSlotable ( );
	void SetSlotNumber ( int NewSlotNumber );
	bool ConsumeItem ( class APawn* Consumer );
};

UClass* ANThrowableConsumable::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable_SmokeGrenade
// 0x0000 (0x0340 - 0x0340)
class ANThrowableConsumable_SmokeGrenade : public ANThrowableConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74766 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANThrowableConsumable_SmokeGrenade::pClassPointer = NULL;

// Class NetherGame.NWardrobe_PilgrimHat_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_PilgrimHat_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74768 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_PilgrimHat_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_PilgrimHat_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_PilgrimHat_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74769 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_PilgrimHat_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Horn_Hat_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Horn_Hat_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74770 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Horn_Hat_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74771 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_01_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74772 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_01_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_01_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74773 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_01_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_01_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_01_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74774 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_01_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_01_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_01_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74775 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_01_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_01_v06
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_01_v06 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74776 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_01_v06::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74777 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_02_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_02_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74778 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_02_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_02_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_02_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74779 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_02_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_02_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_02_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74780 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_02_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_02_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_02_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74781 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_02_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_02_v06
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_02_v06 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74782 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_02_v06::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_03_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_03_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74783 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_03_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_03_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_03_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74784 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_03_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_03_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_03_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74785 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_03_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_03_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_03_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74786 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_03_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_03_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_03_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74787 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_03_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_Mask_03_v06
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_Mask_03_v06 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74788 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_Mask_03_v06::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74789 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_01_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74790 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_01_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_01_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74791 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_01_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_01_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_01_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74792 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_01_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_01_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_01_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74793 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_01_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74794 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_02_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_02_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74795 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_02_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_02_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_02_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74796 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_02_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_02_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_02_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74797 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_02_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Paintball_Helmet_02_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Paintball_Helmet_02_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74798 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Paintball_Helmet_02_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74799 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74800 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74801 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74802 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74803 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v06
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v06 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74804 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v06::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v07
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v07 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74805 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v07::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v08
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v08 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74806 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v08::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v09
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v09 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74807 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v09::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v10
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v10 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74808 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v10::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Painted_Mask_01_v11
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Painted_Mask_01_v11 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74809 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Painted_Mask_01_v11::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_01_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74810 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_02_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_02_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74811 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_02_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_02_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_02_v02 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74812 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_02_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_02_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_02_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74813 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_02_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_02_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_02_v04 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74814 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_02_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_02_v05
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_02_v05 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74815 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_02_v05::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_02_v06
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_02_v06 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74816 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_02_v06::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Riot_Mask_03_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Riot_Mask_03_v01 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74817 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Riot_Mask_03_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Chains_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Chains_01_v01 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74818 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Chains_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Chains_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Chains_01_v02 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74819 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Chains_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_MetalAndLeather_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_MetalAndLeather_01_v01 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74820 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_MetalAndLeather_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_MetalAndLeather_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_MetalAndLeather_01_v02 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74821 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_MetalAndLeather_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Ninja_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Ninja_01_v01 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74822 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Ninja_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Sign_Armor_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Sign_Armor_01_v01 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74823 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Sign_Armor_01_v01::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Sign_Armor_01_v02
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Sign_Armor_01_v02 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74824 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Sign_Armor_01_v02::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Sign_Armor_01_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Sign_Armor_01_v03 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74825 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Sign_Armor_01_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Sign_Armor_01_v04
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Sign_Armor_01_v04 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74826 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Sign_Armor_01_v04::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Spikes_01_v01
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Spikes_01_v01 : public ANWardrobe_Arm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74827 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Spikes_01_v01::pClassPointer = NULL;

// Class NetherGame.NFlashlight
// 0x0034 (0x0378 - 0x0344)
class ANFlashlight : public ANWardrobe
{
public:
	unsigned long                                      bFlashlightOn : 1;                                		// 0x0344 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bAttached : 1;                                    		// 0x0344 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	class USpotLightComponent*                         FlashlightComponent;                              		// 0x0348 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterial*                                   LensOnMaterial;                                   		// 0x0350 (0x0008) [0x0000000000000000]              
	class UClass*                                      FlashlightClass;                                  		// 0x0358 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BeamEffect;                                       		// 0x0360 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAkEvent*                                    FlashlightOnSound;                                		// 0x0368 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    FlashlightOffSound;                               		// 0x0370 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74828 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	void CreateFlashLightLightComponent ( );
	void AttachTo ( class ANetherPawn* OwnerPawn, struct FName AttachmentSocket );
	void DetachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void ItemRemovedFromInvManager ( );
	void SetSlotNumber ( int NewSlotNumber );
	bool IsDroppable ( );
	int GetItemType ( );
	void ToggleFlashlight ( );
};

UClass* ANFlashlight::pClassPointer = NULL;

// Class NetherGame.NFlashlight_Red
// 0x0000 (0x0378 - 0x0378)
class ANFlashlight_Red : public ANFlashlight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74829 ];

		return pClassPointer;
	};

};

UClass* ANFlashlight_Red::pClassPointer = NULL;

// Class NetherGame.NFlashlight_Green
// 0x0000 (0x0378 - 0x0378)
class ANFlashlight_Green : public ANFlashlight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74830 ];

		return pClassPointer;
	};

};

UClass* ANFlashlight_Green::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable_Flare
// 0x0000 (0x0340 - 0x0340)
class ANThrowableConsumable_Flare : public ANThrowableConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74831 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANThrowableConsumable_Flare::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable_AggroBomb
// 0x0000 (0x0340 - 0x0340)
class ANThrowableConsumable_AggroBomb : public ANThrowableConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74832 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANThrowableConsumable_AggroBomb::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable_Flashbang
// 0x0000 (0x0340 - 0x0340)
class ANThrowableConsumable_Flashbang : public ANThrowableConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74833 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANThrowableConsumable_Flashbang::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable_FragGrenade
// 0x0000 (0x0340 - 0x0340)
class ANThrowableConsumable_FragGrenade : public ANThrowableConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74834 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANThrowableConsumable_FragGrenade::pClassPointer = NULL;

// Class NetherGame.NThrowableConsumable_PortableAntiNetherDevice
// 0x0000 (0x0340 - 0x0340)
class ANThrowableConsumable_PortableAntiNetherDevice : public ANThrowableConsumable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74835 ];

		return pClassPointer;
	};

	int GetInventoryID ( );
};

UClass* ANThrowableConsumable_PortableAntiNetherDevice::pClassPointer = NULL;

// Class NetherGame.NFamilyInfo_UrbanWarrior1
// 0x0000 (0x0284 - 0x0284)
class UNFamilyInfo_UrbanWarrior1 : public UNetherFamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74836 ];

		return pClassPointer;
	};

};

UClass* UNFamilyInfo_UrbanWarrior1::pClassPointer = NULL;

// Class NetherGame.NFamilyInfo_UrbanWarrior2
// 0x0000 (0x0284 - 0x0284)
class UNFamilyInfo_UrbanWarrior2 : public UNetherFamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74837 ];

		return pClassPointer;
	};

};

UClass* UNFamilyInfo_UrbanWarrior2::pClassPointer = NULL;

// Class NetherGame.NFamilyInfo_Soldier1
// 0x0000 (0x0284 - 0x0284)
class UNFamilyInfo_Soldier1 : public UNetherFamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74838 ];

		return pClassPointer;
	};

};

UClass* UNFamilyInfo_Soldier1::pClassPointer = NULL;

// Class NetherGame.NFamilyInfo_Soldier2
// 0x0000 (0x0284 - 0x0284)
class UNFamilyInfo_Soldier2 : public UNetherFamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74839 ];

		return pClassPointer;
	};

};

UClass* UNFamilyInfo_Soldier2::pClassPointer = NULL;

// Class NetherGame.NetherInventoryUI
// 0x01E0 (0x04A4 - 0x02C4)
class UNetherInventoryUI : public UNetherMoviePlayer
{
public:
	float                                              SlotAnimationStartDelay;                          		// 0x02C4 (0x0004) [0x0000000000000000]              
	int                                                NumGlobalSlots;                                   		// 0x02C8 (0x0004) [0x0000000000000000]              
	int                                                NumSlots;                                         		// 0x02CC (0x0004) [0x0000000000000000]              
	unsigned long                                      bInventoryUIDirty : 1;                            		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDragging : 1;                                    		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowingRanged : 1;                               		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowingAmmo : 1;                                 		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowingMelee : 1;                                		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bShowingHealth : 1;                               		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bShowingFood : 1;                                 		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bShowingAccessories : 1;                          		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bInfoBoxShowing : 1;                              		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000100] 
	class UGFxItemSlot*                                CurrentlySelectedSlot;                            		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            InventoryScreen;                                  		// 0x02DC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            TempButtonGroup;                                  		// 0x02E4 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            GlobalInventoryBar;                               		// 0x02EC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            GlobalInventoryBarSelection;                      		// 0x02F4 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            SlotGroup;                                        		// 0x02FC (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            GlobalSlotGroup;                                  		// 0x0304 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            ItemInfoGroup;                                    		// 0x030C (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            BuyButtonWrapper;                                 		// 0x0314 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            BuyGoldButtonWrapper;                             		// 0x031C (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            LeftWindowDropShadow;                             		// 0x0324 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            ItemDescriptionWindowBounds;                      		// 0x032C (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            ItemDescriptionText;                              		// 0x0334 (0x0008) [0x0000000000000000]              
	class UGFxScrollWindow*                            LeftWindow;                                       		// 0x033C (0x0008) [0x0000000000000000]              
	class UGFxScrollWindow*                            RightWindow;                                      		// 0x0344 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MoneyText;                                        		// 0x034C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  GoldText;                                         		// 0x0354 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  XPText;                                           		// 0x035C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  LevelText;                                        		// 0x0364 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  WeightText;                                       		// 0x036C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemWeightText;                                   		// 0x0374 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemNameText;                                     		// 0x037C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemPriceText;                                    		// 0x0384 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemGoldPriceText;                                		// 0x038C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemPriceWrapper;                                 		// 0x0394 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemInfoBorder;                                   		// 0x039C (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemInfoCashIcon;                                 		// 0x03A4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ItemInfoGoldIcon;                                 		// 0x03AC (0x0008) [0x0000000000000000]              
	class UGFxRevealMask*                              InfoMask;                                         		// 0x03B4 (0x0008) [0x0000000000000000]              
	class UGFxCircleMeter*                             WeightMeter;                                      		// 0x03BC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  AllFilterButton;                                  		// 0x03C4 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  RangedFilterButton;                               		// 0x03CC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  AmmoFilterButton;                                 		// 0x03D4 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MeleeFilterButton;                                		// 0x03DC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  HealthFilterButton;                               		// 0x03E4 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  FoodFilterButton;                                 		// 0x03EC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  AccessoriesFilterButton;                          		// 0x03F4 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  GlobalInventoryButton;                            		// 0x03FC (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MarketplaceButton;                                		// 0x0404 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  BuyButton;                                        		// 0x040C (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  BuyGoldButton;                                    		// 0x0414 (0x0008) [0x0000000000000000]              
	TArray< class UGFxItemSlot* >                      SlotList;                                         		// 0x041C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxItemSlot* >                      GlobalSlotList;                                   		// 0x042C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxItemSlot* >                      StoreSlotList;                                    		// 0x043C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxItemSlot*                                RangedSlot;                                       		// 0x044C (0x0008) [0x0000000000000000]              
	class UGFxItemSlot*                                SidearmSlot;                                      		// 0x0454 (0x0008) [0x0000000000000000]              
	class UGFxItemSlot*                                MeleeSlot;                                        		// 0x045C (0x0008) [0x0000000000000000]              
	class UGFxItemSlot*                                HeadSlot;                                         		// 0x0464 (0x0008) [0x0000000000000000]              
	class UGFxItemSlot*                                LeftArmSlot;                                      		// 0x046C (0x0008) [0x0000000000000000]              
	class UGFxItemSlot*                                RightArmSlot;                                     		// 0x0474 (0x0008) [0x0000000000000000]              
	class UGFxItem*                                    ItemInfoItemIcon;                                 		// 0x047C (0x0008) [0x0000000000000000]              
	class ANetherPlayerController*                     NPC;                                              		// 0x0484 (0x0008) [0x0000000000000000]              
	class ANStore*                                     Store;                                            		// 0x048C (0x0008) [0x0000000000000000]              
	TArray< class UGFxButton* >                        TempButtons;                                      		// 0x0494 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74840 ];

		return pClassPointer;
	};

	void AS_StartClosing ( );
	void StartClosing ( );
	void CloseInventory ( );
	void ShowBuyGoldButton ( );
	void HideBuyGoldButton ( );
	void ShowBuyButton ( );
	void HideBuyButton ( );
	bool GlobalSlotsVisible ( );
	bool StoreSlotsVisible ( );
	void NothingSelected ( );
	bool StoreSlotSelected ( class UGFxItemSlot* Slot );
	void BackPackTooHeavy ( );
	void NotEnoughRoomInBackPack ( );
	void ResetInventoryUI ( );
	int PurchaseItem ( class UGFxButton* Button );
	int AskToBuyGold ( class UGFxButton* Button );
	int AskToPurchaseItem ( class UGFxButton* Button );
	int SellItem ( class UGFxButton* Button );
	int AskToSellItem ( class UGFxButton* Button );
	int GlobalInventoryButtonClicked ( class UGFxButton* Button );
	int MarketplaceButtonClicked ( class UGFxButton* Button );
	int SetCurrentItemToQuickSlot3 ( class UGFxButton* Button );
	int SetCurrentItemToQuickSlot2 ( class UGFxButton* Button );
	int SetCurrentItemToQuickSlot1 ( class UGFxButton* Button );
	int SetCurrentItemToQuickSlot0 ( class UGFxButton* Button );
	void RefreshFilters ( );
	void TurnOnAllFilters ( );
	void TurnOffAllFilters ( );
	int ToggleAccessoriesFilter ( class UGFxButton* Button );
	int ToggleFoodFilter ( class UGFxButton* Button );
	int ToggleHealthFilter ( class UGFxButton* Button );
	int ToggleMeleeFilter ( class UGFxButton* Button );
	int ToggleAmmoFilter ( class UGFxButton* Button );
	int ToggleRangedFilter ( class UGFxButton* Button );
	int ToggleAllFilter ( class UGFxButton* Button );
	int ConsumeCurrentlySelectedSlotItem ( class UGFxButton* Button );
	void ItemDroppedSuccessfully ( );
	int UnloadCurrentlySelectedGun ( class UGFxButton* Button );
	int DropCurrentlySelectedSlotItem ( class UGFxButton* Button );
	void SetCurrentlySelectedSlot ( class UGFxItemSlot* Slot );
	void RightMouseDown ( float X, float Y );
	void PositionButtonList ( float X, float Y, float XBounds, float YBounds, TArray< class UGFxButton* >* ButtonList );
	void FilterSlots ( TArray< class UGFxItemSlot* >* Slots );
	bool TryToSwapItems ( class UGFxItemSlot* SlotA, class UGFxItemSlot* SlotB );
	void KeyDown ( int KeyCode );
	void LeftMouseUp ( float X, float Y );
	int EquipRightArmAccessory ( class UGFxButton* Button );
	int EquipLeftArmAccessory ( class UGFxButton* Button );
	int EquipHeadAccessory ( class UGFxButton* Button );
	int EquipMeleeWeapon ( class UGFxButton* Button );
	int EquipSidearmWeapon ( class UGFxButton* Button );
	int EquipRangedWeapon ( class UGFxButton* Button );
	class UGFxButton* CheckIfMouseOverButtons ( );
	void LeftMouseDown ( float X, float Y );
	class UGFxItemSlot* CheckIfMouseOverItemSlot ( );
	void UpdateItemInfo ( class UGFxItemSlot* Slot );
	void FillGlobalSlotsWithItems ( );
	void FillStoreSlotsWithItems ( );
	void FillBackPackSlotsWithItems ( unsigned long Silently );
	bool AddItemToBackPack ( int InvID, int InvCount, int SlotNumber, unsigned long Silently );
	void MouseMoved ( float X, float Y );
	void Tick ( float DeltaTime );
	void ClearTempButtons ( );
	bool BuildButtonList ( class UGFxItemSlot* ItemSlot, class UGFxNetherObject* Parent, TArray< class UGFxButton* >* ButtonList );
	void ResizeSlots ( TArray< class UGFxItemSlot* > Slots, int Count, class UGFxScrollWindow* Window, int RowLen, int SlotPadding );
	void CreateBackpackSlots ( int NumSlotsIn );
	void ClearSlots ( class UGFxScrollWindow* Window, TArray< class UGFxItemSlot* >* Slots );
	void RefreshGlobalSlots ( );
	void RefreshBackpackSlots ( );
	void CreateStoreSlots ( int NumSlotsIn );
	void CreateGlobalSlots ( int NumSlotsIn );
	void HideGlobalInventoryUI ( );
	bool SetCurrentItemToQuickSlot ( int SlotIndex );
	void RefreshStatusBox ( );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherInventoryUI::pClassPointer = NULL;

// Class NetherGame.NStore
// 0x0D30 (0x0FBC - 0x028C)
class ANStore : public AActor
{
public:
	class ANetherPlayerController*                     ControllerOwner;                                  		// 0x028C (0x0008) [0x0000000000000020]              ( CPF_Net )
	class ANetherServerDocument_Store*                 StoreDoc;                                         		// 0x0294 (0x0008) [0x0000000000000000]              
	struct FClassPricePair                             ItemsToPutInStore[ 0xA4 ];                        		// 0x029C (0x0CD0) [0x0000000000000020]              ( CPF_Net )
	struct FTemplatePricePair                          TemplatesToPutInStore[ 0x4 ];                     		// 0x0F6C (0x0050) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75046 ];

		return pClassPointer;
	};

	float GetTemplateSalePrice ( class UClass* TemplateClass );
	float GetTemplatePremiumPrice ( class UClass* TemplateClass );
	float GetTemplatePrice ( class UClass* TemplateClass );
	float GetInventorySalePrice ( class UClass* InvClass );
	float GetInventoryPremiumPrice ( class UClass* InvClass );
	float GetInventoryPrice ( class UClass* InvClass );
	void GetStoreItems ( TArray< class UClass* >* Items );
	void SetControllerOwner ( class ANetherPlayerController* PC );
	void SetupItemsFromStoreDoc ( );
};

UClass* ANStore::pClassPointer = NULL;

// Class NetherGame.NetherLevelUpEffect
// 0x0000 (0x02AC - 0x02AC)
class ANetherLevelUpEffect : public AUDKEmitCameraEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75381 ];

		return pClassPointer;
	};

};

UClass* ANetherLevelUpEffect::pClassPointer = NULL;

// Class NetherGame.NInteractiveObject_SoundBox
// 0x0018 (0x02DC - 0x02C4)
class ANInteractiveObject_SoundBox : public ANInteractiveObject
{
public:
	float                                              TimeRepaired;                                     		// 0x02C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsRepaired : 1;                                  		// 0x02C8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class ANetherObjective_SafeZoneRepair*             AttachedObjective;                                		// 0x02CC (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    DamageEffect;                                     		// 0x02D4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75484 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void MarkAsRepaired ( );
	void eventTick ( float DeltaTime );
	void ReleaseFromUse ( );
	bool IsValidUse ( );
	void ResetObj ( );
	float TimeLeftToUse ( );
};

UClass* ANInteractiveObject_SoundBox::pClassPointer = NULL;

// Class NetherGame.NPlayerPreviewMesh
// 0x0060 (0x034C - 0x02EC)
class ANPlayerPreviewMesh : public ASkeletalMeshActor
{
public:
	class USceneCapture2DComponent*                    CaptureComponent;                                 		// 0x02EC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UTextureRenderTarget2D*                      CaptureRT;                                        		// 0x02F4 (0x0008) [0x0000000000000000]              
	class UAnimSet*                                    PreviewAnimSet;                                   		// 0x02FC (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       PreviewAnim;                                      		// 0x0304 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     SceneCaptureOffset;                               		// 0x030C (0x000C) [0x0000000000000000]              
	int                                                CaptureFOV;                                       		// 0x0318 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UMaterialInstanceConstant* >         BodyMaterialInstances;                            		// 0x031C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ADynamicSMActor*                             HeadPiece;                                        		// 0x032C (0x0008) [0x0000000000000000]              
	class ADynamicSMActor*                             LeftArmPiece;                                     		// 0x0334 (0x0008) [0x0000000000000000]              
	class ADynamicSMActor*                             RightArmPiece;                                    		// 0x033C (0x0008) [0x0000000000000000]              
	class ADynamicSMActor*                             BackpackPiece;                                    		// 0x0344 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75747 ];

		return pClassPointer;
	};

	class ADynamicSMActor* AttachCAPItem ( int SlotID, struct FName SocketName );
	void SetTemplateMesh ( class UClass* NFI, int Head, int Body, int Legs );
	bool VerifyBodyMaterialInstance ( );
	void Cleanup ( );
	void Setup ( );
	struct FVector GetSceneOffset ( );
};

UClass* ANPlayerPreviewMesh::pClassPointer = NULL;

// Class NetherGame.NMapInfo
// 0x0028 (0x0088 - 0x0060)
class UNMapInfo : public UMapInfo
{
public:
	struct FVector                                     PreviewMeshLocation;                              		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    PreviewMeshRotation;                              		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MapName;                                          		// 0x0078 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 75751 ];

		return pClassPointer;
	};

};

UClass* UNMapInfo::pClassPointer = NULL;

// Class NetherGame.NetherSavedMove
// 0x0004 (0x011C - 0x0118)
class UNetherSavedMove : public USavedMove
{
public:
	unsigned long                                      bCrawl : 1;                                       		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76061 ];

		return pClassPointer;
	};

	void SetMoveFor ( class APlayerController* P, float DeltaTime, struct FVector newAccel, unsigned char InDoubleClick );
	bool CanCombineWith ( class USavedMove* NewMove, class APawn* inPawn, float MaxDelta );
	void Clear ( );
};

UClass* UNetherSavedMove::pClassPointer = NULL;

// Class NetherGame.NetherSubwayVolume
// 0x0000 (0x02C8 - 0x02C8)
class ANetherSubwayVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76209 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANetherSubwayVolume::pClassPointer = NULL;

// Class NetherGame.NetherSubwayVolume_Transition
// 0x0000 (0x02C8 - 0x02C8)
class ANetherSubwayVolume_Transition : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76210 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ANetherSubwayVolume_Transition::pClassPointer = NULL;

// Class NetherGame.NetherPlayerCamera
// 0x0000 (0x0660 - 0x0660)
class ANetherPlayerCamera : public AGamePlayerCamera
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76460 ];

		return pClassPointer;
	};

	class UGameCameraBase* FindBestCameraType ( class AActor* CameraTarget );
};

UClass* ANetherPlayerCamera::pClassPointer = NULL;

// Class NetherGame.NetherPlayerInput
// 0x000F (0x0564 - 0x0555)
class UNetherPlayerInput : public UUTPlayerInput
{
public:
	float                                              InputCooldownTimestamp;                           		// 0x0558 (0x0004) [0x0000000000000000]              
	float                                              InputCooldownDuration_Duck;                       		// 0x055C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InputCooldownDuration_Crawl;                      		// 0x0560 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76461 ];

		return pClassPointer;
	};

	void StartBreathing ( );
	void StopBreathing ( );
	void Jump ( );
	void OnToggleCrawl ( );
	void Duck ( );
};

UClass* UNetherPlayerInput::pClassPointer = NULL;

// Class NetherGame.NetherMapUI
// 0x00C0 (0x0384 - 0x02C4)
class UNetherMapUI : public UNetherMoviePlayer
{
public:
	float                                              MapZoomFactor;                                    		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              MapScaleStep;                                     		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UGFxNetherObject*                            Container;                                        		// 0x02CC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Map;                                              		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UGFxMapIcon*                                 PlayerPointer;                                    		// 0x02DC (0x0008) [0x0000000000000000]              
	TArray< class UGFxMapIcon* >                       MapIcons;                                         		// 0x02E4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxDebugPoint* >                    DebugPoints;                                      		// 0x02F4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  MapContainer;                                     		// 0x0304 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            MapMask;                                          		// 0x030C (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            MapOffset;                                        		// 0x0314 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            MapOffsetBoundingArea;                            		// 0x031C (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Border;                                           		// 0x0324 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  SideGroup;                                        		// 0x032C (0x0008) [0x0000000000000000]              
	class ANetherObjectiveManager*                     ObjectiveManager;                                 		// 0x0334 (0x0008) [0x0000000000000000]              
	float                                              WorldX0;                                          		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              WorldX1;                                          		// 0x0340 (0x0004) [0x0000000000000000]              
	float                                              MapX0;                                            		// 0x0344 (0x0004) [0x0000000000000000]              
	float                                              MapX1;                                            		// 0x0348 (0x0004) [0x0000000000000000]              
	float                                              WorldY0;                                          		// 0x034C (0x0004) [0x0000000000000000]              
	float                                              WorldY1;                                          		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              MapY0;                                            		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              MapY1;                                            		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              TargetScale;                                      		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              MinScale;                                         		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              MaxScale;                                         		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              SideBarPadding;                                   		// 0x0368 (0x0004) [0x0000000000000000]              
	float                                              SideBarObjectiveSpacing;                          		// 0x036C (0x0004) [0x0000000000000000]              
	unsigned long                                      bFindTerritoryVolumeSafeZones : 1;                		// 0x0370 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFoundObjectives : 1;                             		// 0x0370 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class ANetherObjective* >                  Objectives;                                       		// 0x0374 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76462 ];

		return pClassPointer;
	};

	struct FVector WorldToMap ( struct FVector World );
	void AS_StartClosing ( );
	void StartClosing ( );
	void CloseMap ( );
	void Tick ( float DeltaTime );
	void DrawDebugPoints ( TArray< struct FDebugNetherMapData >* DebugMapData );
	void AddSafeZonesTriggers ( class UGFxObject* Parent );
	void AddSafeZones ( class UGFxObject* Parent );
	void AddPointsOfInterest ( class UGFxObject* Parent );
	void SetupPlayerPointer ( );
	void AddObjectives ( class UGFxObject* Parent );
	void MouseMoved ( float X, float Y );
	void ConstrainMapOffset ( class UGFxNetherObject* BoundingArea );
	void SetMapOffset ( float X, float Y );
	void Init ( class ULocalPlayer* Player );
	void MouseWheel ( int Delta );
	int ZoomOut ( class UGFxButton* Button );
	int ZoomIn ( class UGFxButton* Button );
};

UClass* UNetherMapUI::pClassPointer = NULL;

// Class NetherGame.NPointOfInterest
// 0x002C (0x02C8 - 0x029C)
class ANPointOfInterest : public ANote
{
public:
	unsigned char                                      POIType;                                          		// 0x029C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocalizationTag;                                  		// 0x02A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                FontSize;                                         		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverrideFontSize : 1;                            		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FNetherPOIDefaults >                POIDefaults;                                      		// 0x02B8 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76550 ];

		return pClassPointer;
	};

	int GetInitialRotation ( );
	int GetFontSize ( );
	struct FString GetPOIName ( );
};

UClass* ANPointOfInterest::pClassPointer = NULL;

// Class NetherGame.NetherSafeZone_Trigger
// 0x001C (0x02B8 - 0x029C)
class ANetherSafeZone_Trigger : public ATrigger
{
public:
	class ANetherTerritoryVolume*                      OwningVolume;                                     		// 0x029C (0x0008) [0x0000000000000000]              
	unsigned char                                      TriggerType;                                      		// 0x02A4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocalizationTag;                                  		// 0x02A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76571 ];

		return pClassPointer;
	};

	struct FString GetTriggerName ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void TriggerInit ( class ANetherTerritoryVolume* ParentVolume );
};

UClass* ANetherSafeZone_Trigger::pClassPointer = NULL;

// Class NetherGame.NetherSettingsUI
// 0x0208 (0x04CC - 0x02C4)
class UNetherSettingsUI : public UNetherMoviePlayer
{
public:
	struct FVector2D                                   NextOptionPos;                                    		// 0x02C4 (0x0008) [0x0000000000000000]              
	float                                              VIEW_DISTANCE_MIN;                                		// 0x02CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              VIEW_DISTANCE_MAX;                                		// 0x02D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     OptionLabelFullScreen;                            		// 0x02D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelVSync;                                 		// 0x02E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelInvertY;                               		// 0x02F4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelResolution;                            		// 0x0304 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelAO;                                    		// 0x0314 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelDynamicLights;                         		// 0x0324 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelShadows;                               		// 0x0334 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelBloom;                                 		// 0x0344 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelAntialiasing;                          		// 0x0354 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelDetail;                                		// 0x0364 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DetailOption1;                                    		// 0x0374 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DetailOption2;                                    		// 0x0384 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DetailOption3;                                    		// 0x0394 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelViewDistance;                          		// 0x03A4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ViewDistanceOption1;                              		// 0x03B4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ViewDistanceOption2;                              		// 0x03C4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ViewDistanceOption3;                              		// 0x03D4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelMotionBlur;                            		// 0x03E4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelLightShafts;                           		// 0x03F4 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelRespawnPlayer;                         		// 0x0404 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelMuteVoicechat;                         		// 0x0414 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelShowChatForNewMessage;                 		// 0x0424 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     OptionLabelHideChatMessages;                      		// 0x0434 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         ResOptions;                                       		// 0x0444 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< int >                                      DetailModeOptions;                                		// 0x0454 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UGFxNetherObject*                            OptionsGroup;                                     		// 0x0464 (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            Container;                                        		// 0x046C (0x0008) [0x0000000000000000]              
	class UGFxNetherObject*                            WidgetContainer;                                  		// 0x0474 (0x0008) [0x0000000000000000]              
	class UGFxDropDown*                                ResDropDown;                                      		// 0x047C (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  ApplyButton;                                      		// 0x0484 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __SetInt__Delegate;                               		// 0x048C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __GetInt__Delegate;                               		// 0x049C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __GetFloat__Delegate;                             		// 0x04AC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __SetFloat__Delegate;                             		// 0x04BC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76992 ];

		return pClassPointer;
	};

	void AS_StartClosing ( );
	void StartClosing ( );
	void CloseSettings ( );
	int ApplyButtonClicked ( class UGFxButton* Button );
	int CheckIfRespawnCheckboxEnabled ( );
	int RespawnCheckBoxClicked ( int OptionIndex );
	int SetOptionHideChatMessages ( int OptionIndex );
	int GetOptionHideChatMessages ( );
	int GetOptionShowChatForNewMessages ( );
	int SetOptionShowChatForNewMessages ( int OptionIndex );
	int GetOptionMuteVoiceChat ( );
	int SetOptionMuteVoiceChat ( int OptionIndex );
	float GetOptionFOV ( );
	int SetOptionFOV ( float NewFOV );
	int GetOptionLightShafts ( );
	int SetOptionLightShafts ( int OptionIndex );
	int GetOptionAntiAliasing ( );
	int SetOptionAntialiasing ( int OptionIndex );
	int GetOptionMotionBlur ( );
	int SetOptionMotionBlur ( int OptionIndex );
	int GetOptionShadows ( );
	int SetOptionShadows ( int OptionIndex );
	int GetOptionBloom ( );
	int SetOptionBloom ( int OptionIndex );
	int GetOptionDynamicLights ( );
	int SetOptionDynamicLights ( int OptionIndex );
	int GetOptionAO ( );
	int SetOptionAO ( int OptionIndex );
	int GetOptionVSync ( );
	int SetOptionVSync ( int OptionIndex );
	int GetOptionFullScreen ( );
	int SetOptionFullScreen ( int OptionIndex );
	int SetOptionMouseYInvert ( int OptionIndex );
	int GetOptionMouseYInvert ( );
	int GetOptionDetailMode ( );
	int SetOptionDetailMode ( int OptionIndex );
	float GetOptionViewDistance ( );
	int SetOptionViewDistance ( float OptionValue );
	int GetResOption ( );
	int SetResOption ( int OptionIndex );
	void StartNewCollumn ( );
	struct FVector2D GetNextPos ( unsigned char WidgetType );
	void AddSlider ( struct FString Label, float MinValue, float MaxValue, struct FScriptDelegate SetOptionDelegate, struct FScriptDelegate GetOptionDelegate, struct FVector2D pos, unsigned long bApplyImmediately );
	void AddDropDown ( struct FString Label, struct FScriptDelegate SetOptionDelegate, struct FScriptDelegate GetOptionDelegate, struct FVector2D pos, TArray< struct FString >* OptionLabels );
	void AddCheckBox ( struct FString Label, struct FScriptDelegate SetOptionDelegate, struct FScriptDelegate GetOptionDelegate, struct FVector2D pos, unsigned long bApplyImmediately );
	void Init ( class ULocalPlayer* Player );
	int SetFloat ( float Value );
	float GetFloat ( );
	int GetInt ( );
	int SetInt ( int Value );
};

UClass* UNetherSettingsUI::pClassPointer = NULL;

// Class NetherGame.NetherServerScreenUI
// 0x00C1 (0x0385 - 0x02C4)
class UNetherServerScreenUI : public UNetherMoviePlayer
{
public:
	unsigned long                                      bUseSteamMasterList : 1;                          		// 0x02C4 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bQueryDialogShowing : 1;                          		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bProcessingJoin : 1;                              		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bSpectate : 1;                                    		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bHideFullServers : 1;                             		// 0x02C4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHideEmptyServers : 1;                            		// 0x02C4 (0x0004) [0x0000000000000000] [0x00000020] 
	TArray< class UGFxServerButton* >                  ServerEntries;                                    		// 0x02C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxServerButton*                            CurrentSelection;                                 		// 0x02D8 (0x0008) [0x0000000000000000]              
	TArray< struct FServerDesc >                       MberServerList;                                   		// 0x02E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxNetherObject*                            ServerSelect;                                     		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UGFxScrollWindow*                            ServerScrollList;                                 		// 0x02F8 (0x0008) [0x0000000000000000]              
	class UGFxCheckBox*                                FullServersCheckbox;                              		// 0x0300 (0x0008) [0x0000000000000000]              
	class UGFxCheckBox*                                EmptyServersCheckbox;                             		// 0x0308 (0x0008) [0x0000000000000000]              
	float                                              ServerButtonY;                                    		// 0x0310 (0x0004) [0x0000000000000000]              
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x0314 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x031C (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                  		// 0x0324 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SearchDSName;                                     		// 0x032C (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     ServerPassword;                                   		// 0x0334 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     Server;                                           		// 0x0344 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Players;                                          		// 0x0354 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HideFullServers;                                  		// 0x0364 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HideEmptyServers;                                 		// 0x0374 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      QueryCompletionAction;                            		// 0x0384 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76993 ];

		return pClassPointer;
	};

	void AS_StartClosing ( );
	int OnServerSelect ( class UGFxButton* Button );
	void LeftMouseDown ( float X, float Y );
	void StartClosing ( );
	void CloseServerScreen ( );
	void OnCancelSearchComplete ( unsigned long bWasSuccessful );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	void OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful );
	void SubmitServerListQuery ( int PlayerIndex );
	void CancelQuery ( unsigned char DesiredCancelAction );
	bool AllowJoinServer ( );
	void Cleanup ( );
	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	struct FString BuildJoinURL ( struct FString ResolvedConnectionURL );
	bool ProcessJoin ( );
	void DisplayServerJoinError ( );
	bool JoinServer ( );
	int OnToggleHideFullServers ( int CurrentValue );
	int OnToggleHideEmptyServers ( int CurrentValue );
	void PopulateMberServers ( );
	int RefreshServerUI ( class UGFxButton* Button );
	void PopulateMasterListServers ( );
	void RefreshServerList ( int InPlayerIndex, int MaxResults );
	void AddServerButton ( struct FString ServerName, int PlayerCount, int TotalPlayersAllowed, struct FString CustomServerAddress );
	void RefreshUI ( );
	void Init ( class ULocalPlayer* Player );
};

UClass* UNetherServerScreenUI::pClassPointer = NULL;

// Class NetherGame.NetherObjective_SpawnEnemies
// 0x0038 (0x032C - 0x02F4)
class ANetherObjective_SpawnEnemies : public ANetherObjective
{
public:
	TArray< struct FSpawnDataSet >                     SpawnDataSets;                                    		// 0x02F4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PopulationToMaintain;                             		// 0x0304 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinimumRespawnTime;                               		// 0x0308 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaximumRespawnTime;                               		// 0x030C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ChancesTotal;                                     		// 0x0310 (0x0004) [0x0000000000000000]              
	float                                              RespawnCheckInterval;                             		// 0x0314 (0x0004) [0x0000000000000000]              
	float                                              RespawnCheckTimer;                                		// 0x0318 (0x0004) [0x0000000000000000]              
	TArray< struct FPendingSpawn >                     PendingSpawns;                                    		// 0x031C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77082 ];

		return pClassPointer;
	};

	void ManageSpawns ( float DeltaTime, int EnemySet );
	bool SpawnAnEnemy ( class ANetherTerritoryVolume* VolumeToSpawnIn, int EnemySet );
	void CheckPendingSpawns ( int EnemySet );
	void AddPendingSpawn ( class ANetherTerritoryVolume* OwningVolume );
	void UnTouched ( class AActor* Other );
	void OnDeathNotifyEvent ( class ANPawnEnemy* Enemy );
};

UClass* ANetherObjective_SpawnEnemies::pClassPointer = NULL;

// Class NetherGame.NetherObjective_KillBoss
// 0x0014 (0x0340 - 0x032C)
class ANetherObjective_KillBoss : public ANetherObjective_SpawnEnemies
{
public:
	class UClass*                                      BossClass;                                        		// 0x032C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                BossBonusXP;                                      		// 0x0334 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANPawnEnemy*                                 BossPawn;                                         		// 0x0338 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77132 ];

		return pClassPointer;
	};

	void SpawnBoss ( );
	void OnBossDeathNotifyEvent ( class ANPawnEnemy* Enemy );
	void OnObjectiveEnded ( unsigned long bWasCompleted );
	void UnTouched ( class AActor* Other );
	void InitObjective ( );
};

UClass* ANetherObjective_KillBoss::pClassPointer = NULL;

// Class NetherGame.NetherObjective_LootDrop
// 0x0050 (0x0344 - 0x02F4)
class ANetherObjective_LootDrop : public ANetherObjective
{
public:
	TArray< struct FLootSpawn >                        LootSpawns;                                       		// 0x02F4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LootLifeSpan;                                     		// 0x0304 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MinimumItemsPerSpawn;                             		// 0x0308 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaximumItemsPerSpawn;                             		// 0x030C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class ANLootDropPoint* >                   SpawnPoints;                                      		// 0x0310 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumBatchesToSpawn;                                		// 0x0320 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTimeBetweenBatches;                            		// 0x0324 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxTimeBetweenBatches;                            		// 0x0328 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                BatchesSpawnedSoFar;                              		// 0x032C (0x0004) [0x0000000000000000]              
	float                                              TimeUntilNextBatchSpawn;                          		// 0x0330 (0x0004) [0x0000000000000000]              
	class ANLootDropPoint*                             CurrentSpawnPoint;                                		// 0x0334 (0x0008) [0x0000000000000000]              
	int                                                PickupsDropped;                                   		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              SpawnLootBatchDelay;                              		// 0x0340 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77152 ];

		return pClassPointer;
	};

	struct FString GetPercentCompleteString ( );
	class UClass* PickItemByChance ( );
	void SpawnLootBatch ( );
	void InitObjective ( );
};

UClass* ANetherObjective_LootDrop::pClassPointer = NULL;

// Class NetherGame.NLootDropPoint
// 0x0034 (0x02C0 - 0x028C)
class ANLootDropPoint : public AActor
{
public:
	struct FVector                                     SpawnDirection;                                   		// 0x028C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Spread;                                           		// 0x0298 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinSpawnVelocity;                                 		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpawnVelocity;                                 		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocationDescription;                              		// 0x02A4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             ParticleEffect;                                   		// 0x02B4 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bSpawnParticleFlag : 1;                           		// 0x02BC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77158 ];

		return pClassPointer;
	};

	void StartSpawn ( );
	void SpawnHelicopterParticle ( );
	struct FVector GetSpawnVelocityVector ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ANLootDropPoint::pClassPointer = NULL;

// Class NetherGame.NetherObjective_SafeZoneRepair
// 0x003C (0x0368 - 0x032C)
class ANetherObjective_SafeZoneRepair : public ANetherObjective_SpawnEnemies
{
public:
	float                                              SafeZoneDisabledTime;                             		// 0x032C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalSoundBoxes;                                  		// 0x0330 (0x0004) [0x0000000000000000]              
	int                                                RepairedSoundBoxes;                               		// 0x0334 (0x0004) [0x0000000000000000]              
	int                                                RepairRewardXP;                                   		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    AlarmSoundStart;                                  		// 0x033C (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    AlarmSoundEnd;                                    		// 0x0344 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bPlayAlarm : 1;                                   		// 0x034C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              RepairMessageTimeStamp;                           		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              ObjectiveStartTime;                               		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              UpdateTimer;                                      		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              HeaderUpdateTimer;                                		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              HeaderUpdateInterval;                             		// 0x0364 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77194 ];

		return pClassPointer;
	};

	void DebugWin ( );
	bool TryActivate ( );
	void GoToActive ( );
	void ImpendingAttack ( );
	bool AreAllObjsRepaired ( );
	void DisableAllObjects ( );
	void RepairAllObjects ( );
	void ResetAllObjects ( );
	void OnObjectiveEnded ( unsigned long bWasCompleted );
	void UnTouched ( class AActor* Other );
	void Touched ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SoundBoxRepaired ( );
	void InitObjective ( );
	void eventSetInitialState ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ANetherObjective_SafeZoneRepair::pClassPointer = NULL;

// Class NetherGame.NetherObjective_SurgeRandomized
// 0x0004 (0x0330 - 0x032C)
class ANetherObjective_SurgeRandomized : public ANetherObjective_SpawnEnemies
{
public:
	int                                                CurrentEnemySet;                                  		// 0x032C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77258 ];

		return pClassPointer;
	};

	void OnObjectiveEnded ( unsigned long bWasCompleted );
	void PickRandomVolume ( );
};

UClass* ANetherObjective_SurgeRandomized::pClassPointer = NULL;

// Class NetherGame.NetherObjectiveContainer
// 0x0010 (0x029C - 0x028C)
class ANetherObjectiveContainer : public AActor
{
public:
	TArray< class ANetherObjective* >                  ObjectiveTemplates;                               		// 0x028C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77271 ];

		return pClassPointer;
	};

};

UClass* ANetherObjectiveContainer::pClassPointer = NULL;

// Class NetherGame.NetherPlayerMeleeHitEffect
// 0x0000 (0x02A0 - 0x02A0)
class ANetherPlayerMeleeHitEffect : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77737 ];

		return pClassPointer;
	};

};

UClass* ANetherPlayerMeleeHitEffect::pClassPointer = NULL;

// Class NetherGame.NetherPlayerRangedHitEffect
// 0x0000 (0x02A0 - 0x02A0)
class ANetherPlayerRangedHitEffect : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 77738 ];

		return pClassPointer;
	};

};

UClass* ANetherPlayerRangedHitEffect::pClassPointer = NULL;

// Class NetherGame.NetherThirdPersonCamera
// 0x004C (0x0220 - 0x01D4)
class UNetherThirdPersonCamera : public UGameThirdPersonCamera
{
public:
	class UNetherThirdPersonCameraMode_Death*          NTPCM_DeathCam;                                   		// 0x01D4 (0x0008) [0x0000000000000000]              
	class UNetherCameraMode_Socket*                    NCMS_SocketCam;                                   		// 0x01DC (0x0008) [0x0000000000000000]              
	class UNetherCameraMode_SocketIronsights*          NCMS_SocketCamIronsights;                         		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UNetherThirdPersonCameraMode_Ironsight*      NTPCM_Ironsight;                                  		// 0x01EC (0x0008) [0x0000000000000000]              
	class UNetherThirdPersonCameraMode_Sprint*         NTPCM_Sprint;                                     		// 0x01F4 (0x0008) [0x0000000000000000]              
	struct FVector                                     DeathCamPos;                                      		// 0x01FC (0x000C) [0x0000000000000000]              
	float                                              DeathCamPullOutSpeed;                             		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              DeathCamTimer;                                    		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              DeathCamDuration;                                 		// 0x0210 (0x0004) [0x0000000000000000]              
	struct FRotator                                    DeathCamRot;                                      		// 0x0214 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78066 ];

		return pClassPointer;
	};

	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	class UGameThirdPersonCameraMode* FindBestCameraMode ( class APawn* inPawn );
	void Init ( );
};

UClass* UNetherThirdPersonCamera::pClassPointer = NULL;

// Class NetherGame.NetherPlayerHSEffect
// 0x0000 (0x02A0 - 0x02A0)
class ANetherPlayerHSEffect : public AUTEmit_HitEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78067 ];

		return pClassPointer;
	};

};

UClass* ANetherPlayerHSEffect::pClassPointer = NULL;

// Class NetherGame.NetherServerDocument_Test
// 0x0004 (0x02B8 - 0x02B4)
class ANetherServerDocument_Test : public ANetherServerPlayerDocument
{
public:
	int                                                TestValue;                                        		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78384 ];

		return pClassPointer;
	};

	void eventOnDocumentUpdate ( unsigned long bWasSuccessful );
};

UClass* ANetherServerDocument_Test::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo
// 0x0004 (0x0518 - 0x0514)
class ANPickupFactory_Ammo : public ANPickupFactory
{
public:
	int                                                AmmoAmount;                                       		// 0x0514 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78801 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_AmmoPistol
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_AmmoPistol : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78800 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_AmmoPistol::pClassPointer = NULL;

// Class NetherGame.NetherThirdPersonCameraMode_Sprint
// 0x0000 (0x026C - 0x026C)
class UNetherThirdPersonCameraMode_Sprint : public UNetherThirdPersonCameraMode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78980 ];

		return pClassPointer;
	};

};

UClass* UNetherThirdPersonCameraMode_Sprint::pClassPointer = NULL;

// Class NetherGame.NetherThirdPersonCameraMode_Ironsight
// 0x0024 (0x0290 - 0x026C)
class UNetherThirdPersonCameraMode_Ironsight : public UNetherThirdPersonCameraMode
{
public:
	struct FVector                                     IronsightOffset_Stand;                            		// 0x026C (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     IronsightOffset_Crouch;                           		// 0x0278 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     IronsightOffset_Crawl;                            		// 0x0284 (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78982 ];

		return pClassPointer;
	};

	struct FVector eventAdjustViewOffset ( class APawn* P, struct FVector Offset );
};

UClass* UNetherThirdPersonCameraMode_Ironsight::pClassPointer = NULL;

// Class NetherGame.NetherThirdPersonCameraMode_Death
// 0x0000 (0x026C - 0x026C)
class UNetherThirdPersonCameraMode_Death : public UNetherThirdPersonCameraMode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78986 ];

		return pClassPointer;
	};

};

UClass* UNetherThirdPersonCameraMode_Death::pClassPointer = NULL;

// Class NetherGame.NetherTradeData
// 0x0014 (0x0074 - 0x0060)
class UNetherTradeData : public UObject
{
public:
	TArray< struct FTradeDeal >                        TradeDeals;                                       		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TradeOfferDuration;                               		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79027 ];

		return pClassPointer;
	};

};

UClass* UNetherTradeData::pClassPointer = NULL;

// Class NetherGame.NFlashlightComponent
// 0x0000 (0x0268 - 0x0268)
class UNFlashlightComponent : public USpotLightComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79052 ];

		return pClassPointer;
	};

};

UClass* UNFlashlightComponent::pClassPointer = NULL;

// Class NetherGame.NFlashlightComponent_Green
// 0x0000 (0x0268 - 0x0268)
class UNFlashlightComponent_Green : public UNFlashlightComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79102 ];

		return pClassPointer;
	};

};

UClass* UNFlashlightComponent_Green::pClassPointer = NULL;

// Class NetherGame.NFlashlightComponent_Red
// 0x0000 (0x0268 - 0x0268)
class UNFlashlightComponent_Red : public UNFlashlightComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79107 ];

		return pClassPointer;
	};

};

UClass* UNFlashlightComponent_Red::pClassPointer = NULL;

// Class NetherGame.NInteractiveObject_Note
// 0x0014 (0x02D8 - 0x02C4)
class ANInteractiveObject_Note : public ANInteractiveObject
{
public:
	struct FString                                     NoteContents;                                     		// 0x02C4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              NoteTime;                                         		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79249 ];

		return pClassPointer;
	};

	bool IsValidUse ( );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventTick ( float DeltaTime );
	void ClientClearMesh ( );
	void eventPostBeginPlay ( );
};

UClass* ANInteractiveObject_Note::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_AggroBomb
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_AggroBomb : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79659 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_AggroBomb::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo12Gauge
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_Ammo12Gauge : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79673 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo12Gauge::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo45ACP
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_Ammo45ACP : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79680 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo45ACP::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo50cal
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_Ammo50cal : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79687 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo50cal::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo5pt56
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_Ammo5pt56 : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79694 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo5pt56::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo7pt62
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_Ammo7pt62 : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79701 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo7pt62::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Ammo9mm
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_Ammo9mm : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79708 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Ammo9mm::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_AmmoRifle
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_AmmoRifle : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79721 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_AmmoRifle::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_AmmoShotgun
// 0x0000 (0x0518 - 0x0518)
class ANPickupFactory_AmmoShotgun : public ANPickupFactory_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79728 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_AmmoShotgun::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackExtraLarge
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackExtraLarge : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79735 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackExtraLarge::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackLarge
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackLarge : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79742 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackLarge::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackMedium
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackMedium : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79749 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackMedium::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackMilitary
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackMilitary : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79756 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackMilitary::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackMilitaryLarge
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackMilitaryLarge : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79763 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackMilitaryLarge::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackNether
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackNether : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79770 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackNether::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_BackpackSmall
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_BackpackSmall : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79777 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_BackpackSmall::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_CashExtraLarge
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_CashExtraLarge : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79784 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_CashExtraLarge::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_CashLarge
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_CashLarge : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79791 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_CashLarge::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_CashMedium
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_CashMedium : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79798 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_CashMedium::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_CashSmall
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_CashSmall : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79805 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_CashSmall::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Flare
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Flare : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79812 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Flare::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Flashbang
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Flashbang : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79819 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Flashbang::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Flashlight
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Flashlight : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79826 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Flashlight::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Flashlight_Green
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Flashlight_Green : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79833 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Flashlight_Green::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Flashlight_Red
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Flashlight_Red : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79840 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Flashlight_Red::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FoodCanned
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FoodCanned : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79847 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FoodCanned::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FoodEnergyBar
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FoodEnergyBar : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79854 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FoodEnergyBar::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FoodEnergyDrink
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FoodEnergyDrink : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79861 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FoodEnergyDrink::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FoodRations
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FoodRations : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79868 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FoodRations::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FoodSnackPackage
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FoodSnackPackage : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79875 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FoodSnackPackage::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FoodWater
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FoodWater : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79882 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FoodWater::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_FragGrenade
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_FragGrenade : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79889 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_FragGrenade::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_HealthBandages
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_HealthBandages : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79896 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_HealthBandages::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_HealthDoctorsBag
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_HealthDoctorsBag : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79903 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_HealthDoctorsBag::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_HealthFirstAidKit
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_HealthFirstAidKit : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79910 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_HealthFirstAidKit::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_HealthPainPills
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_HealthPainPills : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79917 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_HealthPainPills::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscBagOfSalt
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscBagOfSalt : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79924 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscBagOfSalt::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscBleach
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscBleach : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79931 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscBleach::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscBoxedSoap
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscBoxedSoap : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79938 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscBoxedSoap::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscChewingGum
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscChewingGum : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79945 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscChewingGum::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscCigarettes
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscCigarettes : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79952 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscCigarettes::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscCookware
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscCookware : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79959 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscCookware::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscInsectRepellent
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscInsectRepellent : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79966 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscInsectRepellent::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscPlayingCards
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscPlayingCards : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79973 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscPlayingCards::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscSewingKit
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscSewingKit : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79980 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscSewingKit::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_MiscToiletries
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_MiscToiletries : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79987 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_MiscToiletries::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_MTOToRTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_MTOToRTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79994 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_MTOToRTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_MTOToSZ
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_MTOToSZ : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80001 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_MTOToSZ::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_MTOToWTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_MTOToWTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80008 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_MTOToWTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_RTOToMTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_RTOToMTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80015 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_RTOToMTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_RTOToSZ
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_RTOToSZ : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80022 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_RTOToSZ::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_RTOToWTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_RTOToWTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80029 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_RTOToWTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_SZToMTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_SZToMTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80036 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_SZToMTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_SZToRTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_SZToRTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80043 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_SZToRTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_SZToWTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_SZToWTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80050 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_SZToWTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_WTOToMTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_WTOToMTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80057 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_WTOToMTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_WTOToRTO
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_WTOToRTO : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80064 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_WTOToRTO::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_Package_WTOToSZ
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_Package_WTOToSZ : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80071 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_Package_WTOToSZ::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_PortableAntiNetherDevice
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_PortableAntiNetherDevice : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80078 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_PortableAntiNetherDevice::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_SmokeGrenade
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_SmokeGrenade : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80085 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_SmokeGrenade::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapAA12
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapAA12 : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80092 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapAA12::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapAxe
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapAxe : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80099 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapAxe::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapBat
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapBat : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80106 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapBat::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapBattleAxe
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapBattleAxe : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80114 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapBattleAxe::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapBolo
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapBolo : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80122 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapBolo::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapCarbine
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapCarbine : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80130 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapCarbine::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapCrowbar
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapCrowbar : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80137 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapCrowbar::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapDesertEagle
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapDesertEagle : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80144 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapDesertEagle::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapEastSword
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapEastSword : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80151 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapEastSword::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapGlock
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapGlock : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80159 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapGlock::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapHolyCrossbow
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapHolyCrossbow : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80166 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapHolyCrossbow::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapKatana
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapKatana : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80173 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapKatana::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapKnife
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapKnife : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80181 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapKnife::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapMach9
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapMach9 : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80188 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapMach9::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapMachete
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapMachete : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80195 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapMachete::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapRAB47
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapRAB47 : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80202 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapRAB47::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapRugerMini
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapRugerMini : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80209 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapRugerMini::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapSpas12
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapSpas12 : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80216 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapSpas12::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapUMP45
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapUMP45 : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80223 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapUMP45::pClassPointer = NULL;

// Class NetherGame.NPickupFactory_WeapUzi
// 0x0000 (0x0514 - 0x0514)
class ANPickupFactory_WeapUzi : public ANPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80230 ];

		return pClassPointer;
	};

};

UClass* ANPickupFactory_WeapUzi::pClassPointer = NULL;

// Class NetherGame.NSeqAction_FindDayNightManager
// 0x0008 (0x0158 - 0x0150)
class UNSeqAction_FindDayNightManager : public USequenceAction
{
public:
	class AActor*                                      Manager;                                          		// 0x0150 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80478 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UNSeqAction_FindDayNightManager::pClassPointer = NULL;

// Class NetherGame.NThrownObject_AggroBomb
// 0x0010 (0x02F0 - 0x02E0)
class ANThrownObject_AggroBomb : public ANThrownObject_AOEGrenadeBase
{
public:
	float                                              SplashDuration;                                   		// 0x02E0 (0x0004) [0x0000000000000000]              
	float                                              SplashNoise;                                      		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              NoiseTime;                                        		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              NoiseTimer;                                       		// 0x02EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80735 ];

		return pClassPointer;
	};

	void ExplosionFX ( );
	void eventTick ( float DeltaTime );
	void AreaEffect ( struct FHitPawn InHitPawn );
};

UClass* ANThrownObject_AggroBomb::pClassPointer = NULL;

// Class NetherGame.NThrownObject_Flare
// 0x0044 (0x02F0 - 0x02AC)
class ANThrownObject_Flare : public ANThrownObject
{
public:
	class UParticleSystem*                             ParticleEffect;                                   		// 0x02AC (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    SpawnedEffect;                                    		// 0x02B4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPointLightComponent*                        FlareLight;                                       		// 0x02BC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              FlareBrightness;                                  		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              FlareRadius;                                      		// 0x02C8 (0x0004) [0x0000000000000000]              
	float                                              FlareRedness;                                     		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              BurnTime;                                         		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              NoiseTime;                                        		// 0x02D4 (0x0004) [0x0000000000000000]              
	float                                              NoiseTimer;                                       		// 0x02D8 (0x0004) [0x0000000000000000]              
	float                                              Loudness;                                         		// 0x02DC (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    FlareStartSound;                                  		// 0x02E0 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    FlareEndSound;                                    		// 0x02E8 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80740 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventTick ( float DeltaTime );
	void eventSetInitialState ( );
};

UClass* ANThrownObject_Flare::pClassPointer = NULL;

// Class NetherGame.NThrownObject_Flashbang
// 0x000C (0x02EC - 0x02E0)
class ANThrownObject_Flashbang : public ANThrownObject_AOEGrenadeBase
{
public:
	float                                              StunDuration;                                     		// 0x02E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStartedEffect : 1;                               		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NetherStunDuration;                               		// 0x02E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80745 ];

		return pClassPointer;
	};

	void AreaEffect ( struct FHitPawn InHitPawn );
};

UClass* ANThrownObject_Flashbang::pClassPointer = NULL;

// Class NetherGame.NThrownObject_FragGrenade
// 0x000C (0x02EC - 0x02E0)
class ANThrownObject_FragGrenade : public ANThrownObject_AOEGrenadeBase
{
public:
	int                                                Damage;                                           		// 0x02E0 (0x0004) [0x0000000000000000]              
	float                                              FullDamageRadius;                                 		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              NetherDamageMultiplier;                           		// 0x02E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80750 ];

		return pClassPointer;
	};

	void AreaEffect ( struct FHitPawn InHitPawn );
};

UClass* ANThrownObject_FragGrenade::pClassPointer = NULL;

// Class NetherGame.NThrownObject_PortableAntiNetherDevice
// 0x0018 (0x02F8 - 0x02E0)
class ANThrownObject_PortableAntiNetherDevice : public ANThrownObject_AOEGrenadeBase
{
public:
	float                                              CheckTimer;                                       		// 0x02E0 (0x0004) [0x0000000000000000]              
	float                                              CheckInterval;                                    		// 0x02E4 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    SpawnedDestroyEffect;                             		// 0x02E8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             DestroyEffect;                                    		// 0x02F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80755 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void ExplosionFX ( );
	void AreaEffect ( struct FHitPawn InHitPawn );
	void eventTick ( float DeltaTime );
};

UClass* ANThrownObject_PortableAntiNetherDevice::pClassPointer = NULL;

// Class NetherGame.NThrownObject_SmokeGrenade
// 0x0020 (0x02CC - 0x02AC)
class ANThrownObject_SmokeGrenade : public ANThrownObject
{
public:
	class UParticleSystem*                             ParticleEffect;                                   		// 0x02AC (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    SpawnedEffect;                                    		// 0x02B4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAkEvent*                                    SmokeGrenadeStartSound;                           		// 0x02BC (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UAkEvent*                                    SmokeGrenadeEndSound;                             		// 0x02C4 (0x0008) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80760 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventTick ( float DeltaTime );
	void eventSetInitialState ( );
};

UClass* ANThrownObject_SmokeGrenade::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Hat_01_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Hat_01_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80945 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Hat_01_v03::pClassPointer = NULL;

// Class NetherGame.NWardrobe_Bomber_Hat_02_v03
// 0x0000 (0x0344 - 0x0344)
class ANWardrobe_Bomber_Hat_02_v03 : public ANWardrobe_Head
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80952 ];

		return pClassPointer;
	};

};

UClass* ANWardrobe_Bomber_Hat_02_v03::pClassPointer = NULL;

// Class NetherGame.SmokePlume
// 0x0008 (0x02A8 - 0x02A0)
class ASmokePlume : public AEmitter
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x02A0 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82246 ];

		return pClassPointer;
	};

};

UClass* ASmokePlume::pClassPointer = NULL;

// Class NetherGame.SmokePlumeLargeBlack
// 0x0000 (0x02A8 - 0x02A8)
class ASmokePlumeLargeBlack : public ASmokePlume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82254 ];

		return pClassPointer;
	};

};

UClass* ASmokePlumeLargeBlack::pClassPointer = NULL;

// Class NetherGame.SmokePlumeMedium
// 0x0000 (0x02A8 - 0x02A8)
class ASmokePlumeMedium : public ASmokePlume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82258 ];

		return pClassPointer;
	};

};

UClass* ASmokePlumeMedium::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif