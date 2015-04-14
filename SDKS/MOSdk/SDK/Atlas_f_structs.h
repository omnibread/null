/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Atlas_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function Atlas.AtlasBoundsShape.ResetDefaults
// [0x00020802] ( FUNC_Event )
struct UAtlasBoundsShape_eventResetDefaults_Parms
{
};

// Function Atlas.AtlasHUD.ToggleHudScene
// [0x00024102] 
struct AAtlasHUD_execToggleHudScene_Parms
{
	class UUIScene*                                    SceneToToggle;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                Player;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bCloseScene : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.AtlasHUD.HideHudScene
// [0x00024102] 
struct AAtlasHUD_execHideHudScene_Parms
{
	class UUIScene*                                    SceneToHide;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCloseScene : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.AtlasHUD.ShowHudScene
// [0x00024102] 
struct AAtlasHUD_execShowHudScene_Parms
{
	class UUIScene*                                    SceneToShow;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                Player;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.AtlasHUD.ResolveHudScene
// [0x00024102] 
struct AAtlasHUD_execResolveHudScene_Parms
{
	class UUIScene*                                    Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                Player;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UUIScene*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIScene*                                 Temp;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIScene_Atlas_BaseScene*                 AtlasTemp;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasHUD.HudSceneDeactivated
// [0x00020002] 
struct AAtlasHUD_execHudSceneDeactivated_Parms
{
	class UUIScene*                                    DeactivatedScene;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasHUD.ResolveUI
// [0x00020902] ( FUNC_Event )
struct AAtlasHUD_eventResolveUI_Parms
{
	struct FString                                     InUIName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UUIScene*                                    ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasHUD.OpenUI
// [0x00020902] ( FUNC_Event )
struct AAtlasHUD_eventOpenUI_Parms
{
	class UAtlasAvatarComponent*                       InNpcComp;                                        		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	TArray< struct FString >                           InKeys;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           InValues;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// class UUIScene*                                 HudScene;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FString                                  HudNameStr;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UUIScene_Atlas_BaseScene*                 AtlasScene;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasHUD.DrawEngineHUD
// [0x00020000] 
struct AAtlasHUD_execDrawEngineHUD_Parms
{
};

// Function Atlas.AtlasHUD.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AAtlasHUD_eventPostBeginPlay_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        keys;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        Values;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.AtlasPawn.TakeDamage
// [0x00024800] ( FUNC_Event )
struct AAtlasPawn_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.AtlasPawn.GetDefaultCameraMode
// [0x00020102] 
struct AAtlasPawn_execGetDefaultCameraMode_Parms
{
	class APlayerController*                           RequestedBy;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPawn.Tick
// [0x00020002] 
struct AAtlasPawn_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.AtlasPawn.GetAvatarID
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execGetAvatarID_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.AtlasPawn.GetAtlasName
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execGetAtlasName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.AtlasPawn.AtlasUnSelect
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execAtlasUnSelect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPawn.AtlasSelect
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execAtlasSelect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPawn.AtlasUse
// [0x00024400] ( FUNC_Native )
struct AAtlasPawn_execAtlasUse_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPawn.IsTarget
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execIsTarget_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPawn.SetServerTarget
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execSetServerTarget_Parms
{
};

// Function Atlas.AtlasPawn.GetAtlasComponent
// [0x00020400] ( FUNC_Native )
struct AAtlasPawn_execGetAtlasComponent_Parms
{
	class UComponent*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Atlas.AtlasStructureAvatar.Tick
// [0x00020002] 
struct AAtlasStructureAvatar_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.AtlasProjectileAvatar.Tick
// [0x00020002] 
struct AAtlasProjectileAvatar_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.DrawDebugLine
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemAtlas_eventDrawDebugLine_Parms
{
	struct FVector                                     vStart;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vEnd;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.GetAchievements
// [0x00424000] 
struct UOnlineSubsystemAtlas_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0014 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadAchievements
// [0x00024000] 
struct UOnlineSubsystemAtlas_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.UnlockAchievement
// [0x00020000] 
struct UOnlineSubsystemAtlas_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPersistentData_Rotator
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetPersistentData_Rotator_Parms
{
	struct FString                                     AttributeName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPersistentData_Vector
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetPersistentData_Vector_Parms
{
	struct FString                                     AttributeName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.BindPlayerPawn
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execBindPlayerPawn_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.AddDefaultInventory
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAddDefaultInventory_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.AnnounceHostReady
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAnnounceHostReady_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.RecalculateSkillRating
// [0x00420000] 
struct UOnlineSubsystemAtlas_execRecalculateSkillRating_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.AcceptGameInvite
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineSubsystemAtlas_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     GameInviteSettings;                               		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.WriteArbitrationData
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execWriteArbitrationData_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetArbitratedPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineArbitrationRegistrant >      ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnArbitrationRegistrationComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.RegisterForArbitration
// [0x00020000] 
struct UOnlineSubsystemAtlas_execRegisterForArbitration_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetOnlineGameState
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetOnlineGameState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearEndOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddEndOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearStartOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddStartOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.StartOnlineGame
// [0x00020000] 
struct UOnlineSubsystemAtlas_execStartOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.UnregisterPlayer
// [0x00020000] 
struct UOnlineSubsystemAtlas_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.RegisterPlayer
// [0x00020000] 
struct UOnlineSubsystemAtlas_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetResolvedConnectString
// [0x00420000] 
struct UOnlineSubsystemAtlas_execGetResolvedConnectString_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ConnectInfo;                                      		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearJoinOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddJoinOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.JoinOnlineGame
// [0x00420000] 
struct UOnlineSubsystemAtlas_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineSubsystemAtlas_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.FreeSearchResults
// [0x00024000] 
struct UOnlineSubsystemAtlas_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetGameSearch
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.BindPlatformSpecificSessionToSearch
// [0x00020000] 
struct UOnlineSubsystemAtlas_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineSubsystemAtlas_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlatformSpecificSessionInfo
// [0x00420000] 
struct UOnlineSubsystemAtlas_execReadPlatformSpecificSessionInfo_Parms
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.CancelFindOnlineGames
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCancelFindOnlineGames_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearFindOnlineGamesCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddFindOnlineGamesCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.FindOnlineGames
// [0x00020000] 
struct UOnlineSubsystemAtlas_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearDestroyOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddDestroyOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.DestroyOnlineGame
// [0x00020000] 
struct UOnlineSubsystemAtlas_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetGameSettings
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetGameSettings_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearUpdateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddUpdateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.UpdateOnlineGame
// [0x00024000] 
struct UOnlineSubsystemAtlas_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData : 1;                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearCreateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddCreateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.CreateOnlineGame
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.DeleteMessage
// [0x00020000] 
struct UOnlineSubsystemAtlas_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetFriendMessages
// [0x00420000] 
struct UOnlineSubsystemAtlas_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriendMessage >              FriendMessages;                                   		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.JoinFriendGame
// [0x00020000] 
struct UOnlineSubsystemAtlas_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.SendGameInviteToFriends
// [0x00024000] 
struct UOnlineSubsystemAtlas_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Friends;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.SendGameInviteToFriend
// [0x00024000] 
struct UOnlineSubsystemAtlas_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.SendMessageToFriend
// [0x00020000] 
struct UOnlineSubsystemAtlas_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.RemoveFriend
// [0x00020000] 
struct UOnlineSubsystemAtlas_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.DenyFriendInvite
// [0x00020000] 
struct UOnlineSubsystemAtlas_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.AcceptFriendInvite
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendByName
// [0x00024000] 
struct UOnlineSubsystemAtlas_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.AddFriend
// [0x00024000] 
struct UOnlineSubsystemAtlas_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetKeyboardInputResults
// [0x00420000] 
struct UOnlineSubsystemAtlas_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ShowKeyboardUI
// [0x00024000] 
struct UOnlineSubsystemAtlas_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.SetOnlineStatus
// [0x00420000] 
struct UOnlineSubsystemAtlas_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           LocalizedStringSettings;                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 Properties;                                       		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetFriendsList
// [0x00424000] 
struct UOnlineSubsystemAtlas_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriend >                     Friends;                                          		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadFriendsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddReadFriendsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadFriendsList
// [0x00024000] 
struct UOnlineSubsystemAtlas_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.WritePlayerStorage
// [0x00020000] 
struct UOnlineSubsystemAtlas_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPlayerStorage
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemAtlas_execReadPlayerStorageForNetId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NetId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorage
// [0x00020000] 
struct UOnlineSubsystemAtlas_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearWriteProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddWriteProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.WriteProfileSettings
// [0x00020000] 
struct UOnlineSubsystemAtlas_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetProfileSettings
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddReadProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ReadProfileSettings
// [0x00020000] 
struct UOnlineSubsystemAtlas_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearFriendsChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendsChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearMutingChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddMutingChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ShowFriendsUI
// [0x00020000] 
struct UOnlineSubsystemAtlas_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.IsMuted
// [0x00020000] 
struct UOnlineSubsystemAtlas_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.AreAnyFriends
// [0x00420000] 
struct UOnlineSubsystemAtlas_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FFriendsQuery >                     Query;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.IsFriend
// [0x00020000] 
struct UOnlineSubsystemAtlas_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.CanShowPresenceInformation
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.CanViewPlayerProfiles
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.CanPurchaseContent
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.CanDownloadUserContent
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.CanCommunicate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.CanPlayOnline
// [0x00020000] 
struct UOnlineSubsystemAtlas_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemAtlas_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemAtlas_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPlayerNickname
// [0x00020000] 
struct UOnlineSubsystemAtlas_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetUniquePlayerId
// [0x00420000] 
struct UOnlineSubsystemAtlas_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.Logout
// [0x00020000] 
struct UOnlineSubsystemAtlas_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginFailedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginFailedDelegate
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.AutoLogin
// [0x00020000] 
struct UOnlineSubsystemAtlas_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.Login
// [0x00024000] 
struct UOnlineSubsystemAtlas_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ShowLoginUI
// [0x00024000] 
struct UOnlineSubsystemAtlas_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnFriendsChange_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnMutingChange_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnLoginCancelled_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillIsActive
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillIsActive_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillValue
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillValue_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillGroup
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillGroup_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillContentInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillContentInfo_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UContentInfo*                                Info;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillName_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetNumSkills
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetNumSkills_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.PickupSkill
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPickupSkill_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillOpenInterface
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillOpenInterface_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SceneStr;                                         		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                GFXEnum;                                          		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillTargetRequierment
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillTargetRequierment_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillTargetTypeID
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetSkillTargetTypeID_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorCompactGuid
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetVendorCompactGuid_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ItemGuid;                                         		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetInventoryItemName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetInventoryItemName_Parms
{
	int                                                iBag;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSlot;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetPickedInventorySlot
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetPickedInventorySlot_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPickedContentInfoActionBar
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetPickedContentInfoActionBar_Parms
{
	class UContentInfo*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ServerMove
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execServerMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccel;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MoveFlags;                                        		// 0x001C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x001D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.DualServerMove
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execDualServerMove_Parms
{
	float                                              TimeStampA;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccelA;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PendingFlags;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ViewA;                                            		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeStampB;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccelB;                                         		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewFlags;                                         		// 0x0034 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x0035 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ViewB;                                            		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.OldServerMove
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execOldServerMove_Parms
{
	float                                              OldTimeStamp;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      OldAccelX;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      OldAccelY;                                        		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      OldAccelZ;                                        		// 0x0006 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      OldMoveFlags;                                     		// 0x0007 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ProcessCommand
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execProcessCommand_Parms
{
	struct FString                                     CmdStr;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.VendorBuy
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execVendorBuy_Parms
{
	class UAtlasAvatarComponent*                       InComp;                                           		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FGuid                                       ItemGuid;                                         		// 0x0004 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.VendorBrowse
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execVendorBrowse_Parms
{
	class UAtlasAvatarComponent*                       InComp;                                           		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function Atlas.OnlineSubsystemAtlas.TargetSet
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execTargetSet_Parms
{
	class AAtlasAvatar*                                NewTarget;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.QuestStartRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execQuestStartRequest_Parms
{
	class UAtlasAvatarComponent*                       InComp;                                           		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FString                                     QuestGuid;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.QuestReturn
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execQuestReturn_Parms
{
	class UAtlasAvatarComponent*                       InComp;                                           		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FString                                     QuestGuid;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AvatarUse
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAvatarUse_Parms
{
	class AAtlasAvatar*                                InAvatar;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.UseInventoryItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execUseInventoryItem_Parms
{
	int                                                iBag;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSlot;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.UnEquipSlotItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execUnEquipSlotItem_Parms
{
	struct FString                                     sEquipSlot;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.TakeLootItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execTakeLootItem_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.PlacePickedInInventory
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPlacePickedInInventory_Parms
{
	int                                                iBag;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSlot;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.PlacePickedInEquipSlot
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPlacePickedInEquipSlot_Parms
{
	struct FString                                     sEquipSlot;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.PlacePickedInActionBar
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPlacePickedInActionBar_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.PickupInventoryItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPickupInventoryItem_Parms
{
	int                                                iBag;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSlot;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.PickupEquipedItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPickupEquipedItem_Parms
{
	struct FString                                     sEquipSlot;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.PickupActionBar
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execPickupActionBar_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPickedContentInfo
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetPickedContentInfo_Parms
{
	class UContentInfo*                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorNumItems
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetVendorNumItems_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetLootNumItems
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetLootNumItems_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorContentInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetVendorContentInfo_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UContentInfo*                                Int;                                              		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ItemCost;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                itemQuantity;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ItemName;                                         		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                MaxQuantity;                                      		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestPlayerStatus
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetQuestPlayerStatus_Parms
{
	struct FString                                     sQuestGuid;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      bHasQuest;                                        		// 0x000C (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      bQuestComplete;                                   		// 0x000D (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestDisplayName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetQuestDisplayName_Parms
{
	struct FString                                     sQuestGuid;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetQuestName_Parms
{
	struct FString                                     sQuestGuid;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetQuestInfo_Parms
{
	struct FString                                     sQuestGuid;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sQuestText;                                       		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FString >                           tQuestItemsName;                                  		// 0x0018 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< class UContentInfo* >                      tQuestItemsInfo;                                  		// 0x0024 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetLootContentInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetLootContentInfo_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UContentInfo*                                Info;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     LootName;                                         		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                itemQuantity;                                     		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetInventoryContentInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetInventoryContentInfo_Parms
{
	int                                                iBag;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iSlot;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UContentInfo*                                Info;                                             		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ItemValue;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                itemQuantity;                                     		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      bLocked;                                          		// 0x0014 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetEquipSlotContentInfo
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetEquipSlotContentInfo_Parms
{
	struct FString                                     sEquipSlot;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UContentInfo*                                Info;                                             		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      bLocked;                                          		// 0x0010 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FPointer                                    pPlayer;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.GetActionBarContentInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetActionBarContentInfo_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UContentInfo*                                Info;                                             		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.OnlineSubsystemAtlas.GetPlayerName
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetPlayerName_Parms
{
	struct FPointer                                    pPlayer;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetInspectedPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetInspectedPlayer_Parms
{
	struct FPointer                                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.DestroyPickedItem
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execDestroyPickedItem_Parms
{
	int                                                iQuantity;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearPickedItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execClearPickedItem_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.CloseVendorSession
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execCloseVendorSession_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorComponent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetVendorComponent_Parms
{
	class UAtlasAvatarComponent*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Atlas.OnlineSubsystemAtlas.GetTargetComponent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetTargetComponent_Parms
{
	class UAtlasAvatarComponent*                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function Atlas.OnlineSubsystemAtlas.GetCredits
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetCredits_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.UpdateAvatar
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execUpdateAvatar_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.JoinGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execJoinGame_Parms
{
	struct FString                                     hostIP;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.CreateGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execCreateGame_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.AtlasLogout
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAtlasLogout_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.AtlasLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAtlasLogin_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.Init
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.QueryPlayerInt
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execQueryPlayerInt_Parms
{
	struct FString                                     Param;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Default;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientAvatarListUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearClientAvatarListUpdatedDelegate_Parms
{
	struct FScriptDelegate                             RemoveDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddQuickbarUpdateFunction
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddQuickbarUpdateFunction_Parms
{
	struct FScriptDelegate                             thefunction;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.QuickbarUpdate
// [0x00120000] 
struct UOnlineSubsystemAtlas_execQuickbarUpdate_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.AddClientLoginCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddClientLoginCompleteDelegate_Parms
{
	struct FScriptDelegate                             ClientLoginCompleteDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddClientAvatarListUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddClientAvatarListUpdatedDelegate_Parms
{
	struct FScriptDelegate                             AddDelegate;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnClientAvatarListUpdated
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientAvatarListUpdated_Parms
{
	int                                                NumChars;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientAvatarUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearClientAvatarUpdatedDelegate_Parms
{
	struct FScriptDelegate                             ClientAvatarUpdatedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddClientAvatarUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddClientAvatarUpdatedDelegate_Parms
{
	struct FScriptDelegate                             ClientAvatarUpdatedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnClientAvatarUpdated
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientAvatarUpdated_Parms
{
	struct FPointer                                    pClient;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pAvatar;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPointer >                          tParams;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearHouseTradeListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearHouseTradeListChangedDelegate_Parms
{
	struct FScriptDelegate                             HouseTradeListChangedDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddHouseTradeListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddHouseTradeListChangedDelegate_Parms
{
	struct FScriptDelegate                             HouseTradeListChangedDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnHouseTradeListChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnHouseTradeListChanged_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearWorldObjectTradeListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearWorldObjectTradeListChangedDelegate_Parms
{
	struct FScriptDelegate                             WorldObjectTradeListChangedDelegate;              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddWorldObjectTradeListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddWorldObjectTradeListChangedDelegate_Parms
{
	struct FScriptDelegate                             WorldObjectTradeListChangedDelegate;              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnWorldObjectTradeListChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnWorldObjectTradeListChanged_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearVendorListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearVendorListChangedDelegate_Parms
{
	struct FScriptDelegate                             VendorListChangedDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddVendorListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddVendorListChangedDelegate_Parms
{
	struct FScriptDelegate                             VendorListChangedDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnVendorListChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnVendorListChanged_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearLootListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearLootListChangedDelegate_Parms
{
	struct FScriptDelegate                             LootListChangedDelegate;                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddLootListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddLootListChangedDelegate_Parms
{
	struct FScriptDelegate                             LootListChangedDelegate;                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnLootListChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnLootListChanged_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearEquipmentChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearEquipmentChangedDelegate_Parms
{
	struct FScriptDelegate                             EquipmentChangedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddEquipmentChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddEquipmentChangedDelegate_Parms
{
	struct FScriptDelegate                             EquipmentChangedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnEquipmentChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnEquipmentChanged_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearSkillListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearSkillListChangedDelegate_Parms
{
	struct FScriptDelegate                             SkillListChangedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddSkillListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddSkillListChangedDelegate_Parms
{
	struct FScriptDelegate                             SkillListChangedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnSkillListChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnSkillListChanged_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearItemListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearItemListChangedDelegate_Parms
{
	struct FScriptDelegate                             ItemListChangedDelegate;                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddItemListChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddItemListChangedDelegate_Parms
{
	struct FScriptDelegate                             ItemListChangedDelegate;                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnItemListChanged
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnItemListChanged_Parms
{
	TArray< struct FString >                           ItemNames;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientLoginCompleteDelegateByIndex
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemAtlas_eventClearClientLoginCompleteDelegateByIndex_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientLoginCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearClientLoginCompleteDelegate_Parms
{
	struct FScriptDelegate                             ClientLoginCompleteDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.OnClientLoginComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientLoginComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientNoShardDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearClientNoShardDelegate_Parms
{
	struct FScriptDelegate                             newDelegate;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddClientNoShardDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddClientNoShardDelegate_Parms
{
	struct FScriptDelegate                             newDelegate;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnClientNoShard
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientNoShard_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientVersionMissmatchDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearClientVersionMissmatchDelegate_Parms
{
	struct FScriptDelegate                             ClientVersionMissmatchDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddClientVersionMissmatchDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddClientVersionMissmatchDelegate_Parms
{
	struct FScriptDelegate                             ClientVersionMissmatchDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnClientVersionMissmatch
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientVersionMissmatch_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientConnectCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execClearClientConnectCompleteDelegate_Parms
{
	struct FScriptDelegate                             ClientConnectCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.OnlineSubsystemAtlas.AddClientConnectCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemAtlas_execAddClientConnectCompleteDelegate_Parms
{
	struct FScriptDelegate                             ClientConnectCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnClientConnectComplete
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientConnectComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.OnlineSubsystemAtlas.OnLogOutput
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemAtlas_eventOnLogOutput_Parms
{
	struct FName                                       logEvent;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strOutput;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.DynamicOpenScene
// [0x00022802] ( FUNC_Event )
struct UOnlineSubsystemAtlas_eventDynamicOpenScene_Parms
{
	struct FString                                     SceneName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.OnClientLoginServDown
// [0x00120000] 
struct UOnlineSubsystemAtlas_execOnClientLoginServDown_Parms
{
};

// Function Atlas.OnlineSubsystemAtlas.RemTimer
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemAtlas_eventRemTimer_Parms
{
	struct FString                                     sID;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddTimer
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemAtlas_eventAddTimer_Parms
{
	struct FString                                     sID;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sName;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDesc;                                            		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sIcon;                                            		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              fTimer;                                           		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sCancelDesc;                                      		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.GetBookInfoString
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execGetBookInfoString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.UpdateCharacterList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execUpdateCharacterList_Parms
{
	struct FString                                     NameToRemove;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddPetInfo
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAddPetInfo_Parms
{
	struct FString                                     sPetName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPetType;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iPetLevel;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iPetLoyalty;                                      		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iPetHP;                                           		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iStableIndex;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sState;                                           		// 0x0028 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.OnlineSubsystemAtlas.AddPylonInfo
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemAtlas_execAddPylonInfo_Parms
{
	struct FString                                     newPylonGuid;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     newPylonGuild;                                    		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector                                     newPylonLoc;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonAOE;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonAOETgt;                                   		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonDef;                                      		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonDefTgt;                                   		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonAtt;                                      		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonAttTgt;                                   		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonTier;                                     		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                newPylonUpkeep;                                   		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.SeqAct_Atlas_UpdateAvatar.UpdateAvatar
// [0x00020802] ( FUNC_Event )
struct USeqAct_Atlas_UpdateAvatar_eventUpdateAvatar_Parms
{
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIAction_Atlas_Login.ResetData
// [0x00020802] ( FUNC_Event )
struct UUIAction_Atlas_Login_eventResetData_Parms
{
};

// Function Atlas.UIAction_Atlas_Login.OnConnectionComplete
// [0x00020002] 
struct UUIAction_Atlas_Login_execOnConnectionComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIAction_Atlas_Login.OnLoginComplete
// [0x00020002] 
struct UUIAction_Atlas_Login_execOnLoginComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIAction_Atlas_Login.OnClientMismatch
// [0x00020002] 
struct UUIAction_Atlas_Login_execOnClientMismatch_Parms
{
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIAction_Atlas_Login.Login
// [0x00020802] ( FUNC_Event )
struct UUIAction_Atlas_Login_eventLogin_Parms
{
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIAtlas_ContentImage.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUIAtlas_ContentImage_execClearBoundDataStores_Parms
{
};

// Function Atlas.UIAtlas_ContentImage.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIAtlas_ContentImage_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function Atlas.UIAtlas_ContentImage.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUIAtlas_ContentImage_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIAtlas_ContentImage.RefreshSubscriberValue
// [0x00024400] ( FUNC_Native )
struct UUIAtlas_ContentImage_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIAtlas_ContentImage.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UUIAtlas_ContentImage_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.UIAtlas_ContentImage.SetDataStoreBinding
// [0x00024400] ( FUNC_Native )
struct UUIAtlas_ContentImage_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.UIAtlas_ContentImage.SetTextAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUIAtlas_ContentImage_execSetTextAlignment_Parms
{
	unsigned char                                      Horizontal;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Vertical;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIAtlas_ContentImage.OnDroppedOnTarget
// [0x00020003] ( FUNC_Final )
struct UUIAtlas_ContentImage_execOnDroppedOnTarget_Parms
{
	class UUIScreenObject*                             Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAccepted : 1;                                    		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIAtlas_ContentImage.GetLabel
// [0x00020003] ( FUNC_Final )
struct UUIAtlas_ContentImage_execGetLabel_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.UIAtlas_ContentImage.SetLabel
// [0x00020002] 
struct UUIAtlas_ContentImage_execSetLabel_Parms
{
	struct FString                                     NewLabel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIAtlas_ContentImage.SetImage
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUIAtlas_ContentImage_execSetImage_Parms
{
	class USurface*                                    NewImage;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIAtlas_ContentImage.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIAtlas_ContentImage_eventInitScene_Parms
{
};

// Function Atlas.UIScene_Atlas_BaseScene.SwitchToScene
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execSwitchToScene_Parms
{
	class UUIScene*                                    SceneToOpen;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIScene*                                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UUIScene*                                 NewScene;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_BaseScene.StaticOpenScene
// [0x00022002] 
struct UUIScene_Atlas_BaseScene_execStaticOpenScene_Parms
{
	class UUIScene*                                    SceneToOpen;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIScene*                                    ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameUISceneClient*                       GameSceneClient;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UUIScene*                                 OpenedScene;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_BaseScene.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.SendEvent
// [0x00024000] 
struct UUIScene_Atlas_BaseScene_execSendEvent_Parms
{
	struct FName                                       InEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InType;                                           		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InMsg;                                            		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_BaseScene.ParseAtlasItem
// [0x00820002] 
struct UUIScene_Atlas_BaseScene_execParseAtlasItem_Parms
{
	struct FString                                     ItemData;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FAtlasItem                                  ReturnValue;                                      		// 0x000C (0x005C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< struct FString >                        DataPairs;                                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        DataElem;                                         		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FString >                        ValueElem;                                        		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  DP;                                               		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FAtlasItem                               Item;                                             		// 0x0098 (0x005C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_BaseScene.ProcessInputAxis
// [0x00420002] 
struct UUIScene_Atlas_BaseScene_execProcessInputAxis_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fPos;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           fSize;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             X;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_BaseScene.ProcessInputKey
// [0x00420002] 
struct UUIScene_Atlas_BaseScene_execProcessInputKey_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_BaseScene.MouseInDragRegion
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execMouseInDragRegion_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             MouseX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MouseY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           H;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_BaseScene.ClearDragComponent
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execClearDragComponent_Parms
{
	class UUIScreenObject*                             InComp;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.SetDragComponent
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execSetDragComponent_Parms
{
	class UUIScreenObject*                             InComp;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIScreenObject*                             InMoveObj;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventFadeScene_Parms
{
	float                                              TargetOpacity;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TargetTime;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeCompleted
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventFadeCompleted_Parms
{
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeOut
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execFadeOut_Parms
{
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeIn
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execFadeIn_Parms
{
	unsigned long                                      bResetOpacity : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.IsFading
// [0x00020002] 
struct UUIScene_Atlas_BaseScene_execIsFading_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_BaseScene.SetUIKeyPairs
// [0x00020800] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventSetUIKeyPairs_Parms
{
	class UAtlasAvatarComponent*                       InNpcComp;                                        		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	TArray< struct FString >                           InKeys;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           InValues;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_BaseScene.SetVisibilityNoFade
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventSetVisibilityNoFade_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.SetVisibility
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventSetVisibility_Parms
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventInitScene_Parms
{
};

// Function Atlas.UIScene_Atlas_BaseScene.UpdateScene
// [0x00020800] ( FUNC_Event )
struct UUIScene_Atlas_BaseScene_eventUpdateScene_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_BaseScene.IntToHumanReadable
// [0x00020400] ( FUNC_Native )
struct UUIScene_Atlas_BaseScene_execIntToHumanReadable_Parms
{
	int                                                InVal;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_BaseScene.GetAtlasPlayerOwner
// [0x00024400] ( FUNC_Native )
struct UUIScene_Atlas_BaseScene_execGetAtlasPlayerOwner_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AAtlasPlayerController*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_AccountLogin.EnableUI
// [0x00020002] 
struct UUIScene_Atlas_AccountLogin_execEnableUI_Parms
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_AccountLogin.CancelLoginClicked
// [0x00020002] 
struct UUIScene_Atlas_AccountLogin_execCancelLoginClicked_Parms
{
	class UUIScreenObject*                             EventTarget;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnLoginServerDown
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnLoginServerDown_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnServerFull
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnServerFull_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnClusterNotOnline
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnClusterNotOnline_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnUnknownLoginFailure
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnUnknownLoginFailure_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.PatchClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUIScene_Atlas_AccountLogin_execPatchClient_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnVersionMismatch
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnVersionMismatch_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnPasswordMismatch
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnPasswordMismatch_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnUserNotFound
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnUserNotFound_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnLoginSuccess
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventOnLoginSuccess_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnLoginComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UUIScene_Atlas_AccountLogin_execOnLoginComplete_Parms
{
	unsigned long                                      WasSuccessful : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_AccountLogin.LoginClicked
// [0x00020002] 
struct UUIScene_Atlas_AccountLogin_execLoginClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  UserName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  UserPassword;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_AccountLogin.ExitGameClicked
// [0x00020002] 
struct UUIScene_Atlas_AccountLogin_execExitGameClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AAtlasPlayerController*                   PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_AccountLogin.EnsureLogout
// [0x00020400] ( FUNC_Native )
struct UUIScene_Atlas_AccountLogin_execEnsureLogout_Parms
{
};

// Function Atlas.UIScene_Atlas_AccountLogin.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_AccountLogin_eventInitScene_Parms
{
	// class UUIButton*                                CancelLoginButton;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_CharacterSelect.UpdateCharacters
// [0x00020002] 
struct UUIScene_Atlas_CharacterSelect_execUpdateCharacters_Parms
{
	// class UOnlineSubsystemAtlas*                    OnlineSub;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             iChar;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_CharacterSelect.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_CharacterSelect_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_CharacterSelect.UpdateScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_CharacterSelect_eventUpdateScene_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_CharacterSelect.LogoutClicked
// [0x00020002] 
struct UUIScene_Atlas_CharacterSelect_execLogoutClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AAtlasPlayerController*                   PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_CharacterSelect.EnterGameClicked
// [0x00020002] 
struct UUIScene_Atlas_CharacterSelect_execEnterGameClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_CharacterSelect.GetCharacterPic
// [0x00020002] 
struct UUIScene_Atlas_CharacterSelect_execGetCharacterPic_Parms
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_CharacterSelect.CharacterClicked
// [0x00020002] 
struct UUIScene_Atlas_CharacterSelect_execCharacterClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             iChar;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_CharacterSelect.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_CharacterSelect_eventInitScene_Parms
{
	// int                                             iChar;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGameUISceneClient*                       GameSceneClient;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UUIButton*                                LogoutButton;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_CharacterSelect.EnterGame
// [0x00020400] ( FUNC_Native )
struct UUIScene_Atlas_CharacterSelect_execEnterGame_Parms
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Inventory.UpdatePage
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execUpdatePage_Parms
{
};

// Function Atlas.UIScene_Atlas_Inventory.OnSlotClicked
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execOnSlotClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     SourceCS;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemOpenContextMenu
// [0x00420002] 
struct UUIScene_Atlas_Inventory_execOnItemOpenContextMenu_Parms
{
	class UUIObject*                                   Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIContextMenu*                              CustomContextMenu;                                		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     SenderCS;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentButton*                   ButtonCI;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemDragDrop
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execOnItemDragDrop_Parms
{
	class UUIScreenObject*                             Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIScreenObject*                             Source;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     TargetCS;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemDragBegin
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execOnItemDragBegin_Parms
{
	class UUIScreenObject*                             Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemClicked
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execOnItemClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.ItemListChanged
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execItemListChanged_Parms
{
	TArray< struct FString >                           ItemData;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Inventory.SceneDeactivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Inventory_eventSceneDeactivated_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Inventory_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Inventory.FadeIn
// [0x00020002] 
struct UUIScene_Atlas_Inventory_execFadeIn_Parms
{
	unsigned long                                      bResetOpacity : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_Inventory.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Inventory_eventInitScene_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  sLabelName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Inventory.DropItem
// [0x00020400] ( FUNC_Native )
struct UUIScene_Atlas_Inventory_execDropItem_Parms
{
	int                                                ItemNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_Loot.UpdatePageButtons
// [0x00020002] 
struct UUIScene_Atlas_Loot_execUpdatePageButtons_Parms
{
	// int                                             iFirstValidPage;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Loot.UpdatePage
// [0x00020002] 
struct UUIScene_Atlas_Loot_execUpdatePage_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             itemQuantity;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  ItemName;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Loot.FindValidPage
// [0x00020002] 
struct UUIScene_Atlas_Loot_execFindValidPage_Parms
{
	int                                                iPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             iCheckNumPages;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             iCheckPage;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Loot.IsValidPage
// [0x00020002] 
struct UUIScene_Atlas_Loot_execIsValidPage_Parms
{
	int                                                iPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_Loot.GetNumItemsOnPage
// [0x00020002] 
struct UUIScene_Atlas_Loot_execGetNumItemsOnPage_Parms
{
	int                                                iPage;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             iSlot;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             iNumItems;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             itemQuantity;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ItemName;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Loot.OnLootCloseClicked
// [0x00020002] 
struct UUIScene_Atlas_Loot_execOnLootCloseClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_Loot.OnLootClicked
// [0x00020002] 
struct UUIScene_Atlas_Loot_execOnLootClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Loot.PrevButtonClicked
// [0x00020002] 
struct UUIScene_Atlas_Loot_execPrevButtonClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_Loot.NextButtonClicked
// [0x00020002] 
struct UUIScene_Atlas_Loot_execNextButtonClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_Loot.UpdateScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Loot_eventUpdateScene_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_Loot.LootChanged
// [0x00020002] 
struct UUIScene_Atlas_Loot_execLootChanged_Parms
{
};

// Function Atlas.UIScene_Atlas_Loot.SceneDeactivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Loot_eventSceneDeactivated_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Loot.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Loot_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Loot.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Loot_eventInitScene_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Loot.LeaveLootSession
// [0x00020400] ( FUNC_Native )
struct UUIScene_Atlas_Loot_execLeaveLootSession_Parms
{
};

// Function Atlas.UIScene_Atlas_NpcSpeak.UpdateScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_NpcSpeak_eventUpdateScene_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_NpcSpeak.UpdatePage
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execUpdatePage_Parms
{
};

// Function Atlas.UIScene_Atlas_NpcSpeak.SetUIKeyPairs
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_NpcSpeak_eventSetUIKeyPairs_Parms
{
	class UAtlasAvatarComponent*                       InNpcComp;                                        		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	TArray< struct FString >                           InKeys;                                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           InValues;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsConversation : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function Atlas.UIScene_Atlas_NpcSpeak.OnVendorButtonRightClick
// [0x00420002] 
struct UUIScene_Atlas_NpcSpeak_execOnVendorButtonRightClick_Parms
{
	class UUIObject*                                   Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIContextMenu*                              CustomContextMenu;                                		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             iSlot;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UAtlasAvatarComponent*                    VendorComp;                                       		// 0x0018 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function Atlas.UIScene_Atlas_NpcSpeak.QuestConfirmClicked
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execQuestConfirmClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   bHasQuest;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	// unsigned char                                   bQuestComplete;                                   		// 0x000D (0x0001) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_NpcSpeak.QuestCancelClicked
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execQuestCancelClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_NpcSpeak.PrevButtonClicked
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execPrevButtonClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_NpcSpeak.NextButtonClicked
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execNextButtonClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_NpcSpeak.FindActionButtonIndex
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execFindActionButtonIndex_Parms
{
	class UUIScreenObject*                             InObject;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             iAction;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_NpcSpeak.ClearActions
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execClearActions_Parms
{
	// int                                             iAction;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_NpcSpeak.AddAction
// [0x00024002] 
struct UUIScene_Atlas_NpcSpeak_execAddAction_Parms
{
	struct FString                                     ActionValue;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsQuest : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             iAction;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_NpcSpeak.ActionButtonClicked
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execActionButtonClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             iAction;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  ActionValue;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_NpcSpeak.VendorChanged
// [0x00020002] 
struct UUIScene_Atlas_NpcSpeak_execVendorChanged_Parms
{
};

// Function Atlas.UIScene_Atlas_NpcSpeak.SceneDeactivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_NpcSpeak_eventSceneDeactivated_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_NpcSpeak.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_NpcSpeak_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_NpcSpeak.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_NpcSpeak_eventInitScene_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGameUISceneClient*                       GameSceneClient;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.UpdatePage
// [0x00820002] 
struct UUIScene_Atlas_PaperDoll_execUpdatePage_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   bLocked;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	// struct FPointer                                 pInspectedPlayer;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnSlotClicked
// [0x00020002] 
struct UUIScene_Atlas_PaperDoll_execOnSlotClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     SourceCS;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipOpenContextMenu
// [0x00420002] 
struct UUIScene_Atlas_PaperDoll_execOnEquipOpenContextMenu_Parms
{
	class UUIObject*                                   Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIContextMenu*                              CustomContextMenu;                                		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     SenderCS;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentButton*                   ButtonCI;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipDragDrop
// [0x00020002] 
struct UUIScene_Atlas_PaperDoll_execOnEquipDragDrop_Parms
{
	class UUIScreenObject*                             Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIScreenObject*                             Source;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     TargetCS;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipDragBegin
// [0x00020002] 
struct UUIScene_Atlas_PaperDoll_execOnEquipDragBegin_Parms
{
	class UUIScreenObject*                             Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     SourceSlot;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipClicked
// [0x00020002] 
struct UUIScene_Atlas_PaperDoll_execOnEquipClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     EquipCS;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ItemCI;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.EquipmentChanged
// [0x00020002] 
struct UUIScene_Atlas_PaperDoll_execEquipmentChanged_Parms
{
};

// Function Atlas.UIScene_Atlas_PaperDoll.SceneDeactivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_PaperDoll_eventSceneDeactivated_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_PaperDoll_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_PaperDoll.FadeIn
// [0x00020002] 
struct UUIScene_Atlas_PaperDoll_execFadeIn_Parms
{
	unsigned long                                      bResetOpacity : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_PaperDoll.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_PaperDoll_eventInitScene_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerDataStore.GetFieldValue
// [0x00424802] ( FUNC_Event )
struct UAtlasPlayerDataStore_eventGetFieldValue_Parms
{
	struct FString                                     FieldName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUIProviderScriptFieldValue                 FieldValue;                                       		// 0x000C (0x0058) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ArrayIndex;                                       		// 0x0064 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function Atlas.AtlasAvatarComponent.TellBehavior
// [0x00020400] ( FUNC_Native )
struct UAtlasAvatarComponent_execTellBehavior_Parms
{
	struct FString                                     BehaviorCmd;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.AtlasPlayerController.DisplayDebug
// [0x00420102] 
struct AAtlasPlayerController_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Atlas.AtlasPlayerController.TempMarker
// [0x00020202] ( FUNC_Exec )
struct AAtlasPlayerController_execTempMarker_Parms
{
	struct FName                                       NewTag;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AAtlasMarker*                             AM;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class AActor*                                   NewMarker;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.ListMarker
// [0x00020200] ( FUNC_Exec )
struct AAtlasPlayerController_execListMarker_Parms
{
};

// Function Atlas.AtlasPlayerController.GotoMarker
// [0x00020202] ( FUNC_Exec )
struct AAtlasPlayerController_execGotoMarker_Parms
{
	struct FName                                       DestTag;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AAtlasMarker*                             AM;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.SetPos
// [0x00820202] ( FUNC_Exec )
struct AAtlasPlayerController_execSetPos_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewPos;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.ActionBarSlotgugu
// [0x00020200] ( FUNC_Exec )
struct AAtlasPlayerController_execActionBarSlotgugu_Parms
{
	int                                                iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.AtlasPlayerController.ToggleUI
// [0x00020200] ( FUNC_Exec )
struct AAtlasPlayerController_execToggleUI_Parms
{
};

// Function Atlas.AtlasPlayerController.ClusterCom
// [0x00020202] ( FUNC_Exec )
struct AAtlasPlayerController_execClusterCom_Parms
{
	// class UConsole*                                 Console;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.ZoomIn
// [0x00020202] ( FUNC_Exec )
struct AAtlasPlayerController_execZoomIn_Parms
{
};

// Function Atlas.AtlasPlayerController.PickViewportActor
// [0x00020002] 
struct AAtlasPlayerController_execPickViewportActor_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPlayerController.ClearPickedActors
// [0x00020002] 
struct AAtlasPlayerController_execClearPickedActors_Parms
{
};

// Function Atlas.AtlasPlayerController.CallServerMove
// [0x00820002] 
struct AAtlasPlayerController_execCallServerMove_Parms
{
	class USavedMove*                                  NewMove;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USavedMove*                                  OldMove;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  BuildAccel;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// unsigned char                                   OldAccelX;                                        		// 0x0028 (0x0001) [0x0000000000000000]              
	// unsigned char                                   OldAccelY;                                        		// 0x0029 (0x0001) [0x0000000000000000]              
	// unsigned char                                   OldAccelZ;                                        		// 0x002A (0x0001) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.ShouldReplicateMove
// [0x00020002] 
struct AAtlasPlayerController_execShouldReplicateMove_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPlayerController.UpdateRotation
// [0x00820002] 
struct AAtlasPlayerController_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 PawnDeltaRot;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewDeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 InterpRot;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct AAtlasPlayerController_eventInitInputSystem_Parms
{
};

// Function Atlas.AtlasPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AAtlasPlayerController_eventPostBeginPlay_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerController.SetFishingOn
// [0x00020800] ( FUNC_Event )
struct AAtlasPlayerController_eventSetFishingOn_Parms
{
	float                                              NewRange;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.AtlasPlayerController.StartDelayTimer
// [0x00024800] ( FUNC_Event )
struct AAtlasPlayerController_eventStartDelayTimer_Parms
{
	struct FString                                     Why;                                              		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Atlas.AtlasPlayerController.ExitCombatMode
// [0x00020800] ( FUNC_Event )
struct AAtlasPlayerController_eventExitCombatMode_Parms
{
};

// Function Atlas.AtlasPlayerController.ClientAvatarUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AAtlasPlayerController_execClientAvatarUpdated_Parms
{
	struct FPointer                                    pClient;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pAvatar;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPointer >                          tParams;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.AtlasPlayerInput.RightMouseButtonReleased
// [0x00020802] ( FUNC_Event )
struct UAtlasPlayerInput_eventRightMouseButtonReleased_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AAtlasAvatar*                             PickedAvatar;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasPlayerInput.LeftMouseButtonReleased
// [0x00020800] ( FUNC_Event )
struct UAtlasPlayerInput_eventLeftMouseButtonReleased_Parms
{
};

// Function Atlas.AtlasPlayerInput.RightMouseButtonPressed
// [0x00020802] ( FUNC_Event )
struct UAtlasPlayerInput_eventRightMouseButtonPressed_Parms
{
};

// Function Atlas.AtlasPlayerInput.LeftMouseButtonPressed
// [0x00020802] ( FUNC_Event )
struct UAtlasPlayerInput_eventLeftMouseButtonPressed_Parms
{
};

// Function Atlas.AtlasPlayerInput.PlayerInput
// [0x00020800] ( FUNC_Event )
struct UAtlasPlayerInput_eventPlayerInput_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.AtlasPlayerInput.HasLookInput
// [0x00020002] 
struct UAtlasPlayerInput_execHasLookInput_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasPlayerInput.HasMoveInput
// [0x00020002] 
struct UAtlasPlayerInput_execHasMoveInput_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.AtlasGameInfo.LocalDebug
// [0x00020202] ( FUNC_Exec )
struct AAtlasGameInfo_execLocalDebug_Parms
{
};

// Function Atlas.AtlasGameInfo.ClearLoadingScreen
// [0x00020002] 
struct AAtlasGameInfo_execClearLoadingScreen_Parms
{
	// class UGameUISceneClient*                       SceneClient;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasGameInfo.SpawnDefaultPawnAt
// [0x00820002] 
struct AAtlasGameInfo_execSpawnDefaultPawnAt_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SpawnLoc;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SpawnRot;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   DefaultPlayerClass;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 StartRot;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// class APawn*                                    ResultPawn;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasGameInfo.RestartPlayer
// [0x00820002] 
struct AAtlasGameInfo_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  vSpawnLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rSpawnRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// int                                             iEvent;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                Events;                                           		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USeqEvent_PlayerSpawned*                  SpawnedEvent;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function Atlas.AtlasGameInfo.PostCommitMapChange
// [0x00020802] ( FUNC_Event )
struct AAtlasGameInfo_eventPostCommitMapChange_Parms
{
};

// Function Atlas.AtlasGameInfo.InitGame
// [0x00420802] ( FUNC_Event )
struct AAtlasGameInfo_eventInitGame_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ErrorMessage;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function Atlas.AtlasGameInfo.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AAtlasGameInfo_eventPreBeginPlay_Parms
{
};

// Function Atlas.AtlasPlayerCamera.ZoomOut
// [0x00020002] 
struct AAtlasPlayerCamera_execZoomOut_Parms
{
};

// Function Atlas.AtlasPlayerCamera.ZoomIn
// [0x00020002] 
struct AAtlasPlayerCamera_execZoomIn_Parms
{
};

// Function Atlas.UIScene_Atlas_ActionBar.UpdatePage
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execUpdatePage_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             ActionCI;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.OnSlotDragDrop
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execOnSlotDragDrop_Parms
{
	class UUIScreenObject*                             Target;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIScreenObject*                             Source;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     TargetCS;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             PickedCI;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.OnSlotClicked
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execOnSlotClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentSlot*                     SourceCS;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             PickedCI;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.OnActionButtonDragBegin
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execOnActionButtonDragBegin_Parms
{
	class UUIScreenObject*                             Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.OnActionButtonClicked
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execOnActionButtonClicked_Parms
{
	class UUIScreenObject*                             EventObject;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// class UUIAtlas_ContentImage*                    SourceCI;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UContentInfo*                             PickedCI;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.ItemListChanged
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execItemListChanged_Parms
{
	TArray< struct FString >                           ItemData;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_ActionBar.SceneDeactivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_ActionBar_eventSceneDeactivated_Parms
{
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.SceneActivated
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_ActionBar_eventSceneActivated_Parms
{
	unsigned long                                      bInitialActivation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_ActionBar.FadeIn
// [0x00020002] 
struct UUIScene_Atlas_ActionBar_execFadeIn_Parms
{
	unsigned long                                      bResetOpacity : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_ActionBar.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_ActionBar_eventInitScene_Parms
{
	// int                                             iSlot;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Chat.UpdateScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Chat_eventUpdateScene_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Atlas.UIScene_Atlas_Chat.CancelTyping
// [0x00020002] 
struct UUIScene_Atlas_Chat_execCancelTyping_Parms
{
};

// Function Atlas.UIScene_Atlas_Chat.StartTyping
// [0x00024002] 
struct UUIScene_Atlas_Chat_execStartTyping_Parms
{
	struct FString                                     InValue;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InTextType;                                       		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Chat.SetTextColorByType
// [0x00820002] 
struct UUIScene_Atlas_Chat_execSetTextColorByType_Parms
{
	struct FString                                     InTextType;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FColor                                   OldTextColor;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Chat.GetTextColorCode
// [0x00820002] 
struct UUIScene_Atlas_Chat_execGetTextColorCode_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FLinearColor                             LinColor;                                         		// 0x000C (0x0010) [0x0000000000000000]              
	// struct FString                                  ColorStr;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Chat.SendEvent
// [0x00024002] 
struct UUIScene_Atlas_Chat_execSendEvent_Parms
{
	struct FName                                       InEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InType;                                           		// 0x0008 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InMsg;                                            		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Chat.OutputTextLine
// [0x00024002] 
struct UUIScene_Atlas_Chat_execOutputTextLine_Parms
{
	struct FString                                     InText;                                           		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FString                                     InTextType;                                       		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Chat.OnChatSubmitText
// [0x00020002] 
struct UUIScene_Atlas_Chat_execOnChatSubmitText_Parms
{
	class UUIEditBox*                                  Sender;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  InputText;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function Atlas.UIScene_Atlas_Chat.OnChatRawInputKey
// [0x00420002] 
struct UUIScene_Atlas_Chat_execOnChatRawInputKey_Parms
{
	struct FInputEventParameters                       EventParms;                                       		// 0x0000 (0x0020) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Atlas.UIScene_Atlas_Chat.HandleInputText
// [0x00020002] 
struct UUIScene_Atlas_Chat_execHandleInputText_Parms
{
	struct FString                                     InText;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UOnlineSubsystemAtlas*                    AtlasOnlineSub;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Chat.ChatClientRegionCalculated
// [0x00020002] 
struct UUIScene_Atlas_Chat_execChatClientRegionCalculated_Parms
{
};

// Function Atlas.UIScene_Atlas_Chat.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Chat_eventInitScene_Parms
{
	// class UGameUISceneClient*                       GameSceneClient;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_HotkeyBar.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_HotkeyBar_eventInitScene_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function Atlas.UIScene_Atlas_Status.InitScene
// [0x00020802] ( FUNC_Event )
struct UUIScene_Atlas_Status_eventInitScene_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif