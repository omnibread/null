/*
#############################################################################################
# Mortal Online (1.71.00.04) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Atlas_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function Atlas.AtlasBoundsShape.ResetDefaults
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAtlasBoundsShape::eventResetDefaults ( )
{
	static UFunction* pFnResetDefaults = NULL;

	if ( ! pFnResetDefaults )
		pFnResetDefaults = UObject::FindObject<UFunction> ( "Function Atlas.AtlasBoundsShape.ResetDefaults" );

	UAtlasBoundsShape_eventResetDefaults_Parms ResetDefaults_Parms;

	this->ProcessEvent ( pFnResetDefaults, &ResetDefaults_Parms, NULL );
};

// Function Atlas.AtlasHUD.GameMessage
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void AAtlasHUD::eventGameMessage ( struct FString Message )
{
	static UFunction* pFnGameMessage = NULL;

	if ( ! pFnGameMessage )
		pFnGameMessage = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.GameMessage" );

	AAtlasHUD_eventGameMessage_Parms GameMessage_Parms;
	memcpy ( &GameMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnGameMessage, &GameMessage_Parms, NULL );
};

// Function Atlas.AtlasHUD.ToggleHudScene
// [0x00024102] 
// Parameters infos:
// class UUIScene*                SceneToToggle                  ( CPF_Parm )
// class ULocalPlayer*            Player                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bCloseScene                    ( CPF_OptionalParm | CPF_Parm )

void AAtlasHUD::ToggleHudScene ( class UUIScene* SceneToToggle, class ULocalPlayer* Player, unsigned long bCloseScene )
{
	static UFunction* pFnToggleHudScene = NULL;

	if ( ! pFnToggleHudScene )
		pFnToggleHudScene = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.ToggleHudScene" );

	AAtlasHUD_execToggleHudScene_Parms ToggleHudScene_Parms;
	ToggleHudScene_Parms.SceneToToggle = SceneToToggle;
	ToggleHudScene_Parms.Player = Player;
	ToggleHudScene_Parms.bCloseScene = bCloseScene;

	this->ProcessEvent ( pFnToggleHudScene, &ToggleHudScene_Parms, NULL );
};

// Function Atlas.AtlasHUD.HideHudScene
// [0x00024102] 
// Parameters infos:
// class UUIScene*                SceneToHide                    ( CPF_Parm )
// unsigned long                  bCloseScene                    ( CPF_OptionalParm | CPF_Parm )

void AAtlasHUD::HideHudScene ( class UUIScene* SceneToHide, unsigned long bCloseScene )
{
	static UFunction* pFnHideHudScene = NULL;

	if ( ! pFnHideHudScene )
		pFnHideHudScene = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.HideHudScene" );

	AAtlasHUD_execHideHudScene_Parms HideHudScene_Parms;
	HideHudScene_Parms.SceneToHide = SceneToHide;
	HideHudScene_Parms.bCloseScene = bCloseScene;

	this->ProcessEvent ( pFnHideHudScene, &HideHudScene_Parms, NULL );
};

// Function Atlas.AtlasHUD.ShowHudScene
// [0x00024102] 
// Parameters infos:
// class UUIScene*                SceneToShow                    ( CPF_Parm )
// class ULocalPlayer*            Player                         ( CPF_OptionalParm | CPF_Parm )

void AAtlasHUD::ShowHudScene ( class UUIScene* SceneToShow, class ULocalPlayer* Player )
{
	static UFunction* pFnShowHudScene = NULL;

	if ( ! pFnShowHudScene )
		pFnShowHudScene = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.ShowHudScene" );

	AAtlasHUD_execShowHudScene_Parms ShowHudScene_Parms;
	ShowHudScene_Parms.SceneToShow = SceneToShow;
	ShowHudScene_Parms.Player = Player;

	this->ProcessEvent ( pFnShowHudScene, &ShowHudScene_Parms, NULL );
};

// Function Atlas.AtlasHUD.ResolveHudScene
// [0x00024102] 
// Parameters infos:
// class UUIScene*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScene*                Template                       ( CPF_Parm )
// class ULocalPlayer*            Player                         ( CPF_OptionalParm | CPF_Parm )

class UUIScene* AAtlasHUD::ResolveHudScene ( class UUIScene* Template, class ULocalPlayer* Player )
{
	static UFunction* pFnResolveHudScene = NULL;

	if ( ! pFnResolveHudScene )
		pFnResolveHudScene = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.ResolveHudScene" );

	AAtlasHUD_execResolveHudScene_Parms ResolveHudScene_Parms;
	ResolveHudScene_Parms.Template = Template;
	ResolveHudScene_Parms.Player = Player;

	this->ProcessEvent ( pFnResolveHudScene, &ResolveHudScene_Parms, NULL );

	return ResolveHudScene_Parms.ReturnValue;
};

// Function Atlas.AtlasHUD.HudSceneDeactivated
// [0x00020002] 
// Parameters infos:
// class UUIScene*                DeactivatedScene               ( CPF_Parm )

void AAtlasHUD::HudSceneDeactivated ( class UUIScene* DeactivatedScene )
{
	static UFunction* pFnHudSceneDeactivated = NULL;

	if ( ! pFnHudSceneDeactivated )
		pFnHudSceneDeactivated = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.HudSceneDeactivated" );

	AAtlasHUD_execHudSceneDeactivated_Parms HudSceneDeactivated_Parms;
	HudSceneDeactivated_Parms.DeactivatedScene = DeactivatedScene;

	this->ProcessEvent ( pFnHudSceneDeactivated, &HudSceneDeactivated_Parms, NULL );
};

// Function Atlas.AtlasHUD.ResolveUI
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UUIScene*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InUIName                       ( CPF_Parm | CPF_NeedCtorLink )

class UUIScene* AAtlasHUD::eventResolveUI ( struct FString InUIName )
{
	static UFunction* pFnResolveUI = NULL;

	if ( ! pFnResolveUI )
		pFnResolveUI = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.ResolveUI" );

	AAtlasHUD_eventResolveUI_Parms ResolveUI_Parms;
	memcpy ( &ResolveUI_Parms.InUIName, &InUIName, 0xC );

	this->ProcessEvent ( pFnResolveUI, &ResolveUI_Parms, NULL );

	return ResolveUI_Parms.ReturnValue;
};

// Function Atlas.AtlasHUD.OpenUI
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UAtlasAvatarComponent*   InNpcComp                      ( CPF_Parm | CPF_EditInline )
// TArray< struct FString >       InKeys                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       InValues                       ( CPF_Parm | CPF_NeedCtorLink )

void AAtlasHUD::eventOpenUI ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues )
{
	static UFunction* pFnOpenUI = NULL;

	if ( ! pFnOpenUI )
		pFnOpenUI = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.OpenUI" );

	AAtlasHUD_eventOpenUI_Parms OpenUI_Parms;
	OpenUI_Parms.InNpcComp = InNpcComp;
	memcpy ( &OpenUI_Parms.InKeys, &InKeys, 0xC );
	memcpy ( &OpenUI_Parms.InValues, &InValues, 0xC );

	this->ProcessEvent ( pFnOpenUI, &OpenUI_Parms, NULL );
};

// Function Atlas.AtlasHUD.DrawEngineHUD
// [0x00020000] 
// Parameters infos:

void AAtlasHUD::DrawEngineHUD ( )
{
	static UFunction* pFnDrawEngineHUD = NULL;

	if ( ! pFnDrawEngineHUD )
		pFnDrawEngineHUD = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.DrawEngineHUD" );

	AAtlasHUD_execDrawEngineHUD_Parms DrawEngineHUD_Parms;

	this->ProcessEvent ( pFnDrawEngineHUD, &DrawEngineHUD_Parms, NULL );
};

// Function Atlas.AtlasHUD.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AAtlasHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function Atlas.AtlasHUD.PostBeginPlay" );

	AAtlasHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function Atlas.AtlasPawn.TakeDamage
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AAtlasPawn::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.TakeDamage" );

	AAtlasPawn_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function Atlas.AtlasPawn.GetDefaultCameraMode
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       RequestedBy                    ( CPF_Parm )

struct FName AAtlasPawn::GetDefaultCameraMode ( class APlayerController* RequestedBy )
{
	static UFunction* pFnGetDefaultCameraMode = NULL;

	if ( ! pFnGetDefaultCameraMode )
		pFnGetDefaultCameraMode = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.GetDefaultCameraMode" );

	AAtlasPawn_execGetDefaultCameraMode_Parms GetDefaultCameraMode_Parms;
	GetDefaultCameraMode_Parms.RequestedBy = RequestedBy;

	this->ProcessEvent ( pFnGetDefaultCameraMode, &GetDefaultCameraMode_Parms, NULL );

	return GetDefaultCameraMode_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AAtlasPawn::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.Tick" );

	AAtlasPawn_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function Atlas.AtlasPawn.GetAvatarID
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AAtlasPawn::GetAvatarID ( )
{
	static UFunction* pFnGetAvatarID = NULL;

	if ( ! pFnGetAvatarID )
		pFnGetAvatarID = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.GetAvatarID" );

	AAtlasPawn_execGetAvatarID_Parms GetAvatarID_Parms;

	pFnGetAvatarID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAvatarID, &GetAvatarID_Parms, NULL );

	pFnGetAvatarID->FunctionFlags |= 0x400;

	return GetAvatarID_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.GetAtlasName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

	static UFunction* pFnAAtlasPawn__GetAtlasName = NULL;
struct FString AAtlasPawn::GetAtlasName ( )
{

	if ( ! pFnAAtlasPawn__GetAtlasName )
		pFnAAtlasPawn__GetAtlasName = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.GetAtlasName" );

	AAtlasPawn_execGetAtlasName_Parms GetAtlasName_Parms;

	pFnGetAtlasName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAtlasName, &GetAtlasName_Parms, NULL );

	pFnGetAtlasName->FunctionFlags |= 0x400;

	return GetAtlasName_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.AtlasUnSelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AAtlasPawn::AtlasUnSelect ( )
{
	static UFunction* pFnAtlasUnSelect = NULL;

	if ( ! pFnAtlasUnSelect )
		pFnAtlasUnSelect = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.AtlasUnSelect" );

	AAtlasPawn_execAtlasUnSelect_Parms AtlasUnSelect_Parms;

	pFnAtlasUnSelect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtlasUnSelect, &AtlasUnSelect_Parms, NULL );

	pFnAtlasUnSelect->FunctionFlags |= 0x400;

	return AtlasUnSelect_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.AtlasSelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AAtlasPawn::AtlasSelect ( )
{
	static UFunction* pFnAtlasSelect = NULL;

	if ( ! pFnAtlasSelect )
		pFnAtlasSelect = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.AtlasSelect" );

	AAtlasPawn_execAtlasSelect_Parms AtlasSelect_Parms;

	pFnAtlasSelect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtlasSelect, &AtlasSelect_Parms, NULL );

	pFnAtlasSelect->FunctionFlags |= 0x400;

	return AtlasSelect_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.AtlasUse
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       PC                             ( CPF_OptionalParm | CPF_Parm )

bool AAtlasPawn::AtlasUse ( class APlayerController* PC )
{
	static UFunction* pFnAtlasUse = NULL;

	if ( ! pFnAtlasUse )
		pFnAtlasUse = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.AtlasUse" );

	AAtlasPawn_execAtlasUse_Parms AtlasUse_Parms;
	AtlasUse_Parms.PC = PC;

	pFnAtlasUse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtlasUse, &AtlasUse_Parms, NULL );

	pFnAtlasUse->FunctionFlags |= 0x400;

	return AtlasUse_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.IsTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AAtlasPawn::IsTarget ( )
{
	static UFunction* pFnIsTarget = NULL;

	if ( ! pFnIsTarget )
		pFnIsTarget = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.IsTarget" );

	AAtlasPawn_execIsTarget_Parms IsTarget_Parms;

	pFnIsTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTarget, &IsTarget_Parms, NULL );

	pFnIsTarget->FunctionFlags |= 0x400;

	return IsTarget_Parms.ReturnValue;
};

// Function Atlas.AtlasPawn.SetServerTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AAtlasPawn::SetServerTarget ( )
{
	static UFunction* pFnSetServerTarget = NULL;

	if ( ! pFnSetServerTarget )
		pFnSetServerTarget = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.SetServerTarget" );

	AAtlasPawn_execSetServerTarget_Parms SetServerTarget_Parms;

	pFnSetServerTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetServerTarget, &SetServerTarget_Parms, NULL );

	pFnSetServerTarget->FunctionFlags |= 0x400;
};

// Function Atlas.AtlasPawn.GetAtlasComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UComponent*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UComponent* AAtlasPawn::GetAtlasComponent ( )
{
	static UFunction* pFnGetAtlasComponent = NULL;

	if ( ! pFnGetAtlasComponent )
		pFnGetAtlasComponent = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPawn.GetAtlasComponent" );

	AAtlasPawn_execGetAtlasComponent_Parms GetAtlasComponent_Parms;

	pFnGetAtlasComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAtlasComponent, &GetAtlasComponent_Parms, NULL );

	pFnGetAtlasComponent->FunctionFlags |= 0x400;

	return GetAtlasComponent_Parms.ReturnValue;
};

// Function Atlas.AtlasStructureAvatar.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AAtlasStructureAvatar::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function Atlas.AtlasStructureAvatar.Tick" );

	AAtlasStructureAvatar_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function Atlas.AtlasProjectileAvatar.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AAtlasProjectileAvatar::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function Atlas.AtlasProjectileAvatar.Tick" );

	AAtlasProjectileAvatar_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.DrawDebugLine
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 vStart                         ( CPF_Parm )
// struct FVector                 vEnd                           ( CPF_Parm )

void UOnlineSubsystemAtlas::eventDrawDebugLine ( struct FVector vStart, struct FVector vEnd )
{
	static UFunction* pFnDrawDebugLine = NULL;

	if ( ! pFnDrawDebugLine )
		pFnDrawDebugLine = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DrawDebugLine" );

	UOnlineSubsystemAtlas_eventDrawDebugLine_Parms DrawDebugLine_Parms;
	memcpy ( &DrawDebugLine_Parms.vStart, &vStart, 0xC );
	memcpy ( &DrawDebugLine_Parms.vEnd, &vEnd, 0xC );

	this->ProcessEvent ( pFnDrawDebugLine, &DrawDebugLine_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.GetAchievements
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemAtlas::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetAchievements" );

	UOnlineSubsystemAtlas_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearReadAchievementsCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddReadAchievementsCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemAtlas::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnReadAchievementsComplete" );

	UOnlineSubsystemAtlas_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ReadAchievements
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadAchievements" );

	UOnlineSubsystemAtlas_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	return ReadAchievements_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearUnlockAchievementCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddUnlockAchievementCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnUnlockAchievementComplete" );

	UOnlineSubsystemAtlas_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.UnlockAchievement
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemAtlas::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UnlockAchievement" );

	UOnlineSubsystemAtlas_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	return UnlockAchievement_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetPersistentData_Rotator
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 AttributeName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FRotator UOnlineSubsystemAtlas::GetPersistentData_Rotator ( struct FString AttributeName )
{
	static UFunction* pFnGetPersistentData_Rotator = NULL;

	if ( ! pFnGetPersistentData_Rotator )
		pFnGetPersistentData_Rotator = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPersistentData_Rotator" );

	UOnlineSubsystemAtlas_execGetPersistentData_Rotator_Parms GetPersistentData_Rotator_Parms;
	memcpy ( &GetPersistentData_Rotator_Parms.AttributeName, &AttributeName, 0xC );

	pFnGetPersistentData_Rotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPersistentData_Rotator, &GetPersistentData_Rotator_Parms, NULL );

	pFnGetPersistentData_Rotator->FunctionFlags |= 0x400;

	return GetPersistentData_Rotator_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetPersistentData_Vector
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 AttributeName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FVector UOnlineSubsystemAtlas::GetPersistentData_Vector ( struct FString AttributeName )
{
	static UFunction* pFnGetPersistentData_Vector = NULL;

	if ( ! pFnGetPersistentData_Vector )
		pFnGetPersistentData_Vector = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPersistentData_Vector" );

	UOnlineSubsystemAtlas_execGetPersistentData_Vector_Parms GetPersistentData_Vector_Parms;
	memcpy ( &GetPersistentData_Vector_Parms.AttributeName, &AttributeName, 0xC );

	pFnGetPersistentData_Vector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPersistentData_Vector, &GetPersistentData_Vector_Parms, NULL );

	pFnGetPersistentData_Vector->FunctionFlags |= 0x400;

	return GetPersistentData_Vector_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.BindPlayerPawn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UOnlineSubsystemAtlas::BindPlayerPawn ( class APawn* P )
{
	static UFunction* pFnBindPlayerPawn = NULL;

	if ( ! pFnBindPlayerPawn )
		pFnBindPlayerPawn = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.BindPlayerPawn" );

	UOnlineSubsystemAtlas_execBindPlayerPawn_Parms BindPlayerPawn_Parms;
	BindPlayerPawn_Parms.P = P;

	pFnBindPlayerPawn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPlayerPawn, &BindPlayerPawn_Parms, NULL );

	pFnBindPlayerPawn->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AddDefaultInventory
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UOnlineSubsystemAtlas::AddDefaultInventory ( class APawn* P )
{
	static UFunction* pFnAddDefaultInventory = NULL;

	if ( ! pFnAddDefaultInventory )
		pFnAddDefaultInventory = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddDefaultInventory" );

	UOnlineSubsystemAtlas_execAddDefaultInventory_Parms AddDefaultInventory_Parms;
	AddDefaultInventory_Parms.P = P;

	pFnAddDefaultInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );

	pFnAddDefaultInventory->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AnnounceHostReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::AnnounceHostReady ( )
{
	static UFunction* pFnAnnounceHostReady = NULL;

	if ( ! pFnAnnounceHostReady )
		pFnAnnounceHostReady = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AnnounceHostReady" );

	UOnlineSubsystemAtlas_execAnnounceHostReady_Parms AnnounceHostReady_Parms;

	pFnAnnounceHostReady->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAnnounceHostReady, &AnnounceHostReady_Parms, NULL );

	pFnAnnounceHostReady->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.RecalculateSkillRating
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.RecalculateSkillRating" );

	UOnlineSubsystemAtlas_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0xC );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.AcceptGameInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AcceptGameInvite" );

	UOnlineSubsystemAtlas_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearGameInviteAcceptedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearGameInviteAcceptedDelegate" );

	UOnlineSubsystemAtlas_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddGameInviteAcceptedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddGameInviteAcceptedDelegate" );

	UOnlineSubsystemAtlas_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult GameInviteSettings             ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::OnGameInviteAccepted ( struct FOnlineGameSearchResult* GameInviteSettings )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnGameInviteAccepted" );

	UOnlineSubsystemAtlas_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( GameInviteSettings )
		memcpy ( GameInviteSettings, &OnGameInviteAccepted_Parms.GameInviteSettings, 0x8 );
};

// Function Atlas.OnlineSubsystemAtlas.WriteArbitrationData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemAtlas::WriteArbitrationData ( )
{
	static UFunction* pFnWriteArbitrationData = NULL;

	if ( ! pFnWriteArbitrationData )
		pFnWriteArbitrationData = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.WriteArbitrationData" );

	UOnlineSubsystemAtlas_execWriteArbitrationData_Parms WriteArbitrationData_Parms;

	pFnWriteArbitrationData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteArbitrationData, &WriteArbitrationData_Parms, NULL );

	pFnWriteArbitrationData->FunctionFlags |= 0x400;

	return WriteArbitrationData_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetArbitratedPlayers
// [0x00020000] 
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineSubsystemAtlas::GetArbitratedPlayers ( struct FName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetArbitratedPlayers" );

	UOnlineSubsystemAtlas_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnClearArbitrationRegistrationCompleteDelegate )
		pFnClearArbitrationRegistrationCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearArbitrationRegistrationCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnAddArbitrationRegistrationCompleteDelegate )
		pFnAddArbitrationRegistrationCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddArbitrationRegistrationCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnArbitrationRegistrationComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if ( ! pFnOnArbitrationRegistrationComplete )
		pFnOnArbitrationRegistrationComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnArbitrationRegistrationComplete" );

	UOnlineSubsystemAtlas_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy ( &OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.RegisterForArbitration
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::RegisterForArbitration ( struct FName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.RegisterForArbitration" );

	UOnlineSubsystemAtlas_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetOnlineGameState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemAtlas::GetOnlineGameState ( )
{
	static UFunction* pFnGetOnlineGameState = NULL;

	if ( ! pFnGetOnlineGameState )
		pFnGetOnlineGameState = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetOnlineGameState" );

	UOnlineSubsystemAtlas_execGetOnlineGameState_Parms GetOnlineGameState_Parms;

	this->ProcessEvent ( pFnGetOnlineGameState, &GetOnlineGameState_Parms, NULL );

	return GetOnlineGameState_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearEndOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearEndOnlineGameCompleteDelegate )
		pFnClearEndOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearEndOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddEndOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddEndOnlineGameCompleteDelegate )
		pFnAddEndOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddEndOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnEndOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnEndOnlineGameComplete" );

	UOnlineSubsystemAtlas_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::EndOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.EndOnlineGame" );

	UOnlineSubsystemAtlas_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearStartOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearStartOnlineGameCompleteDelegate )
		pFnClearStartOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearStartOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddStartOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddStartOnlineGameCompleteDelegate )
		pFnAddStartOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddStartOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnStartOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if ( ! pFnOnStartOnlineGameComplete )
		pFnOnStartOnlineGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnStartOnlineGameComplete" );

	UOnlineSubsystemAtlas_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy ( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.StartOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::StartOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.StartOnlineGame" );

	UOnlineSubsystemAtlas_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	return StartOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearUnregisterPlayerCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddUnregisterPlayerCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnUnregisterPlayerComplete" );

	UOnlineSubsystemAtlas_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.UnregisterPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemAtlas::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UnregisterPlayer" );

	UOnlineSubsystemAtlas_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearRegisterPlayerCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddRegisterPlayerCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnRegisterPlayerComplete" );

	UOnlineSubsystemAtlas_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.RegisterPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.RegisterPlayer" );

	UOnlineSubsystemAtlas_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	return RegisterPlayer_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetResolvedConnectString
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetResolvedConnectString" );

	UOnlineSubsystemAtlas_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearJoinOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinOnlineGameCompleteDelegate )
		pFnClearJoinOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearJoinOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddJoinOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinOnlineGameCompleteDelegate )
		pFnAddJoinOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddJoinOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnJoinOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if ( ! pFnOnJoinOnlineGameComplete )
		pFnOnJoinOnlineGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnJoinOnlineGameComplete" );

	UOnlineSubsystemAtlas_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy ( &OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.JoinOnlineGame
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemAtlas::JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.JoinOnlineGame" );

	UOnlineSubsystemAtlas_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.QueryNonAdvertisedData
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineSubsystemAtlas::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.QueryNonAdvertisedData" );

	UOnlineSubsystemAtlas_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.FreeSearchResults
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.FreeSearchResults" );

	UOnlineSubsystemAtlas_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	return FreeSearchResults_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetGameSearch
// [0x00020000] 
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineSubsystemAtlas::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetGameSearch" );

	UOnlineSubsystemAtlas_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.BindPlatformSpecificSessionToSearch
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineSubsystemAtlas::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.BindPlatformSpecificSessionToSearch" );

	UOnlineSubsystemAtlas_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemAtlas::ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadPlatformSpecificSessionInfoBySessionName" );

	UOnlineSubsystemAtlas_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlatformSpecificSessionInfo
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemAtlas::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadPlatformSpecificSessionInfo" );

	UOnlineSubsystemAtlas_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x8 );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearCancelFindOnlineGamesCompleteDelegate )
		pFnClearCancelFindOnlineGamesCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearCancelFindOnlineGamesCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddCancelFindOnlineGamesCompleteDelegate )
		pFnAddCancelFindOnlineGamesCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddCancelFindOnlineGamesCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnCancelFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if ( ! pFnOnCancelFindOnlineGamesComplete )
		pFnOnCancelFindOnlineGamesComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnCancelFindOnlineGamesComplete" );

	UOnlineSubsystemAtlas_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.CancelFindOnlineGames
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemAtlas::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CancelFindOnlineGames" );

	UOnlineSubsystemAtlas_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearFindOnlineGamesCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearFindOnlineGamesCompleteDelegate )
		pFnClearFindOnlineGamesCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearFindOnlineGamesCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddFindOnlineGamesCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddFindOnlineGamesCompleteDelegate )
		pFnAddFindOnlineGamesCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddFindOnlineGamesCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if ( ! pFnOnFindOnlineGamesComplete )
		pFnOnFindOnlineGamesComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnFindOnlineGamesComplete" );

	UOnlineSubsystemAtlas_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.FindOnlineGames
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineSubsystemAtlas::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.FindOnlineGames" );

	UOnlineSubsystemAtlas_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	return FindOnlineGames_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearDestroyOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearDestroyOnlineGameCompleteDelegate )
		pFnClearDestroyOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearDestroyOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddDestroyOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddDestroyOnlineGameCompleteDelegate )
		pFnAddDestroyOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddDestroyOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnDestroyOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnDestroyOnlineGameComplete" );

	UOnlineSubsystemAtlas_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.DestroyOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::DestroyOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DestroyOnlineGame" );

	UOnlineSubsystemAtlas_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetGameSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineSubsystemAtlas::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetGameSettings" );

	UOnlineSubsystemAtlas_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearUpdateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearUpdateOnlineGameCompleteDelegate )
		pFnClearUpdateOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearUpdateOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddUpdateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddUpdateOnlineGameCompleteDelegate )
		pFnAddUpdateOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddUpdateOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnUpdateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if ( ! pFnOnUpdateOnlineGameComplete )
		pFnOnUpdateOnlineGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnUpdateOnlineGameComplete" );

	UOnlineSubsystemAtlas_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy ( &OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.UpdateOnlineGame
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UpdateOnlineGame" );

	UOnlineSubsystemAtlas_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearCreateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearCreateOnlineGameCompleteDelegate )
		pFnClearCreateOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearCreateOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddCreateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddCreateOnlineGameCompleteDelegate )
		pFnAddCreateOnlineGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddCreateOnlineGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnCreateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnCreateOnlineGameComplete" );

	UOnlineSubsystemAtlas_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.CreateOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineSubsystemAtlas::CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CreateOnlineGame" );

	UOnlineSubsystemAtlas_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.DeleteMessage
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemAtlas::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DeleteMessage" );

	UOnlineSubsystemAtlas_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearFriendMessageReceivedDelegate" );

	UOnlineSubsystemAtlas_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddFriendMessageReceivedDelegate" );

	UOnlineSubsystemAtlas_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnFriendMessageReceived" );

	UOnlineSubsystemAtlas_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.GetFriendMessages
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetFriendMessages" );

	UOnlineSubsystemAtlas_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function Atlas.OnlineSubsystemAtlas.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearJoinFriendGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddJoinFriendGameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnJoinFriendGameComplete" );

	UOnlineSubsystemAtlas_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.JoinFriendGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemAtlas::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.JoinFriendGame" );

	UOnlineSubsystemAtlas_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	return JoinFriendGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearReceivedGameInviteDelegate" );

	UOnlineSubsystemAtlas_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddReceivedGameInviteDelegate" );

	UOnlineSubsystemAtlas_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnReceivedGameInvite" );

	UOnlineSubsystemAtlas_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.SendGameInviteToFriends
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.SendGameInviteToFriends" );

	UOnlineSubsystemAtlas_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.SendGameInviteToFriend
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.SendGameInviteToFriend" );

	UOnlineSubsystemAtlas_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.SendMessageToFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.SendMessageToFriend" );

	UOnlineSubsystemAtlas_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearFriendInviteReceivedDelegate" );

	UOnlineSubsystemAtlas_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddFriendInviteReceivedDelegate" );

	UOnlineSubsystemAtlas_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnFriendInviteReceived" );

	UOnlineSubsystemAtlas_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.RemoveFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemAtlas::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.RemoveFriend" );

	UOnlineSubsystemAtlas_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	return RemoveFriend_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.DenyFriendInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemAtlas::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DenyFriendInvite" );

	UOnlineSubsystemAtlas_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.AcceptFriendInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemAtlas::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AcceptFriendInvite" );

	UOnlineSubsystemAtlas_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearAddFriendByNameCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddAddFriendByNameCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnAddFriendByNameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnAddFriendByNameComplete" );

	UOnlineSubsystemAtlas_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendByName
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddFriendByName" );

	UOnlineSubsystemAtlas_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	return AddFriendByName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.AddFriend
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddFriend" );

	UOnlineSubsystemAtlas_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	return AddFriend_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetKeyboardInputResults
// [0x00420000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemAtlas::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetKeyboardInputResults" );

	UOnlineSubsystemAtlas_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearKeyboardInputDoneDelegate" );

	UOnlineSubsystemAtlas_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddKeyboardInputDoneDelegate" );

	UOnlineSubsystemAtlas_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnKeyboardInputComplete" );

	UOnlineSubsystemAtlas_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ShowKeyboardUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ShowKeyboardUI" );

	UOnlineSubsystemAtlas_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.SetOnlineStatus
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.SetOnlineStatus" );

	UOnlineSubsystemAtlas_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusId = StatusId;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	if ( LocalizedStringSettings )
		memcpy ( LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC );

	if ( Properties )
		memcpy ( Properties, &SetOnlineStatus_Parms.Properties, 0xC );
};

// Function Atlas.OnlineSubsystemAtlas.GetFriendsList
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemAtlas::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetFriendsList" );

	UOnlineSubsystemAtlas_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0xC );

	return GetFriendsList_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadFriendsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearReadFriendsCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddReadFriendsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddReadFriendsCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnReadFriendsComplete" );

	UOnlineSubsystemAtlas_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ReadFriendsList
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadFriendsList" );

	UOnlineSubsystemAtlas_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	return ReadFriendsList_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearWritePlayerStorageCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddWritePlayerStorageCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnWritePlayerStorageComplete" );

	UOnlineSubsystemAtlas_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.WritePlayerStorage
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemAtlas::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.WritePlayerStorage" );

	UOnlineSubsystemAtlas_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetPlayerStorage
// [0x00020000] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemAtlas::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPlayerStorage" );

	UOnlineSubsystemAtlas_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearReadPlayerStorageForNetIdCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddReadPlayerStorageForNetIdCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnReadPlayerStorageForNetIdComplete" );

	UOnlineSubsystemAtlas_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemAtlas::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorageForNetId" );

	UOnlineSubsystemAtlas_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearReadPlayerStorageCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddReadPlayerStorageCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnReadPlayerStorageComplete" );

	UOnlineSubsystemAtlas_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorage
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemAtlas::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorage" );

	UOnlineSubsystemAtlas_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearWriteProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearWriteProfileSettingsCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddWriteProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddWriteProfileSettingsCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnWriteProfileSettingsComplete" );

	UOnlineSubsystemAtlas_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.WriteProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemAtlas::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.WriteProfileSettings" );

	UOnlineSubsystemAtlas_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetProfileSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemAtlas::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetProfileSettings" );

	UOnlineSubsystemAtlas_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearReadProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearReadProfileSettingsCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddReadProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddReadProfileSettingsCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnReadProfileSettingsComplete" );

	UOnlineSubsystemAtlas_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ReadProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemAtlas::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ReadProfileSettings" );

	UOnlineSubsystemAtlas_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearFriendsChangeDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearFriendsChangeDelegate" );

	UOnlineSubsystemAtlas_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddFriendsChangeDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddFriendsChangeDelegate" );

	UOnlineSubsystemAtlas_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearMutingChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearMutingChangeDelegate" );

	UOnlineSubsystemAtlas_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddMutingChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddMutingChangeDelegate" );

	UOnlineSubsystemAtlas_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearLoginCancelledDelegate" );

	UOnlineSubsystemAtlas_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddLoginCancelledDelegate" );

	UOnlineSubsystemAtlas_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemAtlas::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearLoginStatusChangeDelegate" );

	UOnlineSubsystemAtlas_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemAtlas::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddLoginStatusChangeDelegate" );

	UOnlineSubsystemAtlas_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemAtlas::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLoginStatusChange" );

	UOnlineSubsystemAtlas_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearLoginChangeDelegate" );

	UOnlineSubsystemAtlas_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddLoginChangeDelegate" );

	UOnlineSubsystemAtlas_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ShowFriendsUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemAtlas::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ShowFriendsUI" );

	UOnlineSubsystemAtlas_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.IsMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemAtlas::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.IsMuted" );

	UOnlineSubsystemAtlas_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.AreAnyFriends
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AreAnyFriends" );

	UOnlineSubsystemAtlas_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.IsFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemAtlas::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.IsFriend" );

	UOnlineSubsystemAtlas_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	return IsFriend_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.CanShowPresenceInformation
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::CanShowPresenceInformation ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CanShowPresenceInformation" );

	UOnlineSubsystemAtlas_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.CanViewPlayerProfiles
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::CanViewPlayerProfiles ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CanViewPlayerProfiles" );

	UOnlineSubsystemAtlas_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.CanPurchaseContent
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::CanPurchaseContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CanPurchaseContent" );

	UOnlineSubsystemAtlas_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.CanDownloadUserContent
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::CanDownloadUserContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CanDownloadUserContent" );

	UOnlineSubsystemAtlas_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.CanCommunicate
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CanCommunicate" );

	UOnlineSubsystemAtlas_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	return CanCommunicate_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.CanPlayOnline
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::CanPlayOnline ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CanPlayOnline" );

	UOnlineSubsystemAtlas_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	return CanPlayOnline_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemAtlas::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.IsLocalLogin" );

	UOnlineSubsystemAtlas_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemAtlas::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.IsGuestLogin" );

	UOnlineSubsystemAtlas_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetPlayerNickname
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemAtlas::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPlayerNickname" );

	UOnlineSubsystemAtlas_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetUniquePlayerId
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemAtlas::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetUniquePlayerId" );

	UOnlineSubsystemAtlas_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemAtlas::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetLoginStatus" );

	UOnlineSubsystemAtlas_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearLogoutCompletedDelegate" );

	UOnlineSubsystemAtlas_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddLogoutCompletedDelegate" );

	UOnlineSubsystemAtlas_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLogoutCompleted" );

	UOnlineSubsystemAtlas_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.Logout
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemAtlas::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.Logout" );

	UOnlineSubsystemAtlas_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	return Logout_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearLoginFailedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearLoginFailedDelegate" );

	UOnlineSubsystemAtlas_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddLoginFailedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddLoginFailedDelegate" );

	UOnlineSubsystemAtlas_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemAtlas::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLoginFailed" );

	UOnlineSubsystemAtlas_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AutoLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemAtlas::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AutoLogin" );

	UOnlineSubsystemAtlas_execAutoLogin_Parms AutoLogin_Parms;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	return AutoLogin_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.Login
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.Login" );

	UOnlineSubsystemAtlas_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	return Login_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ShowLoginUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ShowLoginUI" );

	UOnlineSubsystemAtlas_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	return ShowLoginUI_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnFriendsChange" );

	UOnlineSubsystemAtlas_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnMutingChange" );

	UOnlineSubsystemAtlas_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLoginCancelled" );

	UOnlineSubsystemAtlas_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemAtlas::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLoginChange" );

	UOnlineSubsystemAtlas_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillIsActive
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iSlot                          ( CPF_Parm )

bool UOnlineSubsystemAtlas::GetSkillIsActive ( int iSlot )
{
	static UFunction* pFnGetSkillIsActive = NULL;

	if ( ! pFnGetSkillIsActive )
		pFnGetSkillIsActive = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillIsActive" );

	UOnlineSubsystemAtlas_execGetSkillIsActive_Parms GetSkillIsActive_Parms;
	GetSkillIsActive_Parms.iSlot = iSlot;

	pFnGetSkillIsActive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillIsActive, &GetSkillIsActive_Parms, NULL );

	pFnGetSkillIsActive->FunctionFlags |= 0x400;

	return GetSkillIsActive_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iSlot                          ( CPF_Parm )

float UOnlineSubsystemAtlas::GetSkillValue ( int iSlot )
{
	static UFunction* pFnGetSkillValue = NULL;

	if ( ! pFnGetSkillValue )
		pFnGetSkillValue = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillValue" );

	UOnlineSubsystemAtlas_execGetSkillValue_Parms GetSkillValue_Parms;
	GetSkillValue_Parms.iSlot = iSlot;

	pFnGetSkillValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillValue, &GetSkillValue_Parms, NULL );

	pFnGetSkillValue->FunctionFlags |= 0x400;

	return GetSkillValue_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillGroup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            iSlot                          ( CPF_Parm )

struct FString UOnlineSubsystemAtlas::GetSkillGroup ( int iSlot )
{
	static UFunction* pFnGetSkillGroup = NULL;

	if ( ! pFnGetSkillGroup )
		pFnGetSkillGroup = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillGroup" );

	UOnlineSubsystemAtlas_execGetSkillGroup_Parms GetSkillGroup_Parms;
	GetSkillGroup_Parms.iSlot = iSlot;

	pFnGetSkillGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillGroup, &GetSkillGroup_Parms, NULL );

	pFnGetSkillGroup->FunctionFlags |= 0x400;

	return GetSkillGroup_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillContentInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )
// class UContentInfo*            Info                           ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetSkillContentInfo ( int iSlot, class UContentInfo** Info )
{
	static UFunction* pFnGetSkillContentInfo = NULL;

	if ( ! pFnGetSkillContentInfo )
		pFnGetSkillContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillContentInfo" );

	UOnlineSubsystemAtlas_execGetSkillContentInfo_Parms GetSkillContentInfo_Parms;
	GetSkillContentInfo_Parms.iSlot = iSlot;

	pFnGetSkillContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillContentInfo, &GetSkillContentInfo_Parms, NULL );

	pFnGetSkillContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetSkillContentInfo_Parms.Info;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            iSlot                          ( CPF_Parm )

struct FString UOnlineSubsystemAtlas::GetSkillName ( int iSlot )
{
	static UFunction* pFnGetSkillName = NULL;

	if ( ! pFnGetSkillName )
		pFnGetSkillName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillName" );

	UOnlineSubsystemAtlas_execGetSkillName_Parms GetSkillName_Parms;
	GetSkillName_Parms.iSlot = iSlot;

	pFnGetSkillName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillName, &GetSkillName_Parms, NULL );

	pFnGetSkillName->FunctionFlags |= 0x400;

	return GetSkillName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetNumSkills
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemAtlas::GetNumSkills ( )
{
	static UFunction* pFnGetNumSkills = NULL;

	if ( ! pFnGetNumSkills )
		pFnGetNumSkills = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetNumSkills" );

	UOnlineSubsystemAtlas_execGetNumSkills_Parms GetNumSkills_Parms;

	pFnGetNumSkills->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumSkills, &GetNumSkills_Parms, NULL );

	pFnGetNumSkills->FunctionFlags |= 0x400;

	return GetNumSkills_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.PickupSkill
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::PickupSkill ( int iSlot )
{
	static UFunction* pFnPickupSkill = NULL;

	if ( ! pFnPickupSkill )
		pFnPickupSkill = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PickupSkill" );

	UOnlineSubsystemAtlas_execPickupSkill_Parms PickupSkill_Parms;
	PickupSkill_Parms.iSlot = iSlot;

	pFnPickupSkill->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPickupSkill, &PickupSkill_Parms, NULL );

	pFnPickupSkill->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillOpenInterface
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iSlot                          ( CPF_Parm )
// struct FString                 SceneStr                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            GFXEnum                        ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemAtlas::GetSkillOpenInterface ( int iSlot, struct FString* SceneStr, int* GFXEnum )
{
	static UFunction* pFnGetSkillOpenInterface = NULL;

	if ( ! pFnGetSkillOpenInterface )
		pFnGetSkillOpenInterface = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillOpenInterface" );

	UOnlineSubsystemAtlas_execGetSkillOpenInterface_Parms GetSkillOpenInterface_Parms;
	GetSkillOpenInterface_Parms.iSlot = iSlot;

	pFnGetSkillOpenInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillOpenInterface, &GetSkillOpenInterface_Parms, NULL );

	pFnGetSkillOpenInterface->FunctionFlags |= 0x400;

	if ( SceneStr )
		memcpy ( SceneStr, &GetSkillOpenInterface_Parms.SceneStr, 0xC );

	if ( GFXEnum )
		*GFXEnum = GetSkillOpenInterface_Parms.GFXEnum;

	return GetSkillOpenInterface_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillTargetRequierment
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iSlot                          ( CPF_Parm )

bool UOnlineSubsystemAtlas::GetSkillTargetRequierment ( int iSlot )
{
	static UFunction* pFnGetSkillTargetRequierment = NULL;

	if ( ! pFnGetSkillTargetRequierment )
		pFnGetSkillTargetRequierment = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillTargetRequierment" );

	UOnlineSubsystemAtlas_execGetSkillTargetRequierment_Parms GetSkillTargetRequierment_Parms;
	GetSkillTargetRequierment_Parms.iSlot = iSlot;

	pFnGetSkillTargetRequierment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillTargetRequierment, &GetSkillTargetRequierment_Parms, NULL );

	pFnGetSkillTargetRequierment->FunctionFlags |= 0x400;

	return GetSkillTargetRequierment_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetSkillTargetTypeID
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iSlot                          ( CPF_Parm )

int UOnlineSubsystemAtlas::GetSkillTargetTypeID ( int iSlot )
{
	static UFunction* pFnGetSkillTargetTypeID = NULL;

	if ( ! pFnGetSkillTargetTypeID )
		pFnGetSkillTargetTypeID = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetSkillTargetTypeID" );

	UOnlineSubsystemAtlas_execGetSkillTargetTypeID_Parms GetSkillTargetTypeID_Parms;
	GetSkillTargetTypeID_Parms.iSlot = iSlot;

	pFnGetSkillTargetTypeID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkillTargetTypeID, &GetSkillTargetTypeID_Parms, NULL );

	pFnGetSkillTargetTypeID->FunctionFlags |= 0x400;

	return GetSkillTargetTypeID_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorCompactGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )
// struct FString                 ItemGuid                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::GetVendorCompactGuid ( int iSlot, struct FString* ItemGuid )
{
	static UFunction* pFnGetVendorCompactGuid = NULL;

	if ( ! pFnGetVendorCompactGuid )
		pFnGetVendorCompactGuid = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetVendorCompactGuid" );

	UOnlineSubsystemAtlas_execGetVendorCompactGuid_Parms GetVendorCompactGuid_Parms;
	GetVendorCompactGuid_Parms.iSlot = iSlot;

	pFnGetVendorCompactGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVendorCompactGuid, &GetVendorCompactGuid_Parms, NULL );

	pFnGetVendorCompactGuid->FunctionFlags |= 0x400;

	if ( ItemGuid )
		memcpy ( ItemGuid, &GetVendorCompactGuid_Parms.ItemGuid, 0xC );
};

// Function Atlas.OnlineSubsystemAtlas.GetInventoryItemName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            iBag                           ( CPF_Parm )
// int                            iSlot                          ( CPF_Parm )

struct FString UOnlineSubsystemAtlas::GetInventoryItemName ( int iBag, int iSlot )
{
	static UFunction* pFnGetInventoryItemName = NULL;

	if ( ! pFnGetInventoryItemName )
		pFnGetInventoryItemName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetInventoryItemName" );

	UOnlineSubsystemAtlas_execGetInventoryItemName_Parms GetInventoryItemName_Parms;
	GetInventoryItemName_Parms.iBag = iBag;
	GetInventoryItemName_Parms.iSlot = iSlot;

	pFnGetInventoryItemName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInventoryItemName, &GetInventoryItemName_Parms, NULL );

	pFnGetInventoryItemName->FunctionFlags |= 0x400;

	return GetInventoryItemName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetPickedInventorySlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemAtlas::GetPickedInventorySlot ( )
{
	static UFunction* pFnGetPickedInventorySlot = NULL;

	if ( ! pFnGetPickedInventorySlot )
		pFnGetPickedInventorySlot = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPickedInventorySlot" );

	UOnlineSubsystemAtlas_execGetPickedInventorySlot_Parms GetPickedInventorySlot_Parms;

	pFnGetPickedInventorySlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPickedInventorySlot, &GetPickedInventorySlot_Parms, NULL );

	pFnGetPickedInventorySlot->FunctionFlags |= 0x400;

	return GetPickedInventorySlot_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetPickedContentInfoActionBar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UContentInfo*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UContentInfo* UOnlineSubsystemAtlas::GetPickedContentInfoActionBar ( )
{
	static UFunction* pFnGetPickedContentInfoActionBar = NULL;

	if ( ! pFnGetPickedContentInfoActionBar )
		pFnGetPickedContentInfoActionBar = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPickedContentInfoActionBar" );

	UOnlineSubsystemAtlas_execGetPickedContentInfoActionBar_Parms GetPickedContentInfoActionBar_Parms;

	pFnGetPickedContentInfoActionBar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPickedContentInfoActionBar, &GetPickedContentInfoActionBar_Parms, NULL );

	pFnGetPickedContentInfoActionBar->FunctionFlags |= 0x400;

	return GetPickedContentInfoActionBar_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ServerMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          TimeStamp                      ( CPF_Parm )
// struct FVector                 InAccel                        ( CPF_Parm )
// struct FVector                 ClientLoc                      ( CPF_Parm )
// unsigned char                  MoveFlags                      ( CPF_Parm )
// unsigned char                  ClientRoll                     ( CPF_Parm )
// int                            View                           ( CPF_Parm )

void UOnlineSubsystemAtlas::ServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, unsigned char MoveFlags, unsigned char ClientRoll, int View )
{
	static UFunction* pFnServerMove = NULL;

	if ( ! pFnServerMove )
		pFnServerMove = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ServerMove" );

	UOnlineSubsystemAtlas_execServerMove_Parms ServerMove_Parms;
	ServerMove_Parms.TimeStamp = TimeStamp;
	memcpy ( &ServerMove_Parms.InAccel, &InAccel, 0xC );
	memcpy ( &ServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
	ServerMove_Parms.MoveFlags = MoveFlags;
	ServerMove_Parms.ClientRoll = ClientRoll;
	ServerMove_Parms.View = View;

	pFnServerMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnServerMove, &ServerMove_Parms, NULL );

	pFnServerMove->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.DualServerMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          TimeStampA                     ( CPF_Parm )
// struct FVector                 InAccelA                       ( CPF_Parm )
// unsigned char                  PendingFlags                   ( CPF_Parm )
// int                            ViewA                          ( CPF_Parm )
// float                          TimeStampB                     ( CPF_Parm )
// struct FVector                 InAccelB                       ( CPF_Parm )
// struct FVector                 ClientLoc                      ( CPF_Parm )
// unsigned char                  NewFlags                       ( CPF_Parm )
// unsigned char                  ClientRoll                     ( CPF_Parm )
// int                            ViewB                          ( CPF_Parm )

void UOnlineSubsystemAtlas::DualServerMove ( float TimeStampA, struct FVector InAccelA, unsigned char PendingFlags, int ViewA, float TimeStampB, struct FVector InAccelB, struct FVector ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, int ViewB )
{
	static UFunction* pFnDualServerMove = NULL;

	if ( ! pFnDualServerMove )
		pFnDualServerMove = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DualServerMove" );

	UOnlineSubsystemAtlas_execDualServerMove_Parms DualServerMove_Parms;
	DualServerMove_Parms.TimeStampA = TimeStampA;
	memcpy ( &DualServerMove_Parms.InAccelA, &InAccelA, 0xC );
	DualServerMove_Parms.PendingFlags = PendingFlags;
	DualServerMove_Parms.ViewA = ViewA;
	DualServerMove_Parms.TimeStampB = TimeStampB;
	memcpy ( &DualServerMove_Parms.InAccelB, &InAccelB, 0xC );
	memcpy ( &DualServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
	DualServerMove_Parms.NewFlags = NewFlags;
	DualServerMove_Parms.ClientRoll = ClientRoll;
	DualServerMove_Parms.ViewB = ViewB;

	pFnDualServerMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDualServerMove, &DualServerMove_Parms, NULL );

	pFnDualServerMove->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.OldServerMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          OldTimeStamp                   ( CPF_Parm )
// unsigned char                  OldAccelX                      ( CPF_Parm )
// unsigned char                  OldAccelY                      ( CPF_Parm )
// unsigned char                  OldAccelZ                      ( CPF_Parm )
// unsigned char                  OldMoveFlags                   ( CPF_Parm )

void UOnlineSubsystemAtlas::OldServerMove ( float OldTimeStamp, unsigned char OldAccelX, unsigned char OldAccelY, unsigned char OldAccelZ, unsigned char OldMoveFlags )
{
	static UFunction* pFnOldServerMove = NULL;

	if ( ! pFnOldServerMove )
		pFnOldServerMove = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OldServerMove" );

	UOnlineSubsystemAtlas_execOldServerMove_Parms OldServerMove_Parms;
	OldServerMove_Parms.OldTimeStamp = OldTimeStamp;
	OldServerMove_Parms.OldAccelX = OldAccelX;
	OldServerMove_Parms.OldAccelY = OldAccelY;
	OldServerMove_Parms.OldAccelZ = OldAccelZ;
	OldServerMove_Parms.OldMoveFlags = OldMoveFlags;

	pFnOldServerMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOldServerMove, &OldServerMove_Parms, NULL );

	pFnOldServerMove->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.ProcessCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 CmdStr                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ProcessCommand ( struct FString CmdStr )
{
	static UFunction* pFnProcessCommand = NULL;

	if ( ! pFnProcessCommand )
		pFnProcessCommand = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ProcessCommand" );

	UOnlineSubsystemAtlas_execProcessCommand_Parms ProcessCommand_Parms;
	memcpy ( &ProcessCommand_Parms.CmdStr, &CmdStr, 0xC );

	pFnProcessCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessCommand, &ProcessCommand_Parms, NULL );

	pFnProcessCommand->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.VendorBuy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAtlasAvatarComponent*   InComp                         ( CPF_Parm | CPF_EditInline )
// struct FGuid                   ItemGuid                       ( CPF_Parm )

void UOnlineSubsystemAtlas::VendorBuy ( class UAtlasAvatarComponent* InComp, struct FGuid ItemGuid )
{
	static UFunction* pFnVendorBuy = NULL;

	if ( ! pFnVendorBuy )
		pFnVendorBuy = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.VendorBuy" );

	UOnlineSubsystemAtlas_execVendorBuy_Parms VendorBuy_Parms;
	VendorBuy_Parms.InComp = InComp;
	memcpy ( &VendorBuy_Parms.ItemGuid, &ItemGuid, 0x10 );

	pFnVendorBuy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVendorBuy, &VendorBuy_Parms, NULL );

	pFnVendorBuy->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.VendorBrowse
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAtlasAvatarComponent*   InComp                         ( CPF_Parm | CPF_EditInline )

void UOnlineSubsystemAtlas::VendorBrowse ( class UAtlasAvatarComponent* InComp )
{
	static UFunction* pFnVendorBrowse = NULL;

	if ( ! pFnVendorBrowse )
		pFnVendorBrowse = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.VendorBrowse" );

	UOnlineSubsystemAtlas_execVendorBrowse_Parms VendorBrowse_Parms;
	VendorBrowse_Parms.InComp = InComp;

	pFnVendorBrowse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVendorBrowse, &VendorBrowse_Parms, NULL );

	pFnVendorBrowse->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.TargetSet
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AAtlasAvatar*            NewTarget                      ( CPF_Parm )

void UOnlineSubsystemAtlas::TargetSet ( class AAtlasAvatar* NewTarget )
{
	static UFunction* pFnTargetSet = NULL;

	if ( ! pFnTargetSet )
		pFnTargetSet = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.TargetSet" );

	UOnlineSubsystemAtlas_execTargetSet_Parms TargetSet_Parms;
	TargetSet_Parms.NewTarget = NewTarget;

	pFnTargetSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTargetSet, &TargetSet_Parms, NULL );

	pFnTargetSet->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.QuestStartRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAtlasAvatarComponent*   InComp                         ( CPF_Parm | CPF_EditInline )
// struct FString                 QuestGuid                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::QuestStartRequest ( class UAtlasAvatarComponent* InComp, struct FString QuestGuid )
{
	static UFunction* pFnQuestStartRequest = NULL;

	if ( ! pFnQuestStartRequest )
		pFnQuestStartRequest = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.QuestStartRequest" );

	UOnlineSubsystemAtlas_execQuestStartRequest_Parms QuestStartRequest_Parms;
	QuestStartRequest_Parms.InComp = InComp;
	memcpy ( &QuestStartRequest_Parms.QuestGuid, &QuestGuid, 0xC );

	pFnQuestStartRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuestStartRequest, &QuestStartRequest_Parms, NULL );

	pFnQuestStartRequest->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.QuestReturn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAtlasAvatarComponent*   InComp                         ( CPF_Parm | CPF_EditInline )
// struct FString                 QuestGuid                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::QuestReturn ( class UAtlasAvatarComponent* InComp, struct FString QuestGuid )
{
	static UFunction* pFnQuestReturn = NULL;

	if ( ! pFnQuestReturn )
		pFnQuestReturn = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.QuestReturn" );

	UOnlineSubsystemAtlas_execQuestReturn_Parms QuestReturn_Parms;
	QuestReturn_Parms.InComp = InComp;
	memcpy ( &QuestReturn_Parms.QuestGuid, &QuestGuid, 0xC );

	pFnQuestReturn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuestReturn, &QuestReturn_Parms, NULL );

	pFnQuestReturn->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AvatarUse
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AAtlasAvatar*            InAvatar                       ( CPF_Parm )

void UOnlineSubsystemAtlas::AvatarUse ( class AAtlasAvatar* InAvatar )
{
	static UFunction* pFnAvatarUse = NULL;

	if ( ! pFnAvatarUse )
		pFnAvatarUse = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AvatarUse" );

	UOnlineSubsystemAtlas_execAvatarUse_Parms AvatarUse_Parms;
	AvatarUse_Parms.InAvatar = InAvatar;

	pFnAvatarUse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAvatarUse, &AvatarUse_Parms, NULL );

	pFnAvatarUse->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.UseInventoryItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iBag                           ( CPF_Parm )
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::UseInventoryItem ( int iBag, int iSlot )
{
	static UFunction* pFnUseInventoryItem = NULL;

	if ( ! pFnUseInventoryItem )
		pFnUseInventoryItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UseInventoryItem" );

	UOnlineSubsystemAtlas_execUseInventoryItem_Parms UseInventoryItem_Parms;
	UseInventoryItem_Parms.iBag = iBag;
	UseInventoryItem_Parms.iSlot = iSlot;

	pFnUseInventoryItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUseInventoryItem, &UseInventoryItem_Parms, NULL );

	pFnUseInventoryItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.UnEquipSlotItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEquipSlot                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::UnEquipSlotItem ( struct FString sEquipSlot )
{
	static UFunction* pFnUnEquipSlotItem = NULL;

	if ( ! pFnUnEquipSlotItem )
		pFnUnEquipSlotItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UnEquipSlotItem" );

	UOnlineSubsystemAtlas_execUnEquipSlotItem_Parms UnEquipSlotItem_Parms;
	memcpy ( &UnEquipSlotItem_Parms.sEquipSlot, &sEquipSlot, 0xC );

	pFnUnEquipSlotItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnEquipSlotItem, &UnEquipSlotItem_Parms, NULL );

	pFnUnEquipSlotItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.TakeLootItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::TakeLootItem ( int iSlot )
{
	static UFunction* pFnTakeLootItem = NULL;

	if ( ! pFnTakeLootItem )
		pFnTakeLootItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.TakeLootItem" );

	UOnlineSubsystemAtlas_execTakeLootItem_Parms TakeLootItem_Parms;
	TakeLootItem_Parms.iSlot = iSlot;

	pFnTakeLootItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTakeLootItem, &TakeLootItem_Parms, NULL );

	pFnTakeLootItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.PlacePickedInInventory
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iBag                           ( CPF_Parm )
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::PlacePickedInInventory ( int iBag, int iSlot )
{
	static UFunction* pFnPlacePickedInInventory = NULL;

	if ( ! pFnPlacePickedInInventory )
		pFnPlacePickedInInventory = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PlacePickedInInventory" );

	UOnlineSubsystemAtlas_execPlacePickedInInventory_Parms PlacePickedInInventory_Parms;
	PlacePickedInInventory_Parms.iBag = iBag;
	PlacePickedInInventory_Parms.iSlot = iSlot;

	pFnPlacePickedInInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlacePickedInInventory, &PlacePickedInInventory_Parms, NULL );

	pFnPlacePickedInInventory->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.PlacePickedInEquipSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEquipSlot                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::PlacePickedInEquipSlot ( struct FString sEquipSlot )
{
	static UFunction* pFnPlacePickedInEquipSlot = NULL;

	if ( ! pFnPlacePickedInEquipSlot )
		pFnPlacePickedInEquipSlot = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PlacePickedInEquipSlot" );

	UOnlineSubsystemAtlas_execPlacePickedInEquipSlot_Parms PlacePickedInEquipSlot_Parms;
	memcpy ( &PlacePickedInEquipSlot_Parms.sEquipSlot, &sEquipSlot, 0xC );

	pFnPlacePickedInEquipSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlacePickedInEquipSlot, &PlacePickedInEquipSlot_Parms, NULL );

	pFnPlacePickedInEquipSlot->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.PlacePickedInActionBar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::PlacePickedInActionBar ( int iSlot )
{
	static UFunction* pFnPlacePickedInActionBar = NULL;

	if ( ! pFnPlacePickedInActionBar )
		pFnPlacePickedInActionBar = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PlacePickedInActionBar" );

	UOnlineSubsystemAtlas_execPlacePickedInActionBar_Parms PlacePickedInActionBar_Parms;
	PlacePickedInActionBar_Parms.iSlot = iSlot;

	pFnPlacePickedInActionBar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlacePickedInActionBar, &PlacePickedInActionBar_Parms, NULL );

	pFnPlacePickedInActionBar->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.PickupInventoryItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iBag                           ( CPF_Parm )
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::PickupInventoryItem ( int iBag, int iSlot )
{
	static UFunction* pFnPickupInventoryItem = NULL;

	if ( ! pFnPickupInventoryItem )
		pFnPickupInventoryItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PickupInventoryItem" );

	UOnlineSubsystemAtlas_execPickupInventoryItem_Parms PickupInventoryItem_Parms;
	PickupInventoryItem_Parms.iBag = iBag;
	PickupInventoryItem_Parms.iSlot = iSlot;

	pFnPickupInventoryItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPickupInventoryItem, &PickupInventoryItem_Parms, NULL );

	pFnPickupInventoryItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.PickupEquipedItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEquipSlot                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::PickupEquipedItem ( struct FString sEquipSlot )
{
	static UFunction* pFnPickupEquipedItem = NULL;

	if ( ! pFnPickupEquipedItem )
		pFnPickupEquipedItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PickupEquipedItem" );

	UOnlineSubsystemAtlas_execPickupEquipedItem_Parms PickupEquipedItem_Parms;
	memcpy ( &PickupEquipedItem_Parms.sEquipSlot, &sEquipSlot, 0xC );

	pFnPickupEquipedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPickupEquipedItem, &PickupEquipedItem_Parms, NULL );

	pFnPickupEquipedItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.PickupActionBar
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )

void UOnlineSubsystemAtlas::PickupActionBar ( int iSlot )
{
	static UFunction* pFnPickupActionBar = NULL;

	if ( ! pFnPickupActionBar )
		pFnPickupActionBar = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.PickupActionBar" );

	UOnlineSubsystemAtlas_execPickupActionBar_Parms PickupActionBar_Parms;
	PickupActionBar_Parms.iSlot = iSlot;

	pFnPickupActionBar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPickupActionBar, &PickupActionBar_Parms, NULL );

	pFnPickupActionBar->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.GetPickedContentInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UContentInfo*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UContentInfo* UOnlineSubsystemAtlas::GetPickedContentInfo ( )
{
	static UFunction* pFnGetPickedContentInfo = NULL;

	if ( ! pFnGetPickedContentInfo )
		pFnGetPickedContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPickedContentInfo" );

	UOnlineSubsystemAtlas_execGetPickedContentInfo_Parms GetPickedContentInfo_Parms;

	pFnGetPickedContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPickedContentInfo, &GetPickedContentInfo_Parms, NULL );

	pFnGetPickedContentInfo->FunctionFlags |= 0x400;

	return GetPickedContentInfo_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorNumItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemAtlas::GetVendorNumItems ( )
{
	static UFunction* pFnGetVendorNumItems = NULL;

	if ( ! pFnGetVendorNumItems )
		pFnGetVendorNumItems = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetVendorNumItems" );

	UOnlineSubsystemAtlas_execGetVendorNumItems_Parms GetVendorNumItems_Parms;

	pFnGetVendorNumItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVendorNumItems, &GetVendorNumItems_Parms, NULL );

	pFnGetVendorNumItems->FunctionFlags |= 0x400;

	return GetVendorNumItems_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetLootNumItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemAtlas::GetLootNumItems ( )
{
	static UFunction* pFnGetLootNumItems = NULL;

	if ( ! pFnGetLootNumItems )
		pFnGetLootNumItems = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetLootNumItems" );

	UOnlineSubsystemAtlas_execGetLootNumItems_Parms GetLootNumItems_Parms;

	pFnGetLootNumItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLootNumItems, &GetLootNumItems_Parms, NULL );

	pFnGetLootNumItems->FunctionFlags |= 0x400;

	return GetLootNumItems_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorContentInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )
// class UContentInfo*            Int                            ( CPF_Parm | CPF_OutParm )
// int                            ItemCost                       ( CPF_Parm | CPF_OutParm )
// int                            itemQuantity                   ( CPF_Parm | CPF_OutParm )
// struct FString                 ItemName                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            MaxQuantity                    ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetVendorContentInfo ( int iSlot, class UContentInfo** Int, int* ItemCost, int* itemQuantity, struct FString* ItemName, int* MaxQuantity )
{
	static UFunction* pFnGetVendorContentInfo = NULL;

	if ( ! pFnGetVendorContentInfo )
		pFnGetVendorContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetVendorContentInfo" );

	UOnlineSubsystemAtlas_execGetVendorContentInfo_Parms GetVendorContentInfo_Parms;
	GetVendorContentInfo_Parms.iSlot = iSlot;

	pFnGetVendorContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVendorContentInfo, &GetVendorContentInfo_Parms, NULL );

	pFnGetVendorContentInfo->FunctionFlags |= 0x400;

	if ( Int )
		*Int = GetVendorContentInfo_Parms.Int;

	if ( ItemCost )
		*ItemCost = GetVendorContentInfo_Parms.ItemCost;

	if ( itemQuantity )
		*itemQuantity = GetVendorContentInfo_Parms.itemQuantity;

	if ( ItemName )
		memcpy ( ItemName, &GetVendorContentInfo_Parms.ItemName, 0xC );

	if ( MaxQuantity )
		*MaxQuantity = GetVendorContentInfo_Parms.MaxQuantity;
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestPlayerStatus
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sQuestGuid                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  bHasQuest                      ( CPF_Parm | CPF_OutParm )
// unsigned char                  bQuestComplete                 ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetQuestPlayerStatus ( struct FString sQuestGuid, unsigned char* bHasQuest, unsigned char* bQuestComplete )
{
	static UFunction* pFnGetQuestPlayerStatus = NULL;

	if ( ! pFnGetQuestPlayerStatus )
		pFnGetQuestPlayerStatus = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetQuestPlayerStatus" );

	UOnlineSubsystemAtlas_execGetQuestPlayerStatus_Parms GetQuestPlayerStatus_Parms;
	memcpy ( &GetQuestPlayerStatus_Parms.sQuestGuid, &sQuestGuid, 0xC );

	pFnGetQuestPlayerStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetQuestPlayerStatus, &GetQuestPlayerStatus_Parms, NULL );

	pFnGetQuestPlayerStatus->FunctionFlags |= 0x400;

	if ( bHasQuest )
		*bHasQuest = GetQuestPlayerStatus_Parms.bHasQuest;

	if ( bQuestComplete )
		*bQuestComplete = GetQuestPlayerStatus_Parms.bQuestComplete;
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestDisplayName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 sQuestGuid                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemAtlas::GetQuestDisplayName ( struct FString sQuestGuid )
{
	static UFunction* pFnGetQuestDisplayName = NULL;

	if ( ! pFnGetQuestDisplayName )
		pFnGetQuestDisplayName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetQuestDisplayName" );

	UOnlineSubsystemAtlas_execGetQuestDisplayName_Parms GetQuestDisplayName_Parms;
	memcpy ( &GetQuestDisplayName_Parms.sQuestGuid, &sQuestGuid, 0xC );

	pFnGetQuestDisplayName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetQuestDisplayName, &GetQuestDisplayName_Parms, NULL );

	pFnGetQuestDisplayName->FunctionFlags |= 0x400;

	return GetQuestDisplayName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 sQuestGuid                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemAtlas::GetQuestName ( struct FString sQuestGuid )
{
	static UFunction* pFnGetQuestName = NULL;

	if ( ! pFnGetQuestName )
		pFnGetQuestName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetQuestName" );

	UOnlineSubsystemAtlas_execGetQuestName_Parms GetQuestName_Parms;
	memcpy ( &GetQuestName_Parms.sQuestGuid, &sQuestGuid, 0xC );

	pFnGetQuestName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetQuestName, &GetQuestName_Parms, NULL );

	pFnGetQuestName->FunctionFlags |= 0x400;

	return GetQuestName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetQuestInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sQuestGuid                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sQuestText                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FString >       tQuestItemsName                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< class UContentInfo* >  tQuestItemsInfo                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::GetQuestInfo ( struct FString sQuestGuid, struct FString* sQuestText, TArray< struct FString >* tQuestItemsName, TArray< class UContentInfo* >* tQuestItemsInfo )
{
	static UFunction* pFnGetQuestInfo = NULL;

	if ( ! pFnGetQuestInfo )
		pFnGetQuestInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetQuestInfo" );

	UOnlineSubsystemAtlas_execGetQuestInfo_Parms GetQuestInfo_Parms;
	memcpy ( &GetQuestInfo_Parms.sQuestGuid, &sQuestGuid, 0xC );

	pFnGetQuestInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetQuestInfo, &GetQuestInfo_Parms, NULL );

	pFnGetQuestInfo->FunctionFlags |= 0x400;

	if ( sQuestText )
		memcpy ( sQuestText, &GetQuestInfo_Parms.sQuestText, 0xC );

	if ( tQuestItemsName )
		memcpy ( tQuestItemsName, &GetQuestInfo_Parms.tQuestItemsName, 0xC );

	if ( tQuestItemsInfo )
		memcpy ( tQuestItemsInfo, &GetQuestInfo_Parms.tQuestItemsInfo, 0xC );
};

// Function Atlas.OnlineSubsystemAtlas.GetLootContentInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )
// class UContentInfo*            Info                           ( CPF_Parm | CPF_OutParm )
// struct FString                 LootName                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            itemQuantity                   ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetLootContentInfo ( int iSlot, class UContentInfo** Info, struct FString* LootName, int* itemQuantity )
{
	static UFunction* pFnGetLootContentInfo = NULL;

	if ( ! pFnGetLootContentInfo )
		pFnGetLootContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetLootContentInfo" );

	UOnlineSubsystemAtlas_execGetLootContentInfo_Parms GetLootContentInfo_Parms;
	GetLootContentInfo_Parms.iSlot = iSlot;

	pFnGetLootContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLootContentInfo, &GetLootContentInfo_Parms, NULL );

	pFnGetLootContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetLootContentInfo_Parms.Info;

	if ( LootName )
		memcpy ( LootName, &GetLootContentInfo_Parms.LootName, 0xC );

	if ( itemQuantity )
		*itemQuantity = GetLootContentInfo_Parms.itemQuantity;
};

// Function Atlas.OnlineSubsystemAtlas.GetInventoryContentInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iBag                           ( CPF_Parm )
// int                            iSlot                          ( CPF_Parm )
// class UContentInfo*            Info                           ( CPF_Parm | CPF_OutParm )
// int                            ItemValue                      ( CPF_Parm | CPF_OutParm )
// int                            itemQuantity                   ( CPF_Parm | CPF_OutParm )
// unsigned char                  bLocked                        ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetInventoryContentInfo ( int iBag, int iSlot, class UContentInfo** Info, int* ItemValue, int* itemQuantity, unsigned char* bLocked )
{
	static UFunction* pFnGetInventoryContentInfo = NULL;

	if ( ! pFnGetInventoryContentInfo )
		pFnGetInventoryContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetInventoryContentInfo" );

	UOnlineSubsystemAtlas_execGetInventoryContentInfo_Parms GetInventoryContentInfo_Parms;
	GetInventoryContentInfo_Parms.iBag = iBag;
	GetInventoryContentInfo_Parms.iSlot = iSlot;

	pFnGetInventoryContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInventoryContentInfo, &GetInventoryContentInfo_Parms, NULL );

	pFnGetInventoryContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetInventoryContentInfo_Parms.Info;

	if ( ItemValue )
		*ItemValue = GetInventoryContentInfo_Parms.ItemValue;

	if ( itemQuantity )
		*itemQuantity = GetInventoryContentInfo_Parms.itemQuantity;

	if ( bLocked )
		*bLocked = GetInventoryContentInfo_Parms.bLocked;
};

// Function Atlas.OnlineSubsystemAtlas.GetEquipSlotContentInfo
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEquipSlot                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FPointer                pPlayer                        ( CPF_OptionalParm | CPF_Parm )
// class UContentInfo*            Info                           ( CPF_Parm | CPF_OutParm )
// unsigned char                  bLocked                        ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetEquipSlotContentInfo ( struct FString sEquipSlot, struct FPointer pPlayer, class UContentInfo** Info, unsigned char* bLocked )
{
	static UFunction* pFnGetEquipSlotContentInfo = NULL;

	if ( ! pFnGetEquipSlotContentInfo )
		pFnGetEquipSlotContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetEquipSlotContentInfo" );

	UOnlineSubsystemAtlas_execGetEquipSlotContentInfo_Parms GetEquipSlotContentInfo_Parms;
	memcpy ( &GetEquipSlotContentInfo_Parms.sEquipSlot, &sEquipSlot, 0xC );
	memcpy ( &GetEquipSlotContentInfo_Parms.pPlayer, &pPlayer, 0x4 );

	pFnGetEquipSlotContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEquipSlotContentInfo, &GetEquipSlotContentInfo_Parms, NULL );

	pFnGetEquipSlotContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetEquipSlotContentInfo_Parms.Info;

	if ( bLocked )
		*bLocked = GetEquipSlotContentInfo_Parms.bLocked;
};

// Function Atlas.OnlineSubsystemAtlas.GetActionBarContentInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )
// class UContentInfo*            Info                           ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetActionBarContentInfo ( int iSlot, class UContentInfo** Info )
{
	static UFunction* pFnGetActionBarContentInfo = NULL;

	if ( ! pFnGetActionBarContentInfo )
		pFnGetActionBarContentInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetActionBarContentInfo" );

	UOnlineSubsystemAtlas_execGetActionBarContentInfo_Parms GetActionBarContentInfo_Parms;
	GetActionBarContentInfo_Parms.iSlot = iSlot;

	pFnGetActionBarContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActionBarContentInfo, &GetActionBarContentInfo_Parms, NULL );

	pFnGetActionBarContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetActionBarContentInfo_Parms.Info;
};

// Function Atlas.OnlineSubsystemAtlas.GetPlayerName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FPointer                pPlayer                        ( CPF_OptionalParm | CPF_Parm )

struct FString UOnlineSubsystemAtlas::GetPlayerName ( struct FPointer pPlayer )
{
	static UFunction* pFnGetPlayerName = NULL;

	if ( ! pFnGetPlayerName )
		pFnGetPlayerName = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetPlayerName" );

	UOnlineSubsystemAtlas_execGetPlayerName_Parms GetPlayerName_Parms;
	memcpy ( &GetPlayerName_Parms.pPlayer, &pPlayer, 0x4 );

	pFnGetPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerName, &GetPlayerName_Parms, NULL );

	pFnGetPlayerName->FunctionFlags |= 0x400;

	return GetPlayerName_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetInspectedPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FPointer                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FPointer UOnlineSubsystemAtlas::GetInspectedPlayer ( )
{
	static UFunction* pFnGetInspectedPlayer = NULL;

	if ( ! pFnGetInspectedPlayer )
		pFnGetInspectedPlayer = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetInspectedPlayer" );

	UOnlineSubsystemAtlas_execGetInspectedPlayer_Parms GetInspectedPlayer_Parms;

	pFnGetInspectedPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInspectedPlayer, &GetInspectedPlayer_Parms, NULL );

	pFnGetInspectedPlayer->FunctionFlags |= 0x400;

	return GetInspectedPlayer_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.DestroyPickedItem
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            iQuantity                      ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemAtlas::DestroyPickedItem ( int iQuantity )
{
	static UFunction* pFnDestroyPickedItem = NULL;

	if ( ! pFnDestroyPickedItem )
		pFnDestroyPickedItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DestroyPickedItem" );

	UOnlineSubsystemAtlas_execDestroyPickedItem_Parms DestroyPickedItem_Parms;
	DestroyPickedItem_Parms.iQuantity = iQuantity;

	pFnDestroyPickedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyPickedItem, &DestroyPickedItem_Parms, NULL );

	pFnDestroyPickedItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.ClearPickedItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::ClearPickedItem ( )
{
	static UFunction* pFnClearPickedItem = NULL;

	if ( ! pFnClearPickedItem )
		pFnClearPickedItem = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearPickedItem" );

	UOnlineSubsystemAtlas_execClearPickedItem_Parms ClearPickedItem_Parms;

	pFnClearPickedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearPickedItem, &ClearPickedItem_Parms, NULL );

	pFnClearPickedItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.CloseVendorSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::CloseVendorSession ( )
{
	static UFunction* pFnCloseVendorSession = NULL;

	if ( ! pFnCloseVendorSession )
		pFnCloseVendorSession = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CloseVendorSession" );

	UOnlineSubsystemAtlas_execCloseVendorSession_Parms CloseVendorSession_Parms;

	pFnCloseVendorSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseVendorSession, &CloseVendorSession_Parms, NULL );

	pFnCloseVendorSession->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.GetVendorComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAtlasAvatarComponent*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UAtlasAvatarComponent* UOnlineSubsystemAtlas::GetVendorComponent ( )
{
	static UFunction* pFnGetVendorComponent = NULL;

	if ( ! pFnGetVendorComponent )
		pFnGetVendorComponent = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetVendorComponent" );

	UOnlineSubsystemAtlas_execGetVendorComponent_Parms GetVendorComponent_Parms;

	pFnGetVendorComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVendorComponent, &GetVendorComponent_Parms, NULL );

	pFnGetVendorComponent->FunctionFlags |= 0x400;

	return GetVendorComponent_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetTargetComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UAtlasAvatarComponent*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UAtlasAvatarComponent* UOnlineSubsystemAtlas::GetTargetComponent ( )
{
	static UFunction* pFnGetTargetComponent = NULL;

	if ( ! pFnGetTargetComponent )
		pFnGetTargetComponent = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetTargetComponent" );

	UOnlineSubsystemAtlas_execGetTargetComponent_Parms GetTargetComponent_Parms;

	pFnGetTargetComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetComponent, &GetTargetComponent_Parms, NULL );

	pFnGetTargetComponent->FunctionFlags |= 0x400;

	return GetTargetComponent_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.GetCredits
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemAtlas::GetCredits ( )
{
	static UFunction* pFnGetCredits = NULL;

	if ( ! pFnGetCredits )
		pFnGetCredits = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetCredits" );

	UOnlineSubsystemAtlas_execGetCredits_Parms GetCredits_Parms;

	pFnGetCredits->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCredits, &GetCredits_Parms, NULL );

	pFnGetCredits->FunctionFlags |= 0x400;

	return GetCredits_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.UpdateAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::UpdateAvatar ( )
{
	static UFunction* pFnUpdateAvatar = NULL;

	if ( ! pFnUpdateAvatar )
		pFnUpdateAvatar = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UpdateAvatar" );

	UOnlineSubsystemAtlas_execUpdateAvatar_Parms UpdateAvatar_Parms;

	pFnUpdateAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateAvatar, &UpdateAvatar_Parms, NULL );

	pFnUpdateAvatar->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.JoinGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 hostIP                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::JoinGame ( struct FString hostIP )
{
	static UFunction* pFnJoinGame = NULL;

	if ( ! pFnJoinGame )
		pFnJoinGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.JoinGame" );

	UOnlineSubsystemAtlas_execJoinGame_Parms JoinGame_Parms;
	memcpy ( &JoinGame_Parms.hostIP, &hostIP, 0xC );

	pFnJoinGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinGame, &JoinGame_Parms, NULL );

	pFnJoinGame->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.CreateGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::CreateGame ( )
{
	static UFunction* pFnCreateGame = NULL;

	if ( ! pFnCreateGame )
		pFnCreateGame = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.CreateGame" );

	UOnlineSubsystemAtlas_execCreateGame_Parms CreateGame_Parms;

	pFnCreateGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateGame, &CreateGame_Parms, NULL );

	pFnCreateGame->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AtlasLogout
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::AtlasLogout ( )
{
	static UFunction* pFnAtlasLogout = NULL;

	if ( ! pFnAtlasLogout )
		pFnAtlasLogout = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AtlasLogout" );

	UOnlineSubsystemAtlas_execAtlasLogout_Parms AtlasLogout_Parms;

	pFnAtlasLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtlasLogout, &AtlasLogout_Parms, NULL );

	pFnAtlasLogout->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AtlasLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::AtlasLogin ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnAtlasLogin = NULL;

	if ( ! pFnAtlasLogin )
		pFnAtlasLogin = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AtlasLogin" );

	UOnlineSubsystemAtlas_execAtlasLogin_Parms AtlasLogin_Parms;
	memcpy ( &AtlasLogin_Parms.UserName, &UserName, 0xC );
	memcpy ( &AtlasLogin_Parms.Password, &Password, 0xC );

	pFnAtlasLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtlasLogin, &AtlasLogin_Parms, NULL );

	pFnAtlasLogin->FunctionFlags |= 0x400;

	return AtlasLogin_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemAtlas::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.Init" );

	UOnlineSubsystemAtlas_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.QueryPlayerInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Param                          ( CPF_Parm | CPF_NeedCtorLink )
// int                            Default                        ( CPF_Parm )

int UOnlineSubsystemAtlas::QueryPlayerInt ( struct FString Param, int Default )
{
	static UFunction* pFnQueryPlayerInt = NULL;

	if ( ! pFnQueryPlayerInt )
		pFnQueryPlayerInt = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.QueryPlayerInt" );

	UOnlineSubsystemAtlas_execQueryPlayerInt_Parms QueryPlayerInt_Parms;
	memcpy ( &QueryPlayerInt_Parms.Param, &Param, 0xC );
	QueryPlayerInt_Parms.Default = Default;

	pFnQueryPlayerInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryPlayerInt, &QueryPlayerInt_Parms, NULL );

	pFnQueryPlayerInt->FunctionFlags |= 0x400;

	return QueryPlayerInt_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientAvatarListUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RemoveDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearClientAvatarListUpdatedDelegate ( struct FScriptDelegate RemoveDelegate )
{
	static UFunction* pFnClearClientAvatarListUpdatedDelegate = NULL;

	if ( ! pFnClearClientAvatarListUpdatedDelegate )
		pFnClearClientAvatarListUpdatedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientAvatarListUpdatedDelegate" );

	UOnlineSubsystemAtlas_execClearClientAvatarListUpdatedDelegate_Parms ClearClientAvatarListUpdatedDelegate_Parms;
	memcpy ( &ClearClientAvatarListUpdatedDelegate_Parms.RemoveDelegate, &RemoveDelegate, 0xC );

	this->ProcessEvent ( pFnClearClientAvatarListUpdatedDelegate, &ClearClientAvatarListUpdatedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddQuickbarUpdateFunction
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         thefunction                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddQuickbarUpdateFunction ( struct FScriptDelegate thefunction )
{
	static UFunction* pFnAddQuickbarUpdateFunction = NULL;

	if ( ! pFnAddQuickbarUpdateFunction )
		pFnAddQuickbarUpdateFunction = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddQuickbarUpdateFunction" );

	UOnlineSubsystemAtlas_execAddQuickbarUpdateFunction_Parms AddQuickbarUpdateFunction_Parms;
	memcpy ( &AddQuickbarUpdateFunction_Parms.thefunction, &thefunction, 0xC );

	this->ProcessEvent ( pFnAddQuickbarUpdateFunction, &AddQuickbarUpdateFunction_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.QuickbarUpdate
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::QuickbarUpdate ( )
{
	static UFunction* pFnQuickbarUpdate = NULL;

	if ( ! pFnQuickbarUpdate )
		pFnQuickbarUpdate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.QuickbarUpdate" );

	UOnlineSubsystemAtlas_execQuickbarUpdate_Parms QuickbarUpdate_Parms;

	this->ProcessEvent ( pFnQuickbarUpdate, &QuickbarUpdate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddClientLoginCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientLoginCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddClientLoginCompleteDelegate ( struct FScriptDelegate ClientLoginCompleteDelegate )
{
	static UFunction* pFnAddClientLoginCompleteDelegate = NULL;

	if ( ! pFnAddClientLoginCompleteDelegate )
		pFnAddClientLoginCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddClientLoginCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddClientLoginCompleteDelegate_Parms AddClientLoginCompleteDelegate_Parms;
	memcpy ( &AddClientLoginCompleteDelegate_Parms.ClientLoginCompleteDelegate, &ClientLoginCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddClientLoginCompleteDelegate, &AddClientLoginCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddClientAvatarListUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AddDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddClientAvatarListUpdatedDelegate ( struct FScriptDelegate AddDelegate )
{
	static UFunction* pFnAddClientAvatarListUpdatedDelegate = NULL;

	if ( ! pFnAddClientAvatarListUpdatedDelegate )
		pFnAddClientAvatarListUpdatedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddClientAvatarListUpdatedDelegate" );

	UOnlineSubsystemAtlas_execAddClientAvatarListUpdatedDelegate_Parms AddClientAvatarListUpdatedDelegate_Parms;
	memcpy ( &AddClientAvatarListUpdatedDelegate_Parms.AddDelegate, &AddDelegate, 0xC );

	this->ProcessEvent ( pFnAddClientAvatarListUpdatedDelegate, &AddClientAvatarListUpdatedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientAvatarListUpdated
// [0x00120000] 
// Parameters infos:
// int                            NumChars                       ( CPF_Parm )

void UOnlineSubsystemAtlas::OnClientAvatarListUpdated ( int NumChars )
{
	static UFunction* pFnOnClientAvatarListUpdated = NULL;

	if ( ! pFnOnClientAvatarListUpdated )
		pFnOnClientAvatarListUpdated = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientAvatarListUpdated" );

	UOnlineSubsystemAtlas_execOnClientAvatarListUpdated_Parms OnClientAvatarListUpdated_Parms;
	OnClientAvatarListUpdated_Parms.NumChars = NumChars;

	this->ProcessEvent ( pFnOnClientAvatarListUpdated, &OnClientAvatarListUpdated_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientAvatarUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAvatarUpdatedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearClientAvatarUpdatedDelegate ( struct FScriptDelegate ClientAvatarUpdatedDelegate )
{
	static UFunction* pFnClearClientAvatarUpdatedDelegate = NULL;

	if ( ! pFnClearClientAvatarUpdatedDelegate )
		pFnClearClientAvatarUpdatedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientAvatarUpdatedDelegate" );

	UOnlineSubsystemAtlas_execClearClientAvatarUpdatedDelegate_Parms ClearClientAvatarUpdatedDelegate_Parms;
	memcpy ( &ClearClientAvatarUpdatedDelegate_Parms.ClientAvatarUpdatedDelegate, &ClientAvatarUpdatedDelegate, 0xC );

	this->ProcessEvent ( pFnClearClientAvatarUpdatedDelegate, &ClearClientAvatarUpdatedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddClientAvatarUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientAvatarUpdatedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddClientAvatarUpdatedDelegate ( struct FScriptDelegate ClientAvatarUpdatedDelegate )
{
	static UFunction* pFnAddClientAvatarUpdatedDelegate = NULL;

	if ( ! pFnAddClientAvatarUpdatedDelegate )
		pFnAddClientAvatarUpdatedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddClientAvatarUpdatedDelegate" );

	UOnlineSubsystemAtlas_execAddClientAvatarUpdatedDelegate_Parms AddClientAvatarUpdatedDelegate_Parms;
	memcpy ( &AddClientAvatarUpdatedDelegate_Parms.ClientAvatarUpdatedDelegate, &ClientAvatarUpdatedDelegate, 0xC );

	this->ProcessEvent ( pFnAddClientAvatarUpdatedDelegate, &AddClientAvatarUpdatedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientAvatarUpdated
// [0x00120000] 
// Parameters infos:
// struct FPointer                pClient                        ( CPF_Parm )
// struct FPointer                pAvatar                        ( CPF_Parm )
// TArray< struct FPointer >      tParams                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::OnClientAvatarUpdated ( struct FPointer pClient, struct FPointer pAvatar, TArray< struct FPointer > tParams )
{
	static UFunction* pFnOnClientAvatarUpdated = NULL;

	if ( ! pFnOnClientAvatarUpdated )
		pFnOnClientAvatarUpdated = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientAvatarUpdated" );

	UOnlineSubsystemAtlas_execOnClientAvatarUpdated_Parms OnClientAvatarUpdated_Parms;
	memcpy ( &OnClientAvatarUpdated_Parms.pClient, &pClient, 0x4 );
	memcpy ( &OnClientAvatarUpdated_Parms.pAvatar, &pAvatar, 0x4 );
	memcpy ( &OnClientAvatarUpdated_Parms.tParams, &tParams, 0xC );

	this->ProcessEvent ( pFnOnClientAvatarUpdated, &OnClientAvatarUpdated_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearHouseTradeListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         HouseTradeListChangedDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearHouseTradeListChangedDelegate ( struct FScriptDelegate HouseTradeListChangedDelegate )
{
	static UFunction* pFnClearHouseTradeListChangedDelegate = NULL;

	if ( ! pFnClearHouseTradeListChangedDelegate )
		pFnClearHouseTradeListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearHouseTradeListChangedDelegate" );

	UOnlineSubsystemAtlas_execClearHouseTradeListChangedDelegate_Parms ClearHouseTradeListChangedDelegate_Parms;
	memcpy ( &ClearHouseTradeListChangedDelegate_Parms.HouseTradeListChangedDelegate, &HouseTradeListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearHouseTradeListChangedDelegate, &ClearHouseTradeListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddHouseTradeListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         HouseTradeListChangedDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddHouseTradeListChangedDelegate ( struct FScriptDelegate HouseTradeListChangedDelegate )
{
	static UFunction* pFnAddHouseTradeListChangedDelegate = NULL;

	if ( ! pFnAddHouseTradeListChangedDelegate )
		pFnAddHouseTradeListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddHouseTradeListChangedDelegate" );

	UOnlineSubsystemAtlas_execAddHouseTradeListChangedDelegate_Parms AddHouseTradeListChangedDelegate_Parms;
	memcpy ( &AddHouseTradeListChangedDelegate_Parms.HouseTradeListChangedDelegate, &HouseTradeListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddHouseTradeListChangedDelegate, &AddHouseTradeListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnHouseTradeListChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnHouseTradeListChanged ( )
{
	static UFunction* pFnOnHouseTradeListChanged = NULL;

	if ( ! pFnOnHouseTradeListChanged )
		pFnOnHouseTradeListChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnHouseTradeListChanged" );

	UOnlineSubsystemAtlas_execOnHouseTradeListChanged_Parms OnHouseTradeListChanged_Parms;

	this->ProcessEvent ( pFnOnHouseTradeListChanged, &OnHouseTradeListChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearWorldObjectTradeListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WorldObjectTradeListChangedDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearWorldObjectTradeListChangedDelegate ( struct FScriptDelegate WorldObjectTradeListChangedDelegate )
{
	static UFunction* pFnClearWorldObjectTradeListChangedDelegate = NULL;

	if ( ! pFnClearWorldObjectTradeListChangedDelegate )
		pFnClearWorldObjectTradeListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearWorldObjectTradeListChangedDelegate" );

	UOnlineSubsystemAtlas_execClearWorldObjectTradeListChangedDelegate_Parms ClearWorldObjectTradeListChangedDelegate_Parms;
	memcpy ( &ClearWorldObjectTradeListChangedDelegate_Parms.WorldObjectTradeListChangedDelegate, &WorldObjectTradeListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearWorldObjectTradeListChangedDelegate, &ClearWorldObjectTradeListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddWorldObjectTradeListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WorldObjectTradeListChangedDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddWorldObjectTradeListChangedDelegate ( struct FScriptDelegate WorldObjectTradeListChangedDelegate )
{
	static UFunction* pFnAddWorldObjectTradeListChangedDelegate = NULL;

	if ( ! pFnAddWorldObjectTradeListChangedDelegate )
		pFnAddWorldObjectTradeListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddWorldObjectTradeListChangedDelegate" );

	UOnlineSubsystemAtlas_execAddWorldObjectTradeListChangedDelegate_Parms AddWorldObjectTradeListChangedDelegate_Parms;
	memcpy ( &AddWorldObjectTradeListChangedDelegate_Parms.WorldObjectTradeListChangedDelegate, &WorldObjectTradeListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddWorldObjectTradeListChangedDelegate, &AddWorldObjectTradeListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnWorldObjectTradeListChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnWorldObjectTradeListChanged ( )
{
	static UFunction* pFnOnWorldObjectTradeListChanged = NULL;

	if ( ! pFnOnWorldObjectTradeListChanged )
		pFnOnWorldObjectTradeListChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnWorldObjectTradeListChanged" );

	UOnlineSubsystemAtlas_execOnWorldObjectTradeListChanged_Parms OnWorldObjectTradeListChanged_Parms;

	this->ProcessEvent ( pFnOnWorldObjectTradeListChanged, &OnWorldObjectTradeListChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearVendorListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         VendorListChangedDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearVendorListChangedDelegate ( struct FScriptDelegate VendorListChangedDelegate )
{
	static UFunction* pFnClearVendorListChangedDelegate = NULL;

	if ( ! pFnClearVendorListChangedDelegate )
		pFnClearVendorListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearVendorListChangedDelegate" );

	UOnlineSubsystemAtlas_execClearVendorListChangedDelegate_Parms ClearVendorListChangedDelegate_Parms;
	memcpy ( &ClearVendorListChangedDelegate_Parms.VendorListChangedDelegate, &VendorListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearVendorListChangedDelegate, &ClearVendorListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddVendorListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         VendorListChangedDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddVendorListChangedDelegate ( struct FScriptDelegate VendorListChangedDelegate )
{
	static UFunction* pFnAddVendorListChangedDelegate = NULL;

	if ( ! pFnAddVendorListChangedDelegate )
		pFnAddVendorListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddVendorListChangedDelegate" );

	UOnlineSubsystemAtlas_execAddVendorListChangedDelegate_Parms AddVendorListChangedDelegate_Parms;
	memcpy ( &AddVendorListChangedDelegate_Parms.VendorListChangedDelegate, &VendorListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddVendorListChangedDelegate, &AddVendorListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnVendorListChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnVendorListChanged ( )
{
	static UFunction* pFnOnVendorListChanged = NULL;

	if ( ! pFnOnVendorListChanged )
		pFnOnVendorListChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnVendorListChanged" );

	UOnlineSubsystemAtlas_execOnVendorListChanged_Parms OnVendorListChanged_Parms;

	this->ProcessEvent ( pFnOnVendorListChanged, &OnVendorListChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearLootListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LootListChangedDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearLootListChangedDelegate ( struct FScriptDelegate LootListChangedDelegate )
{
	static UFunction* pFnClearLootListChangedDelegate = NULL;

	if ( ! pFnClearLootListChangedDelegate )
		pFnClearLootListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearLootListChangedDelegate" );

	UOnlineSubsystemAtlas_execClearLootListChangedDelegate_Parms ClearLootListChangedDelegate_Parms;
	memcpy ( &ClearLootListChangedDelegate_Parms.LootListChangedDelegate, &LootListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearLootListChangedDelegate, &ClearLootListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddLootListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LootListChangedDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddLootListChangedDelegate ( struct FScriptDelegate LootListChangedDelegate )
{
	static UFunction* pFnAddLootListChangedDelegate = NULL;

	if ( ! pFnAddLootListChangedDelegate )
		pFnAddLootListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddLootListChangedDelegate" );

	UOnlineSubsystemAtlas_execAddLootListChangedDelegate_Parms AddLootListChangedDelegate_Parms;
	memcpy ( &AddLootListChangedDelegate_Parms.LootListChangedDelegate, &LootListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddLootListChangedDelegate, &AddLootListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLootListChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnLootListChanged ( )
{
	static UFunction* pFnOnLootListChanged = NULL;

	if ( ! pFnOnLootListChanged )
		pFnOnLootListChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLootListChanged" );

	UOnlineSubsystemAtlas_execOnLootListChanged_Parms OnLootListChanged_Parms;

	this->ProcessEvent ( pFnOnLootListChanged, &OnLootListChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearEquipmentChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EquipmentChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearEquipmentChangedDelegate ( struct FScriptDelegate EquipmentChangedDelegate )
{
	static UFunction* pFnClearEquipmentChangedDelegate = NULL;

	if ( ! pFnClearEquipmentChangedDelegate )
		pFnClearEquipmentChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearEquipmentChangedDelegate" );

	UOnlineSubsystemAtlas_execClearEquipmentChangedDelegate_Parms ClearEquipmentChangedDelegate_Parms;
	memcpy ( &ClearEquipmentChangedDelegate_Parms.EquipmentChangedDelegate, &EquipmentChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearEquipmentChangedDelegate, &ClearEquipmentChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddEquipmentChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EquipmentChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddEquipmentChangedDelegate ( struct FScriptDelegate EquipmentChangedDelegate )
{
	static UFunction* pFnAddEquipmentChangedDelegate = NULL;

	if ( ! pFnAddEquipmentChangedDelegate )
		pFnAddEquipmentChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddEquipmentChangedDelegate" );

	UOnlineSubsystemAtlas_execAddEquipmentChangedDelegate_Parms AddEquipmentChangedDelegate_Parms;
	memcpy ( &AddEquipmentChangedDelegate_Parms.EquipmentChangedDelegate, &EquipmentChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddEquipmentChangedDelegate, &AddEquipmentChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnEquipmentChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnEquipmentChanged ( )
{
	static UFunction* pFnOnEquipmentChanged = NULL;

	if ( ! pFnOnEquipmentChanged )
		pFnOnEquipmentChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnEquipmentChanged" );

	UOnlineSubsystemAtlas_execOnEquipmentChanged_Parms OnEquipmentChanged_Parms;

	this->ProcessEvent ( pFnOnEquipmentChanged, &OnEquipmentChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearSkillListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         SkillListChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearSkillListChangedDelegate ( struct FScriptDelegate SkillListChangedDelegate )
{
	static UFunction* pFnClearSkillListChangedDelegate = NULL;

	if ( ! pFnClearSkillListChangedDelegate )
		pFnClearSkillListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearSkillListChangedDelegate" );

	UOnlineSubsystemAtlas_execClearSkillListChangedDelegate_Parms ClearSkillListChangedDelegate_Parms;
	memcpy ( &ClearSkillListChangedDelegate_Parms.SkillListChangedDelegate, &SkillListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearSkillListChangedDelegate, &ClearSkillListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddSkillListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         SkillListChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddSkillListChangedDelegate ( struct FScriptDelegate SkillListChangedDelegate )
{
	static UFunction* pFnAddSkillListChangedDelegate = NULL;

	if ( ! pFnAddSkillListChangedDelegate )
		pFnAddSkillListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddSkillListChangedDelegate" );

	UOnlineSubsystemAtlas_execAddSkillListChangedDelegate_Parms AddSkillListChangedDelegate_Parms;
	memcpy ( &AddSkillListChangedDelegate_Parms.SkillListChangedDelegate, &SkillListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddSkillListChangedDelegate, &AddSkillListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnSkillListChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnSkillListChanged ( )
{
	static UFunction* pFnOnSkillListChanged = NULL;

	if ( ! pFnOnSkillListChanged )
		pFnOnSkillListChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnSkillListChanged" );

	UOnlineSubsystemAtlas_execOnSkillListChanged_Parms OnSkillListChanged_Parms;

	this->ProcessEvent ( pFnOnSkillListChanged, &OnSkillListChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearItemListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ItemListChangedDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearItemListChangedDelegate ( struct FScriptDelegate ItemListChangedDelegate )
{
	static UFunction* pFnClearItemListChangedDelegate = NULL;

	if ( ! pFnClearItemListChangedDelegate )
		pFnClearItemListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearItemListChangedDelegate" );

	UOnlineSubsystemAtlas_execClearItemListChangedDelegate_Parms ClearItemListChangedDelegate_Parms;
	memcpy ( &ClearItemListChangedDelegate_Parms.ItemListChangedDelegate, &ItemListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearItemListChangedDelegate, &ClearItemListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddItemListChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ItemListChangedDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddItemListChangedDelegate ( struct FScriptDelegate ItemListChangedDelegate )
{
	static UFunction* pFnAddItemListChangedDelegate = NULL;

	if ( ! pFnAddItemListChangedDelegate )
		pFnAddItemListChangedDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddItemListChangedDelegate" );

	UOnlineSubsystemAtlas_execAddItemListChangedDelegate_Parms AddItemListChangedDelegate_Parms;
	memcpy ( &AddItemListChangedDelegate_Parms.ItemListChangedDelegate, &ItemListChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddItemListChangedDelegate, &AddItemListChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnItemListChanged
// [0x00120000] 
// Parameters infos:
// TArray< struct FString >       ItemNames                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::OnItemListChanged ( TArray< struct FString > ItemNames )
{
	static UFunction* pFnOnItemListChanged = NULL;

	if ( ! pFnOnItemListChanged )
		pFnOnItemListChanged = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnItemListChanged" );

	UOnlineSubsystemAtlas_execOnItemListChanged_Parms OnItemListChanged_Parms;
	memcpy ( &OnItemListChanged_Parms.ItemNames, &ItemNames, 0xC );

	this->ProcessEvent ( pFnOnItemListChanged, &OnItemListChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientLoginCompleteDelegateByIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void UOnlineSubsystemAtlas::eventClearClientLoginCompleteDelegateByIndex ( int Index )
{
	static UFunction* pFnClearClientLoginCompleteDelegateByIndex = NULL;

	if ( ! pFnClearClientLoginCompleteDelegateByIndex )
		pFnClearClientLoginCompleteDelegateByIndex = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientLoginCompleteDelegateByIndex" );

	UOnlineSubsystemAtlas_eventClearClientLoginCompleteDelegateByIndex_Parms ClearClientLoginCompleteDelegateByIndex_Parms;
	ClearClientLoginCompleteDelegateByIndex_Parms.Index = Index;

	this->ProcessEvent ( pFnClearClientLoginCompleteDelegateByIndex, &ClearClientLoginCompleteDelegateByIndex_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientLoginCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientLoginCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearClientLoginCompleteDelegate ( struct FScriptDelegate ClientLoginCompleteDelegate )
{
	static UFunction* pFnClearClientLoginCompleteDelegate = NULL;

	if ( ! pFnClearClientLoginCompleteDelegate )
		pFnClearClientLoginCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientLoginCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearClientLoginCompleteDelegate_Parms ClearClientLoginCompleteDelegate_Parms;
	memcpy ( &ClearClientLoginCompleteDelegate_Parms.ClientLoginCompleteDelegate, &ClientLoginCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearClientLoginCompleteDelegate, &ClearClientLoginCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientLoginComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnClientLoginComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnClientLoginComplete = NULL;

	if ( ! pFnOnClientLoginComplete )
		pFnOnClientLoginComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientLoginComplete" );

	UOnlineSubsystemAtlas_execOnClientLoginComplete_Parms OnClientLoginComplete_Parms;
	OnClientLoginComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnClientLoginComplete, &OnClientLoginComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientNoShardDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         newDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearClientNoShardDelegate ( struct FScriptDelegate newDelegate )
{
	static UFunction* pFnClearClientNoShardDelegate = NULL;

	if ( ! pFnClearClientNoShardDelegate )
		pFnClearClientNoShardDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientNoShardDelegate" );

	UOnlineSubsystemAtlas_execClearClientNoShardDelegate_Parms ClearClientNoShardDelegate_Parms;
	memcpy ( &ClearClientNoShardDelegate_Parms.newDelegate, &newDelegate, 0xC );

	this->ProcessEvent ( pFnClearClientNoShardDelegate, &ClearClientNoShardDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddClientNoShardDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         newDelegate                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddClientNoShardDelegate ( struct FScriptDelegate newDelegate )
{
	static UFunction* pFnAddClientNoShardDelegate = NULL;

	if ( ! pFnAddClientNoShardDelegate )
		pFnAddClientNoShardDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddClientNoShardDelegate" );

	UOnlineSubsystemAtlas_execAddClientNoShardDelegate_Parms AddClientNoShardDelegate_Parms;
	memcpy ( &AddClientNoShardDelegate_Parms.newDelegate, &newDelegate, 0xC );

	this->ProcessEvent ( pFnAddClientNoShardDelegate, &AddClientNoShardDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientNoShard
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnClientNoShard ( )
{
	static UFunction* pFnOnClientNoShard = NULL;

	if ( ! pFnOnClientNoShard )
		pFnOnClientNoShard = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientNoShard" );

	UOnlineSubsystemAtlas_execOnClientNoShard_Parms OnClientNoShard_Parms;

	this->ProcessEvent ( pFnOnClientNoShard, &OnClientNoShard_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientVersionMissmatchDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientVersionMissmatchDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearClientVersionMissmatchDelegate ( struct FScriptDelegate ClientVersionMissmatchDelegate )
{
	static UFunction* pFnClearClientVersionMissmatchDelegate = NULL;

	if ( ! pFnClearClientVersionMissmatchDelegate )
		pFnClearClientVersionMissmatchDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientVersionMissmatchDelegate" );

	UOnlineSubsystemAtlas_execClearClientVersionMissmatchDelegate_Parms ClearClientVersionMissmatchDelegate_Parms;
	memcpy ( &ClearClientVersionMissmatchDelegate_Parms.ClientVersionMissmatchDelegate, &ClientVersionMissmatchDelegate, 0xC );

	this->ProcessEvent ( pFnClearClientVersionMissmatchDelegate, &ClearClientVersionMissmatchDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddClientVersionMissmatchDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientVersionMissmatchDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddClientVersionMissmatchDelegate ( struct FScriptDelegate ClientVersionMissmatchDelegate )
{
	static UFunction* pFnAddClientVersionMissmatchDelegate = NULL;

	if ( ! pFnAddClientVersionMissmatchDelegate )
		pFnAddClientVersionMissmatchDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddClientVersionMissmatchDelegate" );

	UOnlineSubsystemAtlas_execAddClientVersionMissmatchDelegate_Parms AddClientVersionMissmatchDelegate_Parms;
	memcpy ( &AddClientVersionMissmatchDelegate_Parms.ClientVersionMissmatchDelegate, &ClientVersionMissmatchDelegate, 0xC );

	this->ProcessEvent ( pFnAddClientVersionMissmatchDelegate, &AddClientVersionMissmatchDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientVersionMissmatch
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnClientVersionMissmatch ( )
{
	static UFunction* pFnOnClientVersionMissmatch = NULL;

	if ( ! pFnOnClientVersionMissmatch )
		pFnOnClientVersionMissmatch = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientVersionMissmatch" );

	UOnlineSubsystemAtlas_execOnClientVersionMissmatch_Parms OnClientVersionMissmatch_Parms;

	this->ProcessEvent ( pFnOnClientVersionMissmatch, &OnClientVersionMissmatch_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearClientConnectCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientConnectCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearClientConnectCompleteDelegate ( struct FScriptDelegate ClientConnectCompleteDelegate )
{
	static UFunction* pFnClearClientConnectCompleteDelegate = NULL;

	if ( ! pFnClearClientConnectCompleteDelegate )
		pFnClearClientConnectCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.ClearClientConnectCompleteDelegate" );

	UOnlineSubsystemAtlas_execClearClientConnectCompleteDelegate_Parms ClearClientConnectCompleteDelegate_Parms;
	memcpy ( &ClearClientConnectCompleteDelegate_Parms.ClientConnectCompleteDelegate, &ClientConnectCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearClientConnectCompleteDelegate, &ClearClientConnectCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddClientConnectCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ClientConnectCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddClientConnectCompleteDelegate ( struct FScriptDelegate ClientConnectCompleteDelegate )
{
	static UFunction* pFnAddClientConnectCompleteDelegate = NULL;

	if ( ! pFnAddClientConnectCompleteDelegate )
		pFnAddClientConnectCompleteDelegate = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddClientConnectCompleteDelegate" );

	UOnlineSubsystemAtlas_execAddClientConnectCompleteDelegate_Parms AddClientConnectCompleteDelegate_Parms;
	memcpy ( &AddClientConnectCompleteDelegate_Parms.ClientConnectCompleteDelegate, &ClientConnectCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddClientConnectCompleteDelegate, &AddClientConnectCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientConnectComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnClientConnectComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnClientConnectComplete = NULL;

	if ( ! pFnOnClientConnectComplete )
		pFnOnClientConnectComplete = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientConnectComplete" );

	UOnlineSubsystemAtlas_execOnClientConnectComplete_Parms OnClientConnectComplete_Parms;
	OnClientConnectComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnClientConnectComplete, &OnClientConnectComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnLogOutput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FName                   logEvent                       ( CPF_Parm )
// struct FString                 strOutput                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::eventOnLogOutput ( struct FName logEvent, struct FString strOutput )
{
	static UFunction* pFnOnLogOutput = NULL;

	if ( ! pFnOnLogOutput )
		pFnOnLogOutput = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnLogOutput" );

	UOnlineSubsystemAtlas_eventOnLogOutput_Parms OnLogOutput_Parms;
	memcpy ( &OnLogOutput_Parms.logEvent, &logEvent, 0x8 );
	memcpy ( &OnLogOutput_Parms.strOutput, &strOutput, 0xC );

	this->ProcessEvent ( pFnOnLogOutput, &OnLogOutput_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.DynamicOpenScene
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// struct FString                 SceneName                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::eventDynamicOpenScene ( struct FString SceneName )
{
	static UFunction* pFnDynamicOpenScene = NULL;

	if ( ! pFnDynamicOpenScene )
		pFnDynamicOpenScene = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.DynamicOpenScene" );

	UOnlineSubsystemAtlas_eventDynamicOpenScene_Parms DynamicOpenScene_Parms;
	memcpy ( &DynamicOpenScene_Parms.SceneName, &SceneName, 0xC );

	this->ProcessEvent ( pFnDynamicOpenScene, &DynamicOpenScene_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientLoginServDown
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnClientLoginServDown ( )
{
	static UFunction* pFnOnClientLoginServDown = NULL;

	if ( ! pFnOnClientLoginServDown )
		pFnOnClientLoginServDown = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.OnClientLoginServDown" );

	UOnlineSubsystemAtlas_execOnClientLoginServDown_Parms OnClientLoginServDown_Parms;

	this->ProcessEvent ( pFnOnClientLoginServDown, &OnClientLoginServDown_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.RemTimer
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 sID                            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::eventRemTimer ( struct FString sID )
{
	static UFunction* pFnRemTimer = NULL;

	if ( ! pFnRemTimer )
		pFnRemTimer = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.RemTimer" );

	UOnlineSubsystemAtlas_eventRemTimer_Parms RemTimer_Parms;
	memcpy ( &RemTimer_Parms.sID, &sID, 0xC );

	this->ProcessEvent ( pFnRemTimer, &RemTimer_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddTimer
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 sID                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDesc                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sIcon                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          fTimer                         ( CPF_Parm )
// struct FString                 sCancelDesc                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::eventAddTimer ( struct FString sID, struct FString sName, struct FString sDesc, struct FString sIcon, float fTimer, struct FString sCancelDesc )
{
	static UFunction* pFnAddTimer = NULL;

	if ( ! pFnAddTimer )
		pFnAddTimer = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddTimer" );

	UOnlineSubsystemAtlas_eventAddTimer_Parms AddTimer_Parms;
	memcpy ( &AddTimer_Parms.sID, &sID, 0xC );
	memcpy ( &AddTimer_Parms.sName, &sName, 0xC );
	memcpy ( &AddTimer_Parms.sDesc, &sDesc, 0xC );
	memcpy ( &AddTimer_Parms.sIcon, &sIcon, 0xC );
	AddTimer_Parms.fTimer = fTimer;
	memcpy ( &AddTimer_Parms.sCancelDesc, &sCancelDesc, 0xC );

	this->ProcessEvent ( pFnAddTimer, &AddTimer_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.GetBookInfoString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemAtlas::GetBookInfoString ( )
{
	static UFunction* pFnGetBookInfoString = NULL;

	if ( ! pFnGetBookInfoString )
		pFnGetBookInfoString = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.GetBookInfoString" );

	UOnlineSubsystemAtlas_execGetBookInfoString_Parms GetBookInfoString_Parms;

	pFnGetBookInfoString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBookInfoString, &GetBookInfoString_Parms, NULL );

	pFnGetBookInfoString->FunctionFlags |= 0x400;

	return GetBookInfoString_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.UpdateCharacterList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 NameToRemove                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::UpdateCharacterList ( struct FString NameToRemove )
{
	static UFunction* pFnUpdateCharacterList = NULL;

	if ( ! pFnUpdateCharacterList )
		pFnUpdateCharacterList = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.UpdateCharacterList" );

	UOnlineSubsystemAtlas_execUpdateCharacterList_Parms UpdateCharacterList_Parms;
	memcpy ( &UpdateCharacterList_Parms.NameToRemove, &NameToRemove, 0xC );

	pFnUpdateCharacterList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateCharacterList, &UpdateCharacterList_Parms, NULL );

	pFnUpdateCharacterList->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AddPetInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPetName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sPetType                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            iPetLevel                      ( CPF_Parm )
// int                            iPetLoyalty                    ( CPF_Parm )
// int                            iPetHP                         ( CPF_Parm )
// int                            iStableIndex                   ( CPF_Parm )
// struct FString                 sState                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddPetInfo ( struct FString sPetName, struct FString sPetType, int iPetLevel, int iPetLoyalty, int iPetHP, int iStableIndex, struct FString sState )
{
	static UFunction* pFnAddPetInfo = NULL;

	if ( ! pFnAddPetInfo )
		pFnAddPetInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddPetInfo" );

	UOnlineSubsystemAtlas_execAddPetInfo_Parms AddPetInfo_Parms;
	memcpy ( &AddPetInfo_Parms.sPetName, &sPetName, 0xC );
	memcpy ( &AddPetInfo_Parms.sPetType, &sPetType, 0xC );
	AddPetInfo_Parms.iPetLevel = iPetLevel;
	AddPetInfo_Parms.iPetLoyalty = iPetLoyalty;
	AddPetInfo_Parms.iPetHP = iPetHP;
	AddPetInfo_Parms.iStableIndex = iStableIndex;
	memcpy ( &AddPetInfo_Parms.sState, &sState, 0xC );

	pFnAddPetInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddPetInfo, &AddPetInfo_Parms, NULL );

	pFnAddPetInfo->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.AddPylonInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 newPylonGuid                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 newPylonGuild                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 newPylonLoc                    ( CPF_Parm )
// int                            newPylonAOE                    ( CPF_Parm )
// int                            newPylonAOETgt                 ( CPF_Parm )
// int                            newPylonDef                    ( CPF_Parm )
// int                            newPylonDefTgt                 ( CPF_Parm )
// int                            newPylonAtt                    ( CPF_Parm )
// int                            newPylonAttTgt                 ( CPF_Parm )
// int                            newPylonTier                   ( CPF_Parm )
// int                            newPylonUpkeep                 ( CPF_Parm )

void UOnlineSubsystemAtlas::AddPylonInfo ( struct FString newPylonGuid, struct FString newPylonGuild, struct FVector newPylonLoc, int newPylonAOE, int newPylonAOETgt, int newPylonDef, int newPylonDefTgt, int newPylonAtt, int newPylonAttTgt, int newPylonTier, int newPylonUpkeep )
{
	static UFunction* pFnAddPylonInfo = NULL;

	if ( ! pFnAddPylonInfo )
		pFnAddPylonInfo = UObject::FindObject<UFunction> ( "Function Atlas.OnlineSubsystemAtlas.AddPylonInfo" );

	UOnlineSubsystemAtlas_execAddPylonInfo_Parms AddPylonInfo_Parms;
	memcpy ( &AddPylonInfo_Parms.newPylonGuid, &newPylonGuid, 0xC );
	memcpy ( &AddPylonInfo_Parms.newPylonGuild, &newPylonGuild, 0xC );
	memcpy ( &AddPylonInfo_Parms.newPylonLoc, &newPylonLoc, 0xC );
	AddPylonInfo_Parms.newPylonAOE = newPylonAOE;
	AddPylonInfo_Parms.newPylonAOETgt = newPylonAOETgt;
	AddPylonInfo_Parms.newPylonDef = newPylonDef;
	AddPylonInfo_Parms.newPylonDefTgt = newPylonDefTgt;
	AddPylonInfo_Parms.newPylonAtt = newPylonAtt;
	AddPylonInfo_Parms.newPylonAttTgt = newPylonAttTgt;
	AddPylonInfo_Parms.newPylonTier = newPylonTier;
	AddPylonInfo_Parms.newPylonUpkeep = newPylonUpkeep;

	pFnAddPylonInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddPylonInfo, &AddPylonInfo_Parms, NULL );

	pFnAddPylonInfo->FunctionFlags |= 0x400;
};

// Function Atlas.SeqAct_Atlas_UpdateAvatar.UpdateAvatar
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqAct_Atlas_UpdateAvatar::eventUpdateAvatar ( )
{
	static UFunction* pFnUpdateAvatar = NULL;

	if ( ! pFnUpdateAvatar )
		pFnUpdateAvatar = UObject::FindObject<UFunction> ( "Function Atlas.SeqAct_Atlas_UpdateAvatar.UpdateAvatar" );

	USeqAct_Atlas_UpdateAvatar_eventUpdateAvatar_Parms UpdateAvatar_Parms;

	this->ProcessEvent ( pFnUpdateAvatar, &UpdateAvatar_Parms, NULL );
};

// Function Atlas.UIAction_Atlas_Login.ResetData
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIAction_Atlas_Login::eventResetData ( )
{
	static UFunction* pFnResetData = NULL;

	if ( ! pFnResetData )
		pFnResetData = UObject::FindObject<UFunction> ( "Function Atlas.UIAction_Atlas_Login.ResetData" );

	UUIAction_Atlas_Login_eventResetData_Parms ResetData_Parms;

	this->ProcessEvent ( pFnResetData, &ResetData_Parms, NULL );
};

// Function Atlas.UIAction_Atlas_Login.OnConnectionComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UUIAction_Atlas_Login::OnConnectionComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnConnectionComplete = NULL;

	if ( ! pFnOnConnectionComplete )
		pFnOnConnectionComplete = UObject::FindObject<UFunction> ( "Function Atlas.UIAction_Atlas_Login.OnConnectionComplete" );

	UUIAction_Atlas_Login_execOnConnectionComplete_Parms OnConnectionComplete_Parms;
	OnConnectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnConnectionComplete, &OnConnectionComplete_Parms, NULL );
};

// Function Atlas.UIAction_Atlas_Login.OnLoginComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UUIAction_Atlas_Login::OnLoginComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLoginComplete = NULL;

	if ( ! pFnOnLoginComplete )
		pFnOnLoginComplete = UObject::FindObject<UFunction> ( "Function Atlas.UIAction_Atlas_Login.OnLoginComplete" );

	UUIAction_Atlas_Login_execOnLoginComplete_Parms OnLoginComplete_Parms;
	OnLoginComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLoginComplete, &OnLoginComplete_Parms, NULL );
};

// Function Atlas.UIAction_Atlas_Login.OnClientMismatch
// [0x00020002] 
// Parameters infos:

void UUIAction_Atlas_Login::OnClientMismatch ( )
{
	static UFunction* pFnOnClientMismatch = NULL;

	if ( ! pFnOnClientMismatch )
		pFnOnClientMismatch = UObject::FindObject<UFunction> ( "Function Atlas.UIAction_Atlas_Login.OnClientMismatch" );

	UUIAction_Atlas_Login_execOnClientMismatch_Parms OnClientMismatch_Parms;

	this->ProcessEvent ( pFnOnClientMismatch, &OnClientMismatch_Parms, NULL );
};

// Function Atlas.UIAction_Atlas_Login.Login
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIAction_Atlas_Login::eventLogin ( )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = UObject::FindObject<UFunction> ( "Function Atlas.UIAction_Atlas_Login.Login" );

	UUIAction_Atlas_Login_eventLogin_Parms Login_Parms;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );
};

// Function Atlas.UIAtlas_ContentImage.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UUIAtlas_ContentImage::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.ClearBoundDataStores" );

	UUIAtlas_ContentImage_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function Atlas.UIAtlas_ContentImage.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UUIAtlas_ContentImage::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.GetBoundDataStores" );

	UUIAtlas_ContentImage_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function Atlas.UIAtlas_ContentImage.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UUIAtlas_ContentImage::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.NotifyDataStoreValueUpdated" );

	UUIAtlas_ContentImage_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function Atlas.UIAtlas_ContentImage.RefreshSubscriberValue
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UUIAtlas_ContentImage::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.RefreshSubscriberValue" );

	UUIAtlas_ContentImage_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function Atlas.UIAtlas_ContentImage.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UUIAtlas_ContentImage::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.GetDataStoreBinding" );

	UUIAtlas_ContentImage_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function Atlas.UIAtlas_ContentImage.SetDataStoreBinding
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UUIAtlas_ContentImage::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.SetDataStoreBinding" );

	UUIAtlas_ContentImage_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function Atlas.UIAtlas_ContentImage.SetTextAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  Horizontal                     ( CPF_Parm )
// unsigned char                  Vertical                       ( CPF_Parm )

void UUIAtlas_ContentImage::SetTextAlignment ( unsigned char Horizontal, unsigned char Vertical )
{
	static UFunction* pFnSetTextAlignment = NULL;

	if ( ! pFnSetTextAlignment )
		pFnSetTextAlignment = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.SetTextAlignment" );

	UUIAtlas_ContentImage_execSetTextAlignment_Parms SetTextAlignment_Parms;
	SetTextAlignment_Parms.Horizontal = Horizontal;
	SetTextAlignment_Parms.Vertical = Vertical;

	pFnSetTextAlignment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTextAlignment, &SetTextAlignment_Parms, NULL );

	pFnSetTextAlignment->FunctionFlags |= 0x400;
};

// Function Atlas.UIAtlas_ContentImage.OnDroppedOnTarget
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UUIScreenObject*         Target                         ( CPF_Parm )
// unsigned long                  bAccepted                      ( CPF_Parm )

void UUIAtlas_ContentImage::OnDroppedOnTarget ( class UUIScreenObject* Target, unsigned long bAccepted )
{
	static UFunction* pFnOnDroppedOnTarget = NULL;

	if ( ! pFnOnDroppedOnTarget )
		pFnOnDroppedOnTarget = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.OnDroppedOnTarget" );

	UUIAtlas_ContentImage_execOnDroppedOnTarget_Parms OnDroppedOnTarget_Parms;
	OnDroppedOnTarget_Parms.Target = Target;
	OnDroppedOnTarget_Parms.bAccepted = bAccepted;

	this->ProcessEvent ( pFnOnDroppedOnTarget, &OnDroppedOnTarget_Parms, NULL );
};

// Function Atlas.UIAtlas_ContentImage.GetLabel
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UUIAtlas_ContentImage::GetLabel ( )
{
	static UFunction* pFnGetLabel = NULL;

	if ( ! pFnGetLabel )
		pFnGetLabel = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.GetLabel" );

	UUIAtlas_ContentImage_execGetLabel_Parms GetLabel_Parms;

	this->ProcessEvent ( pFnGetLabel, &GetLabel_Parms, NULL );

	return GetLabel_Parms.ReturnValue;
};

// Function Atlas.UIAtlas_ContentImage.SetLabel
// [0x00020002] 
// Parameters infos:
// struct FString                 NewLabel                       ( CPF_Parm | CPF_NeedCtorLink )

void UUIAtlas_ContentImage::SetLabel ( struct FString NewLabel )
{
	static UFunction* pFnSetLabel = NULL;

	if ( ! pFnSetLabel )
		pFnSetLabel = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.SetLabel" );

	UUIAtlas_ContentImage_execSetLabel_Parms SetLabel_Parms;
	memcpy ( &SetLabel_Parms.NewLabel, &NewLabel, 0xC );

	this->ProcessEvent ( pFnSetLabel, &SetLabel_Parms, NULL );
};

// Function Atlas.UIAtlas_ContentImage.SetImage
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USurface*                NewImage                       ( CPF_Parm )

void UUIAtlas_ContentImage::SetImage ( class USurface* NewImage )
{
	static UFunction* pFnSetImage = NULL;

	if ( ! pFnSetImage )
		pFnSetImage = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.SetImage" );

	UUIAtlas_ContentImage_execSetImage_Parms SetImage_Parms;
	SetImage_Parms.NewImage = NewImage;

	pFnSetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetImage, &SetImage_Parms, NULL );

	pFnSetImage->FunctionFlags |= 0x400;
};

// Function Atlas.UIAtlas_ContentImage.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIAtlas_ContentImage::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIAtlas_ContentImage.InitScene" );

	UUIAtlas_ContentImage_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.SwitchToScene
// [0x00020002] 
// Parameters infos:
// class UUIScene*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScene*                SceneToOpen                    ( CPF_Parm )

class UUIScene* UUIScene_Atlas_BaseScene::SwitchToScene ( class UUIScene* SceneToOpen )
{
	static UFunction* pFnSwitchToScene = NULL;

	if ( ! pFnSwitchToScene )
		pFnSwitchToScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SwitchToScene" );

	UUIScene_Atlas_BaseScene_execSwitchToScene_Parms SwitchToScene_Parms;
	SwitchToScene_Parms.SceneToOpen = SceneToOpen;

	this->ProcessEvent ( pFnSwitchToScene, &SwitchToScene_Parms, NULL );

	return SwitchToScene_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.StaticOpenScene
// [0x00022002] 
// Parameters infos:
// class UUIScene*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScene*                SceneToOpen                    ( CPF_Parm )

class UUIScene* UUIScene_Atlas_BaseScene::StaticOpenScene ( class UUIScene* SceneToOpen )
{
	static UFunction* pFnStaticOpenScene = NULL;

	if ( ! pFnStaticOpenScene )
		pFnStaticOpenScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.StaticOpenScene" );

	UUIScene_Atlas_BaseScene_execStaticOpenScene_Parms StaticOpenScene_Parms;
	StaticOpenScene_Parms.SceneToOpen = SceneToOpen;

	this->ProcessEvent ( pFnStaticOpenScene, &StaticOpenScene_Parms, NULL );

	return StaticOpenScene_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_BaseScene::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SceneActivated" );

	UUIScene_Atlas_BaseScene_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.SendEvent
// [0x00024000] 
// Parameters infos:
// struct FName                   InEvent                        ( CPF_Parm )
// struct FString                 InType                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InMsg                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_BaseScene::SendEvent ( struct FName InEvent, struct FString InType, struct FString InMsg )
{
	static UFunction* pFnSendEvent = NULL;

	if ( ! pFnSendEvent )
		pFnSendEvent = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SendEvent" );

	UUIScene_Atlas_BaseScene_execSendEvent_Parms SendEvent_Parms;
	memcpy ( &SendEvent_Parms.InEvent, &InEvent, 0x8 );
	memcpy ( &SendEvent_Parms.InType, &InType, 0xC );
	memcpy ( &SendEvent_Parms.InMsg, &InMsg, 0xC );

	this->ProcessEvent ( pFnSendEvent, &SendEvent_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.ParseAtlasItem
// [0x00820002] 
// Parameters infos:
// struct FAtlasItem              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ItemData                       ( CPF_Parm | CPF_NeedCtorLink )

struct FAtlasItem UUIScene_Atlas_BaseScene::ParseAtlasItem ( struct FString ItemData )
{
	static UFunction* pFnParseAtlasItem = NULL;

	if ( ! pFnParseAtlasItem )
		pFnParseAtlasItem = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.ParseAtlasItem" );

	UUIScene_Atlas_BaseScene_execParseAtlasItem_Parms ParseAtlasItem_Parms;
	memcpy ( &ParseAtlasItem_Parms.ItemData, &ItemData, 0xC );

	this->ProcessEvent ( pFnParseAtlasItem, &ParseAtlasItem_Parms, NULL );

	return ParseAtlasItem_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.ProcessInputAxis
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUIScene_Atlas_BaseScene::ProcessInputAxis ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnProcessInputAxis = NULL;

	if ( ! pFnProcessInputAxis )
		pFnProcessInputAxis = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.ProcessInputAxis" );

	UUIScene_Atlas_BaseScene_execProcessInputAxis_Parms ProcessInputAxis_Parms;

	this->ProcessEvent ( pFnProcessInputAxis, &ProcessInputAxis_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &ProcessInputAxis_Parms.EventParms, 0x20 );

	return ProcessInputAxis_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.ProcessInputKey
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUIScene_Atlas_BaseScene::ProcessInputKey ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnProcessInputKey = NULL;

	if ( ! pFnProcessInputKey )
		pFnProcessInputKey = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.ProcessInputKey" );

	UUIScene_Atlas_BaseScene_execProcessInputKey_Parms ProcessInputKey_Parms;

	this->ProcessEvent ( pFnProcessInputKey, &ProcessInputKey_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &ProcessInputKey_Parms.EventParms, 0x20 );

	return ProcessInputKey_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.MouseInDragRegion
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUIScene_Atlas_BaseScene::MouseInDragRegion ( )
{
	static UFunction* pFnMouseInDragRegion = NULL;

	if ( ! pFnMouseInDragRegion )
		pFnMouseInDragRegion = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.MouseInDragRegion" );

	UUIScene_Atlas_BaseScene_execMouseInDragRegion_Parms MouseInDragRegion_Parms;

	this->ProcessEvent ( pFnMouseInDragRegion, &MouseInDragRegion_Parms, NULL );

	return MouseInDragRegion_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.ClearDragComponent
// [0x00020002] 
// Parameters infos:
// class UUIScreenObject*         InComp                         ( CPF_Parm )

void UUIScene_Atlas_BaseScene::ClearDragComponent ( class UUIScreenObject* InComp )
{
	static UFunction* pFnClearDragComponent = NULL;

	if ( ! pFnClearDragComponent )
		pFnClearDragComponent = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.ClearDragComponent" );

	UUIScene_Atlas_BaseScene_execClearDragComponent_Parms ClearDragComponent_Parms;
	ClearDragComponent_Parms.InComp = InComp;

	this->ProcessEvent ( pFnClearDragComponent, &ClearDragComponent_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.SetDragComponent
// [0x00020002] 
// Parameters infos:
// class UUIScreenObject*         InComp                         ( CPF_Parm )
// class UUIScreenObject*         InMoveObj                      ( CPF_Parm )

void UUIScene_Atlas_BaseScene::SetDragComponent ( class UUIScreenObject* InComp, class UUIScreenObject* InMoveObj )
{
	static UFunction* pFnSetDragComponent = NULL;

	if ( ! pFnSetDragComponent )
		pFnSetDragComponent = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SetDragComponent" );

	UUIScene_Atlas_BaseScene_execSetDragComponent_Parms SetDragComponent_Parms;
	SetDragComponent_Parms.InComp = InComp;
	SetDragComponent_Parms.InMoveObj = InMoveObj;

	this->ProcessEvent ( pFnSetDragComponent, &SetDragComponent_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          TargetOpacity                  ( CPF_Parm )
// float                          TargetTime                     ( CPF_Parm )

void UUIScene_Atlas_BaseScene::eventFadeScene ( float TargetOpacity, float TargetTime )
{
	static UFunction* pFnFadeScene = NULL;

	if ( ! pFnFadeScene )
		pFnFadeScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.FadeScene" );

	UUIScene_Atlas_BaseScene_eventFadeScene_Parms FadeScene_Parms;
	FadeScene_Parms.TargetOpacity = TargetOpacity;
	FadeScene_Parms.TargetTime = TargetTime;

	this->ProcessEvent ( pFnFadeScene, &FadeScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeCompleted
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_BaseScene::eventFadeCompleted ( )
{
	static UFunction* pFnFadeCompleted = NULL;

	if ( ! pFnFadeCompleted )
		pFnFadeCompleted = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.FadeCompleted" );

	UUIScene_Atlas_BaseScene_eventFadeCompleted_Parms FadeCompleted_Parms;

	this->ProcessEvent ( pFnFadeCompleted, &FadeCompleted_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeOut
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_BaseScene::FadeOut ( )
{
	static UFunction* pFnFadeOut = NULL;

	if ( ! pFnFadeOut )
		pFnFadeOut = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.FadeOut" );

	UUIScene_Atlas_BaseScene_execFadeOut_Parms FadeOut_Parms;

	this->ProcessEvent ( pFnFadeOut, &FadeOut_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.FadeIn
// [0x00020002] 
// Parameters infos:
// unsigned long                  bResetOpacity                  ( CPF_Parm )

void UUIScene_Atlas_BaseScene::FadeIn ( unsigned long bResetOpacity )
{
	static UFunction* pFnFadeIn = NULL;

	if ( ! pFnFadeIn )
		pFnFadeIn = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.FadeIn" );

	UUIScene_Atlas_BaseScene_execFadeIn_Parms FadeIn_Parms;
	FadeIn_Parms.bResetOpacity = bResetOpacity;

	this->ProcessEvent ( pFnFadeIn, &FadeIn_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.IsFading
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUIScene_Atlas_BaseScene::IsFading ( )
{
	static UFunction* pFnIsFading = NULL;

	if ( ! pFnIsFading )
		pFnIsFading = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.IsFading" );

	UUIScene_Atlas_BaseScene_execIsFading_Parms IsFading_Parms;

	this->ProcessEvent ( pFnIsFading, &IsFading_Parms, NULL );

	return IsFading_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.SetUIKeyPairs
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAtlasAvatarComponent*   InNpcComp                      ( CPF_Parm | CPF_EditInline )
// TArray< struct FString >       InKeys                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       InValues                       ( CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_BaseScene::eventSetUIKeyPairs ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues )
{
	static UFunction* pFnSetUIKeyPairs = NULL;

	if ( ! pFnSetUIKeyPairs )
		pFnSetUIKeyPairs = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SetUIKeyPairs" );

	UUIScene_Atlas_BaseScene_eventSetUIKeyPairs_Parms SetUIKeyPairs_Parms;
	SetUIKeyPairs_Parms.InNpcComp = InNpcComp;
	memcpy ( &SetUIKeyPairs_Parms.InKeys, &InKeys, 0xC );
	memcpy ( &SetUIKeyPairs_Parms.InValues, &InValues, 0xC );

	this->ProcessEvent ( pFnSetUIKeyPairs, &SetUIKeyPairs_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.SetVisibilityNoFade
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void UUIScene_Atlas_BaseScene::eventSetVisibilityNoFade ( unsigned long bVisible )
{
	static UFunction* pFnSetVisibilityNoFade = NULL;

	if ( ! pFnSetVisibilityNoFade )
		pFnSetVisibilityNoFade = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SetVisibilityNoFade" );

	UUIScene_Atlas_BaseScene_eventSetVisibilityNoFade_Parms SetVisibilityNoFade_Parms;
	SetVisibilityNoFade_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetVisibilityNoFade, &SetVisibilityNoFade_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.SetVisibility
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bVisible                       ( CPF_Parm )

void UUIScene_Atlas_BaseScene::eventSetVisibility ( unsigned long bVisible )
{
	static UFunction* pFnSetVisibility = NULL;

	if ( ! pFnSetVisibility )
		pFnSetVisibility = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.SetVisibility" );

	UUIScene_Atlas_BaseScene_eventSetVisibility_Parms SetVisibility_Parms;
	SetVisibility_Parms.bVisible = bVisible;

	this->ProcessEvent ( pFnSetVisibility, &SetVisibility_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_BaseScene::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.InitScene" );

	UUIScene_Atlas_BaseScene_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.UpdateScene
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UUIScene_Atlas_BaseScene::eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.UpdateScene" );

	UUIScene_Atlas_BaseScene_eventUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.DeltaTime = DeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_BaseScene.IntToHumanReadable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            InVal                          ( CPF_Parm )

struct FString UUIScene_Atlas_BaseScene::IntToHumanReadable ( int InVal )
{
	static UFunction* pFnIntToHumanReadable = NULL;

	if ( ! pFnIntToHumanReadable )
		pFnIntToHumanReadable = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.IntToHumanReadable" );

	UUIScene_Atlas_BaseScene_execIntToHumanReadable_Parms IntToHumanReadable_Parms;
	IntToHumanReadable_Parms.InVal = InVal;

	pFnIntToHumanReadable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIntToHumanReadable, &IntToHumanReadable_Parms, NULL );

	pFnIntToHumanReadable->FunctionFlags |= 0x400;

	return IntToHumanReadable_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_BaseScene.GetAtlasPlayerOwner
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class AAtlasPlayerController*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlayerIndex                    ( CPF_OptionalParm | CPF_Parm )

class AAtlasPlayerController* UUIScene_Atlas_BaseScene::GetAtlasPlayerOwner ( int PlayerIndex )
{
	static UFunction* pFnGetAtlasPlayerOwner = NULL;

	if ( ! pFnGetAtlasPlayerOwner )
		pFnGetAtlasPlayerOwner = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_BaseScene.GetAtlasPlayerOwner" );

	UUIScene_Atlas_BaseScene_execGetAtlasPlayerOwner_Parms GetAtlasPlayerOwner_Parms;
	GetAtlasPlayerOwner_Parms.PlayerIndex = PlayerIndex;

	pFnGetAtlasPlayerOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAtlasPlayerOwner, &GetAtlasPlayerOwner_Parms, NULL );

	pFnGetAtlasPlayerOwner->FunctionFlags |= 0x400;

	return GetAtlasPlayerOwner_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_AccountLogin.EnableUI
// [0x00020002] 
// Parameters infos:
// unsigned long                  Enabled                        ( CPF_Parm )

void UUIScene_Atlas_AccountLogin::EnableUI ( unsigned long Enabled )
{
	static UFunction* pFnEnableUI = NULL;

	if ( ! pFnEnableUI )
		pFnEnableUI = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.EnableUI" );

	UUIScene_Atlas_AccountLogin_execEnableUI_Parms EnableUI_Parms;
	EnableUI_Parms.Enabled = Enabled;

	this->ProcessEvent ( pFnEnableUI, &EnableUI_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.CancelLoginClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventTarget                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_AccountLogin::CancelLoginClicked ( class UUIScreenObject* EventTarget, int PlayerIndex )
{
	static UFunction* pFnCancelLoginClicked = NULL;

	if ( ! pFnCancelLoginClicked )
		pFnCancelLoginClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.CancelLoginClicked" );

	UUIScene_Atlas_AccountLogin_execCancelLoginClicked_Parms CancelLoginClicked_Parms;
	CancelLoginClicked_Parms.EventTarget = EventTarget;
	CancelLoginClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnCancelLoginClicked, &CancelLoginClicked_Parms, NULL );

	return CancelLoginClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnLoginServerDown
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnLoginServerDown ( )
{
	static UFunction* pFnOnLoginServerDown = NULL;

	if ( ! pFnOnLoginServerDown )
		pFnOnLoginServerDown = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnLoginServerDown" );

	UUIScene_Atlas_AccountLogin_eventOnLoginServerDown_Parms OnLoginServerDown_Parms;

	this->ProcessEvent ( pFnOnLoginServerDown, &OnLoginServerDown_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnServerFull
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnServerFull ( )
{
	static UFunction* pFnOnServerFull = NULL;

	if ( ! pFnOnServerFull )
		pFnOnServerFull = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnServerFull" );

	UUIScene_Atlas_AccountLogin_eventOnServerFull_Parms OnServerFull_Parms;

	this->ProcessEvent ( pFnOnServerFull, &OnServerFull_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnClusterNotOnline
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnClusterNotOnline ( )
{
	static UFunction* pFnOnClusterNotOnline = NULL;

	if ( ! pFnOnClusterNotOnline )
		pFnOnClusterNotOnline = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnClusterNotOnline" );

	UUIScene_Atlas_AccountLogin_eventOnClusterNotOnline_Parms OnClusterNotOnline_Parms;

	this->ProcessEvent ( pFnOnClusterNotOnline, &OnClusterNotOnline_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnUnknownLoginFailure
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnUnknownLoginFailure ( )
{
	static UFunction* pFnOnUnknownLoginFailure = NULL;

	if ( ! pFnOnUnknownLoginFailure )
		pFnOnUnknownLoginFailure = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnUnknownLoginFailure" );

	UUIScene_Atlas_AccountLogin_eventOnUnknownLoginFailure_Parms OnUnknownLoginFailure_Parms;

	this->ProcessEvent ( pFnOnUnknownLoginFailure, &OnUnknownLoginFailure_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.PatchClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::PatchClient ( )
{
	static UFunction* pFnPatchClient = NULL;

	if ( ! pFnPatchClient )
		pFnPatchClient = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.PatchClient" );

	UUIScene_Atlas_AccountLogin_execPatchClient_Parms PatchClient_Parms;

	pFnPatchClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPatchClient, &PatchClient_Parms, NULL );

	pFnPatchClient->FunctionFlags |= 0x400;
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnVersionMismatch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnVersionMismatch ( )
{
	static UFunction* pFnOnVersionMismatch = NULL;

	if ( ! pFnOnVersionMismatch )
		pFnOnVersionMismatch = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnVersionMismatch" );

	UUIScene_Atlas_AccountLogin_eventOnVersionMismatch_Parms OnVersionMismatch_Parms;

	this->ProcessEvent ( pFnOnVersionMismatch, &OnVersionMismatch_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnPasswordMismatch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnPasswordMismatch ( )
{
	static UFunction* pFnOnPasswordMismatch = NULL;

	if ( ! pFnOnPasswordMismatch )
		pFnOnPasswordMismatch = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnPasswordMismatch" );

	UUIScene_Atlas_AccountLogin_eventOnPasswordMismatch_Parms OnPasswordMismatch_Parms;

	this->ProcessEvent ( pFnOnPasswordMismatch, &OnPasswordMismatch_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnUserNotFound
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnUserNotFound ( )
{
	static UFunction* pFnOnUserNotFound = NULL;

	if ( ! pFnOnUserNotFound )
		pFnOnUserNotFound = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnUserNotFound" );

	UUIScene_Atlas_AccountLogin_eventOnUserNotFound_Parms OnUserNotFound_Parms;

	this->ProcessEvent ( pFnOnUserNotFound, &OnUserNotFound_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnLoginSuccess
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventOnLoginSuccess ( )
{
	static UFunction* pFnOnLoginSuccess = NULL;

	if ( ! pFnOnLoginSuccess )
		pFnOnLoginSuccess = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnLoginSuccess" );

	UUIScene_Atlas_AccountLogin_eventOnLoginSuccess_Parms OnLoginSuccess_Parms;

	this->ProcessEvent ( pFnOnLoginSuccess, &OnLoginSuccess_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_AccountLogin.OnLoginComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  WasSuccessful                  ( CPF_Parm )

void UUIScene_Atlas_AccountLogin::OnLoginComplete ( unsigned long WasSuccessful )
{
	static UFunction* pFnOnLoginComplete = NULL;

	if ( ! pFnOnLoginComplete )
		pFnOnLoginComplete = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.OnLoginComplete" );

	UUIScene_Atlas_AccountLogin_execOnLoginComplete_Parms OnLoginComplete_Parms;
	OnLoginComplete_Parms.WasSuccessful = WasSuccessful;

	pFnOnLoginComplete->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginComplete, &OnLoginComplete_Parms, NULL );

	pFnOnLoginComplete->FunctionFlags |= 0x400;
};

// Function Atlas.UIScene_Atlas_AccountLogin.LoginClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_AccountLogin::LoginClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnLoginClicked = NULL;

	if ( ! pFnLoginClicked )
		pFnLoginClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.LoginClicked" );

	UUIScene_Atlas_AccountLogin_execLoginClicked_Parms LoginClicked_Parms;
	LoginClicked_Parms.EventObject = EventObject;
	LoginClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnLoginClicked, &LoginClicked_Parms, NULL );

	return LoginClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_AccountLogin.ExitGameClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_AccountLogin::ExitGameClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnExitGameClicked = NULL;

	if ( ! pFnExitGameClicked )
		pFnExitGameClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.ExitGameClicked" );

	UUIScene_Atlas_AccountLogin_execExitGameClicked_Parms ExitGameClicked_Parms;
	ExitGameClicked_Parms.EventObject = EventObject;
	ExitGameClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnExitGameClicked, &ExitGameClicked_Parms, NULL );

	return ExitGameClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_AccountLogin.EnsureLogout
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::EnsureLogout ( )
{
	static UFunction* pFnEnsureLogout = NULL;

	if ( ! pFnEnsureLogout )
		pFnEnsureLogout = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.EnsureLogout" );

	UUIScene_Atlas_AccountLogin_execEnsureLogout_Parms EnsureLogout_Parms;

	pFnEnsureLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnsureLogout, &EnsureLogout_Parms, NULL );

	pFnEnsureLogout->FunctionFlags |= 0x400;
};

// Function Atlas.UIScene_Atlas_AccountLogin.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_AccountLogin::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_AccountLogin.InitScene" );

	UUIScene_Atlas_AccountLogin_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_CharacterSelect.UpdateCharacters
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_CharacterSelect::UpdateCharacters ( )
{
	static UFunction* pFnUpdateCharacters = NULL;

	if ( ! pFnUpdateCharacters )
		pFnUpdateCharacters = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.UpdateCharacters" );

	UUIScene_Atlas_CharacterSelect_execUpdateCharacters_Parms UpdateCharacters_Parms;

	this->ProcessEvent ( pFnUpdateCharacters, &UpdateCharacters_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_CharacterSelect.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_CharacterSelect::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.SceneActivated" );

	UUIScene_Atlas_CharacterSelect_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_CharacterSelect.UpdateScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UUIScene_Atlas_CharacterSelect::eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.UpdateScene" );

	UUIScene_Atlas_CharacterSelect_eventUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.DeltaTime = DeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_CharacterSelect.LogoutClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_CharacterSelect::LogoutClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnLogoutClicked = NULL;

	if ( ! pFnLogoutClicked )
		pFnLogoutClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.LogoutClicked" );

	UUIScene_Atlas_CharacterSelect_execLogoutClicked_Parms LogoutClicked_Parms;
	LogoutClicked_Parms.EventObject = EventObject;
	LogoutClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnLogoutClicked, &LogoutClicked_Parms, NULL );

	return LogoutClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_CharacterSelect.EnterGameClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_CharacterSelect::EnterGameClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnEnterGameClicked = NULL;

	if ( ! pFnEnterGameClicked )
		pFnEnterGameClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.EnterGameClicked" );

	UUIScene_Atlas_CharacterSelect_execEnterGameClicked_Parms EnterGameClicked_Parms;
	EnterGameClicked_Parms.EventObject = EventObject;
	EnterGameClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnEnterGameClicked, &EnterGameClicked_Parms, NULL );

	return EnterGameClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_CharacterSelect.GetCharacterPic
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 CharacterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UUIScene_Atlas_CharacterSelect::GetCharacterPic ( struct FString CharacterName )
{
	static UFunction* pFnGetCharacterPic = NULL;

	if ( ! pFnGetCharacterPic )
		pFnGetCharacterPic = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.GetCharacterPic" );

	UUIScene_Atlas_CharacterSelect_execGetCharacterPic_Parms GetCharacterPic_Parms;
	memcpy ( &GetCharacterPic_Parms.CharacterName, &CharacterName, 0xC );

	this->ProcessEvent ( pFnGetCharacterPic, &GetCharacterPic_Parms, NULL );

	return GetCharacterPic_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_CharacterSelect.CharacterClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_CharacterSelect::CharacterClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnCharacterClicked = NULL;

	if ( ! pFnCharacterClicked )
		pFnCharacterClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.CharacterClicked" );

	UUIScene_Atlas_CharacterSelect_execCharacterClicked_Parms CharacterClicked_Parms;
	CharacterClicked_Parms.EventObject = EventObject;
	CharacterClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnCharacterClicked, &CharacterClicked_Parms, NULL );

	return CharacterClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_CharacterSelect.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_CharacterSelect::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.InitScene" );

	UUIScene_Atlas_CharacterSelect_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_CharacterSelect.EnterGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 CharacterName                  ( CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_CharacterSelect::EnterGame ( struct FString CharacterName )
{
	static UFunction* pFnEnterGame = NULL;

	if ( ! pFnEnterGame )
		pFnEnterGame = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_CharacterSelect.EnterGame" );

	UUIScene_Atlas_CharacterSelect_execEnterGame_Parms EnterGame_Parms;
	memcpy ( &EnterGame_Parms.CharacterName, &CharacterName, 0xC );

	pFnEnterGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnterGame, &EnterGame_Parms, NULL );

	pFnEnterGame->FunctionFlags |= 0x400;
};

// Function Atlas.UIScene_Atlas_Inventory.UpdatePage
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_Inventory::UpdatePage ( )
{
	static UFunction* pFnUpdatePage = NULL;

	if ( ! pFnUpdatePage )
		pFnUpdatePage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.UpdatePage" );

	UUIScene_Atlas_Inventory_execUpdatePage_Parms UpdatePage_Parms;

	this->ProcessEvent ( pFnUpdatePage, &UpdatePage_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Inventory.OnSlotClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Inventory::OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnSlotClicked = NULL;

	if ( ! pFnOnSlotClicked )
		pFnOnSlotClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.OnSlotClicked" );

	UUIScene_Atlas_Inventory_execOnSlotClicked_Parms OnSlotClicked_Parms;
	OnSlotClicked_Parms.EventObject = EventObject;
	OnSlotClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnSlotClicked, &OnSlotClicked_Parms, NULL );

	return OnSlotClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemOpenContextMenu
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )
// class UUIContextMenu*          CustomContextMenu              ( CPF_Parm | CPF_OutParm )

bool UUIScene_Atlas_Inventory::OnItemOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu )
{
	static UFunction* pFnOnItemOpenContextMenu = NULL;

	if ( ! pFnOnItemOpenContextMenu )
		pFnOnItemOpenContextMenu = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.OnItemOpenContextMenu" );

	UUIScene_Atlas_Inventory_execOnItemOpenContextMenu_Parms OnItemOpenContextMenu_Parms;
	OnItemOpenContextMenu_Parms.Sender = Sender;
	OnItemOpenContextMenu_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnItemOpenContextMenu, &OnItemOpenContextMenu_Parms, NULL );

	if ( CustomContextMenu )
		*CustomContextMenu = OnItemOpenContextMenu_Parms.CustomContextMenu;

	return OnItemOpenContextMenu_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemDragDrop
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Target                         ( CPF_Parm )
// class UUIScreenObject*         Source                         ( CPF_Parm )

bool UUIScene_Atlas_Inventory::OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source )
{
	static UFunction* pFnOnItemDragDrop = NULL;

	if ( ! pFnOnItemDragDrop )
		pFnOnItemDragDrop = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.OnItemDragDrop" );

	UUIScene_Atlas_Inventory_execOnItemDragDrop_Parms OnItemDragDrop_Parms;
	OnItemDragDrop_Parms.Target = Target;
	OnItemDragDrop_Parms.Source = Source;

	this->ProcessEvent ( pFnOnItemDragDrop, &OnItemDragDrop_Parms, NULL );

	return OnItemDragDrop_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemDragBegin
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Source                         ( CPF_Parm )

bool UUIScene_Atlas_Inventory::OnItemDragBegin ( class UUIScreenObject* Source )
{
	static UFunction* pFnOnItemDragBegin = NULL;

	if ( ! pFnOnItemDragBegin )
		pFnOnItemDragBegin = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.OnItemDragBegin" );

	UUIScene_Atlas_Inventory_execOnItemDragBegin_Parms OnItemDragBegin_Parms;
	OnItemDragBegin_Parms.Source = Source;

	this->ProcessEvent ( pFnOnItemDragBegin, &OnItemDragBegin_Parms, NULL );

	return OnItemDragBegin_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Inventory.OnItemClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Inventory::OnItemClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnItemClicked = NULL;

	if ( ! pFnOnItemClicked )
		pFnOnItemClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.OnItemClicked" );

	UUIScene_Atlas_Inventory_execOnItemClicked_Parms OnItemClicked_Parms;
	OnItemClicked_Parms.EventObject = EventObject;
	OnItemClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnItemClicked, &OnItemClicked_Parms, NULL );

	return OnItemClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Inventory.ItemListChanged
// [0x00020002] 
// Parameters infos:
// TArray< struct FString >       ItemData                       ( CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_Inventory::ItemListChanged ( TArray< struct FString > ItemData )
{
	static UFunction* pFnItemListChanged = NULL;

	if ( ! pFnItemListChanged )
		pFnItemListChanged = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.ItemListChanged" );

	UUIScene_Atlas_Inventory_execItemListChanged_Parms ItemListChanged_Parms;
	memcpy ( &ItemListChanged_Parms.ItemData, &ItemData, 0xC );

	this->ProcessEvent ( pFnItemListChanged, &ItemListChanged_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Inventory.SceneDeactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_Inventory::eventSceneDeactivated ( )
{
	static UFunction* pFnSceneDeactivated = NULL;

	if ( ! pFnSceneDeactivated )
		pFnSceneDeactivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.SceneDeactivated" );

	UUIScene_Atlas_Inventory_eventSceneDeactivated_Parms SceneDeactivated_Parms;

	this->ProcessEvent ( pFnSceneDeactivated, &SceneDeactivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Inventory.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_Inventory::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.SceneActivated" );

	UUIScene_Atlas_Inventory_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Inventory.FadeIn
// [0x00020002] 
// Parameters infos:
// unsigned long                  bResetOpacity                  ( CPF_Parm )

void UUIScene_Atlas_Inventory::FadeIn ( unsigned long bResetOpacity )
{
	static UFunction* pFnFadeIn = NULL;

	if ( ! pFnFadeIn )
		pFnFadeIn = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.FadeIn" );

	UUIScene_Atlas_Inventory_execFadeIn_Parms FadeIn_Parms;
	FadeIn_Parms.bResetOpacity = bResetOpacity;

	this->ProcessEvent ( pFnFadeIn, &FadeIn_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Inventory.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_Inventory::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.InitScene" );

	UUIScene_Atlas_Inventory_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Inventory.DropItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ItemNum                        ( CPF_Parm )

void UUIScene_Atlas_Inventory::DropItem ( int ItemNum )
{
	static UFunction* pFnDropItem = NULL;

	if ( ! pFnDropItem )
		pFnDropItem = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Inventory.DropItem" );

	UUIScene_Atlas_Inventory_execDropItem_Parms DropItem_Parms;
	DropItem_Parms.ItemNum = ItemNum;

	pFnDropItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDropItem, &DropItem_Parms, NULL );

	pFnDropItem->FunctionFlags |= 0x400;
};

// Function Atlas.UIScene_Atlas_Loot.UpdatePageButtons
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_Loot::UpdatePageButtons ( )
{
	static UFunction* pFnUpdatePageButtons = NULL;

	if ( ! pFnUpdatePageButtons )
		pFnUpdatePageButtons = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.UpdatePageButtons" );

	UUIScene_Atlas_Loot_execUpdatePageButtons_Parms UpdatePageButtons_Parms;

	this->ProcessEvent ( pFnUpdatePageButtons, &UpdatePageButtons_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.UpdatePage
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_Loot::UpdatePage ( )
{
	static UFunction* pFnUpdatePage = NULL;

	if ( ! pFnUpdatePage )
		pFnUpdatePage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.UpdatePage" );

	UUIScene_Atlas_Loot_execUpdatePage_Parms UpdatePage_Parms;

	this->ProcessEvent ( pFnUpdatePage, &UpdatePage_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.FindValidPage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iPage                          ( CPF_Parm )

int UUIScene_Atlas_Loot::FindValidPage ( int iPage )
{
	static UFunction* pFnFindValidPage = NULL;

	if ( ! pFnFindValidPage )
		pFnFindValidPage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.FindValidPage" );

	UUIScene_Atlas_Loot_execFindValidPage_Parms FindValidPage_Parms;
	FindValidPage_Parms.iPage = iPage;

	this->ProcessEvent ( pFnFindValidPage, &FindValidPage_Parms, NULL );

	return FindValidPage_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.IsValidPage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iPage                          ( CPF_Parm )

bool UUIScene_Atlas_Loot::IsValidPage ( int iPage )
{
	static UFunction* pFnIsValidPage = NULL;

	if ( ! pFnIsValidPage )
		pFnIsValidPage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.IsValidPage" );

	UUIScene_Atlas_Loot_execIsValidPage_Parms IsValidPage_Parms;
	IsValidPage_Parms.iPage = iPage;

	this->ProcessEvent ( pFnIsValidPage, &IsValidPage_Parms, NULL );

	return IsValidPage_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.GetNumItemsOnPage
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            iPage                          ( CPF_Parm )

int UUIScene_Atlas_Loot::GetNumItemsOnPage ( int iPage )
{
	static UFunction* pFnGetNumItemsOnPage = NULL;

	if ( ! pFnGetNumItemsOnPage )
		pFnGetNumItemsOnPage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.GetNumItemsOnPage" );

	UUIScene_Atlas_Loot_execGetNumItemsOnPage_Parms GetNumItemsOnPage_Parms;
	GetNumItemsOnPage_Parms.iPage = iPage;

	this->ProcessEvent ( pFnGetNumItemsOnPage, &GetNumItemsOnPage_Parms, NULL );

	return GetNumItemsOnPage_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.OnLootCloseClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Loot::OnLootCloseClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnLootCloseClicked = NULL;

	if ( ! pFnOnLootCloseClicked )
		pFnOnLootCloseClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.OnLootCloseClicked" );

	UUIScene_Atlas_Loot_execOnLootCloseClicked_Parms OnLootCloseClicked_Parms;
	OnLootCloseClicked_Parms.EventObject = EventObject;
	OnLootCloseClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnLootCloseClicked, &OnLootCloseClicked_Parms, NULL );

	return OnLootCloseClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.OnLootClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Loot::OnLootClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnLootClicked = NULL;

	if ( ! pFnOnLootClicked )
		pFnOnLootClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.OnLootClicked" );

	UUIScene_Atlas_Loot_execOnLootClicked_Parms OnLootClicked_Parms;
	OnLootClicked_Parms.EventObject = EventObject;
	OnLootClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnLootClicked, &OnLootClicked_Parms, NULL );

	return OnLootClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.PrevButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Loot::PrevButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnPrevButtonClicked = NULL;

	if ( ! pFnPrevButtonClicked )
		pFnPrevButtonClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.PrevButtonClicked" );

	UUIScene_Atlas_Loot_execPrevButtonClicked_Parms PrevButtonClicked_Parms;
	PrevButtonClicked_Parms.EventObject = EventObject;
	PrevButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnPrevButtonClicked, &PrevButtonClicked_Parms, NULL );

	return PrevButtonClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.NextButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Loot::NextButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnNextButtonClicked = NULL;

	if ( ! pFnNextButtonClicked )
		pFnNextButtonClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.NextButtonClicked" );

	UUIScene_Atlas_Loot_execNextButtonClicked_Parms NextButtonClicked_Parms;
	NextButtonClicked_Parms.EventObject = EventObject;
	NextButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnNextButtonClicked, &NextButtonClicked_Parms, NULL );

	return NextButtonClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Loot.UpdateScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UUIScene_Atlas_Loot::eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.UpdateScene" );

	UUIScene_Atlas_Loot_eventUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.DeltaTime = DeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.LootChanged
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_Loot::LootChanged ( )
{
	static UFunction* pFnLootChanged = NULL;

	if ( ! pFnLootChanged )
		pFnLootChanged = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.LootChanged" );

	UUIScene_Atlas_Loot_execLootChanged_Parms LootChanged_Parms;

	this->ProcessEvent ( pFnLootChanged, &LootChanged_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.SceneDeactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_Loot::eventSceneDeactivated ( )
{
	static UFunction* pFnSceneDeactivated = NULL;

	if ( ! pFnSceneDeactivated )
		pFnSceneDeactivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.SceneDeactivated" );

	UUIScene_Atlas_Loot_eventSceneDeactivated_Parms SceneDeactivated_Parms;

	this->ProcessEvent ( pFnSceneDeactivated, &SceneDeactivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_Loot::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.SceneActivated" );

	UUIScene_Atlas_Loot_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_Loot::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.InitScene" );

	UUIScene_Atlas_Loot_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Loot.LeaveLootSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UUIScene_Atlas_Loot::LeaveLootSession ( )
{
	static UFunction* pFnLeaveLootSession = NULL;

	if ( ! pFnLeaveLootSession )
		pFnLeaveLootSession = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Loot.LeaveLootSession" );

	UUIScene_Atlas_Loot_execLeaveLootSession_Parms LeaveLootSession_Parms;

	pFnLeaveLootSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveLootSession, &LeaveLootSession_Parms, NULL );

	pFnLeaveLootSession->FunctionFlags |= 0x400;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.UpdateScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UUIScene_Atlas_NpcSpeak::eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.UpdateScene" );

	UUIScene_Atlas_NpcSpeak_eventUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.DeltaTime = DeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.UpdatePage
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_NpcSpeak::UpdatePage ( )
{
	static UFunction* pFnUpdatePage = NULL;

	if ( ! pFnUpdatePage )
		pFnUpdatePage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.UpdatePage" );

	UUIScene_Atlas_NpcSpeak_execUpdatePage_Parms UpdatePage_Parms;

	this->ProcessEvent ( pFnUpdatePage, &UpdatePage_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.SetUIKeyPairs
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAtlasAvatarComponent*   InNpcComp                      ( CPF_Parm | CPF_EditInline )
// TArray< struct FString >       InKeys                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       InValues                       ( CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_NpcSpeak::eventSetUIKeyPairs ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues )
{
	static UFunction* pFnSetUIKeyPairs = NULL;

	if ( ! pFnSetUIKeyPairs )
		pFnSetUIKeyPairs = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.SetUIKeyPairs" );

	UUIScene_Atlas_NpcSpeak_eventSetUIKeyPairs_Parms SetUIKeyPairs_Parms;
	SetUIKeyPairs_Parms.InNpcComp = InNpcComp;
	memcpy ( &SetUIKeyPairs_Parms.InKeys, &InKeys, 0xC );
	memcpy ( &SetUIKeyPairs_Parms.InValues, &InValues, 0xC );

	this->ProcessEvent ( pFnSetUIKeyPairs, &SetUIKeyPairs_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.OnVendorButtonRightClick
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )
// class UUIContextMenu*          CustomContextMenu              ( CPF_Parm | CPF_OutParm )

bool UUIScene_Atlas_NpcSpeak::OnVendorButtonRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu )
{
	static UFunction* pFnOnVendorButtonRightClick = NULL;

	if ( ! pFnOnVendorButtonRightClick )
		pFnOnVendorButtonRightClick = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.OnVendorButtonRightClick" );

	UUIScene_Atlas_NpcSpeak_execOnVendorButtonRightClick_Parms OnVendorButtonRightClick_Parms;
	OnVendorButtonRightClick_Parms.Sender = Sender;
	OnVendorButtonRightClick_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnVendorButtonRightClick, &OnVendorButtonRightClick_Parms, NULL );

	if ( CustomContextMenu )
		*CustomContextMenu = OnVendorButtonRightClick_Parms.CustomContextMenu;

	return OnVendorButtonRightClick_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.QuestConfirmClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_NpcSpeak::QuestConfirmClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnQuestConfirmClicked = NULL;

	if ( ! pFnQuestConfirmClicked )
		pFnQuestConfirmClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.QuestConfirmClicked" );

	UUIScene_Atlas_NpcSpeak_execQuestConfirmClicked_Parms QuestConfirmClicked_Parms;
	QuestConfirmClicked_Parms.EventObject = EventObject;
	QuestConfirmClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnQuestConfirmClicked, &QuestConfirmClicked_Parms, NULL );

	return QuestConfirmClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.QuestCancelClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_NpcSpeak::QuestCancelClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnQuestCancelClicked = NULL;

	if ( ! pFnQuestCancelClicked )
		pFnQuestCancelClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.QuestCancelClicked" );

	UUIScene_Atlas_NpcSpeak_execQuestCancelClicked_Parms QuestCancelClicked_Parms;
	QuestCancelClicked_Parms.EventObject = EventObject;
	QuestCancelClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnQuestCancelClicked, &QuestCancelClicked_Parms, NULL );

	return QuestCancelClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.PrevButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_NpcSpeak::PrevButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnPrevButtonClicked = NULL;

	if ( ! pFnPrevButtonClicked )
		pFnPrevButtonClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.PrevButtonClicked" );

	UUIScene_Atlas_NpcSpeak_execPrevButtonClicked_Parms PrevButtonClicked_Parms;
	PrevButtonClicked_Parms.EventObject = EventObject;
	PrevButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnPrevButtonClicked, &PrevButtonClicked_Parms, NULL );

	return PrevButtonClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.NextButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_NpcSpeak::NextButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnNextButtonClicked = NULL;

	if ( ! pFnNextButtonClicked )
		pFnNextButtonClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.NextButtonClicked" );

	UUIScene_Atlas_NpcSpeak_execNextButtonClicked_Parms NextButtonClicked_Parms;
	NextButtonClicked_Parms.EventObject = EventObject;
	NextButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnNextButtonClicked, &NextButtonClicked_Parms, NULL );

	return NextButtonClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.FindActionButtonIndex
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         InObject                       ( CPF_Parm )

int UUIScene_Atlas_NpcSpeak::FindActionButtonIndex ( class UUIScreenObject* InObject )
{
	static UFunction* pFnFindActionButtonIndex = NULL;

	if ( ! pFnFindActionButtonIndex )
		pFnFindActionButtonIndex = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.FindActionButtonIndex" );

	UUIScene_Atlas_NpcSpeak_execFindActionButtonIndex_Parms FindActionButtonIndex_Parms;
	FindActionButtonIndex_Parms.InObject = InObject;

	this->ProcessEvent ( pFnFindActionButtonIndex, &FindActionButtonIndex_Parms, NULL );

	return FindActionButtonIndex_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.ClearActions
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_NpcSpeak::ClearActions ( )
{
	static UFunction* pFnClearActions = NULL;

	if ( ! pFnClearActions )
		pFnClearActions = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.ClearActions" );

	UUIScene_Atlas_NpcSpeak_execClearActions_Parms ClearActions_Parms;

	this->ProcessEvent ( pFnClearActions, &ClearActions_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.AddAction
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ActionValue                    ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsQuest                       ( CPF_OptionalParm | CPF_Parm )

bool UUIScene_Atlas_NpcSpeak::AddAction ( struct FString ActionValue, unsigned long bIsQuest )
{
	static UFunction* pFnAddAction = NULL;

	if ( ! pFnAddAction )
		pFnAddAction = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.AddAction" );

	UUIScene_Atlas_NpcSpeak_execAddAction_Parms AddAction_Parms;
	memcpy ( &AddAction_Parms.ActionValue, &ActionValue, 0xC );
	AddAction_Parms.bIsQuest = bIsQuest;

	this->ProcessEvent ( pFnAddAction, &AddAction_Parms, NULL );

	return AddAction_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.ActionButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_NpcSpeak::ActionButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnActionButtonClicked = NULL;

	if ( ! pFnActionButtonClicked )
		pFnActionButtonClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.ActionButtonClicked" );

	UUIScene_Atlas_NpcSpeak_execActionButtonClicked_Parms ActionButtonClicked_Parms;
	ActionButtonClicked_Parms.EventObject = EventObject;
	ActionButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnActionButtonClicked, &ActionButtonClicked_Parms, NULL );

	return ActionButtonClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_NpcSpeak.VendorChanged
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_NpcSpeak::VendorChanged ( )
{
	static UFunction* pFnVendorChanged = NULL;

	if ( ! pFnVendorChanged )
		pFnVendorChanged = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.VendorChanged" );

	UUIScene_Atlas_NpcSpeak_execVendorChanged_Parms VendorChanged_Parms;

	this->ProcessEvent ( pFnVendorChanged, &VendorChanged_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.SceneDeactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_NpcSpeak::eventSceneDeactivated ( )
{
	static UFunction* pFnSceneDeactivated = NULL;

	if ( ! pFnSceneDeactivated )
		pFnSceneDeactivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.SceneDeactivated" );

	UUIScene_Atlas_NpcSpeak_eventSceneDeactivated_Parms SceneDeactivated_Parms;

	this->ProcessEvent ( pFnSceneDeactivated, &SceneDeactivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_NpcSpeak::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.SceneActivated" );

	UUIScene_Atlas_NpcSpeak_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_NpcSpeak.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_NpcSpeak::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_NpcSpeak.InitScene" );

	UUIScene_Atlas_NpcSpeak_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_PaperDoll.UpdatePage
// [0x00820002] 
// Parameters infos:

void UUIScene_Atlas_PaperDoll::UpdatePage ( )
{
	static UFunction* pFnUpdatePage = NULL;

	if ( ! pFnUpdatePage )
		pFnUpdatePage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.UpdatePage" );

	UUIScene_Atlas_PaperDoll_execUpdatePage_Parms UpdatePage_Parms;

	this->ProcessEvent ( pFnUpdatePage, &UpdatePage_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnSlotClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_PaperDoll::OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnSlotClicked = NULL;

	if ( ! pFnOnSlotClicked )
		pFnOnSlotClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.OnSlotClicked" );

	UUIScene_Atlas_PaperDoll_execOnSlotClicked_Parms OnSlotClicked_Parms;
	OnSlotClicked_Parms.EventObject = EventObject;
	OnSlotClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnSlotClicked, &OnSlotClicked_Parms, NULL );

	return OnSlotClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipOpenContextMenu
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIObject*               Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )
// class UUIContextMenu*          CustomContextMenu              ( CPF_Parm | CPF_OutParm )

bool UUIScene_Atlas_PaperDoll::OnEquipOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu )
{
	static UFunction* pFnOnEquipOpenContextMenu = NULL;

	if ( ! pFnOnEquipOpenContextMenu )
		pFnOnEquipOpenContextMenu = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.OnEquipOpenContextMenu" );

	UUIScene_Atlas_PaperDoll_execOnEquipOpenContextMenu_Parms OnEquipOpenContextMenu_Parms;
	OnEquipOpenContextMenu_Parms.Sender = Sender;
	OnEquipOpenContextMenu_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnEquipOpenContextMenu, &OnEquipOpenContextMenu_Parms, NULL );

	if ( CustomContextMenu )
		*CustomContextMenu = OnEquipOpenContextMenu_Parms.CustomContextMenu;

	return OnEquipOpenContextMenu_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipDragDrop
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Target                         ( CPF_Parm )
// class UUIScreenObject*         Source                         ( CPF_Parm )

bool UUIScene_Atlas_PaperDoll::OnEquipDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source )
{
	static UFunction* pFnOnEquipDragDrop = NULL;

	if ( ! pFnOnEquipDragDrop )
		pFnOnEquipDragDrop = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.OnEquipDragDrop" );

	UUIScene_Atlas_PaperDoll_execOnEquipDragDrop_Parms OnEquipDragDrop_Parms;
	OnEquipDragDrop_Parms.Target = Target;
	OnEquipDragDrop_Parms.Source = Source;

	this->ProcessEvent ( pFnOnEquipDragDrop, &OnEquipDragDrop_Parms, NULL );

	return OnEquipDragDrop_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipDragBegin
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Source                         ( CPF_Parm )

bool UUIScene_Atlas_PaperDoll::OnEquipDragBegin ( class UUIScreenObject* Source )
{
	static UFunction* pFnOnEquipDragBegin = NULL;

	if ( ! pFnOnEquipDragBegin )
		pFnOnEquipDragBegin = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.OnEquipDragBegin" );

	UUIScene_Atlas_PaperDoll_execOnEquipDragBegin_Parms OnEquipDragBegin_Parms;
	OnEquipDragBegin_Parms.Source = Source;

	this->ProcessEvent ( pFnOnEquipDragBegin, &OnEquipDragBegin_Parms, NULL );

	return OnEquipDragBegin_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_PaperDoll.OnEquipClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_PaperDoll::OnEquipClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnEquipClicked = NULL;

	if ( ! pFnOnEquipClicked )
		pFnOnEquipClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.OnEquipClicked" );

	UUIScene_Atlas_PaperDoll_execOnEquipClicked_Parms OnEquipClicked_Parms;
	OnEquipClicked_Parms.EventObject = EventObject;
	OnEquipClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnEquipClicked, &OnEquipClicked_Parms, NULL );

	return OnEquipClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_PaperDoll.EquipmentChanged
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_PaperDoll::EquipmentChanged ( )
{
	static UFunction* pFnEquipmentChanged = NULL;

	if ( ! pFnEquipmentChanged )
		pFnEquipmentChanged = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.EquipmentChanged" );

	UUIScene_Atlas_PaperDoll_execEquipmentChanged_Parms EquipmentChanged_Parms;

	this->ProcessEvent ( pFnEquipmentChanged, &EquipmentChanged_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_PaperDoll.SceneDeactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_PaperDoll::eventSceneDeactivated ( )
{
	static UFunction* pFnSceneDeactivated = NULL;

	if ( ! pFnSceneDeactivated )
		pFnSceneDeactivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.SceneDeactivated" );

	UUIScene_Atlas_PaperDoll_eventSceneDeactivated_Parms SceneDeactivated_Parms;

	this->ProcessEvent ( pFnSceneDeactivated, &SceneDeactivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_PaperDoll.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_PaperDoll::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.SceneActivated" );

	UUIScene_Atlas_PaperDoll_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_PaperDoll.FadeIn
// [0x00020002] 
// Parameters infos:
// unsigned long                  bResetOpacity                  ( CPF_Parm )

void UUIScene_Atlas_PaperDoll::FadeIn ( unsigned long bResetOpacity )
{
	static UFunction* pFnFadeIn = NULL;

	if ( ! pFnFadeIn )
		pFnFadeIn = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.FadeIn" );

	UUIScene_Atlas_PaperDoll_execFadeIn_Parms FadeIn_Parms;
	FadeIn_Parms.bResetOpacity = bResetOpacity;

	this->ProcessEvent ( pFnFadeIn, &FadeIn_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_PaperDoll.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_PaperDoll::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_PaperDoll.InitScene" );

	UUIScene_Atlas_PaperDoll_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.AtlasPlayerDataStore.GetFieldValue
// [0x00424802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// int                            ArrayIndex                     ( CPF_OptionalParm | CPF_Parm )
// struct FUIProviderScriptFieldValue FieldValue                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UAtlasPlayerDataStore::eventGetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue )
{
	static UFunction* pFnGetFieldValue = NULL;

	if ( ! pFnGetFieldValue )
		pFnGetFieldValue = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerDataStore.GetFieldValue" );

	UAtlasPlayerDataStore_eventGetFieldValue_Parms GetFieldValue_Parms;
	memcpy ( &GetFieldValue_Parms.FieldName, &FieldName, 0xC );
	GetFieldValue_Parms.ArrayIndex = ArrayIndex;

	this->ProcessEvent ( pFnGetFieldValue, &GetFieldValue_Parms, NULL );

	if ( FieldValue )
		memcpy ( FieldValue, &GetFieldValue_Parms.FieldValue, 0x58 );

	return GetFieldValue_Parms.ReturnValue;
};

// Function Atlas.AtlasAvatarComponent.TellBehavior
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 BehaviorCmd                    ( CPF_Parm | CPF_NeedCtorLink )

void UAtlasAvatarComponent::TellBehavior ( struct FString BehaviorCmd )
{
	static UFunction* pFnTellBehavior = NULL;

	if ( ! pFnTellBehavior )
		pFnTellBehavior = UObject::FindObject<UFunction> ( "Function Atlas.AtlasAvatarComponent.TellBehavior" );

	UAtlasAvatarComponent_execTellBehavior_Parms TellBehavior_Parms;
	memcpy ( &TellBehavior_Parms.BehaviorCmd, &BehaviorCmd, 0xC );

	pFnTellBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTellBehavior, &TellBehavior_Parms, NULL );

	pFnTellBehavior->FunctionFlags |= 0x400;
};

// Function Atlas.AtlasPlayerController.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AAtlasPlayerController::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.DisplayDebug" );

	AAtlasPlayerController_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function Atlas.AtlasPlayerController.TempMarker
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FName                   NewTag                         ( CPF_Parm )

void AAtlasPlayerController::TempMarker ( struct FName NewTag )
{
	static UFunction* pFnTempMarker = NULL;

	if ( ! pFnTempMarker )
		pFnTempMarker = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.TempMarker" );

	AAtlasPlayerController_execTempMarker_Parms TempMarker_Parms;
	memcpy ( &TempMarker_Parms.NewTag, &NewTag, 0x8 );

	this->ProcessEvent ( pFnTempMarker, &TempMarker_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ListMarker
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void AAtlasPlayerController::ListMarker ( )
{
	static UFunction* pFnListMarker = NULL;

	if ( ! pFnListMarker )
		pFnListMarker = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ListMarker" );

	AAtlasPlayerController_execListMarker_Parms ListMarker_Parms;

	this->ProcessEvent ( pFnListMarker, &ListMarker_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.GotoMarker
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FName                   DestTag                        ( CPF_Parm )

void AAtlasPlayerController::GotoMarker ( struct FName DestTag )
{
	static UFunction* pFnGotoMarker = NULL;

	if ( ! pFnGotoMarker )
		pFnGotoMarker = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.GotoMarker" );

	AAtlasPlayerController_execGotoMarker_Parms GotoMarker_Parms;
	memcpy ( &GotoMarker_Parms.DestTag, &DestTag, 0x8 );

	this->ProcessEvent ( pFnGotoMarker, &GotoMarker_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.SetPos
// [0x00820202] ( FUNC_Exec )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Z                              ( CPF_Parm )

void AAtlasPlayerController::SetPos ( float X, float Y, float Z )
{
	static UFunction* pFnSetPos = NULL;

	if ( ! pFnSetPos )
		pFnSetPos = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.SetPos" );

	AAtlasPlayerController_execSetPos_Parms SetPos_Parms;
	SetPos_Parms.X = X;
	SetPos_Parms.Y = Y;
	SetPos_Parms.Z = Z;

	this->ProcessEvent ( pFnSetPos, &SetPos_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ActionBarSlotgugu
// [0x00020200] ( FUNC_Exec )
// Parameters infos:
// int                            iSlot                          ( CPF_Parm )

void AAtlasPlayerController::ActionBarSlotgugu ( int iSlot )
{
	static UFunction* pFnActionBarSlotgugu = NULL;

	if ( ! pFnActionBarSlotgugu )
		pFnActionBarSlotgugu = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ActionBarSlotgugu" );

	AAtlasPlayerController_execActionBarSlotgugu_Parms ActionBarSlotgugu_Parms;
	ActionBarSlotgugu_Parms.iSlot = iSlot;

	this->ProcessEvent ( pFnActionBarSlotgugu, &ActionBarSlotgugu_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ToggleUI
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void AAtlasPlayerController::ToggleUI ( )
{
	static UFunction* pFnToggleUI = NULL;

	if ( ! pFnToggleUI )
		pFnToggleUI = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ToggleUI" );

	AAtlasPlayerController_execToggleUI_Parms ToggleUI_Parms;

	this->ProcessEvent ( pFnToggleUI, &ToggleUI_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ClusterCom
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AAtlasPlayerController::ClusterCom ( )
{
	static UFunction* pFnClusterCom = NULL;

	if ( ! pFnClusterCom )
		pFnClusterCom = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ClusterCom" );

	AAtlasPlayerController_execClusterCom_Parms ClusterCom_Parms;

	this->ProcessEvent ( pFnClusterCom, &ClusterCom_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ZoomIn
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AAtlasPlayerController::ZoomIn ( )
{
	static UFunction* pFnZoomIn = NULL;

	if ( ! pFnZoomIn )
		pFnZoomIn = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ZoomIn" );

	AAtlasPlayerController_execZoomIn_Parms ZoomIn_Parms;

	this->ProcessEvent ( pFnZoomIn, &ZoomIn_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.PickViewportActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* AAtlasPlayerController::PickViewportActor ( )
{
	static UFunction* pFnPickViewportActor = NULL;

	if ( ! pFnPickViewportActor )
		pFnPickViewportActor = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.PickViewportActor" );

	AAtlasPlayerController_execPickViewportActor_Parms PickViewportActor_Parms;

	this->ProcessEvent ( pFnPickViewportActor, &PickViewportActor_Parms, NULL );

	return PickViewportActor_Parms.ReturnValue;
};

// Function Atlas.AtlasPlayerController.ClearPickedActors
// [0x00020002] 
// Parameters infos:

void AAtlasPlayerController::ClearPickedActors ( )
{
	static UFunction* pFnClearPickedActors = NULL;

	if ( ! pFnClearPickedActors )
		pFnClearPickedActors = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ClearPickedActors" );

	AAtlasPlayerController_execClearPickedActors_Parms ClearPickedActors_Parms;

	this->ProcessEvent ( pFnClearPickedActors, &ClearPickedActors_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.CallServerMove
// [0x00820002] 
// Parameters infos:
// class USavedMove*              NewMove                        ( CPF_Parm )
// struct FVector                 ClientLoc                      ( CPF_Parm )
// unsigned char                  ClientRoll                     ( CPF_Parm )
// int                            View                           ( CPF_Parm )
// class USavedMove*              OldMove                        ( CPF_Parm )

void AAtlasPlayerController::CallServerMove ( class USavedMove* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, class USavedMove* OldMove )
{
	static UFunction* pFnCallServerMove = NULL;

	if ( ! pFnCallServerMove )
		pFnCallServerMove = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.CallServerMove" );

	AAtlasPlayerController_execCallServerMove_Parms CallServerMove_Parms;
	CallServerMove_Parms.NewMove = NewMove;
	memcpy ( &CallServerMove_Parms.ClientLoc, &ClientLoc, 0xC );
	CallServerMove_Parms.ClientRoll = ClientRoll;
	CallServerMove_Parms.View = View;
	CallServerMove_Parms.OldMove = OldMove;

	this->ProcessEvent ( pFnCallServerMove, &CallServerMove_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ShouldReplicateMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AAtlasPlayerController::ShouldReplicateMove ( )
{
	static UFunction* pFnShouldReplicateMove = NULL;

	if ( ! pFnShouldReplicateMove )
		pFnShouldReplicateMove = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ShouldReplicateMove" );

	AAtlasPlayerController_execShouldReplicateMove_Parms ShouldReplicateMove_Parms;

	this->ProcessEvent ( pFnShouldReplicateMove, &ShouldReplicateMove_Parms, NULL );

	return ShouldReplicateMove_Parms.ReturnValue;
};

// Function Atlas.AtlasPlayerController.UpdateRotation
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AAtlasPlayerController::UpdateRotation ( float DeltaTime )
{
	static UFunction* pFnUpdateRotation = NULL;

	if ( ! pFnUpdateRotation )
		pFnUpdateRotation = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.UpdateRotation" );

	AAtlasPlayerController_execUpdateRotation_Parms UpdateRotation_Parms;
	UpdateRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateRotation, &UpdateRotation_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AAtlasPlayerController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.InitInputSystem" );

	AAtlasPlayerController_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AAtlasPlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.PostBeginPlay" );

	AAtlasPlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.SetFishingOn
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          NewRange                       ( CPF_Parm )

void AAtlasPlayerController::eventSetFishingOn ( float NewRange )
{
	static UFunction* pFnSetFishingOn = NULL;

	if ( ! pFnSetFishingOn )
		pFnSetFishingOn = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.SetFishingOn" );

	AAtlasPlayerController_eventSetFishingOn_Parms SetFishingOn_Parms;
	SetFishingOn_Parms.NewRange = NewRange;

	this->ProcessEvent ( pFnSetFishingOn, &SetFishingOn_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.StartDelayTimer
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Why                            ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// float                          Time                           ( CPF_OptionalParm | CPF_Parm )

void AAtlasPlayerController::eventStartDelayTimer ( struct FString Why, float Time )
{
	static UFunction* pFnStartDelayTimer = NULL;

	if ( ! pFnStartDelayTimer )
		pFnStartDelayTimer = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.StartDelayTimer" );

	AAtlasPlayerController_eventStartDelayTimer_Parms StartDelayTimer_Parms;
	memcpy ( &StartDelayTimer_Parms.Why, &Why, 0xC );
	StartDelayTimer_Parms.Time = Time;

	this->ProcessEvent ( pFnStartDelayTimer, &StartDelayTimer_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ExitCombatMode
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AAtlasPlayerController::eventExitCombatMode ( )
{
	static UFunction* pFnExitCombatMode = NULL;

	if ( ! pFnExitCombatMode )
		pFnExitCombatMode = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ExitCombatMode" );

	AAtlasPlayerController_eventExitCombatMode_Parms ExitCombatMode_Parms;

	this->ProcessEvent ( pFnExitCombatMode, &ExitCombatMode_Parms, NULL );
};

// Function Atlas.AtlasPlayerController.ClientAvatarUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FPointer                pClient                        ( CPF_Parm )
// struct FPointer                pAvatar                        ( CPF_Parm )
// TArray< struct FPointer >      tParams                        ( CPF_Parm | CPF_NeedCtorLink )

void AAtlasPlayerController::ClientAvatarUpdated ( struct FPointer pClient, struct FPointer pAvatar, TArray< struct FPointer > tParams )
{
	static UFunction* pFnClientAvatarUpdated = NULL;

	if ( ! pFnClientAvatarUpdated )
		pFnClientAvatarUpdated = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerController.ClientAvatarUpdated" );

	AAtlasPlayerController_execClientAvatarUpdated_Parms ClientAvatarUpdated_Parms;
	memcpy ( &ClientAvatarUpdated_Parms.pClient, &pClient, 0x4 );
	memcpy ( &ClientAvatarUpdated_Parms.pAvatar, &pAvatar, 0x4 );
	memcpy ( &ClientAvatarUpdated_Parms.tParams, &tParams, 0xC );

	pFnClientAvatarUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientAvatarUpdated, &ClientAvatarUpdated_Parms, NULL );

	pFnClientAvatarUpdated->FunctionFlags |= 0x400;
};

// Function Atlas.AtlasPlayerInput.RightMouseButtonReleased
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAtlasPlayerInput::eventRightMouseButtonReleased ( )
{
	static UFunction* pFnRightMouseButtonReleased = NULL;

	if ( ! pFnRightMouseButtonReleased )
		pFnRightMouseButtonReleased = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.RightMouseButtonReleased" );

	UAtlasPlayerInput_eventRightMouseButtonReleased_Parms RightMouseButtonReleased_Parms;

	this->ProcessEvent ( pFnRightMouseButtonReleased, &RightMouseButtonReleased_Parms, NULL );
};

// Function Atlas.AtlasPlayerInput.LeftMouseButtonReleased
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UAtlasPlayerInput::eventLeftMouseButtonReleased ( )
{
	static UFunction* pFnLeftMouseButtonReleased = NULL;

	if ( ! pFnLeftMouseButtonReleased )
		pFnLeftMouseButtonReleased = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.LeftMouseButtonReleased" );

	UAtlasPlayerInput_eventLeftMouseButtonReleased_Parms LeftMouseButtonReleased_Parms;

	this->ProcessEvent ( pFnLeftMouseButtonReleased, &LeftMouseButtonReleased_Parms, NULL );
};

// Function Atlas.AtlasPlayerInput.RightMouseButtonPressed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAtlasPlayerInput::eventRightMouseButtonPressed ( )
{
	static UFunction* pFnRightMouseButtonPressed = NULL;

	if ( ! pFnRightMouseButtonPressed )
		pFnRightMouseButtonPressed = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.RightMouseButtonPressed" );

	UAtlasPlayerInput_eventRightMouseButtonPressed_Parms RightMouseButtonPressed_Parms;

	this->ProcessEvent ( pFnRightMouseButtonPressed, &RightMouseButtonPressed_Parms, NULL );
};

// Function Atlas.AtlasPlayerInput.LeftMouseButtonPressed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAtlasPlayerInput::eventLeftMouseButtonPressed ( )
{
	static UFunction* pFnLeftMouseButtonPressed = NULL;

	if ( ! pFnLeftMouseButtonPressed )
		pFnLeftMouseButtonPressed = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.LeftMouseButtonPressed" );

	UAtlasPlayerInput_eventLeftMouseButtonPressed_Parms LeftMouseButtonPressed_Parms;

	this->ProcessEvent ( pFnLeftMouseButtonPressed, &LeftMouseButtonPressed_Parms, NULL );
};

// Function Atlas.AtlasPlayerInput.PlayerInput
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UAtlasPlayerInput::eventPlayerInput ( float DeltaTime )
{
	static UFunction* pFnPlayerInput = NULL;

	if ( ! pFnPlayerInput )
		pFnPlayerInput = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.PlayerInput" );

	UAtlasPlayerInput_eventPlayerInput_Parms PlayerInput_Parms;
	PlayerInput_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerInput, &PlayerInput_Parms, NULL );
};

// Function Atlas.AtlasPlayerInput.HasLookInput
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UAtlasPlayerInput::HasLookInput ( )
{
	static UFunction* pFnHasLookInput = NULL;

	if ( ! pFnHasLookInput )
		pFnHasLookInput = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.HasLookInput" );

	UAtlasPlayerInput_execHasLookInput_Parms HasLookInput_Parms;

	this->ProcessEvent ( pFnHasLookInput, &HasLookInput_Parms, NULL );

	return HasLookInput_Parms.ReturnValue;
};

// Function Atlas.AtlasPlayerInput.HasMoveInput
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UAtlasPlayerInput::HasMoveInput ( )
{
	static UFunction* pFnHasMoveInput = NULL;

	if ( ! pFnHasMoveInput )
		pFnHasMoveInput = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerInput.HasMoveInput" );

	UAtlasPlayerInput_execHasMoveInput_Parms HasMoveInput_Parms;

	this->ProcessEvent ( pFnHasMoveInput, &HasMoveInput_Parms, NULL );

	return HasMoveInput_Parms.ReturnValue;
};

// Function Atlas.AtlasGameInfo.LocalDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AAtlasGameInfo::LocalDebug ( )
{
	static UFunction* pFnLocalDebug = NULL;

	if ( ! pFnLocalDebug )
		pFnLocalDebug = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.LocalDebug" );

	AAtlasGameInfo_execLocalDebug_Parms LocalDebug_Parms;

	this->ProcessEvent ( pFnLocalDebug, &LocalDebug_Parms, NULL );
};

// Function Atlas.AtlasGameInfo.ClearLoadingScreen
// [0x00020002] 
// Parameters infos:

void AAtlasGameInfo::ClearLoadingScreen ( )
{
	static UFunction* pFnClearLoadingScreen = NULL;

	if ( ! pFnClearLoadingScreen )
		pFnClearLoadingScreen = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.ClearLoadingScreen" );

	AAtlasGameInfo_execClearLoadingScreen_Parms ClearLoadingScreen_Parms;

	this->ProcessEvent ( pFnClearLoadingScreen, &ClearLoadingScreen_Parms, NULL );
};

// Function Atlas.AtlasGameInfo.SpawnDefaultPawnAt
// [0x00820002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             NewPlayer                      ( CPF_Parm )
// struct FVector                 SpawnLoc                       ( CPF_Parm )
// struct FRotator                SpawnRot                       ( CPF_Parm )

class APawn* AAtlasGameInfo::SpawnDefaultPawnAt ( class AController* NewPlayer, struct FVector SpawnLoc, struct FRotator SpawnRot )
{
	static UFunction* pFnSpawnDefaultPawnAt = NULL;

	if ( ! pFnSpawnDefaultPawnAt )
		pFnSpawnDefaultPawnAt = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.SpawnDefaultPawnAt" );

	AAtlasGameInfo_execSpawnDefaultPawnAt_Parms SpawnDefaultPawnAt_Parms;
	SpawnDefaultPawnAt_Parms.NewPlayer = NewPlayer;
	memcpy ( &SpawnDefaultPawnAt_Parms.SpawnLoc, &SpawnLoc, 0xC );
	memcpy ( &SpawnDefaultPawnAt_Parms.SpawnRot, &SpawnRot, 0xC );

	this->ProcessEvent ( pFnSpawnDefaultPawnAt, &SpawnDefaultPawnAt_Parms, NULL );

	return SpawnDefaultPawnAt_Parms.ReturnValue;
};

// Function Atlas.AtlasGameInfo.RestartPlayer
// [0x00820002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AAtlasGameInfo::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.RestartPlayer" );

	AAtlasGameInfo_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function Atlas.AtlasGameInfo.PostCommitMapChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AAtlasGameInfo::eventPostCommitMapChange ( )
{
	static UFunction* pFnPostCommitMapChange = NULL;

	if ( ! pFnPostCommitMapChange )
		pFnPostCommitMapChange = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.PostCommitMapChange" );

	AAtlasGameInfo_eventPostCommitMapChange_Parms PostCommitMapChange_Parms;

	this->ProcessEvent ( pFnPostCommitMapChange, &PostCommitMapChange_Parms, NULL );
};

// Function Atlas.AtlasGameInfo.InitGame
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AAtlasGameInfo::eventInitGame ( struct FString Options, struct FString* ErrorMessage )
{
	static UFunction* pFnInitGame = NULL;

	if ( ! pFnInitGame )
		pFnInitGame = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.InitGame" );

	AAtlasGameInfo_eventInitGame_Parms InitGame_Parms;
	memcpy ( &InitGame_Parms.Options, &Options, 0xC );

	this->ProcessEvent ( pFnInitGame, &InitGame_Parms, NULL );

	if ( ErrorMessage )
		memcpy ( ErrorMessage, &InitGame_Parms.ErrorMessage, 0xC );
};

// Function Atlas.AtlasGameInfo.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AAtlasGameInfo::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = UObject::FindObject<UFunction> ( "Function Atlas.AtlasGameInfo.PreBeginPlay" );

	AAtlasGameInfo_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function Atlas.AtlasPlayerCamera.ZoomOut
// [0x00020002] 
// Parameters infos:

void AAtlasPlayerCamera::ZoomOut ( )
{
	static UFunction* pFnZoomOut = NULL;

	if ( ! pFnZoomOut )
		pFnZoomOut = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerCamera.ZoomOut" );

	AAtlasPlayerCamera_execZoomOut_Parms ZoomOut_Parms;

	this->ProcessEvent ( pFnZoomOut, &ZoomOut_Parms, NULL );
};

// Function Atlas.AtlasPlayerCamera.ZoomIn
// [0x00020002] 
// Parameters infos:

void AAtlasPlayerCamera::ZoomIn ( )
{
	static UFunction* pFnZoomIn = NULL;

	if ( ! pFnZoomIn )
		pFnZoomIn = UObject::FindObject<UFunction> ( "Function Atlas.AtlasPlayerCamera.ZoomIn" );

	AAtlasPlayerCamera_execZoomIn_Parms ZoomIn_Parms;

	this->ProcessEvent ( pFnZoomIn, &ZoomIn_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_ActionBar.UpdatePage
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_ActionBar::UpdatePage ( )
{
	static UFunction* pFnUpdatePage = NULL;

	if ( ! pFnUpdatePage )
		pFnUpdatePage = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.UpdatePage" );

	UUIScene_Atlas_ActionBar_execUpdatePage_Parms UpdatePage_Parms;

	this->ProcessEvent ( pFnUpdatePage, &UpdatePage_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_ActionBar.OnSlotDragDrop
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Target                         ( CPF_Parm )
// class UUIScreenObject*         Source                         ( CPF_Parm )

bool UUIScene_Atlas_ActionBar::OnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source )
{
	static UFunction* pFnOnSlotDragDrop = NULL;

	if ( ! pFnOnSlotDragDrop )
		pFnOnSlotDragDrop = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.OnSlotDragDrop" );

	UUIScene_Atlas_ActionBar_execOnSlotDragDrop_Parms OnSlotDragDrop_Parms;
	OnSlotDragDrop_Parms.Target = Target;
	OnSlotDragDrop_Parms.Source = Source;

	this->ProcessEvent ( pFnOnSlotDragDrop, &OnSlotDragDrop_Parms, NULL );

	return OnSlotDragDrop_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_ActionBar.OnSlotClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_ActionBar::OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnSlotClicked = NULL;

	if ( ! pFnOnSlotClicked )
		pFnOnSlotClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.OnSlotClicked" );

	UUIScene_Atlas_ActionBar_execOnSlotClicked_Parms OnSlotClicked_Parms;
	OnSlotClicked_Parms.EventObject = EventObject;
	OnSlotClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnSlotClicked, &OnSlotClicked_Parms, NULL );

	return OnSlotClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_ActionBar.OnActionButtonDragBegin
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         Source                         ( CPF_Parm )

bool UUIScene_Atlas_ActionBar::OnActionButtonDragBegin ( class UUIScreenObject* Source )
{
	static UFunction* pFnOnActionButtonDragBegin = NULL;

	if ( ! pFnOnActionButtonDragBegin )
		pFnOnActionButtonDragBegin = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.OnActionButtonDragBegin" );

	UUIScene_Atlas_ActionBar_execOnActionButtonDragBegin_Parms OnActionButtonDragBegin_Parms;
	OnActionButtonDragBegin_Parms.Source = Source;

	this->ProcessEvent ( pFnOnActionButtonDragBegin, &OnActionButtonDragBegin_Parms, NULL );

	return OnActionButtonDragBegin_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_ActionBar.OnActionButtonClicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_ActionBar::OnActionButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnActionButtonClicked = NULL;

	if ( ! pFnOnActionButtonClicked )
		pFnOnActionButtonClicked = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.OnActionButtonClicked" );

	UUIScene_Atlas_ActionBar_execOnActionButtonClicked_Parms OnActionButtonClicked_Parms;
	OnActionButtonClicked_Parms.EventObject = EventObject;
	OnActionButtonClicked_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnActionButtonClicked, &OnActionButtonClicked_Parms, NULL );

	return OnActionButtonClicked_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_ActionBar.ItemListChanged
// [0x00020002] 
// Parameters infos:
// TArray< struct FString >       ItemData                       ( CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_ActionBar::ItemListChanged ( TArray< struct FString > ItemData )
{
	static UFunction* pFnItemListChanged = NULL;

	if ( ! pFnItemListChanged )
		pFnItemListChanged = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.ItemListChanged" );

	UUIScene_Atlas_ActionBar_execItemListChanged_Parms ItemListChanged_Parms;
	memcpy ( &ItemListChanged_Parms.ItemData, &ItemData, 0xC );

	this->ProcessEvent ( pFnItemListChanged, &ItemListChanged_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_ActionBar.SceneDeactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_ActionBar::eventSceneDeactivated ( )
{
	static UFunction* pFnSceneDeactivated = NULL;

	if ( ! pFnSceneDeactivated )
		pFnSceneDeactivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.SceneDeactivated" );

	UUIScene_Atlas_ActionBar_eventSceneDeactivated_Parms SceneDeactivated_Parms;

	this->ProcessEvent ( pFnSceneDeactivated, &SceneDeactivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_ActionBar.SceneActivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInitialActivation             ( CPF_Parm )

void UUIScene_Atlas_ActionBar::eventSceneActivated ( unsigned long bInitialActivation )
{
	static UFunction* pFnSceneActivated = NULL;

	if ( ! pFnSceneActivated )
		pFnSceneActivated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.SceneActivated" );

	UUIScene_Atlas_ActionBar_eventSceneActivated_Parms SceneActivated_Parms;
	SceneActivated_Parms.bInitialActivation = bInitialActivation;

	this->ProcessEvent ( pFnSceneActivated, &SceneActivated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_ActionBar.FadeIn
// [0x00020002] 
// Parameters infos:
// unsigned long                  bResetOpacity                  ( CPF_Parm )

void UUIScene_Atlas_ActionBar::FadeIn ( unsigned long bResetOpacity )
{
	static UFunction* pFnFadeIn = NULL;

	if ( ! pFnFadeIn )
		pFnFadeIn = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.FadeIn" );

	UUIScene_Atlas_ActionBar_execFadeIn_Parms FadeIn_Parms;
	FadeIn_Parms.bResetOpacity = bResetOpacity;

	this->ProcessEvent ( pFnFadeIn, &FadeIn_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_ActionBar.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_ActionBar::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_ActionBar.InitScene" );

	UUIScene_Atlas_ActionBar_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.UpdateScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UUIScene_Atlas_Chat::eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.UpdateScene" );

	UUIScene_Atlas_Chat_eventUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.DeltaTime = DeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.CancelTyping
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_Chat::CancelTyping ( )
{
	static UFunction* pFnCancelTyping = NULL;

	if ( ! pFnCancelTyping )
		pFnCancelTyping = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.CancelTyping" );

	UUIScene_Atlas_Chat_execCancelTyping_Parms CancelTyping_Parms;

	this->ProcessEvent ( pFnCancelTyping, &CancelTyping_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.StartTyping
// [0x00024002] 
// Parameters infos:
// struct FString                 InValue                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InTextType                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_Chat::StartTyping ( struct FString InValue, struct FString InTextType )
{
	static UFunction* pFnStartTyping = NULL;

	if ( ! pFnStartTyping )
		pFnStartTyping = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.StartTyping" );

	UUIScene_Atlas_Chat_execStartTyping_Parms StartTyping_Parms;
	memcpy ( &StartTyping_Parms.InValue, &InValue, 0xC );
	memcpy ( &StartTyping_Parms.InTextType, &InTextType, 0xC );

	this->ProcessEvent ( pFnStartTyping, &StartTyping_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.SetTextColorByType
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InTextType                     ( CPF_Parm | CPF_NeedCtorLink )

bool UUIScene_Atlas_Chat::SetTextColorByType ( struct FString InTextType )
{
	static UFunction* pFnSetTextColorByType = NULL;

	if ( ! pFnSetTextColorByType )
		pFnSetTextColorByType = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.SetTextColorByType" );

	UUIScene_Atlas_Chat_execSetTextColorByType_Parms SetTextColorByType_Parms;
	memcpy ( &SetTextColorByType_Parms.InTextType, &InTextType, 0xC );

	this->ProcessEvent ( pFnSetTextColorByType, &SetTextColorByType_Parms, NULL );

	return SetTextColorByType_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Chat.GetTextColorCode
// [0x00820002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UUIScene_Atlas_Chat::GetTextColorCode ( )
{
	static UFunction* pFnGetTextColorCode = NULL;

	if ( ! pFnGetTextColorCode )
		pFnGetTextColorCode = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.GetTextColorCode" );

	UUIScene_Atlas_Chat_execGetTextColorCode_Parms GetTextColorCode_Parms;

	this->ProcessEvent ( pFnGetTextColorCode, &GetTextColorCode_Parms, NULL );

	return GetTextColorCode_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Chat.SendEvent
// [0x00024002] 
// Parameters infos:
// struct FName                   InEvent                        ( CPF_Parm )
// struct FString                 InType                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InMsg                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_Chat::SendEvent ( struct FName InEvent, struct FString InType, struct FString InMsg )
{
	static UFunction* pFnSendEvent = NULL;

	if ( ! pFnSendEvent )
		pFnSendEvent = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.SendEvent" );

	UUIScene_Atlas_Chat_execSendEvent_Parms SendEvent_Parms;
	memcpy ( &SendEvent_Parms.InEvent, &InEvent, 0x8 );
	memcpy ( &SendEvent_Parms.InType, &InType, 0xC );
	memcpy ( &SendEvent_Parms.InMsg, &InMsg, 0xC );

	this->ProcessEvent ( pFnSendEvent, &SendEvent_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.OutputTextLine
// [0x00024002] 
// Parameters infos:
// struct FString                 InText                         ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 InTextType                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_Chat::OutputTextLine ( struct FString InText, struct FString InTextType )
{
	static UFunction* pFnOutputTextLine = NULL;

	if ( ! pFnOutputTextLine )
		pFnOutputTextLine = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.OutputTextLine" );

	UUIScene_Atlas_Chat_execOutputTextLine_Parms OutputTextLine_Parms;
	memcpy ( &OutputTextLine_Parms.InText, &InText, 0xC );
	memcpy ( &OutputTextLine_Parms.InTextType, &InTextType, 0xC );

	this->ProcessEvent ( pFnOutputTextLine, &OutputTextLine_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.OnChatSubmitText
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIEditBox*              Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UUIScene_Atlas_Chat::OnChatSubmitText ( class UUIEditBox* Sender, int PlayerIndex )
{
	static UFunction* pFnOnChatSubmitText = NULL;

	if ( ! pFnOnChatSubmitText )
		pFnOnChatSubmitText = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.OnChatSubmitText" );

	UUIScene_Atlas_Chat_execOnChatSubmitText_Parms OnChatSubmitText_Parms;
	OnChatSubmitText_Parms.Sender = Sender;
	OnChatSubmitText_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnChatSubmitText, &OnChatSubmitText_Parms, NULL );

	return OnChatSubmitText_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Chat.OnChatRawInputKey
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UUIScene_Atlas_Chat::OnChatRawInputKey ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnChatRawInputKey = NULL;

	if ( ! pFnOnChatRawInputKey )
		pFnOnChatRawInputKey = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.OnChatRawInputKey" );

	UUIScene_Atlas_Chat_execOnChatRawInputKey_Parms OnChatRawInputKey_Parms;

	this->ProcessEvent ( pFnOnChatRawInputKey, &OnChatRawInputKey_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &OnChatRawInputKey_Parms.EventParms, 0x20 );

	return OnChatRawInputKey_Parms.ReturnValue;
};

// Function Atlas.UIScene_Atlas_Chat.HandleInputText
// [0x00020002] 
// Parameters infos:
// struct FString                 InText                         ( CPF_Parm | CPF_NeedCtorLink )

void UUIScene_Atlas_Chat::HandleInputText ( struct FString InText )
{
	static UFunction* pFnHandleInputText = NULL;

	if ( ! pFnHandleInputText )
		pFnHandleInputText = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.HandleInputText" );

	UUIScene_Atlas_Chat_execHandleInputText_Parms HandleInputText_Parms;
	memcpy ( &HandleInputText_Parms.InText, &InText, 0xC );

	this->ProcessEvent ( pFnHandleInputText, &HandleInputText_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.ChatClientRegionCalculated
// [0x00020002] 
// Parameters infos:

void UUIScene_Atlas_Chat::ChatClientRegionCalculated ( )
{
	static UFunction* pFnChatClientRegionCalculated = NULL;

	if ( ! pFnChatClientRegionCalculated )
		pFnChatClientRegionCalculated = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.ChatClientRegionCalculated" );

	UUIScene_Atlas_Chat_execChatClientRegionCalculated_Parms ChatClientRegionCalculated_Parms;

	this->ProcessEvent ( pFnChatClientRegionCalculated, &ChatClientRegionCalculated_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Chat.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_Chat::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Chat.InitScene" );

	UUIScene_Atlas_Chat_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_HotkeyBar.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_HotkeyBar::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_HotkeyBar.InitScene" );

	UUIScene_Atlas_HotkeyBar_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function Atlas.UIScene_Atlas_Status.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIScene_Atlas_Status::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = UObject::FindObject<UFunction> ( "Function Atlas.UIScene_Atlas_Status.InitScene" );

	UUIScene_Atlas_Status_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif