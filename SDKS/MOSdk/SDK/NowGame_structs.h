/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: NowGame_structs.h
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

// ScriptStruct NowGame.ChatManager.ChatChannels
// 0x0010
struct FChatChannels
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iNr;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowPlayerController.Target
// 0x0024
struct FTarget
{
	struct FString                                     AtlasName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              LastKnownHealth;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowPlayerController.PetSlot
// 0x0020
struct FPetSlot
{
	class ANowAtlasAvatarAi*                           pActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sMode;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bActive : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.ClientEffect.EffectInfo
// 0x0024
struct FEffectInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EffectBlendTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              EffectBlendTimeMax;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FColor                                      ColorInfo;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       NameInfo;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              FloatInfo;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowPlayerController.PylonInfo
// 0x0058
struct FPylonInfo
{
	struct FString                                     PylonGuid;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PylonName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PylonGuild;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     PylonLoc;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	float                                              PylonAOE;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              PylonAOEMeters;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                PylonAtt;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                PylonDef;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              PylonAOETgt;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                PylonAttTgt;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                PylonDefTgt;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                PylonTier;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                PylonNpcUpkeep;                                   		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsMyGuildPylon : 1;                              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.CombatSystemMeleeNew.PendingCombatMoves
// 0x002C
struct FPendingCombatMoves
{
	float                                              TimeLeft;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeLeftToTrace;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TraceLength;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CombatReqEnum;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     AddB;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TellB;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      AddBOnTarget : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTrace : 1;                                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct NowGame.CombatSystemRangedNew.arrowVelocity
// 0x000C
struct FarrowVelocity
{
	struct FVector2D                                   horizontalVelocity;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              verticalSpeed;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowHUD.rangedCrosshairData
// 0x0030
struct FrangedCrosshairData
{
	float                                              minToPerfectTime;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              perfectTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              perfectToMaxTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              penalty;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MaxRadius;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              MinRadius;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              percentOfTransitionComplete;                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              totalChargeTime;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              firstTimeSample;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              lastTimeSample;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              FOVMod;                                           		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.MountBrain.FearTest
// 0x0008
struct FFearTest
{
	class AActor*                                      WhatActor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bScared : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.MountBrain.MountMoves
// 0x0012
struct FMountMoves
{
	float                                              TimePassed;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TriggerTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ExecTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FloatDiff;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      MoveType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      MoveFlag;                                         		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct NowGame.NewTugSession.CurState
// 0x0008
struct FCurState
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              fLength;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarAi.FollowPosStruct
// 0x0010
struct FFollowPosStruct
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	class ANowAtlasAvatarAi*                           pCurrent;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarAi.sAiAttackTypes
// 0x0010
struct FsAiAttackTypes
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iDps;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarAi.sPendingMove
// 0x0018
struct FsPendingMove
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              fMoveTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTriggerTimer;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDetour : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTriggerd : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct NowGame.NowAtlasAvatarAiDynamic.DynamicFeatureBones
// 0x0014
struct FDynamicFeatureBones
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       SkelControlName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	class USkelControlDynamicCreature*                 SkelControl;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LastKnownValue;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarAiDynamic.DynamicFeatureParams
// 0x0014
struct FDynamicFeatureParams
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      ParamType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	int                                                LastKnownValue;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarPlayerHouse.S_doors
// 0x0008
struct FS_doors
{
	class UNowStaticMeshcomponentDoor*                 openDoor;                                         		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UNowStaticMeshcomponentDoor*                 closedDoor;                                       		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct NowGame.NowAtlasAvatarPlayerHouse.S_House
// 0x0048
struct FS_House
{
	struct FString                                     Construction[ 0x3 ];                              		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     finshed[ 0x3 ];                                   		// 0x0024 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowAtlasAvatarPlayerHouse.guildStonePos
// 0x0048
struct FguildStonePos
{
	struct FVector                                     T1;                                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     t2;                                               		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     t3;                                               		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    r1;                                               		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FRotator                                    r2;                                               		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FRotator                                    r3;                                               		// 0x003C (0x000C) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarPlayerHouse.moduleWorkBenchPos
// 0x0018
struct FmoduleWorkBenchPos
{
	struct FVector                                     C;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     D;                                                		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowAtlasAvatarPlayerHouse.moduleWorkBench
// 0x0010
struct FmoduleWorkBench
{
	class ANowStaticMeshActor*                         Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     moduleName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowChildHudCreate.ParamBtn
// 0x0015
struct FParamBtn
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CurValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaxValue;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      ParamType;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowChildHudDebug.GraphInfoStruct
// 0x0008
struct FGraphInfoStruct
{
	float                                              DT;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FColor                                      MyColor;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowChildHudGM.BrokenItem
// 0x0028
struct FBrokenItem
{
	struct FString                                     RawData;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ItemType;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Guid;                                             		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowPlayerController.PetInfo
// 0x0034
struct FPetInfo
{
	struct FString                                     sPetName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPetType;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iPetLevel;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                iPetLoyalty;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                iPetHP;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                iStableIndex;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     sState;                                           		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.OnlineSubsystemNowGame.s_GMPetition
// 0x0034
struct Fs_GMPetition
{
	struct FString                                     petitionSourceName;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Category;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClaimedBy;                                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOnline : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowPawn.PawnGib
// 0x0028
struct FPawnGib
{
	struct FString                                     LimbName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               GibMesh;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               GibPhysics;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   StartSound;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HitGroundSound;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             StartPS;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TrailPS;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             HitGroundPS;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowEntryDatastore.Morphs
// 0x000C
struct FMorphs
{
	int                                                Max;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Min;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Current;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHud.ItemOption
// 0x001C
struct FItemOption
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Quantity;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.GFXChatMessage
// 0x0010
struct FGFXChatMessage
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      ChatOwner;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftGlassInfo
// 0x003C
struct FsCraftGlassInfo
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           matA;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           matB;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           matC;                                             		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.OverseerKeepNPC
// 0x0028
struct FOverseerKeepNPC
{
	struct FString                                     sDisplayName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CostCoin;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CostPP;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                UpkeepCoin;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                UpkeepCP;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.ReciveMail
// 0x0024
struct FReciveMail
{
	struct FString                                     sItemGuid;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemData;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sItemSender;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.sBrokerCategory
// 0x0014
struct FsBrokerCategory
{
	struct FString                                     sLabel;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iID;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                iParent;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sStringIntPair
// 0x0010
struct FsStringIntPair
{
	struct FString                                     sString;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iInt;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sValidCookingTools
// 0x0010
struct FsValidCookingTools
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedHeat : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftShieldType
// 0x001C
struct FsCraftShieldType
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iShieldType;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftShieldFrame
// 0x001C
struct FsCraftShieldFrame
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iShieldType;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftArmorParts
// 0x0010
struct FsCraftArmorParts
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iFlag;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftArmorStyle
// 0x003C
struct FsCraftArmorStyle
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iMaterialFlag;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                iPieceFlags;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fVisMinValue;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fVisMaxValue;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fnVisMinValue;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              fnVisMaxValue;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftRangedShape
// 0x0028
struct FsCraftRangedShape
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bWorksSingle : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftRangedType
// 0x0024
struct FsCraftRangedType
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftRangedComp
// 0x001C
struct FsCraftRangedComp
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSingle : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftWeaponHandle
// 0x0028
struct FsCraftWeaponHandle
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBladeOnly : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftWeaponBlade
// 0x0028
struct FsCraftWeaponBlade
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSendName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillName;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBlade : 1;                                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowGFXHudScene.sOpenWindows
// 0x001C
struct FsOpenWindows
{
	struct FString                                     sWindowID;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     vLocation;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                iDeposit;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sSlotUpdate
// 0x0008
struct FsSlotUpdate
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iDeposit;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sTreasurerItemStruct
// 0x0038
struct FsTreasurerItemStruct
{
	struct FString                                     sGuid;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Status;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Quantity;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                cp;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              PP;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                stackSize;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.BuyItems
// 0x0020
struct FBuyItems
{
	struct FString                                     sGuid;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                costSilver;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CostPP;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sAttributeToolTips
// 0x0028
struct FsAttributeToolTips
{
	struct FString                                     sAttribute;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sGroup;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sToolTip;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCanToggle : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowGFXHudScene.sTaskIndex
// 0x0010
struct FsTaskIndex
{
	struct FString                                     taskGuid;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                taskIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.MurderIndexPair
// 0x0010
struct FMurderIndexPair
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.s_Books
// 0x0058
struct Fs_Books
{
	struct FString                                     ContentName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Author;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Skill;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinSkill;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxSkill;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     BookGroup;                                        		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BookCost;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                BookStatus;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     BookDesc;                                         		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.sKeyBinds
// 0x0034
struct FsKeyBinds
{
	struct FString                                     sID;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sCategory;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLabel;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sKey;                                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCtrl : 1;                                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlt : 1;                                         		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShift : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct NowGame.NowGFXHudScene.SkillData
// 0x0018
struct FSkillData
{
	struct FString                                     sSkillGuid;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillData;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.TaskLocation
// 0x0010
struct FTaskLocation
{
	struct FString                                     LocationName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                locationID;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.ChatBubbleColors
// 0x0024
struct FChatBubbleColors
{
	struct FString                                     chatColor;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     backColor;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BorderColor;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.CachedTargetInfo
// 0x0034
struct FCachedTargetInfo
{
	int                                                hpCur;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                hpMax;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                spCur;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                spMax;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                mpCur;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                mpMax;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Flag;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     tgtName;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     relation;                                         		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXHudScene.sCraftArmorMaterials
// 0x0010
struct FsCraftArmorMaterials
{
	struct FString                                     sLabelName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iA;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.sGuildMember
// 0x0010
struct FsGuildMember
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iRank;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXHudScene.GuidName
// 0x0018
struct FGuidName
{
	struct FString                                     sSkillGuid;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sSkillData;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIInfoTalker.sChat
// 0x0010
struct FsChat
{
	int                                                iChatId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIInfoTalker.sResponse
// 0x0020
struct FsResponse
{
	int                                                iChatId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iTargetId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     sMessage;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sScriptFunction;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowGFXSceneGuild.Member
// 0x0010
struct FMember
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXSceneOverseer.KeepNPC
// 0x0028
struct FKeepNPC
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CostCoin;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CostPP;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                UpkeepCoin;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                UpkeepCP;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowGFXSceneTreasurer.TreasurerItemStruct
// 0x0038
struct FTreasurerItemStruct
{
	struct FString                                     sGuid;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Status;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Quantity;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                cp;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              PP;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                stackSize;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowPawn.MaterialIntPair
// 0x0008
struct FMaterialIntPair
{
	class UMaterialInstance*                           pMaterial;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iInt;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.WeatherControl.WeatherData
// 0x0010
struct FWeatherData
{
	int                                                clouds;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Rain;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Fog;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      MagicThunder : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.NowPlayerDatastore.UITarget
// 0x0028
struct FUITarget
{
	int                                                Health;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxHealth;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Flag;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     AtlasName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      pActor;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowPlayerDatastore.UIWindow
// 0x0010
struct FUIWindow
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       NameTag;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowScout.sPathStruct
// 0x001C
struct FsPathStruct
{
	int                                                iPathId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ANowPathNodes* >                     vNodes;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPathString;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.NowSkeletalMeshActor.MatPair
// 0x0008
struct FMatPair
{
	class UMaterialInstance*                           matA;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           matB;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.NowSkeletalMeshActorDollEditor.MaterialIntPairPreview
// 0x0008
struct FMaterialIntPairPreview
{
	class UMaterialInstance*                           pMaterial;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                iInt;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.OnlineSubsystemNowGame.LocalPick
// 0x0028
struct FLocalPick
{
	int                                                IntValue;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StrValue;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                OrgSlot;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	class UContentInfo*                                ContentInfo;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     strguid;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.OnlineSubsystemNowGame.sPendingTimer
// 0x0040
struct FsPendingTimer
{
	struct FString                                     sID;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fTimer;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     sCancelDesc;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.OnlineSubsystemNowGame.s_GuildWars
// 0x0010
struct Fs_GuildWars
{
	struct FString                                     guildName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      atWar : 1;                                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      isChallengingGuild : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct NowGame.OnlineSubsystemNowGame.ItemInfo
// 0x0014
struct FItemInfo
{
	int                                                slotId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      isStabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.OnlineSubsystemNowGame.s_MoStatInfo
// 0x0010
struct Fs_MoStatInfo
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StatValue;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.SkelControlDynamicCreature.ControllInfo
// 0x001C
struct FControllInfo
{
	float                                              BoneSize;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AddTranslation;                                   		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AddRotation;                                      		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct NowGame.SkelControlDynamicCreature.ChildInfo
// 0x0014
struct FChildInfo
{
	struct FName                                       ChildName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FControllInfo >                     StateInfo;                                        		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct NowGame.SkelControlDynamicCreature.ParentInfo
// 0x0008
struct FParentInfo
{
	class USkelControlDynamicCreature*                 Parent;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ChildIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIAction_CreateCharacter.SrcMap
// 0x0018
struct FSrcMap
{
	struct FString                                     ParamName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     DatastoreStr;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UINow_ContentButton.InfoRow
// 0x002C
struct FInfoRow
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Min;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Max;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Cur;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Steps;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStats : 1;                                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UINow_ContentButton.NowItem
// 0x0018
struct FNowItem
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInfoRow >                          Rows;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_ArmorCreationNew.AC_Armor
// 0x003C
struct FAC_Armor
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ArmorFlags;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PieceFlags;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              VisMinValue;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              VisMaxValue;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              nVisMinValue;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              nVisMaxValue;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_ArmorCreationNew.AC_ArmorPiece
// 0x0010
struct FAC_ArmorPiece
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Flag;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_Bank.BankItemData
// 0x0008
struct FBankItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_BlacksmithWindow.BlacksmithingButton
// 0x0010
struct FBlacksmithingButton
{
	class UUILabelButton*                              Button;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     RecipeName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_BowCreationNew.BC_Comp
// 0x001C
struct FBC_Comp
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSingle : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_BowCreationNew.BC_Shape
// 0x0028
struct FBC_Shape
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bWorksSingle : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_BowCreationNew.BC_Type
// 0x0024
struct FBC_Type
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_CharacterSheet.EquipItemData
// 0x0008
struct FEquipItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// ScriptStruct NowGame.UIScene_CharacterSheet.Tab
// 0x0008
struct FTab
{
	class UUIButton*                                   m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    m_Panel;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_CharacterSheet.Equipmentsize
// 0x0014
struct FEquipmentsize
{
	int                                                InventorySlot;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     EquipmentSlot;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UContentInfo*                                Info;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_Finnish.RaceLocations
// 0x0014
struct FRaceLocations
{
	int                                                Points[ 0x5 ];                                    		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_GuildDiplomacy.guildWar
// 0x0018
struct FguildWar
{
	struct FString                                     GuildGuid;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     guildName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_GuildMembers.Record
// 0x0014
struct FRecord
{
	class UUILabel*                                    Label;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUICheckbox*                                 Check;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     avatarName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_HackFlagList.GMHackFlagLabels
// 0x0010
struct FGMHackFlagLabels
{
	class UUILabelButton*                              GMHackFlagSource;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              GMHackFlagCategory;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              GMHackFlagDescription;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              GMHackFlagClaimedBy;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_HouseTrade.TradeItemData
// 0x0018
struct UUIScene_HouseTrade_FTradeItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Quantity;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_ItemGuid;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_Inventory.InventoryItemData
// 0x0008
struct FInventoryItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_LogWindow.TextPropertyMap
// 0x001C
struct FTextPropertyMap
{
	struct FString                                     m_TextType;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      m_TextColor;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_TextFont;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_LootWindow.LootItemData
// 0x0008
struct FLootItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_PetBank.PetItemData
// 0x0008
struct FPetItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_PetitionList.GMPetitionLabels
// 0x0010
struct FGMPetitionLabels
{
	class UUILabelButton*                              GMPetitionSource;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              GMPetitionCategory;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              GMPetitionDescription;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              GMPetitionClaimedBy;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_PlayerVendorSell.TradeItemData
// 0x0018
struct UUIScene_PlayerVendorSell_FTradeItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Quantity;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_ItemGuid;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_ScreenOptions.ShadowSettings
// 0x0010
struct FShadowSettings
{
	int                                                Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              perpixel;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShadow : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_ShieldCreationNew.SC_Base
// 0x0018
struct FSC_Base
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_ShieldCreationNew.SC_Frame
// 0x0010
struct FSC_Frame
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFrame : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_SkillBook.Action
// 0x001C
struct FAction
{
	struct FString                                     ActionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ActionDescription;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      RequersTarget : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_SkillBook.Skill
// 0x0024
struct UUIScene_SkillBook_FSkill
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      SkillGain : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      SkillLoss : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	class UUIPanel*                                    frame;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    skillName;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    SkillValueText;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIProgressBar*                              SkillValue;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        SkillSlot;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentButton*                      SkillButton;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentButton*                      StateButton;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_Skills.SkillButton
// 0x001C
struct FSkillButton
{
	class UUINow_ContentButton*                        Lock;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabelButton*                              Button;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUINow_SkillBar*                             Bar;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    BG;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bGroup : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                iValue;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_Skills.SkillGroup
// 0x0028
struct FSkillGroup
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           sChilds;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      iChilds;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                iValue;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_SpellBook.Reagent
// 0x0010
struct FReagent
{
	class USurface*                                    Image;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     reName;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_SpellBook.SpellInfo
// 0x000C
struct FSpellInfo
{
	class UUILabelButton*                              SpellButton;                                      		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USpellEffect_ContentInfo*                    Info;                                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SpellID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_SpellBook.SpellItemContainer
// 0x000C
struct FSpellItemContainer
{
	class UUIAtlas_ContentSlot*                        Slot;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentButton*                      Button;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                iSlot;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_StableWindow.StableButton
// 0x0010
struct FStableButton
{
	class UUILabelButton*                              Button;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     avatarName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct NowGame.UIScene_StableWindow.ClaimButton
// 0x0008
struct FClaimButton
{
	class UUILabelButton*                              Button;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                slotId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_StealingInventory.TradeItemData
// 0x000C
struct UUIScene_StealingInventory_FTradeItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Quantity;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_Trade.TradeItemData
// 0x0008
struct UUIScene_Trade_FTradeItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_VendorWindow.nowVendorItemWidgetData
// 0x0014
struct FnowVendorItemWidgetData
{
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Cost;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_Quantity;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_MaxQuantity;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_VendorWindow.nowVendorSellData
// 0x0008
struct FnowVendorSellData
{
	int                                                m_VendorSlot;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_Quantity;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct NowGame.UIScene_WeaponCreationNew.WC_Handle
// 0x0028
struct FWC_Handle
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBladeOnly : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_WeaponCreationNew.WC_Head
// 0x0028
struct FWC_Head
{
	struct FString                                     LabelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SendName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     skillName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bBlade : 1;                                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct NowGame.UIScene_WorldObjectTrade.TradeItemData
// 0x0018
struct UUIScene_WorldObjectTrade_FTradeItemData
{
	class UUINow_ContentButton*                        m_Button;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIAtlas_ContentSlot*                        m_Slot;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_Quantity;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_ItemGuid;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif