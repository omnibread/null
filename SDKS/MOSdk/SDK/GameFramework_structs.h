/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_structs.h
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

// ScriptStruct GameFramework.GameCrowdAgent.RecentInteraction
// 0x000C
struct FRecentInteraction
{
	struct FName                                       InteractionTag;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              InteractionDelay;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameCrowdAgent.BehaviorEntry
// 0x000C
struct FBehaviorEntry
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BehaviorFrequency;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNeverRepeat : 1;                                 		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHasBeenUsed : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanBeUsed : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct GameFramework.FrameworkGame.RequiredMobileInputConfig
// 0x001C
struct FRequiredMobileInputConfig
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           RequireZoneNames;                                 		// 0x000C (0x000C) [0x0000000000504000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bIsAttractModeGroup : 1;                          		// 0x0018 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
};

// ScriptStruct GameFramework.SeqAct_GameCrowdSpawner.AgentArchetypeInfo
// 0x001C
struct FAgentArchetypeInfo
{
	class UObject*                                     AgentArchetype;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrequencyModifier;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAllowed;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrSpawned;                                      		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UObject* >                           GroupMembers;                                     		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentInfo
// 0x0014
struct FGameCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Chance;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale3D;                                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentList
// 0x0014
struct FGameCrowdAttachmentList
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGameCrowdAttachmentInfo >          List;                                             		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GameFramework.GameTypes.SpecialMoveStruct
// 0x0014
struct FSpecialMoveStruct
{
	struct FName                                       SpecialMoveName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class AGamePawn*                                   InteractionPawn;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      InteractionActor;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.GameSpecialMoveInfo
// 0x0010
struct FGameSpecialMoveInfo
{
	struct FName                                       SpecialMoveName;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      SpecialMoveClass;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGameSpecialMove*                            SpecialMoveInstance;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0038
struct FTakeHitInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	class APawn*                                       InstigatedBy;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      HitBoneIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FVector                                     RadialDamageOrigin;                               		// 0x002C (0x000C) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x0078
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	struct FVector                                     LocAmplitude;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocFrequency;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     LocSinOffset;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              FOVAmplitude;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              FOVFrequency;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              FOVSinOffset;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x0064 (0x0001) [0x0000000000000000]              
	struct FName                                       ShakeName;                                        		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned long                                      bOverrideTargetingDampening : 1;                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TargetingDampening;                               		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x0030
struct FScreenShakeAnimStruct
{
	class UCameraAnim*                                 Anim;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseDirectionalAnimVariants : 1;                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class UCameraAnim*                                 Anim_Left;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Right;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Rear;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              AnimScale;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AnimBlendInTime;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              AnimBlendOutTime;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRandomSegment : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RandomSegmentDuration;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSingleInstance : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               RotParams;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotOffset;                                        		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LocAmplitude;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocFrequency;                                     		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocSinOffset;                                     		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               LocParams;                                        		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocOffset;                                        		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x0028
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                    		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              WorldWeight;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnWeight;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Extent;                                           		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                TraceInterval;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FramesUntilNextTrace;                             		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x0034
struct FCamFocusPointParams
{
	class AActor*                                      FocusActor;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FocusBoneName;                                    		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FocusWorldLoc;                                    		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraFOV;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   InterpSpeedRange;                                 		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   InFocusFOV;                                       		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAlwaysFocus : 1;                                 		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAdjustCamera : 1;                                		// 0x002C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIgnoreTrace : 1;                                 		// 0x002C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              FocusPitchOffsetDeg;                              		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                       		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OffsetMid;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OffsetLow;                                        		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GameFramework.MobileHUD.TextureUVs
// 0x0010
struct FTextureUVs
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchData
// 0x0021
struct FTouchData
{
	int                                                Handle;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   Location;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              InitialTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastMoveDeviceTime;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MoveDeltaTime;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInUse : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMobileInputZone*                            Zone;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileMenuObject.UVCoords
// 0x0014
struct FUVCoords
{
	unsigned long                                      bCustomCoords : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              U;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputGroup
// 0x0018
struct FMobileInputGroup
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMobileInputZone* >                  AssociatedZones;                                  		// 0x000C (0x000C) [0x0000000004400000]              ( CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x0018
struct FPropertyInfo
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bModifyProperty : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     PropertyValue;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif