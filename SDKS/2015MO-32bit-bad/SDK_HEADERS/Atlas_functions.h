/*
#############################################################################################
# Mortal Online (Unknown) SDK
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
		pFnResetDefaults = (UFunction*) UObject::GObjObjects()->Data[ 44292 ];

	UAtlasBoundsShape_eventResetDefaults_Parms ResetDefaults_Parms;

	this->ProcessEvent ( pFnResetDefaults, &ResetDefaults_Parms, NULL );
};

// Function Atlas.AtlasHUD.OpenUI
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class UAtlasAvatarComponent*   InNpcComp                      ( CPF_Parm | CPF_EditInline )
// TArray< struct FString >       InKeys                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       InValues                       ( CPF_Parm | CPF_NeedCtorLink )

void AAtlasHUD::eventOpenUI ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues )
{
	static UFunction* pFnOpenUI = NULL;

	if ( ! pFnOpenUI )
		pFnOpenUI = (UFunction*) UObject::GObjObjects()->Data[ 44336 ];

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
		pFnDrawEngineHUD = (UFunction*) UObject::GObjObjects()->Data[ 44335 ];

	AAtlasHUD_execDrawEngineHUD_Parms DrawEngineHUD_Parms;

	this->ProcessEvent ( pFnDrawEngineHUD, &DrawEngineHUD_Parms, NULL );
};

// Function Atlas.AtlasHUD.PostBeginPlay
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AAtlasHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44334 ];

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
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 44372 ];

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
		pFnGetDefaultCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 44369 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44367 ];

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
		pFnGetAvatarID = (UFunction*) UObject::GObjObjects()->Data[ 44365 ];

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

struct FString AAtlasPawn::GetAtlasName ( )
{
	static UFunction* pFnGetAtlasName = NULL;

	if ( ! pFnGetAtlasName )
		pFnGetAtlasName = (UFunction*) UObject::GObjObjects()->Data[ 44363 ];

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
		pFnAtlasUnSelect = (UFunction*) UObject::GObjObjects()->Data[ 44361 ];

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
		pFnAtlasSelect = (UFunction*) UObject::GObjObjects()->Data[ 44359 ];

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
		pFnAtlasUse = (UFunction*) UObject::GObjObjects()->Data[ 44356 ];

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
		pFnIsTarget = (UFunction*) UObject::GObjObjects()->Data[ 44354 ];

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
		pFnSetServerTarget = (UFunction*) UObject::GObjObjects()->Data[ 44353 ];

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
		pFnGetAtlasComponent = (UFunction*) UObject::GObjObjects()->Data[ 44351 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44480 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 44485 ];

	AAtlasProjectileAvatar_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.DrawDebugLineColor
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 vStart                         ( CPF_Parm )
// struct FVector                 vEnd                           ( CPF_Parm )
// int                            R                              ( CPF_Parm )
// int                            G                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

void UOnlineSubsystemAtlas::eventDrawDebugLineColor ( struct FVector vStart, struct FVector vEnd, int R, int G, int B )
{
	static UFunction* pFnDrawDebugLineColor = NULL;

	if ( ! pFnDrawDebugLineColor )
		pFnDrawDebugLineColor = (UFunction*) UObject::GObjObjects()->Data[ 45478 ];

	UOnlineSubsystemAtlas_eventDrawDebugLineColor_Parms DrawDebugLineColor_Parms;
	memcpy ( &DrawDebugLineColor_Parms.vStart, &vStart, 0xC );
	memcpy ( &DrawDebugLineColor_Parms.vEnd, &vEnd, 0xC );
	DrawDebugLineColor_Parms.R = R;
	DrawDebugLineColor_Parms.G = G;
	DrawDebugLineColor_Parms.B = B;

	this->ProcessEvent ( pFnDrawDebugLineColor, &DrawDebugLineColor_Parms, NULL );
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
		pFnDrawDebugLine = (UFunction*) UObject::GObjObjects()->Data[ 45475 ];

	UOnlineSubsystemAtlas_eventDrawDebugLine_Parms DrawDebugLine_Parms;
	memcpy ( &DrawDebugLine_Parms.vStart, &vStart, 0xC );
	memcpy ( &DrawDebugLine_Parms.vEnd, &vEnd, 0xC );

	this->ProcessEvent ( pFnDrawDebugLine, &DrawDebugLine_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddQosStatusChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         QosStatusChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate )
{
	static UFunction* pFnAddQosStatusChangedDelegate = NULL;

	if ( ! pFnAddQosStatusChangedDelegate )
		pFnAddQosStatusChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45473 ];

	UOnlineSubsystemAtlas_execAddQosStatusChangedDelegate_Parms AddQosStatusChangedDelegate_Parms;
	memcpy ( &AddQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, &QosStatusChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearQosStatusChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         QosStatusChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate )
{
	static UFunction* pFnClearQosStatusChangedDelegate = NULL;

	if ( ! pFnClearQosStatusChangedDelegate )
		pFnClearQosStatusChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45471 ];

	UOnlineSubsystemAtlas_execClearQosStatusChangedDelegate_Parms ClearQosStatusChangedDelegate_Parms;
	memcpy ( &ClearQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, &QosStatusChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.RegisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRegisterPlayers = NULL;

	if ( ! pFnRegisterPlayers )
		pFnRegisterPlayers = (UFunction*) UObject::GObjObjects()->Data[ 45466 ];

	UOnlineSubsystemAtlas_execRegisterPlayers_Parms RegisterPlayers_Parms;
	memcpy ( &RegisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterPlayers, &RegisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RegisterPlayers_Parms.Players, 0xC );

	return RegisterPlayers_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.UnregisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemAtlas::UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnUnregisterPlayers = NULL;

	if ( ! pFnUnregisterPlayers )
		pFnUnregisterPlayers = (UFunction*) UObject::GObjObjects()->Data[ 45461 ];

	UOnlineSubsystemAtlas_execUnregisterPlayers_Parms UnregisterPlayers_Parms;
	memcpy ( &UnregisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayers, &UnregisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &UnregisterPlayers_Parms.Players, 0xC );

	return UnregisterPlayers_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate )
{
	static UFunction* pFnClearRecalculateSkillRatingCompleteDelegate = NULL;

	if ( ! pFnClearRecalculateSkillRatingCompleteDelegate )
		pFnClearRecalculateSkillRatingCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45459 ];

	UOnlineSubsystemAtlas_execClearRecalculateSkillRatingCompleteDelegate_Parms ClearRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy ( &ClearRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingGameCompleteDelegate, &RecalculateSkillRatingGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingCompleteDelegate )
{
	static UFunction* pFnAddRecalculateSkillRatingCompleteDelegate = NULL;

	if ( ! pFnAddRecalculateSkillRatingCompleteDelegate )
		pFnAddRecalculateSkillRatingCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45457 ];

	UOnlineSubsystemAtlas_execAddRecalculateSkillRatingCompleteDelegate_Parms AddRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy ( &AddRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingCompleteDelegate, &RecalculateSkillRatingCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.MigrateOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemAtlas::MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName )
{
	static UFunction* pFnMigrateOnlineGame = NULL;

	if ( ! pFnMigrateOnlineGame )
		pFnMigrateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45453 ];

	UOnlineSubsystemAtlas_execMigrateOnlineGame_Parms MigrateOnlineGame_Parms;
	MigrateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &MigrateOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnMigrateOnlineGame, &MigrateOnlineGame_Parms, NULL );

	return MigrateOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddMigrateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddMigrateOnlineGameCompleteDelegate )
		pFnAddMigrateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45451 ];

	UOnlineSubsystemAtlas_execAddMigrateOnlineGameCompleteDelegate_Parms AddMigrateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, &MigrateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearMigrateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearMigrateOnlineGameCompleteDelegate )
		pFnClearMigrateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45449 ];

	UOnlineSubsystemAtlas_execClearMigrateOnlineGameCompleteDelegate_Parms ClearMigrateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, &MigrateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.JoinMigratedOnlineGame
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemAtlas::JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinMigratedOnlineGame = NULL;

	if ( ! pFnJoinMigratedOnlineGame )
		pFnJoinMigratedOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45444 ];

	UOnlineSubsystemAtlas_execJoinMigratedOnlineGame_Parms JoinMigratedOnlineGame_Parms;
	JoinMigratedOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinMigratedOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinMigratedOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinMigratedOnlineGame_Parms.ReturnValue;
};

// Function Atlas.OnlineSubsystemAtlas.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::AddJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinMigratedOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinMigratedOnlineGameCompleteDelegate )
		pFnAddJoinMigratedOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45442 ];

	UOnlineSubsystemAtlas_execAddJoinMigratedOnlineGameCompleteDelegate_Parms AddJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, &JoinMigratedOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemAtlas::ClearJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinMigratedOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinMigratedOnlineGameCompleteDelegate )
		pFnClearJoinMigratedOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45440 ];

	UOnlineSubsystemAtlas_execClearJoinMigratedOnlineGameCompleteDelegate_Parms ClearJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, &JoinMigratedOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnQosStatusChanged
// [0x00120000] 
// Parameters infos:
// int                            NumComplete                    ( CPF_Parm )
// int                            NumTotal                       ( CPF_Parm )

void UOnlineSubsystemAtlas::OnQosStatusChanged ( int NumComplete, int NumTotal )
{
	static UFunction* pFnOnQosStatusChanged = NULL;

	if ( ! pFnOnQosStatusChanged )
		pFnOnQosStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 44539 ];

	UOnlineSubsystemAtlas_execOnQosStatusChanged_Parms OnQosStatusChanged_Parms;
	OnQosStatusChanged_Parms.NumComplete = NumComplete;
	OnQosStatusChanged_Parms.NumTotal = NumTotal;

	this->ProcessEvent ( pFnOnQosStatusChanged, &OnQosStatusChanged_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnRecalculateSkillRatingComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnRecalculateSkillRatingComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRecalculateSkillRatingComplete = NULL;

	if ( ! pFnOnRecalculateSkillRatingComplete )
		pFnOnRecalculateSkillRatingComplete = (UFunction*) UObject::GObjObjects()->Data[ 44541 ];

	UOnlineSubsystemAtlas_execOnRecalculateSkillRatingComplete_Parms OnRecalculateSkillRatingComplete_Parms;
	memcpy ( &OnRecalculateSkillRatingComplete_Parms.SessionName, &SessionName, 0x8 );
	OnRecalculateSkillRatingComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnJoinMigratedOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinMigratedOnlineGameComplete = NULL;

	if ( ! pFnOnJoinMigratedOnlineGameComplete )
		pFnOnJoinMigratedOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44543 ];

	UOnlineSubsystemAtlas_execOnJoinMigratedOnlineGameComplete_Parms OnJoinMigratedOnlineGameComplete_Parms;
	memcpy ( &OnJoinMigratedOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinMigratedOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnOnlineGameComplete = NULL;

	if ( ! pFnOnOnlineGameComplete )
		pFnOnOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44545 ];

	UOnlineSubsystemAtlas_execOnOnlineGameComplete_Parms OnOnlineGameComplete_Parms;
	memcpy ( &OnOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnOnlineGameComplete, &OnOnlineGameComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnMigrateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemAtlas::OnMigrateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnMigrateOnlineGameComplete = NULL;

	if ( ! pFnOnMigrateOnlineGameComplete )
		pFnOnMigrateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44547 ];

	UOnlineSubsystemAtlas_execOnMigrateOnlineGameComplete_Parms OnMigrateOnlineGameComplete_Parms;
	memcpy ( &OnMigrateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnMigrateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Parms, NULL );
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
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 45424 ];

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
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45421 ];

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
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45418 ];

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
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 44549 ];

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
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 45411 ];

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
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45408 ];

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
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45405 ];

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
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 44551 ];

	UOnlineSubsystemAtlas_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.UnlockAchievement
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )
// float                          PercentComplete                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 45399 ];

	UOnlineSubsystemAtlas_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;
	UnlockAchievement_Parms.PercentComplete = PercentComplete;

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
		pFnGetPersistentData_Rotator = (UFunction*) UObject::GObjObjects()->Data[ 45396 ];

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
		pFnGetPersistentData_Vector = (UFunction*) UObject::GObjObjects()->Data[ 45393 ];

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
		pFnBindPlayerPawn = (UFunction*) UObject::GObjObjects()->Data[ 45391 ];

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
		pFnAddDefaultInventory = (UFunction*) UObject::GObjObjects()->Data[ 45389 ];

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
		pFnAnnounceHostReady = (UFunction*) UObject::GObjObjects()->Data[ 45388 ];

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
		pFnRecalculateSkillRating = (UFunction*) UObject::GObjObjects()->Data[ 45383 ];

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
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 45379 ];

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
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45376 ];

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
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45373 ];

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
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 44553 ];

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
		pFnWriteArbitrationData = (UFunction*) UObject::GObjObjects()->Data[ 45370 ];

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
		pFnGetArbitratedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 45366 ];

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
		pFnClearArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45364 ];

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
		pFnAddArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45362 ];

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
		pFnOnArbitrationRegistrationComplete = (UFunction*) UObject::GObjObjects()->Data[ 44555 ];

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
		pFnRegisterForArbitration = (UFunction*) UObject::GObjObjects()->Data[ 45357 ];

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
		pFnGetOnlineGameState = (UFunction*) UObject::GObjObjects()->Data[ 45355 ];

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
		pFnClearEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45353 ];

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
		pFnAddEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45351 ];

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
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44557 ];

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
		pFnEndOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45346 ];

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
		pFnClearStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45344 ];

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
		pFnAddStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45342 ];

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
		pFnOnStartOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44559 ];

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
		pFnStartOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45337 ];

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
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45335 ];

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
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45333 ];

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
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 44561 ];

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
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45326 ];

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
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45324 ];

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
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45322 ];

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
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 44563 ];

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
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45314 ];

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
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->Data[ 45310 ];

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
		pFnClearJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45308 ];

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
		pFnAddJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45306 ];

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
		pFnOnJoinOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44565 ];

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
		pFnJoinOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45299 ];

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
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 45295 ];

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
		pFnFreeSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 45292 ];

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
		pFnGetGameSearch = (UFunction*) UObject::GObjObjects()->Data[ 45290 ];

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
		pFnBindPlatformSpecificSessionToSearch = (UFunction*) UObject::GObjObjects()->Data[ 45285 ];

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
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*) UObject::GObjObjects()->Data[ 45281 ];

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
		pFnReadPlatformSpecificSessionInfo = (UFunction*) UObject::GObjObjects()->Data[ 45277 ];

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
		pFnClearCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45275 ];

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
		pFnAddCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45273 ];

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
		pFnOnCancelFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 44567 ];

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
		pFnCancelFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 45270 ];

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
		pFnClearFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45268 ];

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
		pFnAddFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45266 ];

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
		pFnOnFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 44569 ];

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
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 45261 ];

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
		pFnClearDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45259 ];

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
		pFnAddDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45257 ];

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
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44571 ];

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
		pFnDestroyOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45252 ];

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
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 45249 ];

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
		pFnClearUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45247 ];

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
		pFnAddUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45245 ];

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
		pFnOnUpdateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44573 ];

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
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45238 ];

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
		pFnClearCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45236 ];

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
		pFnAddCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45234 ];

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
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44575 ];

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
		pFnCreateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 45227 ];

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
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 45223 ];

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
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45220 ];

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
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45217 ];

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
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 44577 ];

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
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 45209 ];

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
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45207 ];

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
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45205 ];

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
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44579 ];

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
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 45200 ];

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
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45197 ];

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
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45194 ];

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
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 44581 ];

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
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 45186 ];

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
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 45181 ];

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
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 45176 ];

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
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45173 ];

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
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45170 ];

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
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 44583 ];

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
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 45162 ];

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
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 45158 ];

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
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 45154 ];

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
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45151 ];

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
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45148 ];

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
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 44585 ];

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
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 45142 ];

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
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 45137 ];

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
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 45134 ];

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
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45132 ];

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
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45130 ];

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
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 44587 ];

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
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 45120 ];

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
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 45113 ];

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
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 45106 ];

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
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45103 ];

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
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45100 ];

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
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 44589 ];

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
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 45094 ];

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
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45091 ];

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
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45088 ];

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
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 44591 ];

	UOnlineSubsystemAtlas_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 45081 ];

	UOnlineSubsystemAtlas_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

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
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 45078 ];

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
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45075 ];

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
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45072 ];

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
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 44593 ];

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
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 45065 ];

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
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45062 ];

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
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45059 ];

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
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 44595 ];

	UOnlineSubsystemAtlas_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemAtlas::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 45052 ];

	UOnlineSubsystemAtlas_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

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
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45049 ];

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
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45046 ];

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
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 44597 ];

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
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 45040 ];

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
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 45037 ];

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
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45034 ];

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
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45031 ];

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
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 44599 ];

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
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 45025 ];

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
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45022 ];

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
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45019 ];

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
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45017 ];

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
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45015 ];

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
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45013 ];

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
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45011 ];

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
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45008 ];

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
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45005 ];

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
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 44601 ];

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
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45001 ];

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
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44999 ];

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
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 44996 ];

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
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 44992 ];

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
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 44987 ];

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
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 44983 ];

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
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 44980 ];

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
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 44977 ];

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
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 44974 ];

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
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 44971 ];

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
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 44968 ];

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
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 44965 ];

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
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 44962 ];

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
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 44959 ];

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
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 44956 ];

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
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 44952 ];

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
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 44949 ];

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
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44946 ];

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
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44943 ];

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
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 44603 ];

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
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 44939 ];

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
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44936 ];

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
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44933 ];

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
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 44605 ];

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
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 44929 ];

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
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 44923 ];

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
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 44920 ];

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
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 44607 ];

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
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 44609 ];

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
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 44611 ];

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
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 44613 ];

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
		pFnGetSkillIsActive = (UFunction*) UObject::GObjObjects()->Data[ 44916 ];

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
		pFnGetSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 44913 ];

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
		pFnGetSkillGroup = (UFunction*) UObject::GObjObjects()->Data[ 44910 ];

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
		pFnGetSkillContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44907 ];

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
		pFnGetSkillName = (UFunction*) UObject::GObjObjects()->Data[ 44904 ];

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
		pFnGetNumSkills = (UFunction*) UObject::GObjObjects()->Data[ 44902 ];

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
		pFnPickupSkill = (UFunction*) UObject::GObjObjects()->Data[ 44900 ];

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
		pFnGetSkillOpenInterface = (UFunction*) UObject::GObjObjects()->Data[ 44895 ];

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
		pFnGetSkillTargetRequierment = (UFunction*) UObject::GObjObjects()->Data[ 44892 ];

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
		pFnGetSkillTargetTypeID = (UFunction*) UObject::GObjObjects()->Data[ 44889 ];

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
		pFnGetVendorCompactGuid = (UFunction*) UObject::GObjObjects()->Data[ 44886 ];

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
		pFnGetInventoryItemName = (UFunction*) UObject::GObjObjects()->Data[ 44882 ];

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
		pFnGetPickedInventorySlot = (UFunction*) UObject::GObjObjects()->Data[ 44880 ];

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
		pFnGetPickedContentInfoActionBar = (UFunction*) UObject::GObjObjects()->Data[ 44878 ];

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
		pFnServerMove = (UFunction*) UObject::GObjObjects()->Data[ 44871 ];

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
		pFnDualServerMove = (UFunction*) UObject::GObjObjects()->Data[ 44860 ];

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
		pFnOldServerMove = (UFunction*) UObject::GObjObjects()->Data[ 44854 ];

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
		pFnProcessCommand = (UFunction*) UObject::GObjObjects()->Data[ 44852 ];

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
		pFnVendorBuy = (UFunction*) UObject::GObjObjects()->Data[ 44849 ];

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
		pFnVendorBrowse = (UFunction*) UObject::GObjObjects()->Data[ 44847 ];

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
		pFnTargetSet = (UFunction*) UObject::GObjObjects()->Data[ 44845 ];

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
		pFnQuestStartRequest = (UFunction*) UObject::GObjObjects()->Data[ 44842 ];

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
		pFnQuestReturn = (UFunction*) UObject::GObjObjects()->Data[ 44839 ];

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
		pFnAvatarUse = (UFunction*) UObject::GObjObjects()->Data[ 44837 ];

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
		pFnUseInventoryItem = (UFunction*) UObject::GObjObjects()->Data[ 44834 ];

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
		pFnUnEquipSlotItem = (UFunction*) UObject::GObjObjects()->Data[ 44832 ];

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
		pFnTakeLootItem = (UFunction*) UObject::GObjObjects()->Data[ 44830 ];

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
		pFnPlacePickedInInventory = (UFunction*) UObject::GObjObjects()->Data[ 44827 ];

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
		pFnPlacePickedInEquipSlot = (UFunction*) UObject::GObjObjects()->Data[ 44825 ];

	UOnlineSubsystemAtlas_execPlacePickedInEquipSlot_Parms PlacePickedInEquipSlot_Parms;
	memcpy ( &PlacePickedInEquipSlot_Parms.sEquipSlot, &sEquipSlot, 0xC );

	pFnPlacePickedInEquipSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlacePickedInEquipSlot, &PlacePickedInEquipSlot_Parms, NULL );

	pFnPlacePickedInEquipSlot->FunctionFlags |= 0x400;
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
		pFnPickupInventoryItem = (UFunction*) UObject::GObjObjects()->Data[ 44822 ];

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
		pFnPickupEquipedItem = (UFunction*) UObject::GObjObjects()->Data[ 44820 ];

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
		pFnPickupActionBar = (UFunction*) UObject::GObjObjects()->Data[ 44818 ];

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
		pFnGetPickedContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44478 ];

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
		pFnGetVendorNumItems = (UFunction*) UObject::GObjObjects()->Data[ 44816 ];

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
		pFnGetLootNumItems = (UFunction*) UObject::GObjObjects()->Data[ 44814 ];

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
// int                            ItemQuantity                   ( CPF_Parm | CPF_OutParm )
// struct FString                 ItemName                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            MaxQuantity                    ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetVendorContentInfo ( int iSlot, class UContentInfo** Int, int* ItemCost, int* ItemQuantity, struct FString* ItemName, int* MaxQuantity )
{
	static UFunction* pFnGetVendorContentInfo = NULL;

	if ( ! pFnGetVendorContentInfo )
		pFnGetVendorContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44807 ];

	UOnlineSubsystemAtlas_execGetVendorContentInfo_Parms GetVendorContentInfo_Parms;
	GetVendorContentInfo_Parms.iSlot = iSlot;

	pFnGetVendorContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVendorContentInfo, &GetVendorContentInfo_Parms, NULL );

	pFnGetVendorContentInfo->FunctionFlags |= 0x400;

	if ( Int )
		*Int = GetVendorContentInfo_Parms.Int;

	if ( ItemCost )
		*ItemCost = GetVendorContentInfo_Parms.ItemCost;

	if ( ItemQuantity )
		*ItemQuantity = GetVendorContentInfo_Parms.ItemQuantity;

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
		pFnGetQuestPlayerStatus = (UFunction*) UObject::GObjObjects()->Data[ 44803 ];

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
		pFnGetQuestDisplayName = (UFunction*) UObject::GObjObjects()->Data[ 44800 ];

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
		pFnGetQuestName = (UFunction*) UObject::GObjObjects()->Data[ 44797 ];

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
		pFnGetQuestInfo = (UFunction*) UObject::GObjObjects()->Data[ 44790 ];

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
// int                            ItemQuantity                   ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetLootContentInfo ( int iSlot, class UContentInfo** Info, struct FString* LootName, int* ItemQuantity )
{
	static UFunction* pFnGetLootContentInfo = NULL;

	if ( ! pFnGetLootContentInfo )
		pFnGetLootContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44785 ];

	UOnlineSubsystemAtlas_execGetLootContentInfo_Parms GetLootContentInfo_Parms;
	GetLootContentInfo_Parms.iSlot = iSlot;

	pFnGetLootContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLootContentInfo, &GetLootContentInfo_Parms, NULL );

	pFnGetLootContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetLootContentInfo_Parms.Info;

	if ( LootName )
		memcpy ( LootName, &GetLootContentInfo_Parms.LootName, 0xC );

	if ( ItemQuantity )
		*ItemQuantity = GetLootContentInfo_Parms.ItemQuantity;
};

// Function Atlas.OnlineSubsystemAtlas.GetInventoryContentInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            iBag                           ( CPF_Parm )
// int                            iSlot                          ( CPF_Parm )
// class UContentInfo*            Info                           ( CPF_Parm | CPF_OutParm )
// int                            itemValue                      ( CPF_Parm | CPF_OutParm )
// int                            ItemQuantity                   ( CPF_Parm | CPF_OutParm )
// unsigned char                  bLocked                        ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemAtlas::GetInventoryContentInfo ( int iBag, int iSlot, class UContentInfo** Info, int* itemValue, int* ItemQuantity, unsigned char* bLocked )
{
	static UFunction* pFnGetInventoryContentInfo = NULL;

	if ( ! pFnGetInventoryContentInfo )
		pFnGetInventoryContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44778 ];

	UOnlineSubsystemAtlas_execGetInventoryContentInfo_Parms GetInventoryContentInfo_Parms;
	GetInventoryContentInfo_Parms.iBag = iBag;
	GetInventoryContentInfo_Parms.iSlot = iSlot;

	pFnGetInventoryContentInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInventoryContentInfo, &GetInventoryContentInfo_Parms, NULL );

	pFnGetInventoryContentInfo->FunctionFlags |= 0x400;

	if ( Info )
		*Info = GetInventoryContentInfo_Parms.Info;

	if ( itemValue )
		*itemValue = GetInventoryContentInfo_Parms.itemValue;

	if ( ItemQuantity )
		*ItemQuantity = GetInventoryContentInfo_Parms.ItemQuantity;

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
		pFnGetEquipSlotContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44773 ];

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
		pFnGetActionBarContentInfo = (UFunction*) UObject::GObjObjects()->Data[ 44770 ];

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
		pFnGetPlayerName = (UFunction*) UObject::GObjObjects()->Data[ 44767 ];

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
		pFnGetInspectedPlayer = (UFunction*) UObject::GObjObjects()->Data[ 44765 ];

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
		pFnDestroyPickedItem = (UFunction*) UObject::GObjObjects()->Data[ 44763 ];

	UOnlineSubsystemAtlas_execDestroyPickedItem_Parms DestroyPickedItem_Parms;
	DestroyPickedItem_Parms.iQuantity = iQuantity;

	pFnDestroyPickedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyPickedItem, &DestroyPickedItem_Parms, NULL );

	pFnDestroyPickedItem->FunctionFlags |= 0x400;
};

// Function Atlas.OnlineSubsystemAtlas.CloseVendorSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemAtlas::CloseVendorSession ( )
{
	static UFunction* pFnCloseVendorSession = NULL;

	if ( ! pFnCloseVendorSession )
		pFnCloseVendorSession = (UFunction*) UObject::GObjObjects()->Data[ 44762 ];

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
		pFnGetVendorComponent = (UFunction*) UObject::GObjObjects()->Data[ 44760 ];

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
		pFnGetTargetComponent = (UFunction*) UObject::GObjObjects()->Data[ 44758 ];

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
		pFnGetCredits = (UFunction*) UObject::GObjObjects()->Data[ 44756 ];

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
		pFnUpdateAvatar = (UFunction*) UObject::GObjObjects()->Data[ 44755 ];

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
		pFnJoinGame = (UFunction*) UObject::GObjObjects()->Data[ 44753 ];

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
		pFnCreateGame = (UFunction*) UObject::GObjObjects()->Data[ 44752 ];

	UOnlineSubsystemAtlas_execCreateGame_Parms CreateGame_Parms;

	pFnCreateGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateGame, &CreateGame_Parms, NULL );

	pFnCreateGame->FunctionFlags |= 0x400;
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
		pFnAtlasLogin = (UFunction*) UObject::GObjObjects()->Data[ 44748 ];

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
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 44746 ];

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
		pFnQueryPlayerInt = (UFunction*) UObject::GObjObjects()->Data[ 44742 ];

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
		pFnClearClientAvatarListUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44739 ];

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
		pFnAddQuickbarUpdateFunction = (UFunction*) UObject::GObjObjects()->Data[ 44737 ];

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
		pFnQuickbarUpdate = (UFunction*) UObject::GObjObjects()->Data[ 44615 ];

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
		pFnAddClientLoginCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44735 ];

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
		pFnAddClientAvatarListUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44733 ];

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
		pFnOnClientAvatarListUpdated = (UFunction*) UObject::GObjObjects()->Data[ 44520 ];

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
		pFnClearClientAvatarUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44729 ];

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
		pFnAddClientAvatarUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44727 ];

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
		pFnOnClientAvatarUpdated = (UFunction*) UObject::GObjObjects()->Data[ 44517 ];

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
		pFnClearHouseTradeListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44720 ];

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
		pFnAddHouseTradeListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44718 ];

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
		pFnOnHouseTradeListChanged = (UFunction*) UObject::GObjObjects()->Data[ 44532 ];

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
		pFnClearWorldObjectTradeListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44715 ];

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
		pFnAddWorldObjectTradeListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44713 ];

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
		pFnOnWorldObjectTradeListChanged = (UFunction*) UObject::GObjObjects()->Data[ 44535 ];

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
		pFnClearVendorListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44710 ];

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
		pFnAddVendorListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44708 ];

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
		pFnOnVendorListChanged = (UFunction*) UObject::GObjObjects()->Data[ 44514 ];

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
		pFnClearLootListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44705 ];

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
		pFnAddLootListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44703 ];

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
		pFnOnLootListChanged = (UFunction*) UObject::GObjObjects()->Data[ 44511 ];

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
		pFnClearEquipmentChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44700 ];

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
		pFnAddEquipmentChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44698 ];

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
		pFnOnEquipmentChanged = (UFunction*) UObject::GObjObjects()->Data[ 44508 ];

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
		pFnClearSkillListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44695 ];

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
		pFnAddSkillListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44693 ];

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
		pFnOnSkillListChanged = (UFunction*) UObject::GObjObjects()->Data[ 44505 ];

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
		pFnClearItemListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44690 ];

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
		pFnAddItemListChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44688 ];

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
		pFnOnItemListChanged = (UFunction*) UObject::GObjObjects()->Data[ 44502 ];

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
		pFnClearClientLoginCompleteDelegateByIndex = (UFunction*) UObject::GObjObjects()->Data[ 44684 ];

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
		pFnClearClientLoginCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44681 ];

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
		pFnOnClientLoginComplete = (UFunction*) UObject::GObjObjects()->Data[ 44499 ];

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
		pFnClearClientNoShardDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44677 ];

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
		pFnAddClientNoShardDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44675 ];

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
		pFnOnClientNoShard = (UFunction*) UObject::GObjObjects()->Data[ 44526 ];

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
		pFnClearClientVersionMissmatchDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44672 ];

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
		pFnAddClientVersionMissmatchDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44670 ];

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
		pFnOnClientVersionMissmatch = (UFunction*) UObject::GObjObjects()->Data[ 44523 ];

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
		pFnClearClientConnectCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44667 ];

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
		pFnAddClientConnectCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44665 ];

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
		pFnOnClientConnectComplete = (UFunction*) UObject::GObjObjects()->Data[ 44496 ];

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
		pFnOnLogOutput = (UFunction*) UObject::GObjObjects()->Data[ 44661 ];

	UOnlineSubsystemAtlas_eventOnLogOutput_Parms OnLogOutput_Parms;
	memcpy ( &OnLogOutput_Parms.logEvent, &logEvent, 0x8 );
	memcpy ( &OnLogOutput_Parms.strOutput, &strOutput, 0xC );

	this->ProcessEvent ( pFnOnLogOutput, &OnLogOutput_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.OnClientLoginServDown
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemAtlas::OnClientLoginServDown ( )
{
	static UFunction* pFnOnClientLoginServDown = NULL;

	if ( ! pFnOnClientLoginServDown )
		pFnOnClientLoginServDown = (UFunction*) UObject::GObjObjects()->Data[ 44529 ];

	UOnlineSubsystemAtlas_execOnClientLoginServDown_Parms OnClientLoginServDown_Parms;

	this->ProcessEvent ( pFnOnClientLoginServDown, &OnClientLoginServDown_Parms, NULL );
};

// Function Atlas.OnlineSubsystemAtlas.GetBookInfoString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemAtlas::GetBookInfoString ( )
{
	static UFunction* pFnGetBookInfoString = NULL;

	if ( ! pFnGetBookInfoString )
		pFnGetBookInfoString = (UFunction*) UObject::GObjObjects()->Data[ 44659 ];

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
		pFnUpdateCharacterList = (UFunction*) UObject::GObjObjects()->Data[ 44657 ];

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
		pFnAddPetInfo = (UFunction*) UObject::GObjObjects()->Data[ 44649 ];

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
		pFnAddPylonInfo = (UFunction*) UObject::GObjObjects()->Data[ 44637 ];

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

// Function Atlas.AtlasAvatarComponent.TraceFromLeftSocket
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UAtlasAvatarComponent::TraceFromLeftSocket ( )
{
	static UFunction* pFnTraceFromLeftSocket = NULL;

	if ( ! pFnTraceFromLeftSocket )
		pFnTraceFromLeftSocket = (UFunction*) UObject::GObjObjects()->Data[ 44281 ];

	UAtlasAvatarComponent_execTraceFromLeftSocket_Parms TraceFromLeftSocket_Parms;

	pFnTraceFromLeftSocket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTraceFromLeftSocket, &TraceFromLeftSocket_Parms, NULL );

	pFnTraceFromLeftSocket->FunctionFlags |= 0x400;

	return TraceFromLeftSocket_Parms.ReturnValue;
};

// Function Atlas.AtlasAvatarComponent.TellBehavior
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 BehaviorCmd                    ( CPF_Parm | CPF_NeedCtorLink )

void UAtlasAvatarComponent::TellBehavior ( struct FString BehaviorCmd )
{
	static UFunction* pFnTellBehavior = NULL;

	if ( ! pFnTellBehavior )
		pFnTellBehavior = (UFunction*) UObject::GObjObjects()->Data[ 44279 ];

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
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 44459 ];

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
		pFnTempMarker = (UFunction*) UObject::GObjObjects()->Data[ 44454 ];

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
		pFnListMarker = (UFunction*) UObject::GObjObjects()->Data[ 44453 ];

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
		pFnGotoMarker = (UFunction*) UObject::GObjObjects()->Data[ 44450 ];

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
		pFnSetPos = (UFunction*) UObject::GObjObjects()->Data[ 44445 ];

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
		pFnActionBarSlotgugu = (UFunction*) UObject::GObjObjects()->Data[ 44443 ];

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
		pFnToggleUI = (UFunction*) UObject::GObjObjects()->Data[ 44442 ];

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
		pFnClusterCom = (UFunction*) UObject::GObjObjects()->Data[ 44440 ];

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
		pFnZoomIn = (UFunction*) UObject::GObjObjects()->Data[ 44439 ];

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
		pFnPickViewportActor = (UFunction*) UObject::GObjObjects()->Data[ 44437 ];

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
		pFnClearPickedActors = (UFunction*) UObject::GObjObjects()->Data[ 44436 ];

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
		pFnCallServerMove = (UFunction*) UObject::GObjObjects()->Data[ 44424 ];

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
		pFnShouldReplicateMove = (UFunction*) UObject::GObjObjects()->Data[ 44422 ];

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
		pFnUpdateRotation = (UFunction*) UObject::GObjObjects()->Data[ 44414 ];

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
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44413 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44411 ];

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
		pFnSetFishingOn = (UFunction*) UObject::GObjObjects()->Data[ 44409 ];

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
		pFnStartDelayTimer = (UFunction*) UObject::GObjObjects()->Data[ 44406 ];

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
		pFnExitCombatMode = (UFunction*) UObject::GObjObjects()->Data[ 44405 ];

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
		pFnClientAvatarUpdated = (UFunction*) UObject::GObjObjects()->Data[ 44400 ];

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
		pFnRightMouseButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 44475 ];

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
		pFnLeftMouseButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 44474 ];

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
		pFnRightMouseButtonPressed = (UFunction*) UObject::GObjObjects()->Data[ 44473 ];

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
		pFnLeftMouseButtonPressed = (UFunction*) UObject::GObjObjects()->Data[ 44472 ];

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
		pFnPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 44470 ];

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
		pFnHasLookInput = (UFunction*) UObject::GObjObjects()->Data[ 44468 ];

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
		pFnHasMoveInput = (UFunction*) UObject::GObjObjects()->Data[ 44466 ];

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
		pFnLocalDebug = (UFunction*) UObject::GObjObjects()->Data[ 44326 ];

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
		pFnClearLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 44318 ];

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
		pFnSpawnDefaultPawnAt = (UFunction*) UObject::GObjObjects()->Data[ 44310 ];

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
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 44302 ];

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
		pFnPostCommitMapChange = (UFunction*) UObject::GObjObjects()->Data[ 44301 ];

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
		pFnInitGame = (UFunction*) UObject::GObjObjects()->Data[ 44298 ];

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
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44297 ];

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
		pFnZoomOut = (UFunction*) UObject::GObjObjects()->Data[ 44386 ];

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
		pFnZoomIn = (UFunction*) UObject::GObjObjects()->Data[ 44385 ];

	AAtlasPlayerCamera_execZoomIn_Parms ZoomIn_Parms;

	this->ProcessEvent ( pFnZoomIn, &ZoomIn_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif