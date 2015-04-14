/*
#############################################################################################
# Mortal Online (1.71.00.04) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_functions.h
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMoviePlayer*         Movie                          ( CPF_Parm )
// class UGFxEvent_FSCommand*     Event                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler::eventFSCommand ( class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = UObject::FindObject< UFunction > ( "Function GFxUI.GFxFSCmdHandler.FSCommand" );

	UGFxFSCmdHandler_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.Movie = Movie;
	FSCommand_Parms.Event = Event;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0xC );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0xC );

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::CloseAllMoviePlayers ( )
{
	static UFunction* pFnCloseAllMoviePlayers = NULL;

	if ( ! pFnCloseAllMoviePlayers )
		pFnCloseAllMoviePlayers = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.CloseAllMoviePlayers" );

	UGFxInteraction_execCloseAllMoviePlayers_Parms CloseAllMoviePlayers_Parms;

	pFnCloseAllMoviePlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Parms, NULL );

	pFnCloseAllMoviePlayers->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.NotifyGameSessionEnded" );

	UGFxInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	pFnNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	pFnNotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxMoviePlayer*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie ( )
{
	static UFunction* pFnGetFocusMovie = NULL;

	if ( ! pFnGetFocusMovie )
		pFnGetFocusMovie = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.GetFocusMovie" );

	UGFxInteraction_execGetFocusMovie_Parms GetFocusMovie_Parms;

	pFnGetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFocusMovie, &GetFocusMovie_Parms, NULL );

	pFnGetFocusMovie->FunctionFlags |= 0x400;

	return GetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.SetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MovieName                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  CaptureInput                   ( CPF_Parm )

bool UGFxInteraction::SetFocusMovie ( struct FString MovieName, unsigned long CaptureInput )
{
	static UFunction* pFnSetFocusMovie = NULL;

	if ( ! pFnSetFocusMovie )
		pFnSetFocusMovie = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.SetFocusMovie" );

	UGFxInteraction_execSetFocusMovie_Parms SetFocusMovie_Parms;
	memcpy ( &SetFocusMovie_Parms.MovieName, &MovieName, 0xC );
	SetFocusMovie_Parms.CaptureInput = CaptureInput;

	pFnSetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocusMovie, &SetFocusMovie_Parms, NULL );

	pFnSetFocusMovie->FunctionFlags |= 0x400;

	return SetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              WidgetToBind                   ( CPF_Parm )
// struct FName                   Path                           ( CPF_Parm )

void UGFxMoviePlayer::SetWidgetPathBinding ( class UGFxObject* WidgetToBind, struct FName Path )
{
	static UFunction* pFnSetWidgetPathBinding = NULL;

	if ( ! pFnSetWidgetPathBinding )
		pFnSetWidgetPathBinding = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding" );

	UGFxMoviePlayer_execSetWidgetPathBinding_Parms SetWidgetPathBinding_Parms;
	SetWidgetPathBinding_Parms.WidgetToBind = WidgetToBind;
	memcpy ( &SetWidgetPathBinding_Parms.Path, &Path, 0x8 );

	pFnSetWidgetPathBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWidgetPathBinding, &SetWidgetPathBinding_Parms, NULL );

	pFnSetWidgetPathBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventPostWidgetInit ( )
{
	static UFunction* pFnPostWidgetInit = NULL;

	if ( ! pFnPostWidgetInit )
		pFnPostWidgetInit = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.PostWidgetInit" );

	UGFxMoviePlayer_eventPostWidgetInit_Parms PostWidgetInit_Parms;

	this->ProcessEvent ( pFnPostWidgetInit, &PostWidgetInit_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxMoviePlayer::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.WidgetUnloaded" );

	UGFxMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxMoviePlayer::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.WidgetInitialized" );

	UGFxMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UGFxMoviePlayer::ActionScriptObject ( struct FString Path )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ActionScriptObject" );

	UGFxMoviePlayer_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy ( &ActionScriptObject_Parms.Path, &Path, 0xC );

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMoviePlayer::ActionScriptString ( struct FString Path )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ActionScriptString" );

	UGFxMoviePlayer_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.Path, &Path, 0xC );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMoviePlayer::ActionScriptFloat ( struct FString Path )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ActionScriptFloat" );

	UGFxMoviePlayer_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.Path, &Path, 0xC );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

int UGFxMoviePlayer::ActionScriptInt ( struct FString Path )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ActionScriptInt" );

	UGFxMoviePlayer_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.Path, &Path, 0xC );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::ActionScriptVoid ( struct FString Path )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ActionScriptVoid" );

	UGFxMoviePlayer_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.Path, &Path, 0xC );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FASValue >      args                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMoviePlayer::Invoke ( struct FString method, TArray< struct FASValue > args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.Invoke" );

	UGFxMoviePlayer_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.method, &method, 0xC );
	memcpy ( &Invoke_Parms.args, &args, 0xC );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              Object                         ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::ActionScriptSetFunction ( class UGFxObject* Object, struct FString Member )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction" );

	UGFxMoviePlayer_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	ActionScriptSetFunction_Parms.Object = Object;
	memcpy ( &ActionScriptSetFunction_Parms.Member, &Member, 0xC );

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxObject* UGFxMoviePlayer::CreateArray ( )
{
	static UFunction* pFnCreateArray = NULL;

	if ( ! pFnCreateArray )
		pFnCreateArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.CreateArray" );

	UGFxMoviePlayer_execCreateArray_Parms CreateArray_Parms;

	pFnCreateArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateArray, &CreateArray_Parms, NULL );

	pFnCreateArray->FunctionFlags |= 0x400;

	return CreateArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ASClass                        ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxMoviePlayer::CreateObject ( struct FString ASClass, class UClass* Type )
{
	static UFunction* pFnCreateObject = NULL;

	if ( ! pFnCreateObject )
		pFnCreateObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.CreateObject" );

	UGFxMoviePlayer_execCreateObject_Parms CreateObject_Parms;
	memcpy ( &CreateObject_Parms.ASClass, &ASClass, 0xC );
	CreateObject_Parms.Type = Type;

	pFnCreateObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateObject, &CreateObject_Parms, NULL );

	pFnCreateObject->FunctionFlags |= 0x400;

	return CreateObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FString >       Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableStringArray ( struct FString Path, int Index, TArray< struct FString > Arg )
{
	static UFunction* pFnSetVariableStringArray = NULL;

	if ( ! pFnSetVariableStringArray )
		pFnSetVariableStringArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableStringArray" );

	UGFxMoviePlayer_execSetVariableStringArray_Parms SetVariableStringArray_Parms;
	memcpy ( &SetVariableStringArray_Parms.Path, &Path, 0xC );
	SetVariableStringArray_Parms.Index = Index;
	memcpy ( &SetVariableStringArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableStringArray, &SetVariableStringArray_Parms, NULL );

	pFnSetVariableStringArray->FunctionFlags |= 0x400;

	return SetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< float >                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableFloatArray ( struct FString Path, int Index, TArray< float > Arg )
{
	static UFunction* pFnSetVariableFloatArray = NULL;

	if ( ! pFnSetVariableFloatArray )
		pFnSetVariableFloatArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableFloatArray" );

	UGFxMoviePlayer_execSetVariableFloatArray_Parms SetVariableFloatArray_Parms;
	memcpy ( &SetVariableFloatArray_Parms.Path, &Path, 0xC );
	SetVariableFloatArray_Parms.Index = Index;
	memcpy ( &SetVariableFloatArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableFloatArray, &SetVariableFloatArray_Parms, NULL );

	pFnSetVariableFloatArray->FunctionFlags |= 0x400;

	return SetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< int >                  Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableIntArray ( struct FString Path, int Index, TArray< int > Arg )
{
	static UFunction* pFnSetVariableIntArray = NULL;

	if ( ! pFnSetVariableIntArray )
		pFnSetVariableIntArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableIntArray" );

	UGFxMoviePlayer_execSetVariableIntArray_Parms SetVariableIntArray_Parms;
	memcpy ( &SetVariableIntArray_Parms.Path, &Path, 0xC );
	SetVariableIntArray_Parms.Index = Index;
	memcpy ( &SetVariableIntArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableIntArray, &SetVariableIntArray_Parms, NULL );

	pFnSetVariableIntArray->FunctionFlags |= 0x400;

	return SetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FASValue >      Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::SetVariableArray ( struct FString Path, int Index, TArray< struct FASValue > Arg )
{
	static UFunction* pFnSetVariableArray = NULL;

	if ( ! pFnSetVariableArray )
		pFnSetVariableArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableArray" );

	UGFxMoviePlayer_execSetVariableArray_Parms SetVariableArray_Parms;
	memcpy ( &SetVariableArray_Parms.Path, &Path, 0xC );
	SetVariableArray_Parms.Index = Index;
	memcpy ( &SetVariableArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableArray, &SetVariableArray_Parms, NULL );

	pFnSetVariableArray->FunctionFlags |= 0x400;

	return SetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FString >       Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* Arg )
{
	static UFunction* pFnGetVariableStringArray = NULL;

	if ( ! pFnGetVariableStringArray )
		pFnGetVariableStringArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableStringArray" );

	UGFxMoviePlayer_execGetVariableStringArray_Parms GetVariableStringArray_Parms;
	memcpy ( &GetVariableStringArray_Parms.Path, &Path, 0xC );
	GetVariableStringArray_Parms.Index = Index;

	pFnGetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableStringArray, &GetVariableStringArray_Parms, NULL );

	pFnGetVariableStringArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableStringArray_Parms.Arg, 0xC );

	return GetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< float >                Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableFloatArray ( struct FString Path, int Index, TArray< float >* Arg )
{
	static UFunction* pFnGetVariableFloatArray = NULL;

	if ( ! pFnGetVariableFloatArray )
		pFnGetVariableFloatArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableFloatArray" );

	UGFxMoviePlayer_execGetVariableFloatArray_Parms GetVariableFloatArray_Parms;
	memcpy ( &GetVariableFloatArray_Parms.Path, &Path, 0xC );
	GetVariableFloatArray_Parms.Index = Index;

	pFnGetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableFloatArray, &GetVariableFloatArray_Parms, NULL );

	pFnGetVariableFloatArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableFloatArray_Parms.Arg, 0xC );

	return GetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< int >                  Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableIntArray ( struct FString Path, int Index, TArray< int >* Arg )
{
	static UFunction* pFnGetVariableIntArray = NULL;

	if ( ! pFnGetVariableIntArray )
		pFnGetVariableIntArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableIntArray" );

	UGFxMoviePlayer_execGetVariableIntArray_Parms GetVariableIntArray_Parms;
	memcpy ( &GetVariableIntArray_Parms.Path, &Path, 0xC );
	GetVariableIntArray_Parms.Index = Index;

	pFnGetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableIntArray, &GetVariableIntArray_Parms, NULL );

	pFnGetVariableIntArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableIntArray_Parms.Arg, 0xC );

	return GetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FASValue >      Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableArray ( struct FString Path, int Index, TArray< struct FASValue >* Arg )
{
	static UFunction* pFnGetVariableArray = NULL;

	if ( ! pFnGetVariableArray )
		pFnGetVariableArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableArray" );

	UGFxMoviePlayer_execGetVariableArray_Parms GetVariableArray_Parms;
	memcpy ( &GetVariableArray_Parms.Path, &Path, 0xC );
	GetVariableArray_Parms.Index = Index;

	pFnGetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableArray, &GetVariableArray_Parms, NULL );

	pFnGetVariableArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableArray_Parms.Arg, 0xC );

	return GetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              Object                         ( CPF_Parm )

void UGFxMoviePlayer::SetVariableObject ( struct FString Path, class UGFxObject* Object )
{
	static UFunction* pFnSetVariableObject = NULL;

	if ( ! pFnSetVariableObject )
		pFnSetVariableObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableObject" );

	UGFxMoviePlayer_execSetVariableObject_Parms SetVariableObject_Parms;
	memcpy ( &SetVariableObject_Parms.Path, &Path, 0xC );
	SetVariableObject_Parms.Object = Object;

	pFnSetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableObject, &SetVariableObject_Parms, NULL );

	pFnSetVariableObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::SetVariableString ( struct FString Path, struct FString S )
{
	static UFunction* pFnSetVariableString = NULL;

	if ( ! pFnSetVariableString )
		pFnSetVariableString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableString" );

	UGFxMoviePlayer_execSetVariableString_Parms SetVariableString_Parms;
	memcpy ( &SetVariableString_Parms.Path, &Path, 0xC );
	memcpy ( &SetVariableString_Parms.S, &S, 0xC );

	pFnSetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableString, &SetVariableString_Parms, NULL );

	pFnSetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxMoviePlayer::SetVariableNumber ( struct FString Path, float F )
{
	static UFunction* pFnSetVariableNumber = NULL;

	if ( ! pFnSetVariableNumber )
		pFnSetVariableNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableNumber" );

	UGFxMoviePlayer_execSetVariableNumber_Parms SetVariableNumber_Parms;
	memcpy ( &SetVariableNumber_Parms.Path, &Path, 0xC );
	SetVariableNumber_Parms.F = F;

	pFnSetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableNumber, &SetVariableNumber_Parms, NULL );

	pFnSetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxMoviePlayer::SetVariableBool ( struct FString Path, unsigned long B )
{
	static UFunction* pFnSetVariableBool = NULL;

	if ( ! pFnSetVariableBool )
		pFnSetVariableBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariableBool" );

	UGFxMoviePlayer_execSetVariableBool_Parms SetVariableBool_Parms;
	memcpy ( &SetVariableBool_Parms.Path, &Path, 0xC );
	SetVariableBool_Parms.B = B;

	pFnSetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableBool, &SetVariableBool_Parms, NULL );

	pFnSetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMoviePlayer::SetVariable ( struct FString Path, struct FASValue Arg )
{
	static UFunction* pFnSetVariable = NULL;

	if ( ! pFnSetVariable )
		pFnSetVariable = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetVariable" );

	UGFxMoviePlayer_execSetVariable_Parms SetVariable_Parms;
	memcpy ( &SetVariable_Parms.Path, &Path, 0xC );
	memcpy ( &SetVariable_Parms.Arg, &Arg, 0x18 );

	pFnSetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariable, &SetVariable_Parms, NULL );

	pFnSetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxMoviePlayer::GetVariableObject ( struct FString Path, class UClass* Type )
{
	static UFunction* pFnGetVariableObject = NULL;

	if ( ! pFnGetVariableObject )
		pFnGetVariableObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableObject" );

	UGFxMoviePlayer_execGetVariableObject_Parms GetVariableObject_Parms;
	memcpy ( &GetVariableObject_Parms.Path, &Path, 0xC );
	GetVariableObject_Parms.Type = Type;

	pFnGetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableObject, &GetVariableObject_Parms, NULL );

	pFnGetVariableObject->FunctionFlags |= 0x400;

	return GetVariableObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMoviePlayer::GetVariableString ( struct FString Path )
{
	static UFunction* pFnGetVariableString = NULL;

	if ( ! pFnGetVariableString )
		pFnGetVariableString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableString" );

	UGFxMoviePlayer_execGetVariableString_Parms GetVariableString_Parms;
	memcpy ( &GetVariableString_Parms.Path, &Path, 0xC );

	pFnGetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableString, &GetVariableString_Parms, NULL );

	pFnGetVariableString->FunctionFlags |= 0x400;

	return GetVariableString_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMoviePlayer::GetVariableNumber ( struct FString Path )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableNumber" );

	UGFxMoviePlayer_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.Path, &Path, 0xC );

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMoviePlayer::GetVariableBool ( struct FString Path )
{
	static UFunction* pFnGetVariableBool = NULL;

	if ( ! pFnGetVariableBool )
		pFnGetVariableBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariableBool" );

	UGFxMoviePlayer_execGetVariableBool_Parms GetVariableBool_Parms;
	memcpy ( &GetVariableBool_Parms.Path, &Path, 0xC );

	pFnGetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableBool, &GetVariableBool_Parms, NULL );

	pFnGetVariableBool->FunctionFlags |= 0x400;

	return GetVariableBool_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMoviePlayer::GetVariable ( struct FString Path )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVariable" );

	UGFxMoviePlayer_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.Path, &Path, 0xC );

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   ButtonName                     ( CPF_Parm )
// unsigned char                  InputEvent                     ( CPF_Parm )

bool UGFxMoviePlayer::eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.FilterButtonInput" );

	UGFxMoviePlayer_eventFilterButtonInput_Parms FilterButtonInput_Parms;
	FilterButtonInput_Parms.ControllerId = ControllerId;
	memcpy ( &FilterButtonInput_Parms.ButtonName, &ButtonName, 0x8 );
	FilterButtonInput_Parms.InputEvent = InputEvent;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );

	return FilterButtonInput_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  capturekeysonly                ( CPF_Parm )

void UGFxMoviePlayer::FlushPlayerInput ( unsigned long capturekeysonly )
{
	static UFunction* pFnFlushPlayerInput = NULL;

	if ( ! pFnFlushPlayerInput )
		pFnFlushPlayerInput = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.FlushPlayerInput" );

	UGFxMoviePlayer_execFlushPlayerInput_Parms FlushPlayerInput_Parms;
	FlushPlayerInput_Parms.capturekeysonly = capturekeysonly;

	pFnFlushPlayerInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushPlayerInput, &FlushPlayerInput_Parms, NULL );

	pFnFlushPlayerInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ClearFocusIgnoreKeys ( )
{
	static UFunction* pFnClearFocusIgnoreKeys = NULL;

	if ( ! pFnClearFocusIgnoreKeys )
		pFnClearFocusIgnoreKeys = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys" );

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Parms ClearFocusIgnoreKeys_Parms;

	pFnClearFocusIgnoreKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Parms, NULL );

	pFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMoviePlayer::AddFocusIgnoreKey ( struct FName Key )
{
	static UFunction* pFnAddFocusIgnoreKey = NULL;

	if ( ! pFnAddFocusIgnoreKey )
		pFnAddFocusIgnoreKey = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey" );

	UGFxMoviePlayer_execAddFocusIgnoreKey_Parms AddFocusIgnoreKey_Parms;
	memcpy ( &AddFocusIgnoreKey_Parms.Key, &Key, 0x8 );

	pFnAddFocusIgnoreKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Parms, NULL );

	pFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ClearCaptureKeys ( )
{
	static UFunction* pFnClearCaptureKeys = NULL;

	if ( ! pFnClearCaptureKeys )
		pFnClearCaptureKeys = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.ClearCaptureKeys" );

	UGFxMoviePlayer_execClearCaptureKeys_Parms ClearCaptureKeys_Parms;

	pFnClearCaptureKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCaptureKeys, &ClearCaptureKeys_Parms, NULL );

	pFnClearCaptureKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMoviePlayer::AddCaptureKey ( struct FName Key )
{
	static UFunction* pFnAddCaptureKey = NULL;

	if ( ! pFnAddCaptureKey )
		pFnAddCaptureKey = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.AddCaptureKey" );

	UGFxMoviePlayer_execAddCaptureKey_Parms AddCaptureKey_Parms;
	memcpy ( &AddCaptureKey_Parms.Key, &Key, 0x8 );

	pFnAddCaptureKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddCaptureKey, &AddCaptureKey_Parms, NULL );

	pFnAddCaptureKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveKeyInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bCanReceiveKeyInput            ( CPF_Parm )

void UGFxMoviePlayer::SetMovieCanReceiveKeyInput ( unsigned long bCanReceiveKeyInput )
{
	static UFunction* pFnSetMovieCanReceiveKeyInput = NULL;

	if ( ! pFnSetMovieCanReceiveKeyInput )
		pFnSetMovieCanReceiveKeyInput = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveKeyInput" );

	UGFxMoviePlayer_execSetMovieCanReceiveKeyInput_Parms SetMovieCanReceiveKeyInput_Parms;
	SetMovieCanReceiveKeyInput_Parms.bCanReceiveKeyInput = bCanReceiveKeyInput;

	pFnSetMovieCanReceiveKeyInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveKeyInput, &SetMovieCanReceiveKeyInput_Parms, NULL );

	pFnSetMovieCanReceiveKeyInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bCanReceiveInput               ( CPF_Parm )

void UGFxMoviePlayer::SetMovieCanReceiveInput ( unsigned long bCanReceiveInput )
{
	static UFunction* pFnSetMovieCanReceiveInput = NULL;

	if ( ! pFnSetMovieCanReceiveInput )
		pFnSetMovieCanReceiveInput = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput" );

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Parms SetMovieCanReceiveInput_Parms;
	SetMovieCanReceiveInput_Parms.bCanReceiveInput = bCanReceiveInput;

	pFnSetMovieCanReceiveInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Parms, NULL );

	pFnSetMovieCanReceiveInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bCanReceiveFocus               ( CPF_Parm )

void UGFxMoviePlayer::SetMovieCanReceiveFocus ( unsigned long bCanReceiveFocus )
{
	static UFunction* pFnSetMovieCanReceiveFocus = NULL;

	if ( ! pFnSetMovieCanReceiveFocus )
		pFnSetMovieCanReceiveFocus = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus" );

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Parms SetMovieCanReceiveFocus_Parms;
	SetMovieCanReceiveFocus_Parms.bCanReceiveFocus = bCanReceiveFocus;

	pFnSetMovieCanReceiveFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Parms, NULL );

	pFnSetMovieCanReceiveFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  CaptureInput                   ( CPF_Parm )
// unsigned long                  Focus                          ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::SetFocus ( unsigned long CaptureInput, unsigned long Focus )
{
	static UFunction* pFnSetFocus = NULL;

	if ( ! pFnSetFocus )
		pFnSetFocus = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetFocus" );

	UGFxMoviePlayer_execSetFocus_Parms SetFocus_Parms;
	SetFocus_Parms.CaptureInput = CaptureInput;
	SetFocus_Parms.Focus = Focus;

	pFnSetFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocus, &SetFocus_Parms, NULL );

	pFnSetFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 matPersp                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxMoviePlayer::SetPerspective3D ( struct FMatrix* matPersp )
{
	static UFunction* pFnSetPerspective3D = NULL;

	if ( ! pFnSetPerspective3D )
		pFnSetPerspective3D = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetPerspective3D" );

	UGFxMoviePlayer_execSetPerspective3D_Parms SetPerspective3D_Parms;

	pFnSetPerspective3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPerspective3D, &SetPerspective3D_Parms, NULL );

	pFnSetPerspective3D->FunctionFlags |= 0x400;

	if ( matPersp )
		memcpy ( matPersp, &SetPerspective3D_Parms.matPersp, 0x40 );
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 matView                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxMoviePlayer::SetView3D ( struct FMatrix* matView )
{
	static UFunction* pFnSetView3D = NULL;

	if ( ! pFnSetView3D )
		pFnSetView3D = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetView3D" );

	UGFxMoviePlayer_execSetView3D_Parms SetView3D_Parms;

	pFnSetView3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetView3D, &SetView3D_Parms, NULL );

	pFnSetView3D->FunctionFlags |= 0x400;

	if ( matView )
		memcpy ( matView, &SetView3D_Parms.matView, 0x40 );
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          x0                             ( CPF_Parm | CPF_OutParm )
// float                          y0                             ( CPF_Parm | CPF_OutParm )
// float                          X1                             ( CPF_Parm | CPF_OutParm )
// float                          Y1                             ( CPF_Parm | CPF_OutParm )

void UGFxMoviePlayer::GetVisibleFrameRect ( float* x0, float* y0, float* X1, float* Y1 )
{
	static UFunction* pFnGetVisibleFrameRect = NULL;

	if ( ! pFnGetVisibleFrameRect )
		pFnGetVisibleFrameRect = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect" );

	UGFxMoviePlayer_execGetVisibleFrameRect_Parms GetVisibleFrameRect_Parms;

	pFnGetVisibleFrameRect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibleFrameRect, &GetVisibleFrameRect_Parms, NULL );

	pFnGetVisibleFrameRect->FunctionFlags |= 0x400;

	if ( x0 )
		*x0 = GetVisibleFrameRect_Parms.x0;

	if ( y0 )
		*y0 = GetVisibleFrameRect_Parms.y0;

	if ( X1 )
		*X1 = GetVisibleFrameRect_Parms.X1;

	if ( Y1 )
		*Y1 = GetVisibleFrameRect_Parms.Y1;
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  A                              ( CPF_Parm )

void UGFxMoviePlayer::SetAlignment ( unsigned char A )
{
	static UFunction* pFnSetAlignment = NULL;

	if ( ! pFnSetAlignment )
		pFnSetAlignment = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetAlignment" );

	UGFxMoviePlayer_execSetAlignment_Parms SetAlignment_Parms;
	SetAlignment_Parms.A = A;

	pFnSetAlignment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAlignment, &SetAlignment_Parms, NULL );

	pFnSetAlignment->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  SM                             ( CPF_Parm )

void UGFxMoviePlayer::SetViewScaleMode ( unsigned char SM )
{
	static UFunction* pFnSetViewScaleMode = NULL;

	if ( ! pFnSetViewScaleMode )
		pFnSetViewScaleMode = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetViewScaleMode" );

	UGFxMoviePlayer_execSetViewScaleMode_Parms SetViewScaleMode_Parms;
	SetViewScaleMode_Parms.SM = SM;

	pFnSetViewScaleMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewScaleMode, &SetViewScaleMode_Parms, NULL );

	pFnSetViewScaleMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )

void UGFxMoviePlayer::SetViewport ( int X, int Y, int Width, int Height )
{
	static UFunction* pFnSetViewport = NULL;

	if ( ! pFnSetViewport )
		pFnSetViewport = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetViewport" );

	UGFxMoviePlayer_execSetViewport_Parms SetViewport_Parms;
	SetViewport_Parms.X = X;
	SetViewport_Parms.Y = Y;
	SetViewport_Parms.Width = Width;
	SetViewport_Parms.Height = Height;

	pFnSetViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewport, &SetViewport_Parms, NULL );

	pFnSetViewport->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameViewportClient*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient ( )
{
	static UFunction* pFnGetGameViewportClient = NULL;

	if ( ! pFnGetGameViewportClient )
		pFnGetGameViewportClient = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.GetGameViewportClient" );

	UGFxMoviePlayer_execGetGameViewportClient_Parms GetGameViewportClient_Parms;

	pFnGetGameViewportClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameViewportClient, &GetGameViewportClient_Parms, NULL );

	pFnGetGameViewportClient->FunctionFlags |= 0x400;

	return GetGameViewportClient_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::PublishDataStoreValues ( )
{
	static UFunction* pFnPublishDataStoreValues = NULL;

	if ( ! pFnPublishDataStoreValues )
		pFnPublishDataStoreValues = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.PublishDataStoreValues" );

	UGFxMoviePlayer_execPublishDataStoreValues_Parms PublishDataStoreValues_Parms;

	pFnPublishDataStoreValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPublishDataStoreValues, &PublishDataStoreValues_Parms, NULL );

	pFnPublishDataStoreValues->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::RefreshDataStoreBindings ( )
{
	static UFunction* pFnRefreshDataStoreBindings = NULL;

	if ( ! pFnRefreshDataStoreBindings )
		pFnRefreshDataStoreBindings = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.RefreshDataStoreBindings" );

	UGFxMoviePlayer_execRefreshDataStoreBindings_Parms RefreshDataStoreBindings_Parms;

	pFnRefreshDataStoreBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshDataStoreBindings, &RefreshDataStoreBindings_Parms, NULL );

	pFnRefreshDataStoreBindings->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Resource                       ( CPF_Parm | CPF_NeedCtorLink )
// class UTexture*                Texture                        ( CPF_Parm )

bool UGFxMoviePlayer::SetExternalTexture ( struct FString Resource, class UTexture* Texture )
{
	static UFunction* pFnSetExternalTexture = NULL;

	if ( ! pFnSetExternalTexture )
		pFnSetExternalTexture = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetExternalTexture" );

	UGFxMoviePlayer_execSetExternalTexture_Parms SetExternalTexture_Parms;
	memcpy ( &SetExternalTexture_Parms.Resource, &Resource, 0xC );
	SetExternalTexture_Parms.Texture = Texture;

	pFnSetExternalTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetExternalTexture, &SetExternalTexture_Parms, NULL );

	pFnSetExternalTexture->FunctionFlags |= 0x400;

	return SetExternalTexture_Parms.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] 
// Parameters infos:
// class UObject*                 H                              ( CPF_Parm )

void UGFxMoviePlayer::SetExternalInterface ( class UObject* H )
{
	static UFunction* pFnSetExternalInterface = NULL;

	if ( ! pFnSetExternalInterface )
		pFnSetExternalInterface = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetExternalInterface" );

	UGFxMoviePlayer_execSetExternalInterface_Parms SetExternalInterface_Parms;
	SetExternalInterface_Parms.H = H;

	this->ProcessEvent ( pFnSetExternalInterface, &SetExternalInterface_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void UGFxMoviePlayer::SetTimingMode ( unsigned char Mode )
{
	static UFunction* pFnSetTimingMode = NULL;

	if ( ! pFnSetTimingMode )
		pFnSetTimingMode = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetTimingMode" );

	UGFxMoviePlayer_execSetTimingMode_Parms SetTimingMode_Parms;
	SetTimingMode_Parms.Mode = Mode;

	pFnSetTimingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimingMode, &SetTimingMode_Parms, NULL );

	pFnSetTimingMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] 
// Parameters infos:
// class USwfMovie*               Data                           ( CPF_Parm )

void UGFxMoviePlayer::SetMovieInfo ( class USwfMovie* Data )
{
	static UFunction* pFnSetMovieInfo = NULL;

	if ( ! pFnSetMovieInfo )
		pFnSetMovieInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetMovieInfo" );

	UGFxMoviePlayer_execSetMovieInfo_Parms SetMovieInfo_Parms;
	SetMovieInfo_Parms.Data = Data;

	this->ProcessEvent ( pFnSetMovieInfo, &SetMovieInfo_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.OnClose" );

	UGFxMoviePlayer_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  Unload                         ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::Close ( unsigned long Unload )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.Close" );

	UGFxMoviePlayer_execClose_Parms Close_Parms;
	Close_Parms.Unload = Unload;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPausePlayback                 ( CPF_OptionalParm | CPF_Parm )

void UGFxMoviePlayer::SetPause ( unsigned long bPausePlayback )
{
	static UFunction* pFnSetPause = NULL;

	if ( ! pFnSetPause )
		pFnSetPause = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.SetPause" );

	UGFxMoviePlayer_execSetPause_Parms SetPause_Parms;
	SetPause_Parms.bPausePlayback = bPausePlayback;

	pFnSetPause->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPause, &SetPause_Parms, NULL );

	pFnSetPause->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGFxMoviePlayer::OnPostAdvance ( float DeltaTime )
{
	static UFunction* pFnOnPostAdvance = NULL;

	if ( ! pFnOnPostAdvance )
		pFnOnPostAdvance = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.OnPostAdvance" );

	UGFxMoviePlayer_execOnPostAdvance_Parms OnPostAdvance_Parms;
	OnPostAdvance_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnOnPostAdvance, &OnPostAdvance_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void UGFxMoviePlayer::Advance ( float Time )
{
	static UFunction* pFnAdvance = NULL;

	if ( ! pFnAdvance )
		pFnAdvance = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.Advance" );

	UGFxMoviePlayer_execAdvance_Parms Advance_Parms;
	Advance_Parms.Time = Time;

	pFnAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdvance, &Advance_Parms, NULL );

	pFnAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UGFxMoviePlayer::eventStart ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMoviePlayer.Start" );

	UGFxMoviePlayer_eventStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;

	return Start_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxObject::eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.WidgetUnloaded" );

	UGFxObject_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;
	memcpy ( &WidgetUnloaded_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetUnloaded_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetUnloaded_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );

	return WidgetUnloaded_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   WidgetName                     ( CPF_Parm )
// struct FName                   WidgetPath                     ( CPF_Parm )
// class UGFxObject*              Widget                         ( CPF_Parm )

bool UGFxObject::eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.WidgetInitialized" );

	UGFxObject_eventWidgetInitialized_Parms WidgetInitialized_Parms;
	memcpy ( &WidgetInitialized_Parms.WidgetName, &WidgetName, 0x8 );
	memcpy ( &WidgetInitialized_Parms.WidgetPath, &WidgetPath, 0x8 );
	WidgetInitialized_Parms.Widget = Widget;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );

	return WidgetInitialized_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 symbolname                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 instancename                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Depth                          ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::AttachMovie ( struct FString symbolname, struct FString instancename, int Depth, class UClass* Type )
{
	static UFunction* pFnAttachMovie = NULL;

	if ( ! pFnAttachMovie )
		pFnAttachMovie = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.AttachMovie" );

	UGFxObject_execAttachMovie_Parms AttachMovie_Parms;
	memcpy ( &AttachMovie_Parms.symbolname, &symbolname, 0xC );
	memcpy ( &AttachMovie_Parms.instancename, &instancename, 0xC );
	AttachMovie_Parms.Depth = Depth;
	AttachMovie_Parms.Type = Type;

	pFnAttachMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachMovie, &AttachMovie_Parms, NULL );

	pFnAttachMovie->FunctionFlags |= 0x400;

	return AttachMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 instancename                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Depth                          ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::CreateEmptyMovieClip ( struct FString instancename, int Depth, class UClass* Type )
{
	static UFunction* pFnCreateEmptyMovieClip = NULL;

	if ( ! pFnCreateEmptyMovieClip )
		pFnCreateEmptyMovieClip = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.CreateEmptyMovieClip" );

	UGFxObject_execCreateEmptyMovieClip_Parms CreateEmptyMovieClip_Parms;
	memcpy ( &CreateEmptyMovieClip_Parms.instancename, &instancename, 0xC );
	CreateEmptyMovieClip_Parms.Depth = Depth;
	CreateEmptyMovieClip_Parms.Type = Type;

	pFnCreateEmptyMovieClip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Parms, NULL );

	pFnCreateEmptyMovieClip->FunctionFlags |= 0x400;

	return CreateEmptyMovieClip_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            frame                          ( CPF_Parm )

void UGFxObject::GotoAndStopI ( int frame )
{
	static UFunction* pFnGotoAndStopI = NULL;

	if ( ! pFnGotoAndStopI )
		pFnGotoAndStopI = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GotoAndStopI" );

	UGFxObject_execGotoAndStopI_Parms GotoAndStopI_Parms;
	GotoAndStopI_Parms.frame = frame;

	pFnGotoAndStopI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStopI, &GotoAndStopI_Parms, NULL );

	pFnGotoAndStopI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 frame                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::GotoAndStop ( struct FString frame )
{
	static UFunction* pFnGotoAndStop = NULL;

	if ( ! pFnGotoAndStop )
		pFnGotoAndStop = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GotoAndStop" );

	UGFxObject_execGotoAndStop_Parms GotoAndStop_Parms;
	memcpy ( &GotoAndStop_Parms.frame, &frame, 0xC );

	pFnGotoAndStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStop, &GotoAndStop_Parms, NULL );

	pFnGotoAndStop->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            frame                          ( CPF_Parm )

void UGFxObject::GotoAndPlayI ( int frame )
{
	static UFunction* pFnGotoAndPlayI = NULL;

	if ( ! pFnGotoAndPlayI )
		pFnGotoAndPlayI = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GotoAndPlayI" );

	UGFxObject_execGotoAndPlayI_Parms GotoAndPlayI_Parms;
	GotoAndPlayI_Parms.frame = frame;

	pFnGotoAndPlayI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlayI, &GotoAndPlayI_Parms, NULL );

	pFnGotoAndPlayI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 frame                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::GotoAndPlay ( struct FString frame )
{
	static UFunction* pFnGotoAndPlay = NULL;

	if ( ! pFnGotoAndPlay )
		pFnGotoAndPlay = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GotoAndPlay" );

	UGFxObject_execGotoAndPlay_Parms GotoAndPlay_Parms;
	memcpy ( &GotoAndPlay_Parms.frame, &frame, 0xC );

	pFnGotoAndPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlay, &GotoAndPlay_Parms, NULL );

	pFnGotoAndPlay->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UGFxObject* >    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

TArray< class UGFxObject* > UGFxObject::ActionScriptArray ( struct FString Path )
{
	static UFunction* pFnActionScriptArray = NULL;

	if ( ! pFnActionScriptArray )
		pFnActionScriptArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptArray" );

	UGFxObject_execActionScriptArray_Parms ActionScriptArray_Parms;
	memcpy ( &ActionScriptArray_Parms.Path, &Path, 0xC );

	pFnActionScriptArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptArray, &ActionScriptArray_Parms, NULL );

	pFnActionScriptArray->FunctionFlags |= 0x400;

	return ActionScriptArray_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UGFxObject* UGFxObject::ActionScriptObject ( struct FString Path )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptObject" );

	UGFxObject_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy ( &ActionScriptObject_Parms.Path, &Path, 0xC );

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxObject::ActionScriptString ( struct FString method )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptString" );

	UGFxObject_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.method, &method, 0xC );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxObject::ActionScriptFloat ( struct FString method )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptFloat" );

	UGFxObject_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.method, &method, 0xC );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

int UGFxObject::ActionScriptInt ( struct FString method )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptInt" );

	UGFxObject_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.method, &method, 0xC );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::ActionScriptVoid ( struct FString method )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptVoid" );

	UGFxObject_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.method, &method, 0xC );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FASValue >      args                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxObject::Invoke ( struct FString Member, TArray< struct FASValue > args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.Invoke" );

	UGFxObject_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.Member, &Member, 0xC );
	memcpy ( &Invoke_Parms.args, &args, 0xC );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              Target                         ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::ActionScriptSetFunctionOn ( class UGFxObject* Target, struct FString Member )
{
	static UFunction* pFnActionScriptSetFunctionOn = NULL;

	if ( ! pFnActionScriptSetFunctionOn )
		pFnActionScriptSetFunctionOn = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptSetFunctionOn" );

	UGFxObject_execActionScriptSetFunctionOn_Parms ActionScriptSetFunctionOn_Parms;
	ActionScriptSetFunctionOn_Parms.Target = Target;
	memcpy ( &ActionScriptSetFunctionOn_Parms.Member, &Member, 0xC );

	pFnActionScriptSetFunctionOn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Parms, NULL );

	pFnActionScriptSetFunctionOn->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::ActionScriptSetFunction ( struct FString Member )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.ActionScriptSetFunction" );

	UGFxObject_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	memcpy ( &ActionScriptSetFunction_Parms.Member, &Member, 0xC );

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElementMemberString ( int Index, struct FString Member, struct FString S )
{
	static UFunction* pFnSetElementMemberString = NULL;

	if ( ! pFnSetElementMemberString )
		pFnSetElementMemberString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementMemberString" );

	UGFxObject_execSetElementMemberString_Parms SetElementMemberString_Parms;
	SetElementMemberString_Parms.Index = Index;
	memcpy ( &SetElementMemberString_Parms.Member, &Member, 0xC );
	memcpy ( &SetElementMemberString_Parms.S, &S, 0xC );

	pFnSetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberString, &SetElementMemberString_Parms, NULL );

	pFnSetElementMemberString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxObject::SetElementMemberFloat ( int Index, struct FString Member, float F )
{
	static UFunction* pFnSetElementMemberFloat = NULL;

	if ( ! pFnSetElementMemberFloat )
		pFnSetElementMemberFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementMemberFloat" );

	UGFxObject_execSetElementMemberFloat_Parms SetElementMemberFloat_Parms;
	SetElementMemberFloat_Parms.Index = Index;
	memcpy ( &SetElementMemberFloat_Parms.Member, &Member, 0xC );
	SetElementMemberFloat_Parms.F = F;

	pFnSetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberFloat, &SetElementMemberFloat_Parms, NULL );

	pFnSetElementMemberFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxObject::SetElementMemberBool ( int Index, struct FString Member, unsigned long B )
{
	static UFunction* pFnSetElementMemberBool = NULL;

	if ( ! pFnSetElementMemberBool )
		pFnSetElementMemberBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementMemberBool" );

	UGFxObject_execSetElementMemberBool_Parms SetElementMemberBool_Parms;
	SetElementMemberBool_Parms.Index = Index;
	memcpy ( &SetElementMemberBool_Parms.Member, &Member, 0xC );
	SetElementMemberBool_Parms.B = B;

	pFnSetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberBool, &SetElementMemberBool_Parms, NULL );

	pFnSetElementMemberBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              val                            ( CPF_Parm )

void UGFxObject::SetElementMemberObject ( int Index, struct FString Member, class UGFxObject* val )
{
	static UFunction* pFnSetElementMemberObject = NULL;

	if ( ! pFnSetElementMemberObject )
		pFnSetElementMemberObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementMemberObject" );

	UGFxObject_execSetElementMemberObject_Parms SetElementMemberObject_Parms;
	SetElementMemberObject_Parms.Index = Index;
	memcpy ( &SetElementMemberObject_Parms.Member, &Member, 0xC );
	SetElementMemberObject_Parms.val = val;

	pFnSetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberObject, &SetElementMemberObject_Parms, NULL );

	pFnSetElementMemberObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElementMember ( int Index, struct FString Member, struct FASValue Arg )
{
	static UFunction* pFnSetElementMember = NULL;

	if ( ! pFnSetElementMember )
		pFnSetElementMember = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementMember" );

	UGFxObject_execSetElementMember_Parms SetElementMember_Parms;
	SetElementMember_Parms.Index = Index;
	memcpy ( &SetElementMember_Parms.Member, &Member, 0xC );
	memcpy ( &SetElementMember_Parms.Arg, &Arg, 0x18 );

	pFnSetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMember, &SetElementMember_Parms, NULL );

	pFnSetElementMember->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxObject::GetElementMemberString ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberString = NULL;

	if ( ! pFnGetElementMemberString )
		pFnGetElementMemberString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementMemberString" );

	UGFxObject_execGetElementMemberString_Parms GetElementMemberString_Parms;
	GetElementMemberString_Parms.Index = Index;
	memcpy ( &GetElementMemberString_Parms.Member, &Member, 0xC );

	pFnGetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberString, &GetElementMemberString_Parms, NULL );

	pFnGetElementMemberString->FunctionFlags |= 0x400;

	return GetElementMemberString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxObject::GetElementMemberFloat ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberFloat = NULL;

	if ( ! pFnGetElementMemberFloat )
		pFnGetElementMemberFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementMemberFloat" );

	UGFxObject_execGetElementMemberFloat_Parms GetElementMemberFloat_Parms;
	GetElementMemberFloat_Parms.Index = Index;
	memcpy ( &GetElementMemberFloat_Parms.Member, &Member, 0xC );

	pFnGetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberFloat, &GetElementMemberFloat_Parms, NULL );

	pFnGetElementMemberFloat->FunctionFlags |= 0x400;

	return GetElementMemberFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxObject::GetElementMemberBool ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMemberBool = NULL;

	if ( ! pFnGetElementMemberBool )
		pFnGetElementMemberBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementMemberBool" );

	UGFxObject_execGetElementMemberBool_Parms GetElementMemberBool_Parms;
	GetElementMemberBool_Parms.Index = Index;
	memcpy ( &GetElementMemberBool_Parms.Member, &Member, 0xC );

	pFnGetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberBool, &GetElementMemberBool_Parms, NULL );

	pFnGetElementMemberBool->FunctionFlags |= 0x400;

	return GetElementMemberBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::GetElementMemberObject ( int Index, struct FString Member, class UClass* Type )
{
	static UFunction* pFnGetElementMemberObject = NULL;

	if ( ! pFnGetElementMemberObject )
		pFnGetElementMemberObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementMemberObject" );

	UGFxObject_execGetElementMemberObject_Parms GetElementMemberObject_Parms;
	GetElementMemberObject_Parms.Index = Index;
	memcpy ( &GetElementMemberObject_Parms.Member, &Member, 0xC );
	GetElementMemberObject_Parms.Type = Type;

	pFnGetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberObject, &GetElementMemberObject_Parms, NULL );

	pFnGetElementMemberObject->FunctionFlags |= 0x400;

	return GetElementMemberObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxObject::GetElementMember ( int Index, struct FString Member )
{
	static UFunction* pFnGetElementMember = NULL;

	if ( ! pFnGetElementMember )
		pFnGetElementMember = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementMember" );

	UGFxObject_execGetElementMember_Parms GetElementMember_Parms;
	GetElementMember_Parms.Index = Index;
	memcpy ( &GetElementMember_Parms.Member, &Member, 0xC );

	pFnGetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMember, &GetElementMember_Parms, NULL );

	pFnGetElementMember->FunctionFlags |= 0x400;

	return GetElementMember_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASColorTransform       cxform                         ( CPF_Parm )

void UGFxObject::SetElementColorTransform ( int Index, struct FASColorTransform cxform )
{
	static UFunction* pFnSetElementColorTransform = NULL;

	if ( ! pFnSetElementColorTransform )
		pFnSetElementColorTransform = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementColorTransform" );

	UGFxObject_execSetElementColorTransform_Parms SetElementColorTransform_Parms;
	SetElementColorTransform_Parms.Index = Index;
	memcpy ( &SetElementColorTransform_Parms.cxform, &cxform, 0x20 );

	pFnSetElementColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementColorTransform, &SetElementColorTransform_Parms, NULL );

	pFnSetElementColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UGFxObject::SetElementPosition ( int Index, float X, float Y )
{
	static UFunction* pFnSetElementPosition = NULL;

	if ( ! pFnSetElementPosition )
		pFnSetElementPosition = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementPosition" );

	UGFxObject_execSetElementPosition_Parms SetElementPosition_Parms;
	SetElementPosition_Parms.Index = Index;
	SetElementPosition_Parms.X = X;
	SetElementPosition_Parms.Y = Y;

	pFnSetElementPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementPosition, &SetElementPosition_Parms, NULL );

	pFnSetElementPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  Visible                        ( CPF_Parm )

void UGFxObject::SetElementVisible ( int Index, unsigned long Visible )
{
	static UFunction* pFnSetElementVisible = NULL;

	if ( ! pFnSetElementVisible )
		pFnSetElementVisible = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementVisible" );

	UGFxObject_execSetElementVisible_Parms SetElementVisible_Parms;
	SetElementVisible_Parms.Index = Index;
	SetElementVisible_Parms.Visible = Visible;

	pFnSetElementVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementVisible, &SetElementVisible_Parms, NULL );

	pFnSetElementVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxObject::SetElementDisplayMatrix ( int Index, struct FMatrix M )
{
	static UFunction* pFnSetElementDisplayMatrix = NULL;

	if ( ! pFnSetElementDisplayMatrix )
		pFnSetElementDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementDisplayMatrix" );

	UGFxObject_execSetElementDisplayMatrix_Parms SetElementDisplayMatrix_Parms;
	SetElementDisplayMatrix_Parms.Index = Index;
	memcpy ( &SetElementDisplayMatrix_Parms.M, &M, 0x40 );

	pFnSetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Parms, NULL );

	pFnSetElementDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASDisplayInfo          D                              ( CPF_Parm )

void UGFxObject::SetElementDisplayInfo ( int Index, struct FASDisplayInfo D )
{
	static UFunction* pFnSetElementDisplayInfo = NULL;

	if ( ! pFnSetElementDisplayInfo )
		pFnSetElementDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementDisplayInfo" );

	UGFxObject_execSetElementDisplayInfo_Parms SetElementDisplayInfo_Parms;
	SetElementDisplayInfo_Parms.Index = Index;
	memcpy ( &SetElementDisplayInfo_Parms.D, &D, 0x2C );

	pFnSetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayInfo, &SetElementDisplayInfo_Parms, NULL );

	pFnSetElementDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FMatrix UGFxObject::GetElementDisplayMatrix ( int Index )
{
	static UFunction* pFnGetElementDisplayMatrix = NULL;

	if ( ! pFnGetElementDisplayMatrix )
		pFnGetElementDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementDisplayMatrix" );

	UGFxObject_execGetElementDisplayMatrix_Parms GetElementDisplayMatrix_Parms;
	GetElementDisplayMatrix_Parms.Index = Index;

	pFnGetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Parms, NULL );

	pFnGetElementDisplayMatrix->FunctionFlags |= 0x400;

	return GetElementDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo ( int Index )
{
	static UFunction* pFnGetElementDisplayInfo = NULL;

	if ( ! pFnGetElementDisplayInfo )
		pFnGetElementDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementDisplayInfo" );

	UGFxObject_execGetElementDisplayInfo_Parms GetElementDisplayInfo_Parms;
	GetElementDisplayInfo_Parms.Index = Index;

	pFnGetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayInfo, &GetElementDisplayInfo_Parms, NULL );

	pFnGetElementDisplayInfo->FunctionFlags |= 0x400;

	return GetElementDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElementString ( int Index, struct FString S )
{
	static UFunction* pFnSetElementString = NULL;

	if ( ! pFnSetElementString )
		pFnSetElementString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementString" );

	UGFxObject_execSetElementString_Parms SetElementString_Parms;
	SetElementString_Parms.Index = Index;
	memcpy ( &SetElementString_Parms.S, &S, 0xC );

	pFnSetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementString, &SetElementString_Parms, NULL );

	pFnSetElementString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// float                          F                              ( CPF_Parm )

void UGFxObject::SetElementFloat ( int Index, float F )
{
	static UFunction* pFnSetElementFloat = NULL;

	if ( ! pFnSetElementFloat )
		pFnSetElementFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementFloat" );

	UGFxObject_execSetElementFloat_Parms SetElementFloat_Parms;
	SetElementFloat_Parms.Index = Index;
	SetElementFloat_Parms.F = F;

	pFnSetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementFloat, &SetElementFloat_Parms, NULL );

	pFnSetElementFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

void UGFxObject::SetElementBool ( int Index, unsigned long B )
{
	static UFunction* pFnSetElementBool = NULL;

	if ( ! pFnSetElementBool )
		pFnSetElementBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementBool" );

	UGFxObject_execSetElementBool_Parms SetElementBool_Parms;
	SetElementBool_Parms.Index = Index;
	SetElementBool_Parms.B = B;

	pFnSetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementBool, &SetElementBool_Parms, NULL );

	pFnSetElementBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// class UGFxObject*              val                            ( CPF_Parm )

void UGFxObject::SetElementObject ( int Index, class UGFxObject* val )
{
	static UFunction* pFnSetElementObject = NULL;

	if ( ! pFnSetElementObject )
		pFnSetElementObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElementObject" );

	UGFxObject_execSetElementObject_Parms SetElementObject_Parms;
	SetElementObject_Parms.Index = Index;
	SetElementObject_Parms.val = val;

	pFnSetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementObject, &SetElementObject_Parms, NULL );

	pFnSetElementObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetElement ( int Index, struct FASValue Arg )
{
	static UFunction* pFnSetElement = NULL;

	if ( ! pFnSetElement )
		pFnSetElement = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetElement" );

	UGFxObject_execSetElement_Parms SetElement_Parms;
	SetElement_Parms.Index = Index;
	memcpy ( &SetElement_Parms.Arg, &Arg, 0x18 );

	pFnSetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElement, &SetElement_Parms, NULL );

	pFnSetElement->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FString UGFxObject::GetElementString ( int Index )
{
	static UFunction* pFnGetElementString = NULL;

	if ( ! pFnGetElementString )
		pFnGetElementString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementString" );

	UGFxObject_execGetElementString_Parms GetElementString_Parms;
	GetElementString_Parms.Index = Index;

	pFnGetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementString, &GetElementString_Parms, NULL );

	pFnGetElementString->FunctionFlags |= 0x400;

	return GetElementString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

float UGFxObject::GetElementFloat ( int Index )
{
	static UFunction* pFnGetElementFloat = NULL;

	if ( ! pFnGetElementFloat )
		pFnGetElementFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementFloat" );

	UGFxObject_execGetElementFloat_Parms GetElementFloat_Parms;
	GetElementFloat_Parms.Index = Index;

	pFnGetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementFloat, &GetElementFloat_Parms, NULL );

	pFnGetElementFloat->FunctionFlags |= 0x400;

	return GetElementFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UGFxObject::GetElementBool ( int Index )
{
	static UFunction* pFnGetElementBool = NULL;

	if ( ! pFnGetElementBool )
		pFnGetElementBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementBool" );

	UGFxObject_execGetElementBool_Parms GetElementBool_Parms;
	GetElementBool_Parms.Index = Index;

	pFnGetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementBool, &GetElementBool_Parms, NULL );

	pFnGetElementBool->FunctionFlags |= 0x400;

	return GetElementBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::GetElementObject ( int Index, class UClass* Type )
{
	static UFunction* pFnGetElementObject = NULL;

	if ( ! pFnGetElementObject )
		pFnGetElementObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElementObject" );

	UGFxObject_execGetElementObject_Parms GetElementObject_Parms;
	GetElementObject_Parms.Index = Index;
	GetElementObject_Parms.Type = Type;

	pFnGetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementObject, &GetElementObject_Parms, NULL );

	pFnGetElementObject->FunctionFlags |= 0x400;

	return GetElementObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FASValue UGFxObject::GetElement ( int Index )
{
	static UFunction* pFnGetElement = NULL;

	if ( ! pFnGetElement )
		pFnGetElement = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetElement" );

	UGFxObject_execGetElement_Parms GetElement_Parms;
	GetElement_Parms.Index = Index;

	pFnGetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElement, &GetElement_Parms, NULL );

	pFnGetElement->FunctionFlags |= 0x400;

	return GetElement_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UGFxObject::SetText ( struct FString Text )
{
	static UFunction* pFnSetText = NULL;

	if ( ! pFnSetText )
		pFnSetText = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetText" );

	UGFxObject_execSetText_Parms SetText_Parms;
	memcpy ( &SetText_Parms.Text, &Text, 0xC );

	pFnSetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetText, &SetText_Parms, NULL );

	pFnSetText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGFxObject::GetText ( )
{
	static UFunction* pFnGetText = NULL;

	if ( ! pFnGetText )
		pFnGetText = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetText" );

	UGFxObject_execGetText_Parms GetText_Parms;

	pFnGetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetText, &GetText_Parms, NULL );

	pFnGetText->FunctionFlags |= 0x400;

	return GetText_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  Visible                        ( CPF_Parm )

void UGFxObject::SetVisible ( unsigned long Visible )
{
	static UFunction* pFnSetVisible = NULL;

	if ( ! pFnSetVisible )
		pFnSetVisible = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetVisible" );

	UGFxObject_execSetVisible_Parms SetVisible_Parms;
	SetVisible_Parms.Visible = Visible;

	pFnSetVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVisible, &SetVisible_Parms, NULL );

	pFnSetVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxObject::SetDisplayMatrix3D ( struct FMatrix M )
{
	static UFunction* pFnSetDisplayMatrix3D = NULL;

	if ( ! pFnSetDisplayMatrix3D )
		pFnSetDisplayMatrix3D = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetDisplayMatrix3D" );

	UGFxObject_execSetDisplayMatrix3D_Parms SetDisplayMatrix3D_Parms;
	memcpy ( &SetDisplayMatrix3D_Parms.M, &M, 0x40 );

	pFnSetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Parms, NULL );

	pFnSetDisplayMatrix3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxObject::SetDisplayMatrix ( struct FMatrix M )
{
	static UFunction* pFnSetDisplayMatrix = NULL;

	if ( ! pFnSetDisplayMatrix )
		pFnSetDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetDisplayMatrix" );

	UGFxObject_execSetDisplayMatrix_Parms SetDisplayMatrix_Parms;
	memcpy ( &SetDisplayMatrix_Parms.M, &M, 0x40 );

	pFnSetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix, &SetDisplayMatrix_Parms, NULL );

	pFnSetDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASColorTransform       cxform                         ( CPF_Parm )

void UGFxObject::SetColorTransform ( struct FASColorTransform cxform )
{
	static UFunction* pFnSetColorTransform = NULL;

	if ( ! pFnSetColorTransform )
		pFnSetColorTransform = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetColorTransform" );

	UGFxObject_execSetColorTransform_Parms SetColorTransform_Parms;
	memcpy ( &SetColorTransform_Parms.cxform, &cxform, 0x20 );

	pFnSetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetColorTransform, &SetColorTransform_Parms, NULL );

	pFnSetColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UGFxObject::SetPosition ( float X, float Y )
{
	static UFunction* pFnSetPosition = NULL;

	if ( ! pFnSetPosition )
		pFnSetPosition = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetPosition" );

	UGFxObject_execSetPosition_Parms SetPosition_Parms;
	SetPosition_Parms.X = X;
	SetPosition_Parms.Y = Y;

	pFnSetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPosition, &SetPosition_Parms, NULL );

	pFnSetPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          D                              ( CPF_Parm )

void UGFxObject::SetDisplayInfo ( struct FASDisplayInfo D )
{
	static UFunction* pFnSetDisplayInfo = NULL;

	if ( ! pFnSetDisplayInfo )
		pFnSetDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetDisplayInfo" );

	UGFxObject_execSetDisplayInfo_Parms SetDisplayInfo_Parms;
	memcpy ( &SetDisplayInfo_Parms.D, &D, 0x2C );

	pFnSetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayInfo, &SetDisplayInfo_Parms, NULL );

	pFnSetDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FMatrix UGFxObject::GetDisplayMatrix ( )
{
	static UFunction* pFnGetDisplayMatrix = NULL;

	if ( ! pFnGetDisplayMatrix )
		pFnGetDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetDisplayMatrix" );

	UGFxObject_execGetDisplayMatrix_Parms GetDisplayMatrix_Parms;

	pFnGetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayMatrix, &GetDisplayMatrix_Parms, NULL );

	pFnGetDisplayMatrix->FunctionFlags |= 0x400;

	return GetDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASColorTransform       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FASColorTransform UGFxObject::GetColorTransform ( )
{
	static UFunction* pFnGetColorTransform = NULL;

	if ( ! pFnGetColorTransform )
		pFnGetColorTransform = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetColorTransform" );

	UGFxObject_execGetColorTransform_Parms GetColorTransform_Parms;

	pFnGetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetColorTransform, &GetColorTransform_Parms, NULL );

	pFnGetColorTransform->FunctionFlags |= 0x400;

	return GetColorTransform_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm | CPF_OutParm )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool UGFxObject::GetPosition ( float* X, float* Y )
{
	static UFunction* pFnGetPosition = NULL;

	if ( ! pFnGetPosition )
		pFnGetPosition = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetPosition" );

	UGFxObject_execGetPosition_Parms GetPosition_Parms;

	pFnGetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPosition, &GetPosition_Parms, NULL );

	pFnGetPosition->FunctionFlags |= 0x400;

	if ( X )
		*X = GetPosition_Parms.X;

	if ( Y )
		*Y = GetPosition_Parms.Y;

	return GetPosition_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FASDisplayInfo UGFxObject::GetDisplayInfo ( )
{
	static UFunction* pFnGetDisplayInfo = NULL;

	if ( ! pFnGetDisplayInfo )
		pFnGetDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetDisplayInfo" );

	UGFxObject_execGetDisplayInfo_Parms GetDisplayInfo_Parms;

	pFnGetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayInfo, &GetDisplayInfo_Parms, NULL );

	pFnGetDisplayInfo->FunctionFlags |= 0x400;

	return GetDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 context                        ( CPF_Parm )
// struct FName                   fname                          ( CPF_Parm )

void UGFxObject::SetFunction ( struct FString Member, class UObject* context, struct FName fname )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetFunction" );

	UGFxObject_execSetFunction_Parms SetFunction_Parms;
	memcpy ( &SetFunction_Parms.Member, &Member, 0xC );
	SetFunction_Parms.context = context;
	memcpy ( &SetFunction_Parms.fname, &fname, 0x8 );

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              val                            ( CPF_Parm )

void UGFxObject::SetObject ( struct FString Member, class UGFxObject* val )
{
	static UFunction* pFnSetObject = NULL;

	if ( ! pFnSetObject )
		pFnSetObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetObject" );

	UGFxObject_execSetObject_Parms SetObject_Parms;
	memcpy ( &SetObject_Parms.Member, &Member, 0xC );
	SetObject_Parms.val = val;

	pFnSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObject, &SetObject_Parms, NULL );

	pFnSetObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::SetString ( struct FString Member, struct FString S )
{
	static UFunction* pFnSetString = NULL;

	if ( ! pFnSetString )
		pFnSetString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetString" );

	UGFxObject_execSetString_Parms SetString_Parms;
	memcpy ( &SetString_Parms.Member, &Member, 0xC );
	memcpy ( &SetString_Parms.S, &S, 0xC );

	pFnSetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetString, &SetString_Parms, NULL );

	pFnSetString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxObject::SetFloat ( struct FString Member, float F )
{
	static UFunction* pFnSetFloat = NULL;

	if ( ! pFnSetFloat )
		pFnSetFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetFloat" );

	UGFxObject_execSetFloat_Parms SetFloat_Parms;
	memcpy ( &SetFloat_Parms.Member, &Member, 0xC );
	SetFloat_Parms.F = F;

	pFnSetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFloat, &SetFloat_Parms, NULL );

	pFnSetFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxObject::SetBool ( struct FString Member, unsigned long B )
{
	static UFunction* pFnSetBool = NULL;

	if ( ! pFnSetBool )
		pFnSetBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.SetBool" );

	UGFxObject_execSetBool_Parms SetBool_Parms;
	memcpy ( &SetBool_Parms.Member, &Member, 0xC );
	SetBool_Parms.B = B;

	pFnSetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBool, &SetBool_Parms, NULL );

	pFnSetBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxObject::Set ( struct FString Member, struct FASValue Arg )
{
	static UFunction* pFnSet = NULL;

	if ( ! pFnSet )
		pFnSet = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.Set" );

	UGFxObject_execSet_Parms Set_Parms;
	memcpy ( &Set_Parms.Member, &Member, 0xC );
	memcpy ( &Set_Parms.Arg, &Arg, 0x18 );

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet, &Set_Parms, NULL );

	pFnSet->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxObject*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxObject* UGFxObject::GetObject ( struct FString Member, class UClass* Type )
{
	static UFunction* pFnGetObject = NULL;

	if ( ! pFnGetObject )
		pFnGetObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetObject" );

	UGFxObject_execGetObject_Parms GetObject_Parms;
	memcpy ( &GetObject_Parms.Member, &Member, 0xC );
	GetObject_Parms.Type = Type;

	pFnGetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObject, &GetObject_Parms, NULL );

	pFnGetObject->FunctionFlags |= 0x400;

	return GetObject_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxObject::GetString ( struct FString Member )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetString" );

	UGFxObject_execGetString_Parms GetString_Parms;
	memcpy ( &GetString_Parms.Member, &Member, 0xC );

	pFnGetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	pFnGetString->FunctionFlags |= 0x400;

	return GetString_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxObject::GetFloat ( struct FString Member )
{
	static UFunction* pFnGetFloat = NULL;

	if ( ! pFnGetFloat )
		pFnGetFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetFloat" );

	UGFxObject_execGetFloat_Parms GetFloat_Parms;
	memcpy ( &GetFloat_Parms.Member, &Member, 0xC );

	pFnGetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFloat, &GetFloat_Parms, NULL );

	pFnGetFloat->FunctionFlags |= 0x400;

	return GetFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxObject::GetBool ( struct FString Member )
{
	static UFunction* pFnGetBool = NULL;

	if ( ! pFnGetBool )
		pFnGetBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.GetBool" );

	UGFxObject_execGetBool_Parms GetBool_Parms;
	memcpy ( &GetBool_Parms.Member, &Member, 0xC );

	pFnGetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBool, &GetBool_Parms, NULL );

	pFnGetBool->FunctionFlags |= 0x400;

	return GetBool_Parms.ReturnValue;
};

// Function GFxUI.GFxObject.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxObject::Get ( struct FString Member )
{
	static UFunction* pFnGet = NULL;

	if ( ! pFnGet )
		pFnGet = UObject::FindObject< UFunction > ( "Function GFxUI.GFxObject.Get" );

	UGFxObject_execGet_Parms Get_Parms;
	memcpy ( &Get_Parms.Member, &Member, 0xC );

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGet, &Get_Parms, NULL );

	pFnGet->FunctionFlags |= 0x400;

	return Get_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject" );

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject" );

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject" );

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject" );

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject" );

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMoviePlayer*         Movie                          ( CPF_Parm )
// class UGFxEvent_FSCommand*     Event                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler_Kismet::eventFSCommand ( class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = UObject::FindObject< UFunction > ( "Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand" );

	UGFxFSCmdHandler_Kismet_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.Movie = Movie;
	FSCommand_Parms.Event = Event;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0xC );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0xC );

	pFnFSCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	pFnFSCommand->FunctionFlags |= 0x400;

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxDataStoreSubscriber::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue" );

	UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxDataStoreSubscriber::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores" );

	UGFxDataStoreSubscriber_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGFxDataStoreSubscriber::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores" );

	UGFxDataStoreSubscriber_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UGFxDataStoreSubscriber::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated" );

	UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UGFxDataStoreSubscriber::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue" );

	UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UGFxDataStoreSubscriber::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding" );

	UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UGFxDataStoreSubscriber::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding" );

	UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxDataStoreSubscriber::PublishValues ( )
{
	static UFunction* pFnPublishValues = NULL;

	if ( ! pFnPublishValues )
		pFnPublishValues = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.PublishValues" );

	UGFxDataStoreSubscriber_execPublishValues_Parms PublishValues_Parms;

	pFnPublishValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPublishValues, &PublishValues_Parms, NULL );

	pFnPublishValues->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxObject*              O                              ( CPF_Parm )
// struct FString                 func                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::ASAddEventListener ( struct FString Type, class UGFxObject* O, struct FString func )
{
	static UFunction* pFnASAddEventListener = NULL;

	if ( ! pFnASAddEventListener )
		pFnASAddEventListener = UObject::FindObject< UFunction > ( "Function GFxUI.GFxClikWidget.ASAddEventListener" );

	UGFxClikWidget_execASAddEventListener_Parms ASAddEventListener_Parms;
	memcpy ( &ASAddEventListener_Parms.Type, &Type, 0xC );
	ASAddEventListener_Parms.O = O;
	memcpy ( &ASAddEventListener_Parms.func, &func, 0xC );

	this->ProcessEvent ( pFnASAddEventListener, &ASAddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UGFxObject*              O                              ( CPF_Parm )
// struct FString                 Member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         Listener                       ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::SetListener ( class UGFxObject* O, struct FString Member, struct FScriptDelegate Listener )
{
	static UFunction* pFnSetListener = NULL;

	if ( ! pFnSetListener )
		pFnSetListener = UObject::FindObject< UFunction > ( "Function GFxUI.GFxClikWidget.SetListener" );

	UGFxClikWidget_execSetListener_Parms SetListener_Parms;
	SetListener_Parms.O = O;
	memcpy ( &SetListener_Parms.Member, &Member, 0xC );
	memcpy ( &SetListener_Parms.Listener, &Listener, 0xC );

	this->ProcessEvent ( pFnSetListener, &SetListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   Typename                       ( CPF_Parm )

struct FString UGFxClikWidget::GetEventStringFromTypename ( struct FName Typename )
{
	static UFunction* pFnGetEventStringFromTypename = NULL;

	if ( ! pFnGetEventStringFromTypename )
		pFnGetEventStringFromTypename = UObject::FindObject< UFunction > ( "Function GFxUI.GFxClikWidget.GetEventStringFromTypename" );

	UGFxClikWidget_execGetEventStringFromTypename_Parms GetEventStringFromTypename_Parms;
	memcpy ( &GetEventStringFromTypename_Parms.Typename, &Typename, 0x8 );

	this->ProcessEvent ( pFnGetEventStringFromTypename, &GetEventStringFromTypename_Parms, NULL );

	return GetEventStringFromTypename_Parms.ReturnValue;
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00020002] 
// Parameters infos:
// struct FName                   Type                           ( CPF_Parm )
// struct FScriptDelegate         Listener                       ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::AddEventListener ( struct FName Type, struct FScriptDelegate Listener )
{
	static UFunction* pFnAddEventListener = NULL;

	if ( ! pFnAddEventListener )
		pFnAddEventListener = UObject::FindObject< UFunction > ( "Function GFxUI.GFxClikWidget.AddEventListener" );

	UGFxClikWidget_execAddEventListener_Parms AddEventListener_Parms;
	memcpy ( &AddEventListener_Parms.Type, &Type, 0x8 );
	memcpy ( &AddEventListener_Parms.Listener, &Listener, 0xC );

	this->ProcessEvent ( pFnAddEventListener, &AddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
// Parameters infos:
// struct FEventData              Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxClikWidget::EventListener ( struct FEventData Data )
{
	static UFunction* pFnEventListener = NULL;

	if ( ! pFnEventListener )
		pFnEventListener = UObject::FindObject< UFunction > ( "Function GFxUI.GFxClikWidget.EventListener" );

	UGFxClikWidget_execEventListener_Parms EventListener_Parms;
	memcpy ( &EventListener_Parms.Data, &Data, 0x24 );

	this->ProcessEvent ( pFnEventListener, &EventListener_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif