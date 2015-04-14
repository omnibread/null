/*
#############################################################################################
# Mortal Online (1.71.00.04) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameAIController::eventGetActionString ( )
{
	static UFunction* pFnGetActionString = NULL;

	if ( ! pFnGetActionString )
		pFnGetActionString = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.GetActionString" );

	AGameAIController_eventGetActionString_Parms GetActionString_Parms;

	this->ProcessEvent ( pFnGetActionString, &GetActionString_Parms, NULL );

	return GetActionString_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.GeneratePathToLocation
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::eventGeneratePathToLocation ( struct FVector Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToLocation = NULL;

	if ( ! pFnGeneratePathToLocation )
		pFnGeneratePathToLocation = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.GeneratePathToLocation" );

	AGameAIController_eventGeneratePathToLocation_Parms GeneratePathToLocation_Parms;
	memcpy ( &GeneratePathToLocation_Parms.Goal, &Goal, 0xC );
	GeneratePathToLocation_Parms.WithinDistance = WithinDistance;
	GeneratePathToLocation_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToLocation, &GeneratePathToLocation_Parms, NULL );

	return GeneratePathToLocation_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.GeneratePathToActor
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.GeneratePathToActor" );

	AGameAIController_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
// Parameters infos:
// struct FRotator                TargetDesiredRotation          ( CPF_Parm )
// unsigned long                  InLockDesiredRotation          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  InUnlockWhenReached            ( CPF_OptionalParm | CPF_Parm )
// float                          InterpolationTime              ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime )
{
	static UFunction* pFnSetDesiredRotation = NULL;

	if ( ! pFnSetDesiredRotation )
		pFnSetDesiredRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.SetDesiredRotation" );

	AGameAIController_execSetDesiredRotation_Parms SetDesiredRotation_Parms;
	memcpy ( &SetDesiredRotation_Parms.TargetDesiredRotation, &TargetDesiredRotation, 0xC );
	SetDesiredRotation_Parms.InLockDesiredRotation = InLockDesiredRotation;
	SetDesiredRotation_Parms.InUnlockWhenReached = InUnlockWhenReached;
	SetDesiredRotation_Parms.InterpolationTime = InterpolationTime;

	this->ProcessEvent ( pFnSetDesiredRotation, &SetDesiredRotation_Parms, NULL );
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   LogCategory                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce )
{
	static UFunction* pFnAILog_Internal = NULL;

	if ( ! pFnAILog_Internal )
		pFnAILog_Internal = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.AILog_Internal" );

	AGameAIController_eventAILog_Internal_Parms AILog_Internal_Parms;
	memcpy ( &AILog_Internal_Parms.LogText, &LogText, 0xC );
	memcpy ( &AILog_Internal_Parms.LogCategory, &LogCategory, 0x8 );
	AILog_Internal_Parms.bForce = bForce;

	this->ProcessEvent ( pFnAILog_Internal, &AILog_Internal_Parms, NULL );
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AGameAIController::RecordDemoAILog ( struct FString LogText )
{
	static UFunction* pFnRecordDemoAILog = NULL;

	if ( ! pFnRecordDemoAILog )
		pFnRecordDemoAILog = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.RecordDemoAILog" );

	AGameAIController_execRecordDemoAILog_Parms RecordDemoAILog_Parms;
	memcpy ( &RecordDemoAILog_Parms.LogText, &LogText, 0xC );

	this->ProcessEvent ( pFnRecordDemoAILog, &RecordDemoAILog_Parms, NULL );
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameAIController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.Destroyed" );

	AGameAIController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  InClass                        ( CPF_Const | CPF_Parm )

class UGameAICommand* AGameAIController::GetAICommandInStack ( class UClass* InClass )
{
	static UFunction* pFnGetAICommandInStack = NULL;

	if ( ! pFnGetAICommandInStack )
		pFnGetAICommandInStack = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.GetAICommandInStack" );

	AGameAIController_execGetAICommandInStack_Parms GetAICommandInStack_Parms;
	GetAICommandInStack_Parms.InClass = InClass;

	pFnGetAICommandInStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAICommandInStack, &GetAICommandInStack_Parms, NULL );

	pFnGetAICommandInStack->FunctionFlags |= 0x400;

	return GetAICommandInStack_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  SearchClass                    ( CPF_Parm )

class UGameAICommand* AGameAIController::FindCommandOfClass ( class UClass* SearchClass )
{
	static UFunction* pFnFindCommandOfClass = NULL;

	if ( ! pFnFindCommandOfClass )
		pFnFindCommandOfClass = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.FindCommandOfClass" );

	AGameAIController_execFindCommandOfClass_Parms FindCommandOfClass_Parms;
	FindCommandOfClass_Parms.SearchClass = SearchClass;

	pFnFindCommandOfClass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindCommandOfClass, &FindCommandOfClass_Parms, NULL );

	pFnFindCommandOfClass->FunctionFlags |= 0x400;

	return FindCommandOfClass_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::DumpCommandStack ( )
{
	static UFunction* pFnDumpCommandStack = NULL;

	if ( ! pFnDumpCommandStack )
		pFnDumpCommandStack = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.DumpCommandStack" );

	AGameAIController_execDumpCommandStack_Parms DumpCommandStack_Parms;

	pFnDumpCommandStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpCommandStack, &DumpCommandStack_Parms, NULL );

	pFnDumpCommandStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::CheckCommandCount ( )
{
	static UFunction* pFnCheckCommandCount = NULL;

	if ( ! pFnCheckCommandCount )
		pFnCheckCommandCount = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.CheckCommandCount" );

	AGameAIController_execCheckCommandCount_Parms CheckCommandCount_Parms;

	pFnCheckCommandCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckCommandCount, &CheckCommandCount_Parms, NULL );

	pFnCheckCommandCount->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameAICommand* AGameAIController::GetActiveCommand ( )
{
	static UFunction* pFnGetActiveCommand = NULL;

	if ( ! pFnGetActiveCommand )
		pFnGetActiveCommand = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.GetActiveCommand" );

	AGameAIController_execGetActiveCommand_Parms GetActiveCommand_Parms;

	pFnGetActiveCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActiveCommand, &GetActiveCommand_Parms, NULL );

	pFnGetActiveCommand->FunctionFlags |= 0x400;

	return GetActiveCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGameAICommand*          AbortCmd                       ( CPF_Parm )
// class UClass*                  AbortClass                     ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass )
{
	static UFunction* pFnAbortCommand = NULL;

	if ( ! pFnAbortCommand )
		pFnAbortCommand = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.AbortCommand" );

	AGameAIController_execAbortCommand_Parms AbortCommand_Parms;
	AbortCommand_Parms.AbortCmd = AbortCmd;
	AbortCommand_Parms.AbortClass = AbortClass;

	pFnAbortCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbortCommand, &AbortCommand_Parms, NULL );

	pFnAbortCommand->FunctionFlags |= 0x400;

	return AbortCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ToBePoppedCommand              ( CPF_Parm )

void AGameAIController::PopCommand ( class UGameAICommand* ToBePoppedCommand )
{
	static UFunction* pFnPopCommand = NULL;

	if ( ! pFnPopCommand )
		pFnPopCommand = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.PopCommand" );

	AGameAIController_execPopCommand_Parms PopCommand_Parms;
	PopCommand_Parms.ToBePoppedCommand = ToBePoppedCommand;

	pFnPopCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopCommand, &PopCommand_Parms, NULL );

	pFnPopCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void AGameAIController::PushCommand ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPushCommand = NULL;

	if ( ! pFnPushCommand )
		pFnPushCommand = UObject::FindObject<UFunction> ( "Function GameFramework.GameAIController.PushCommand" );

	AGameAIController_execPushCommand_Parms PushCommand_Parms;
	PushCommand_Parms.NewCommand = NewCommand;

	pFnPushCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushCommand, &PushCommand_Parms, NULL );

	pFnPushCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// TArray< struct FString >       OutText                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameAICommand::GetDebugOverheadText ( class APlayerController* PC, TArray< struct FString >* OutText )
{
	static UFunction* pFnGetDebugOverheadText = NULL;

	if ( ! pFnGetDebugOverheadText )
		pFnGetDebugOverheadText = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.GetDebugOverheadText" );

	UGameAICommand_execGetDebugOverheadText_Parms GetDebugOverheadText_Parms;
	GetDebugOverheadText_Parms.PC = PC;

	this->ProcessEvent ( pFnGetDebugOverheadText, &GetDebugOverheadText_Parms, NULL );

	if ( OutText )
		memcpy ( OutText, &GetDebugOverheadText_Parms.OutText, 0xC );
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )
// struct FName                   Category                       ( CPF_Parm )

void UGameAICommand::eventDrawDebug ( class AHUD* H, struct FName Category )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.DrawDebug" );

	UGameAICommand_eventDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.H = H;
	memcpy ( &DrawDebug_Parms.Category, &Category, 0x8 );

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameAICommand::eventGetDumpString ( )
{
	static UFunction* pFnGetDumpString = NULL;

	if ( ! pFnGetDumpString )
		pFnGetDumpString = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.GetDumpString" );

	UGameAICommand_eventGetDumpString_Parms GetDumpString_Parms;

	this->ProcessEvent ( pFnGetDumpString, &GetDumpString_Parms, NULL );

	return GetDumpString_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::Resumed ( struct FName OldCommandName )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.Resumed" );

	UGameAICommand_execResumed_Parms Resumed_Parms;
	memcpy ( &Resumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnResumed, &Resumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::Paused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPaused = NULL;

	if ( ! pFnPaused )
		pFnPaused = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.Paused" );

	UGameAICommand_execPaused_Parms Paused_Parms;
	Paused_Parms.NewCommand = NewCommand;

	this->ProcessEvent ( pFnPaused, &Paused_Parms, NULL );
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.Popped" );

	UGameAICommand_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.Pushed" );

	UGameAICommand_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
// Parameters infos:

void UGameAICommand::PostPopped ( )
{
	static UFunction* pFnPostPopped = NULL;

	if ( ! pFnPostPopped )
		pFnPostPopped = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.PostPopped" );

	UGameAICommand_execPostPopped_Parms PostPopped_Parms;

	this->ProcessEvent ( pFnPostPopped, &PostPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::PrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnPrePushed = NULL;

	if ( ! pFnPrePushed )
		pFnPrePushed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.PrePushed" );

	UGameAICommand_execPrePushed_Parms PrePushed_Parms;
	PrePushed_Parms.AI = AI;

	this->ProcessEvent ( pFnPrePushed, &PrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   StateName                      ( CPF_Parm )

bool UGameAICommand::AllowStateTransitionTo ( struct FName StateName )
{
	static UFunction* pFnAllowStateTransitionTo = NULL;

	if ( ! pFnAllowStateTransitionTo )
		pFnAllowStateTransitionTo = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.AllowStateTransitionTo" );

	UGameAICommand_execAllowStateTransitionTo_Parms AllowStateTransitionTo_Parms;
	memcpy ( &AllowStateTransitionTo_Parms.StateName, &StateName, 0x8 );

	this->ProcessEvent ( pFnAllowStateTransitionTo, &AllowStateTransitionTo_Parms, NULL );

	return AllowStateTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  AttemptCommand                 ( CPF_Parm )

bool UGameAICommand::AllowTransitionTo ( class UClass* AttemptCommand )
{
	static UFunction* pFnAllowTransitionTo = NULL;

	if ( ! pFnAllowTransitionTo )
		pFnAllowTransitionTo = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.AllowTransitionTo" );

	UGameAICommand_execAllowTransitionTo_Parms AllowTransitionTo_Parms;
	AllowTransitionTo_Parms.AttemptCommand = AttemptCommand;

	this->ProcessEvent ( pFnAllowTransitionTo, &AllowTransitionTo_Parms, NULL );

	return AllowTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.Tick" );

	UGameAICommand_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICommand::ShouldIgnoreNotifies ( )
{
	static UFunction* pFnShouldIgnoreNotifies = NULL;

	if ( ! pFnShouldIgnoreNotifies )
		pFnShouldIgnoreNotifies = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.ShouldIgnoreNotifies" );

	UGameAICommand_execShouldIgnoreNotifies_Parms ShouldIgnoreNotifies_Parms;

	pFnShouldIgnoreNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Parms, NULL );

	pFnShouldIgnoreNotifies->FunctionFlags |= 0x400;

	return ShouldIgnoreNotifies_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::eventInternalTick ( float DeltaTime )
{
	static UFunction* pFnInternalTick = NULL;

	if ( ! pFnInternalTick )
		pFnInternalTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InternalTick" );

	UGameAICommand_eventInternalTick_Parms InternalTick_Parms;
	InternalTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnInternalTick, &InternalTick_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::eventInternalResumed ( struct FName OldCommandName )
{
	static UFunction* pFnInternalResumed = NULL;

	if ( ! pFnInternalResumed )
		pFnInternalResumed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InternalResumed" );

	UGameAICommand_eventInternalResumed_Parms InternalResumed_Parms;
	memcpy ( &InternalResumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnInternalResumed, &InternalResumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::eventInternalPaused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnInternalPaused = NULL;

	if ( ! pFnInternalPaused )
		pFnInternalPaused = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InternalPaused" );

	UGameAICommand_eventInternalPaused_Parms InternalPaused_Parms;
	InternalPaused_Parms.NewCommand = NewCommand;

	this->ProcessEvent ( pFnInternalPaused, &InternalPaused_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPopped ( )
{
	static UFunction* pFnInternalPopped = NULL;

	if ( ! pFnInternalPopped )
		pFnInternalPopped = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InternalPopped" );

	UGameAICommand_eventInternalPopped_Parms InternalPopped_Parms;

	this->ProcessEvent ( pFnInternalPopped, &InternalPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPushed ( )
{
	static UFunction* pFnInternalPushed = NULL;

	if ( ! pFnInternalPushed )
		pFnInternalPushed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InternalPushed" );

	UGameAICommand_eventInternalPushed_Parms InternalPushed_Parms;

	this->ProcessEvent ( pFnInternalPushed, &InternalPushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::eventInternalPrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnInternalPrePushed = NULL;

	if ( ! pFnInternalPrePushed )
		pFnInternalPrePushed = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InternalPrePushed" );

	UGameAICommand_eventInternalPrePushed_Parms InternalPrePushed_Parms;
	InternalPrePushed_Parms.AI = AI;

	this->ProcessEvent ( pFnInternalPrePushed, &InternalPrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )

bool UGameAICommand::InitCommand ( class AGameAIController* AI )
{
	static UFunction* pFnInitCommand = NULL;

	if ( ! pFnInitCommand )
		pFnInitCommand = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InitCommand" );

	UGameAICommand_execInitCommand_Parms InitCommand_Parms;
	InitCommand_Parms.AI = AI;

	this->ProcessEvent ( pFnInitCommand, &InitCommand_Parms, NULL );

	return InitCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  UserActor                      ( CPF_Parm )

bool UGameAICommand::InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor )
{
	static UFunction* pFnInitCommandUserActor = NULL;

	if ( ! pFnInitCommandUserActor )
		pFnInitCommandUserActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameAICommand.InitCommandUserActor" );

	UGameAICommand_execInitCommandUserActor_Parms InitCommandUserActor_Parms;
	InitCommandUserActor_Parms.AI = AI;
	InitCommandUserActor_Parms.UserActor = UserActor;

	this->ProcessEvent ( pFnInitCommandUserActor, &InitCommandUserActor_Parms, NULL );

	return InitCommandUserActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.GetBehaviorString" );

	AGameCrowdAgent_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetDestString ( )
{
	static UFunction* pFnGetDestString = NULL;

	if ( ! pFnGetDestString )
		pFnGetDestString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.GetDestString" );

	AGameCrowdAgent_execGetDestString_Parms GetDestString_Parms;

	this->ProcessEvent ( pFnGetDestString, &GetDestString_Parms, NULL );

	return GetDestString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.PostRenderFor" );

	AGameCrowdAgent_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.NativePostRenderFor" );

	AGameCrowdAgent_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector AGameCrowdAgent::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.GeneratePathToActor" );

	AGameCrowdAgent_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventInitNavigationHandle ( )
{
	static UFunction* pFnInitNavigationHandle = NULL;

	if ( ! pFnInitNavigationHandle )
		pFnInitNavigationHandle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.InitNavigationHandle" );

	AGameCrowdAgent_eventInitNavigationHandle_Parms InitNavigationHandle_Parms;

	this->ProcessEvent ( pFnInitNavigationHandle, &InitNavigationHandle_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )

void AGameCrowdAgent::eventOverlappedActorEvent ( class AActor* A )
{
	static UFunction* pFnOverlappedActorEvent = NULL;

	if ( ! pFnOverlappedActorEvent )
		pFnOverlappedActorEvent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.OverlappedActorEvent" );

	AGameCrowdAgent_eventOverlappedActorEvent_Parms OverlappedActorEvent_Parms;
	OverlappedActorEvent_Parms.A = A;

	this->ProcessEvent ( pFnOverlappedActorEvent, &OverlappedActorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.TakeDamage" );

	AGameCrowdAgent_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventFireDeathEvent ( )
{
	static UFunction* pFnFireDeathEvent = NULL;

	if ( ! pFnFireDeathEvent )
		pFnFireDeathEvent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.FireDeathEvent" );

	AGameCrowdAgent_eventFireDeathEvent_Parms FireDeathEvent_Parms;

	this->ProcessEvent ( pFnFireDeathEvent, &FireDeathEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgent::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.PlayDeath" );

	AGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  DestinationActor               ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::eventUpdateIntermediatePoint ( class AActor* DestinationActor )
{
	static UFunction* pFnUpdateIntermediatePoint = NULL;

	if ( ! pFnUpdateIntermediatePoint )
		pFnUpdateIntermediatePoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint" );

	AGameCrowdAgent_eventUpdateIntermediatePoint_Parms UpdateIntermediatePoint_Parms;
	UpdateIntermediatePoint_Parms.DestinationActor = DestinationActor;

	this->ProcessEvent ( pFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AGameCrowdAgent::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.CalcCamera" );

	AGameCrowdAgent_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsIdle ( )
{
	static UFunction* pFnIsIdle = NULL;

	if ( ! pFnIsIdle )
		pFnIsIdle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.IsIdle" );

	AGameCrowdAgent_execIsIdle_Parms IsIdle_Parms;

	pFnIsIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsIdle, &IsIdle_Parms, NULL );

	pFnIsIdle->FunctionFlags |= 0x400;

	return IsIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameCrowdAgentBehavior* BehaviorArchetype              ( CPF_Parm )

void AGameCrowdAgent::SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype )
{
	static UFunction* pFnSetCurrentBehavior = NULL;

	if ( ! pFnSetCurrentBehavior )
		pFnSetCurrentBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.SetCurrentBehavior" );

	AGameCrowdAgent_execSetCurrentBehavior_Parms SetCurrentBehavior_Parms;
	SetCurrentBehavior_Parms.BehaviorArchetype = BehaviorArchetype;

	pFnSetCurrentBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentBehavior, &SetCurrentBehavior_Parms, NULL );

	pFnSetCurrentBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.StopBehavior" );

	AGameCrowdAgent_eventStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] 
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorObject              ( CPF_Parm )

void AGameCrowdAgent::ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject )
{
	static UFunction* pFnActivateInstancedBehavior = NULL;

	if ( ! pFnActivateInstancedBehavior )
		pFnActivateInstancedBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior" );

	AGameCrowdAgent_execActivateInstancedBehavior_Parms ActivateInstancedBehavior_Parms;
	ActivateInstancedBehavior_Parms.NewBehaviorObject = NewBehaviorObject;

	this->ProcessEvent ( pFnActivateInstancedBehavior, &ActivateInstancedBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           ( CPF_Parm )

void AGameCrowdAgent::eventActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.ActivateBehavior" );

	AGameCrowdAgent_eventActivateBehavior_Parms ActivateBehavior_Parms;
	ActivateBehavior_Parms.NewBehaviorArchetype = NewBehaviorArchetype;

	this->ProcessEvent ( pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetSeePlayer ( )
{
	static UFunction* pFnResetSeePlayer = NULL;

	if ( ! pFnResetSeePlayer )
		pFnResetSeePlayer = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.ResetSeePlayer" );

	AGameCrowdAgent_execResetSeePlayer_Parms ResetSeePlayer_Parms;

	this->ProcessEvent ( pFnResetSeePlayer, &ResetSeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::TryRandomBehavior ( )
{
	static UFunction* pFnTryRandomBehavior = NULL;

	if ( ! pFnTryRandomBehavior )
		pFnTryRandomBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.TryRandomBehavior" );

	AGameCrowdAgent_execTryRandomBehavior_Parms TryRandomBehavior_Parms;

	this->ProcessEvent ( pFnTryRandomBehavior, &TryRandomBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AGameCrowdAgent::eventNotifySeePlayer ( class APlayerController* PC )
{
	static UFunction* pFnNotifySeePlayer = NULL;

	if ( ! pFnNotifySeePlayer )
		pFnNotifySeePlayer = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.NotifySeePlayer" );

	AGameCrowdAgent_eventNotifySeePlayer_Parms NotifySeePlayer_Parms;
	NotifySeePlayer_Parms.PC = PC;

	this->ProcessEvent ( pFnNotifySeePlayer, &NotifySeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::PlaySpawnBehavior ( )
{
	static UFunction* pFnPlaySpawnBehavior = NULL;

	if ( ! pFnPlaySpawnBehavior )
		pFnPlaySpawnBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.PlaySpawnBehavior" );

	AGameCrowdAgent_execPlaySpawnBehavior_Parms PlaySpawnBehavior_Parms;

	this->ProcessEvent ( pFnPlaySpawnBehavior, &PlaySpawnBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter ( )
{
	static UFunction* pFnHandlePotentialAgentEncounter = NULL;

	if ( ! pFnHandlePotentialAgentEncounter )
		pFnHandlePotentialAgentEncounter = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter" );

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Parms HandlePotentialAgentEncounter_Parms;

	this->ProcessEvent ( pFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.StopIdleAnimation" );

	AGameCrowdAgent_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.PlayIdleAnimation" );

	AGameCrowdAgent_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgent::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation" );

	AGameCrowdAgent_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00820102] 
// Parameters infos:
// class AActor*                  SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )
// float                          AgentWarmupTime                ( CPF_Parm )
// unsigned long                  bWarmupPosition                ( CPF_Parm )
// unsigned long                  bCheckWarmupVisibility         ( CPF_Parm )

void AGameCrowdAgent::InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility )
{
	static UFunction* pFnInitializeAgent = NULL;

	if ( ! pFnInitializeAgent )
		pFnInitializeAgent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.InitializeAgent" );

	AGameCrowdAgent_execInitializeAgent_Parms InitializeAgent_Parms;
	InitializeAgent_Parms.SpawnLoc = SpawnLoc;
	InitializeAgent_Parms.AgentTemplate = AgentTemplate;
	InitializeAgent_Parms.NewGroup = NewGroup;
	InitializeAgent_Parms.AgentWarmupTime = AgentWarmupTime;
	InitializeAgent_Parms.bWarmupPosition = bWarmupPosition;
	InitializeAgent_Parms.bCheckWarmupVisibility = bCheckWarmupVisibility;

	this->ProcessEvent ( pFnInitializeAgent, &InitializeAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgent::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.SetLighting" );

	AGameCrowdAgent_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdAgent::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.DisplayDebug" );

	AGameCrowdAgent_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.Destroyed" );

	AGameCrowdAgent_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetPooledAgent ( )
{
	static UFunction* pFnResetPooledAgent = NULL;

	if ( ! pFnResetPooledAgent )
		pFnResetPooledAgent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.ResetPooledAgent" );

	AGameCrowdAgent_execResetPooledAgent_Parms ResetPooledAgent_Parms;

	this->ProcessEvent ( pFnResetPooledAgent, &ResetPooledAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventKillAgent ( )
{
	static UFunction* pFnKillAgent = NULL;

	if ( ! pFnKillAgent )
		pFnKillAgent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.KillAgent" );

	AGameCrowdAgent_eventKillAgent_Parms KillAgent_Parms;

	this->ProcessEvent ( pFnKillAgent, &KillAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgent::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.PostBeginPlay" );

	AGameCrowdAgent_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::SetMaxSpeed ( )
{
	static UFunction* pFnSetMaxSpeed = NULL;

	if ( ! pFnSetMaxSpeed )
		pFnSetMaxSpeed = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.SetMaxSpeed" );

	AGameCrowdAgent_execSetMaxSpeed_Parms SetMaxSpeed_Parms;

	this->ProcessEvent ( pFnSetMaxSpeed, &SetMaxSpeed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void AGameCrowdAgent::eventSetCurrentDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnSetCurrentDestination = NULL;

	if ( ! pFnSetCurrentDestination )
		pFnSetCurrentDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.SetCurrentDestination" );

	AGameCrowdAgent_eventSetCurrentDestination_Parms SetCurrentDestination_Parms;
	SetCurrentDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnSetCurrentDestination, &SetCurrentDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventWaitForGroupMembers ( )
{
	static UFunction* pFnWaitForGroupMembers = NULL;

	if ( ! pFnWaitForGroupMembers )
		pFnWaitForGroupMembers = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.WaitForGroupMembers" );

	AGameCrowdAgent_eventWaitForGroupMembers_Parms WaitForGroupMembers_Parms;

	this->ProcessEvent ( pFnWaitForGroupMembers, &WaitForGroupMembers_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FBehaviorEntry > BehaviorList                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 BestCameraLoc                  ( CPF_OptionalParm | CPF_Parm )

bool AGameCrowdAgent::PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc )
{
	static UFunction* pFnPickBehaviorFrom = NULL;

	if ( ! pFnPickBehaviorFrom )
		pFnPickBehaviorFrom = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.PickBehaviorFrom" );

	AGameCrowdAgent_execPickBehaviorFrom_Parms PickBehaviorFrom_Parms;
	memcpy ( &PickBehaviorFrom_Parms.BehaviorList, &BehaviorList, 0xC );
	memcpy ( &PickBehaviorFrom_Parms.BestCameraLoc, &BestCameraLoc, 0xC );

	this->ProcessEvent ( pFnPickBehaviorFrom, &PickBehaviorFrom_Parms, NULL );

	return PickBehaviorFrom_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetPanic
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  PanicActor                     ( CPF_Parm )
// unsigned long                  bNewPanic                      ( CPF_Parm )

void AGameCrowdAgent::eventSetPanic ( class AActor* PanicActor, unsigned long bNewPanic )
{
	static UFunction* pFnSetPanic = NULL;

	if ( ! pFnSetPanic )
		pFnSetPanic = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.SetPanic" );

	AGameCrowdAgent_eventSetPanic_Parms SetPanic_Parms;
	SetPanic_Parms.PanicActor = PanicActor;
	SetPanic_Parms.bNewPanic = bNewPanic;

	this->ProcessEvent ( pFnSetPanic, &SetPanic_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsPanicked ( )
{
	static UFunction* pFnIsPanicked = NULL;

	if ( ! pFnIsPanicked )
		pFnIsPanicked = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.IsPanicked" );

	AGameCrowdAgent_execIsPanicked_Parms IsPanicked_Parms;

	pFnIsPanicked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPanicked, &IsPanicked_Parms, NULL );

	pFnIsPanicked->FunctionFlags |= 0x400;

	return IsPanicked_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameCrowdAgent::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgent.FellOutOfWorld" );

	AGameCrowdAgent_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::CreateAttachments ( )
{
	static UFunction* pFnCreateAttachments = NULL;

	if ( ! pFnCreateAttachments )
		pFnCreateAttachments = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments" );

	AGameCrowdAgentSkeletal_execCreateAttachments_Parms CreateAttachments_Parms;

	this->ProcessEvent ( pFnCreateAttachments, &CreateAttachments_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AGameCrowdAgentSkeletal::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd" );

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation" );

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation" );

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation ( )
{
	static UFunction* pFnClearLatentAnimation = NULL;

	if ( ! pFnClearLatentAnimation )
		pFnClearLatentAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation" );

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Parms ClearLatentAnimation_Parms;

	this->ProcessEvent ( pFnClearLatentAnimation, &ClearLatentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation" );

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bRootMotionEnabled             ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetRootMotion ( unsigned long bRootMotionEnabled )
{
	static UFunction* pFnSetRootMotion = NULL;

	if ( ! pFnSetRootMotion )
		pFnSetRootMotion = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion" );

	AGameCrowdAgentSkeletal_execSetRootMotion_Parms SetRootMotion_Parms;
	SetRootMotion_Parms.bRootMotionEnabled = bRootMotionEnabled;

	pFnSetRootMotion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRootMotion, &SetRootMotion_Parms, NULL );

	pFnSetRootMotion->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.PlayDeath" );

	AGameCrowdAgentSkeletal_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.SetLighting" );

	AGameCrowdAgentSkeletal_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay" );

	AGameCrowdAgentSkeletal_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt" );

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination" );

	UGameCrowdAgentBehavior_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         OtherAgent                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo" );

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;
	PropagateViralBehaviorTo_Parms.OtherAgent = OtherAgent;

	this->ProcessEvent ( pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdAgentBehavior::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.ActivatedBy" );

	UGameCrowdAgentBehavior_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdAgentBehavior::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor" );

	UGameCrowdAgentBehavior_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdAgentBehavior::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.ChangingDestination" );

	UGameCrowdAgentBehavior_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdAgentBehavior::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString" );

	UGameCrowdAgentBehavior_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd" );

	UGameCrowdAgentBehavior_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] 
// Parameters infos:

void UGameCrowdAgentBehavior::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.StopBehavior" );

	UGameCrowdAgentBehavior_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdAgentBehavior::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.InitBehavior" );

	UGameCrowdAgentBehavior_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.HandleMovement" );

	UGameCrowdAgentBehavior_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation" );

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 CameraLoc                      ( CPF_Parm )

bool UGameCrowdAgentBehavior::CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector CameraLoc )
{
	static UFunction* pFnCanBeUsedBy = NULL;

	if ( ! pFnCanBeUsedBy )
		pFnCanBeUsedBy = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy" );

	UGameCrowdAgentBehavior_execCanBeUsedBy_Parms CanBeUsedBy_Parms;
	CanBeUsedBy_Parms.Agent = Agent;
	memcpy ( &CanBeUsedBy_Parms.CameraLoc, &CameraLoc, 0xC );

	this->ProcessEvent ( pFnCanBeUsedBy, &CanBeUsedBy_Parms, NULL );

	return CanBeUsedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameCrowdAgentBehavior::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.Tick" );

	UGameCrowdAgentBehavior_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle" );

	UGameCrowdAgentBehavior_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString" );

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior" );

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow ( )
{
	static UFunction* pFnPlayAgentAnimationNow = NULL;

	if ( ! pFnPlayAgentAnimationNow )
		pFnPlayAgentAnimationNow = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow" );

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms PlayAgentAnimationNow_Parms;

	this->ProcessEvent ( pFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd" );

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput ( )
{
	static UFunction* pFnSetSequenceOutput = NULL;

	if ( ! pFnSetSequenceOutput )
		pFnSetSequenceOutput = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput" );

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms SetSequenceOutput_Parms;

	pFnSetSequenceOutput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSequenceOutput, &SetSequenceOutput_Parms, NULL );

	pFnSetSequenceOutput->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation" );

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior" );

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString" );

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt" );

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination" );

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         OtherAgent                     ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo" );

	UGameCrowdBehavior_RunFromPanic_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;
	PropagateViralBehaviorTo_Parms.OtherAgent = OtherAgent;

	this->ProcessEvent ( pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior" );

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior" );

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy" );

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior" );

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle" );

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString" );

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_WaitForGroup::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior" );

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior" );

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle" );

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString" );

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor" );

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdBehavior_WaitInQueue::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination" );

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement" );

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDestination                 ( CPF_Parm )

void UGameCrowdGroup::UpdateDestinations ( class AGameCrowdDestination* NewDestination )
{
	static UFunction* pFnUpdateDestinations = NULL;

	if ( ! pFnUpdateDestinations )
		pFnUpdateDestinations = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdGroup.UpdateDestinations" );

	UGameCrowdGroup_execUpdateDestinations_Parms UpdateDestinations_Parms;
	UpdateDestinations_Parms.NewDestination = NewDestination;

	this->ProcessEvent ( pFnUpdateDestinations, &UpdateDestinations_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::RemoveMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnRemoveMember = NULL;

	if ( ! pFnRemoveMember )
		pFnRemoveMember = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdGroup.RemoveMember" );

	UGameCrowdGroup_execRemoveMember_Parms RemoveMember_Parms;
	RemoveMember_Parms.Agent = Agent;

	this->ProcessEvent ( pFnRemoveMember, &RemoveMember_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::AddMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAddMember = NULL;

	if ( ! pFnAddMember )
		pFnAddMember = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdGroup.AddMember" );

	UGameCrowdGroup_execAddMember_Parms AddMember_Parms;
	AddMember_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAddMember, &AddMember_Parms, NULL );
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AGameCrowdInteractionPoint::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdInteractionPoint.OnToggle" );

	AGameCrowdInteractionPoint_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdDestination::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.GetSpawnPosition" );

	AGameCrowdDestination_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

bool AGameCrowdDestination::eventAllowableDestinationFor ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAllowableDestinationFor = NULL;

	if ( ! pFnAllowableDestinationFor )
		pFnAllowableDestinationFor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.AllowableDestinationFor" );

	AGameCrowdDestination_eventAllowableDestinationFor_Parms AllowableDestinationFor_Parms;
	AllowableDestinationFor_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAllowableDestinationFor, &AllowableDestinationFor_Parms, NULL );

	return AllowableDestinationFor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestination::AtCapacity ( )
{
	static UFunction* pFnAtCapacity = NULL;

	if ( ! pFnAtCapacity )
		pFnAtCapacity = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.AtCapacity" );

	AGameCrowdDestination_execAtCapacity_Parms AtCapacity_Parms;

	this->ProcessEvent ( pFnAtCapacity, &AtCapacity_Parms, NULL );

	return AtCapacity_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ArrivingAgent                  ( CPF_Parm )

void AGameCrowdDestination::eventIncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent )
{
	static UFunction* pFnIncrementCustomerCount = NULL;

	if ( ! pFnIncrementCustomerCount )
		pFnIncrementCustomerCount = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.IncrementCustomerCount" );

	AGameCrowdDestination_eventIncrementCustomerCount_Parms IncrementCustomerCount_Parms;
	IncrementCustomerCount_Parms.ArrivingAgent = ArrivingAgent;

	this->ProcessEvent ( pFnIncrementCustomerCount, &IncrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         DepartingAgent                 ( CPF_Parm )

void AGameCrowdDestination::eventDecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent )
{
	static UFunction* pFnDecrementCustomerCount = NULL;

	if ( ! pFnDecrementCustomerCount )
		pFnDecrementCustomerCount = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.DecrementCustomerCount" );

	AGameCrowdDestination_eventDecrementCustomerCount_Parms DecrementCustomerCount_Parms;
	DecrementCustomerCount_Parms.DepartingAgent = DepartingAgent;

	this->ProcessEvent ( pFnDecrementCustomerCount, &DecrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// unsigned long                  bIgnoreRestrictions            ( CPF_Parm )

void AGameCrowdDestination::PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions )
{
	static UFunction* pFnPickNewDestinationFor = NULL;

	if ( ! pFnPickNewDestinationFor )
		pFnPickNewDestinationFor = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.PickNewDestinationFor" );

	AGameCrowdDestination_execPickNewDestinationFor_Parms PickNewDestinationFor_Parms;
	PickNewDestinationFor_Parms.Agent = Agent;
	PickNewDestinationFor_Parms.bIgnoreRestrictions = bIgnoreRestrictions;

	this->ProcessEvent ( pFnPickNewDestinationFor, &PickNewDestinationFor_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestination::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.ReachedDestination" );

	AGameCrowdDestination_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.Destroyed" );

	AGameCrowdDestination_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.PostBeginPlay" );

	AGameCrowdDestination_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )
// unsigned long                  bTestExactly                   ( CPF_Parm )

bool AGameCrowdDestination::ReachedByAgent ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly )
{
	static UFunction* pFnReachedByAgent = NULL;

	if ( ! pFnReachedByAgent )
		pFnReachedByAgent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestination.ReachedByAgent" );

	AGameCrowdDestination_execReachedByAgent_Parms ReachedByAgent_Parms;
	ReachedByAgent_Parms.Agent = Agent;
	memcpy ( &ReachedByAgent_Parms.TestPosition, &TestPosition, 0xC );
	ReachedByAgent_Parms.bTestExactly = bTestExactly;

	pFnReachedByAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReachedByAgent, &ReachedByAgent_Parms, NULL );

	pFnReachedByAgent->FunctionFlags |= 0x400;

	return ReachedByAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasCustomer ( )
{
	static UFunction* pFnHasCustomer = NULL;

	if ( ! pFnHasCustomer )
		pFnHasCustomer = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer" );

	AGameCrowdDestinationQueuePoint_execHasCustomer_Parms HasCustomer_Parms;

	this->ProcessEvent ( pFnHasCustomer, &HasCustomer_Parms, NULL );

	return HasCustomer_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         OldCustomer                    ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::ClearQueue ( class AGameCrowdAgent* OldCustomer )
{
	static UFunction* pFnClearQueue = NULL;

	if ( ! pFnClearQueue )
		pFnClearQueue = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue" );

	AGameCrowdDestinationQueuePoint_execClearQueue_Parms ClearQueue_Parms;
	ClearQueue_Parms.OldCustomer = OldCustomer;

	this->ProcessEvent ( pFnClearQueue, &ClearQueue_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] 
// Parameters infos:
// class AGameCrowdAgent*         NewCustomer                    ( CPF_Parm )
// class AGameCrowdInteractionPoint* PreviousPosition               ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition )
{
	static UFunction* pFnAddCustomer = NULL;

	if ( ! pFnAddCustomer )
		pFnAddCustomer = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer" );

	AGameCrowdDestinationQueuePoint_execAddCustomer_Parms AddCustomer_Parms;
	AddCustomer_Parms.NewCustomer = NewCustomer;
	AddCustomer_Parms.PreviousPosition = PreviousPosition;

	this->ProcessEvent ( pFnAddCustomer, &AddCustomer_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance ( )
{
	static UFunction* pFnActuallyAdvance = NULL;

	if ( ! pFnActuallyAdvance )
		pFnActuallyAdvance = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance" );

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms ActuallyAdvance_Parms;

	this->ProcessEvent ( pFnActuallyAdvance, &ActuallyAdvance_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] 
// Parameters infos:
// class AGameCrowdInteractionPoint* FrontPosition                  ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition )
{
	static UFunction* pFnAdvanceCustomerTo = NULL;

	if ( ! pFnAdvanceCustomerTo )
		pFnAdvanceCustomerTo = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo" );

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms AdvanceCustomerTo_Parms;
	AdvanceCustomerTo_Parms.FrontPosition = FrontPosition;

	this->ProcessEvent ( pFnAdvanceCustomerTo, &AdvanceCustomerTo_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination" );

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasSpace ( )
{
	static UFunction* pFnHasSpace = NULL;

	if ( ! pFnHasSpace )
		pFnHasSpace = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace" );

	AGameCrowdDestinationQueuePoint_execHasSpace_Parms HasSpace_Parms;

	this->ProcessEvent ( pFnHasSpace, &HasSpace_Parms, NULL );

	return HasSpace_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )

bool AGameCrowdDestinationQueuePoint::QueueReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition )
{
	static UFunction* pFnQueueReachedBy = NULL;

	if ( ! pFnQueueReachedBy )
		pFnQueueReachedBy = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy" );

	AGameCrowdDestinationQueuePoint_execQueueReachedBy_Parms QueueReachedBy_Parms;
	QueueReachedBy_Parms.Agent = Agent;
	memcpy ( &QueueReachedBy_Parms.TestPosition, &TestPosition, 0xC );

	pFnQueueReachedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueueReachedBy, &QueueReachedBy_Parms, NULL );

	pFnQueueReachedBy->FunctionFlags |= 0x400;

	return QueueReachedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdForcePoint.AppliedForce
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

struct FVector AGameCrowdForcePoint::eventAppliedForce ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAppliedForce = NULL;

	if ( ! pFnAppliedForce )
		pFnAppliedForce = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdForcePoint.AppliedForce" );

	AGameCrowdForcePoint_eventAppliedForce_Parms AppliedForce_Parms;
	AppliedForce_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAppliedForce, &AppliedForce_Parms, NULL );

	return AppliedForce_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdForcePoint.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AGameCrowdForcePoint::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdForcePoint.UnTouch" );

	AGameCrowdForcePoint_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function GameFramework.GameCrowdForcePoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AGameCrowdForcePoint::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdForcePoint.Touch" );

	AGameCrowdForcePoint_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdAttractor.AppliedForce
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

struct FVector AGameCrowdAttractor::eventAppliedForce ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAppliedForce = NULL;

	if ( ! pFnAppliedForce )
		pFnAppliedForce = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdAttractor.AppliedForce" );

	AGameCrowdAttractor_eventAppliedForce_Parms AppliedForce_Parms;
	AppliedForce_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAppliedForce, &AppliedForce_Parms, NULL );

	return AppliedForce_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdRepulsor.AppliedForce
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

struct FVector AGameCrowdRepulsor::eventAppliedForce ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAppliedForce = NULL;

	if ( ! pFnAppliedForce )
		pFnAppliedForce = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdRepulsor.AppliedForce" );

	AGameCrowdRepulsor_eventAppliedForce_Parms AppliedForce_Parms;
	AppliedForce_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAppliedForce, &AppliedForce_Parms, NULL );

	return AppliedForce_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00820002] 
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )

class AGameCrowdAgent* AGameCrowdPopulationManager::CreateNewAgent ( class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup )
{
	static UFunction* pFnCreateNewAgent = NULL;

	if ( ! pFnCreateNewAgent )
		pFnCreateNewAgent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.CreateNewAgent" );

	AGameCrowdPopulationManager_execCreateNewAgent_Parms CreateNewAgent_Parms;
	CreateNewAgent_Parms.SpawnLoc = SpawnLoc;
	CreateNewAgent_Parms.AgentTemplate = AgentTemplate;
	CreateNewAgent_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnCreateNewAgent, &CreateNewAgent_Parms, NULL );

	return CreateNewAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   SpawnLoc                       ( CPF_Parm )

class AGameCrowdAgent* AGameCrowdPopulationManager::eventSpawnAgent ( class AGameCrowdDestination* SpawnLoc )
{
	static UFunction* pFnSpawnAgent = NULL;

	if ( ! pFnSpawnAgent )
		pFnSpawnAgent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.SpawnAgent" );

	AGameCrowdPopulationManager_eventSpawnAgent_Parms SpawnAgent_Parms;
	SpawnAgent_Parms.SpawnLoc = SpawnLoc;

	this->ProcessEvent ( pFnSpawnAgent, &SpawnAgent_Parms, NULL );

	return SpawnAgent_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Candidate                      ( CPF_Parm )

bool AGameCrowdPopulationManager::ValidateSpawnAt ( class AGameCrowdDestination* Candidate )
{
	static UFunction* pFnValidateSpawnAt = NULL;

	if ( ! pFnValidateSpawnAt )
		pFnValidateSpawnAt = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt" );

	AGameCrowdPopulationManager_execValidateSpawnAt_Parms ValidateSpawnAt_Parms;
	ValidateSpawnAt_Parms.Candidate = Candidate;

	this->ProcessEvent ( pFnValidateSpawnAt, &ValidateSpawnAt_Parms, NULL );

	return ValidateSpawnAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )
// struct FVector                 ViewLocation                   ( CPF_Parm )

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint ( class AGameCrowdDestination* GCD, struct FVector ViewLocation )
{
	static UFunction* pFnAddPrioritizedSpawnPoint = NULL;

	if ( ! pFnAddPrioritizedSpawnPoint )
		pFnAddPrioritizedSpawnPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint" );

	AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Parms AddPrioritizedSpawnPoint_Parms;
	AddPrioritizedSpawnPoint_Parms.GCD = GCD;
	memcpy ( &AddPrioritizedSpawnPoint_Parms.ViewLocation, &ViewLocation, 0xC );

	this->ProcessEvent ( pFnAddPrioritizedSpawnPoint, &AddPrioritizedSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00820002] 
// Parameters infos:
// int                            StartIndex                     ( CPF_Parm )
// int                            StopIndex                      ( CPF_Parm )
// struct FVector                 ViewLocation                   ( CPF_Parm )
// struct FVector                 PredictionLocation             ( CPF_Parm )

void AGameCrowdPopulationManager::AnalyzeSpawnPoints ( int StartIndex, int StopIndex, struct FVector ViewLocation, struct FVector PredictionLocation )
{
	static UFunction* pFnAnalyzeSpawnPoints = NULL;

	if ( ! pFnAnalyzeSpawnPoints )
		pFnAnalyzeSpawnPoints = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints" );

	AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Parms AnalyzeSpawnPoints_Parms;
	AnalyzeSpawnPoints_Parms.StartIndex = StartIndex;
	AnalyzeSpawnPoints_Parms.StopIndex = StopIndex;
	memcpy ( &AnalyzeSpawnPoints_Parms.ViewLocation, &ViewLocation, 0xC );
	memcpy ( &AnalyzeSpawnPoints_Parms.PredictionLocation, &PredictionLocation, 0xC );

	this->ProcessEvent ( pFnAnalyzeSpawnPoints, &AnalyzeSpawnPoints_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00820002] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void AGameCrowdPopulationManager::PrioritizeSpawnPoints ( float DeltaSeconds )
{
	static UFunction* pFnPrioritizeSpawnPoints = NULL;

	if ( ! pFnPrioritizeSpawnPoints )
		pFnPrioritizeSpawnPoints = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints" );

	AGameCrowdPopulationManager_execPrioritizeSpawnPoints_Parms PrioritizeSpawnPoints_Parms;
	PrioritizeSpawnPoints_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnPrioritizeSpawnPoints, &PrioritizeSpawnPoints_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AGameCrowdDestination* AGameCrowdPopulationManager::PickSpawnPoint ( )
{
	static UFunction* pFnPickSpawnPoint = NULL;

	if ( ! pFnPickSpawnPoint )
		pFnPickSpawnPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint" );

	AGameCrowdPopulationManager_execPickSpawnPoint_Parms PickSpawnPoint_Parms;

	this->ProcessEvent ( pFnPickSpawnPoint, &PickSpawnPoint_Parms, NULL );

	return PickSpawnPoint_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void AGameCrowdPopulationManager::Tick ( float DeltaSeconds )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.Tick" );

	AGameCrowdPopulationManager_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdPopulationManager::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.DisplayDebug" );

	AGameCrowdPopulationManager_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdPopulationManager.AddToAgentPool
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

bool AGameCrowdPopulationManager::AddToAgentPool ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAddToAgentPool = NULL;

	if ( ! pFnAddToAgentPool )
		pFnAddToAgentPool = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.AddToAgentPool" );

	AGameCrowdPopulationManager_execAddToAgentPool_Parms AddToAgentPool_Parms;
	AddToAgentPool_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAddToAgentPool, &AddToAgentPool_Parms, NULL );

	return AddToAgentPool_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdPopulationManager::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.AgentDestroyed" );

	AGameCrowdPopulationManager_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::FlushAgents ( )
{
	static UFunction* pFnFlushAgents = NULL;

	if ( ! pFnFlushAgents )
		pFnFlushAgents = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.FlushAgents" );

	AGameCrowdPopulationManager_execFlushAgents_Parms FlushAgents_Parms;

	this->ProcessEvent ( pFnFlushAgents, &FlushAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       ( CPF_Parm )

void AGameCrowdPopulationManager::OnGameCrowdPopulationManagerToggle ( class USeqAct_GameCrowdPopulationManagerToggle* inAction )
{
	static UFunction* pFnOnGameCrowdPopulationManagerToggle = NULL;

	if ( ! pFnOnGameCrowdPopulationManagerToggle )
		pFnOnGameCrowdPopulationManagerToggle = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.OnGameCrowdPopulationManagerToggle" );

	AGameCrowdPopulationManager_execOnGameCrowdPopulationManagerToggle_Parms OnGameCrowdPopulationManagerToggle_Parms;
	OnGameCrowdPopulationManagerToggle_Parms.inAction = inAction;

	this->ProcessEvent ( pFnOnGameCrowdPopulationManagerToggle, &OnGameCrowdPopulationManagerToggle_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )

void AGameCrowdPopulationManager::RemoveSpawnPoint ( class AGameCrowdDestination* GCD )
{
	static UFunction* pFnRemoveSpawnPoint = NULL;

	if ( ! pFnRemoveSpawnPoint )
		pFnRemoveSpawnPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint" );

	AGameCrowdPopulationManager_execRemoveSpawnPoint_Parms RemoveSpawnPoint_Parms;
	RemoveSpawnPoint_Parms.GCD = GCD;

	this->ProcessEvent ( pFnRemoveSpawnPoint, &RemoveSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00820002] 
// Parameters infos:
// class AGameCrowdDestination*   GCD                            ( CPF_Parm )

void AGameCrowdPopulationManager::AddSpawnPoint ( class AGameCrowdDestination* GCD )
{
	static UFunction* pFnAddSpawnPoint = NULL;

	if ( ! pFnAddSpawnPoint )
		pFnAddSpawnPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint" );

	AGameCrowdPopulationManager_execAddSpawnPoint_Parms AddSpawnPoint_Parms;
	AddSpawnPoint_Parms.GCD = GCD;

	this->ProcessEvent ( pFnAddSpawnPoint, &AddSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.GetMaxSpawnDist
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameCrowdPopulationManager::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.GetMaxSpawnDist" );

	AGameCrowdPopulationManager_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	this->ProcessEvent ( pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );

	return GetMaxSpawnDist_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventNotifyPathChanged ( )
{
	static UFunction* pFnNotifyPathChanged = NULL;

	if ( ! pFnNotifyPathChanged )
		pFnNotifyPathChanged = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged" );

	AGameCrowdPopulationManager_eventNotifyPathChanged_Parms NotifyPathChanged_Parms;

	this->ProcessEvent ( pFnNotifyPathChanged, &NotifyPathChanged_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdPopulationManager.PostBeginPlay" );

	AGameCrowdPopulationManager_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AGameCrowdReplicationActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent" );

	AGameCrowdReplicationActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GameFramework.GameDamageType.HandleDamageFX
// [0x00422000] 
// Parameters infos:
// class AGamePawn*               DamagedPawn                    ( CPF_Parm )
// struct FTakeHitInfo            HitInfo                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameDamageType::HandleDamageFX ( class AGamePawn* DamagedPawn, struct FTakeHitInfo* HitInfo )
{
	static UFunction* pFnHandleDamageFX = NULL;

	if ( ! pFnHandleDamageFX )
		pFnHandleDamageFX = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.HandleDamageFX" );

	UGameDamageType_execHandleDamageFX_Parms HandleDamageFX_Parms;
	HandleDamageFX_Parms.DamagedPawn = DamagedPawn;

	this->ProcessEvent ( pFnHandleDamageFX, &HandleDamageFX_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &HandleDamageFX_Parms.HitInfo, 0x38 );
};

// Function GameFramework.GameDamageType.ShouldHeadShotGib
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TestPawn                       ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )

bool UGameDamageType::ShouldHeadShotGib ( class APawn* TestPawn, class APawn* Instigator )
{
	static UFunction* pFnShouldHeadShotGib = NULL;

	if ( ! pFnShouldHeadShotGib )
		pFnShouldHeadShotGib = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.ShouldHeadShotGib" );

	UGameDamageType_execShouldHeadShotGib_Parms ShouldHeadShotGib_Parms;
	ShouldHeadShotGib_Parms.TestPawn = TestPawn;
	ShouldHeadShotGib_Parms.Instigator = Instigator;

	this->ProcessEvent ( pFnShouldHeadShotGib, &ShouldHeadShotGib_Parms, NULL );

	return ShouldHeadShotGib_Parms.ReturnValue;
};

// Function GameFramework.GameDamageType.PlayExtraDamageSound
// [0x00022002] 
// Parameters infos:
// class APawn*                   VictimPawn                     ( CPF_Parm )

void UGameDamageType::PlayExtraDamageSound ( class APawn* VictimPawn )
{
	static UFunction* pFnPlayExtraDamageSound = NULL;

	if ( ! pFnPlayExtraDamageSound )
		pFnPlayExtraDamageSound = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.PlayExtraDamageSound" );

	UGameDamageType_execPlayExtraDamageSound_Parms PlayExtraDamageSound_Parms;
	PlayExtraDamageSound_Parms.VictimPawn = VictimPawn;

	this->ProcessEvent ( pFnPlayExtraDamageSound, &PlayExtraDamageSound_Parms, NULL );
};

// Function GameFramework.GameDamageType.IsScriptedDamageType
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameDamageType::IsScriptedDamageType ( )
{
	static UFunction* pFnIsScriptedDamageType = NULL;

	if ( ! pFnIsScriptedDamageType )
		pFnIsScriptedDamageType = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.IsScriptedDamageType" );

	UGameDamageType_execIsScriptedDamageType_Parms IsScriptedDamageType_Parms;

	this->ProcessEvent ( pFnIsScriptedDamageType, &IsScriptedDamageType_Parms, NULL );

	return IsScriptedDamageType_Parms.ReturnValue;
};

// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   DamagedPawn                    ( CPF_Parm )

bool UGameDamageType::ShouldPlayForceFeedback ( class APawn* DamagedPawn )
{
	static UFunction* pFnShouldPlayForceFeedback = NULL;

	if ( ! pFnShouldPlayForceFeedback )
		pFnShouldPlayForceFeedback = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.ShouldPlayForceFeedback" );

	UGameDamageType_execShouldPlayForceFeedback_Parms ShouldPlayForceFeedback_Parms;
	ShouldPlayForceFeedback_Parms.DamagedPawn = DamagedPawn;

	this->ProcessEvent ( pFnShouldPlayForceFeedback, &ShouldPlayForceFeedback_Parms, NULL );

	return ShouldPlayForceFeedback_Parms.ReturnValue;
};

// Function GameFramework.GameDamageType.HandleDeadPlayer
// [0x00022000] 
// Parameters infos:
// class AGamePlayerController*   Player                         ( CPF_Parm )

void UGameDamageType::HandleDeadPlayer ( class AGamePlayerController* Player )
{
	static UFunction* pFnHandleDeadPlayer = NULL;

	if ( ! pFnHandleDeadPlayer )
		pFnHandleDeadPlayer = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.HandleDeadPlayer" );

	UGameDamageType_execHandleDeadPlayer_Parms HandleDeadPlayer_Parms;
	HandleDeadPlayer_Parms.Player = Player;

	this->ProcessEvent ( pFnHandleDeadPlayer, &HandleDeadPlayer_Parms, NULL );
};

// Function GameFramework.GameDamageType.HandleKilledPawn
// [0x00022000] 
// Parameters infos:
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )

void UGameDamageType::HandleKilledPawn ( class APawn* KilledPawn, class APawn* Instigator )
{
	static UFunction* pFnHandleKilledPawn = NULL;

	if ( ! pFnHandleKilledPawn )
		pFnHandleKilledPawn = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.HandleKilledPawn" );

	UGameDamageType_execHandleKilledPawn_Parms HandleKilledPawn_Parms;
	HandleKilledPawn_Parms.KilledPawn = KilledPawn;
	HandleKilledPawn_Parms.Instigator = Instigator;

	this->ProcessEvent ( pFnHandleKilledPawn, &HandleKilledPawn_Parms, NULL );
};

// Function GameFramework.GameDamageType.HandleDamagedPawn
// [0x00022000] 
// Parameters infos:
// class APawn*                   DamagedPawn                    ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )
// int                            DamageAmt                      ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void UGameDamageType::HandleDamagedPawn ( class APawn* DamagedPawn, class APawn* Instigator, int DamageAmt, struct FVector Momentum )
{
	static UFunction* pFnHandleDamagedPawn = NULL;

	if ( ! pFnHandleDamagedPawn )
		pFnHandleDamagedPawn = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.HandleDamagedPawn" );

	UGameDamageType_execHandleDamagedPawn_Parms HandleDamagedPawn_Parms;
	HandleDamagedPawn_Parms.DamagedPawn = DamagedPawn;
	HandleDamagedPawn_Parms.Instigator = Instigator;
	HandleDamagedPawn_Parms.DamageAmt = DamageAmt;
	memcpy ( &HandleDamagedPawn_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnHandleDamagedPawn, &HandleDamagedPawn_Parms, NULL );
};

// Function GameFramework.GameDamageType.ModifyDamage
// [0x00422000] 
// Parameters infos:
// class APawn*                   Victim                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// int                            out_Damage                     ( CPF_Parm | CPF_OutParm )
// struct FVector                 out_Momentum                   ( CPF_Parm | CPF_OutParm )

void UGameDamageType::ModifyDamage ( class APawn* Victim, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* out_Damage, struct FVector* out_Momentum )
{
	static UFunction* pFnModifyDamage = NULL;

	if ( ! pFnModifyDamage )
		pFnModifyDamage = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.ModifyDamage" );

	UGameDamageType_execModifyDamage_Parms ModifyDamage_Parms;
	ModifyDamage_Parms.Victim = Victim;
	ModifyDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ModifyDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ModifyDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnModifyDamage, &ModifyDamage_Parms, NULL );

	if ( out_Damage )
		*out_Damage = ModifyDamage_Parms.out_Damage;

	if ( out_Momentum )
		memcpy ( out_Momentum, &ModifyDamage_Parms.out_Momentum, 0xC );
};

// Function GameFramework.GameDamageType.ShouldGib
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TestPawn                       ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )

bool UGameDamageType::ShouldGib ( class APawn* TestPawn, class APawn* Instigator )
{
	static UFunction* pFnShouldGib = NULL;

	if ( ! pFnShouldGib )
		pFnShouldGib = UObject::FindObject<UFunction> ( "Function GameFramework.GameDamageType.ShouldGib" );

	UGameDamageType_execShouldGib_Parms ShouldGib_Parms;
	ShouldGib_Parms.TestPawn = TestPawn;
	ShouldGib_Parms.Instigator = Instigator;

	this->ProcessEvent ( pFnShouldGib, &ShouldGib_Parms, NULL );

	return ShouldGib_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] 
// Parameters infos:
// class UCameraShake*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Epicenter                      ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

class UCameraShake* AGameExplosionActor::ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC )
{
	static UFunction* pFnChooseCameraShake = NULL;

	if ( ! pFnChooseCameraShake )
		pFnChooseCameraShake = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.ChooseCameraShake" );

	AGameExplosionActor_execChooseCameraShake_Parms ChooseCameraShake_Parms;
	memcpy ( &ChooseCameraShake_Parms.Epicenter, &Epicenter, 0xC );
	ChooseCameraShake_Parms.PC = PC;

	this->ProcessEvent ( pFnChooseCameraShake, &ChooseCameraShake_Parms, NULL );

	return ChooseCameraShake_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::SpawnCameraLensEffects ( )
{
	static UFunction* pFnSpawnCameraLensEffects = NULL;

	if ( ! pFnSpawnCameraLensEffects )
		pFnSpawnCameraLensEffects = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.SpawnCameraLensEffects" );

	AGameExplosionActor_execSpawnCameraLensEffects_Parms SpawnCameraLensEffects_Parms;

	this->ProcessEvent ( pFnSpawnCameraLensEffects, &SpawnCameraLensEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionCameraEffects ( )
{
	static UFunction* pFnDoExplosionCameraEffects = NULL;

	if ( ! pFnDoExplosionCameraEffects )
		pFnDoExplosionCameraEffects = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.DoExplosionCameraEffects" );

	AGameExplosionActor_execDoExplosionCameraEffects_Parms DoExplosionCameraEffects_Parms;

	this->ProcessEvent ( pFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameExplosionActor::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.Tick" );

	AGameExplosionActor_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] 
// Parameters infos:

void AGameExplosionActor::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.DrawDebug" );

	AGameExplosionActor_execDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DelayedExplosionDamage ( )
{
	static UFunction* pFnDelayedExplosionDamage = NULL;

	if ( ! pFnDelayedExplosionDamage )
		pFnDelayedExplosionDamage = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.DelayedExplosionDamage" );

	AGameExplosionActor_execDelayedExplosionDamage_Parms DelayedExplosionDamage_Parms;

	this->ProcessEvent ( pFnDelayedExplosionDamage, &DelayedExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] 
// Parameters infos:
// class UGameExplosion*          NewExplosionTemplate           ( CPF_Parm )
// struct FVector                 Direction                      ( CPF_OptionalParm | CPF_Parm )

void AGameExplosionActor::Explode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.Explode" );

	AGameExplosionActor_execExplode_Parms Explode_Parms;
	Explode_Parms.NewExplosionTemplate = NewExplosionTemplate;
	memcpy ( &Explode_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionFogVolume ( )
{
	static UFunction* pFnSpawnExplosionFogVolume = NULL;

	if ( ! pFnSpawnExplosionFogVolume )
		pFnSpawnExplosionFogVolume = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume" );

	AGameExplosionActor_execSpawnExplosionFogVolume_Parms SpawnExplosionFogVolume_Parms;

	this->ProcessEvent ( pFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionDecal ( )
{
	static UFunction* pFnSpawnExplosionDecal = NULL;

	if ( ! pFnSpawnExplosionDecal )
		pFnSpawnExplosionDecal = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.SpawnExplosionDecal" );

	AGameExplosionActor_execSpawnExplosionDecal_Parms SpawnExplosionDecal_Parms;

	this->ProcessEvent ( pFnSpawnExplosionDecal, &SpawnExplosionDecal_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void AGameExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem" );

	AGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateExplosionTemplateWithPerMaterialFX = NULL;

	if ( ! pFnUpdateExplosionTemplateWithPerMaterialFX )
		pFnUpdateExplosionTemplateWithPerMaterialFX = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX" );

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms UpdateExplosionTemplateWithPerMaterialFX_Parms;
	UpdateExplosionTemplateWithPerMaterialFX_Parms.PhysMaterial = PhysMaterial;

	this->ProcessEvent ( pFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] 
// Parameters infos:
// class AGamePawn*               VictimPawn                     ( CPF_Parm )
// float                          VictimDist                     ( CPF_Parm )

void AGameExplosionActor::SpecialPawnEffectsFor ( class AGamePawn* VictimPawn, float VictimDist )
{
	static UFunction* pFnSpecialPawnEffectsFor = NULL;

	if ( ! pFnSpecialPawnEffectsFor )
		pFnSpecialPawnEffectsFor = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor" );

	AGameExplosionActor_execSpecialPawnEffectsFor_Parms SpecialPawnEffectsFor_Parms;
	SpecialPawnEffectsFor_Parms.VictimPawn = VictimPawn;
	SpecialPawnEffectsFor_Parms.VictimDist = VictimDist;

	this->ProcessEvent ( pFnSpecialPawnEffectsFor, &SpecialPawnEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AGameExplosionActor::GetEffectCheckRadius ( )
{
	static UFunction* pFnGetEffectCheckRadius = NULL;

	if ( ! pFnGetEffectCheckRadius )
		pFnGetEffectCheckRadius = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.GetEffectCheckRadius" );

	AGameExplosionActor_execGetEffectCheckRadius_Parms GetEffectCheckRadius_Parms;

	this->ProcessEvent ( pFnGetEffectCheckRadius, &GetEffectCheckRadius_Parms, NULL );

	return GetEffectCheckRadius_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] 
// Parameters infos:
// unsigned long                  bCauseDamage                   ( CPF_Parm )
// unsigned long                  bCauseEffects                  ( CPF_Parm )

void AGameExplosionActor::DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.DoExplosionDamage" );

	AGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;
	DoExplosionDamage_Parms.bCauseDamage = bCauseDamage;
	DoExplosionDamage_Parms.bCauseEffects = bCauseEffects;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FBox                    BBox                           ( CPF_Parm )

float AGameExplosionActor::BoxDistanceToPoint ( struct FVector Start, struct FBox BBox )
{
	static UFunction* pFnBoxDistanceToPoint = NULL;

	if ( ! pFnBoxDistanceToPoint )
		pFnBoxDistanceToPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.BoxDistanceToPoint" );

	AGameExplosionActor_execBoxDistanceToPoint_Parms BoxDistanceToPoint_Parms;
	memcpy ( &BoxDistanceToPoint_Parms.Start, &Start, 0xC );
	memcpy ( &BoxDistanceToPoint_Parms.BBox, &BBox, 0x1C );

	pFnBoxDistanceToPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBoxDistanceToPoint, &BoxDistanceToPoint_Parms, NULL );

	pFnBoxDistanceToPoint->FunctionFlags |= 0x400;

	return BoxDistanceToPoint_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool AGameExplosionActor::IsBehindExplosion ( class AActor* A )
{
	static UFunction* pFnIsBehindExplosion = NULL;

	if ( ! pFnIsBehindExplosion )
		pFnIsBehindExplosion = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.IsBehindExplosion" );

	AGameExplosionActor_execIsBehindExplosion_Parms IsBehindExplosion_Parms;
	IsBehindExplosion_Parms.A = A;

	this->ProcessEvent ( pFnIsBehindExplosion, &IsBehindExplosion_Parms, NULL );

	return IsBehindExplosion_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_Parm )

bool AGameExplosionActor::DoFullDamageToActor ( class AActor* Victim )
{
	static UFunction* pFnDoFullDamageToActor = NULL;

	if ( ! pFnDoFullDamageToActor )
		pFnDoFullDamageToActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.DoFullDamageToActor" );

	AGameExplosionActor_execDoFullDamageToActor_Parms DoFullDamageToActor_Parms;
	DoFullDamageToActor_Parms.Victim = Victim;

	this->ProcessEvent ( pFnDoFullDamageToActor, &DoFullDamageToActor_Parms, NULL );

	return DoFullDamageToActor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.GetPhysicalMaterial" );

	AGameExplosionActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	this->ProcessEvent ( pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );

	return GetPhysicalMaterial_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameExplosionActor::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GameExplosionActor.PreBeginPlay" );

	AGameExplosionActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMeshWithoutBeingSeen ( )
{
	static UFunction* pFnReattachMeshWithoutBeingSeen = NULL;

	if ( ! pFnReattachMeshWithoutBeingSeen )
		pFnReattachMeshWithoutBeingSeen = UObject::FindObject<UFunction> ( "Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen" );

	AGamePawn_execReattachMeshWithoutBeingSeen_Parms ReattachMeshWithoutBeingSeen_Parms;

	this->ProcessEvent ( pFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMesh ( )
{
	static UFunction* pFnReattachMesh = NULL;

	if ( ! pFnReattachMesh )
		pFnReattachMesh = UObject::FindObject<UFunction> ( "Function GameFramework.GamePawn.ReattachMesh" );

	AGamePawn_execReattachMesh_Parms ReattachMesh_Parms;

	this->ProcessEvent ( pFnReattachMesh, &ReattachMesh_Parms, NULL );
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInWantShadow                  ( CPF_Parm )

void AGamePawn::eventUpdateShadowSettings ( unsigned long bInWantShadow )
{
	static UFunction* pFnUpdateShadowSettings = NULL;

	if ( ! pFnUpdateShadowSettings )
		pFnUpdateShadowSettings = UObject::FindObject<UFunction> ( "Function GameFramework.GamePawn.UpdateShadowSettings" );

	AGamePawn_eventUpdateShadowSettings_Parms UpdateShadowSettings_Parms;
	UpdateShadowSettings_Parms.bInWantShadow = bInWantShadow;

	this->ProcessEvent ( pFnUpdateShadowSettings, &UpdateShadowSettings_Parms, NULL );
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] 
// Parameters infos:
// struct FColor                  FadeColor                      ( CPF_Parm )
// unsigned char                  FromAlpha                      ( CPF_Parm )
// unsigned char                  ToAlpha                        ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm )

void AGamePlayerController::ClientColorFade ( struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime )
{
	static UFunction* pFnClientColorFade = NULL;

	if ( ! pFnClientColorFade )
		pFnClientColorFade = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.ClientColorFade" );

	AGamePlayerController_execClientColorFade_Parms ClientColorFade_Parms;
	memcpy ( &ClientColorFade_Parms.FadeColor, &FadeColor, 0x4 );
	ClientColorFade_Parms.FromAlpha = FromAlpha;
	ClientColorFade_Parms.ToAlpha = ToAlpha;
	ClientColorFade_Parms.FadeTime = FadeTime;

	this->ProcessEvent ( pFnClientColorFade, &ClientColorFade_Parms, NULL );
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bDesiredPauseState             ( CPF_Parm )

void AGamePlayerController::eventWarmupPause ( unsigned long bDesiredPauseState )
{
	static UFunction* pFnWarmupPause = NULL;

	if ( ! pFnWarmupPause )
		pFnWarmupPause = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.WarmupPause" );

	AGamePlayerController_eventWarmupPause_Parms WarmupPause_Parms;
	WarmupPause_Parms.bDesiredPauseState = bDesiredPauseState;

	this->ProcessEvent ( pFnWarmupPause, &WarmupPause_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerController::CanUnpauseWarmup ( )
{
	static UFunction* pFnCanUnpauseWarmup = NULL;

	if ( ! pFnCanUnpauseWarmup )
		pFnCanUnpauseWarmup = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.CanUnpauseWarmup" );

	AGamePlayerController_execCanUnpauseWarmup_Parms CanUnpauseWarmup_Parms;

	this->ProcessEvent ( pFnCanUnpauseWarmup, &CanUnpauseWarmup_Parms, NULL );

	return CanUnpauseWarmup_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGamePlayerController::GetCurrentMovie ( struct FString* MovieName )
{
	static UFunction* pFnGetCurrentMovie = NULL;

	if ( ! pFnGetCurrentMovie )
		pFnGetCurrentMovie = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.GetCurrentMovie" );

	AGamePlayerController_execGetCurrentMovie_Parms GetCurrentMovie_Parms;

	pFnGetCurrentMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentMovie, &GetCurrentMovie_Parms, NULL );

	pFnGetCurrentMovie->FunctionFlags |= 0x400;

	if ( MovieName )
		memcpy ( MovieName, &GetCurrentMovie_Parms.MovieName, 0xC );
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native ) iNative [0xFFFF0000]
// Parameters infos:
// float                          DelayInSeconds                 ( CPF_Parm )
// unsigned long                  bAllowMovieToFinish            ( CPF_Parm )
// unsigned long                  bForceStopNonSkippable         ( CPF_Parm )
// unsigned long                  bForceStopLoadingMovie         ( CPF_Parm )

void AGamePlayerController::eventClientStopMovie ( float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie )
{
	static UFunction* pFnClientStopMovie = NULL;

	if ( ! pFnClientStopMovie )
		pFnClientStopMovie = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.ClientStopMovie" );

	AGamePlayerController_eventClientStopMovie_Parms ClientStopMovie_Parms;
	ClientStopMovie_Parms.DelayInSeconds = DelayInSeconds;
	ClientStopMovie_Parms.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Parms.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Parms.bForceStopLoadingMovie = bForceStopLoadingMovie;

	unsigned short NativeIndex = pFnClientStopMovie->iNative;
	pFnClientStopMovie->iNative = 0;

	pFnClientStopMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientStopMovie, &ClientStopMovie_Parms, NULL );

	pFnClientStopMovie->FunctionFlags |= 0x400;

	pFnClientStopMovie->iNative = NativeIndex;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01024DC1] ( FUNC_Final | FUNC_Event | FUNC_Native ) iNative [0xFFFF0000]
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_NeedCtorLink )
// int                            InStartOfRenderingMovieFrame   ( CPF_OptionalParm | CPF_Parm )
// int                            InEndOfRenderingMovieFrame     ( CPF_OptionalParm | CPF_Parm )

void AGamePlayerController::eventClientPlayMovie ( struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame )
{
	static UFunction* pFnClientPlayMovie = NULL;

	if ( ! pFnClientPlayMovie )
		pFnClientPlayMovie = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.ClientPlayMovie" );

	AGamePlayerController_eventClientPlayMovie_Parms ClientPlayMovie_Parms;
	memcpy ( &ClientPlayMovie_Parms.MovieName, &MovieName, 0xC );
	ClientPlayMovie_Parms.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	ClientPlayMovie_Parms.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;

	unsigned short NativeIndex = pFnClientPlayMovie->iNative;
	pFnClientPlayMovie->iNative = 0;

	pFnClientPlayMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientPlayMovie, &ClientPlayMovie_Parms, NULL );

	pFnClientPlayMovie->FunctionFlags |= 0x400;

	pFnClientPlayMovie->iNative = NativeIndex;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::KeepPlayingLoadingMovie ( )
{
	static UFunction* pFnKeepPlayingLoadingMovie = NULL;

	if ( ! pFnKeepPlayingLoadingMovie )
		pFnKeepPlayingLoadingMovie = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie" );

	AGamePlayerController_execKeepPlayingLoadingMovie_Parms KeepPlayingLoadingMovie_Parms;

	pFnKeepPlayingLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Parms, NULL );

	pFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bShowMovie                     ( CPF_Parm )
// unsigned long                  bPauseAfterHide                ( CPF_OptionalParm | CPF_Parm )
// float                          PauseDuration                  ( CPF_OptionalParm | CPF_Parm )
// float                          KeepPlayingDuration            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverridePreviousDelays        ( CPF_OptionalParm | CPF_Parm )

void AGamePlayerController::ShowLoadingMovie ( unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays )
{
	static UFunction* pFnShowLoadingMovie = NULL;

	if ( ! pFnShowLoadingMovie )
		pFnShowLoadingMovie = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.ShowLoadingMovie" );

	AGamePlayerController_execShowLoadingMovie_Parms ShowLoadingMovie_Parms;
	ShowLoadingMovie_Parms.bShowMovie = bShowMovie;
	ShowLoadingMovie_Parms.bPauseAfterHide = bPauseAfterHide;
	ShowLoadingMovie_Parms.PauseDuration = PauseDuration;
	ShowLoadingMovie_Parms.KeepPlayingDuration = KeepPlayingDuration;
	ShowLoadingMovie_Parms.bOverridePreviousDelays = bOverridePreviousDelays;

	pFnShowLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoadingMovie, &ShowLoadingMovie_Parms, NULL );

	pFnShowLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.GetCurrentSoundMode
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName AGamePlayerController::GetCurrentSoundMode ( )
{
	static UFunction* pFnGetCurrentSoundMode = NULL;

	if ( ! pFnGetCurrentSoundMode )
		pFnGetCurrentSoundMode = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.GetCurrentSoundMode" );

	AGamePlayerController_execGetCurrentSoundMode_Parms GetCurrentSoundMode_Parms;

	this->ProcessEvent ( pFnGetCurrentSoundMode, &GetCurrentSoundMode_Parms, NULL );

	return GetCurrentSoundMode_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
// Parameters infos:
// struct FName                   InSoundModeName                ( CPF_Parm )

void AGamePlayerController::SetSoundMode ( struct FName InSoundModeName )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.SetSoundMode" );

	AGamePlayerController_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy ( &SetSoundMode_Parms.InSoundModeName, &InSoundModeName, 0x8 );

	this->ProcessEvent ( pFnSetSoundMode, &SetSoundMode_Parms, NULL );
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
// Parameters infos:
// class UCameraShake*            ShakeData                      ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void AGamePlayerController::DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale )
{
	static UFunction* pFnDoForceFeedbackForScreenShake = NULL;

	if ( ! pFnDoForceFeedbackForScreenShake )
		pFnDoForceFeedbackForScreenShake = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake" );

	AGamePlayerController_execDoForceFeedbackForScreenShake_Parms DoForceFeedbackForScreenShake_Parms;
	DoForceFeedbackForScreenShake_Parms.ShakeData = ShakeData;
	DoForceFeedbackForScreenShake_Parms.Scale = Scale;

	this->ProcessEvent ( pFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGamePlayerController::eventNotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnNotifyCrowdAgentInRadius = NULL;

	if ( ! pFnNotifyCrowdAgentInRadius )
		pFnNotifyCrowdAgentInRadius = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius" );

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Parms NotifyCrowdAgentInRadius_Parms;
	NotifyCrowdAgentInRadius_Parms.Agent = Agent;

	this->ProcessEvent ( pFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventNotifyCrowdAgentRefresh ( )
{
	static UFunction* pFnNotifyCrowdAgentRefresh = NULL;

	if ( ! pFnNotifyCrowdAgentRefresh )
		pFnNotifyCrowdAgentRefresh = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh" );

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Parms NotifyCrowdAgentRefresh_Parms;

	this->ProcessEvent ( pFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AGamePlayerController::CrowdDebug ( unsigned long bEnabled )
{
	static UFunction* pFnCrowdDebug = NULL;

	if ( ! pFnCrowdDebug )
		pFnCrowdDebug = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.CrowdDebug" );

	AGamePlayerController_execCrowdDebug_Parms CrowdDebug_Parms;
	CrowdDebug_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnCrowdDebug, &CrowdDebug_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdToggle
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGamePlayerController::CrowdToggle ( )
{
	static UFunction* pFnCrowdToggle = NULL;

	if ( ! pFnCrowdToggle )
		pFnCrowdToggle = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.CrowdToggle" );

	AGamePlayerController_execCrowdToggle_Parms CrowdToggle_Parms;

	this->ProcessEvent ( pFnCrowdToggle, &CrowdToggle_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdFocus
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGamePlayerController::CrowdFocus ( )
{
	static UFunction* pFnCrowdFocus = NULL;

	if ( ! pFnCrowdFocus )
		pFnCrowdFocus = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.CrowdFocus" );

	AGamePlayerController_execCrowdFocus_Parms CrowdFocus_Parms;

	this->ProcessEvent ( pFnCrowdFocus, &CrowdFocus_Parms, NULL );
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGamePlayerController::GetUIPlayerIndex ( )
{
	static UFunction* pFnGetUIPlayerIndex = NULL;

	if ( ! pFnGetUIPlayerIndex )
		pFnGetUIPlayerIndex = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerController.GetUIPlayerIndex" );

	AGamePlayerController_execGetUIPlayerIndex_Parms GetUIPlayerIndex_Parms;

	pFnGetUIPlayerIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUIPlayerIndex, &GetUIPlayerIndex_Parms, NULL );

	pFnGetUIPlayerIndex->FunctionFlags |= 0x400;

	return GetUIPlayerIndex_Parms.ReturnValue;
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] 
// Parameters infos:
// class UMobilePlayerInput*      MobileInput                    ( CPF_Parm )

void AMobileHUD::DrawMobileTilt ( class UMobilePlayerInput* MobileInput )
{
	static UFunction* pFnDrawMobileTilt = NULL;

	if ( ! pFnDrawMobileTilt )
		pFnDrawMobileTilt = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.DrawMobileTilt" );

	AMobileHUD_execDrawMobileTilt_Parms DrawMobileTilt_Parms;
	DrawMobileTilt_Parms.MobileInput = MobileInput;

	this->ProcessEvent ( pFnDrawMobileTilt, &DrawMobileTilt_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Trackball ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Trackball = NULL;

	if ( ! pFnDrawMobileZone_Trackball )
		pFnDrawMobileZone_Trackball = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.DrawMobileZone_Trackball" );

	AMobileHUD_execDrawMobileZone_Trackball_Parms DrawMobileZone_Trackball_Parms;
	DrawMobileZone_Trackball_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Trackball, &DrawMobileZone_Trackball_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Joystick ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Joystick = NULL;

	if ( ! pFnDrawMobileZone_Joystick )
		pFnDrawMobileZone_Joystick = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.DrawMobileZone_Joystick" );

	AMobileHUD_execDrawMobileZone_Joystick_Parms DrawMobileZone_Joystick_Parms;
	DrawMobileZone_Joystick_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUD::DrawMobileZone_Button ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Button = NULL;

	if ( ! pFnDrawMobileZone_Button )
		pFnDrawMobileZone_Button = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.DrawMobileZone_Button" );

	AMobileHUD_execDrawMobileZone_Button_Parms DrawMobileZone_Button_Parms;
	DrawMobileZone_Button_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Button, &DrawMobileZone_Button_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawInputZoneOverlays ( )
{
	static UFunction* pFnDrawInputZoneOverlays = NULL;

	if ( ! pFnDrawInputZoneOverlays )
		pFnDrawInputZoneOverlays = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.DrawInputZoneOverlays" );

	AMobileHUD_execDrawInputZoneOverlays_Parms DrawInputZoneOverlays_Parms;

	this->ProcessEvent ( pFnDrawInputZoneOverlays, &DrawInputZoneOverlays_Parms, NULL );
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderMobileMenu ( )
{
	static UFunction* pFnRenderMobileMenu = NULL;

	if ( ! pFnRenderMobileMenu )
		pFnRenderMobileMenu = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.RenderMobileMenu" );

	AMobileHUD_execRenderMobileMenu_Parms RenderMobileMenu_Parms;

	this->ProcessEvent ( pFnRenderMobileMenu, &RenderMobileMenu_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] 
// Parameters infos:

void AMobileHUD::PostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.PostRender" );

	AMobileHUD_execPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AMobileHUD::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.MobileHUD.PostBeginPlay" );

	AMobileHUD_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnDoubleTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnDoubleTapDelegate = NULL;

	if ( ! pFnOnDoubleTapDelegate )
		pFnOnDoubleTapDelegate = UObject::FindObject<UFunction> ( "Function GameFramework.MobileInputZone.OnDoubleTapDelegate" );

	UMobileInputZone_execOnDoubleTapDelegate_Parms OnDoubleTapDelegate_Parms;
	OnDoubleTapDelegate_Parms.Zone = Zone;
	OnDoubleTapDelegate_Parms.EventType = EventType;
	memcpy ( &OnDoubleTapDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnOnDoubleTapDelegate, &OnDoubleTapDelegate_Parms, NULL );

	return OnDoubleTapDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnTapDelegate = NULL;

	if ( ! pFnOnTapDelegate )
		pFnOnTapDelegate = UObject::FindObject<UFunction> ( "Function GameFramework.MobileInputZone.OnTapDelegate" );

	UMobileInputZone_execOnTapDelegate_Parms OnTapDelegate_Parms;
	OnTapDelegate_Parms.Zone = Zone;
	OnTapDelegate_Parms.EventType = EventType;
	memcpy ( &OnTapDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnOnTapDelegate, &OnTapDelegate_Parms, NULL );

	return OnTapDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            Handle                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool UMobileInputZone::OnProcessInputDelegate ( class UMobileInputZone* Zone, float DeltaTime, int Handle, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnOnProcessInputDelegate = NULL;

	if ( ! pFnOnProcessInputDelegate )
		pFnOnProcessInputDelegate = UObject::FindObject<UFunction> ( "Function GameFramework.MobileInputZone.OnProcessInputDelegate" );

	UMobileInputZone_execOnProcessInputDelegate_Parms OnProcessInputDelegate_Parms;
	OnProcessInputDelegate_Parms.Zone = Zone;
	OnProcessInputDelegate_Parms.DeltaTime = DeltaTime;
	OnProcessInputDelegate_Parms.Handle = Handle;
	OnProcessInputDelegate_Parms.EventType = EventType;
	memcpy ( &OnProcessInputDelegate_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnOnProcessInputDelegate, &OnProcessInputDelegate_Parms, NULL );

	return OnProcessInputDelegate_Parms.ReturnValue;
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::DeactivateZone ( )
{
	static UFunction* pFnDeactivateZone = NULL;

	if ( ! pFnDeactivateZone )
		pFnDeactivateZone = UObject::FindObject<UFunction> ( "Function GameFramework.MobileInputZone.DeactivateZone" );

	UMobileInputZone_execDeactivateZone_Parms DeactivateZone_Parms;

	pFnDeactivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeactivateZone, &DeactivateZone_Parms, NULL );

	pFnDeactivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::ActivateZone ( )
{
	static UFunction* pFnActivateZone = NULL;

	if ( ! pFnActivateZone )
		pFnActivateZone = UObject::FindObject<UFunction> ( "Function GameFramework.MobileInputZone.ActivateZone" );

	UMobileInputZone_execActivateZone_Parms ActivateZone_Parms;

	pFnActivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActivateZone, &ActivateZone_Parms, NULL );

	pFnActivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuObject::RenderObject ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuObject.RenderObject" );

	UMobileMenuObject_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuButton::RenderCaption ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderCaption = NULL;

	if ( ! pFnRenderCaption )
		pFnRenderCaption = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuButton.RenderCaption" );

	UMobileMenuButton_execRenderCaption_Parms RenderCaption_Parms;
	RenderCaption_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderCaption, &RenderCaption_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuButton::RenderObject ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuButton.RenderObject" );

	UMobileMenuButton_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuImage::RenderObject ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuImage.RenderObject" );

	UMobileMenuImage_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )

bool UMobileMenuScene::MobileMenuCommand ( struct FString Command )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.MobileMenuCommand" );

	UMobileMenuScene_execMobileMenuCommand_Parms MobileMenuCommand_Parms;
	memcpy ( &MobileMenuCommand_Parms.Command, &Command, 0xC );

	this->ProcessEvent ( pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );

	return MobileMenuCommand_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] 
// Parameters infos:
// class UMobileMenuObject*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Tag                            ( CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuObject* UMobileMenuScene::FindMenuObject ( struct FString Tag )
{
	static UFunction* pFnFindMenuObject = NULL;

	if ( ! pFnFindMenuObject )
		pFnFindMenuObject = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.FindMenuObject" );

	UMobileMenuScene_execFindMenuObject_Parms FindMenuObject_Parms;
	memcpy ( &FindMenuObject_Parms.Tag, &Tag, 0xC );

	this->ProcessEvent ( pFnFindMenuObject, &FindMenuObject_Parms, NULL );

	return FindMenuObject_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileMenuScene::CleanUpScene ( )
{
	static UFunction* pFnCleanUpScene = NULL;

	if ( ! pFnCleanUpScene )
		pFnCleanUpScene = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.CleanUpScene" );

	UMobileMenuScene_execCleanUpScene_Parms CleanUpScene_Parms;

	pFnCleanUpScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCleanUpScene, &CleanUpScene_Parms, NULL );

	pFnCleanUpScene->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.Closed" );

	UMobileMenuScene_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMobileMenuScene::Closing ( )
{
	static UFunction* pFnClosing = NULL;

	if ( ! pFnClosing )
		pFnClosing = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.Closing" );

	UMobileMenuScene_execClosing_Parms Closing_Parms;

	this->ProcessEvent ( pFnClosing, &Closing_Parms, NULL );

	return Closing_Parms.ReturnValue;
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] 
// Parameters infos:
// struct FString                 Mode                           ( CPF_Parm | CPF_NeedCtorLink )

void UMobileMenuScene::Opened ( struct FString Mode )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.Opened" );

	UMobileMenuScene_execOpened_Parms Opened_Parms;
	memcpy ( &Opened_Parms.Mode, &Mode, 0xC );

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UMobileMenuScene::eventOnTouch ( class UMobileMenuObject* Sender, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.OnTouch" );

	UMobileMenuScene_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuScene::RenderScene ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuScene.RenderScene" );

	UMobileMenuScene_execRenderScene_Parms RenderScene_Parms;
	RenderScene_Parms.Canvas = Canvas;
	RenderScene_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 MenuClassName                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Mode                           ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::OpenMobileMenuMode ( struct FString MenuClassName, struct FString Mode )
{
	static UFunction* pFnOpenMobileMenuMode = NULL;

	if ( ! pFnOpenMobileMenuMode )
		pFnOpenMobileMenuMode = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.OpenMobileMenuMode" );

	UMobilePlayerInput_execOpenMobileMenuMode_Parms OpenMobileMenuMode_Parms;
	memcpy ( &OpenMobileMenuMode_Parms.MenuClassName, &MenuClassName, 0xC );
	memcpy ( &OpenMobileMenuMode_Parms.Mode, &Mode, 0xC );

	this->ProcessEvent ( pFnOpenMobileMenuMode, &OpenMobileMenuMode_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 MenuClassName                  ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::OpenMobileMenu ( struct FString MenuClassName )
{
	static UFunction* pFnOpenMobileMenu = NULL;

	if ( ! pFnOpenMobileMenu )
		pFnOpenMobileMenu = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.OpenMobileMenu" );

	UMobilePlayerInput_execOpenMobileMenu_Parms OpenMobileMenu_Parms;
	memcpy ( &OpenMobileMenu_Parms.MenuClassName, &MenuClassName, 0xC );

	this->ProcessEvent ( pFnOpenMobileMenu, &OpenMobileMenu_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 MenuCommand                    ( CPF_Parm | CPF_NeedCtorLink )

void UMobilePlayerInput::MobileMenuCommand ( struct FString MenuCommand )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.MobileMenuCommand" );

	UMobilePlayerInput_execMobileMenuCommand_Parms MobileMenuCommand_Parms;
	memcpy ( &MobileMenuCommand_Parms.MenuCommand, &MenuCommand, 0xC );

	this->ProcessEvent ( pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] 
// Parameters infos:
// struct FString                 PendingURL                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  TravelType                     ( CPF_Parm )
// unsigned long                  bIsSeamlessTravel              ( CPF_Parm )

void UMobilePlayerInput::PreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel )
{
	static UFunction* pFnPreClientTravel = NULL;

	if ( ! pFnPreClientTravel )
		pFnPreClientTravel = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.PreClientTravel" );

	UMobilePlayerInput_execPreClientTravel_Parms PreClientTravel_Parms;
	memcpy ( &PreClientTravel_Parms.PendingURL, &PendingURL, 0xC );
	PreClientTravel_Parms.TravelType = TravelType;
	PreClientTravel_Parms.bIsSeamlessTravel = bIsSeamlessTravel;

	this->ProcessEvent ( pFnPreClientTravel, &PreClientTravel_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobilePlayerInput::eventRenderMenus ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderMenus = NULL;

	if ( ! pFnRenderMenus )
		pFnRenderMenus = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.RenderMenus" );

	UMobilePlayerInput_eventRenderMenus_Parms RenderMenus_Parms;
	RenderMenus_Parms.Canvas = Canvas;
	RenderMenus_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderMenus, &RenderMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuScene*        SceneToClose                   ( CPF_Parm )

void UMobilePlayerInput::eventCloseMenuScene ( class UMobileMenuScene* SceneToClose )
{
	static UFunction* pFnCloseMenuScene = NULL;

	if ( ! pFnCloseMenuScene )
		pFnCloseMenuScene = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.CloseMenuScene" );

	UMobilePlayerInput_eventCloseMenuScene_Parms CloseMenuScene_Parms;
	CloseMenuScene_Parms.SceneToClose = SceneToClose;

	this->ProcessEvent ( pFnCloseMenuScene, &CloseMenuScene_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuScene*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  SceneClass                     ( CPF_Parm )
// struct FString                 Mode                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

class UMobileMenuScene* UMobilePlayerInput::eventOpenMenuScene ( class UClass* SceneClass, struct FString Mode )
{
	static UFunction* pFnOpenMenuScene = NULL;

	if ( ! pFnOpenMenuScene )
		pFnOpenMenuScene = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.OpenMenuScene" );

	UMobilePlayerInput_eventOpenMenuScene_Parms OpenMenuScene_Parms;
	OpenMenuScene_Parms.SceneClass = SceneClass;
	memcpy ( &OpenMenuScene_Parms.Mode, &Mode, 0xC );

	this->ProcessEvent ( pFnOpenMenuScene, &OpenMenuScene_Parms, NULL );

	return OpenMenuScene_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.InitializeMenuScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UMobileMenuScene*        Scene                          ( CPF_Parm )

void UMobilePlayerInput::InitializeMenuScene ( class UMobileMenuScene* Scene )
{
	static UFunction* pFnInitializeMenuScene = NULL;

	if ( ! pFnInitializeMenuScene )
		pFnInitializeMenuScene = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.InitializeMenuScene" );

	UMobilePlayerInput_execInitializeMenuScene_Parms InitializeMenuScene_Parms;
	InitializeMenuScene_Parms.Scene = Scene;

	pFnInitializeMenuScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitializeMenuScene, &InitializeMenuScene_Parms, NULL );

	pFnInitializeMenuScene->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.StopUseAttractModeInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::StopUseAttractModeInputConfig ( )
{
	static UFunction* pFnStopUseAttractModeInputConfig = NULL;

	if ( ! pFnStopUseAttractModeInputConfig )
		pFnStopUseAttractModeInputConfig = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.StopUseAttractModeInputConfig" );

	UMobilePlayerInput_execStopUseAttractModeInputConfig_Parms StopUseAttractModeInputConfig_Parms;

	this->ProcessEvent ( pFnStopUseAttractModeInputConfig, &StopUseAttractModeInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.StartUseAttractModeInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::StartUseAttractModeInputConfig ( )
{
	static UFunction* pFnStartUseAttractModeInputConfig = NULL;

	if ( ! pFnStartUseAttractModeInputConfig )
		pFnStartUseAttractModeInputConfig = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.StartUseAttractModeInputConfig" );

	UMobilePlayerInput_execStartUseAttractModeInputConfig_Parms StartUseAttractModeInputConfig_Parms;

	this->ProcessEvent ( pFnStartUseAttractModeInputConfig, &StartUseAttractModeInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PrevUserMobileInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::PrevUserMobileInputConfig ( )
{
	static UFunction* pFnPrevUserMobileInputConfig = NULL;

	if ( ! pFnPrevUserMobileInputConfig )
		pFnPrevUserMobileInputConfig = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.PrevUserMobileInputConfig" );

	UMobilePlayerInput_execPrevUserMobileInputConfig_Parms PrevUserMobileInputConfig_Parms;

	this->ProcessEvent ( pFnPrevUserMobileInputConfig, &PrevUserMobileInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.NextUserMobileInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::NextUserMobileInputConfig ( )
{
	static UFunction* pFnNextUserMobileInputConfig = NULL;

	if ( ! pFnNextUserMobileInputConfig )
		pFnNextUserMobileInputConfig = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.NextUserMobileInputConfig" );

	UMobilePlayerInput_execNextUserMobileInputConfig_Parms NextUserMobileInputConfig_Parms;

	this->ProcessEvent ( pFnNextUserMobileInputConfig, &NextUserMobileInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SetUserMobileInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            ConfigIndex                    ( CPF_Parm )

void UMobilePlayerInput::SetUserMobileInputConfig ( int ConfigIndex )
{
	static UFunction* pFnSetUserMobileInputConfig = NULL;

	if ( ! pFnSetUserMobileInputConfig )
		pFnSetUserMobileInputConfig = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.SetUserMobileInputConfig" );

	UMobilePlayerInput_execSetUserMobileInputConfig_Parms SetUserMobileInputConfig_Parms;
	SetUserMobileInputConfig_Parms.ConfigIndex = ConfigIndex;

	this->ProcessEvent ( pFnSetUserMobileInputConfig, &SetUserMobileInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] 
// Parameters infos:
// TArray< class UMobileInputZone* > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< class UMobileInputZone* > UMobilePlayerInput::GetCurrentZones ( )
{
	static UFunction* pFnGetCurrentZones = NULL;

	if ( ! pFnGetCurrentZones )
		pFnGetCurrentZones = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.GetCurrentZones" );

	UMobilePlayerInput_execGetCurrentZones_Parms GetCurrentZones_Parms;

	this->ProcessEvent ( pFnGetCurrentZones, &GetCurrentZones_Parms, NULL );

	return GetCurrentZones_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMobilePlayerInput::HasZones ( )
{
	static UFunction* pFnHasZones = NULL;

	if ( ! pFnHasZones )
		pFnHasZones = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.HasZones" );

	UMobilePlayerInput_execHasZones_Parms HasZones_Parms;

	this->ProcessEvent ( pFnHasZones, &HasZones_Parms, NULL );

	return HasZones_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ZoneName                       ( CPF_Parm | CPF_NeedCtorLink )

class UMobileInputZone* UMobilePlayerInput::FindorAddZone ( struct FString ZoneName )
{
	static UFunction* pFnFindorAddZone = NULL;

	if ( ! pFnFindorAddZone )
		pFnFindorAddZone = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.FindorAddZone" );

	UMobilePlayerInput_execFindorAddZone_Parms FindorAddZone_Parms;
	memcpy ( &FindorAddZone_Parms.ZoneName, &ZoneName, 0xC );

	this->ProcessEvent ( pFnFindorAddZone, &FindorAddZone_Parms, NULL );

	return FindorAddZone_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] 
// Parameters infos:
// class UMobileInputZone*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ZoneName                       ( CPF_Parm | CPF_NeedCtorLink )

class UMobileInputZone* UMobilePlayerInput::FindZone ( struct FString ZoneName )
{
	static UFunction* pFnFindZone = NULL;

	if ( ! pFnFindZone )
		pFnFindZone = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.FindZone" );

	UMobilePlayerInput_execFindZone_Parms FindZone_Parms;
	memcpy ( &FindZone_Parms.ZoneName, &ZoneName, 0xC );

	this->ProcessEvent ( pFnFindZone, &FindZone_Parms, NULL );

	return FindZone_Parms.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitializeInputZones ( )
{
	static UFunction* pFnInitializeInputZones = NULL;

	if ( ! pFnInitializeInputZones )
		pFnInitializeInputZones = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.InitializeInputZones" );

	UMobilePlayerInput_execInitializeInputZones_Parms InitializeInputZones_Parms;

	this->ProcessEvent ( pFnInitializeInputZones, &InitializeInputZones_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.InitInputSystem" );

	UMobilePlayerInput_execInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// float                          Delta                          ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void UMobilePlayerInput::SendInputAxis ( struct FName Key, float Delta, float DeltaTime )
{
	static UFunction* pFnSendInputAxis = NULL;

	if ( ! pFnSendInputAxis )
		pFnSendInputAxis = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.SendInputAxis" );

	UMobilePlayerInput_execSendInputAxis_Parms SendInputAxis_Parms;
	memcpy ( &SendInputAxis_Parms.Key, &Key, 0x8 );
	SendInputAxis_Parms.Delta = Delta;
	SendInputAxis_Parms.DeltaTime = DeltaTime;

	pFnSendInputAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendInputAxis, &SendInputAxis_Parms, NULL );

	pFnSendInputAxis->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  Event                          ( CPF_Parm )
// float                          AmountDepressed                ( CPF_Parm )

void UMobilePlayerInput::SendInputKey ( struct FName Key, unsigned char Event, float AmountDepressed )
{
	static UFunction* pFnSendInputKey = NULL;

	if ( ! pFnSendInputKey )
		pFnSendInputKey = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.SendInputKey" );

	UMobilePlayerInput_execSendInputKey_Parms SendInputKey_Parms;
	memcpy ( &SendInputKey_Parms.Key, &Key, 0x8 );
	SendInputKey_Parms.Event = Event;
	SendInputKey_Parms.AmountDepressed = AmountDepressed;

	pFnSendInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendInputKey, &SendInputKey_Parms, NULL );

	pFnSendInputKey->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::NativeInitializeInputZones ( )
{
	static UFunction* pFnNativeInitializeInputZones = NULL;

	if ( ! pFnNativeInitializeInputZones )
		pFnNativeInitializeInputZones = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.NativeInitializeInputZones" );

	UMobilePlayerInput_execNativeInitializeInputZones_Parms NativeInitializeInputZones_Parms;

	pFnNativeInitializeInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInitializeInputZones, &NativeInitializeInputZones_Parms, NULL );

	pFnNativeInitializeInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::NativeInitializeInputSystem ( )
{
	static UFunction* pFnNativeInitializeInputSystem = NULL;

	if ( ! pFnNativeInitializeInputSystem )
		pFnNativeInitializeInputSystem = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem" );

	UMobilePlayerInput_execNativeInitializeInputSystem_Parms NativeInitializeInputSystem_Parms;

	pFnNativeInitializeInputSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInitializeInputSystem, &NativeInitializeInputSystem_Parms, NULL );

	pFnNativeInitializeInputSystem->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.OnMobileTilt
// [0x00120000] 
// Parameters infos:
// class UPlayerInput*            PlayerInput                    ( CPF_Parm )
// float                          DeltaPitch                     ( CPF_Parm )
// float                          DeltaYaw                       ( CPF_Parm )

void UMobilePlayerInput::OnMobileTilt ( class UPlayerInput* PlayerInput, float DeltaPitch, float DeltaYaw )
{
	static UFunction* pFnOnMobileTilt = NULL;

	if ( ! pFnOnMobileTilt )
		pFnOnMobileTilt = UObject::FindObject<UFunction> ( "Function GameFramework.MobilePlayerInput.OnMobileTilt" );

	UMobilePlayerInput_execOnMobileTilt_Parms OnMobileTilt_Parms;
	OnMobileTilt_Parms.PlayerInput = PlayerInput;
	OnMobileTilt_Parms.DeltaPitch = DeltaPitch;
	OnMobileTilt_Parms.DeltaYaw = DeltaYaw;

	this->ProcessEvent ( pFnOnMobileTilt, &OnMobileTilt_Parms, NULL );
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = UObject::FindObject<UFunction> ( "Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle" );

	UNavMeshGoal_OutOfViewFrom_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InOutOfViewLocation            ( CPF_Parm )

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint ( class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation )
{
	static UFunction* pFnMustBeHiddenFromThisPoint = NULL;

	if ( ! pFnMustBeHiddenFromThisPoint )
		pFnMustBeHiddenFromThisPoint = UObject::FindObject<UFunction> ( "Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint" );

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms MustBeHiddenFromThisPoint_Parms;
	MustBeHiddenFromThisPoint_Parms.NavHandle = NavHandle;
	memcpy ( &MustBeHiddenFromThisPoint_Parms.InOutOfViewLocation, &InOutOfViewLocation, 0xC );

	this->ProcessEvent ( pFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Parms, NULL );

	return MustBeHiddenFromThisPoint_Parms.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::RecycleNative ( )
{
	static UFunction* pFnRecycleNative = NULL;

	if ( ! pFnRecycleNative )
		pFnRecycleNative = UObject::FindObject<UFunction> ( "Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative" );

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms RecycleNative_Parms;

	pFnRecycleNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRecycleNative, &RecycleNative_Parms, NULL );

	pFnRecycleNative->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = UObject::FindObject<UFunction> ( "Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle" );

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InLocation                     ( CPF_Const | CPF_Parm )
// struct FRotator                InRotation                     ( CPF_Const | CPF_Parm )
// float                          InDistanceToCheck              ( CPF_Const | CPF_Parm )
// TArray< struct FVector >       InLocationsToCheck             ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations ( class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck )
{
	static UFunction* pFnBiasAgainstPolysWithinDistanceOfLocations = NULL;

	if ( ! pFnBiasAgainstPolysWithinDistanceOfLocations )
		pFnBiasAgainstPolysWithinDistanceOfLocations = UObject::FindObject<UFunction> ( "Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations" );

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms BiasAgainstPolysWithinDistanceOfLocations_Parms;
	BiasAgainstPolysWithinDistanceOfLocations_Parms.NavHandle = NavHandle;
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocation, &InLocation, 0xC );
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InRotation, &InRotation, 0xC );
	BiasAgainstPolysWithinDistanceOfLocations_Parms.InDistanceToCheck = InDistanceToCheck;
	memcpy ( &BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocationsToCheck, &InLocationsToCheck, 0xC );

	this->ProcessEvent ( pFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Parms, NULL );

	return BiasAgainstPolysWithinDistanceOfLocations_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdPopulationManagerToggle::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion" );

	USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqAct_GameCrowdPopulationManagerToggle::eventFindPopMgrTarget ( )
{
	static UFunction* pFnFindPopMgrTarget = NULL;

	if ( ! pFnFindPopMgrTarget )
		pFnFindPopMgrTarget = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FindPopMgrTarget" );

	USeqAct_GameCrowdPopulationManagerToggle_eventFindPopMgrTarget_Parms FindPopMgrTarget_Parms;

	this->ProcessEvent ( pFnFindPopMgrTarget, &FindPopMgrTarget_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdSpawner::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion" );

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent
// [0x00820002] 
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::CreateNewAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup )
{
	static UFunction* pFnCreateNewAgent = NULL;

	if ( ! pFnCreateNewAgent )
		pFnCreateNewAgent = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent" );

	USeqAct_GameCrowdSpawner_execCreateNewAgent_Parms CreateNewAgent_Parms;
	CreateNewAgent_Parms.SpawnLoc = SpawnLoc;
	CreateNewAgent_Parms.AgentTemplate = AgentTemplate;
	CreateNewAgent_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnCreateNewAgent, &CreateNewAgent_Parms, NULL );

	return CreateNewAgent_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  SpawnLoc                       ( CPF_Parm )

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::eventSpawnAgent ( class AActor* SpawnLoc )
{
	static UFunction* pFnSpawnAgent = NULL;

	if ( ! pFnSpawnAgent )
		pFnSpawnAgent = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent" );

	USeqAct_GameCrowdSpawner_eventSpawnAgent_Parms SpawnAgent_Parms;
	SpawnAgent_Parms.SpawnLoc = SpawnLoc;

	this->ProcessEvent ( pFnSpawnAgent, &SpawnAgent_Parms, NULL );

	return SpawnAgent_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USeqAct_GameCrowdSpawner::UpdateSpawning ( float DeltaSeconds )
{
	static UFunction* pFnUpdateSpawning = NULL;

	if ( ! pFnUpdateSpawning )
		pFnUpdateSpawning = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning" );

	USeqAct_GameCrowdSpawner_execUpdateSpawning_Parms UpdateSpawning_Parms;
	UpdateSpawning_Parms.DeltaSeconds = DeltaSeconds;

	pFnUpdateSpawning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpawning, &UpdateSpawning_Parms, NULL );

	pFnUpdateSpawning->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void USeqAct_GameCrowdSpawner::KillAgents ( )
{
	static UFunction* pFnKillAgents = NULL;

	if ( ! pFnKillAgents )
		pFnKillAgents = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents" );

	USeqAct_GameCrowdSpawner_execKillAgents_Parms KillAgents_Parms;

	pFnKillAgents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKillAgents, &KillAgents_Parms, NULL );

	pFnKillAgents->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void USeqAct_GameCrowdSpawner::CacheSpawnerVars ( )
{
	static UFunction* pFnCacheSpawnerVars = NULL;

	if ( ! pFnCacheSpawnerVars )
		pFnCacheSpawnerVars = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars" );

	USeqAct_GameCrowdSpawner_execCacheSpawnerVars_Parms CacheSpawnerVars_Parms;

	pFnCacheSpawnerVars->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCacheSpawnerVars, &CacheSpawnerVars_Parms, NULL );

	pFnCacheSpawnerVars->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdAgent*         NewAgent                       ( CPF_Parm )

void USeqAct_GameCrowdSpawner::SpawnedAgent ( class AGameCrowdAgent* NewAgent )
{
	static UFunction* pFnSpawnedAgent = NULL;

	if ( ! pFnSpawnedAgent )
		pFnSpawnedAgent = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent" );

	USeqAct_GameCrowdSpawner_execSpawnedAgent_Parms SpawnedAgent_Parms;
	SpawnedAgent_Parms.NewAgent = NewAgent;

	pFnSpawnedAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawnedAgent, &SpawnedAgent_Parms, NULL );

	pFnSpawnedAgent->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgentSkeletal* Agent                          ( CPF_Parm )

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent )
{
	static UFunction* pFnSetCurrentAnimationActionFor = NULL;

	if ( ! pFnSetCurrentAnimationActionFor )
		pFnSetCurrentAnimationActionFor = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor" );

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms SetCurrentAnimationActionFor_Parms;
	SetCurrentAnimationActionFor_Parms.Agent = Agent;

	this->ProcessEvent ( pFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Parms, NULL );
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_PlayAgentAnimation::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject<UFunction> ( "Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion" );

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameCameraBase::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.ModifyPostProcessSettings" );

	UGameCameraBase_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0xC4 );
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.Init" );

	UGameCameraBase_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.ProcessViewRotation" );

	UGameCameraBase_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.UpdateCamera" );

	UGameCameraBase_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameCameraBase::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.ResetInterpolation" );

	UGameCameraBase_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         NewCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeInActive ( class UGameCameraBase* NewCamera )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.OnBecomeInActive" );

	UGameCameraBase_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.NewCamera = NewCamera;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = UObject::FindObject<UFunction> ( "Function GameFramework.GameCameraBase.OnBecomeActive" );

	UGameCameraBase_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.ResetInterpolation" );

	UGameThirdPersonCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameThirdPersonCamera::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings" );

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0xC4 );
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameThirdPersonCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.OnBecomeActive" );

	UGameThirdPersonCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.ProcessViewRotation" );

	UGameThirdPersonCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::UpdateCameraMode ( class APawn* P )
{
	static UFunction* pFnUpdateCameraMode = NULL;

	if ( ! pFnUpdateCameraMode )
		pFnUpdateCameraMode = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.UpdateCameraMode" );

	UGameThirdPersonCamera_execUpdateCameraMode_Parms UpdateCameraMode_Parms;
	UpdateCameraMode_Parms.P = P;

	this->ProcessEvent ( pFnUpdateCameraMode, &UpdateCameraMode_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode ( class APawn* P )
{
	static UFunction* pFnFindBestCameraMode = NULL;

	if ( ! pFnFindBestCameraMode )
		pFnFindBestCameraMode = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.FindBestCameraMode" );

	UGameThirdPersonCamera_execFindBestCameraMode_Parms FindBestCameraMode_Parms;
	FindBestCameraMode_Parms.P = P;

	this->ProcessEvent ( pFnFindBestCameraMode, &FindBestCameraMode_Parms, NULL );

	return FindBestCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
// Parameters infos:
// struct FRotator                Delta                          ( CPF_Parm )

void UGameThirdPersonCamera::AdjustFocusPointInterpolation ( struct FRotator Delta )
{
	static UFunction* pFnAdjustFocusPointInterpolation = NULL;

	if ( ! pFnAdjustFocusPointInterpolation )
		pFnAdjustFocusPointInterpolation = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation" );

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms AdjustFocusPointInterpolation_Parms;
	memcpy ( &AdjustFocusPointInterpolation_Parms.Delta, &Delta, 0xC );

	this->ProcessEvent ( pFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UGameThirdPersonCamera::GetActualFocusLocation ( )
{
	static UFunction* pFnGetActualFocusLocation = NULL;

	if ( ! pFnGetActualFocusLocation )
		pFnGetActualFocusLocation = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation" );

	UGameThirdPersonCamera_execGetActualFocusLocation_Parms GetActualFocusLocation_Parms;

	this->ProcessEvent ( pFnGetActualFocusLocation, &GetActualFocusLocation_Parms, NULL );

	return GetActualFocusLocation_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::eventUpdateFocusPoint ( class APawn* P )
{
	static UFunction* pFnUpdateFocusPoint = NULL;

	if ( ! pFnUpdateFocusPoint )
		pFnUpdateFocusPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint" );

	UGameThirdPersonCamera_eventUpdateFocusPoint_Parms UpdateFocusPoint_Parms;
	UpdateFocusPoint_Parms.P = P;

	this->ProcessEvent ( pFnUpdateFocusPoint, &UpdateFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
// Parameters infos:
// unsigned long                  bLeaveCameraRotation           ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::ClearFocusPoint ( unsigned long bLeaveCameraRotation )
{
	static UFunction* pFnClearFocusPoint = NULL;

	if ( ! pFnClearFocusPoint )
		pFnClearFocusPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.ClearFocusPoint" );

	UGameThirdPersonCamera_execClearFocusPoint_Parms ClearFocusPoint_Parms;
	ClearFocusPoint_Parms.bLeaveCameraRotation = bLeaveCameraRotation;

	this->ProcessEvent ( pFnClearFocusPoint, &ClearFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameThirdPersonCamera::GetFocusActor ( )
{
	static UFunction* pFnGetFocusActor = NULL;

	if ( ! pFnGetFocusActor )
		pFnGetFocusActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.GetFocusActor" );

	UGameThirdPersonCamera_execGetFocusActor_Parms GetFocusActor_Parms;

	this->ProcessEvent ( pFnGetFocusActor, &GetFocusActor_Parms, NULL );

	return GetFocusActor_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  FocusActor                     ( CPF_Parm )
// struct FName                   FocusBoneName                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnActor = NULL;

	if ( ! pFnSetFocusOnActor )
		pFnSetFocusOnActor = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.SetFocusOnActor" );

	UGameThirdPersonCamera_execSetFocusOnActor_Parms SetFocusOnActor_Parms;
	SetFocusOnActor_Parms.FocusActor = FocusActor;
	memcpy ( &SetFocusOnActor_Parms.FocusBoneName, &FocusBoneName, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnActor_Parms.CameraFOV = CameraFOV;
	SetFocusOnActor_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnActor_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	this->ProcessEvent ( pFnSetFocusOnActor, &SetFocusOnActor_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
// Parameters infos:
// struct FVector                 FocusWorldLoc                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnLoc = NULL;

	if ( ! pFnSetFocusOnLoc )
		pFnSetFocusOnLoc = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc" );

	UGameThirdPersonCamera_execSetFocusOnLoc_Parms SetFocusOnLoc_Parms;
	memcpy ( &SetFocusOnLoc_Parms.FocusWorldLoc, &FocusWorldLoc, 0xC );
	memcpy ( &SetFocusOnLoc_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnLoc_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnLoc_Parms.CameraFOV = CameraFOV;
	SetFocusOnLoc_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnLoc_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	this->ProcessEvent ( pFnSetFocusOnLoc, &SetFocusOnLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
// Parameters infos:
// int                            AngleOffset                    ( CPF_Parm )

void UGameThirdPersonCamera::AdjustTurn ( int AngleOffset )
{
	static UFunction* pFnAdjustTurn = NULL;

	if ( ! pFnAdjustTurn )
		pFnAdjustTurn = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.AdjustTurn" );

	UGameThirdPersonCamera_execAdjustTurn_Parms AdjustTurn_Parms;
	AdjustTurn_Parms.AngleOffset = AngleOffset;

	this->ProcessEvent ( pFnAdjustTurn, &AdjustTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameThirdPersonCamera::EndTurn ( )
{
	static UFunction* pFnEndTurn = NULL;

	if ( ! pFnEndTurn )
		pFnEndTurn = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.EndTurn" );

	UGameThirdPersonCamera_execEndTurn_Parms EndTurn_Parms;

	pFnEndTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndTurn, &EndTurn_Parms, NULL );

	pFnEndTurn->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
// Parameters infos:
// int                            StartAngle                     ( CPF_Parm )
// int                            EndAngle                       ( CPF_Parm )
// float                          TimeSec                        ( CPF_Parm )
// float                          DelaySec                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlignTargetWhenFinished       ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished )
{
	static UFunction* pFnBeginTurn = NULL;

	if ( ! pFnBeginTurn )
		pFnBeginTurn = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.BeginTurn" );

	UGameThirdPersonCamera_execBeginTurn_Parms BeginTurn_Parms;
	BeginTurn_Parms.StartAngle = StartAngle;
	BeginTurn_Parms.EndAngle = EndAngle;
	BeginTurn_Parms.TimeSec = TimeSec;
	BeginTurn_Parms.DelaySec = DelaySec;
	BeginTurn_Parms.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	this->ProcessEvent ( pFnBeginTurn, &BeginTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::PlayerUpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnPlayerUpdateCamera = NULL;

	if ( ! pFnPlayerUpdateCamera )
		pFnPlayerUpdateCamera = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera" );

	UGameThirdPersonCamera_execPlayerUpdateCamera_Parms PlayerUpdateCamera_Parms;
	PlayerUpdateCamera_Parms.P = P;
	PlayerUpdateCamera_Parms.CameraActor = CameraActor;
	PlayerUpdateCamera_Parms.DeltaTime = DeltaTime;

	pFnPlayerUpdateCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerUpdateCamera, &PlayerUpdateCamera_Parms, NULL );

	pFnPlayerUpdateCamera->FunctionFlags |= 0x400;

	if ( OutVT )
		memcpy ( OutVT, &PlayerUpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.UpdateCamera" );

	UGameThirdPersonCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCamera::eventGetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.GetDesiredFOV" );

	UGameThirdPersonCamera_eventGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.Init" );

	UGameThirdPersonCamera_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.Reset" );

	UGameThirdPersonCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ModeClass                      ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode ( class UClass* ModeClass )
{
	static UFunction* pFnCreateCameraMode = NULL;

	if ( ! pFnCreateCameraMode )
		pFnCreateCameraMode = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCamera.CreateCameraMode" );

	UGameThirdPersonCamera_execCreateCameraMode_Parms CreateCameraMode_Parms;
	CreateCameraMode_Parms.ModeClass = ModeClass;

	this->ProcessEvent ( pFnCreateCameraMode, &CreateCameraMode_Parms, NULL );

	return CreateCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          inHorizFOV                     ( CPF_Parm )
// class APawn*                   CameraTargetPawn               ( CPF_Parm )

float AGamePlayerCamera::AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn )
{
	static UFunction* pFnAdjustFOVForViewport = NULL;

	if ( ! pFnAdjustFOVForViewport )
		pFnAdjustFOVForViewport = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.AdjustFOVForViewport" );

	AGamePlayerCamera_execAdjustFOVForViewport_Parms AdjustFOVForViewport_Parms;
	AdjustFOVForViewport_Parms.inHorizFOV = inHorizFOV;
	AdjustFOVForViewport_Parms.CameraTargetPawn = CameraTargetPawn;

	pFnAdjustFOVForViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdjustFOVForViewport, &AdjustFOVForViewport_Parms, NULL );

	pFnAdjustFOVForViewport->FunctionFlags |= 0x400;

	return AdjustFOVForViewport_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.ProcessViewRotation" );

	AGamePlayerCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
// Parameters infos:

void AGamePlayerCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.ResetInterpolation" );

	AGamePlayerCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
// Parameters infos:
// struct FVector                 NewColorScale                  ( CPF_Parm )

void AGamePlayerCamera::SetColorScale ( struct FVector NewColorScale )
{
	static UFunction* pFnSetColorScale = NULL;

	if ( ! pFnSetColorScale )
		pFnSetColorScale = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.SetColorScale" );

	AGamePlayerCamera_execSetColorScale_Parms SetColorScale_Parms;
	memcpy ( &SetColorScale_Parms.NewColorScale, &NewColorScale, 0xC );

	this->ProcessEvent ( pFnSetColorScale, &SetColorScale_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.DisplayDebug" );

	AGamePlayerCamera_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] 
// Parameters infos:
// struct FTViewTarget            OutVT                          ( CPF_Const | CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateCameraLensEffects ( struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCameraLensEffects = NULL;

	if ( ! pFnUpdateCameraLensEffects )
		pFnUpdateCameraLensEffects = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects" );

	AGamePlayerCamera_execUpdateCameraLensEffects_Parms UpdateCameraLensEffects_Parms;

	this->ProcessEvent ( pFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCameraLensEffects_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.UpdateViewTarget" );

	AGamePlayerCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;
	UpdateViewTarget_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateViewTarget_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerCamera::ShouldConstrainAspectRatio ( )
{
	static UFunction* pFnShouldConstrainAspectRatio = NULL;

	if ( ! pFnShouldConstrainAspectRatio )
		pFnShouldConstrainAspectRatio = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio" );

	AGamePlayerCamera_execShouldConstrainAspectRatio_Parms ShouldConstrainAspectRatio_Parms;

	this->ProcessEvent ( pFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Parms, NULL );

	return ShouldConstrainAspectRatio_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  CameraTarget                   ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType ( class AActor* CameraTarget )
{
	static UFunction* pFnFindBestCameraType = NULL;

	if ( ! pFnFindBestCameraType )
		pFnFindBestCameraType = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.FindBestCameraType" );

	AGamePlayerCamera_execFindBestCameraType_Parms FindBestCameraType_Parms;
	FindBestCameraType_Parms.CameraTarget = CameraTarget;

	this->ProcessEvent ( pFnFindBestCameraType, &FindBestCameraType_Parms, NULL );

	return FindBestCameraType_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.Reset" );

	AGamePlayerCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.PostBeginPlay" );

	AGamePlayerCamera_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  TargetBase                     ( CPF_Parm )

void AGamePlayerCamera::CacheLastTargetBaseInfo ( class AActor* TargetBase )
{
	static UFunction* pFnCacheLastTargetBaseInfo = NULL;

	if ( ! pFnCacheLastTargetBaseInfo )
		pFnCacheLastTargetBaseInfo = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo" );

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms CacheLastTargetBaseInfo_Parms;
	CacheLastTargetBaseInfo_Parms.TargetBase = TargetBase;

	pFnCacheLastTargetBaseInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Parms, NULL );

	pFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  CameraClass                    ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::CreateCamera ( class UClass* CameraClass )
{
	static UFunction* pFnCreateCamera = NULL;

	if ( ! pFnCreateCamera )
		pFnCreateCamera = UObject::FindObject<UFunction> ( "Function GameFramework.GamePlayerCamera.CreateCamera" );

	AGamePlayerCamera_execCreateCamera_Parms CreateCamera_Parms;
	CreateCamera_Parms.CameraClass = CameraClass;

	this->ProcessEvent ( pFnCreateCamera, &CreateCamera_Parms, NULL );

	return CreateCamera_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FViewOffsetData         NewViewOffset                  ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::SetViewOffset ( struct FViewOffsetData* NewViewOffset )
{
	static UFunction* pFnSetViewOffset = NULL;

	if ( ! pFnSetViewOffset )
		pFnSetViewOffset = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.SetViewOffset" );

	UGameThirdPersonCameraMode_execSetViewOffset_Parms SetViewOffset_Parms;

	pFnSetViewOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewOffset, &SetViewOffset_Parms, NULL );

	pFnSetViewOffset->FunctionFlags |= 0x400;

	if ( NewViewOffset )
		memcpy ( NewViewOffset, &SetViewOffset_Parms.NewViewOffset, 0x24 );
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] 
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGameThirdPersonCameraMode::ModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings" );

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0xC4 );
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            VT                             ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT )
{
	static UFunction* pFnUpdatePostProcess = NULL;

	if ( ! pFnUpdatePostProcess )
		pFnUpdatePostProcess = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess" );

	UGameThirdPersonCameraMode_execUpdatePostProcess_Parms UpdatePostProcess_Parms;
	UpdatePostProcess_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdatePostProcess, &UpdatePostProcess_Parms, NULL );

	if ( VT )
		memcpy ( VT, &UpdatePostProcess_Parms.VT, 0x2C );
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnDOFTrace = NULL;

	if ( ! pFnDOFTrace )
		pFnDOFTrace = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.DOFTrace" );

	UGameThirdPersonCameraMode_execDOFTrace_Parms DOFTrace_Parms;
	DOFTrace_Parms.TraceOwner = TraceOwner;
	memcpy ( &DOFTrace_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &DOFTrace_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnDOFTrace, &DOFTrace_Parms, NULL );

	return DOFTrace_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnGetDOFFocusLoc = NULL;

	if ( ! pFnGetDOFFocusLoc )
		pFnGetDOFFocusLoc = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc" );

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms GetDOFFocusLoc_Parms;
	GetDOFFocusLoc_Parms.TraceOwner = TraceOwner;
	memcpy ( &GetDOFFocusLoc_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &GetDOFFocusLoc_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnGetDOFFocusLoc, &GetDOFFocusLoc_Parms, NULL );

	return GetDOFFocusLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation" );

	UGameThirdPersonCameraMode_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

bool UGameThirdPersonCameraMode::SetFocusPoint ( class APawn* ViewedPawn )
{
	static UFunction* pFnSetFocusPoint = NULL;

	if ( ! pFnSetFocusPoint )
		pFnSetFocusPoint = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint" );

	UGameThirdPersonCameraMode_execSetFocusPoint_Parms SetFocusPoint_Parms;
	SetFocusPoint_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnSetFocusPoint, &SetFocusPoint_Parms, NULL );

	return SetFocusPoint_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TargetPawn                     ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc ( class APawn* TargetPawn )
{
	static UFunction* pFnGetCameraWorstCaseLoc = NULL;

	if ( ! pFnGetCameraWorstCaseLoc )
		pFnGetCameraWorstCaseLoc = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc" );

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Parms GetCameraWorstCaseLoc_Parms;
	GetCameraWorstCaseLoc_Parms.TargetPawn = TargetPawn;

	this->ProcessEvent ( pFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Parms, NULL );

	return GetCameraWorstCaseLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCameraMode::GetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV" );

	UGameThirdPersonCameraMode_execGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )
// struct FVector                 Offset                         ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventAdjustViewOffset ( class APawn* P, struct FVector Offset )
{
	static UFunction* pFnAdjustViewOffset = NULL;

	if ( ! pFnAdjustViewOffset )
		pFnAdjustViewOffset = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset" );

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Parms AdjustViewOffset_Parms;
	AdjustViewOffset_Parms.P = P;
	memcpy ( &AdjustViewOffset_Parms.Offset, &Offset, 0xC );

	this->ProcessEvent ( pFnAdjustViewOffset, &AdjustViewOffset_Parms, NULL );

	return AdjustViewOffset_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* NewMode                        ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive" );

	UGameThirdPersonCameraMode_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.TargetPawn = TargetPawn;
	OnBecomeInActive_Parms.NewMode = NewMode;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* PrevMode                       ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive" );

	UGameThirdPersonCameraMode_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.TargetPawn = TargetPawn;
	OnBecomeActive_Parms.PrevMode = PrevMode;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] 
// Parameters infos:

void UGameThirdPersonCameraMode::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject<UFunction> ( "Function GameFramework.GameThirdPersonCameraMode.Init" );

	UGameThirdPersonCameraMode_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameDecalManager.SpawnDecalMinimal
// [0x00C20003] ( FUNC_Final )
// Parameters infos:
// class UGameDecal*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// float                          InDecalLifeSpan                ( CPF_Const | CPF_Parm )
// float                          InCanSpawnDistance             ( CPF_Const | CPF_Parm )
// struct FVector                 DecalLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )

class UGameDecal* AGameDecalManager::SpawnDecalMinimal ( float InDecalLifeSpan, float InCanSpawnDistance, struct FVector* DecalLocation )
{
	static UFunction* pFnSpawnDecalMinimal = NULL;

	if ( ! pFnSpawnDecalMinimal )
		pFnSpawnDecalMinimal = UObject::FindObject<UFunction> ( "Function GameFramework.GameDecalManager.SpawnDecalMinimal" );

	AGameDecalManager_execSpawnDecalMinimal_Parms SpawnDecalMinimal_Parms;
	SpawnDecalMinimal_Parms.InDecalLifeSpan = InDecalLifeSpan;
	SpawnDecalMinimal_Parms.InCanSpawnDistance = InCanSpawnDistance;

	this->ProcessEvent ( pFnSpawnDecalMinimal, &SpawnDecalMinimal_Parms, NULL );

	if ( DecalLocation )
		memcpy ( DecalLocation, &SpawnDecalMinimal_Parms.DecalLocation, 0xC );

	return SpawnDecalMinimal_Parms.ReturnValue;
};

// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          InCanSpawnDistance             ( CPF_Const | CPF_Parm )
// struct FVector                 DecalLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )

bool AGameDecalManager::IsTooCloseToActiveDecal ( float InCanSpawnDistance, struct FVector* DecalLocation )
{
	static UFunction* pFnIsTooCloseToActiveDecal = NULL;

	if ( ! pFnIsTooCloseToActiveDecal )
		pFnIsTooCloseToActiveDecal = UObject::FindObject<UFunction> ( "Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal" );

	AGameDecalManager_execIsTooCloseToActiveDecal_Parms IsTooCloseToActiveDecal_Parms;
	IsTooCloseToActiveDecal_Parms.InCanSpawnDistance = InCanSpawnDistance;

	pFnIsTooCloseToActiveDecal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTooCloseToActiveDecal, &IsTooCloseToActiveDecal_Parms, NULL );

	pFnIsTooCloseToActiveDecal->FunctionFlags |= 0x400;

	if ( DecalLocation )
		memcpy ( DecalLocation, &IsTooCloseToActiveDecal_Parms.DecalLocation, 0xC );

	return IsTooCloseToActiveDecal_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                InRotation                     ( CPF_Parm )
// struct FVector                 RelativeSpaceOffset            ( CPF_Parm )

struct FVector UGameSpecialMove::RelativeToWorldOffset ( struct FRotator InRotation, struct FVector RelativeSpaceOffset )
{
	static UFunction* pFnRelativeToWorldOffset = NULL;

	if ( ! pFnRelativeToWorldOffset )
		pFnRelativeToWorldOffset = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.RelativeToWorldOffset" );

	UGameSpecialMove_execRelativeToWorldOffset_Parms RelativeToWorldOffset_Parms;
	memcpy ( &RelativeToWorldOffset_Parms.InRotation, &InRotation, 0xC );
	memcpy ( &RelativeToWorldOffset_Parms.RelativeSpaceOffset, &RelativeSpaceOffset, 0xC );

	pFnRelativeToWorldOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRelativeToWorldOffset, &RelativeToWorldOffset_Parms, NULL );

	pFnRelativeToWorldOffset->FunctionFlags |= 0x400;

	return RelativeToWorldOffset_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                InRotation                     ( CPF_Parm )
// struct FVector                 WorldSpaceOffset               ( CPF_Parm )

struct FVector UGameSpecialMove::WorldToRelativeOffset ( struct FRotator InRotation, struct FVector WorldSpaceOffset )
{
	static UFunction* pFnWorldToRelativeOffset = NULL;

	if ( ! pFnWorldToRelativeOffset )
		pFnWorldToRelativeOffset = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.WorldToRelativeOffset" );

	UGameSpecialMove_execWorldToRelativeOffset_Parms WorldToRelativeOffset_Parms;
	memcpy ( &WorldToRelativeOffset_Parms.InRotation, &InRotation, 0xC );
	memcpy ( &WorldToRelativeOffset_Parms.WorldSpaceOffset, &WorldSpaceOffset, 0xC );

	pFnWorldToRelativeOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWorldToRelativeOffset, &WorldToRelativeOffset_Parms, NULL );

	pFnWorldToRelativeOffset->FunctionFlags |= 0x400;

	return WorldToRelativeOffset_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// struct FRotator                NewRotation                    ( CPF_Parm )

void UGameSpecialMove::ForcePawnRotation ( class APawn* P, struct FRotator NewRotation )
{
	static UFunction* pFnForcePawnRotation = NULL;

	if ( ! pFnForcePawnRotation )
		pFnForcePawnRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.ForcePawnRotation" );

	UGameSpecialMove_execForcePawnRotation_Parms ForcePawnRotation_Parms;
	ForcePawnRotation_Parms.P = P;
	memcpy ( &ForcePawnRotation_Parms.NewRotation, &NewRotation, 0xC );

	pFnForcePawnRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForcePawnRotation, &ForcePawnRotation_Parms, NULL );

	pFnForcePawnRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   EventName                      ( CPF_Parm )
// class UObject*                 Sender                         ( CPF_Parm )

bool UGameSpecialMove::MessageEvent ( struct FName EventName, class UObject* Sender )
{
	static UFunction* pFnMessageEvent = NULL;

	if ( ! pFnMessageEvent )
		pFnMessageEvent = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.MessageEvent" );

	UGameSpecialMove_execMessageEvent_Parms MessageEvent_Parms;
	memcpy ( &MessageEvent_Parms.EventName, &EventName, 0x8 );
	MessageEvent_Parms.Sender = Sender;

	this->ProcessEvent ( pFnMessageEvent, &MessageEvent_Parms, NULL );

	return MessageEvent_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::ResetFacePreciseRotation ( )
{
	static UFunction* pFnResetFacePreciseRotation = NULL;

	if ( ! pFnResetFacePreciseRotation )
		pFnResetFacePreciseRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.ResetFacePreciseRotation" );

	UGameSpecialMove_execResetFacePreciseRotation_Parms ResetFacePreciseRotation_Parms;

	pFnResetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetFacePreciseRotation, &ResetFacePreciseRotation_Parms, NULL );

	pFnResetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameSpecialMove::eventReachedPrecisePosition ( )
{
	static UFunction* pFnReachedPrecisePosition = NULL;

	if ( ! pFnReachedPrecisePosition )
		pFnReachedPrecisePosition = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.ReachedPrecisePosition" );

	UGameSpecialMove_eventReachedPrecisePosition_Parms ReachedPrecisePosition_Parms;

	this->ProcessEvent ( pFnReachedPrecisePosition, &ReachedPrecisePosition_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                RotationToFace                 ( CPF_Parm )
// float                          InterpolationTime              ( CPF_Parm )

void UGameSpecialMove::SetFacePreciseRotation ( struct FRotator RotationToFace, float InterpolationTime )
{
	static UFunction* pFnSetFacePreciseRotation = NULL;

	if ( ! pFnSetFacePreciseRotation )
		pFnSetFacePreciseRotation = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.SetFacePreciseRotation" );

	UGameSpecialMove_execSetFacePreciseRotation_Parms SetFacePreciseRotation_Parms;
	memcpy ( &SetFacePreciseRotation_Parms.RotationToFace, &RotationToFace, 0xC );
	SetFacePreciseRotation_Parms.InterpolationTime = InterpolationTime;

	pFnSetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFacePreciseRotation, &SetFacePreciseRotation_Parms, NULL );

	pFnSetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 DestinationToReach             ( CPF_Parm )
// unsigned long                  bCancel                        ( CPF_OptionalParm | CPF_Parm )

void UGameSpecialMove::SetReachPreciseDestination ( struct FVector DestinationToReach, unsigned long bCancel )
{
	static UFunction* pFnSetReachPreciseDestination = NULL;

	if ( ! pFnSetReachPreciseDestination )
		pFnSetReachPreciseDestination = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.SetReachPreciseDestination" );

	UGameSpecialMove_execSetReachPreciseDestination_Parms SetReachPreciseDestination_Parms;
	memcpy ( &SetReachPreciseDestination_Parms.DestinationToReach, &DestinationToReach, 0xC );
	SetReachPreciseDestination_Parms.bCancel = bCancel;

	pFnSetReachPreciseDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetReachPreciseDestination, &SetReachPreciseDestination_Parms, NULL );

	pFnSetReachPreciseDestination->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameSpecialMove::ShouldReplicate ( )
{
	static UFunction* pFnShouldReplicate = NULL;

	if ( ! pFnShouldReplicate )
		pFnShouldReplicate = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.ShouldReplicate" );

	UGameSpecialMove_execShouldReplicate_Parms ShouldReplicate_Parms;

	this->ProcessEvent ( pFnShouldReplicate, &ShouldReplicate_Parms, NULL );

	return ShouldReplicate_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated" );

	UGameSpecialMove_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameSpecialMove::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.Tick" );

	UGameSpecialMove_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] 
// Parameters infos:
// struct FName                   PrevMove                       ( CPF_Parm )
// struct FName                   NextMove                       ( CPF_Parm )

void UGameSpecialMove::SpecialMoveEnded ( struct FName PrevMove, struct FName NextMove )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.SpecialMoveEnded" );

	UGameSpecialMove_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;
	memcpy ( &SpecialMoveEnded_Parms.PrevMove, &PrevMove, 0x8 );
	memcpy ( &SpecialMoveEnded_Parms.NextMove, &NextMove, 0x8 );

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] 
// Parameters infos:
// unsigned long                  bForced                        ( CPF_Parm )
// struct FName                   PrevMove                       ( CPF_Parm )

void UGameSpecialMove::SpecialMoveStarted ( unsigned long bForced, struct FName PrevMove )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.SpecialMoveStarted" );

	UGameSpecialMove_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;
	SpecialMoveStarted_Parms.bForced = bForced;
	memcpy ( &SpecialMoveStarted_Parms.PrevMove, &PrevMove, 0x8 );

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameSpecialMove::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove" );

	UGameSpecialMove_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );

	return InternalCanDoSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceCheck                    ( CPF_OptionalParm | CPF_Parm )

bool UGameSpecialMove::CanDoSpecialMove ( unsigned long bForceCheck )
{
	static UFunction* pFnCanDoSpecialMove = NULL;

	if ( ! pFnCanDoSpecialMove )
		pFnCanDoSpecialMove = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.CanDoSpecialMove" );

	UGameSpecialMove_execCanDoSpecialMove_Parms CanDoSpecialMove_Parms;
	CanDoSpecialMove_Parms.bForceCheck = bForceCheck;

	this->ProcessEvent ( pFnCanDoSpecialMove, &CanDoSpecialMove_Parms, NULL );

	return CanDoSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InMove                         ( CPF_Parm )

bool UGameSpecialMove::CanOverrideSpecialMove ( struct FName InMove )
{
	static UFunction* pFnCanOverrideSpecialMove = NULL;

	if ( ! pFnCanOverrideSpecialMove )
		pFnCanOverrideSpecialMove = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.CanOverrideSpecialMove" );

	UGameSpecialMove_execCanOverrideSpecialMove_Parms CanOverrideSpecialMove_Parms;
	memcpy ( &CanOverrideSpecialMove_Parms.InMove, &InMove, 0x8 );

	this->ProcessEvent ( pFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Parms, NULL );

	return CanOverrideSpecialMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NewMove                        ( CPF_Parm )

bool UGameSpecialMove::CanOverrideMoveWith ( struct FName NewMove )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.CanOverrideMoveWith" );

	UGameSpecialMove_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;
	memcpy ( &CanOverrideMoveWith_Parms.NewMove, &NewMove, 0x8 );

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );

	return CanOverrideMoveWith_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NextMove                       ( CPF_Parm )

bool UGameSpecialMove::CanChainMove ( struct FName NextMove )
{
	static UFunction* pFnCanChainMove = NULL;

	if ( ! pFnCanChainMove )
		pFnCanChainMove = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.CanChainMove" );

	UGameSpecialMove_execCanChainMove_Parms CanChainMove_Parms;
	memcpy ( &CanChainMove_Parms.NextMove, &NextMove, 0x8 );

	this->ProcessEvent ( pFnCanChainMove, &CanChainMove_Parms, NULL );

	return CanChainMove_Parms.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] 
// Parameters infos:
// int                            Flags                          ( CPF_Parm )

void UGameSpecialMove::ExtractSpecialMoveFlags ( int Flags )
{
	static UFunction* pFnExtractSpecialMoveFlags = NULL;

	if ( ! pFnExtractSpecialMoveFlags )
		pFnExtractSpecialMoveFlags = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags" );

	UGameSpecialMove_execExtractSpecialMoveFlags_Parms ExtractSpecialMoveFlags_Parms;
	ExtractSpecialMoveFlags_Parms.Flags = Flags;

	this->ProcessEvent ( pFnExtractSpecialMoveFlags, &ExtractSpecialMoveFlags_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] 
// Parameters infos:
// int                            out_Flags                      ( CPF_Parm | CPF_OutParm )

void UGameSpecialMove::InitSpecialMoveFlags ( int* out_Flags )
{
	static UFunction* pFnInitSpecialMoveFlags = NULL;

	if ( ! pFnInitSpecialMoveFlags )
		pFnInitSpecialMoveFlags = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.InitSpecialMoveFlags" );

	UGameSpecialMove_execInitSpecialMoveFlags_Parms InitSpecialMoveFlags_Parms;

	this->ProcessEvent ( pFnInitSpecialMoveFlags, &InitSpecialMoveFlags_Parms, NULL );

	if ( out_Flags )
		*out_Flags = InitSpecialMoveFlags_Parms.out_Flags;
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] 
// Parameters infos:
// class AGamePawn*               inPawn                         ( CPF_Parm )
// struct FName                   InHandle                       ( CPF_Parm )

void UGameSpecialMove::InitSpecialMove ( class AGamePawn* inPawn, struct FName InHandle )
{
	static UFunction* pFnInitSpecialMove = NULL;

	if ( ! pFnInitSpecialMove )
		pFnInitSpecialMove = UObject::FindObject<UFunction> ( "Function GameFramework.GameSpecialMove.InitSpecialMove" );

	UGameSpecialMove_execInitSpecialMove_Parms InitSpecialMove_Parms;
	InitSpecialMove_Parms.inPawn = inPawn;
	memcpy ( &InitSpecialMove_Parms.InHandle, &InHandle, 0x8 );

	this->ProcessEvent ( pFnInitSpecialMove, &InitSpecialMove_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UGameCrowdSpawnerInterface::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist" );

	UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	this->ProcessEvent ( pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );

	return GetMaxSpawnDist_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

bool UGameCrowdSpawnerInterface::AddToAgentPool ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAddToAgentPool = NULL;

	if ( ! pFnAddToAgentPool )
		pFnAddToAgentPool = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdSpawnerInterface.AddToAgentPool" );

	UGameCrowdSpawnerInterface_execAddToAgentPool_Parms AddToAgentPool_Parms;
	AddToAgentPool_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAddToAgentPool, &AddToAgentPool_Parms, NULL );

	return AddToAgentPool_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdSpawnerInterface::AgentDestroyed ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed" );

	UGameCrowdSpawnerInterface_execAgentDestroyed_Parms AgentDestroyed_Parms;
	AgentDestroyed_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void UGameCrowdSpawnInterface::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = UObject::FindObject<UFunction> ( "Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition" );

	UGameCrowdSpawnInterface_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameFixedCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = UObject::FindObject<UFunction> ( "Function GameFramework.GameFixedCamera.OnBecomeActive" );

	UGameFixedCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// class AGamePlayerCamera*       CameraActor                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameFixedCamera::UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = UObject::FindObject<UFunction> ( "Function GameFramework.GameFixedCamera.UpdateCamera" );

	UGameFixedCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.CameraActor = CameraActor;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameKActorSpawnableEffect.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameKActorSpawnableEffect::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject<UFunction> ( "Function GameFramework.GameKActorSpawnableEffect.Tick" );

	AGameKActorSpawnableEffect_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameKActorSpawnableEffect::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = UObject::FindObject<UFunction> ( "Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld" );

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameKActorSpawnableEffect::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject<UFunction> ( "Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay" );

	AGameKActorSpawnableEffect_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void AMobileMenuGame::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuGame.RestartPlayer" );

	AMobileMenuGame_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] 
// Parameters infos:

void AMobileMenuGame::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuGame.StartMatch" );

	AMobileMenuGame_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void AMobileMenuGame::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuGame.PostLogin" );

	AMobileMenuGame_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UMobileMenuLabel::RenderObject ( class UCanvas* Canvas )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = UObject::FindObject<UFunction> ( "Function GameFramework.MobileMenuLabel.RenderObject" );

	UMobileMenuLabel_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif