/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: NetherGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct NetherGame.NetherDataTypes.CustomAnimInfo
// 0x0014
struct FCustomAnimInfo
{
	struct FName                                       AnimName_3P;                                      		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              AnimRate;                                         		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct NetherGame.NetherDataTypes.EnemyAttackScript
// 0x0040
struct FEnemyAttackScript
{
	unsigned char                                      AttackType;                                       		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       AttackAnim;                                       		// 0x0004 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FAnimNotifyEvent >                  HitBoxNotifies;                                   		// 0x000C (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                AttackRange;                                      		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     Extents;                                          		// 0x0020 (0x000C) [0x0000000000000002]              ( CPF_Const )
	int                                                DamageDay;                                        		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DamageNight;                                      		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Momentum;                                         		// 0x0034 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      DamageType;                                       		// 0x0038 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct NetherGame.NetherDataTypes.EnemyAttackAnimEvent
// 0x0024
struct FEnemyAttackAnimEvent
{
	struct FAnimNotifyEvent                            HitBoxNotify;                                     		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              StartTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasTriggered : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NetherGame.NetherDataTypes.LevelUpRewards
// 0x0008
struct FLevelUpRewards
{
	int                                                Exp;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StatPoints;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.NetherDataTypes.TimeOfDayVariables
// 0x0028
struct FTimeOfDayVariables
{
	float                                              Health;                                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ChaseSpeed;                                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SightRadius_Stand;                                		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SightRadius_Crouch;                               		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SightRadius_Crawl;                                		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HearRadius_Quiet;                                 		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HearRadius_Medium;                                		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HearRadius_Loud;                                  		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              PeripheralVisionAngle;                            		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              EnemyLeashDistance;                               		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct NetherGame.NetherPlayerController.NetherServerDocSet
// 0x0014
struct FNetherServerDocSet
{
	int                                                CharacterSlotIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class ANDocument_CharacterInfo*                    CharacterInfo;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	class ANDocument_CharacterInv*                     CharacterInv;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct NetherGame.GFxMessageBox.Message
// 0x0038
struct FMessage
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                PosX;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PosY;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                FontSize;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                FontColor;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     Align;                                            		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NetherGame.TeleporterPawn.TimeOfDayVariables_Teleporter
// 0x003C
struct FTimeOfDayVariables_Teleporter
{
	unsigned char                                      TimeOfDay;                                        		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              TimeBeforeTeleMin;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeBeforeTeleMax;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportRespawnMin;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportRespawnMax;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportAttackRespawnMin;                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportAttackRespawnMax;                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistancePerTeleport;                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDistancePerTeleport;                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRunningThreshold;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinJumpToOffset;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxJumpToOffset;                                  		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AttackedMaxJumpToOffsetMin;                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AttackedMaxJumpToOffsetMax;                       		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxJumpForwardOffset;                             		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.HorrorSubBoss.XPOwed
// 0x000C
struct FXPOwed
{
	class ANetherPlayerController*                     DamageDealer;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                XPearned;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NameTagManager.NameTagData
// 0x0010
struct FNameTagData
{
	class UGFxNameTag*                                 NameTagDisplay;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              FocusTimestamp;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInFocus : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NetherGame.NetherAnimBlendByMeleeAction.BasicMeleeAttack
// 0x0009
struct FBasicMeleeAttack
{
	struct FName                                       AttackName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Direction;                                        		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.NetherInventoryManager.WeaponAmmoKeyPair
// 0x0008
struct FWeaponAmmoKeyPair
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AmmoID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NetherPlayerController.DebugMapActorColorAndType
// 0x0010
struct FDebugMapActorColorAndType
{
	class UClass*                                      ActorType;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      ScaleformColor;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bShowDebugLocations : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NetherGame.NetherPlayerController.DebugNetherMapData
// 0x0020
struct FDebugNetherMapData
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      ScaleformColor;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     LocationString;                                   		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NetherGame.NetherMenuOverlayUI.OverlaySlaveDefinition
// 0x001C
struct FOverlaySlaveDefinition
{
	class UNetherMoviePlayer*                          Movie;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      MovieClass;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UGFxButton*                                  MenuItem;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      bShowCharacterSlots : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowCAP : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct NetherGame.NetherObjective.PossibleVolumeInfo
// 0x001C
struct FPossibleVolumeInfo
{
	struct FString                                     ObjectiveTag;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Special;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ANetherTerritoryVolume*                      ObjectiveVolume;                                  		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NetherObjective_SpawnEnemies.EnemySpawnData
// 0x0010
struct FEnemySpawnData
{
	class UClass*                                      EnemyClass;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChanceToSpawn;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BonusXP;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.NetherObjective_SpawnEnemies.SpawnDataSet
// 0x0010
struct FSpawnDataSet
{
	TArray< struct FEnemySpawnData >                   SpawnData;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct NetherGame.NetherObjective_SpawnEnemies.PendingSpawn
// 0x000C
struct FPendingSpawn
{
	float                                              SpawnTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ANetherTerritoryVolume*                      OwningVolume;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NetherObjective_LootDrop.LootSpawn
// 0x000C
struct FLootSpawn
{
	class UClass*                                      InventoryClass;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChanceToSpawn;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.OnlineSubsystemNether.ServerDesc
// 0x0040
struct FServerDesc
{
	struct FString                                     HostName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HostIP;                                           		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerStatus;                                     		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerPlayers;                                    		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NetherGame.NetherSpawnGroupData.GroupData
// 0x001C
struct FGroupData
{
	float                                              Day_ChanceToSpawn;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Day_MinToSpawn;                                   		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Day_MaxToSpawn;                                   		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Night_ChanceToSpawn;                              		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Night_MinToSpawn;                                 		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Night_MaxToSpawn;                                 		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                QuantityCurrent;                                  		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct NetherGame.NetherSpawnGroupData_Enemies.GroupData_Enemies
// 0x0020(0x003C - 0x001C)
struct FGroupData_Enemies : FGroupData
{
	class UClass*                                      EnemyType;                                        		// 0x001C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UNetherEnemyLootTable*                       LootTable;                                        		// 0x0024 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< float >                                    CooldownEndTimestamps;                            		// 0x002C (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct NetherGame.NetherSpawnGroupData_Pickups.GroupData_Pickups
// 0x0008(0x0024 - 0x001C)
struct FGroupData_Pickups : FGroupData
{
	class UClass*                                      PickupType;                                       		// 0x001C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct NetherGame.NetherTradeData.TradeItem
// 0x000C
struct FTradeItem
{
	class UClass*                                      ItemToTrade;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AmountRequested;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.NetherTradeData.TradeDeal
// 0x0018
struct FTradeDeal
{
	TArray< struct FTradeItem >                        TradeItems;                                       		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                XPReward;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CashReward;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NetherGame.NPointOfInterest.NetherPOIDefaults
// 0x000C
struct FNetherPOIDefaults
{
	int                                                FontSize;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InitialRotation;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCaptializeName : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NetherGame.NStore.TemplatePricePair
// 0x0014
struct FTemplatePricePair
{
	class UClass*                                      TemplateClass;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NormalPrice;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PremiumPrice;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SalePrice;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NStore.ClassPricePair
// 0x0014
struct FClassPricePair
{
	class UClass*                                      InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                NormalPrice;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PremiumPrice;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SalePrice;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NThrownObject_AOEGrenadeBase.HitPawn
// 0x000C
struct FHitPawn
{
	class APawn*                                       PawnHit;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DistanceFromGrenade;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NetherGame.NWeapRanged_Shotgun.NetherShotgunHitInfo
// 0x006C
struct FNetherShotgunHitInfo
{
	int                                                NumHits;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x000C (0x0060) [0x0000000000080000]              ( CPF_Component )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif