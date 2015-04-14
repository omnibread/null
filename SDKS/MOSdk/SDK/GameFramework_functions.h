/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
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
		pFnGetActionString = (UFunction*) UObject::GObjObjects()->Data[ 36795 ];

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
		pFnGeneratePathToLocation = (UFunction*) UObject::GObjObjects()->Data[ 36781 ];

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
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 36776 ];

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
		pFnSetDesiredRotation = (UFunction*) UObject::GObjObjects()->Data[ 36771 ];

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
		pFnAILog_Internal = (UFunction*) UObject::GObjObjects()->Data[ 36767 ];

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
		pFnRecordDemoAILog = (UFunction*) UObject::GObjObjects()->Data[ 36765 ];

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
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 36764 ];

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
		pFnGetAICommandInStack = (UFunction*) UObject::GObjObjects()->Data[ 36761 ];

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
		pFnFindCommandOfClass = (UFunction*) UObject::GObjObjects()->Data[ 36758 ];

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
		pFnDumpCommandStack = (UFunction*) UObject::GObjObjects()->Data[ 36757 ];

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
		pFnCheckCommandCount = (UFunction*) UObject::GObjObjects()->Data[ 36756 ];

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
		pFnGetActiveCommand = (UFunction*) UObject::GObjObjects()->Data[ 36754 ];

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
		pFnAbortCommand = (UFunction*) UObject::GObjObjects()->Data[ 36750 ];

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
		pFnPopCommand = (UFunction*) UObject::GObjObjects()->Data[ 36748 ];

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
		pFnPushCommand = (UFunction*) UObject::GObjObjects()->Data[ 36746 ];

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
		pFnGetDebugOverheadText = (UFunction*) UObject::GObjObjects()->Data[ 36730 ];

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
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 36727 ];

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
		pFnGetDumpString = (UFunction*) UObject::GObjObjects()->Data[ 36714 ];

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
		pFnResumed = (UFunction*) UObject::GObjObjects()->Data[ 36712 ];

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
		pFnPaused = (UFunction*) UObject::GObjObjects()->Data[ 36710 ];

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
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 36709 ];

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
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 36708 ];

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
		pFnPostPopped = (UFunction*) UObject::GObjObjects()->Data[ 36707 ];

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
		pFnPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 36705 ];

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
		pFnAllowStateTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 36702 ];

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
		pFnAllowTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 36699 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 36697 ];

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
		pFnShouldIgnoreNotifies = (UFunction*) UObject::GObjObjects()->Data[ 36695 ];

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
		pFnInternalTick = (UFunction*) UObject::GObjObjects()->Data[ 36693 ];

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
		pFnInternalResumed = (UFunction*) UObject::GObjObjects()->Data[ 36691 ];

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
		pFnInternalPaused = (UFunction*) UObject::GObjObjects()->Data[ 36689 ];

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
		pFnInternalPopped = (UFunction*) UObject::GObjObjects()->Data[ 36688 ];

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
		pFnInternalPushed = (UFunction*) UObject::GObjObjects()->Data[ 36687 ];

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
		pFnInternalPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 36685 ];

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
		pFnInitCommand = (UFunction*) UObject::GObjObjects()->Data[ 36681 ];

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
		pFnInitCommandUserActor = (UFunction*) UObject::GObjObjects()->Data[ 36677 ];

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
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37009 ];

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
		pFnGetDestString = (UFunction*) UObject::GObjObjects()->Data[ 37006 ];

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
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 36990 ];

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
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 36985 ];

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
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 36979 ];

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
		pFnInitNavigationHandle = (UFunction*) UObject::GObjObjects()->Data[ 36978 ];

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
		pFnOverlappedActorEvent = (UFunction*) UObject::GObjObjects()->Data[ 36976 ];

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
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 36968 ];

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
		pFnFireDeathEvent = (UFunction*) UObject::GObjObjects()->Data[ 36967 ];

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
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 36965 ];

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
		pFnUpdateIntermediatePoint = (UFunction*) UObject::GObjObjects()->Data[ 36961 ];

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
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 36953 ];

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
		pFnIsIdle = (UFunction*) UObject::GObjObjects()->Data[ 36951 ];

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
		pFnSetCurrentBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36946 ];

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
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36949 ];

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
		pFnActivateInstancedBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36947 ];

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
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36944 ];

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
		pFnResetSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 36943 ];

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
		pFnTryRandomBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36940 ];

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
		pFnNotifySeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 36936 ];

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
		pFnPlaySpawnBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36935 ];

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
		pFnHandlePotentialAgentEncounter = (UFunction*) UObject::GObjObjects()->Data[ 36934 ];

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
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36933 ];

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
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36932 ];

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
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36930 ];

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
		pFnInitializeAgent = (UFunction*) UObject::GObjObjects()->Data[ 36905 ];

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
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 36901 ];

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
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 36895 ];

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
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 36894 ];

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
		pFnResetPooledAgent = (UFunction*) UObject::GObjObjects()->Data[ 36893 ];

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
		pFnKillAgent = (UFunction*) UObject::GObjObjects()->Data[ 36890 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36885 ];

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
		pFnSetMaxSpeed = (UFunction*) UObject::GObjObjects()->Data[ 36884 ];

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
		pFnSetCurrentDestination = (UFunction*) UObject::GObjObjects()->Data[ 36882 ];

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
		pFnWaitForGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 36879 ];

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
		pFnPickBehaviorFrom = (UFunction*) UObject::GObjObjects()->Data[ 36619 ];

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
		pFnSetPanic = (UFunction*) UObject::GObjObjects()->Data[ 36863 ];

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
		pFnIsPanicked = (UFunction*) UObject::GObjObjects()->Data[ 36861 ];

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
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 36859 ];

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
		pFnCreateAttachments = (UFunction*) UObject::GObjObjects()->Data[ 37099 ];

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
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 37095 ];

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
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37094 ];

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
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37093 ];

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
		pFnClearLatentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37092 ];

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
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 37090 ];

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
		pFnSetRootMotion = (UFunction*) UObject::GObjObjects()->Data[ 37088 ];

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
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 37086 ];

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
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 37082 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37081 ];

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
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 36617 ];

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
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 36647 ];

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
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 37040 ];

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
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 37038 ];

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
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 36963 ];

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
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 37036 ];

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
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37012 ];

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
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 37032 ];

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
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37031 ];

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
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37029 ];

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
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 37027 ];

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
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 37026 ];

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
		pFnCanBeUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 36877 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37022 ];

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
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 37020 ];

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
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37165 ];

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
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37164 ];

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
		pFnPlayAgentAnimationNow = (UFunction*) UObject::GObjObjects()->Data[ 37160 ];

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
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 37156 ];

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
		pFnSetSequenceOutput = (UFunction*) UObject::GObjObjects()->Data[ 37155 ];

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
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 37154 ];

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
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37147 ];

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
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37184 ];

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
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 37181 ];

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
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 37178 ];

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
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 37176 ];

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
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37175 ];

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
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37173 ];

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
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 37169 ];

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
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37193 ];

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
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 37191 ];

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
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37188 ];

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
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37186 ];

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
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 37206 ];

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
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 37204 ];

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
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 37202 ];

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
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 37200 ];

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
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 37198 ];

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
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 37196 ];

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
		pFnUpdateDestinations = (UFunction*) UObject::GObjObjects()->Data[ 37236 ];

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
		pFnRemoveMember = (UFunction*) UObject::GObjObjects()->Data[ 37234 ];

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
		pFnAddMember = (UFunction*) UObject::GObjObjects()->Data[ 37232 ];

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
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 36443 ];

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
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 36650 ];

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
		pFnAllowableDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 36627 ];

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
		pFnAtCapacity = (UFunction*) UObject::GObjObjects()->Data[ 36642 ];

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
		pFnIncrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 36637 ];

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
		pFnDecrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 36629 ];

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
		pFnPickNewDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 36621 ];

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
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 36611 ];

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
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 36610 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36607 ];

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
		pFnReachedByAgent = (UFunction*) UObject::GObjObjects()->Data[ 36602 ];

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
		pFnHasCustomer = (UFunction*) UObject::GObjObjects()->Data[ 36635 ];

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
		pFnClearQueue = (UFunction*) UObject::GObjObjects()->Data[ 37228 ];

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
		pFnAddCustomer = (UFunction*) UObject::GObjObjects()->Data[ 37225 ];

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
		pFnActuallyAdvance = (UFunction*) UObject::GObjObjects()->Data[ 37221 ];

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
		pFnAdvanceCustomerTo = (UFunction*) UObject::GObjObjects()->Data[ 37219 ];

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
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 37216 ];

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
		pFnHasSpace = (UFunction*) UObject::GObjObjects()->Data[ 36640 ];

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
		pFnQueueReachedBy = (UFunction*) UObject::GObjObjects()->Data[ 37212 ];

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
		pFnAppliedForce = (UFunction*) UObject::GObjObjects()->Data[ 37121 ];

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
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 37117 ];

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
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 37110 ];

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
		pFnAppliedForce = (UFunction*) UObject::GObjObjects()->Data[ 37127 ];

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
		pFnAppliedForce = (UFunction*) UObject::GObjObjects()->Data[ 37415 ];

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
		pFnCreateNewAgent = (UFunction*) UObject::GObjObjects()->Data[ 37395 ];

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
		pFnSpawnAgent = (UFunction*) UObject::GObjObjects()->Data[ 37385 ];

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
		pFnValidateSpawnAt = (UFunction*) UObject::GObjObjects()->Data[ 37375 ];

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
		pFnAddPrioritizedSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 37371 ];

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
		pFnAnalyzeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 37359 ];

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
		pFnPrioritizeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 37349 ];

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
		pFnPickSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 37345 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37340 ];

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
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 37320 ];

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
		pFnAddToAgentPool = (UFunction*) UObject::GObjObjects()->Data[ 37317 ];

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
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37314 ];

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
		pFnFlushAgents = (UFunction*) UObject::GObjObjects()->Data[ 37312 ];

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
		pFnOnGameCrowdPopulationManagerToggle = (UFunction*) UObject::GObjObjects()->Data[ 37300 ];

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
		pFnRemoveSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 37298 ];

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
		pFnAddSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 37287 ];

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
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 37285 ];

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
		pFnNotifyPathChanged = (UFunction*) UObject::GObjObjects()->Data[ 37284 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37282 ];

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
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 37408 ];

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
		pFnHandleDamageFX = (UFunction*) UObject::GObjObjects()->Data[ 37534 ];

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
		pFnShouldHeadShotGib = (UFunction*) UObject::GObjObjects()->Data[ 37528 ];

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
		pFnPlayExtraDamageSound = (UFunction*) UObject::GObjObjects()->Data[ 37526 ];

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
		pFnIsScriptedDamageType = (UFunction*) UObject::GObjObjects()->Data[ 37524 ];

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
		pFnShouldPlayForceFeedback = (UFunction*) UObject::GObjObjects()->Data[ 37521 ];

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
		pFnHandleDeadPlayer = (UFunction*) UObject::GObjObjects()->Data[ 37519 ];

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
		pFnHandleKilledPawn = (UFunction*) UObject::GObjObjects()->Data[ 37516 ];

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
		pFnHandleDamagedPawn = (UFunction*) UObject::GObjObjects()->Data[ 37511 ];

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
		pFnModifyDamage = (UFunction*) UObject::GObjObjects()->Data[ 37504 ];

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
		pFnShouldGib = (UFunction*) UObject::GObjObjects()->Data[ 37500 ];

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
		pFnChooseCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 37692 ];

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
		pFnSpawnCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 37690 ];

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
		pFnDoExplosionCameraEffects = (UFunction*) UObject::GObjObjects()->Data[ 37686 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37683 ];

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
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37680 ];

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
		pFnDelayedExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 37679 ];

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
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 37674 ];

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
		pFnSpawnExplosionFogVolume = (UFunction*) UObject::GObjObjects()->Data[ 37673 ];

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
		pFnSpawnExplosionDecal = (UFunction*) UObject::GObjObjects()->Data[ 37672 ];

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
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 37670 ];

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
		pFnUpdateExplosionTemplateWithPerMaterialFX = (UFunction*) UObject::GObjObjects()->Data[ 37668 ];

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
		pFnSpecialPawnEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 37665 ];

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
		pFnGetEffectCheckRadius = (UFunction*) UObject::GObjObjects()->Data[ 37662 ];

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
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 37637 ];

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
		pFnBoxDistanceToPoint = (UFunction*) UObject::GObjObjects()->Data[ 37633 ];

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
		pFnIsBehindExplosion = (UFunction*) UObject::GObjObjects()->Data[ 37630 ];

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
		pFnDoFullDamageToActor = (UFunction*) UObject::GObjObjects()->Data[ 37627 ];

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
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 37619 ];

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
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37618 ];

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
		pFnReattachMeshWithoutBeingSeen = (UFunction*) UObject::GObjObjects()->Data[ 37752 ];

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
		pFnReattachMesh = (UFunction*) UObject::GObjObjects()->Data[ 37751 ];

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
		pFnUpdateShadowSettings = (UFunction*) UObject::GObjObjects()->Data[ 37747 ];

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
		pFnClientColorFade = (UFunction*) UObject::GObjObjects()->Data[ 37872 ];

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
		pFnWarmupPause = (UFunction*) UObject::GObjObjects()->Data[ 37868 ];

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
		pFnCanUnpauseWarmup = (UFunction*) UObject::GObjObjects()->Data[ 37866 ];

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
		pFnGetCurrentMovie = (UFunction*) UObject::GObjObjects()->Data[ 37864 ];

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
		pFnClientStopMovie = (UFunction*) UObject::GObjObjects()->Data[ 37859 ];

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
		pFnClientPlayMovie = (UFunction*) UObject::GObjObjects()->Data[ 37855 ];

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
		pFnKeepPlayingLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 37854 ];

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
		pFnShowLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 37848 ];

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
		pFnGetCurrentSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 37846 ];

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
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 37842 ];

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
		pFnDoForceFeedbackForScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 37830 ];

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
		pFnNotifyCrowdAgentInRadius = (UFunction*) UObject::GObjObjects()->Data[ 37828 ];

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
		pFnNotifyCrowdAgentRefresh = (UFunction*) UObject::GObjObjects()->Data[ 37827 ];

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
		pFnCrowdDebug = (UFunction*) UObject::GObjObjects()->Data[ 37821 ];

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
		pFnCrowdToggle = (UFunction*) UObject::GObjObjects()->Data[ 37818 ];

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
		pFnCrowdFocus = (UFunction*) UObject::GObjObjects()->Data[ 37815 ];

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
		pFnGetUIPlayerIndex = (UFunction*) UObject::GObjObjects()->Data[ 37813 ];

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
		pFnDrawMobileTilt = (UFunction*) UObject::GObjObjects()->Data[ 38324 ];

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
		pFnDrawMobileZone_Trackball = (UFunction*) UObject::GObjObjects()->Data[ 38322 ];

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
		pFnDrawMobileZone_Joystick = (UFunction*) UObject::GObjObjects()->Data[ 38307 ];

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
		pFnDrawMobileZone_Button = (UFunction*) UObject::GObjObjects()->Data[ 38293 ];

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
		pFnDrawInputZoneOverlays = (UFunction*) UObject::GObjObjects()->Data[ 38270 ];

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
		pFnRenderMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 38260 ];

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
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 38259 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38258 ];

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
		pFnOnDoubleTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38345 ];

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
		pFnOnTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38347 ];

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
		pFnOnProcessInputDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38349 ];

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
		pFnDeactivateZone = (UFunction*) UObject::GObjObjects()->Data[ 38381 ];

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
		pFnActivateZone = (UFunction*) UObject::GObjObjects()->Data[ 38380 ];

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
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 38423 ];

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
		pFnRenderCaption = (UFunction*) UObject::GObjObjects()->Data[ 38434 ];

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
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 38430 ];

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
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 38459 ];

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
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 38507 ];

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
		pFnFindMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 38503 ];

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
		pFnCleanUpScene = (UFunction*) UObject::GObjObjects()->Data[ 38502 ];

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
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 38501 ];

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
		pFnClosing = (UFunction*) UObject::GObjObjects()->Data[ 38499 ];

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
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 38497 ];

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
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 38493 ];

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
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 38489 ];

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
		pFnOpenMobileMenuMode = (UFunction*) UObject::GObjObjects()->Data[ 38600 ];

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
		pFnOpenMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 38597 ];

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
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 38594 ];

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
		pFnPreClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 38589 ];

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
		pFnRenderMenus = (UFunction*) UObject::GObjObjects()->Data[ 38585 ];

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
		pFnCloseMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 38581 ];

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
		pFnOpenMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 38448 ];

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
		pFnInitializeMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 38576 ];

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
		pFnStopUseAttractModeInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 38575 ];

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
		pFnStartUseAttractModeInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 38574 ];

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
		pFnPrevUserMobileInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 38572 ];

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
		pFnNextUserMobileInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 38570 ];

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
		pFnSetUserMobileInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 38568 ];

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
		pFnGetCurrentZones = (UFunction*) UObject::GObjObjects()->Data[ 38279 ];

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
		pFnHasZones = (UFunction*) UObject::GObjObjects()->Data[ 38277 ];

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
		pFnFindorAddZone = (UFunction*) UObject::GObjObjects()->Data[ 38563 ];

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
		pFnFindZone = (UFunction*) UObject::GObjObjects()->Data[ 38559 ];

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
		pFnInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 38553 ];

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
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 38552 ];

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
		pFnSendInputAxis = (UFunction*) UObject::GObjObjects()->Data[ 38548 ];

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
		pFnSendInputKey = (UFunction*) UObject::GObjObjects()->Data[ 38544 ];

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
		pFnNativeInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 38543 ];

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
		pFnNativeInitializeInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 38542 ];

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
		pFnOnMobileTilt = (UFunction*) UObject::GObjObjects()->Data[ 38522 ];

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
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 38613 ];

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
		pFnMustBeHiddenFromThisPoint = (UFunction*) UObject::GObjObjects()->Data[ 38608 ];

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
		pFnRecycleNative = (UFunction*) UObject::GObjObjects()->Data[ 38607 ];

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
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 38628 ];

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
		pFnBiasAgainstPolysWithinDistanceOfLocations = (UFunction*) UObject::GObjObjects()->Data[ 38619 ];

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
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 38637 ];

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
		pFnFindPopMgrTarget = (UFunction*) UObject::GObjObjects()->Data[ 38636 ];

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
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 38663 ];

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
		pFnCreateNewAgent = (UFunction*) UObject::GObjObjects()->Data[ 38655 ];

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
		pFnSpawnAgent = (UFunction*) UObject::GObjObjects()->Data[ 38645 ];

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
		pFnUpdateSpawning = (UFunction*) UObject::GObjObjects()->Data[ 38643 ];

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
		pFnKillAgents = (UFunction*) UObject::GObjObjects()->Data[ 38642 ];

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
		pFnCacheSpawnerVars = (UFunction*) UObject::GObjObjects()->Data[ 38641 ];

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
		pFnSpawnedAgent = (UFunction*) UObject::GObjObjects()->Data[ 38639 ];

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
		pFnSetCurrentAnimationActionFor = (UFunction*) UObject::GObjObjects()->Data[ 38684 ];

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
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 38682 ];

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
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 36817 ];

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
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 36816 ];

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
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 36811 ];

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
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 36806 ];

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
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 36805 ];

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
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 36803 ];

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
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 36801 ];

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
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 38117 ];

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
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 38115 ];

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
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 38113 ];

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
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 38108 ];

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
		pFnUpdateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 38055 ];

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
		pFnFindBestCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 38103 ];

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
		pFnAdjustFocusPointInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 38101 ];

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
		pFnGetActualFocusLocation = (UFunction*) UObject::GObjObjects()->Data[ 38097 ];

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
		pFnUpdateFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 38093 ];

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
		pFnClearFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 38091 ];

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
		pFnGetFocusActor = (UFunction*) UObject::GObjObjects()->Data[ 38089 ];

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
		pFnSetFocusOnActor = (UFunction*) UObject::GObjObjects()->Data[ 38079 ];

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
		pFnSetFocusOnLoc = (UFunction*) UObject::GObjObjects()->Data[ 38070 ];

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
		pFnAdjustTurn = (UFunction*) UObject::GObjObjects()->Data[ 38068 ];

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
		pFnEndTurn = (UFunction*) UObject::GObjObjects()->Data[ 38067 ];

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
		pFnBeginTurn = (UFunction*) UObject::GObjObjects()->Data[ 38061 ];

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
		pFnPlayerUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 38056 ];

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
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 38050 ];

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
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 38045 ];

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
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 38044 ];

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
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 38043 ];

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
		pFnCreateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 38038 ];

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
		pFnAdjustFOVForViewport = (UFunction*) UObject::GObjObjects()->Data[ 37787 ];

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
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 37801 ];

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
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 37800 ];

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
		pFnSetColorScale = (UFunction*) UObject::GObjObjects()->Data[ 37798 ];

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
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 37791 ];

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
		pFnUpdateCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 37788 ];

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
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 37781 ];

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
		pFnShouldConstrainAspectRatio = (UFunction*) UObject::GObjObjects()->Data[ 37779 ];

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
		pFnFindBestCameraType = (UFunction*) UObject::GObjObjects()->Data[ 37775 ];

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
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 37774 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37773 ];

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
		pFnCacheLastTargetBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 37771 ];

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
		pFnCreateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37767 ];

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
		pFnSetViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 38221 ];

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
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 38219 ];

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
		pFnUpdatePostProcess = (UFunction*) UObject::GObjObjects()->Data[ 38209 ];

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
		pFnDOFTrace = (UFunction*) UObject::GObjObjects()->Data[ 38201 ];

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
		pFnGetDOFFocusLoc = (UFunction*) UObject::GObjObjects()->Data[ 38196 ];

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
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 38191 ];

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
		pFnSetFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 38095 ];

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
		pFnGetCameraWorstCaseLoc = (UFunction*) UObject::GObjObjects()->Data[ 38187 ];

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
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 38048 ];

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
		pFnAdjustViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 38182 ];

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
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 38179 ];

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
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 38176 ];

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
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 38175 ];

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
		pFnSpawnDecalMinimal = (UFunction*) UObject::GObjObjects()->Data[ 37544 ];

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
		pFnIsTooCloseToActiveDecal = (UFunction*) UObject::GObjObjects()->Data[ 37540 ];

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
		pFnRelativeToWorldOffset = (UFunction*) UObject::GObjObjects()->Data[ 37968 ];

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
		pFnWorldToRelativeOffset = (UFunction*) UObject::GObjObjects()->Data[ 37964 ];

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
		pFnForcePawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 37961 ];

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
		pFnMessageEvent = (UFunction*) UObject::GObjObjects()->Data[ 37957 ];

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
		pFnResetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 37956 ];

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
		pFnReachedPrecisePosition = (UFunction*) UObject::GObjObjects()->Data[ 37955 ];

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
		pFnSetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 37952 ];

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
		pFnSetReachPreciseDestination = (UFunction*) UObject::GObjObjects()->Data[ 37949 ];

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
		pFnShouldReplicate = (UFunction*) UObject::GObjObjects()->Data[ 37947 ];

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
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 37946 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37944 ];

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
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 37941 ];

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
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 37938 ];

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
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 37936 ];

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
		pFnCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 37933 ];

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
		pFnCanOverrideSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 37930 ];

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
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 37927 ];

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
		pFnCanChainMove = (UFunction*) UObject::GObjObjects()->Data[ 37924 ];

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
		pFnExtractSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 37922 ];

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
		pFnInitSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 37920 ];

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
		pFnInitSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 37917 ];

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
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 36928 ];

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
		pFnAddToAgentPool = (UFunction*) UObject::GObjObjects()->Data[ 36891 ];

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
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37422 ];

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
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 37426 ];

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
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 37734 ];

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
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37728 ];

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
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37741 ];

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
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 37739 ];

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
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37738 ];

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
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 38451 ];

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
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 38450 ];

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
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 38443 ];

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
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 38476 ];

	UMobileMenuLabel_execRenderObject_Parms RenderObject_Parms;
	RenderObject_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif