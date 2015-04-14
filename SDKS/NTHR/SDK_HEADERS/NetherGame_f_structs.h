/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: NetherGame_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function NetherGame.NetherDayNightCycleManager.SetKismetTime
// [0x00040003] ( FUNC_Final )
struct ANetherDayNightCycleManager_execSetKismetTime_Parms
{
};

// Function NetherGame.NetherDayNightCycleManager.ClientUpdateWorldTime
// [0x010401C3] ( FUNC_Final )
struct ANetherDayNightCycleManager_execClientUpdateWorldTime_Parms
{
	float                                              InWorldTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherDayNightCycleManager.OnTODChanged
// [0x00040003] ( FUNC_Final )
struct ANetherDayNightCycleManager_execOnTODChanged_Parms
{
	// class ANPawnEnemy*                              EnemyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherDayNightCycleManager.Tick
// [0x00020102] 
struct ANetherDayNightCycleManager_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherDayNightCycleManager.PickDay
// [0x00020002] 
struct ANetherDayNightCycleManager_execPickDay_Parms
{
};

// Function NetherGame.NetherDayNightCycleManager.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANetherDayNightCycleManager_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NetherEngine.FormatTime
// [0x00022002] 
struct UNetherEngine_execFormatTime_Parms
{
	int                                                Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Hours;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Mins;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  NewTimeString;                                    		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherEngine.MapFinishedLoading
// [0x00020802] ( FUNC_Event )
struct UNetherEngine_eventMapFinishedLoading_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.KeyDown
// [0x00020002] 
struct ANetherHUD_execKeyDown_Parms
{
	int                                                KeyCode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.MouseWheel
// [0x00020002] 
struct ANetherHUD_execMouseWheel_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.RightMouseUp
// [0x00020002] 
struct ANetherHUD_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.RightMouseDown
// [0x00020002] 
struct ANetherHUD_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.LeftMouseUp
// [0x00020002] 
struct ANetherHUD_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.LeftMouseDown
// [0x00020002] 
struct ANetherHUD_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.MouseMoved
// [0x00020002] 
struct ANetherHUD_execMouseMoved_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_SetHeaderStyle
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_SetHeaderStyle_Parms
{
	int                                                FontSize;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Align;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                FontColor;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_PlayQuickSlotUseAnimation
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_PlayQuickSlotUseAnimation_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_HideQuickSlots
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_HideQuickSlots_Parms
{
};

// Function NetherGame.NetherHUD.AS_ShowQuickSlots
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_ShowQuickSlots_Parms
{
};

// Function NetherGame.NetherHUD.AS_UpdateQuickSlotHudIcon
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_UpdateQuickSlotHudIcon_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemCount;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_SetHealth
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_SetHealth_Parms
{
	int                                                currentHealth;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                maxHealth;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_RotateMiniMap
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_RotateMiniMap_Parms
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_SetStaminaBar
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_SetStaminaBar_Parms
{
	float                                              Percent;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.AS_SetHungerBar
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execAS_SetHungerBar_Parms
{
	float                                              Percent;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.GetHideChatMessages
// [0x00020002] 
struct ANetherHUD_execGetHideChatMessages_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherHUD.ToggleHideChatMessages
// [0x00020002] 
struct ANetherHUD_execToggleHideChatMessages_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherHUD.GetShowChatForNewMessage
// [0x00020002] 
struct ANetherHUD_execGetShowChatForNewMessage_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherHUD.ToggleShowChatForNewMessage
// [0x00020002] 
struct ANetherHUD_execToggleShowChatForNewMessage_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherHUD.CloseMenuScreen
// [0x00020002] 
struct ANetherHUD_execCloseMenuScreen_Parms
{
};

// Function NetherGame.NetherHUD.StartClosingMenuScreen
// [0x00020002] 
struct ANetherHUD_execStartClosingMenuScreen_Parms
{
};

// Function NetherGame.NetherHUD.ToggleMenuScreen
// [0x00024003] ( FUNC_Final )
struct ANetherHUD_execToggleMenuScreen_Parms
{
	unsigned char                                      StartingMenu;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCloseRegardless : 1;                             		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.SetBloodLevel
// [0x00020002] 
struct ANetherHUD_execSetBloodLevel_Parms
{
	int                                                BloodLevel;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.DecayBloodMeter
// [0x00020002] 
struct ANetherHUD_execDecayBloodMeter_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CurrentAmount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.SetBloodMeter
// [0x00020002] 
struct ANetherHUD_execSetBloodMeter_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.SetChatHeaderText
// [0x00020003] ( FUNC_Final )
struct ANetherHUD_execSetChatHeaderText_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherHUD.ShowBarterObjectivePopup
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execShowBarterObjectivePopup_Parms
{
	struct FString                                     TradeDescription;                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             FunctionToConfirm;                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class ANInteractiveObject_Barter*                  BarterObject;                                     		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPlayerHasItems : 1;                              		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherHUD.ShowPopupNotification
// [0x00024202] ( FUNC_Exec )
struct ANetherHUD_execShowPopupNotification_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ButtonText;                                       		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherHUD.ConfirmWithPopup
// [0x00024002] 
struct ANetherHUD_execConfirmWithPopup_Parms
{
	struct FScriptDelegate                             FunctionToConfirm;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             FunctionToDecline;                                		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     HeaderText;                                       		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ConfirmButtonText;                                		// 0x0040 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     CancelButtonText;                                 		// 0x0050 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherHUD.ClosePopup
// [0x00020002] 
struct ANetherHUD_execClosePopup_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherHUD.CreatePopup
// [0x00040003] ( FUNC_Final )
struct ANetherHUD_execCreatePopup_Parms
{
};

// Function NetherGame.NetherHUD.ClosePopupByID
// [0x00020002] 
struct ANetherHUD_execClosePopupByID_Parms
{
	unsigned char                                      IDToClose;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherHUD.OpenMenuScreen
// [0x00020002] 
struct ANetherHUD_execOpenMenuScreen_Parms
{
};

// Function NetherGame.NetherHUD.ToggleCAP
// [0x00020200] ( FUNC_Exec )
struct ANetherHUD_execToggleCAP_Parms
{
};

// Function NetherGame.NetherHUD.ToggleGeneralMenu
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execToggleGeneralMenu_Parms
{
};

// Function NetherGame.NetherHUD.ToggleCharacter
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execToggleCharacter_Parms
{
};

// Function NetherGame.NetherHUD.ToggleMap
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execToggleMap_Parms
{
};

// Function NetherGame.NetherHUD.ToggleInventory
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execToggleInventory_Parms
{
};

// Function NetherGame.NetherHUD.DisableHudCursorMode
// [0x00024202] ( FUNC_Exec )
struct ANetherHUD_execDisableHudCursorMode_Parms
{
	unsigned long                                      bForceCloseChat : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.EnableHudCursorMode
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execEnableHudCursorMode_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.ToggleHUDCursorMode
// [0x00020202] ( FUNC_Exec )
struct ANetherHUD_execToggleHUDCursorMode_Parms
{
};

// Function NetherGame.NetherHUD.PlayQuickSlotUseAnimation
// [0x00020003] ( FUNC_Final )
struct ANetherHUD_execPlayQuickSlotUseAnimation_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.StopQuickSlotFillUpAnimation
// [0x00024003] ( FUNC_Final )
struct ANetherHUD_execStopQuickSlotFillUpAnimation_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      SkipAnimation : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.StartQuickSlotFillUpAnimation
// [0x00020003] ( FUNC_Final )
struct ANetherHUD_execStartQuickSlotFillUpAnimation_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.DisplayObjectiveInfo
// [0x00020102] 
struct ANetherHUD_execDisplayObjectiveInfo_Parms
{
	class ANetherPawn*                                 NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.DisplayHealth
// [0x00020102] 
struct ANetherHUD_execDisplayHealth_Parms
{
	class ANetherPawn*                                 NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.DisplayStamina
// [0x00020102] 
struct ANetherHUD_execDisplayStamina_Parms
{
	class ANetherPawn*                                 NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             StaminaPercent;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.StopPickupTimer
// [0x00020102] 
struct ANetherHUD_execStopPickupTimer_Parms
{
	unsigned long                                      bSkipAnimation : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherHUD.StartPickupTimer
// [0x00020102] 
struct ANetherHUD_execStartPickupTimer_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  Inv;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.ClearPickupPrompt
// [0x00020102] 
struct ANetherHUD_execClearPickupPrompt_Parms
{
};

// Function NetherGame.NetherHUD.DisplayPickupPrompt
// [0x00020102] 
struct ANetherHUD_execDisplayPickupPrompt_Parms
{
	struct FString                                     ActionText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherHUD.DisplayHunger
// [0x00020102] 
struct ANetherHUD_execDisplayHunger_Parms
{
	class ANetherPawn*                                 NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             HungerPercent;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.DisplayAmmo
// [0x00020102] 
struct ANetherHUD_execDisplayAmmo_Parms
{
	class ANWeap*                                      Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANWeapRanged*                             NRangedWeap;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.HideHUD
// [0x00020002] 
struct ANetherHUD_execHideHUD_Parms
{
};

// Function NetherGame.NetherHUD.ShowHUD
// [0x00020002] 
struct ANetherHUD_execShowHUD_Parms
{
};

// Function NetherGame.NetherHUD.HideQuickSlots
// [0x00020102] 
struct ANetherHUD_execHideQuickSlots_Parms
{
};

// Function NetherGame.NetherHUD.ShowQuickSlots
// [0x00024102] 
struct ANetherHUD_execShowQuickSlots_Parms
{
	unsigned long                                      bAutoHide : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.RefreshPlayerList
// [0x00020002] 
struct ANetherHUD_execRefreshPlayerList_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  PlayerListString;                                 		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             NumPlayers;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.SubmitInputText
// [0x00020002] 
struct ANetherHUD_execSubmitInputText_Parms
{
	// struct FString                                  InputText;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherHUD.RefreshQuickSlotIcons
// [0x00020102] 
struct ANetherHUD_execRefreshQuickSlotIcons_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumQuickSlots;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ANetherInventoryManager*                  NInvManager;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANetherPawn*                              NPawn;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	// class AInventory*                               Inv;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.DrawPlayerHUD
// [0x00020003] ( FUNC_Final )
struct ANetherHUD_execDrawPlayerHUD_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANetherPawn*                              NPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           RadarRotation;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ANWeap*                                   NWeapon;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.DrawHUD
// [0x00020102] 
struct ANetherHUD_execDrawHUD_Parms
{
};

// Function NetherGame.NetherHUD.DrawCrosshair
// [0x00820102] 
struct ANetherHUD_execDrawCrosshair_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           CrosshairDI;                                      		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.ClearHeaderText
// [0x00020302] ( FUNC_Exec )
struct ANetherHUD_execClearHeaderText_Parms
{
};

// Function NetherGame.NetherHUD.SetHeaderText
// [0x00024302] ( FUNC_Exec )
struct ANetherHUD_execSetHeaderText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                FontSize;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                FontColor;                                        		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.HideMessageWindow
// [0x00020002] 
struct ANetherHUD_execHideMessageWindow_Parms
{
};

// Function NetherGame.NetherHUD.PostMessageToWindow
// [0x00024202] ( FUNC_Exec )
struct ANetherHUD_execPostMessageToWindow_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                HexColor;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPawn*                              NPlayer;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherHUD.Message
// [0x00024002] 
struct ANetherHUD_execMessage_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     msg;                                              		// 0x0008 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FName                                       MsgType;                                          		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Lifetime;                                         		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  ThePlayerName;                                    		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherHUD.ToggleChatFade
// [0x00020002] 
struct ANetherHUD_execToggleChatFade_Parms
{
};

// Function NetherGame.NetherHUD.DisplayConsoleMessages
// [0x00020000] 
struct ANetherHUD_execDisplayConsoleMessages_Parms
{
};

// Function NetherGame.NetherHUD.DisplayLocalMessages
// [0x00020000] 
struct ANetherHUD_execDisplayLocalMessages_Parms
{
};

// Function NetherGame.NetherHUD.PostNote
// [0x00020B02] ( FUNC_Exec | FUNC_Event )
struct ANetherHUD_execPostNote_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              NoteTime;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherHUD.PostBigMessage
// [0x00024B02] ( FUNC_Exec | FUNC_Event )
struct ANetherHUD_execPostBigMessage_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowImmediately : 1;                             		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowOnlyIfUnique : 1;                            		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              Width;                                            		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bClearQueue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.PostNotification
// [0x00024B02] ( FUNC_Exec | FUNC_Event )
struct ANetherHUD_execPostNotification_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowImmediately : 1;                             		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowOnlyIfUnique : 1;                            		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.PostMessage
// [0x00024B02] ( FUNC_Exec | FUNC_Event )
struct ANetherHUD_execPostMessage_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                PosX;                                             		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                PosY;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                FontSize;                                         		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Align;                                            		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                FontColor;                                        		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowImmediately : 1;                             		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowOnlyIfUnique : 1;                            		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              Width;                                            		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bClearQueue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherHUD.InitializePlayerHUD
// [0x00020003] ( FUNC_Final )
struct ANetherHUD_execInitializePlayerHUD_Parms
{
};

// Function NetherGame.NetherHUD.PostBeginPlay
// [0x00020102] 
struct ANetherHUD_execPostBeginPlay_Parms
{
};

// Function NetherGame.NetherPlayerControllerBase.Debug_DeleteServerDocs
// [0x002200C3] ( FUNC_Final )
struct ANetherPlayerControllerBase_execDebug_DeleteServerDocs_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerControllerBase.DebugDeleteServerDocs
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerControllerBase_execDebugDeleteServerDocs_Parms
{
};

// Function NetherGame.NetherPlayerControllerBase.ShouldDeleteServerDocsOnStartup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherPlayerControllerBase_execShouldDeleteServerDocsOnStartup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerControllerBase.ClientLoggedIn
// [0x010201C0] 
struct ANetherPlayerControllerBase_execClientLoggedIn_Parms
{
};

// Function NetherGame.NetherServerDocument.ClearAsyncOps
// [0x00020400] ( FUNC_Native )
struct ANetherServerDocument_execClearAsyncOps_Parms
{
};

// Function NetherGame.NetherServerDocument.GetDocumentTags
// [0x00420802] ( FUNC_Event )
struct ANetherServerDocument_eventGetDocumentTags_Parms
{
	TArray< struct FString >                           DocumentTags;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerDocument.OnDocumentUpdate
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocument.OnDocumentCreate
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_eventOnDocumentCreate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherServerDocument.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_eventPostBeginPlay_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocument.ResetToDefault
// [0x00020000] 
struct ANetherServerDocument_execResetToDefault_Parms
{
};

// Function NetherGame.NetherServerDocument.AutoSaveDocument
// [0x00020003] ( FUNC_Final )
struct ANetherServerDocument_execAutoSaveDocument_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerDocument.SafeToSave
// [0x00020002] 
struct ANetherServerDocument_execSafeToSave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerDocument.ShouldAutoSaveDocument
// [0x00020002] 
struct ANetherServerDocument_execShouldAutoSaveDocument_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerDocument.SaveDocument
// [0x00020002] 
struct ANetherServerDocument_execSaveDocument_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocument.Destroyed
// [0x00020902] ( FUNC_Event )
struct ANetherServerDocument_eventDestroyed_Parms
{
};

// Function NetherGame.NetherServerDocument.GetDocumentName
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_eventGetDocumentName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerDocumentClassOverride.GetDocumentTags
// [0x00420802] ( FUNC_Event )
struct ANetherServerDocumentClassOverride_eventGetDocumentTags_Parms
{
	TArray< struct FString >                           DocumentTags;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerDocumentClassOverride.SaveDocument
// [0x00020000] 
struct ANetherServerDocumentClassOverride_execSaveDocument_Parms
{
};

// Function NetherGame.NetherServerDocumentClassOverride.OnDocumentUpdate
// [0x00020800] ( FUNC_Event )
struct ANetherServerDocumentClassOverride_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherServerDocumentClassOverride.UpdateDocumentTimer
// [0x00020002] 
struct ANetherServerDocumentClassOverride_execUpdateDocumentTimer_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocumentClassOverride.SyncDocumentToServer
// [0x00020000] 
struct ANetherServerDocumentClassOverride_execSyncDocumentToServer_Parms
{
};

// Function NetherGame.NetherServerDocumentClassOverride.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocumentClassOverride_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NetherServerDocumentClassOverride.GetDocumentName
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocumentClassOverride_eventGetDocumentName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerPlayerDocument.GetDocumentTags
// [0x00420802] ( FUNC_Event )
struct ANetherServerPlayerDocument_eventGetDocumentTags_Parms
{
	TArray< struct FString >                           DocumentTags;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerPlayerDocument.GetDocumentName
// [0x00020802] ( FUNC_Event )
struct ANetherServerPlayerDocument_eventGetDocumentName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerPlayerDocument.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANetherServerPlayerDocument_eventPostBeginPlay_Parms
{
	// class ANetherPlayerController*                  OwningPC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerPlayerDocument.Tick
// [0x00020902] ( FUNC_Event )
struct ANetherServerPlayerDocument_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherServerPlayerDocument.PreAutosave
// [0x00020000] 
struct ANetherServerPlayerDocument_execPreAutosave_Parms
{
};

// Function NetherGame.NetherServerPlayerDocument.OnDocumentUpdate
// [0x00020802] ( FUNC_Event )
struct ANetherServerPlayerDocument_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherServerPlayerDocument.OnDocumentCreate
// [0x00020802] ( FUNC_Event )
struct ANetherServerPlayerDocument_eventOnDocumentCreate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerPlayerDocument.InitForPlayer
// [0x00020002] 
struct ANetherServerPlayerDocument_execInitForPlayer_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CharacterIndex;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrownObject.OnLifeExpired
// [0x00020002] 
struct ANThrownObject_execOnLifeExpired_Parms
{
};

// Function NetherGame.NThrownObject.Tick
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrownObject.SetInitialState
// [0x00820902] ( FUNC_Event )
struct ANThrownObject_eventSetInitialState_Parms
{
	// struct FVector                                  TossVel;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.GetAllPawns
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANThrownObject_AOEGrenadeBase_execGetAllPawns_Parms
{
	float                                              GrenadeRadius;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FHitPawn >                          ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.ExplosionFX
// [0x00020102] 
struct ANThrownObject_AOEGrenadeBase_execExplosionFX_Parms
{
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.AreaEffect
// [0x00020000] 
struct ANThrownObject_AOEGrenadeBase_execAreaEffect_Parms
{
	struct FHitPawn                                    InHitPawn;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.CheckGrenadeLOS
// [0x00020002] 
struct ANThrownObject_AOEGrenadeBase_execCheckGrenadeLOS_Parms
{
	class APawn*                                       PawnToCheck;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.ExplosionAOE
// [0x00820002] 
struct ANThrownObject_AOEGrenadeBase_execExplosionAOE_Parms
{
	// TArray< struct FHitPawn >                       HitPawns;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHitPawn                                 TempHitPawn;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.Tick
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_AOEGrenadeBase_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_AOEGrenadeBase_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrownObject_AOEGrenadeBase.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_AOEGrenadeBase_eventSetInitialState_Parms
{
};

// Function NetherGame.OnlineAuthInterfaceNether.VerifySteamClientAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceNether_execVerifySteamClientAuthSession_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ClientIP;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ClientPort;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AuthTicketUID;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.OnlineAuthInterfaceNether.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceNether_execVerifyClientAuthSession_Parms
{
	struct FUniqueNetId                                ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ClientIP;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ClientPort;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AuthTicketUID;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.OnlineAuthInterfaceNether.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceNether_execCreateClientAuthSession_Parms
{
	struct FUniqueNetId                                ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ServerIP;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ServerPort;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSecure : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                OutAuthTicketUID;                                 		// 0x0014 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.OnlineSubsystemNether.GetCurrentUTCTime
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execGetCurrentUTCTime_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.OnlineSubsystemNether.GetSecondsFromTimeString
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execGetSecondsFromTimeString_Parms
{
	struct FString                                     TimeString;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_GetData
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_GetData_Parms
{
	class ANetherServerDocument*                       Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ClientGetAuthToken
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ClientGetAuthToken_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ClientLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ClientLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerList
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerList_Parms
{
	TArray< struct FServerDesc >                       ServerListArray;                                  		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerHeartbeat
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerHeartbeat_Parms
{
	float                                              ServerTick;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerRegister
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerRegister_Parms
{
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerBanPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerBanPlayer_Parms
{
	struct FString                                     PlayerID;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerCleanupPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerCleanupPlayer_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerSpendGoldFor
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerSpendGoldFor_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                AmountSpent;                                      		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerUpdateGoldAmount
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerUpdateGoldAmount_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerDeleteServerDocs
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerDeleteServerDocs_Parms
{
	class ANetherPlayerControllerBase*                 PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerAuthorizePlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerAuthorizePlayer_Parms
{
	class ANetherPlayerControllerBase*                 PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerCreateData
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerCreateData_Parms
{
	class ANetherServerDocument*                       Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerWriteData
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerWriteData_Parms
{
	class ANetherServerDocument*                       Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.OnlineSubsystemNether.Mber_ServerLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execMber_ServerLogin_Parms
{
};

// Function NetherGame.OnlineSubsystemNether.CreateAuthInterface
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemNether_execCreateAuthInterface_Parms
{
	class UOnlineAuthInterfaceSteamworks*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherAnimBlendByAggro.GetAggroDirection
// [0x00820003] ( FUNC_Final )
struct UNetherAnimBlendByAggro_execGetAggroDirection_Parms
{
	struct FVector                                     AttackerDir;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  OwnerFacingDir;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// unsigned char                                   AggroDir;                                         		// 0x001C (0x0001) [0x0000000000000000]              
	// float                                           Angle_Front;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Angle_Left;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           Angle_Back;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           Angle_Right;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           Angle_Smallest;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherAnimBlendByAggro.AnimStopAggroAction
// [0x00020802] ( FUNC_Event )
struct UNetherAnimBlendByAggro_eventAnimStopAggroAction_Parms
{
	// class UAnimNodeSequence*                        HitReactNode;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherAnimBlendByAggro.AnimPlayAggroAction
// [0x00020003] ( FUNC_Final )
struct UNetherAnimBlendByAggro_execAnimPlayAggroAction_Parms
{
	unsigned char                                      AggroAction;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           AnimLength;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APawn*                                    PawnOwner;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FName                                    AggroAnim;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherAnimBlendByHitReact.GetHitReactDirection
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByHitReact_execGetHitReactDirection_Parms
{
	struct FVector                                     AttackerDir;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherAnimBlendByHitReact.AnimStopHitReact
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByHitReact_execAnimStopHitReact_Parms
{
};

// Function NetherGame.NetherAnimBlendByHitReact.AnimPlayHitReact
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByHitReact_execAnimPlayHitReact_Parms
{
	struct FVector                                     AttackerDir;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlayerPosture;                                    		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsMeleeDamage : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsMeleeBlocking : 1;                             		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherAnimBlendByHitReact.IsPlayingAnim
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByHitReact_execIsPlayingAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherAnimBlendByMeleeAction.StopMeleeAction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByMeleeAction_execStopMeleeAction_Parms
{
};

// Function NetherGame.NetherAnimBlendByMeleeAction.BeginMeleeBlock
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByMeleeAction_execBeginMeleeBlock_Parms
{
};

// Function NetherGame.NetherAnimBlendByMeleeAction.ReleaseMeleeAttack
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByMeleeAction_execReleaseMeleeAttack_Parms
{
	float                                              AnimDuration;                                     		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      bIsExhausted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherAnimBlendByMeleeAction.BeginMeleeHeavyAttack
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByMeleeAction_execBeginMeleeHeavyAttack_Parms
{
};

// Function NetherGame.NetherAnimBlendByOneOff.EndCustomAnim
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByOneOff_execEndCustomAnim_Parms
{
	float                                              BlendOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherAnimBlendByOneOff.IsPlayingAnim
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByOneOff_execIsPlayingAnim_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherAnimBlendByOneOff.BeginCustomAnim
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UNetherAnimBlendByOneOff_execBeginCustomAnim_Parms
{
	struct FName                                       CustomAnimName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              AnimRate;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherCameraMode_Socket.OnBecomeActive
// [0x00020002] 
struct UNetherCameraMode_Socket_execOnBecomeActive_Parms
{
	class APawn*                                       CameraTarget;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGameThirdPersonCameraMode*                  PrevMode;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClearAsyncOps
// [0x00020400] ( FUNC_Native )
struct ANetherPlayerController_execClearAsyncOps_Parms
{
};

// Function NetherGame.NetherPlayerController.CheckBulletWhip
// [0x00820002] 
struct ANetherPlayerController_execCheckBulletWhip_Parms
{
	class UAkEvent*                                    BulletWhip;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireLocation;                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireDir;                                          		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerDir;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PlayerLoc;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SoundLoc;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.UpdateGoldAmount
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execUpdateGoldAmount_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.TryPurchaseTemplatePremium
// [0x002200C2] 
struct ANetherPlayerController_execTryPurchaseTemplatePremium_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   Template;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           TemplatePrice;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  TemplateName;                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bPurchaseSuccess : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherPlayerController.TryPurchaseItemPremium
// [0x002200C2] 
struct ANetherPlayerController_execTryPurchaseItemPremium_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   NInv;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           ItemPrice;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.TryPurchaseItem
// [0x002200C2] 
struct ANetherPlayerController_execTryPurchaseItem_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   NInv;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AInventory*                               PurchasedInv;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           ItemPrice;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetFirstOpenSlot
// [0x00020102] 
struct ANetherPlayerController_execGetFirstOpenSlot_Parms
{
	int                                                ItemType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ClientResetInventoryUI
// [0x010201C2] 
struct ANetherPlayerController_execClientResetInventoryUI_Parms
{
	// class UNetherInventoryUI*                       InventoryUI;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ServerTrySellItem
// [0x002200C2] 
struct ANetherPlayerController_execServerTrySellItem_Parms
{
	int                                                SlotNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherInventoryManager*                  InvManager;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AInventory*                               Item;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class ANWeapRanged*                             RangedWeapItem;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UClass*                                   AmmoClass;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             SaleAmount;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             XPtoAward;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.CompleteTrade
// [0x002200C2] 
struct ANetherPlayerController_execCompleteTrade_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     BarterObject;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.ClientShowBarterPopup
// [0x010201C2] 
struct ANetherPlayerController_execClientShowBarterPopup_Parms
{
	struct FString                                     TradeDescription;                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bPlayerHasItems : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class ANInteractiveObject_Barter*                  BarterObject;                                     		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientPlayLocalSound
// [0x010201C2] 
struct ANetherPlayerController_execClientPlayLocalSound_Parms
{
	class UAkEvent*                                    Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClearClientHeader
// [0x010201C2] 
struct ANetherPlayerController_execClearClientHeader_Parms
{
};

// Function NetherGame.NetherPlayerController.UpdateClientHeader
// [0x010201C2] 
struct ANetherPlayerController_execUpdateClientHeader_Parms
{
	struct FString                                     HeaderContents;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.ClientPostNote
// [0x010201C2] 
struct ANetherPlayerController_execClientPostNote_Parms
{
	struct FString                                     Note;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              NoteTime;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.PostABigMessageToClient
// [0x010241C2] 
struct ANetherPlayerController_execPostABigMessageToClient_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowImmediately : 1;                             		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bClearQueue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientStopPickupTimer
// [0x010201C2] 
struct ANetherPlayerController_execClientStopPickupTimer_Parms
{
	unsigned long                                      bSkipAnimation : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientStartPickUpTimer
// [0x010201C2] 
struct ANetherPlayerController_execClientStartPickUpTimer_Parms
{
	float                                              AdjustedPickUpTime;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  Inv;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.NetherServerStopUse
// [0x002200C2] 
struct ANetherPlayerController_execNetherServerStopUse_Parms
{
};

// Function NetherGame.NetherPlayerController.StopUse
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execStopUse_Parms
{
};

// Function NetherGame.NetherPlayerController.NetherServerUse
// [0x002200C2] 
struct ANetherPlayerController_execNetherServerUse_Parms
{
};

// Function NetherGame.NetherPlayerController.Use
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execUse_Parms
{
};

// Function NetherGame.NetherPlayerController.FindPickup
// [0x00840003] ( FUNC_Final )
struct ANetherPlayerController_execFindPickup_Parms
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   BestPickup;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANInteractiveObject*                      InteractiveObj;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ANInteractiveObject*                      TempInteractiveObj;                               		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewLoc;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           ItemDot_Current;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           ItemDot_Best;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.IsValidPickup
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execIsValidPickup_Parms
{
	class AActor*                                      Pickup;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bValidUse : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ANInteractiveObject_SoundBox*             InteractiveObj_SoundBox;                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANDroppedPickup*                          NetherDroppedPickup;                              		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ANPickupFactory*                          NetherPickupFactory;                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ResetAttributes
// [0x00020002] 
struct ANetherPlayerController_execResetAttributes_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientPawnDied
// [0x010201C2] 
struct ANetherPlayerController_execClientPawnDied_Parms
{
};

// Function NetherGame.NetherPlayerController.PawnDied
// [0x00020002] 
struct ANetherPlayerController_execPawnDied_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.Possess
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetBloodLevelNoiseScale
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventGetBloodLevelNoiseScale_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             BloodLevel;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           LoudnessScale;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetBloodLevel
// [0x00020002] 
struct ANetherPlayerController_execGetBloodLevel_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.AddBloodPoint
// [0x00020002] 
struct ANetherPlayerController_execAddBloodPoint_Parms
{
};

// Function NetherGame.NetherPlayerController.CountdownBloodMeter
// [0x00020102] 
struct ANetherPlayerController_execCountdownBloodMeter_Parms
{
};

// Function NetherGame.NetherPlayerController.OnBloodPointsChanged
// [0x00020102] 
struct ANetherPlayerController_execOnBloodPointsChanged_Parms
{
	int                                                NewBloodPoints;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ANetherPlayerController_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerTestBloodPointAdd
// [0x002200C0] 
struct ANetherPlayerController_execServerTestBloodPointAdd_Parms
{
};

// Function NetherGame.NetherPlayerController.TestBloodPointAdd
// [0x00020302] ( FUNC_Exec )
struct ANetherPlayerController_execTestBloodPointAdd_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientSetMenuGroupSoundState
// [0x010201C2] 
struct ANetherPlayerController_execClientSetMenuGroupSoundState_Parms
{
	struct FName                                       InState;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientDisconnect
// [0x010201C0] 
struct ANetherPlayerController_execClientDisconnect_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerEnablePlayerMovement
// [0x002200C2] 
struct ANetherPlayerController_execServerEnablePlayerMovement_Parms
{
};

// Function NetherGame.NetherPlayerController.EnablePlayerMovement
// [0x00020002] 
struct ANetherPlayerController_execEnablePlayerMovement_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerDisablePlayerMovement
// [0x002200C2] 
struct ANetherPlayerController_execServerDisablePlayerMovement_Parms
{
	struct FName                                       DisabledState;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.DisablePlayerMovement
// [0x00024002] 
struct ANetherPlayerController_execDisablePlayerMovement_Parms
{
	struct FName                                       DisabledState;                                    		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPlayerController.PlayerIsDisconnecting
// [0x00020002] 
struct ANetherPlayerController_execPlayerIsDisconnecting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.IsPlayerGrabbingItem
// [0x00020002] 
struct ANetherPlayerController_execIsPlayerGrabbingItem_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.PlayerIsUpdatingWeapon
// [0x00020002] 
struct ANetherPlayerController_execPlayerIsUpdatingWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.OnEndWeaponUpdate
// [0x00020002] 
struct ANetherPlayerController_execOnEndWeaponUpdate_Parms
{
};

// Function NetherGame.NetherPlayerController.OnBeginWeaponUpdate
// [0x00020002] 
struct ANetherPlayerController_execOnBeginWeaponUpdate_Parms
{
};

// Function NetherGame.NetherPlayerController.PlayerIsDisabled
// [0x00020002] 
struct ANetherPlayerController_execPlayerIsDisabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.Taunt
// [0x00020200] ( FUNC_Exec )
struct ANetherPlayerController_execTaunt_Parms
{
	int                                                TauntIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.PlayBeepSound
// [0x00020100] 
struct ANetherPlayerController_execPlayBeepSound_Parms
{
};

// Function NetherGame.NetherPlayerController.CanAffordCost
// [0x00020002] 
struct ANetherPlayerController_execCanAffordCost_Parms
{
	int                                                InNormalCost;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InPremiumCost;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.SpendGC
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execSpendGC_Parms
{
	int                                                AmountToSpend;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.SpendMoney
// [0x00020002] 
struct ANetherPlayerController_execSpendMoney_Parms
{
	int                                                AmountToSpend;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSpentMoney : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherPlayerController.GetAttributeBonus
// [0x00020002] 
struct ANetherPlayerController_execGetAttributeBonus_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetAttributeLevel
// [0x00020002] 
struct ANetherPlayerController_execGetAttributeLevel_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetAttributeDiscription
// [0x00020002] 
struct ANetherPlayerController_execGetAttributeDiscription_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.GetAttributeName
// [0x00020002] 
struct ANetherPlayerController_execGetAttributeName_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.ServerAskToBuyStatPoint
// [0x002200C2] 
struct ANetherPlayerController_execServerAskToBuyStatPoint_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.CheckSkillUnlock
// [0x00020002] 
struct ANetherPlayerController_execCheckSkillUnlock_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SkillNumber;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             LevelToCheck;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetAttributeMaxLevel
// [0x00020002] 
struct ANetherPlayerController_execGetAttributeMaxLevel_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetCash
// [0x00020002] 
struct ANetherPlayerController_execGetCash_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetGold
// [0x00020002] 
struct ANetherPlayerController_execGetGold_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetCiviliansKilledStat
// [0x00020002] 
struct ANetherPlayerController_execGetCiviliansKilledStat_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetEnemiesKilledStat
// [0x00020002] 
struct ANetherPlayerController_execGetEnemiesKilledStat_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetBanditsKilledStat
// [0x00020002] 
struct ANetherPlayerController_execGetBanditsKilledStat_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetPlayersKilledStat
// [0x00020002] 
struct ANetherPlayerController_execGetPlayersKilledStat_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.CleanupPreviewMesh
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execCleanupPreviewMesh_Parms
{
};

// Function NetherGame.NetherPlayerController.SpawnPreviewMesh
// [0x00820003] ( FUNC_Final )
struct ANetherPlayerController_execSpawnPreviewMesh_Parms
{
	// class UNMapInfo*                                NetherMapInfo;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.TrySetCharacterTemplate
// [0x00040003] ( FUNC_Final )
struct ANetherPlayerController_execTrySetCharacterTemplate_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Head;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Body;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Legs;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerReplicationInfo*             PRI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.AreValidTemplateSettings
// [0x00020002] 
struct ANetherPlayerController_execAreValidTemplateSettings_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Head;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Body;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Legs;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   FamilyInfo;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ServerSetCharacterTemplate
// [0x002200C2] 
struct ANetherPlayerController_execServerSetCharacterTemplate_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Head;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Body;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Legs;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.SetCharacterTemplate
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execSetCharacterTemplate_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Head;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Body;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Legs;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.HasPickedCharacter
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execHasPickedCharacter_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UNetherEngine*                            NEngine;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ClientPlayerPickedCharacter
// [0x010201C3] ( FUNC_Final )
struct ANetherPlayerController_execClientPlayerPickedCharacter_Parms
{
};

// Function NetherGame.NetherPlayerController.PlayerPickedCharacter
// [0x002200C2] 
struct ANetherPlayerController_execPlayerPickedCharacter_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerStartSpectating
// [0x002200C2] 
struct ANetherPlayerController_execServerStartSpectating_Parms
{
};

// Function NetherGame.NetherPlayerController.StartSpectating
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execStartSpectating_Parms
{
};

// Function NetherGame.NetherPlayerController.TogglePersistentGlobalInventory
// [0x00020101] ( FUNC_Final )
struct ANetherPlayerController_execTogglePersistentGlobalInventory_Parms
{
};

// Function NetherGame.NetherPlayerController.IsInventoryScreenOpen
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execIsInventoryScreenOpen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherHUD*                               NHUD;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.CanOpenMenu
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execCanOpenMenu_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.SpawnStore
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execSpawnStore_Parms
{
	class ANetherServerDocument_Store*                 StoreDoc;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.AttemptUseQuickSlot
// [0x00040003] ( FUNC_Final )
struct ANetherPlayerController_execAttemptUseQuickSlot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherInventoryManager*                  NInvMgr;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bItemUsed : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherPlayerController.OnQuickSlotHoldTimerComplete
// [0x00040003] ( FUNC_Final )
struct ANetherPlayerController_execOnQuickSlotHoldTimerComplete_Parms
{
	// unsigned long                                   bItemUsed : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherPlayerController.QuickSlotReleased
// [0x00024202] ( FUNC_Exec )
struct ANetherPlayerController_execQuickSlotReleased_Parms
{
	int                                                QuickSlotNum;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bItemUsed : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class ANetherHUD*                               NHUD;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.StartUsingQuickSlot
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execStartUsingQuickSlot_Parms
{
	int                                                QuickSlotNum;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherHUD*                               NHUD;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANetherInventoryManager*                  NIM;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           QuickSlotActivationTime;                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.RequestDisconnect
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execRequestDisconnect_Parms
{
};

// Function NetherGame.NetherPlayerController.ToggleHUDCursor
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execToggleHUDCursor_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientShowStartScreen
// [0x010201C2] 
struct ANetherPlayerController_execClientShowStartScreen_Parms
{
};

// Function NetherGame.NetherPlayerController.DeathButtonExit
// [0x00020002] 
struct ANetherPlayerController_execDeathButtonExit_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxObject*                               Highlight;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.DeathButtonContinue
// [0x00020002] 
struct ANetherPlayerController_execDeathButtonContinue_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxObject*                               Highlight;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ClientPostChatMessage
// [0x010241C2] 
struct ANetherPlayerController_execClientPostChatMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                HexColor;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientShowDeathMessage
// [0x010201C2] 
struct ANetherPlayerController_execClientShowDeathMessage_Parms
{
	// class ANetherHUD*                               NHUD;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.BringUpStartScreenAfterDeath
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execBringUpStartScreenAfterDeath_Parms
{
};

// Function NetherGame.NetherPlayerController.ToggleChatFade
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execToggleChatFade_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerEquipMeleeWeapon
// [0x002200C2] 
struct ANetherPlayerController_execServerEquipMeleeWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.EquipMeleeWeapon
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execEquipMeleeWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerEquipSidearmWeapon
// [0x002200C2] 
struct ANetherPlayerController_execServerEquipSidearmWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.EquipSidearmWeapon
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execEquipSidearmWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerEquipRangedWeapon
// [0x002200C2] 
struct ANetherPlayerController_execServerEquipRangedWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.EquipRangedWeapon
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execEquipRangedWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.KilledPlayer
// [0x00020002] 
struct ANetherPlayerController_execKilledPlayer_Parms
{
};

// Function NetherGame.NetherPlayerController.KilledEnemy
// [0x00020002] 
struct ANetherPlayerController_execKilledEnemy_Parms
{
};

// Function NetherGame.NetherPlayerController.AddCash
// [0x00020002] 
struct ANetherPlayerController_execAddCash_Parms
{
	int                                                CashGiven;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.AddXP
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventAddXP_Parms
{
	int                                                XPGiven;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.AddXPInRadius
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventAddXPInRadius_Parms
{
	int                                                XPGiven;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPawn*                              NP;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.MoveToGlobalInventory
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execMoveToGlobalInventory_Parms
{
	class AInventory*                                  NInv;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                SlotNumber;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.SetInventorySlotInDocuments
// [0x00024002] 
struct ANetherPlayerController_execSetInventorySlotInDocuments_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  NInv;                                             		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClearInventorySlotInDocuments
// [0x00024002] 
struct ANetherPlayerController_execClearInventorySlotInDocuments_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPlayerController.AttemptQuickslotFromDocs
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execAttemptQuickslotFromDocs_Parms
{
	class AInventory*                                  NInv;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             QuickSlotNumber;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.SaveQuickslotItem
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execSaveQuickslotItem_Parms
{
	class AInventory*                                  NInv;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.SetSlot
// [0x00024002] 
struct ANetherPlayerController_execSetSlot_Parms
{
	class AInventory*                                  NInv;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bSuccessful : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherPlayerController.ServerSetInventoryToQuickslot
// [0x002200C2] 
struct ANetherPlayerController_execServerSetInventoryToQuickslot_Parms
{
	int                                                SlotNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                QuickSlot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClearSlot
// [0x00020002] 
struct ANetherPlayerController_execClearSlot_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.TryToSwapSlots
// [0x002200C2] 
struct ANetherPlayerController_execTryToSwapSlots_Parms
{
	int                                                SlotA;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SlotB;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               InvA;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AInventory*                               InvB;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             TempID;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             TempCount;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             TempSlot;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class ANetherInventoryManager*                  InvMgr;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.TryToSwapBackpack
// [0x002200C2] 
struct ANetherPlayerController_execTryToSwapBackpack_Parms
{
	int                                                NewBackpackSlot;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               Backpack_Current;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AInventory*                               Backpack_New;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class ANetherInventoryManager*                  InvMgr;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.IsGlobalSlot
// [0x00020102] 
struct ANetherPlayerController_execIsGlobalSlot_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.EquipRArmItem
// [0x00020002] 
struct ANetherPlayerController_execEquipRArmItem_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.EquipLArmItem
// [0x00020002] 
struct ANetherPlayerController_execEquipLArmItem_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.EquipHeadItem
// [0x00020002] 
struct ANetherPlayerController_execEquipHeadItem_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.EquipInventoryItem
// [0x00020002] 
struct ANetherPlayerController_execEquipInventoryItem_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.ServerConsumeInventoryItem
// [0x002200C3] ( FUNC_Final )
struct ANetherPlayerController_execServerConsumeInventoryItem_Parms
{
	int                                                SlotNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               NInv;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.UnloadGun
// [0x002200C3] ( FUNC_Final )
struct ANetherPlayerController_execUnloadGun_Parms
{
	int                                                SlotNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               NInv;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.DropItemInFrontOfPlayer
// [0x002200C3] ( FUNC_Final )
struct ANetherPlayerController_execDropItemInFrontOfPlayer_Parms
{
	int                                                SlotNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               NInv;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetBackpackSlots
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execGetBackpackSlots_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   BackpackClass;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetBackpackWeightCapacity
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execGetBackpackWeightCapacity_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetBackpackWeight
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execGetBackpackWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.DropCurrentWeapon
// [0x00820102] 
struct ANetherPlayerController_execDropCurrentWeapon_Parms
{
	// struct FVector                                  TossVel;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ClientXPAdded
// [0x01020142] 
struct ANetherPlayerController_execClientXPAdded_Parms
{
	int                                                XPGiven;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.IsDebugAimEnabled
// [0x00020002] 
struct ANetherPlayerController_execIsDebugAimEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.ToggleDebugAim
// [0x00020002] 
struct ANetherPlayerController_execToggleDebugAim_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientCashAdded
// [0x01020142] 
struct ANetherPlayerController_execClientCashAdded_Parms
{
	int                                                CashAmount;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.InternalAddCash
// [0x00040003] ( FUNC_Final )
struct ANetherPlayerController_execInternalAddCash_Parms
{
	int                                                CashToGive;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.Debug_ServerGiveCash
// [0x002200C0] 
struct ANetherPlayerController_execDebug_ServerGiveCash_Parms
{
	int                                                CashToGive;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.GetUnusedStatPoints
// [0x00020002] 
struct ANetherPlayerController_execGetUnusedStatPoints_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.ClientPlayerLeveledUp
// [0x01020142] 
struct ANetherPlayerController_execClientPlayerLeveledUp_Parms
{
	int                                                NewLevel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   LevelUpsEffect;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.CheckPlayerLevelUp
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execCheckPlayerLevelUp_Parms
{
	// int                                             Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.InternalAddXP
// [0x00040003] ( FUNC_Final )
struct ANetherPlayerController_execInternalAddXP_Parms
{
	int                                                XPToGive;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CurrentLevel;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PostCheckLevel;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.LogSpeedHack
// [0x00020002] 
struct ANetherPlayerController_execLogSpeedHack_Parms
{
};

// Function NetherGame.NetherPlayerController.Debug_ServerGiveXP
// [0x002200C0] 
struct ANetherPlayerController_execDebug_ServerGiveXP_Parms
{
	int                                                XPToGive;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.GetNextLevelXP
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execGetNextLevelXP_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NextLevelXP;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Level;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetPlayerXP
// [0x00020102] 
struct ANetherPlayerController_execGetPlayerXP_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetPlayerLevel
// [0x00020102] 
struct ANetherPlayerController_execGetPlayerLevel_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetPlayerMaxHealth
// [0x00020102] 
struct ANetherPlayerController_execGetPlayerMaxHealth_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetPlayerMaxStamina
// [0x00020102] 
struct ANetherPlayerController_execGetPlayerMaxStamina_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetPlayerHealth
// [0x00020102] 
struct ANetherPlayerController_execGetPlayerHealth_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetLogoutPosition
// [0x00820102] 
struct ANetherPlayerController_execGetLogoutPosition_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  PosVec;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ServerWriteIfShouldLoadPos
// [0x00020002] 
struct ANetherPlayerController_execServerWriteIfShouldLoadPos_Parms
{
	unsigned long                                      bShould : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.UpdateCharacterLogoutPosition
// [0x00020002] 
struct ANetherPlayerController_execUpdateCharacterLogoutPosition_Parms
{
};

// Function NetherGame.NetherPlayerController.NextWeapon
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execNextWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.PrevWeapon
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execPrevWeapon_Parms
{
};

// Function NetherGame.NetherPlayerController.CanChangeWeapon
// [0x00020102] 
struct ANetherPlayerController_execCanChangeWeapon_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.CanAccessMarket
// [0x00020002] 
struct ANetherPlayerController_execCanAccessMarket_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.CanAccessGlobalInventory
// [0x00020002] 
struct ANetherPlayerController_execCanAccessGlobalInventory_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.RemoveFromInventory
// [0x00024002] 
struct ANetherPlayerController_execRemoveFromInventory_Parms
{
	class UClass*                                      ItemToRemove;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      CheckFirst : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherInventoryManager*                  NInventoryManager;                                		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AInventory*                               TempInv;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// TArray< class AInventory* >                     Items;                                            		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.HasInInventory
// [0x00020002] 
struct ANetherPlayerController_execHasInInventory_Parms
{
	class UClass*                                      ItemToSearch;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< class AInventory* >                     Items;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             StacksTotal;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class AInventory*                               TempInv;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ANetherInventoryManager*                  NInventoryManager;                                		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.RequestReload
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execRequestReload_Parms
{
	// class ANWeapRanged*                             NWeap;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.FixFOV
// [0x00020002] 
struct ANetherPlayerController_execFixFOV_Parms
{
};

// Function NetherGame.NetherPlayerController.GetFOV
// [0x00020102] 
struct ANetherPlayerController_execGetFOV_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.UpdateRotation
// [0x00820002] 
struct ANetherPlayerController_execUpdateRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 DeltaRot;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ServerChangeCamera
// [0x002200C2] 
struct ANetherPlayerController_execServerChangeCamera_Parms
{
};

// Function NetherGame.NetherPlayerController.ClearPostOverride
// [0x00020002] 
struct ANetherPlayerController_execClearPostOverride_Parms
{
	// class ULocalPlayer*                             TheLocalPlayer;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.FadeOutFlashbangEffect
// [0x00820002] 
struct ANetherPlayerController_execFadeOutFlashbangEffect_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ULocalPlayer*                             TheLocalPlayer;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FPostProcessSettings                     OverrideSettings;                                 		// 0x000C (0x0160) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.StartFlashbangVisualEffect
// [0x00820002] 
struct ANetherPlayerController_execStartFlashbangVisualEffect_Parms
{
	// class ULocalPlayer*                             TheLocalPlayer;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FPostProcessSettings                     OverrideSettings;                                 		// 0x0008 (0x0160) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.UpdateVisualStun
// [0x00020002] 
struct ANetherPlayerController_execUpdateVisualStun_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.UpdateAudioStun
// [0x00020002] 
struct ANetherPlayerController_execUpdateAudioStun_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.EndFlashbangAudioEffect
// [0x00020002] 
struct ANetherPlayerController_execEndFlashbangAudioEffect_Parms
{
};

// Function NetherGame.NetherPlayerController.StartFlashbangAudioEffect
// [0x00020002] 
struct ANetherPlayerController_execStartFlashbangAudioEffect_Parms
{
};

// Function NetherGame.NetherPlayerController.StartFlashbangEffect
// [0x010201C2] 
struct ANetherPlayerController_execStartFlashbangEffect_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      VisualEffect : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ScaleBlur
// [0x00020002] 
struct ANetherPlayerController_execScaleBlur_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUberPostProcessEffect*                   UberEffect;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetUberEffect
// [0x00020002] 
struct ANetherPlayerController_execGetUberEffect_Parms
{
	class UUberPostProcessEffect*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ULocalPlayer*                             TheLocalPlayer;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UPostProcessChain*                        CurrentPPChain;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ChangeCamera
// [0x00020200] ( FUNC_Exec )
struct ANetherPlayerController_execChangeCamera_Parms
{
};

// Function NetherGame.NetherPlayerController.UsePlayerCameraForViewPoint
// [0x00020102] 
struct ANetherPlayerController_execUsePlayerCameraForViewPoint_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetServerIronsightsRot
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execGetServerIronsightsRot_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetServerIronsightsStartLoc
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execGetServerIronsightsStartLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.NetherServerMove
// [0x00220042] 
struct ANetherPlayerController_execNetherServerMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccel;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MoveFlags;                                        		// 0x001C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x001D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InbCrawl : 1;                                     		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.NetherShortServerMove
// [0x00220042] 
struct ANetherPlayerController_execNetherShortServerMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewFlags;                                         		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x0011 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InbCrawl : 1;                                     		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.RMServerMove
// [0x00220042] 
struct ANetherPlayerController_execRMServerMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccel;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MoveFlags;                                        		// 0x001C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x001D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InbCrawl : 1;                                     		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.NetherIronsightsServerMove
// [0x00220042] 
struct ANetherPlayerController_execNetherIronsightsServerMove_Parms
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccel;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      MoveFlags;                                        		// 0x001C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x001D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InbCrawl : 1;                                     		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     IronLoc;                                          		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                IronAim;                                          		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.NetherDualServerMove
// [0x00220042] 
struct ANetherPlayerController_execNetherDualServerMove_Parms
{
	float                                              TimeStamp0;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccel0;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PendingFlags;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View0;                                            		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeStamp;                                        		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InAccel;                                          		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewFlags;                                         		// 0x0034 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x0035 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0038 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InbCrawl : 1;                                     		// 0x003C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.CallServerMove
// [0x00820002] 
struct ANetherPlayerController_execCallServerMove_Parms
{
	class USavedMove*                                  NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ClientLoc;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ClientRoll;                                       		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                View;                                             		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USavedMove*                                  OldMove;                                          		// 0x001C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  BuildAccel;                                       		// 0x0024 (0x000C) [0x0000000000000000]              
	// unsigned char                                   OldAccelX;                                        		// 0x0030 (0x0001) [0x0000000000000000]              
	// unsigned char                                   OldAccelY;                                        		// 0x0031 (0x0001) [0x0000000000000000]              
	// unsigned char                                   OldAccelZ;                                        		// 0x0032 (0x0001) [0x0000000000000000]              
	// struct FRotator                                 IronsightBaseAim;                                 		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.CheckJumpOrDuck
// [0x00020002] 
struct ANetherPlayerController_execCheckJumpOrDuck_Parms
{
};

// Function NetherGame.NetherPlayerController.HandleWalking
// [0x00020002] 
struct ANetherPlayerController_execHandleWalking_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientShowPopupNotification
// [0x010241C2] 
struct ANetherPlayerController_execClientShowPopupNotification_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     BodyText;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ButtonText;                                       		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.ClientCloseBarterPopup
// [0x010201C2] 
struct ANetherPlayerController_execClientCloseBarterPopup_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientClosePopupByID
// [0x010201C2] 
struct ANetherPlayerController_execClientClosePopupByID_Parms
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientClearPrompt
// [0x010201C2] 
struct ANetherPlayerController_execClientClearPrompt_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientShowPrompt
// [0x010201C2] 
struct ANetherPlayerController_execClientShowPrompt_Parms
{
	struct FString                                     Prompt;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.ToggleAdminMapdata
// [0x002208C2] ( FUNC_Event )
struct ANetherPlayerController_eventToggleAdminMapdata_Parms
{
	unsigned long                                      bInShowAdminMapData : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.DebugShowMapLocations
// [0x00024600] ( FUNC_Exec | FUNC_Native )
struct ANetherPlayerController_execDebugShowMapLocations_Parms
{
	unsigned long                                      InDebugShowPlayerMapData : 1;                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InDebugShowEnemyMapData : 1;                      		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InDebugShowEnemySpawnMapData : 1;                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InDebugShowLootMapData : 1;                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InDebugShowLootSpawnMapData : 1;                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPlayerController.DebugServerUpdateMapLocations
// [0x00020102] 
struct ANetherPlayerController_execDebugServerUpdateMapLocations_Parms
{
};

// Function NetherGame.NetherPlayerController.NativeServerUpdateMapLocations
// [0x00020400] ( FUNC_Native )
struct ANetherPlayerController_execNativeServerUpdateMapLocations_Parms
{
};

// Function NetherGame.NetherPlayerController.ShowInteractPrompt
// [0x00020002] 
struct ANetherPlayerController_execShowInteractPrompt_Parms
{
	class AActor*                                      InteractActor;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.PlayerTick
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventPlayerTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   InteractActor;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AActor*                                   NoiseMaker;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   LoudestNoise;                                     		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.GetPlayerViewPoint
// [0x00C20902] ( FUNC_Event )
struct ANetherPlayerController_eventGetPlayerViewPoint_Parms
{
	struct FVector                                     out_Location;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_Rotation;                                     		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  DesiredLoc;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DesiredRot;                                       		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.AddOnlineDelegates
// [0x00020002] 
struct ANetherPlayerController_execAddOnlineDelegates_Parms
{
	unsigned long                                      bRegisterVoice : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.GetNetherPawn
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execGetNetherPawn_Parms
{
	class ANetherPawn*                                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.UpdateSpawnStats_Enemies
// [0x00020400] ( FUNC_Native )
struct ANetherPlayerController_execUpdateSpawnStats_Enemies_Parms
{
	int                                                NumActive;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPooled;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumMax;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CycleTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.UpdateSpawnStats_Pickups
// [0x00020400] ( FUNC_Native )
struct ANetherPlayerController_execUpdateSpawnStats_Pickups_Parms
{
	int                                                NumActive;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPooled;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumMax;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CycleTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientUpdateSpawnStats_Enemies
// [0x01020942] ( FUNC_Event )
struct ANetherPlayerController_eventClientUpdateSpawnStats_Enemies_Parms
{
	int                                                NumActive;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPooled;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumMax;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CycleTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ClientUpdateSpawnStats_Pickups
// [0x01020942] ( FUNC_Event )
struct ANetherPlayerController_eventClientUpdateSpawnStats_Pickups_Parms
{
	int                                                NumActive;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPooled;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumMax;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CycleTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.IsDebugPickupFinderEnabled
// [0x00020102] 
struct ANetherPlayerController_execIsDebugPickupFinderEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.ToggleDebugPickupFinder
// [0x00020002] 
struct ANetherPlayerController_execToggleDebugPickupFinder_Parms
{
};

// Function NetherGame.NetherPlayerController.DebugServerSpawnPool_Enemies
// [0x002200C2] 
struct ANetherPlayerController_execDebugServerSpawnPool_Enemies_Parms
{
	unsigned long                                      bForceFullAlloc : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                AllocMax;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.DebugSpawnPool_Enemies
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execDebugSpawnPool_Enemies_Parms
{
	unsigned long                                      bForceFullAlloc : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                AllocMax;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.DebugServerSpawnPool_Pickups
// [0x002200C2] 
struct ANetherPlayerController_execDebugServerSpawnPool_Pickups_Parms
{
	unsigned long                                      bForceFullAlloc : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                AllocMax;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.DebugSpawnPool_Pickups
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execDebugSpawnPool_Pickups_Parms
{
	unsigned long                                      bForceFullAlloc : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                AllocMax;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ToggleFlashlight
// [0x00020202] ( FUNC_Exec )
struct ANetherPlayerController_execToggleFlashlight_Parms
{
};

// Function NetherGame.NetherPlayerController.CleanupData
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execCleanupData_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.PrepareLogout
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventPrepareLogout_Parms
{
};

// Function NetherGame.NetherPlayerController.ResetServerDocs
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execResetServerDocs_Parms
{
};

// Function NetherGame.NetherPlayerController.CanRestartPlayer
// [0x00020002] 
struct ANetherPlayerController_execCanRestartPlayer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.RevokeGCPurchase
// [0x00020800] ( FUNC_Event )
struct ANetherPlayerController_eventRevokeGCPurchase_Parms
{
};

// Function NetherGame.NetherPlayerController.ClientPrintSystemMessage
// [0x010201C2] 
struct ANetherPlayerController_execClientPrintSystemMessage_Parms
{
	struct FString                                     SysMessage;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.SendMOTD
// [0x00020002] 
struct ANetherPlayerController_execSendMOTD_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.ServerPrintPlayerList
// [0x002200C2] 
struct ANetherPlayerController_execServerPrintPlayerList_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.PrintPlayerList
// [0x00020302] ( FUNC_Exec )
struct ANetherPlayerController_execPrintPlayerList_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerWhoIs
// [0x002200C2] 
struct ANetherPlayerController_execServerWhoIs_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.WhoIs
// [0x00020302] ( FUNC_Exec )
struct ANetherPlayerController_execWhoIs_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.ServerBanPlayer
// [0x002200C2] 
struct ANetherPlayerController_execServerBanPlayer_Parms
{
	struct FString                                     MberPlayerId;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.BanPlayer
// [0x00020302] ( FUNC_Exec )
struct ANetherPlayerController_execBanPlayer_Parms
{
	struct FString                                     PlayerID;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.AskToBuyGold
// [0x00020102] 
struct ANetherPlayerController_execAskToBuyGold_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  AuthToken;                                        		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherPlayerController.UpdateGoldCurrency
// [0x00020802] ( FUNC_Event )
struct ANetherPlayerController_eventUpdateGoldCurrency_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.AttemptAutoConnect
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherPlayerController_execAttemptAutoConnect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.BringUpStartScreen
// [0x00020002] 
struct ANetherPlayerController_execBringUpStartScreen_Parms
{
};

// Function NetherGame.NetherPlayerController.TryBringUpStartScreen
// [0x010201C2] 
struct ANetherPlayerController_execTryBringUpStartScreen_Parms
{
};

// Function NetherGame.NetherPlayerController.OnDocumentUpdate
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execOnDocumentUpdate_Parms
{
	class ANetherServerDocument*                       Doc;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.IsUpdatingServerDocs
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execIsUpdatingServerDocs_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.SpawnDocuments
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerController_execSpawnDocuments_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerSpawnDocuments
// [0x002200C3] ( FUNC_Final )
struct ANetherPlayerController_execServerSpawnDocuments_Parms
{
};

// Function NetherGame.NetherPlayerController.SwapServerDocs
// [0x00040003] ( FUNC_Final )
struct ANetherPlayerController_execSwapServerDocs_Parms
{
	int                                                NewSlotIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ServerSetCharacterSlot
// [0x002200C3] ( FUNC_Final )
struct ANetherPlayerController_execServerSetCharacterSlot_Parms
{
	int                                                NewSlotIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.SetCharacterSlot
// [0x00020103] ( FUNC_Final )
struct ANetherPlayerController_execSetCharacterSlot_Parms
{
	int                                                NewSlotIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANetherPlayerController_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerController.ServerTryResetPosition
// [0x002200C2] 
struct ANetherPlayerController_execServerTryResetPosition_Parms
{
};

// Function NetherGame.NetherPlayerController.ServerSuicide
// [0x002200C0] 
struct ANetherPlayerController_execServerSuicide_Parms
{
};

// Function NetherGame.NetherPlayerController.GetCurrentDate
// [0x00020400] ( FUNC_Native )
struct ANetherPlayerController_execGetCurrentDate_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.GetSubwayVolumes
// [0x00020102] 
struct ANetherPlayerController_execGetSubwayVolumes_Parms
{
	// class ANetherSubwayVolume*                      TempVolume;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANetherSubwayVolume_Transition*           TempTransitionVolume;                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerController.SetInitialState
// [0x00020900] ( FUNC_Event )
struct ANetherPlayerController_eventSetInitialState_Parms
{
};

// Function NetherGame.NetherPlayerController.TryResetPosition
// [0x00020002] 
struct ANetherPlayerController_execTryResetPosition_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPlayerController.ResetPosition
// [0x00020002] 
struct ANetherPlayerController_execResetPosition_Parms
{
};

// Function NetherGame.NetherPlayerController.CleanupPawn
// [0x00020002] 
struct ANetherPlayerController_execCleanupPawn_Parms
{
};

// Function NetherGame.NetherSafeZone.EnterAllPlayers
// [0x00020002] 
struct ANetherSafeZone_execEnterAllPlayers_Parms
{
	// TArray< class ANetherPawn* >                    PlayersInZone;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPawn*                              NP;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSafeZone.ExitAllPlayers
// [0x00020002] 
struct ANetherSafeZone_execExitAllPlayers_Parms
{
	// TArray< class ANetherPawn* >                    PlayersInZone;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPawn*                              NP;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSafeZone.IntializeSafeZone
// [0x00020002] 
struct ANetherSafeZone_execIntializeSafeZone_Parms
{
	class ANetherTerritoryVolume*                      VolumeOwner;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSafeZone.ObjectiveActiveInSafeZone
// [0x00020002] 
struct ANetherSafeZone_execObjectiveActiveInSafeZone_Parms
{
};

// Function NetherGame.NetherSafeZone.DisableSafeZone
// [0x00020002] 
struct ANetherSafeZone_execDisableSafeZone_Parms
{
};

// Function NetherGame.NetherSafeZone.EnableSafeZone
// [0x00020002] 
struct ANetherSafeZone_execEnableSafeZone_Parms
{
};

// Function NetherGame.NetherSafeZone.IsActive
// [0x00020802] ( FUNC_Event )
struct ANetherSafeZone_eventIsActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherTerritoryVolume.GetSafeZone
// [0x00020002] 
struct ANetherTerritoryVolume_execGetSafeZone_Parms
{
	class ANetherSafeZone*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherTerritoryVolume.IsSafeZone
// [0x00020003] ( FUNC_Final )
struct ANetherTerritoryVolume_execIsSafeZone_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherTerritoryVolume.CleanUpAllEnemies
// [0x00020002] 
struct ANetherTerritoryVolume_execCleanUpAllEnemies_Parms
{
	// class ANPawnEnemy*                              A;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherTerritoryVolume.ExitAllPlayersFromSafeZone
// [0x00020002] 
struct ANetherTerritoryVolume_execExitAllPlayersFromSafeZone_Parms
{
	// TArray< class ANetherPawn* >                    PlayersInVol;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPawn*                              NPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherTerritoryVolume.AllowedToSpawn
// [0x00020802] ( FUNC_Event )
struct ANetherTerritoryVolume_eventAllowedToSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherTerritoryVolume.ObjectiveRequest_SpawnEnemy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherTerritoryVolume_execObjectiveRequest_SpawnEnemy_Parms
{
	class UClass*                                      EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                XPBonus;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ANPawnEnemy*                                 ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherTerritoryVolume.PreObjectiveActivation
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct ANetherTerritoryVolume_execPreObjectiveActivation_Parms
{
	unsigned long                                      bClearEnemies : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bClearPickups : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.GetAllPlayers
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherTerritoryVolume_execGetAllPlayers_Parms
{
	TArray< class ANetherPawn* >                       ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherTerritoryVolume.GetEnemyCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherTerritoryVolume_execGetEnemyCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherTerritoryVolume.AwardPawnXP
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherTerritoryVolume_execAwardPawnXP_Parms
{
	int                                                XPAmount;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.UnTouch
// [0x00020802] ( FUNC_Event )
struct ANetherTerritoryVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.Touch
// [0x00020802] ( FUNC_Event )
struct ANetherTerritoryVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.PostBeginPlay
// [0x00020002] 
struct ANetherTerritoryVolume_execPostBeginPlay_Parms
{
	// class APlayerStart*                             PlayerSpawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherTerritoryVolume.OnUnTouchSafeZone
// [0x00120000] 
struct ANetherTerritoryVolume_execOnUnTouchSafeZone_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.OnTouchSafeZone
// [0x00120000] 
struct ANetherTerritoryVolume_execOnTouchSafeZone_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.OnUnTouch
// [0x00120000] 
struct ANetherTerritoryVolume_execOnUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherTerritoryVolume.OnTouch
// [0x00120000] 
struct ANetherTerritoryVolume_execOnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.IsStunned
// [0x00020002] 
struct ANBotEnemy_execIsStunned_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy.NotifyTakeHit
// [0x00020002] 
struct ANBotEnemy_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.IsAttacking
// [0x00020002] 
struct ANBotEnemy_execIsAttacking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy.HuntOrAttack
// [0x00020000] 
struct ANBotEnemy_execHuntOrAttack_Parms
{
};

// Function NetherGame.NBotEnemy.OnNPawnDied
// [0x00020002] 
struct ANBotEnemy_execOnNPawnDied_Parms
{
	class ANetherPawn*                                 NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.ClearHuntedPlayer
// [0x00020002] 
struct ANBotEnemy_execClearHuntedPlayer_Parms
{
};

// Function NetherGame.NBotEnemy.AssignHuntedPlayer
// [0x00020002] 
struct ANBotEnemy_execAssignHuntedPlayer_Parms
{
	class ANetherPawn*                                 InHuntedPlayer;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.GetUnstuck
// [0x00020000] 
struct ANBotEnemy_execGetUnstuck_Parms
{
};

// Function NetherGame.NBotEnemy.IsStuck
// [0x00020003] ( FUNC_Final )
struct ANBotEnemy_execIsStuck_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy.CheckIfStuck
// [0x00020002] 
struct ANBotEnemy_execCheckIfStuck_Parms
{
};

// Function NetherGame.NBotEnemy.NotifyHitWall
// [0x00020802] ( FUNC_Event )
struct ANBotEnemy_eventNotifyHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy.DropAggro
// [0x00020002] 
struct ANBotEnemy_execDropAggro_Parms
{
};

// Function NetherGame.NBotEnemy.OnAggroEnded
// [0x00080002] 
struct ANBotEnemy_execOnAggroEnded_Parms
{
};

// Function NetherGame.NBotEnemy.InvestigateObject
// [0x00020002] 
struct ANBotEnemy_execInvestigateObject_Parms
{
	class AActor*                                      AggroObject;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.AssignAggro
// [0x00020002] 
struct ANBotEnemy_execAssignAggro_Parms
{
	class ANetherPawn*                                 PlayerPawn;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      AggroType;                                        		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.SeePlayer
// [0x00020802] ( FUNC_Event )
struct ANBotEnemy_eventSeePlayer_Parms
{
	class APawn*                                       SeenPlayer;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              PlayerPawn;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy.HearNoise
// [0x00024802] ( FUNC_Event )
struct ANBotEnemy_eventHearNoise_Parms
{
	float                                              Loudness;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NoiseMaker;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPawn*                              PlayerPawn;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AShriekerPawn*                            ShriekerNoisePawn;                                		// 0x001C (0x0008) [0x0000000000000000]              
	// class ANThrownObject*                           ObjectNoise;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy.ObjectiveAllowsDespawn
// [0x00020002] 
struct ANBotEnemy_execObjectiveAllowsDespawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy.NotifyStunned
// [0x00020002] 
struct ANBotEnemy_execNotifyStunned_Parms
{
	float                                              InStunDuration;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBotEnemy.Possess
// [0x00020802] ( FUNC_Event )
struct ANBotEnemy_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.IsSpawning
// [0x00020002] 
struct ANPawnEnemy_execIsSpawning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.IsDespawning
// [0x00020002] 
struct ANPawnEnemy_execIsDespawning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.Died
// [0x00020002] 
struct ANPawnEnemy_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  PlayerKiller;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.PlayDying
// [0x00020102] 
struct ANPawnEnemy_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.PlayJumpingSound
// [0x00020000] 
struct ANPawnEnemy_execPlayJumpingSound_Parms
{
};

// Function NetherGame.NPawnEnemy.PlayLandingSound
// [0x00020000] 
struct ANPawnEnemy_execPlayLandingSound_Parms
{
};

// Function NetherGame.NPawnEnemy.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANPawnEnemy_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.OneOffAnim_End
// [0x00040103] ( FUNC_Final )
struct ANPawnEnemy_execOneOffAnim_End_Parms
{
};

// Function NetherGame.NPawnEnemy.OneOffAnim_Play
// [0x00044103] ( FUNC_Final )
struct ANPawnEnemy_execOneOffAnim_Play_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.EndCustomAnim
// [0x00020002] 
struct ANPawnEnemy_execEndCustomAnim_Parms
{
};

// Function NetherGame.NPawnEnemy.PlayCustomAnim
// [0x00020102] 
struct ANPawnEnemy_execPlayCustomAnim_Parms
{
	int                                                InCustomAnimIndex;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CustomAnimDuration;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.OnTODChanged
// [0x00020003] ( FUNC_Final )
struct ANPawnEnemy_execOnTODChanged_Parms
{
	unsigned char                                      NewTimeOfDay;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.Tick
// [0x00020902] ( FUNC_Event )
struct ANPawnEnemy_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANBotEnemy*                               BotController;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.SetLoudestSound
// [0x00020102] 
struct ANPawnEnemy_execSetLoudestSound_Parms
{
	unsigned char                                      SoundType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.RegisterAsNoiseMaker
// [0x00020102] 
struct ANPawnEnemy_execRegisterAsNoiseMaker_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.BuildCustomAnimScripts
// [0x00020400] ( FUNC_Native )
struct ANPawnEnemy_execBuildCustomAnimScripts_Parms
{
};

// Function NetherGame.NPawnEnemy.AddToSwingHurtList
// [0x00080002] 
struct ANPawnEnemy_execAddToSwingHurtList_Parms
{
	class AActor*                                      newEntry;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.DamagePlayerPawn_AOE
// [0x00080002] 
struct ANPawnEnemy_execDamagePlayerPawn_AOE_Parms
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      AOEDamageType;                                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.DamagePlayerPawn_Swipe
// [0x00880002] 
struct ANPawnEnemy_execDamagePlayerPawn_Swipe_Parms
{
	float                                              DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRange;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Extents;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bSuccessfulHit : 1;                               		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NPawnEnemy.AttemptDamagePlayer
// [0x00820002] 
struct ANPawnEnemy_execAttemptDamagePlayer_Parms
{
	unsigned long                                      bTeleportAttack : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FEnemyAttackScript                       CurrentAttackScript;                              		// 0x0004 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FEnemyAttackScript >             AttackScripts;                                    		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             InAttackScriptIndex;                              		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.PlayAttackAnim
// [0x00020102] 
struct ANPawnEnemy_execPlayAttackAnim_Parms
{
	int                                                InAttackScriptIndex;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTeleportAttack : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           AttackAnimDuration;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FEnemyAttackScript >             AttackScripts;                                    		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NPawnEnemy.EndAttack
// [0x00020002] 
struct ANPawnEnemy_execEndAttack_Parms
{
};

// Function NetherGame.NPawnEnemy.BeginAttack
// [0x00420002] 
struct ANPawnEnemy_execBeginAttack_Parms
{
	unsigned long                                      bTeleportAttack : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FEnemyAttackScript                          RandomAttack;                                     		// 0x0004 (0x0040) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           AttackAnimDuration;                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// TArray< struct FEnemyAttackScript >             AttackScripts;                                    		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             ScriptIndex;                                      		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.EndPlayerAggro
// [0x00020002] 
struct ANPawnEnemy_execEndPlayerAggro_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.BeginPlayerAggro
// [0x00820002] 
struct ANPawnEnemy_execBeginPlayerAggro_Parms
{
	unsigned char                                      InAggroType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SightDir;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           AggroAnimDuration;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.IsAggroed
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANPawnEnemy_execIsAggroed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.IsHeadShot
// [0x00820002] 
struct ANPawnEnemy_execIsHeadShot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              AdditionalScale;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HeadLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.PlayTakeHitEffects
// [0x00820102] 
struct ANPawnEnemy_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   NDamage;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bRanged : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bHeadShot : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bEffectIsRelevant : 1;                            		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UParticleSystem*                          HitEffectTemplate;                                		// 0x0028 (0x0008) [0x0000000000000000]              
	// float                                           StunDuration;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.PlayHit
// [0x00020002] 
struct ANPawnEnemy_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ANPawnEnemy_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           Dist1;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           Dist2;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	// class ANBotEnemy*                               BotController;                                    		// 0x0064 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.TurnOff
// [0x00020102] 
struct ANPawnEnemy_execTurnOff_Parms
{
};

// Function NetherGame.NPawnEnemy.TurnOn
// [0x00020102] 
struct ANPawnEnemy_execTurnOn_Parms
{
};

// Function NetherGame.NPawnEnemy.GoToInitialPosition
// [0x00020003] ( FUNC_Final )
struct ANPawnEnemy_execGoToInitialPosition_Parms
{
};

// Function NetherGame.NPawnEnemy.InitializeDeSpawn
// [0x00020003] ( FUNC_Final )
struct ANPawnEnemy_execInitializeDeSpawn_Parms
{
};

// Function NetherGame.NPawnEnemy.InitializeFromPool
// [0x00020003] ( FUNC_Final )
struct ANPawnEnemy_execInitializeFromPool_Parms
{
};

// Function NetherGame.NPawnEnemy.CleanupForRecycle
// [0x00020003] ( FUNC_Final )
struct ANPawnEnemy_execCleanupForRecycle_Parms
{
	unsigned long                                      bEnemyDied : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.UpdateDayNightVars
// [0x00020002] 
struct ANPawnEnemy_execUpdateDayNightVars_Parms
{
	// float                                           HealthRatio;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.GetHealthPercentage
// [0x00020002] 
struct ANPawnEnemy_execGetHealthPercentage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.GetEnemyLeashTimestamp
// [0x00020002] 
struct ANPawnEnemy_execGetEnemyLeashTimestamp_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPawnEnemy.SetEnemyLeashTimestamp
// [0x00020002] 
struct ANPawnEnemy_execSetEnemyLeashTimestamp_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.SetInitialPosition
// [0x00020002] 
struct ANPawnEnemy_execSetInitialPosition_Parms
{
	struct FVector                                     InInitialPosition;                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.SetCharacterClassFromInfo
// [0x00020102] 
struct ANPawnEnemy_execSetCharacterClassFromInfo_Parms
{
	class UClass*                                      Info;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ANPawnEnemy_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function NetherGame.NPawnEnemy.ToggleAggroDisplay
// [0x00024002] 
struct ANPawnEnemy_execToggleAggroDisplay_Parms
{
	unsigned long                                      bEnableSight : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bEnableSound : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UDrawCylinderComponent*                   DrawComponent;                                    		// 0x0008 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// TArray< class UDrawCylinderComponent* >         DrawComponents;                                   		// 0x0010 (0x0010) [0x0000000004400000]              ( CPF_NeedCtorLink | CPF_EditInline )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           TriSideRatio;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           ConeHeight;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           ConeRadius;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           PeripheralVisionAngle;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           PeripheralVisionAngle_Max;                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPawnEnemy.CreateAggroComponent
// [0x00040003] ( FUNC_Final )
struct ANPawnEnemy_execCreateAggroComponent_Parms
{
	float                                              InnerRadius;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              OuterRadius;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      InColor;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HeightOffset;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UDrawCylinderComponent*                      ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UDrawCylinderComponent*                   AggroDrawComponent;                               		// 0x001C (0x0008) [0x0000000004000000]              ( CPF_EditInline )
};

// Function NetherGame.NPawnEnemy.PostBeginPlay
// [0x00020102] 
struct ANPawnEnemy_execPostBeginPlay_Parms
{
};

// Function NetherGame.NPawnEnemy.OnDeathNotifyEvent
// [0x00120000] 
struct ANPawnEnemy_execOnDeathNotifyEvent_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.OnRecycled
// [0x00120000] 
struct ANPawnEnemy_execOnRecycled_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnemyDied : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.OnDied
// [0x00120000] 
struct ANPawnEnemy_execOnDied_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANetherPawn*                                 Killer;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.OnDeSpawnAnimEnded
// [0x00120000] 
struct ANPawnEnemy_execOnDeSpawnAnimEnded_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPawnEnemy.OnDeathAnimEnded
// [0x00120000] 
struct ANPawnEnemy_execOnDeathAnimEnded_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.TeleporterPawn.GetMaxJumpForwardOffset
// [0x00020002] 
struct ATeleporterPawn_execGetMaxJumpForwardOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetAttackedMaxJumpToOffsetMax
// [0x00020002] 
struct ATeleporterPawn_execGetAttackedMaxJumpToOffsetMax_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetAttackedMaxJumpToOffsetMin
// [0x00020002] 
struct ATeleporterPawn_execGetAttackedMaxJumpToOffsetMin_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetMaxJumpToOffset
// [0x00020002] 
struct ATeleporterPawn_execGetMaxJumpToOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetMinJumpToOffset
// [0x00020002] 
struct ATeleporterPawn_execGetMinJumpToOffset_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetMaxRunningThreshold
// [0x00020002] 
struct ATeleporterPawn_execGetMaxRunningThreshold_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetMaxDistancePerTeleport
// [0x00020002] 
struct ATeleporterPawn_execGetMaxDistancePerTeleport_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetMinDistancePerTeleport
// [0x00020002] 
struct ATeleporterPawn_execGetMinDistancePerTeleport_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetTeleportAttackRespawnMax
// [0x00020002] 
struct ATeleporterPawn_execGetTeleportAttackRespawnMax_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetTeleportAttackRespawnMin
// [0x00020002] 
struct ATeleporterPawn_execGetTeleportAttackRespawnMin_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetTeleportRespawnMax
// [0x00020002] 
struct ATeleporterPawn_execGetTeleportRespawnMax_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetTeleportRespawnMin
// [0x00020002] 
struct ATeleporterPawn_execGetTeleportRespawnMin_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetTimeBeforeTeleMax
// [0x00020002] 
struct ATeleporterPawn_execGetTimeBeforeTeleMax_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.TeleporterPawn.GetTimeBeforeTeleMin
// [0x00020002] 
struct ATeleporterPawn_execGetTimeBeforeTeleMin_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.DebugWin
// [0x00020000] 
struct ANetherObjective_execDebugWin_Parms
{
};

// Function NetherGame.NetherObjective.UnTouched
// [0x00020000] 
struct ANetherObjective_execUnTouched_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjective.GetPercentCompleteString
// [0x00020102] 
struct ANetherObjective_execGetPercentCompleteString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherObjective.GetObjectiveDescription
// [0x00020102] 
struct ANetherObjective_execGetObjectiveDescription_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherObjective.IsLost
// [0x00020002] 
struct ANetherObjective_execIsLost_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.IsInCooldown
// [0x00020002] 
struct ANetherObjective_execIsInCooldown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.CanBeActivated
// [0x00020802] ( FUNC_Event )
struct ANetherObjective_eventCanBeActivated_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.IsActive
// [0x00020902] ( FUNC_Event )
struct ANetherObjective_eventIsActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.GetRandomPossibleVolume
// [0x00080003] ( FUNC_Final )
struct ANetherObjective_execGetRandomPossibleVolume_Parms
{
	class ANetherTerritoryVolume*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.OnObjectiveLost
// [0x00080000] 
struct ANetherObjective_execOnObjectiveLost_Parms
{
};

// Function NetherGame.NetherObjective.OnObjectiveWon
// [0x00080002] 
struct ANetherObjective_execOnObjectiveWon_Parms
{
	// TArray< class ANetherPawn* >                    PawnsInVolume;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPawn*                              NPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANetherTerritoryVolume*                   TempVolume;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective.OnObjectiveEnded
// [0x00020002] 
struct ANetherObjective_execOnObjectiveEnded_Parms
{
	unsigned long                                      bWasCompleted : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ANetherTerritoryVolume*                   TempVolume;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective.TryActivate
// [0x00020002] 
struct ANetherObjective_execTryActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective.Activate
// [0x00020002] 
struct ANetherObjective_execActivate_Parms
{
};

// Function NetherGame.NetherObjective.PostMessageForPlayersInVol
// [0x010201C2] 
struct ANetherObjective_execPostMessageForPlayersInVol_Parms
{
	struct FString                                     MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< class ANetherPawn* >                    PlayersInVol;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPawn*                              NetherPlayer;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ANetherTerritoryVolume*                   TempVolume;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective.UpdateHeadersForPlayersInVol
// [0x010201C2] 
struct ANetherObjective_execUpdateHeadersForPlayersInVol_Parms
{
	struct FString                                     HeaderContents;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< class ANetherPawn* >                    PlayersInVol;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPawn*                              NetherPlayer;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ANetherTerritoryVolume*                   TempVolume;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective.FormatSeconds
// [0x00022003] ( FUNC_Final )
struct ANetherObjective_execFormatSeconds_Parms
{
	float                                              TotalSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Hours;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Minutes;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Seconds;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Temp;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective.InitObjective
// [0x00020002] 
struct ANetherObjective_execInitObjective_Parms
{
	// class ANetherTerritoryVolume*                   TempVolume;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.CanAccessMarket
// [0x00020102] 
struct ANetherPawn_execCanAccessMarket_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.CanAccessGlobalInventory
// [0x00020102] 
struct ANetherPawn_execCanAccessGlobalInventory_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsInSafeZone
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct ANetherPawn_execIsInSafeZone_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.ExitedMarketZone
// [0x00020002] 
struct ANetherPawn_execExitedMarketZone_Parms
{
};

// Function NetherGame.NetherPawn.EnteredMarketZone
// [0x00020002] 
struct ANetherPawn_execEnteredMarketZone_Parms
{
};

// Function NetherGame.NetherPawn.ExitedGlobalInventoryZone
// [0x00020002] 
struct ANetherPawn_execExitedGlobalInventoryZone_Parms
{
};

// Function NetherGame.NetherPawn.EnteredGlobalInventoryZone
// [0x00020002] 
struct ANetherPawn_execEnteredGlobalInventoryZone_Parms
{
};

// Function NetherGame.NetherPawn.InSubwayTransition
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventInSubwayTransition_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.ExitedSubwayTransition
// [0x00020002] 
struct ANetherPawn_execExitedSubwayTransition_Parms
{
};

// Function NetherGame.NetherPawn.EnteredSubwayTransition
// [0x00020002] 
struct ANetherPawn_execEnteredSubwayTransition_Parms
{
};

// Function NetherGame.NetherPawn.InSubway
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventInSubway_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.ExitedSubway
// [0x00020002] 
struct ANetherPawn_execExitedSubway_Parms
{
};

// Function NetherGame.NetherPawn.EnteredSubway
// [0x00020002] 
struct ANetherPawn_execEnteredSubway_Parms
{
};

// Function NetherGame.NetherPawn.ExitedSafeZone
// [0x00020002] 
struct ANetherPawn_execExitedSafeZone_Parms
{
	unsigned long                                      bIsStartingObjective : 1;                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ClientExitedSafeZone
// [0x010201C2] 
struct ANetherPawn_execClientExitedSafeZone_Parms
{
};

// Function NetherGame.NetherPawn.ClientEnteredSafeZone
// [0x010201C2] 
struct ANetherPawn_execClientEnteredSafeZone_Parms
{
};

// Function NetherGame.NetherPawn.EnteredSafeZone
// [0x00020002] 
struct ANetherPawn_execEnteredSafeZone_Parms
{
};

// Function NetherGame.NetherPawn.PlayDying
// [0x00020102] 
struct ANetherPawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.PlayDyingSound
// [0x00020000] 
struct ANetherPawn_execPlayDyingSound_Parms
{
};

// Function NetherGame.NetherPawn.DoDoubleJump
// [0x00020000] 
struct ANetherPawn_execDoDoubleJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ServerSetDodgeType
// [0x00240043] ( FUNC_Final )
struct ANetherPawn_execServerSetDodgeType_Parms
{
	unsigned char                                      InDodgeType;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.Dodge
// [0x00020002] 
struct ANetherPawn_execDodge_Parms
{
	unsigned char                                      DoubleClickMove;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.OnAnimEnd
// [0x00020802] ( FUNC_Event )
struct ANetherPawn_eventOnAnimEnd_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ThrowWeaponOnDeath
// [0x00020000] 
struct ANetherPawn_execThrowWeaponOnDeath_Parms
{
};

// Function NetherGame.NetherPawn.AddDefaultInventory
// [0x00020002] 
struct ANetherPawn_execAddDefaultInventory_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ANDocument_CharacterInv*                  CharInv;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANetherInventoryManager*                  InvMgr;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.PlayWeaponSwitch
// [0x00020102] 
struct ANetherPawn_execPlayWeaponSwitch_Parms
{
	class AWeapon*                                     OldWeapon;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AWeapon*                                     NewWeapon;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.GetCurrentRangedPose
// [0x00020102] 
struct ANetherPawn_execGetCurrentRangedPose_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.SetCurrentWeaponType
// [0x00020002] 
struct ANetherPawn_execSetCurrentWeaponType_Parms
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ServerSetCurrentRangedPose
// [0x002200C2] 
struct ANetherPawn_execServerSetCurrentRangedPose_Parms
{
	unsigned char                                      RangedPose;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.SetCurrentRangedPose
// [0x00020102] 
struct ANetherPawn_execSetCurrentRangedPose_Parms
{
	unsigned char                                      RangedPose;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ShouldUseZoomCam
// [0x00020102] 
struct ANetherPawn_execShouldUseZoomCam_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsReloading
// [0x00020102] 
struct ANetherPawn_execIsReloading_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.TogglePlayerSprint
// [0x00020102] 
struct ANetherPawn_execTogglePlayerSprint_Parms
{
	unsigned long                                      bShouldSprint : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ToggleHoldingBreath
// [0x00020102] 
struct ANetherPawn_execToggleHoldingBreath_Parms
{
	unsigned long                                      bHold : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPawn.UpdateSprint
// [0x00020002] 
struct ANetherPawn_execUpdateSprint_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.CanSprint
// [0x00020102] 
struct ANetherPawn_execCanSprint_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsMoving
// [0x00020102] 
struct ANetherPawn_execIsMoving_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsSprinting
// [0x00020102] 
struct ANetherPawn_execIsSprinting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsHoldingBreath
// [0x00020102] 
struct ANetherPawn_execIsHoldingBreath_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsExhausted
// [0x00020102] 
struct ANetherPawn_execIsExhausted_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsCrawling
// [0x00020102] 
struct ANetherPawn_execIsCrawling_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsCrouched
// [0x00020102] 
struct ANetherPawn_execIsCrouched_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.GetStaminaAmountMax
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execGetStaminaAmountMax_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.GetStaminaAmountCurrent
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execGetStaminaAmountCurrent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.ClientAttemptDrainStamina
// [0x01040143] ( FUNC_Final )
struct ANetherPawn_execClientAttemptDrainStamina_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.AttemptDrainStamina
// [0x00024003] ( FUNC_Final )
struct ANetherPawn_execAttemptDrainStamina_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUpdateClient : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsMelee : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.ClientAddStamina
// [0x01044143] ( FUNC_Final )
struct ANetherPawn_execClientAddStamina_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEndExhaustion : 1;                               		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPawn.AddStamina
// [0x00024003] ( FUNC_Final )
struct ANetherPawn_execAddStamina_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUpdateClient : 1;                                		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bEndExhaustion : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPawn.HasStamina
// [0x00020002] 
struct ANetherPawn_execHasStamina_Parms
{
	float                                              StaminaAmount;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.HandlePickup
// [0x00020002] 
struct ANetherPawn_execHandlePickup_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ServerMakeNoise
// [0x00020002] 
struct ANetherPawn_execServerMakeNoise_Parms
{
	float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ActuallyPlayFootstepSound
// [0x00020102] 
struct ANetherPawn_execActuallyPlayFootstepSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           AdjustedFootstepNoise;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.EndCrouch
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventEndCrouch_Parms
{
	float                                              HeightAdjust;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.NetherStartCrouch
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventNetherStartCrouch_Parms
{
	float                                              MeshOffset;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HeightAdjust;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.EndCrawl
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventEndCrawl_Parms
{
	float                                              HeightAdjust;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.NetherStartCrawl
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventNetherStartCrawl_Parms
{
	float                                              MeshOffset;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HeightAdjust;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANWeapMelee*                              MeleeWeap;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ShouldCrawl
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execShouldCrawl_Parms
{
	unsigned long                                      bCrawl : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPawn.PlayJumpingSound
// [0x00020000] 
struct ANetherPawn_execPlayJumpingSound_Parms
{
};

// Function NetherGame.NetherPawn.PlayLandingSound
// [0x00020000] 
struct ANetherPawn_execPlayLandingSound_Parms
{
};

// Function NetherGame.NetherPawn.Landed
// [0x00020802] ( FUNC_Event )
struct ANetherPawn_eventLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANWeapRanged_Ironsight*                   NWeapon;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.DeactivateWings
// [0x00020802] ( FUNC_Event )
struct ANetherPawn_eventDeactivateWings_Parms
{
	// TArray< class AInventory* >                     AllWings;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AInventory*                               Wing;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.SetWingsActive
// [0x00820002] 
struct ANetherPawn_execSetWingsActive_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FRotator                                 Rot;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.TakeFallingDamage
// [0x00020102] 
struct ANetherPawn_execTakeFallingDamage_Parms
{
	// class AUTPlayerController*                      UTPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           EffectiveHeight;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           FallHeight;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.Falling
// [0x00020802] ( FUNC_Event )
struct ANetherPawn_eventFalling_Parms
{
};

// Function NetherGame.NetherPawn.NetherDoJump
// [0x00020002] 
struct ANetherPawn_execNetherDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           AdjustedJumpZ;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.DoJump
// [0x00020002] 
struct ANetherPawn_execDoJump_Parms
{
	unsigned long                                      bUpdating : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANWeapRanged_Ironsight*                   NWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.PlaySpawnSound
// [0x00020000] 
struct ANetherPawn_execPlaySpawnSound_Parms
{
};

// Function NetherGame.NetherPawn.PlayTeleportSound
// [0x00020000] 
struct ANetherPawn_execPlayTeleportSound_Parms
{
};

// Function NetherGame.NetherPawn.StartDriving
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventStartDriving_Parms
{
	class AVehicle*                                    V;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.GetBaseAimRotation
// [0x00820922] ( FUNC_Event )
struct ANetherPawn_eventGetBaseAimRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  POVLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 POVRot;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.CalcCamera
// [0x00420102] 
struct ANetherPawn_execCalcCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.GetPawnViewLocation
// [0x00820102] 
struct ANetherPawn_execGetPawnViewLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANWeap*                                   NetherWeapon;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FName                                    ViewLocationSocketName;                           		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.GetViewRotation
// [0x00820902] ( FUNC_Event )
struct ANetherPawn_eventGetViewRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANWeap*                                   NetherWeapon;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bOverrideRot : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    ViewRotationSocketName;                           		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ProcessViewRotation
// [0x00420102] 
struct ANetherPawn_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function NetherGame.NetherPawn.GetDefaultCameraMode
// [0x00020102] 
struct ANetherPawn_execGetDefaultCameraMode_Parms
{
	class APlayerController*                           RequestedBy;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTPlayerController*                      UTPC;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.BecomeViewTarget
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventBecomeViewTarget_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPlayerController*                      UTPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.SwingShake
// [0x00024002] 
struct ANetherPawn_execSwingShake_Parms
{
	unsigned char                                      AttackDirection;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ShakeScale;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPawn.ServerSetCurrentWeaponAction
// [0x002200C3] ( FUNC_Final )
struct ANetherPawn_execServerSetCurrentWeaponAction_Parms
{
	unsigned char                                      InWeaponAction;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.SetCurrentWeaponAction
// [0x00024003] ( FUNC_Final )
struct ANetherPawn_execSetCurrentWeaponAction_Parms
{
	unsigned char                                      InWeaponAction;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bReplicateToServer : 1;                           		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPawn.ClientPlayImpactEffects
// [0x010201C2] 
struct ANetherPawn_execClientPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.PlayImpactEffects
// [0x00020102] 
struct ANetherPawn_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherPawn.WeaponFired
// [0x00024102] 
struct ANetherPawn_execWeaponFired_Parms
{
	class AWeapon*                                     InWeapon;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherPawn.IsMeleeBlocking
// [0x00020102] 
struct ANetherPawn_execIsMeleeBlocking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.OnMeleeActionUpdated
// [0x00020102] 
struct ANetherPawn_execOnMeleeActionUpdated_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   AttackDirection;                                  		// 0x0004 (0x0001) [0x0000000000000000]              
	// float                                           AnimDuration;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.SetMeleeAction
// [0x00020002] 
struct ANetherPawn_execSetMeleeAction_Parms
{
	unsigned char                                      InMeleeAction;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.StopFire
// [0x00020102] 
struct ANetherPawn_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.StartFire
// [0x00020102] 
struct ANetherPawn_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.GetWeaponStartTraceLocation
// [0x00824102] 
struct ANetherPawn_execGetWeaponStartTraceLocation_Parms
{
	class AWeapon*                                     CurrentWeapon;                                    		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  POVLoc;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 POVRot;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.SetBaseEyeheight
// [0x00020100] 
struct ANetherPawn_execSetBaseEyeheight_Parms
{
};

// Function NetherGame.NetherPawn.DirectionUpdate
// [0x00020102] 
struct ANetherPawn_execDirectionUpdate_Parms
{
	// float                                           newDirMultiplier;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.PlayerMovementEffects
// [0x00020002] 
struct ANetherPawn_execPlayerMovementEffects_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.UpdateDOF
// [0x00020102] 
struct ANetherPawn_execUpdateDOF_Parms
{
	// class ANWeapRanged_Ironsight*                   NWeapon;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             Player;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ModifyPostProcessChain
// [0x00820102] 
struct ANetherPawn_execModifyPostProcessChain_Parms
{
	unsigned long                                      bShouldBlurSights : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bHitEffect : 1;                                   		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UUberPostProcessEffect*                   UberEffect;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FVector                                  OutCamLoc;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 OutCamRot;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// class ULocalPlayer*                             PC;                                               		// 0x0048 (0x0008) [0x0000000000000000]              
	// float                                           AdjustedInnerRadius;                              		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.FindEnemiesNearby
// [0x00020002] 
struct ANetherPawn_execFindEnemiesNearby_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANPawnEnemy*                              EnemyPawn;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           distancetoPlayer;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.Tick
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.SetCharacterMeshInfo
// [0x00820102] 
struct ANetherPawn_execSetCharacterMeshInfo_Parms
{
	class USkeletalMesh*                               SkelMesh;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInterface*                          HeadMaterial;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInterface*                          BodyMaterial;                                     		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerReplicationInfo*             NPRI;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                UVOffsets;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.GetNetherPlayerReplicationInfo
// [0x00020102] 
struct ANetherPawn_execGetNetherPlayerReplicationInfo_Parms
{
	class ANetherPlayerReplicationInfo*                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerReplicationInfo*             NPRI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.SetCharacterClassFromInfo
// [0x00020102] 
struct ANetherPawn_execSetCharacterClassFromInfo_Parms
{
	class UClass*                                      Info;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.AdjustSpeedForCurrentPosture
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventAdjustSpeedForCurrentPosture_Parms
{
};

// Function NetherGame.NetherPawn.SetPawnSpeed
// [0x00020002] 
struct ANetherPawn_execSetPawnSpeed_Parms
{
	float                                              GSpeed;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ASpeed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              WSpeed;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              JZ;                                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.IsLocalFirstPerson
// [0x00020102] 
struct ANetherPawn_execIsLocalFirstPerson_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.UpdatePawnForPerspective
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execUpdatePawnForPerspective_Parms
{
};

// Function NetherGame.NetherPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function NetherGame.NetherPawn.GetNetherController
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execGetNetherController_Parms
{
	class ANetherPlayerController*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.FaceRotation
// [0x00020102] 
struct ANetherPawn_execFaceRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANetherPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.GetCurrentPosture
// [0x00020102] 
struct ANetherPawn_execGetCurrentPosture_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.SetWeapAnimType
// [0x00020102] 
struct ANetherPawn_execSetWeapAnimType_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.OneOffAnim_End
// [0x00040103] ( FUNC_Final )
struct ANetherPawn_execOneOffAnim_End_Parms
{
};

// Function NetherGame.NetherPawn.OneOffAnim_Play
// [0x00044103] ( FUNC_Final )
struct ANetherPawn_execOneOffAnim_Play_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.IsHeadShot
// [0x00820002] 
struct ANetherPawn_execIsHeadShot_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              AdditionalScale;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HeadLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.PlayTakeHitEffects
// [0x00820102] 
struct ANetherPawn_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   CamHitEffect;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   NDamage;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bRanged : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bHeadShot : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UParticleSystem*                          HitEffectTemplate;                                		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ClientPlayDamageEffect
// [0x01020142] 
struct ANetherPawn_execClientPlayDamageEffect_Parms
{
	class UClass*                                      CamHitEffect;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.PlayHit
// [0x00020002] 
struct ANetherPawn_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.DisplayHitIndicator
// [0x00020102] 
struct ANetherPawn_execDisplayHitIndicator_Parms
{
	float                                              HitIntensity;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDirection;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.TakeDamage
// [0x00824802] ( FUNC_Event )
struct ANetherPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  HitDirection;                                     		// 0x005C (0x000C) [0x0000000000000000]              
	// float                                           BlockStaminaCost_Req;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           BlockStaminaCost_Actual;                          		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ClientDied
// [0x010201C2] 
struct ANetherPawn_execClientDied_Parms
{
};

// Function NetherGame.NetherPawn.Died
// [0x00020002] 
struct ANetherPawn_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             LevelDifference;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             TotalXPEarned;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ANetherPlayerController*                  KillerNPC;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ANBotEnemy*                               BotPC;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.EncroachedBy
// [0x00020800] ( FUNC_Event )
struct ANetherPawn_eventEncroachedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.HealDamage
// [0x00020802] ( FUNC_Event )
struct ANetherPawn_eventHealDamage_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.AdjustedHeal
// [0x00024003] ( FUNC_Final )
struct ANetherPawn_execAdjustedHeal_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Healer;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsFirstAid : 1;                                  		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.CanHeal
// [0x00020103] ( FUNC_Final )
struct ANetherPawn_execCanHeal_Parms
{
	int                                                HealAmount;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.AdjustDamage
// [0x00420002] 
struct ANetherPawn_execAdjustDamage_Parms
{
	int                                                InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AController*                                 InstigatedBy;                                     		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PreDamage;                                        		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.UpdateHunger
// [0x00020002] 
struct ANetherPawn_execUpdateHunger_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DrainRate;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ClientSetStamina
// [0x01020142] 
struct ANetherPawn_execClientSetStamina_Parms
{
	float                                              InStamina;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.ClientSetHunger
// [0x01020142] 
struct ANetherPawn_execClientSetHunger_Parms
{
	float                                              InHunger;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.AttemptDrainHunger
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execAttemptDrainHunger_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CurrentHungerAmount;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           NewHungerAmount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.AttemptAddHunger
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execAttemptAddHunger_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bAddedHunger : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           NewHungerAmount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           HungerOverflow;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.IsStarving
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execIsStarving_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.GetHungerAmountMax
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execGetHungerAmountMax_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.GetHungerAmountCurrent
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execGetHungerAmountCurrent_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           HungerAmountCurrent;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.DebugActivateSpeedGod
// [0x00020101] ( FUNC_Final )
struct ANetherPawn_execDebugActivateSpeedGod_Parms
{
};

// Function NetherGame.NetherPawn.GetSprintSpeed
// [0x00020102] 
struct ANetherPawn_execGetSprintSpeed_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CalcSprintSpeed;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.ClientSetHealthSound
// [0x010201C2] 
struct ANetherPawn_execClientSetHealthSound_Parms
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.UpdateHealthSound
// [0x00020002] 
struct ANetherPawn_execUpdateHealthSound_Parms
{
	// unsigned long                                   bIsNearDeath : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherPawn.SetHealth
// [0x00020802] ( FUNC_Event )
struct ANetherPawn_eventSetHealth_Parms
{
	int                                                NewHealth;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPawn.GetHealthMax
// [0x00020003] ( FUNC_Final )
struct ANetherPawn_execGetHealthMax_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPawn.UpdateAggroSplash
// [0x00020002] 
struct ANetherPawn_execUpdateAggroSplash_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.NotifyAggroSplashed
// [0x00020002] 
struct ANetherPawn_execNotifyAggroSplashed_Parms
{
	float                                              SplashDuration;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              SplashStrength;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPawn.GetFlashlight
// [0x00020002] 
struct ANetherPawn_execGetFlashlight_Parms
{
};

// Function NetherGame.NetherPawn.ServerToggleFlashlight
// [0x002200C2] 
struct ANetherPawn_execServerToggleFlashlight_Parms
{
};

// Function NetherGame.NetherPawn.ToggleFlashlight
// [0x00020102] 
struct ANetherPawn_execToggleFlashlight_Parms
{
};

// Function NetherGame.NetherPawn.PossessedBy
// [0x00020002] 
struct ANetherPawn_execPossessedBy_Parms
{
	class AController*                                 C;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherEnemyLootTable.AwardLootTable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherEnemyLootTable_execAwardLootTable_Parms
{
	class ANetherPawn*                                 PawnToAward;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DropLocation;                                     		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherEnemyLootTable.GetSpawnManager
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct UNetherEnemyLootTable_eventGetSpawnManager_Parms
{
	class ANetherSpawnManager_Pickups*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSpawnGroup.InitSpawnGroup
// [0x00020002] 
struct UNetherSpawnGroup_execInitSpawnGroup_Parms
{
	class ANetherTerritoryVolume*                      VolumeOwner;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnGroup_Enemies.OnSpawnerEnemyRecycled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherSpawnGroup_Enemies_execOnSpawnerEnemyRecycled_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnemyDied : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnGroup_Enemies.OnSpawnerEnemyDied
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherSpawnGroup_Enemies_execOnSpawnerEnemyDied_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANetherPawn*                                 Killer;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnGroup_Enemies.InitSpawnGroup
// [0x00020002] 
struct UNetherSpawnGroup_Enemies_execInitSpawnGroup_Parms
{
	class ANetherTerritoryVolume*                      VolumeOwner;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ANetherSpawnPoint_Enemy*                  SpawnPoint;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSpawnGroup_Pickups.OnSpawnerPickupRecycled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UNetherSpawnGroup_Pickups_execOnSpawnerPickupRecycled_Parms
{
	class AUDKPickupFactory*                           PickupFactory;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasPickedUp : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnGroup_Pickups.InitSpawnGroup
// [0x00020002] 
struct UNetherSpawnGroup_Pickups_execInitSpawnGroup_Parms
{
	class ANetherTerritoryVolume*                      VolumeOwner;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherSpawnPoint_Pickup*                 SpawnPoint;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherSpawnManager.ValidateTerritoryVolumes
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnManager_execValidateTerritoryVolumes_Parms
{
};

// Function NetherGame.NetherSpawnManager.LogSpawnDebug
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnManager_execLogSpawnDebug_Parms
{
	struct FString                                     InLog;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherSpawnManager.GetMaxActiveInstances
// [0x00020003] ( FUNC_Final )
struct ANetherSpawnManager_execGetMaxActiveInstances_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSpawnManager.AlterMaxAllocation
// [0x00020003] ( FUNC_Final )
struct ANetherSpawnManager_execAlterMaxAllocation_Parms
{
	unsigned long                                      ForceMaxAllocation : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                NewMaxActiveInstances;                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager.ToggleSpawnDebug
// [0x00020003] ( FUNC_Final )
struct ANetherSpawnManager_execToggleSpawnDebug_Parms
{
	unsigned long                                      bPrintToScreen : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager.CacheDayNightManager
// [0x00040003] ( FUNC_Final )
struct ANetherSpawnManager_execCacheDayNightManager_Parms
{
	// class ANetherDayNightCycleManager*              M;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSpawnManager.PostBeginPlay
// [0x00020102] 
struct ANetherSpawnManager_execPostBeginPlay_Parms
{
};

// Function NetherGame.NetherSpawnManager.AddTerritoryVolume
// [0x00020003] ( FUNC_Final )
struct ANetherSpawnManager_execAddTerritoryVolume_Parms
{
	class ANetherTerritoryVolume*                      Territory;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager_Enemies.OnEnemyDeathAnimEnded
// [0x00040003] ( FUNC_Final )
struct ANetherSpawnManager_Enemies_execOnEnemyDeathAnimEnded_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager_Enemies.OnEnemyDeSpawnAnimEnded
// [0x00040003] ( FUNC_Final )
struct ANetherSpawnManager_Enemies_execOnEnemyDeSpawnAnimEnded_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager_Enemies.RetrieveAndInitializeEnemy
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct ANetherSpawnManager_Enemies_eventRetrieveAndInitializeEnemy_Parms
{
	class UClass*                                      EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANPawnEnemy*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANPawnEnemy*                              Enemy;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSpawnManager_Enemies.ReturnAndDisableEnemy
// [0x00020003] ( FUNC_Final )
struct ANetherSpawnManager_Enemies_execReturnAndDisableEnemy_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnemyDied : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager_Enemies.GetPooledEnemy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnManager_Enemies_execGetPooledEnemy_Parms
{
	class UClass*                                      EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANPawnEnemy*                                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSpawnManager_Enemies.ReturnEnemyToPool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnManager_Enemies_execReturnEnemyToPool_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager_Pickups.RetrieveAndInitializePickup
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct ANetherSpawnManager_Pickups_eventRetrieveAndInitializePickup_Parms
{
	class UClass*                                      PickupType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              AutoRecycleTimer;                                 		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AUDKPickupFactory*                           ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANPickupFactory*                          NetherPickupFactory;                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSpawnManager_Pickups.ReturnPickupActor
// [0x00020003] ( FUNC_Final )
struct ANetherSpawnManager_Pickups_execReturnPickupActor_Parms
{
	class ANPickupFactory*                             PickupActor;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasPickedUp : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnManager_Pickups.GetPooledPickupActor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnManager_Pickups_execGetPooledPickupActor_Parms
{
	class UClass*                                      PickupType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AUDKPickupFactory*                           ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSpawnManager_Pickups.ReturnPickupActorToPool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnManager_Pickups_execReturnPickupActorToPool_Parms
{
	class AUDKPickupFactory*                           PickupActor;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint.IsOnCooldown
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnPoint_execIsOnCooldown_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSpawnPoint.AssignParentGroup
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ANetherSpawnPoint_execAssignParentGroup_Parms
{
	class UNetherSpawnGroup*                           ParentGroup;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint.BeginCooldown
// [0x00080002] 
struct ANetherSpawnPoint_execBeginCooldown_Parms
{
	float                                              CooldownDuration;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint_Enemy.OnTetheredEnemyRecycled
// [0x00040003] ( FUNC_Final )
struct ANetherSpawnPoint_Enemy_execOnTetheredEnemyRecycled_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bEnemyDied : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint_Enemy.OnTetheredEnemyDied
// [0x00040003] ( FUNC_Final )
struct ANetherSpawnPoint_Enemy_execOnTetheredEnemyDied_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANetherPawn*                                 Killer;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint_Enemy.AttemptDeSpawnTetheredEnemy
// [0x00420803] ( FUNC_Final | FUNC_Event )
struct ANetherSpawnPoint_Enemy_eventAttemptDeSpawnTetheredEnemy_Parms
{
	struct FString                                     NoDespawnMessage;                                 		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSpawnPoint_Enemy.SpawnEnemy
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct ANetherSpawnPoint_Enemy_eventSpawnEnemy_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBeginCooldown : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint_Pickup.OnNPickupRecycled
// [0x00040003] ( FUNC_Final )
struct ANetherSpawnPoint_Pickup_execOnNPickupRecycled_Parms
{
	class ANPickupFactory*                             NetherPickupFactory;                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasPickedUp : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherSpawnPoint_Pickup.RecycleOccupyingPickup
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct ANetherSpawnPoint_Pickup_eventRecycleOccupyingPickup_Parms
{
};

// Function NetherGame.NetherSpawnPoint_Pickup.OccupySpawnerWith
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct ANetherSpawnPoint_Pickup_eventOccupySpawnerWith_Parms
{
	class AUDKPickupFactory*                           PickupFactory;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANPickupFactory*                          NetherPickupFactory;                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxNetherObject.GetMouseOver
// [0x00020002] 
struct UGFxNetherObject_execGetMouseOver_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxNetherObject.MouseOut
// [0x00020002] 
struct UGFxNetherObject_execMouseOut_Parms
{
};

// Function NetherGame.GFxNetherObject.MouseOver
// [0x00020002] 
struct UGFxNetherObject_execMouseOver_Parms
{
};

// Function NetherGame.GFxNetherObject.AS_PointOver
// [0x00040003] ( FUNC_Final )
struct UGFxNetherObject_execAS_PointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxNetherObject.PointOver
// [0x00020002] 
struct UGFxNetherObject_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   PO : 1;                                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.GFxNetherObject.GetParent
// [0x00020002] 
struct UGFxNetherObject_execGetParent_Parms
{
	class UGFxNetherObject*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxNetherObject.GetGlobalPos
// [0x00820002] 
struct UGFxNetherObject_execGetGlobalPos_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxNetherObject*                         Parent;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FASDisplayInfo                           ParentDI;                                         		// 0x0014 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0040 (0x002C) [0x0000000000000000]              
	// struct FVector                                  GlobalPos;                                        		// 0x006C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.GFxNetherObject.SetScale
// [0x00820002] 
struct UGFxNetherObject_execSetScale_Parms
{
	float                                              XScale;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YScale;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxNetherObject.GetHeight
// [0x00020002] 
struct UGFxNetherObject_execGetHeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxNetherObject.GetWidth
// [0x00020002] 
struct UGFxNetherObject_execGetWidth_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxNetherObject.RemoveChild
// [0x00020002] 
struct UGFxNetherObject_execRemoveChild_Parms
{
	class UGFxObject*                                  Child;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxNetherObject.AddChild
// [0x00020002] 
struct UGFxNetherObject_execAddChild_Parms
{
	class UGFxObject*                                  Child;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxButton.PointOver
// [0x00020002] 
struct UGFxButton_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxButton.AS_DisableOutline
// [0x00020002] 
struct UGFxButton_execAS_DisableOutline_Parms
{
};

// Function NetherGame.GFxButton.AS_EnableOutline
// [0x00020002] 
struct UGFxButton_execAS_EnableOutline_Parms
{
};

// Function NetherGame.GFxButton.IsEnabled
// [0x00020002] 
struct UGFxButton_execIsEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxButton.EnableButton
// [0x00820002] 
struct UGFxButton_execEnableButton_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxButton.DisableButton
// [0x00820002] 
struct UGFxButton_execDisableButton_Parms
{
	// struct FASDisplayInfo                           DI;                                               		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxButton.RightMouseUp
// [0x00020002] 
struct UGFxButton_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxButton.LeftMouseUp
// [0x00020002] 
struct UGFxButton_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxButton.RightMouseDown
// [0x00020002] 
struct UGFxButton_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxButton.LeftMouseDown
// [0x00020002] 
struct UGFxButton_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxButton.SetButtonClicked
// [0x00024002] 
struct UGFxButton_execSetButtonClicked_Parms
{
	struct FScriptDelegate                             ButtonClickedDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Params;                                           		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxButton.SetLabel
// [0x00020002] 
struct UGFxButton_execSetLabel_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxButton.ButtonClicked
// [0x00120000] 
struct UGFxButton_execButtonClicked_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     Params;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxButton.ButtonAction
// [0x00120000] 
struct UGFxButton_execButtonAction_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.IGFxClickable.PointOver
// [0x00020000] 
struct UIGFxClickable_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.IGFxClickable.RightMouseUp
// [0x00020000] 
struct UIGFxClickable_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.IGFxClickable.RightMouseDown
// [0x00020000] 
struct UIGFxClickable_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.IGFxClickable.LeftMouseUp
// [0x00020000] 
struct UIGFxClickable_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.IGFxClickable.LeftMouseDown
// [0x00020000] 
struct UIGFxClickable_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxAnimatedObject.PlayOpenAnimation
// [0x00024002] 
struct UGFxAnimatedObject_execPlayOpenAnimation_Parms
{
	unsigned long                                      bStartFromBeginning : 1;                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxAnimatedObject.PlayCloseAnimation
// [0x00020002] 
struct UGFxAnimatedObject_execPlayCloseAnimation_Parms
{
};

// Function NetherGame.GFxAnimatedObject.Tick
// [0x00820002] 
struct UGFxAnimatedObject_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxBarMeter.GetAmountFull
// [0x00020002] 
struct UGFxBarMeter_execGetAmountFull_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxBarMeter.SetAmountFull
// [0x00020002] 
struct UGFxBarMeter_execSetAmountFull_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxBarMeter.Initialize
// [0x00020002] 
struct UGFxBarMeter_execInitialize_Parms
{
};

// Function NetherGame.GFxCharacterSlot.AS_MouseIsOver
// [0x00040003] ( FUNC_Final )
struct UGFxCharacterSlot_execAS_MouseIsOver_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxCharacterSlot.MouseIsOver
// [0x00020002] 
struct UGFxCharacterSlot_execMouseIsOver_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxCharacterSlot.Refresh
// [0x00024003] ( FUNC_Final )
struct UGFxCharacterSlot_execRefresh_Parms
{
	unsigned long                                      bPlayAnimations : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxCharacterSlot.PlayAnimations
// [0x00020003] ( FUNC_Final )
struct UGFxCharacterSlot_execPlayAnimations_Parms
{
	// float                                           MeterNumerator;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           MeterDenominator;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ANDocument_CharacterInfo*                 CharInfoDoc;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxCharacterSlot.Deselect
// [0x00020003] ( FUNC_Final )
struct UGFxCharacterSlot_execDeselect_Parms
{
};

// Function NetherGame.GFxCharacterSlot.Select
// [0x00020003] ( FUNC_Final )
struct UGFxCharacterSlot_execSelect_Parms
{
};

// Function NetherGame.GFxCharacterSlot.Initialize
// [0x00020003] ( FUNC_Final )
struct UGFxCharacterSlot_execInitialize_Parms
{
	class ANetherPlayerController*                     InSlotOwner;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                InSlotIndex;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.ResetCharacterStatstoDefault
// [0x00020002] 
struct ANDocument_CharacterInfo_execResetCharacterStatstoDefault_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.ResetToDefault
// [0x00020002] 
struct ANDocument_CharacterInfo_execResetToDefault_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.ServerChangePlayerName
// [0x002200C3] ( FUNC_Final )
struct ANDocument_CharacterInfo_execServerChangePlayerName_Parms
{
	struct FString                                     NewName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NDocument_CharacterInfo.RequestCashSpending
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestCashSpending_Parms
{
	int                                                CashToSpend;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInfo.AddCash
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddCash_Parms
{
	int                                                CashGiven;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.GetMaxHealth
// [0x00020103] ( FUNC_Final )
struct ANDocument_CharacterInfo_execGetMaxHealth_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInfo.HealPlayerOnUnlock
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execHealPlayerOnUnlock_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.SetStatLevel
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execSetStatLevel_Parms
{
	unsigned char                                      StatName;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.GetAttributeLevel
// [0x00020103] ( FUNC_Final )
struct ANDocument_CharacterInfo_execGetAttributeLevel_Parms
{
	unsigned char                                      AttributeType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInfo.RequestStatAdd
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestStatAdd_Parms
{
	unsigned char                                      StatName;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.RequestStatPointSpending
// [0x00040003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestStatPointSpending_Parms
{
	int                                                PointsToSpend;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInfo.AddPlayerLevel
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddPlayerLevel_Parms
{
	int                                                StatPoints;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.AddPlayerXP
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddPlayerXP_Parms
{
	int                                                XPGiven;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.AddCivilianKill
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddCivilianKill_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.AddBanditKill
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddBanditKill_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.AddPlayerKill
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddPlayerKill_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.AddEnemyKill
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddEnemyKill_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.RequestHungerWrite
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestHungerWrite_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.RequestHealthWrite
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestHealthWrite_Parms
{
	int                                                HealthAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.LogSpeedHack
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execLogSpeedHack_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.AddBloodPoint
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execAddBloodPoint_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.DecayBloodPoints
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execDecayBloodPoints_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.ResetBloodPointTimer
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execResetBloodPointTimer_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.StartBloodPointDecay
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execStartBloodPointDecay_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.RequestShouldLoadWrite
// [0x00020001] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestShouldLoadWrite_Parms
{
	unsigned long                                      bShould : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.RequestPositionWrite
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInfo_execRequestPositionWrite_Parms
{
	float                                              VecX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VecY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VecZ;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.TryUseRespawn
// [0x00020002] 
struct ANDocument_CharacterInfo_execTryUseRespawn_Parms
{
	int                                                CurrentDate;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInfo.SaveDocument
// [0x00020002] 
struct ANDocument_CharacterInfo_execSaveDocument_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.PreAutosave
// [0x00020000] 
struct ANDocument_CharacterInfo_execPreAutosave_Parms
{
};

// Function NetherGame.NDocument_CharacterInfo.OnDocumentUpdate
// [0x00020802] ( FUNC_Event )
struct ANDocument_CharacterInfo_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANDocument_CharacterInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherServerCharacterDocument.GetDocumentName
// [0x00020802] ( FUNC_Event )
struct ANetherServerCharacterDocument_eventGetDocumentName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerCharacterDocument.InitForPlayer
// [0x00020002] 
struct ANetherServerCharacterDocument_execInitForPlayer_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CharacterIndex;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCheckBox.Unselect
// [0x00020002] 
struct UGFxCheckBox_execUnselect_Parms
{
};

// Function NetherGame.GFxCheckBox.PointOver
// [0x00020002] 
struct UGFxCheckBox_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxCheckBox.Select
// [0x00020002] 
struct UGFxCheckBox_execSelect_Parms
{
};

// Function NetherGame.GFxCheckBox.RightMouseUp
// [0x00020000] 
struct UGFxCheckBox_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCheckBox.RightMouseDown
// [0x00020000] 
struct UGFxCheckBox_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCheckBox.LeftMouseUp
// [0x00020000] 
struct UGFxCheckBox_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCheckBox.LeftMouseDown
// [0x00020002] 
struct UGFxCheckBox_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCheckBox.ApplyCurrentOption
// [0x00024002] 
struct UGFxCheckBox_execApplyCurrentOption_Parms
{
	unsigned long                                      bApplyAutomatically : 1;                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxCheckBox.SetCurrentlySelectedOption
// [0x00020002] 
struct UGFxCheckBox_execSetCurrentlySelectedOption_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCheckBox.GetCurrentlySelectedOption
// [0x00020002] 
struct UGFxCheckBox_execGetCurrentlySelectedOption_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxCheckBox.Initialize
// [0x00020002] 
struct UGFxCheckBox_execInitialize_Parms
{
};

// Function NetherGame.GFxCheckBox.OptionSelectedAction
// [0x00120000] 
struct UGFxCheckBox_execOptionSelectedAction_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.IGFxOptionSelector.ApplyCurrentOption
// [0x00024000] 
struct UIGFxOptionSelector_execApplyCurrentOption_Parms
{
	unsigned long                                      bApplyAutomatically : 1;                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxCircleMeter.StopTimedFillUp
// [0x00024002] 
struct UGFxCircleMeter_execStopTimedFillUp_Parms
{
	unsigned long                                      SkipAnimation : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxCircleMeter.FadeIn
// [0x00020002] 
struct UGFxCircleMeter_execFadeIn_Parms
{
	float                                              FadeSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCircleMeter.FadeAway
// [0x00020002] 
struct UGFxCircleMeter_execFadeAway_Parms
{
	float                                              FadeSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCircleMeter.StartTimedFillUp
// [0x00020002] 
struct UGFxCircleMeter_execStartTimedFillUp_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxCircleMeter.SetAmountFull
// [0x00020002] 
struct UGFxCircleMeter_execSetAmountFull_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxMapIcon.SetIconRotation
// [0x00020003] ( FUNC_Final )
struct UGFxMapIcon_execSetIconRotation_Parms
{
	int                                                NewRotaion;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxMapIcon.CorrectScale
// [0x00820002] 
struct UGFxMapIcon_execCorrectScale_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxDebugPoint.CorrectScale
// [0x00020000] 
struct UGFxDebugPoint_execCorrectScale_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxDebugPoint.AS_SetColor
// [0x00020002] 
struct UGFxDebugPoint_execAS_SetColor_Parms
{
	int                                                ColorIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxDropDown.DropDownButtonClicked
// [0x00020002] 
struct UGFxDropDown_execDropDownButtonClicked_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxDropDown.CloseDropDownList
// [0x00020002] 
struct UGFxDropDown_execCloseDropDownList_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.OpenDropDownList
// [0x00020002] 
struct UGFxDropDown_execOpenDropDownList_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CurrentSelectionHeight;                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.RightMouseUp
// [0x00020000] 
struct UGFxDropDown_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxDropDown.RightMouseDown
// [0x00020000] 
struct UGFxDropDown_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxDropDown.LeftMouseUp
// [0x00020000] 
struct UGFxDropDown_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxDropDown.ApplyCurrentOption
// [0x00024002] 
struct UGFxDropDown_execApplyCurrentOption_Parms
{
	unsigned long                                      bApplyAutomatically : 1;                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxDropDown.PointOver
// [0x00020002] 
struct UGFxDropDown_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxOptionBox*                            OptionBox;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.LeftMouseDown
// [0x00020002] 
struct UGFxDropDown_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxOptionBox*                            OptionBox;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.SetWidth
// [0x00020002] 
struct UGFxDropDown_execSetWidth_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxOptionBox*                            OptionBox;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.SetOptionLabel
// [0x00020002] 
struct UGFxDropDown_execSetOptionLabel_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxDropDown.AddOption
// [0x00020002] 
struct UGFxDropDown_execAddOption_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxOptionBox*                            NewOption;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.SetCurrentlySelectedOption
// [0x00020002] 
struct UGFxDropDown_execSetCurrentlySelectedOption_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxOptionBox*                            OptionBox;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxDropDown.GetCurrentlySelectedOption
// [0x00020002] 
struct UGFxDropDown_execGetCurrentlySelectedOption_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxDropDown.Initialize
// [0x00020002] 
struct UGFxDropDown_execInitialize_Parms
{
};

// Function NetherGame.GFxDropDown.OptionSelectedAction
// [0x00120000] 
struct UGFxDropDown_execOptionSelectedAction_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxOptionBox.AS_MouseIsOver
// [0x00040003] ( FUNC_Final )
struct UGFxOptionBox_execAS_MouseIsOver_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxOptionBox.MouseIsOver
// [0x00020002] 
struct UGFxOptionBox_execMouseIsOver_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxOptionBox.Unselect
// [0x00020002] 
struct UGFxOptionBox_execUnselect_Parms
{
};

// Function NetherGame.GFxOptionBox.Select
// [0x00020002] 
struct UGFxOptionBox_execSelect_Parms
{
};

// Function NetherGame.GFxOptionBox.GetLabel
// [0x00020002] 
struct UGFxOptionBox_execGetLabel_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxOptionBox.SetLabel
// [0x00020002] 
struct UGFxOptionBox_execSetLabel_Parms
{
	struct FString                                     NewLabelText;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxOptionBox.SetWidth
// [0x00020002] 
struct UGFxOptionBox_execSetWidth_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxOptionBox.Initialize
// [0x00020002] 
struct UGFxOptionBox_execInitialize_Parms
{
};

// Function NetherGame.GFxHitIndicator.Tick
// [0x00020002] 
struct UGFxHitIndicator_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxHitIndicator.Flash
// [0x00820103] ( FUNC_Final )
struct UGFxHitIndicator_execFlash_Parms
{
	float                                              Intensity;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitDirection;                                     		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     PlayerDirection;                                  		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  HitDirN;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PlayerDirN;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Up;                                               		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Left;                                             		// 0x0040 (0x000C) [0x0000000000000000]              
	// float                                           RotationAngle;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0050 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxItem.ShowCount
// [0x00020003] ( FUNC_Final )
struct UGFxItem_execShowCount_Parms
{
};

// Function NetherGame.GFxItem.HideCount
// [0x00020003] ( FUNC_Final )
struct UGFxItem_execHideCount_Parms
{
};

// Function NetherGame.GFxItem.ClearPrice
// [0x00020003] ( FUNC_Final )
struct UGFxItem_execClearPrice_Parms
{
};

// Function NetherGame.GFxItem.SetPrice
// [0x00024003] ( FUNC_Final )
struct UGFxItem_execSetPrice_Parms
{
	float                                              NormalPrice;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PremiumPrice;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  NormalPriceS;                                     		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  PremiumPriceS;                                    		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.GFxItem.RefreshIcon
// [0x00040003] ( FUNC_Final )
struct UGFxItem_execRefreshIcon_Parms
{
	// class UClass*                                   InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxItem.GetInventoryID
// [0x00020002] 
struct UGFxItem_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItem.GetItemType
// [0x00020002] 
struct UGFxItem_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItem.IsPremium
// [0x00020002] 
struct UGFxItem_execIsPremium_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItem.GetInventoryClass
// [0x00020002] 
struct UGFxItem_execGetInventoryClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItem.SetInventoryInfo
// [0x00020002] 
struct UGFxItem_execSetInventoryInfo_Parms
{
	int                                                InItemID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InItemCount;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.GetBackpack
// [0x00040103] ( FUNC_Final )
struct ANetherInventoryManager_execGetBackpack_Parms
{
	class ANBackpack*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANBackpack*                               CurrBackpack;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetInventoryByID
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execGetInventoryByID_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetInventoryBySlot
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execGetInventoryBySlot_Parms
{
	int                                                ItemSlot;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetBackPackItems
// [0x00420103] ( FUNC_Final )
struct ANetherInventoryManager_execGetBackPackItems_Parms
{
	TArray< class AInventory* >                        Items;                                            		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class AInventory*                               Inv;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetGold
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execGetGold_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetMoney
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execGetMoney_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetTemplateClassFromID
// [0x00022102] 
struct ANetherInventoryManager_execGetTemplateClassFromID_Parms
{
	int                                                InID;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryManager.GetNetherInvClassFromID
// [0x00022102] 
struct ANetherInventoryManager_execGetNetherInvClassFromID_Parms
{
	int                                                InID;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryManager.AddAmmoForWeapon
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execAddAmmoForWeapon_Parms
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AmountToAdd;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Index;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             AmmoID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             AmmoAdded;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ConsumeAmmo
// [0x00020003] ( FUNC_Final )
struct ANetherInventoryManager_execConsumeAmmo_Parms
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             ActualAmmoConsumed;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             AmmoMapIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AInventory*                               AmmoInv;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// TArray< class AInventory* >                     FullAmmoBoxes;                                    		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AInventory*                               TempInv;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetAmmoClassForWeapon
// [0x00020003] ( FUNC_Final )
struct ANetherInventoryManager_execGetAmmoClassForWeapon_Parms
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             AmmoMapIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class ANAmmo*                                   AmmoInv;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetAmmoCountForWeapon
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execGetAmmoCountForWeapon_Parms
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             AmmoCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             AmmoMapIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class AInventory*                               AmmoInv;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< class AInventory* >                     InstancesOfAmmo;                                  		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherInventoryManager.IsAnEquippedWeapon
// [0x00020002] 
struct ANetherInventoryManager_execIsAnEquippedWeapon_Parms
{
	class ANWeap*                                      Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             SlotNumber;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetBackpackWeight
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execGetBackpackWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           TotalWeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetFirstOpenBackpackSlot
// [0x00020003] ( FUNC_Final )
struct ANetherInventoryManager_execGetFirstOpenBackpackSlot_Parms
{
	int                                                ItemType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.HasBackpackSlotOpen
// [0x00020003] ( FUNC_Final )
struct ANetherInventoryManager_execHasBackpackSlotOpen_Parms
{
	int                                                ItemType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryManager.EquipWeapon
// [0x00024103] ( FUNC_Final )
struct ANetherInventoryManager_execEquipWeapon_Parms
{
	class ANWeap*                                      ToEquip;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceWeaponSwitch : 1;                           		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bEquippedItem : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ANWeap*                                   CurrentWeapon;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.EquipHeadItem
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execEquipHeadItem_Parms
{
	class ANWardrobe*                                  ToEquip;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryManager.EquipRArmItem
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execEquipRArmItem_Parms
{
	class ANWardrobe*                                  ToEquip;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryManager.EquipLArmItem
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execEquipLArmItem_Parms
{
	class ANWardrobe*                                  ToEquip;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryManager.EquipWeaponBySlot
// [0x002240C3] ( FUNC_Final )
struct ANetherInventoryManager_execEquipWeaponBySlot_Parms
{
	int                                                ItemSlot;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceWeaponSwitch : 1;                           		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bEquippedItem : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ANWeap*                                   NewWeap;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ClearItemBySlot
// [0x00020003] ( FUNC_Final )
struct ANetherInventoryManager_execClearItemBySlot_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.SwitchToBestWeapon
// [0x00024102] 
struct ANetherInventoryManager_execSwitchToBestWeapon_Parms
{
	unsigned long                                      bForceADifferentWeapon : 1;                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class AWeapon*                                  BestWeapon;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ServerSetCurrentWeapon
// [0x002200C2] 
struct ANetherInventoryManager_execServerSetCurrentWeapon_Parms
{
	class AWeapon*                                     DesiredWeapon;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.SetCurrentWeapon
// [0x010201C2] 
struct ANetherInventoryManager_execSetCurrentWeapon_Parms
{
	class AWeapon*                                     DesiredWeapon;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.ClientWeaponSet
// [0x00024102] 
struct ANetherInventoryManager_execClientWeaponSet_Parms
{
	class AWeapon*                                     NewWeapon;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOptionalSet : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.GetNextWeaponSlot
// [0x00040103] ( FUNC_Final )
struct ANetherInventoryManager_execGetNextWeaponSlot_Parms
{
	int                                                CurrentWeaponSlot;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             WeaponSlot;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ServerNextWeapon
// [0x00020102] 
struct ANetherInventoryManager_execServerNextWeapon_Parms
{
	// int                                             WeaponSlot;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.NextWeapon
// [0x00020102] 
struct ANetherInventoryManager_execNextWeapon_Parms
{
};

// Function NetherGame.NetherInventoryManager.GetPreviousWeaponSlot
// [0x00040103] ( FUNC_Final )
struct ANetherInventoryManager_execGetPreviousWeaponSlot_Parms
{
	int                                                CurrentWeaponSlot;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             WeaponSlot;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ServerPrevWeapon
// [0x002200C2] 
struct ANetherInventoryManager_execServerPrevWeapon_Parms
{
	// int                                             WeaponSlot;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.PrevWeapon
// [0x00020102] 
struct ANetherInventoryManager_execPrevWeapon_Parms
{
};

// Function NetherGame.NetherInventoryManager.GetBestWeapon
// [0x00024102] 
struct ANetherInventoryManager_execGetBestWeapon_Parms
{
	unsigned long                                      bForceADifferentWeapon : 1;                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class AWeapon*                                     ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AWeapon*                                  TestWeapon;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ClientSetInventoryToQuickSlot
// [0x010201C2] 
struct ANetherInventoryManager_execClientSetInventoryToQuickSlot_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                QuickSlot;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.ServerSetInventoryToQuickslot
// [0x002200C2] 
struct ANetherInventoryManager_execServerSetInventoryToQuickslot_Parms
{
	int                                                SlotNumber;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                QuickSlot;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               NInv;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.ConsumeInventoryItem
// [0x00020003] ( FUNC_Final )
struct ANetherInventoryManager_execConsumeInventoryItem_Parms
{
	class AInventory*                                  Item;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bConsumeSuccessful : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherInventoryManager.ServerConsumeInventoryItem
// [0x002200C3] ( FUNC_Final )
struct ANetherInventoryManager_execServerConsumeInventoryItem_Parms
{
	class AInventory*                                  Item;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.ClearFromQuickSlots
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execClearFromQuickSlots_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.TryToAutomaticallySetToEmptyQuickslot
// [0x010201C3] ( FUNC_Final )
struct ANetherInventoryManager_execTryToAutomaticallySetToEmptyQuickslot_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             SlotToUse;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.SetInventoryToQuickSlot
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execSetInventoryToQuickSlot_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                QuickSlotNumber;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  OwnerPC;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.UseQuickSlot
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execUseQuickSlot_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.DiscardInventory
// [0x00020102] 
struct ANetherInventoryManager_execDiscardInventory_Parms
{
	// class AInventory*                               Inv;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.UnloadGun
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execUnloadGun_Parms
{
	class AInventory*                                  Item;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             GunContents;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// class ANWeapRanged*                             SelectedGun;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             AmmoLeft;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.DropItemInFrontOfPlayer
// [0x00820103] ( FUNC_Final )
struct ANetherInventoryManager_execDropItemInFrontOfPlayer_Parms
{
	class AInventory*                                  Item;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    OwnerPawn;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  TossVel;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.DropItem
// [0x00820103] ( FUNC_Final )
struct ANetherInventoryManager_execDropItem_Parms
{
	class AInventory*                                  Item;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    OwnerPawn;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  TossVel;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.DropBackpack
// [0x00020103] ( FUNC_Final )
struct ANetherInventoryManager_execDropBackpack_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AInventory*                               Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ANBackpack*                               PhysicalBackpack;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANCash*                                   CashPickup;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// int                                             CashAmount;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.AddItemStacks
// [0x00024002] 
struct ANetherInventoryManager_execAddItemStacks_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Stacks;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAddItemIfMissing : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      StackableItemClass;                               		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             StacksAdded;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AInventory*                               Item;                                             		// 0x001C (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.RemoveFromStacks
// [0x00020002] 
struct ANetherInventoryManager_execRemoveFromStacks_Parms
{
	class UClass*                                      StackableItem;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             CountLeft;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AInventory*                               TempInv;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// TArray< class AInventory* >                     Items;                                            		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANetherPlayerController*                  NPC;                                              		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetStackableInstance
// [0x00020102] 
struct ANetherInventoryManager_execGetStackableInstance_Parms
{
	class UClass*                                      ClassToFind;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               StackableInstance;                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< class AInventory* >                     InstancesOfType;                                  		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AInventory*                               TempInv;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.GetAllInstancesOfClass
// [0x00020102] 
struct ANetherInventoryManager_execGetAllInstancesOfClass_Parms
{
	class UClass*                                      ClassToFind;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class AInventory* >                        ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// TArray< class AInventory* >                     InstancesOfClass;                                 		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AInventory*                               Inv;                                              		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.HandlePickupQuerySimulated
// [0x00020102] 
struct ANetherInventoryManager_execHandlePickupQuerySimulated_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.RemoveFromInventory
// [0x00020102] 
struct ANetherInventoryManager_execRemoveFromInventory_Parms
{
	class AInventory*                                  NInv;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.ClientRemoveFromInventory
// [0x010201C2] 
struct ANetherInventoryManager_execClientRemoveFromInventory_Parms
{
	class AInventory*                                  NInv;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.AddInventory
// [0x00024102] 
struct ANetherInventoryManager_execAddInventory_Parms
{
	class AInventory*                                  NewItem;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AInventory*                               ExistingItem;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           AmmountLeftOver;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	// class AInventory*                               TempInv;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             SlotNum;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bWasDropped : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherInventoryManager.AddInventoryToSlot
// [0x00020002] 
struct ANetherInventoryManager_execAddInventoryToSlot_Parms
{
	class AInventory*                                  NewItem;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Stacks;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.HasInventoryOfClassOrSubClass
// [0x00020002] 
struct ANetherInventoryManager_execHasInventoryOfClassOrSubClass_Parms
{
	class UClass*                                      InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AInventory*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.SaveWeaponAmmoCounts
// [0x00020002] 
struct ANetherInventoryManager_execSaveWeaponAmmoCounts_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANWeapRanged*                             RangedWeapon;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ANWeapRanged*                             SidearmWeapon;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.CreateInventoryInSlot
// [0x00024002] 
struct ANetherInventoryManager_execCreateInventoryInSlot_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Stacks;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AInventory*                               Inv;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UClass*                                   NewInventoryItemClass;                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryManager.UpdateBackpackVisibility
// [0x00020102] 
struct ANetherInventoryManager_execUpdateBackpackVisibility_Parms
{
};

// Function NetherGame.NetherInventoryManager.SwitchWeapon
// [0x00020100] 
struct ANetherInventoryManager_execSwitchWeapon_Parms
{
	unsigned char                                      NewGroup;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryManager.UpdateAttachmentsForThirdPerson
// [0x00020102] 
struct ANetherInventoryManager_execUpdateAttachmentsForThirdPerson_Parms
{
};

// Function NetherGame.NetherInventoryManager.Destroyed
// [0x00020902] ( FUNC_Event )
struct ANetherInventoryManager_eventDestroyed_Parms
{
};

// Function NetherGame.NetherMoviePlayer.ClearMenuCloseButtonDelegates
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execClearMenuCloseButtonDelegates_Parms
{
};

// Function NetherGame.NetherMoviePlayer.SetMenuCloseButtonDelegates
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execSetMenuCloseButtonDelegates_Parms
{
	struct FScriptDelegate                             EnableButtonDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             DisableButtonDelegate;                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherMoviePlayer.DisableMenuCloseButton
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execDisableMenuCloseButton_Parms
{
};

// Function NetherGame.NetherMoviePlayer.EnableMenuCloseButton
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execEnableMenuCloseButton_Parms
{
};

// Function NetherGame.NetherMoviePlayer.RefreshUI
// [0x00020000] 
struct UNetherMoviePlayer_execRefreshUI_Parms
{
};

// Function NetherGame.NetherMoviePlayer.KeyDown
// [0x00020000] 
struct UNetherMoviePlayer_execKeyDown_Parms
{
	int                                                KeyCode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.MouseWheel
// [0x00020002] 
struct UNetherMoviePlayer_execMouseWheel_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UIGFxScrollable*                          ScrollableElement;                                		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.RightMouseDownCallBack
// [0x00020000] 
struct UNetherMoviePlayer_execRightMouseDownCallBack_Parms
{
	class UIGFxClickable*                              ClickableElement;                                 		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.LeftMouseDownCallBack
// [0x00020002] 
struct UNetherMoviePlayer_execLeftMouseDownCallBack_Parms
{
	class UIGFxClickable*                              ClickableElement;                                 		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.RightMouseUp
// [0x00020002] 
struct UNetherMoviePlayer_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UIGFxClickable*                           ClickableElement;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.RightMouseDown
// [0x00020002] 
struct UNetherMoviePlayer_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UIGFxClickable*                           ClickableElement;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.LeftMouseUp
// [0x00020002] 
struct UNetherMoviePlayer_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UIGFxClickable*                           ClickableElement;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.LeftMouseDown
// [0x00020002] 
struct UNetherMoviePlayer_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UIGFxClickable*                           ClickableElement;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.MouseMoved
// [0x00020002] 
struct UNetherMoviePlayer_execMouseMoved_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.CheckIfMouseOverClickableElement
// [0x00080002] 
struct UNetherMoviePlayer_execCheckIfMouseOverClickableElement_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UIGFxClickable*                              ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UIGFxClickable*                           ClickableElement;                                 		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.CheckIfMouseOverButtons
// [0x00080002] 
struct UNetherMoviePlayer_execCheckIfMouseOverButtons_Parms
{
	class UGFxButton*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxButton*                               Button;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.ToFixed
// [0x00022003] ( FUNC_Final )
struct UNetherMoviePlayer_execToFixed_Parms
{
	float                                              Number;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumDecimals;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             DecimalIndex;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  FormatedNumber;                                   		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherMoviePlayer.IsFrontendMovie
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execIsFrontendMovie_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetHUD
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execGetHUD_Parms
{
	class ANetherHUD*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetNetherPawn
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execGetNetherPawn_Parms
{
	class ANetherPawn*                                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetNetherPC
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execGetNetherPC_Parms
{
	class ANetherPlayerController*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetInventoryManager
// [0x00020003] ( FUNC_Final )
struct UNetherMoviePlayer_execGetInventoryManager_Parms
{
	class ANetherInventoryManager*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetMouseY
// [0x00020002] 
struct UNetherMoviePlayer_execGetMouseY_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetMouseX
// [0x00020002] 
struct UNetherMoviePlayer_execGetMouseX_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.OverrideMouseCursor
// [0x00020000] 
struct UNetherMoviePlayer_execOverrideMouseCursor_Parms
{
	class UGFxObject*                                  NewCursor;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.GetAnimatedObject
// [0x00020002] 
struct UNetherMoviePlayer_execGetAnimatedObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxAnimatedObject*                          ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetNetherVariableObject
// [0x00020002] 
struct UNetherMoviePlayer_execGetNetherVariableObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxNetherObject*                            ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetRotationAngleZ
// [0x00022003] ( FUNC_Final )
struct UNetherMoviePlayer_execGetRotationAngleZ_Parms
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.GetRootObj
// [0x00020002] 
struct UNetherMoviePlayer_execGetRootObj_Parms
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMoviePlayer.Tick
// [0x00020002] 
struct UNetherMoviePlayer_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxAnimatedObject*                       AnimatedElement;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UGFxNetherObject*                         MouseOverElement;                                 		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.StartClosing
// [0x00020002] 
struct UNetherMoviePlayer_execStartClosing_Parms
{
};

// Function NetherGame.NetherMoviePlayer.AddMouseOverElement
// [0x00020002] 
struct UNetherMoviePlayer_execAddMouseOverElement_Parms
{
	class UGFxNetherObject*                            MouseOverElement;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.AddClickableElement
// [0x00024002] 
struct UNetherMoviePlayer_execAddClickableElement_Parms
{
	class UIGFxClickable*                              ClickableElement;                                 		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Layer;                                            		// 0x0010 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherMoviePlayer.Init
// [0x00024002] 
struct UNetherMoviePlayer_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               BackgroundObj;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               AlignmentContainer;                               		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMoviePlayer.OnDisableMenuCloseButton
// [0x00120000] 
struct UNetherMoviePlayer_execOnDisableMenuCloseButton_Parms
{
};

// Function NetherGame.NetherMoviePlayer.OnEnableMenuCloseButton
// [0x00120000] 
struct UNetherMoviePlayer_execOnEnableMenuCloseButton_Parms
{
};

// Function NetherGame.GFxItemSlot.IsLocked
// [0x00020002] 
struct UGFxItemSlot_execIsLocked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItemSlot.Unlock
// [0x00020002] 
struct UGFxItemSlot_execUnlock_Parms
{
};

// Function NetherGame.GFxItemSlot.Lock
// [0x00020002] 
struct UGFxItemSlot_execLock_Parms
{
};

// Function NetherGame.GFxItemSlot.SetType
// [0x00020002] 
struct UGFxItemSlot_execSetType_Parms
{
	int                                                ItemTypeIn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxItemSlot.ResetItemPosition
// [0x00020002] 
struct UGFxItemSlot_execResetItemPosition_Parms
{
};

// Function NetherGame.GFxItemSlot.AS_MouseIsOver
// [0x00040003] ( FUNC_Final )
struct UGFxItemSlot_execAS_MouseIsOver_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItemSlot.CheckMouseSelection
// [0x00020002] 
struct UGFxItemSlot_execCheckMouseSelection_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItemSlot.MouseIsOver
// [0x00020002] 
struct UGFxItemSlot_execMouseIsOver_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxItemSlot.RemoveItem
// [0x00020002] 
struct UGFxItemSlot_execRemoveItem_Parms
{
	class UGFxItem*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxItem*                                 RItem;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxItemSlot.AddInventory
// [0x00020002] 
struct UGFxItemSlot_execAddInventory_Parms
{
	class AInventory*                                  Inv;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxItem*                                 TempItem;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxItemSlot.AddItem
// [0x00020002] 
struct UGFxItemSlot_execAddItem_Parms
{
	class UGFxItem*                                    ItemIn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxItemSlot.SlotSelectedAction
// [0x00120000] 
struct UGFxItemSlot_execSlotSelectedAction_Parms
{
	class UGFxItemSlot*                                Slot;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxMessageBox.AS_SetMessageStyle
// [0x00040003] ( FUNC_Final )
struct UGFxMessageBox_execAS_SetMessageStyle_Parms
{
	int                                                FontSize;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Align;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                FontColor;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxMessageBox.MessageDone
// [0x00020102] 
struct UGFxMessageBox_execMessageDone_Parms
{
};

// Function NetherGame.GFxMessageBox.Tick
// [0x00820102] 
struct UGFxMessageBox_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           MessageBoxMaskDI;                                 		// 0x0004 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           MessageBoxTextDI;                                 		// 0x0030 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageBox.PlayClearMessageAnimation
// [0x00840003] ( FUNC_Final )
struct UGFxMessageBox_execPlayClearMessageAnimation_Parms
{
	// struct FASDisplayInfo                           MessageBoxMaskDI;                                 		// 0x0000 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           MessageBoxTextDI;                                 		// 0x002C (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageBox.PlayShowMessageAnimation
// [0x00840103] ( FUNC_Final )
struct UGFxMessageBox_execPlayShowMessageAnimation_Parms
{
	struct FMessage                                    MessageIn;                                        		// 0x0000 (0x0038) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASDisplayInfo                           MessageBoxMaskDI;                                 		// 0x0038 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           MessageBoxTextDI;                                 		// 0x0064 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageBox.PostMessage
// [0x00024102] 
struct UGFxMessageBox_execPostMessage_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              Duration;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                PosX;                                             		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                PosY;                                             		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                FontSize;                                         		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     Align;                                            		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                FontColor;                                        		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowImmediately : 1;                             		// 0x0034 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShowOnlyIfUnique : 1;                            		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              Width;                                            		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bClearQueue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             MessageSlotsChecked;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageBox.ClearMessageQueue
// [0x00020002] 
struct UGFxMessageBox_execClearMessageQueue_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageBox.Initialize
// [0x00020002] 
struct UGFxMessageBox_execInitialize_Parms
{
};

// Function NetherGame.GFxMessageWindow.MouseMoved
// [0x00020000] 
struct UGFxMessageWindow_execMouseMoved_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxMessageWindow.AlwaysScroll
// [0x00020002] 
struct UGFxMessageWindow_execAlwaysScroll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxMessageWindow.PointOver
// [0x00020002] 
struct UGFxMessageWindow_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxMessageWindow.Scroll
// [0x00020002] 
struct UGFxMessageWindow_execScroll_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxMessageWindow.SetSize
// [0x00820002] 
struct UGFxMessageWindow_execSetSize_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewHeight;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           BackgroundDI;                                     		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageWindow.CreateTextBox
// [0x00040003] ( FUNC_Final )
struct UGFxMessageWindow_execCreateTextBox_Parms
{
	struct FString                                     NewMessage;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxTextBox*                                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxTextBox*                              TextFieldWrapper;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               TextField;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageWindow.Tick
// [0x00020002] 
struct UGFxMessageWindow_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxMessageWindow.MoveMessages
// [0x00840003] ( FUNC_Final )
struct UGFxMessageWindow_execMoveMessages_Parms
{
	float                                              AmountY;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxNetherObject*                         It;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FASDisplayInfo                           MessageDI;                                        		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageWindow.PostMessage
// [0x00024002] 
struct UGFxMessageWindow_execPostMessage_Parms
{
	struct FString                                     NewMessage;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                HexColor;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UGFxTextBox*                              TextBox;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.GFxMessageWindow.Initialize
// [0x00020002] 
struct UGFxMessageWindow_execInitialize_Parms
{
};

// Function NetherGame.GFxMessageWindow.AddMessageToList
// [0x00040003] ( FUNC_Final )
struct UGFxMessageWindow_execAddMessageToList_Parms
{
	class UGFxTextBox*                                 NewMessage;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxTextBox.SetColor
// [0x00020002] 
struct UGFxTextBox_execSetColor_Parms
{
	int                                                HexColor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxTextBox.SetMessageStyle
// [0x00020002] 
struct UGFxTextBox_execSetMessageStyle_Parms
{
	int                                                Size;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Align;                                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                HexColor;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxScrollWindow.AlwaysScroll
// [0x00020002] 
struct UGFxScrollWindow_execAlwaysScroll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxScrollWindow.DisableBorder
// [0x00020002] 
struct UGFxScrollWindow_execDisableBorder_Parms
{
};

// Function NetherGame.GFxScrollWindow.EnableBorder
// [0x00020002] 
struct UGFxScrollWindow_execEnableBorder_Parms
{
};

// Function NetherGame.GFxScrollWindow.SetPadding
// [0x00020002] 
struct UGFxScrollWindow_execSetPadding_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxScrollWindow.ScrollToTop
// [0x00820002] 
struct UGFxScrollWindow_execScrollToTop_Parms
{
	// struct FASDisplayInfo                           ContentDI;                                        		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxScrollWindow.ScrollToBottom
// [0x00820002] 
struct UGFxScrollWindow_execScrollToBottom_Parms
{
	// struct FASDisplayInfo                           ContentDI;                                        		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxScrollWindow.ScrollY
// [0x00820002] 
struct UGFxScrollWindow_execScrollY_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           ContentDI;                                        		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxScrollWindow.Scroll
// [0x00020002] 
struct UGFxScrollWindow_execScroll_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxScrollWindow.ScrollDown
// [0x00020002] 
struct UGFxScrollWindow_execScrollDown_Parms
{
};

// Function NetherGame.GFxScrollWindow.ScrollUp
// [0x00020002] 
struct UGFxScrollWindow_execScrollUp_Parms
{
};

// Function NetherGame.GFxScrollWindow.RemoveFromWindow
// [0x00020002] 
struct UGFxScrollWindow_execRemoveFromWindow_Parms
{
	class UGFxObject*                                  Child;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxScrollWindow.AddToWindow
// [0x00020002] 
struct UGFxScrollWindow_execAddToWindow_Parms
{
	class UGFxObject*                                  Child;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxScrollWindow.SetSize
// [0x00820002] 
struct UGFxScrollWindow_execSetSize_Parms
{
	float                                              WidthIn;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HeightIn;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           MaskDI;                                           		// 0x0008 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           HitAreaDI;                                        		// 0x0034 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxScrollWindow.Tick
// [0x00820002] 
struct UGFxScrollWindow_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           ContentDI;                                        		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxScrollWindow.Initialize
// [0x00820002] 
struct UGFxScrollWindow_execInitialize_Parms
{
	// struct FASDisplayInfo                           MaskDI;                                           		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.IGFxScrollable.PointOver
// [0x00020000] 
struct UIGFxScrollable_execPointOver_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.IGFxScrollable.AlwaysScroll
// [0x00020000] 
struct UIGFxScrollable_execAlwaysScroll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.IGFxScrollable.Scroll
// [0x00020000] 
struct UIGFxScrollable_execScroll_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxNameTag.RefreshSize
// [0x00840003] ( FUNC_Final )
struct UGFxNameTag_execRefreshSize_Parms
{
	// struct FASDisplayInfo                           BackgroundDI;                                     		// 0x0000 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           BorderDI;                                         		// 0x002C (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           DevBorderDI;                                      		// 0x0058 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxNameTag.SetDevBorderVisible
// [0x00020002] 
struct UGFxNameTag_execSetDevBorderVisible_Parms
{
	unsigned long                                      bVisiblity : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.GFxNameTag.SetName
// [0x00020002] 
struct UGFxNameTag_execSetName_Parms
{
	struct FString                                     NewName;                                          		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxNameTag.Initialize
// [0x00020002] 
struct UGFxNameTag_execInitialize_Parms
{
};

// Function NetherGame.GFxObjectiveIcon.SetTimeRemaining
// [0x00020002] 
struct UGFxObjectiveIcon_execSetTimeRemaining_Parms
{
	struct FString                                     TimeRemaining;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxObjectiveIcon.SetPercentComplete
// [0x00020002] 
struct UGFxObjectiveIcon_execSetPercentComplete_Parms
{
	struct FString                                     PercentCompleteText;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxObjectiveIcon.SetName
// [0x00020002] 
struct UGFxObjectiveIcon_execSetName_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxObjectiveIcon.UpdateInfo
// [0x00020003] ( FUNC_Final )
struct UGFxObjectiveIcon_execUpdateInfo_Parms
{
};

// Function NetherGame.GFxObjectiveIcon.Init
// [0x00020003] ( FUNC_Final )
struct UGFxObjectiveIcon_execInit_Parms
{
	class ANetherObjective*                            InObjective;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxObjectiveInfo.SetObjectiveType
// [0x00020002] 
struct UGFxObjectiveInfo_execSetObjectiveType_Parms
{
	int                                                eObjectiveType;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxObjectiveInfo.SetTimeRemaining
// [0x00020002] 
struct UGFxObjectiveInfo_execSetTimeRemaining_Parms
{
	struct FString                                     TimeRemaining;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxObjectiveInfo.SetPercentComplete
// [0x00020002] 
struct UGFxObjectiveInfo_execSetPercentComplete_Parms
{
	float                                              Percent;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxObjectiveInfo.SetName
// [0x00020002] 
struct UGFxObjectiveInfo_execSetName_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxPointOfInterestIcon.AS_SetFontSize
// [0x00020002] 
struct UGFxPointOfInterestIcon_execAS_SetFontSize_Parms
{
	float                                              NewFontSize;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxPointOfInterestIcon.SetName
// [0x00020002] 
struct UGFxPointOfInterestIcon_execSetName_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxRadar.RotateMap
// [0x00020002] 
struct UGFxRadar_execRotateMap_Parms
{
	float                                              angleInDegrees;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxRadar.Tick
// [0x00020000] 
struct UGFxRadar_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxRadar.DrawDots
// [0x00820002] 
struct UGFxRadar_execDrawDots_Parms
{
	struct FVector                                     PlayerLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FVector >                           Dots;                                             		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           ScaleFactor;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DotLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.GFxRadar.Initialize
// [0x00020002] 
struct UGFxRadar_execInitialize_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxRevealMask.SetSize
// [0x00020002] 
struct UGFxRevealMask_execSetSize_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewHeight;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxRevealMask.Show
// [0x00020002] 
struct UGFxRevealMask_execShow_Parms
{
};

// Function NetherGame.GFxRevealMask.Hide
// [0x00824002] 
struct UGFxRevealMask_execHide_Parms
{
	unsigned long                                      bSkipAnimation : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxRevealMask.Tick
// [0x00820002] 
struct UGFxRevealMask_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           DI;                                               		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxRevealMask.Initialize
// [0x00020002] 
struct UGFxRevealMask_execInitialize_Parms
{
};

// Function NetherGame.GFxSafeZoneIcon.CorrectScale
// [0x00820002] 
struct UGFxSafeZoneIcon_execCorrectScale_Parms
{
	float                                              Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxObject*                               House;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FASDisplayInfo                           HouseDI;                                          		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxSafeZoneIcon.SetRadius
// [0x00020002] 
struct UGFxSafeZoneIcon_execSetRadius_Parms
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSafeZoneTriggerIcon.AS_SetFontSize
// [0x00020002] 
struct UGFxSafeZoneTriggerIcon_execAS_SetFontSize_Parms
{
	float                                              NewFontSize;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSafeZoneTriggerIcon.SetName
// [0x00020002] 
struct UGFxSafeZoneTriggerIcon_execSetName_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxServerButton.Deselect
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execDeselect_Parms
{
};

// Function NetherGame.GFxServerButton.Select
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execSelect_Parms
{
};

// Function NetherGame.GFxServerButton.IsCustomServer
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execIsCustomServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxServerButton.SetCustomServer
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execSetCustomServer_Parms
{
	struct FString                                     InServerAddress;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxServerButton.AllowJoinServer
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execAllowJoinServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxServerButton.SetPlayerStats
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execSetPlayerStats_Parms
{
	int                                                PlayerCount;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  PlayerCountString;                                		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MaxPlayersString;                                 		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.GFxServerButton.Init
// [0x00020003] ( FUNC_Final )
struct UGFxServerButton_execInit_Parms
{
	int                                                InIndex;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InServerName;                                     		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxSlider.Tick
// [0x00820002] 
struct UGFxSlider_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           HandleDI;                                         		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxSlider.RightMouseUp
// [0x00020000] 
struct UGFxSlider_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.RightMouseDown
// [0x00020000] 
struct UGFxSlider_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.LeftMouseUp
// [0x00020002] 
struct UGFxSlider_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.LeftMouseDown
// [0x00020002] 
struct UGFxSlider_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.ApplyCurrentOption
// [0x00024002] 
struct UGFxSlider_execApplyCurrentOption_Parms
{
	unsigned long                                      bApplyAutomatically : 1;                          		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxSlider.SetRange
// [0x00020002] 
struct UGFxSlider_execSetRange_Parms
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.RefreshCurrentlySelectedValue
// [0x00040003] ( FUNC_Final )
struct UGFxSlider_execRefreshCurrentlySelectedValue_Parms
{
};

// Function NetherGame.GFxSlider.RefreshSliderPos
// [0x00040003] ( FUNC_Final )
struct UGFxSlider_execRefreshSliderPos_Parms
{
	// float                                           SliderPos;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxSlider.SetWidth
// [0x00020002] 
struct UGFxSlider_execSetWidth_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.SetCurrentlySelectedOption
// [0x00020002] 
struct UGFxSlider_execSetCurrentlySelectedOption_Parms
{
	float                                              OptionValue;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.GetCurrentlySelectedValue
// [0x00020002] 
struct UGFxSlider_execGetCurrentlySelectedValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxSlider.Initialize
// [0x00020002] 
struct UGFxSlider_execInitialize_Parms
{
	class UNetherInputOverlayUI*                       InputOverlayIn;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxSlider.OptionSelectedAction
// [0x00120000] 
struct UGFxSlider_execOptionSelectedAction_Parms
{
	float                                              OptionValue;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInputOverlayUI.GetMouseYDelta
// [0x00020002] 
struct UNetherInputOverlayUI_execGetMouseYDelta_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInputOverlayUI.GetMouseXDelta
// [0x00020002] 
struct UNetherInputOverlayUI_execGetMouseXDelta_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInputOverlayUI.GetMouseYPrev
// [0x00020002] 
struct UNetherInputOverlayUI_execGetMouseYPrev_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInputOverlayUI.GetMouseXPrev
// [0x00020002] 
struct UNetherInputOverlayUI_execGetMouseXPrev_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInputOverlayUI.GetMouseY
// [0x00020002] 
struct UNetherInputOverlayUI_execGetMouseY_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInputOverlayUI.GetMouseX
// [0x00020002] 
struct UNetherInputOverlayUI_execGetMouseX_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInputOverlayUI.AS_SetFocuseToTextInput
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_SetFocuseToTextInput_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.AS_ResetFocus
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_ResetFocus_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.ClearInputText
// [0x00020002] 
struct UNetherInputOverlayUI_execClearInputText_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.GetInputText
// [0x00020002] 
struct UNetherInputOverlayUI_execGetInputText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherInputOverlayUI.HideTextInput
// [0x00020002] 
struct UNetherInputOverlayUI_execHideTextInput_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.ShowTextInput
// [0x00020002] 
struct UNetherInputOverlayUI_execShowTextInput_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.HideMouseCursor
// [0x00020002] 
struct UNetherInputOverlayUI_execHideMouseCursor_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.ShowMouseCursor
// [0x00020002] 
struct UNetherInputOverlayUI_execShowMouseCursor_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.AS_KeyUp
// [0x00020000] 
struct UNetherInputOverlayUI_execAS_KeyUp_Parms
{
	int                                                KeyCode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInputOverlayUI.AS_KeyDown
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_KeyDown_Parms
{
	int                                                KeyCode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInputOverlayUI.AS_MouseWheel
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_MouseWheel_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInputOverlayUI.AS_RightMouseUp
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_RightMouseUp_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.AS_RightMouseDown
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_RightMouseDown_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.AS_LeftMouseUp
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_LeftMouseUp_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.AS_LeftMouseDown
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_LeftMouseDown_Parms
{
};

// Function NetherGame.NetherInputOverlayUI.AS_MouseMoved
// [0x00020002] 
struct UNetherInputOverlayUI_execAS_MouseMoved_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInputOverlayUI.Init
// [0x00024002] 
struct UNetherInputOverlayUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.GFxStatModifierButton.RemoveStatPoint
// [0x00020003] ( FUNC_Final )
struct UGFxStatModifierButton_execRemoveStatPoint_Parms
{
};

// Function NetherGame.GFxStatModifierButton.SetRemoveDelegate
// [0x00020003] ( FUNC_Final )
struct UGFxStatModifierButton_execSetRemoveDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxStatModifierButton.SpendStatPoint
// [0x00020003] ( FUNC_Final )
struct UGFxStatModifierButton_execSpendStatPoint_Parms
{
};

// Function NetherGame.GFxStatModifierButton.SetSpendDelegate
// [0x00020003] ( FUNC_Final )
struct UGFxStatModifierButton_execSetSpendDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxStatModifierButton.Initialize
// [0x00020001] ( FUNC_Final )
struct UGFxStatModifierButton_execInitialize_Parms
{
};

// Function NetherGame.GFxStatModifierButton.RemovePointDelegate
// [0x00120000] 
struct UGFxStatModifierButton_execRemovePointDelegate_Parms
{
};

// Function NetherGame.GFxStatModifierButton.SpendPointDelegate
// [0x00120000] 
struct UGFxStatModifierButton_execSpendPointDelegate_Parms
{
};

// Function NetherGame.GFxStatWidget.Tick
// [0x00820002] 
struct UGFxStatWidget_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           ProgressBarDI;                                    		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxStatWidget.ScaleProgressBar
// [0x00020002] 
struct UGFxStatWidget_execScaleProgressBar_Parms
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.GFxStatWidget.ApplyUpgrades
// [0x00020001] ( FUNC_Final )
struct UGFxStatWidget_execApplyUpgrades_Parms
{
};

// Function NetherGame.GFxStatWidget.AskServerToAddPoint
// [0x00020002] 
struct UGFxStatWidget_execAskServerToAddPoint_Parms
{
	class UGFxAbilityNode*                             Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.GFxStatWidget.AddPoint
// [0x00020002] 
struct UGFxStatWidget_execAddPoint_Parms
{
};

// Function NetherGame.GFxStatWidget.SetData
// [0x00020003] ( FUNC_Final )
struct UGFxStatWidget_execSetData_Parms
{
	// float                                           StatValue;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  StatValueString;                                  		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.GFxStatWidget.Initialize
// [0x00820003] ( FUNC_Final )
struct UGFxStatWidget_execInitialize_Parms
{
	unsigned char                                      NewStat;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class ANetherPlayerController*                     PlayerController;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           ProgressBarDI;                                    		// 0x000C (0x002C) [0x0000000000000000]              
};

// Function NetherGame.GFxStatWidget.OnStatAllocated
// [0x00120000] 
struct UGFxStatWidget_execOnStatAllocated_Parms
{
};

// Function NetherGame.GFxToolTip.SetToolTipText
// [0x00020002] 
struct UGFxToolTip_execSetToolTipText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.GFxToolTip.SetSize
// [0x00020002] 
struct UGFxToolTip_execSetSize_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewHeight;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.GFxToolTip.Initialize
// [0x00020002] 
struct UGFxToolTip_execInitialize_Parms
{
};

// Function NetherGame.NBotEnemy_Teleporter.GetPlayerTeleportLocation
// [0x00820003] ( FUNC_Final )
struct ANBotEnemy_Teleporter_execGetPlayerTeleportLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Norm;                                             		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy_Teleporter.GetObjectTeleportLocation
// [0x00820003] ( FUNC_Final )
struct ANBotEnemy_Teleporter_execGetObjectTeleportLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AItoObjectDirection;                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PerpVect;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TeleportLocation;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy_Teleporter.GetForwardTeleportLocation
// [0x00820003] ( FUNC_Final )
struct ANBotEnemy_Teleporter_execGetForwardTeleportLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AItoPlayerDirection;                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PerpVect;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TeleportLocation;                                 		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy_Teleporter.AttemptTeleportToObject
// [0x00020003] ( FUNC_Final )
struct ANBotEnemy_Teleporter_execAttemptTeleportToObject_Parms
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bDidTeleport : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           DistToTarget;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy_Teleporter.AttemptTeleport
// [0x00020003] ( FUNC_Final )
struct ANBotEnemy_Teleporter_execAttemptTeleport_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bDidTeleport : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           DistToPlayer;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy_Teleporter.GetUnstuck
// [0x00020002] 
struct ANBotEnemy_Teleporter_execGetUnstuck_Parms
{
};

// Function NetherGame.NBotEnemy_Teleporter.IsTeleporting
// [0x00020002] 
struct ANBotEnemy_Teleporter_execIsTeleporting_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy_Teleporter.OnAggroEnded
// [0x00080002] 
struct ANBotEnemy_Teleporter_execOnAggroEnded_Parms
{
};

// Function NetherGame.NBotEnemy_Teleporter.Possess
// [0x00020802] ( FUNC_Event )
struct ANBotEnemy_Teleporter_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.HorrorSubBoss.Died
// [0x00020002] 
struct AHorrorSubBoss_execDied_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.HorrorSubBoss.TakeDamage
// [0x00824802] ( FUNC_Event )
struct AHorrorSubBoss_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           DamagePercent;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FXPOwed                                  XPOwedThisHit;                                    		// 0x0060 (0x000C) [0x0000000000000000]              
	// int                                             IndexNum;                                         		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NBotEnemy_Subboss.NotifyStunned
// [0x00020000] 
struct ANBotEnemy_Subboss_execNotifyStunned_Parms
{
	float                                              InStunDuration;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.MICReflectionUpdater.Tick
// [0x00820102] 
struct AMICReflectionUpdater_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           Pitch;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.MICReflectionUpdater.PostBeginPlay
// [0x00020102] 
struct AMICReflectionUpdater_execPostBeginPlay_Parms
{
	// class UMaterialInstanceConstant*                NewMIC;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NameTagManager.Draw
// [0x00820102] 
struct ANameTagManager_execDraw_Parms
{
	// struct FVector                                  PlayerTagScreenLoc;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NameTagOffset;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ResCorrection;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ANetherPawn*                              OtherPawn;                                        		// 0x002C (0x0008) [0x0000000000000000]              
	// class ANetherPawn*                              NPawn;                                            		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x003C (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LPlayer;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
	// float                                           CutOff;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           PDot;                                             		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             NameTagsInFocus;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0058 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasLineOfSight : 1;                              		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           FadeAlpha;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NameTagManager.Initialize
// [0x00820002] 
struct ANameTagManager_execInitialize_Parms
{
	class ANetherHUD*                                  NewHud;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxNameTag*                              NewNameTag;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FNameTagData                             NewNameTagData;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NStackableItem.AnnouncePickup
// [0x00020002] 
struct ANStackableItem_execAnnouncePickup_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NStackableItem.GetInvClass
// [0x00022102] 
struct ANStackableItem_execGetInvClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetItemType
// [0x00022102] 
struct ANStackableItem_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.SetSlotNumber
// [0x00020102] 
struct ANStackableItem_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NStackableItem.GetSlotNumber
// [0x00020102] 
struct ANStackableItem_execGetSlotNumber_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.IsQuickSlotable
// [0x00022102] 
struct ANStackableItem_execIsQuickSlotable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetInventoryCount
// [0x00020102] 
struct ANStackableItem_execGetInventoryCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetDefaultInventoryCount
// [0x00022102] 
struct ANStackableItem_execGetDefaultInventoryCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.RemoveItemStacks
// [0x00020102] 
struct ANStackableItem_execRemoveItemStacks_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             AmountToRemove;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStackableItem.SetItemStacks
// [0x00020002] 
struct ANStackableItem_execSetItemStacks_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NStackableItem.ClientSetItemStacks
// [0x010201C2] 
struct ANStackableItem_execClientSetItemStacks_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NStackableItem.AddItemStacks
// [0x00020102] 
struct ANStackableItem_execAddItemStacks_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             AmountToAdd;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStackableItem.ConsumeItem
// [0x00020102] 
struct ANStackableItem_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetInventoryID
// [0x00022102] 
struct ANStackableItem_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetWeight
// [0x00022102] 
struct ANStackableItem_execGetWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetStackCap
// [0x00022102] 
struct ANStackableItem_execGetStackCap_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.IsStackable
// [0x00022102] 
struct ANStackableItem_execIsStackable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NStackableItem.GetInventoryDesc
// [0x00022102] 
struct ANStackableItem_execGetInventoryDesc_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NStackableItem.GetInventoryName
// [0x00022102] 
struct ANStackableItem_execGetInventoryName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NStackableItem.DenyPickupQuery
// [0x00020002] 
struct ANStackableItem_execDenyPickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDroppedPickup.IsInUse
// [0x00020002] 
struct ANDroppedPickup_execIsInUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDroppedPickup.ReleaseFromUse
// [0x00020002] 
struct ANDroppedPickup_execReleaseFromUse_Parms
{
};

// Function NetherGame.NDroppedPickup.MarkForUse
// [0x00020002] 
struct ANDroppedPickup_execMarkForUse_Parms
{
};

// Function NetherGame.NDroppedPickup.PawnHasSight
// [0x00020102] 
struct ANDroppedPickup_execPawnHasSight_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDroppedPickup.SetPickupMesh
// [0x00020902] ( FUNC_Event )
struct ANDroppedPickup_eventSetPickupMesh_Parms
{
	class UPrimitiveComponent*                         NewPickupMesh;                                    		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function NetherGame.NAmmo.GetItemType
// [0x00022102] 
struct ANAmmo_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAmmo_12Gauge.GetInventoryID
// [0x00022102] 
struct ANAmmo_12Gauge_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAmmo_45ACP.GetInventoryID
// [0x00022102] 
struct ANAmmo_45ACP_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAmmo_50cal.GetInventoryID
// [0x00022102] 
struct ANAmmo_50cal_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAmmo_5pt56.GetInventoryID
// [0x00022102] 
struct ANAmmo_5pt56_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAmmo_7pt62.GetInventoryID
// [0x00022102] 
struct ANAmmo_7pt62_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAmmo_9mm.GetInventoryID
// [0x00022102] 
struct ANAmmo_9mm_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NAttachment.ThirdPersonFireEffects
// [0x00020102] 
struct ANAttachment_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NAttachment.UpdateAttachmentDepthPriority
// [0x00020102] 
struct ANAttachment_execUpdateAttachmentDepthPriority_Parms
{
};

// Function NetherGame.NAttachment.AttachTo
// [0x00020102] 
struct ANAttachment_execAttachTo_Parms
{
	class AUTPawn*                                     OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NAttachment_Ranged.SetMuzzleFlashParams
// [0x00020102] 
struct ANAttachment_Ranged_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           PathValues[ 0x3 ];                                		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             NewPath;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NAttachment_Ranged.AttachTo
// [0x00020102] 
struct ANAttachment_Ranged_execAttachTo_Parms
{
	class AUTPawn*                                     OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NAttachment_Ranged.GetMuzzleLoc
// [0x00820003] ( FUNC_Final )
struct ANAttachment_Ranged_execGetMuzzleLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  MuzzleLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NAttachment_Ranged.ThirdPersonFireEffects
// [0x00020102] 
struct ANAttachment_Ranged_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPawn*                                  UTP;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NAttachment_Ranged.FirstPersonFireEffects
// [0x00020102] 
struct ANAttachment_Ranged_execFirstPersonFireEffects_Parms
{
	class AWeapon*                                     PawnWeapon;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ANWeapRanged*                             Weapon;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NAttachment_Ranged.SpawnBeam
// [0x00820102] 
struct ANAttachment_Ranged_execSpawnBeam_Parms
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstPerson : 1;                                 		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UParticleSystemComponent*                 E;                                                		// 0x001C (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class AActor*                                   HitActor;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0038 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.GetItemType
// [0x00022102] 
struct ANWeapRanged_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.StopMuzzleFlash
// [0x00020902] ( FUNC_Event )
struct ANWeapRanged_eventStopMuzzleFlash_Parms
{
};

// Function NetherGame.NWeapRanged.FireAmmunition
// [0x00020102] 
struct ANWeapRanged_execFireAmmunition_Parms
{
};

// Function NetherGame.NWeapRanged.PlayFireEffects
// [0x00024102] 
struct ANWeapRanged_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NWeapRanged.ProcessViewRotation
// [0x00C20102] 
struct ANWeapRanged_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FRotator                                 DeltaRecoil;                                      		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.ReloadWeapon
// [0x00040003] ( FUNC_Final )
struct ANWeapRanged_execReloadWeapon_Parms
{
	int                                                ReloadAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged.GetEffectLocation
// [0x00820102] 
struct ANWeapRanged_execGetEffectLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.Tick
// [0x00020902] ( FUNC_Event )
struct ANWeapRanged_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Spread_BaseAdjusted;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.GetPostureSpreadScalar
// [0x00020102] 
struct ANWeapRanged_execGetPostureSpreadScalar_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           SpreadScalar;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.DebugDrawSpread
// [0x00820002] 
struct ANWeapRanged_execDebugDrawSpread_Parms
{
	// struct FVector                                  X;                                                		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  XMin;                                             		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  XMax;                                             		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  YMin;                                             		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  YMax;                                             		// 0x0048 (0x000C) [0x0000000000000000]              
	// float                                           CurrentSpread;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	// float                                           RandZ;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 BaseAim;                                          		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  MuzzleLoc;                                        		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0090 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x009C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.DrawWeaponCrosshair
// [0x00020102] 
struct ANWeapRanged_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged.GetWeaponBaseAim
// [0x00024102] 
struct ANWeapRanged_execGetWeaponBaseAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.GetAdjustedAim
// [0x00020102] 
struct ANWeapRanged_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.GetMuzzleLoc
// [0x00820902] ( FUNC_Event )
struct ANWeapRanged_eventGetMuzzleLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  MuzzleLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// class AUTWeaponAttachment*                      UTAttachment;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.GetPhysicalFireStartLoc
// [0x00024902] ( FUNC_Event )
struct ANWeapRanged_eventGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.IsUnloadable
// [0x00022102] 
struct ANWeapRanged_execIsUnloadable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.ConsumeAmmo
// [0x00020002] 
struct ANWeapRanged_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged.ClearGun
// [0x00020002] 
struct ANWeapRanged_execClearGun_Parms
{
};

// Function NetherGame.NWeapRanged.AddAmmo
// [0x00020002] 
struct ANWeapRanged_execAddAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.WeaponEmpty
// [0x00020100] 
struct ANWeapRanged_execWeaponEmpty_Parms
{
};

// Function NetherGame.NWeapRanged.ClientAttemptReload
// [0x010401C3] ( FUNC_Final )
struct ANWeapRanged_execClientAttemptReload_Parms
{
};

// Function NetherGame.NWeapRanged.ServerAttemptReload
// [0x002200C3] ( FUNC_Final )
struct ANWeapRanged_execServerAttemptReload_Parms
{
};

// Function NetherGame.NWeapRanged.CanReload
// [0x00020102] 
struct ANWeapRanged_execCanReload_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.IsReloading
// [0x00020102] 
struct ANWeapRanged_execIsReloading_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.UpdateIKRecoil
// [0x00020102] 
struct ANWeapRanged_execUpdateIKRecoil_Parms
{
	int                                                Num;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged.OnPawnSwitchedPerspective
// [0x00020102] 
struct ANWeapRanged_execOnPawnSwitchedPerspective_Parms
{
	// class ANetherPawn*                              NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.LowerWeapon
// [0x00080002] 
struct ANWeapRanged_execLowerWeapon_Parms
{
	// class ANetherPawn*                              NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.EndFire
// [0x00020102] 
struct ANWeapRanged_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged.BeginFire
// [0x00020102] 
struct ANWeapRanged_execBeginFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.GetInstantHitDamage
// [0x00020002] 
struct ANWeapRanged_execGetInstantHitDamage_Parms
{
	int                                                FireMode;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.GetReserveAmmo
// [0x00020103] ( FUNC_Final )
struct ANWeapRanged_execGetReserveAmmo_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.GetClipSize
// [0x00020103] ( FUNC_Final )
struct ANWeapRanged_execGetClipSize_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.Activate
// [0x00020102] 
struct ANWeapRanged_execActivate_Parms
{
	// class ANetherPawn*                              NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged.GetInventoryCount
// [0x00020102] 
struct ANWeapRanged_execGetInventoryCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ANWeapRanged_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NWeap.OverrideViewRotation
// [0x00420102] 
struct ANWeap_execOverrideViewRotation_Parms
{
	struct FRotator                                    WeaponViewRotation;                               		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.OverrideViewLocation
// [0x00420102] 
struct ANWeap_execOverrideViewLocation_Parms
{
	struct FVector                                     WeaponViewLocation;                               		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.OverrideViewSocketRotation
// [0x00420102] 
struct ANWeap_execOverrideViewSocketRotation_Parms
{
	struct FName                                       WeaponViewSocket;                                 		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.OverrideViewSocket
// [0x00420102] 
struct ANWeap_execOverrideViewSocket_Parms
{
	struct FName                                       WeaponViewSocket;                                 		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.DenyPickupQuery
// [0x00020002] 
struct ANWeap_execDenyPickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.CanPlayerSprint
// [0x00020102] 
struct ANWeap_execCanPlayerSprint_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.DrawWeaponCrosshair
// [0x00020102] 
struct ANWeap_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CrosshairScalingX;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CrosshairScalingY;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class ANetherHUD*                               NHUD;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeap.CanDrawWeaponCrosshair
// [0x00080102] 
struct ANWeap_execCanDrawWeaponCrosshair_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.PlayWeaponAnim
// [0x00020003] ( FUNC_Final )
struct ANWeap_execPlayWeaponAnim_Parms
{
	struct FName                                       InAnimName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              InAnimDuration;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeap.AttachWeaponTo
// [0x00024102] 
struct ANWeap_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeap.AnnouncePickup
// [0x00020002] 
struct ANWeap_execAnnouncePickup_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeap.WeaponPlaySound
// [0x00024100] 
struct ANWeap_execWeaponPlaySound_Parms
{
	class UAkEvent*                                    Sound;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              NoiseLoudness;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NWeap.PlayFiringSound
// [0x00020100] 
struct ANWeap_execPlayFiringSound_Parms
{
};

// Function NetherGame.NWeap.FireAmmunition
// [0x00020102] 
struct ANWeap_execFireAmmunition_Parms
{
	// class ANetherPawn*                              NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeap.CanThrow
// [0x00020102] 
struct ANWeap_execCanThrow_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.SetSlotNumber
// [0x00020102] 
struct ANWeap_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeap.GetSlotNumber
// [0x00020102] 
struct ANWeap_execGetSlotNumber_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.IsQuickSlotable
// [0x00022102] 
struct ANWeap_execIsQuickSlotable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.GetNumStacksToAdd
// [0x00020102] 
struct ANWeap_execGetNumStacksToAdd_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.GetInventoryDesc
// [0x00022102] 
struct ANWeap_execGetInventoryDesc_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NWeap.GetInventoryName
// [0x00022102] 
struct ANWeap_execGetInventoryName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NWeap.GetInventoryID
// [0x00022102] 
struct ANWeap_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.GetWeight
// [0x00022102] 
struct ANWeap_execGetWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeap.ProcessInstantHit
// [0x00024102] 
struct ANWeap_execProcessInstantHit_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0060) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumHits;                                          		// 0x0064 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              HeadShot;                                         		// 0x0068 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APawn*                                    HitPawn;                                          		// 0x006C (0x0008) [0x0000000000000000]              
	// class UPhysicalMaterial*                        PhysMat;                                          		// 0x0074 (0x0008) [0x0000000000000000]              
	// class UNetherPhysicalMaterialProperty*          PhysMatProperty;                                  		// 0x007C (0x0008) [0x0000000000000000]              
	// class UNetherPhysicalMaterialPropertyItem*      PropEntry1;                                       		// 0x0084 (0x0008) [0x0000000000000000]              
	// class UNetherPhysicalMaterialPropertyItem*      PropEntry2;                                       		// 0x008C (0x0008) [0x0000000000000000]              
	// unsigned char                                   Interaction;                                      		// 0x0094 (0x0001) [0x0000000000000000]              
	// TArray< int >                                   SoundsToPlay;                                     		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             EntryIdx;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	// int                                             SoundIdx1;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	// int                                             SoundIdx2;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	// int                                             OverrideIdx;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNoRepImpactSoundToVictim : 1;                    		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bFoundOverride : 1;                               		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NWeap.CalcWeaponFire
// [0x00C24102] 
struct ANWeap_execCalcWeaponFire_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       ImpactList;                                       		// 0x0018 (0x0010) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     Extent;                                           		// 0x0028 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fHeadShot;                                        		// 0x0034 (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	struct FImpactInfo                                 ReturnValue;                                      		// 0x0038 (0x0060) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0098 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x00A4 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x00B0 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x00B8 (0x0028) [0x0000000000000000]              
	// struct FImpactInfo                              CurrentImpact;                                    		// 0x00E0 (0x0060) [0x0000000000000000]              
	// unsigned long                                   bOldBlockActors : 1;                              		// 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bOldCollideActors : 1;                            		// 0x0144 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           CritRoll;                                         		// 0x0148 (0x0004) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x014C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeap.DetachWeapon
// [0x00020102] 
struct ANWeap_execDetachWeapon_Parms
{
	// class AUTPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeap.ClientGivenTo
// [0x010201C2] 
struct ANWeap_execClientGivenTo_Parms
{
	class APawn*                                       NewOwner;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoNotActivate : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NWeap.ProcessViewRotation
// [0x00420100] 
struct ANWeap_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function NetherGame.NWeap.PostBeginPlay
// [0x00020102] 
struct ANWeap_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeap.GetInvClass
// [0x00022102] 
struct ANWeap_execGetInvClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Shotgun.DebugDrawSpread
// [0x00820002] 
struct ANWeapRanged_Shotgun_execDebugDrawSpread_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 BaseAim;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  MuzzleLoc;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0070 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Shotgun.GetInstantHitDamage
// [0x00020002] 
struct ANWeapRanged_Shotgun_execGetInstantHitDamage_Parms
{
	int                                                FireMode;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Shotgun.FireAllPellets
// [0x00C20002] 
struct ANWeapRanged_Shotgun_execFireAllPellets_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    InAimRot;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FireModeNum;                                      		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 OutImpactInfo;                                    		// 0x001C (0x0060) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// TArray< struct FNetherShotgunHitInfo >          ShotgunHitList;                                   		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x008C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             IdxPellet;                                        		// 0x009C (0x0004) [0x0000000000000000]              
	// int                                             IdxImpact;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	// int                                             IdxHitList;                                       		// 0x00A4 (0x0004) [0x0000000000000000]              
	// struct FVector                                  PelletDirection;                                  		// 0x00A8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x00B4 (0x000C) [0x0000000000000000]              
	// float                                           TraceRange;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x00C4 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x00D0 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x00DC (0x000C) [0x0000000000000000]              
	// float                                           RandSpread;                                       		// 0x00E8 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Shotgun.CustomFire
// [0x00820102] 
struct ANWeapRanged_Shotgun_execCustomFire_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FImpactInfo                              OutImpactInfo;                                    		// 0x000C (0x0060) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x006C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Shotgun.PostBeginPlay
// [0x00020102] 
struct ANWeapRanged_Shotgun_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapRanged_Rifle.PostBeginPlay
// [0x00020102] 
struct ANWeapRanged_Rifle_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.CanPlayerSprint
// [0x00020102] 
struct ANWeapRanged_Ironsight_execCanPlayerSprint_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Ironsight.ShakeView
// [0x00020102] 
struct ANWeapRanged_Ironsight_execShakeView_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.OverrideViewRotation
// [0x00C20102] 
struct ANWeapRanged_Ironsight_execOverrideViewRotation_Parms
{
	struct FRotator                                    WeaponViewRotation;                               		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  WeaponViewLocation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.OverrideViewLocation
// [0x00420102] 
struct ANWeapRanged_Ironsight_execOverrideViewLocation_Parms
{
	struct FVector                                     WeaponViewLocation;                               		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Ironsight.GetWeaponBaseAim
// [0x00824102] 
struct ANWeapRanged_Ironsight_execGetWeaponBaseAim_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StartTraceLocation;                               		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StartTraceRotation;                               		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.InstantFireStartTrace
// [0x00820102] 
struct ANWeapRanged_Ironsight_execInstantFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StartTraceLocation;                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.HasSocket
// [0x00020102] 
struct ANWeapRanged_Ironsight_execHasSocket_Parms
{
	struct FName                                       InSocketName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Ironsight.CanDrawWeaponCrosshair
// [0x00080102] 
struct ANWeapRanged_Ironsight_execCanDrawWeaponCrosshair_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Ironsight.SetPosition
// [0x00020902] ( FUNC_Event )
struct ANWeapRanged_Ironsight_eventSetPosition_Parms
{
	class AUDKPawn*                                    Holder;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged_Ironsight.OnPawnSwitchedPerspective
// [0x00020102] 
struct ANWeapRanged_Ironsight_execOnPawnSwitchedPerspective_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.CheckZoom
// [0x00020102] 
struct ANWeapRanged_Ironsight_execCheckZoom_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Ironsight.EndZoom
// [0x00020102] 
struct ANWeapRanged_Ironsight_execEndZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.StartZoom
// [0x00020102] 
struct ANWeapRanged_Ironsight_execStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.ServerCheckMyZoom
// [0x002200C2] 
struct ANWeapRanged_Ironsight_execServerCheckMyZoom_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.GetPostureSpreadScalar
// [0x00020102] 
struct ANWeapRanged_Ironsight_execGetPostureSpreadScalar_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           SpreadScalar;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.CheckMyZoom
// [0x00020102] 
struct ANWeapRanged_Ironsight_execCheckMyZoom_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.IsZoomed
// [0x00020102] 
struct ANWeapRanged_Ironsight_execIsZoomed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   ZoomState;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Ironsight.GetZoomedState
// [0x00020102] 
struct ANWeapRanged_Ironsight_execGetZoomedState_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Ironsight.LowerWeapon
// [0x00080002] 
struct ANWeapRanged_Ironsight_execLowerWeapon_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.PlayFireEffects
// [0x00024102] 
struct ANWeapRanged_Ironsight_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NWeapRanged_Ironsight.Activate
// [0x00020102] 
struct ANWeapRanged_Ironsight_execActivate_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.DeactivateZoom
// [0x00040103] ( FUNC_Final )
struct ANWeapRanged_Ironsight_execDeactivateZoom_Parms
{
};

// Function NetherGame.NWeapRanged_Ironsight.EndFire
// [0x00020102] 
struct ANWeapRanged_Ironsight_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged_Ironsight.PostBeginPlay
// [0x00020102] 
struct ANWeapRanged_Ironsight_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Axe.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Axe_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee.GetItemType
// [0x00022102] 
struct ANWeapMelee_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee.CalculateMeleeCritical
// [0x00020002] 
struct ANWeapMelee_execCalculateMeleeCritical_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RayDir;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           CritcalMultiplier;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           DotToEnemy;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapMelee.InstantFire
// [0x00820102] 
struct ANWeapMelee_execInstantFire_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FImpactInfo                              RealImpact;                                       		// 0x0018 (0x0060) [0x0000000000000000]              
	// struct FImpactInfo                              NearImpact;                                       		// 0x0078 (0x0060) [0x0000000000000000]              
	// int                                             FinalImpactIndex;                                 		// 0x00D8 (0x0004) [0x0000000000000000]              
	// float                                           CriticalMultiplier;                               		// 0x00DC (0x0004) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x00E0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NWeapMelee.IsBlocking
// [0x00020102] 
struct ANWeapMelee_execIsBlocking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee.IsInChargedAttack
// [0x00020102] 
struct ANWeapMelee_execIsInChargedAttack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee.InstantFireStartTrace
// [0x00020102] 
struct ANWeapMelee_execInstantFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee.HandleFinishedFiring
// [0x00020100] 
struct ANWeapMelee_execHandleFinishedFiring_Parms
{
};

// Function NetherGame.NWeapMelee.ServerCancelPendingAction
// [0x002200C2] 
struct ANWeapMelee_execServerCancelPendingAction_Parms
{
};

// Function NetherGame.NWeapMelee.CancelPendingAction
// [0x00020102] 
struct ANWeapMelee_execCancelPendingAction_Parms
{
};

// Function NetherGame.NWeapMelee.EndFire
// [0x00020102] 
struct ANWeapMelee_execEndFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapMelee.StartFire
// [0x00020102] 
struct ANWeapMelee_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapMelee.GetInstantHitDamage
// [0x00020002] 
struct ANWeapMelee_execGetInstantHitDamage_Parms
{
	int                                                FireMode;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           MeleeDamage;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWeapMelee.HasAmmo
// [0x00024102] 
struct ANWeapMelee_execHasAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee.HasAnyAmmo
// [0x00020102] 
struct ANWeapMelee_execHasAnyAmmo_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee.Activate
// [0x00020102] 
struct ANWeapMelee_execActivate_Parms
{
};

// Function NetherGame.NWeapMelee.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Bat.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Bat_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_BattleAxe.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_BattleAxe_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Bolo.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Bolo_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Crowbar.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Crowbar_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapRanged_Pistol.GetItemType
// [0x00022102] 
struct ANWeapRanged_Pistol_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapRanged_Pistol.PostBeginPlay
// [0x00020102] 
struct ANWeapRanged_Pistol_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_EastSword.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_EastSword_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Hands.GetBackpackSlotCapacity
// [0x00022102] 
struct ANWeapMelee_Hands_execGetBackpackSlotCapacity_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee_Hands.SetSlotNumber
// [0x00020102] 
struct ANWeapMelee_Hands_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapMelee_Hands.GetSlotNumber
// [0x00020102] 
struct ANWeapMelee_Hands_execGetSlotNumber_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee_Hands.GetItemType
// [0x00022102] 
struct ANWeapMelee_Hands_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWeapMelee_Hands.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Hands_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Katana.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Katana_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Knife.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Knife_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapMelee_Machete.PostBeginPlay
// [0x00020102] 
struct ANWeapMelee_Machete_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWeapRanged_Sniper.TakeOffMaterial
// [0x00020102] 
struct ANWeapRanged_Sniper_execTakeOffMaterial_Parms
{
};

// Function NetherGame.NWeapRanged_Sniper.EndZoom
// [0x00020102] 
struct ANWeapRanged_Sniper_execEndZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWeapRanged_Sniper.SniperReleaseBreath
// [0x00020102] 
struct ANWeapRanged_Sniper_execSniperReleaseBreath_Parms
{
};

// Function NetherGame.NWeapRanged_Sniper.SniperHoldBreath
// [0x00020102] 
struct ANWeapRanged_Sniper_execSniperHoldBreath_Parms
{
};

// Function NetherGame.NWeapRanged_Sniper.PutOnMaterial
// [0x00020102] 
struct ANWeapRanged_Sniper_execPutOnMaterial_Parms
{
};

// Function NetherGame.NWeapRanged_Sniper.StartZoom
// [0x00020102] 
struct ANWeapRanged_Sniper_execStartZoom_Parms
{
	class AUTPlayerController*                         PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWeapRanged_Sniper.PostBeginPlay
// [0x00020102] 
struct ANWeapRanged_Sniper_execPostBeginPlay_Parms
{
};

// Function NetherGame.NWardrobe.AnnouncePickup
// [0x00020002] 
struct ANWardrobe_execAnnouncePickup_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe.DenyPickupQuery
// [0x00020002] 
struct ANWardrobe_execDenyPickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe.SetSlotNumber
// [0x00020102] 
struct ANWardrobe_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe.IsDroppable
// [0x00022102] 
struct ANWardrobe_execIsDroppable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe.GetSlotNumber
// [0x00020102] 
struct ANWardrobe_execGetSlotNumber_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe.GetInventoryDesc
// [0x00022102] 
struct ANWardrobe_execGetInventoryDesc_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NWardrobe.GetInventoryName
// [0x00022102] 
struct ANWardrobe_execGetInventoryName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NWardrobe.GetInventoryID
// [0x00022102] 
struct ANWardrobe_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe.GetWeight
// [0x00022102] 
struct ANWardrobe_execGetWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe.ConsumeItem
// [0x00020100] 
struct ANWardrobe_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe.DetachFrom
// [0x00020102] 
struct ANWardrobe_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function NetherGame.NWardrobe.AttachTo
// [0x00020102] 
struct ANWardrobe_execAttachTo_Parms
{
	class ANetherPawn*                                 OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       AttachmentSocket;                                 		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe.SetSkin
// [0x00020002] 
struct ANWardrobe_execSetSkin_Parms
{
	class UMaterial*                                   NewMaterial;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Cnt;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NWardrobe.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ANWardrobe_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NWardrobe.GetInvClass
// [0x00022102] 
struct ANWardrobe_execGetInvClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack.UpdateVisibility
// [0x00020102] 
struct ANBackpack_execUpdateVisibility_Parms
{
	// class ANetherPawn*                              NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NBackpack.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANBackpack_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBackpack.SetSlotNumber
// [0x00020102] 
struct ANBackpack_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NBackpack.GetItemType
// [0x00022102] 
struct ANBackpack_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack.IsQuickSlotable
// [0x00022102] 
struct ANBackpack_execIsQuickSlotable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack.IsStackable
// [0x00022102] 
struct ANBackpack_execIsStackable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack.IsDroppable
// [0x00022102] 
struct ANBackpack_execIsDroppable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack.GetWeight
// [0x00022102] 
struct ANBackpack_execGetWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack_ExtraLarge.GetInventoryID
// [0x00022102] 
struct ANBackpack_ExtraLarge_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack_Large.GetInventoryID
// [0x00022102] 
struct ANBackpack_Large_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack_Medium.GetInventoryID
// [0x00022102] 
struct ANBackpack_Medium_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack_Military.GetInventoryID
// [0x00022102] 
struct ANBackpack_Military_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack_MilitaryLarge.GetInventoryID
// [0x00022102] 
struct ANBackpack_MilitaryLarge_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBackpack_Small.GetInventoryID
// [0x00022102] 
struct ANBackpack_Small_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NBotEnemy_Shrieker.Possess
// [0x00020802] ( FUNC_Event )
struct ANBotEnemy_Shrieker_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NCash.AnnouncePickup
// [0x00020002] 
struct ANCash_execAnnouncePickup_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NCash.DenyPickupQuery
// [0x00020002] 
struct ANCash_execDenyPickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NCash.GetInventoryDesc
// [0x00022102] 
struct ANCash_execGetInventoryDesc_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NCash.GetInventoryName
// [0x00022102] 
struct ANCash_execGetInventoryName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NCash.ConsumeItem
// [0x00020102] 
struct ANCash_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NCash.ShouldConsumeImmediately
// [0x00022102] 
struct ANCash_execShouldConsumeImmediately_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NCash.SetCash
// [0x00020102] 
struct ANCash_execSetCash_Parms
{
	int                                                NewAmount;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGameSettings.GetServerDescription
// [0x00020003] ( FUNC_Final )
struct UNetherGameSettings_execGetServerDescription_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherGameSettings.UpdateFromURL
// [0x00420002] 
struct UNetherGameSettings_execUpdateFromURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class AGameInfo*                                   Game;                                             		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  Description;                                      		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  RealDescription;                                  		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherGame.AddDefaultInventory
// [0x00020002] 
struct ANetherGame_execAddDefaultInventory_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGame.NeedPlayers
// [0x00020002] 
struct ANetherGame_execNeedPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherGame.BroadcastChatMessage
// [0x00024002] 
struct ANetherGame_execBroadcastChatMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                HexColor;                                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPlayerController*                  NetherPC;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.Killed
// [0x00020002] 
struct ANetherGame_execKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 KilledPlayer;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPlayerReplicationInfo*                 KillerPRI;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AUTPlayerReplicationInfo*                 KilledPRI;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FString                                  DeathMessage;                                     		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             DeathMessageColor;                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.RatePlayerStart
// [0x00020002] 
struct ANetherGame_execRatePlayerStart_Parms
{
	class APlayerStart*                                P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Team;                                             		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Player;                                           		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Rating;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// class ANetherPlayerStart*                       NStart;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             PlayersNearby;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             EnemiesNearby;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNoEnemies : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bNoPlayers : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherGame.SpawnDefaultPawnFor
// [0x00820002] 
struct ANetherGame_execSpawnDefaultPawnFor_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ANavigationPoint*                            StartSpot;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DefaultPlayerClass;                               		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 StartRotation;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// class APawn*                                    ResultPawn;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.ReduceDamage
// [0x00420002] 
struct ANetherGame_execReduceDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class APawn*                                       injured;                                          		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x002C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0034 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGame.RestartPlayer
// [0x00020002] 
struct ANetherGame_execRestartPlayer_Parms
{
	class AController*                                 aPlayer;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.SetGameType
// [0x00022802] ( FUNC_Event )
struct ANetherGame_eventSetGameType_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Portal;                                           		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherGame.PreBeginPlay
// [0x00020102] 
struct ANetherGame_execPreBeginPlay_Parms
{
};

// Function NetherGame.NetherGame.Logout
// [0x00020002] 
struct ANetherGame_execLogout_Parms
{
	class AController*                                 Exiting;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.PostLogin
// [0x00020802] ( FUNC_Event )
struct ANetherGame_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           NextHeartbeat;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.ServerHeartbeat
// [0x00020002] 
struct ANetherGame_execServerHeartbeat_Parms
{
};

// Function NetherGame.NetherGame.SendServerMessage
// [0x00020002] 
struct ANetherGame_execSendServerMessage_Parms
{
};

// Function NetherGame.NetherGame.ShutdownServer
// [0x00020002] 
struct ANetherGame_execShutdownServer_Parms
{
};

// Function NetherGame.NetherGame.PostBeginPlay
// [0x00020002] 
struct ANetherGame_execPostBeginPlay_Parms
{
};

// Function NetherGame.NetherGame.ForceKickPlayer
// [0x00020802] ( FUNC_Event )
struct ANetherGame_eventForceKickPlayer_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     KickReason;                                       		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherGame.SpawnClassOverrideDocuments
// [0x00020000] 
struct ANetherGame_execSpawnClassOverrideDocuments_Parms
{
};

// Function NetherGame.NetherGame.ReplicateStreamingStatus
// [0x00020000] 
struct ANetherGame_execReplicateStreamingStatus_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGame.Tick
// [0x00020802] ( FUNC_Event )
struct ANetherGame_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGame.PostBigMessageToAllPlayers
// [0x00020002] 
struct ANetherGame_execPostBigMessageToAllPlayers_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class ANetherPlayerController*                  PC;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherGame.CanSpectate
// [0x00020002] 
struct ANetherGame_execCanSpectate_Parms
{
	class APlayerController*                           Viewer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      ViewTarget;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherGame.EndGame
// [0x00020000] 
struct ANetherGame_execEndGame_Parms
{
	class APlayerReplicationInfo*                      Winner;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Reason;                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherGame.ScoreFlag
// [0x00020000] 
struct ANetherGame_execScoreFlag_Parms
{
	class AController*                                 Scorer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AUTCTFFlag*                                  theFlag;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGame.ScoreKill
// [0x00020000] 
struct ANetherGame_execScoreKill_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Other;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherGame.CheckScore
// [0x00020000] 
struct ANetherGame_execCheckScore_Parms
{
	class APlayerReplicationInfo*                      Scorer;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherGame.CheckLives
// [0x00020000] 
struct ANetherGame_execCheckLives_Parms
{
};

// Function NetherGame.NDocument_CharacterInv.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANDocument_CharacterInv_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInv.ResetToDefault
// [0x00020002] 
struct ANDocument_CharacterInv_execResetToDefault_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_CharacterInv.SetCharacterTemplateID
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInv_execSetCharacterTemplateID_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Head;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Body;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Legs;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInv.GetItemCount
// [0x00020103] ( FUNC_Final )
struct ANDocument_CharacterInv_execGetItemCount_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInv.GetItemID
// [0x00020103] ( FUNC_Final )
struct ANDocument_CharacterInv_execGetItemID_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInv.GetQuickslotNumber
// [0x00020103] ( FUNC_Final )
struct ANDocument_CharacterInv_execGetQuickslotNumber_Parms
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_CharacterInv.SetQuickslotItem
// [0x00020003] ( FUNC_Final )
struct ANDocument_CharacterInv_execSetQuickslotItem_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NDocument_CharacterInv.SetSlot
// [0x00024003] ( FUNC_Final )
struct ANDocument_CharacterInv_execSetSlot_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemCount;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInv.ClearSlot
// [0x00024003] ( FUNC_Final )
struct ANDocument_CharacterInv_execClearSlot_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NDocument_CharacterInv.OnDocumentUpdate
// [0x00020802] ( FUNC_Event )
struct ANDocument_CharacterInv_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Slot;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   InvClass;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANDocument_PlayerInv_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NDocument_PlayerInv.GetAvailableTemplateSlots
// [0x00040003] ( FUNC_Final )
struct ANDocument_PlayerInv_execGetAvailableTemplateSlots_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.AddPurchasedCharacterTemplate
// [0x00020003] ( FUNC_Final )
struct ANDocument_PlayerInv_execAddPurchasedCharacterTemplate_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             SlotIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.OwnsCharacterTemplate
// [0x00020103] ( FUNC_Final )
struct ANDocument_PlayerInv_execOwnsCharacterTemplate_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.GetItemCount
// [0x00020103] ( FUNC_Final )
struct ANDocument_PlayerInv_execGetItemCount_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             SlotNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.GetItemID
// [0x00020103] ( FUNC_Final )
struct ANDocument_PlayerInv_execGetItemID_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             SlotNum;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.SetSlot
// [0x00024003] ( FUNC_Final )
struct ANDocument_PlayerInv_execSetSlot_Parms
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ItemCount;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             SlotNum;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NDocument_PlayerInv.ClearSlot
// [0x00024003] ( FUNC_Final )
struct ANDocument_PlayerInv_execClearSlot_Parms
{
	int                                                SlotNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceSave : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NDocument_PlayerInv.InitForPlayer
// [0x00020002] 
struct ANDocument_PlayerInv_execInitForPlayer_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CharacterIndex;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
struct UNetherThirdPersonCameraMode_eventAdjustViewOffset_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherThirdPersonCameraMode.ProcessViewRotation
// [0x00420102] 
struct UNetherThirdPersonCameraMode_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ViewTarget;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0018 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function NetherGame.NetherCameraMode_SocketIronsights.GetDesiredFOV
// [0x00020002] 
struct UNetherCameraMode_SocketIronsights_execGetDesiredFOV_Parms
{
	class APawn*                                       ViewedPawn;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTWeapon*                                IronsightWeapon;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherFrontendGame.PostLogin
// [0x00020802] ( FUNC_Event )
struct ANetherFrontendGame_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerControllerBase*              NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCAPUI.HideCAPScreen
// [0x00020002] 
struct UNetherCAPUI_execHideCAPScreen_Parms
{
};

// Function NetherGame.NetherCAPUI.ShowCAPScreen
// [0x00020002] 
struct UNetherCAPUI_execShowCAPScreen_Parms
{
};

// Function NetherGame.NetherCAPUI.AS_StartClosing
// [0x00020002] 
struct UNetherCAPUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherCAPUI.BuildOnComplete
// [0x00020000] 
struct UNetherCAPUI_execBuildOnComplete_Parms
{
};

// Function NetherGame.NetherCAPUI.LeftMouseDown
// [0x00020002] 
struct UNetherCAPUI_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxButton*                               Button;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCAPUI.CloseCAPScreen
// [0x00020002] 
struct UNetherCAPUI_execCloseCAPScreen_Parms
{
};

// Function NetherGame.NetherCAPUI.StartClosing
// [0x00020002] 
struct UNetherCAPUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherCAPUI.Init
// [0x00024002] 
struct UNetherCAPUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherCharacterUI.GetAbilityDescriptionString
// [0x00040003] ( FUNC_Final )
struct UNetherCharacterUI_execGetAbilityDescriptionString_Parms
{
	unsigned char                                      Attrib;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherCharacterUI.HideCharacterScreen
// [0x00020002] 
struct UNetherCharacterUI_execHideCharacterScreen_Parms
{
};

// Function NetherGame.NetherCharacterUI.ShowCharacterScreen
// [0x00020002] 
struct UNetherCharacterUI_execShowCharacterScreen_Parms
{
};

// Function NetherGame.NetherCharacterUI.AS_SetGlobalData
// [0x00020002] 
struct UNetherCharacterUI_execAS_SetGlobalData_Parms
{
	class UGFxObject*                                  Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherCharacterUI.AS_StartClosing
// [0x00020002] 
struct UNetherCharacterUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherCharacterUI.RefreshUI
// [0x00020002] 
struct UNetherCharacterUI_execRefreshUI_Parms
{
	// class UGFxObject*                               GlobalData;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxStatWidget*                           StatWidget;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCharacterUI.ShowToolTip
// [0x00020002] 
struct UNetherCharacterUI_execShowToolTip_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     DescriptionText;                                  		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// float                                           ToolTipPosX;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           ToolTipPosY;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCharacterUI.AbilityNodeClicked
// [0x00020002] 
struct UNetherCharacterUI_execAbilityNodeClicked_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxAbilityNode*                          Node;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCharacterUI.MinusButtonPressed
// [0x00020002] 
struct UNetherCharacterUI_execMinusButtonPressed_Parms
{
	class UGFxButton*                                  MinusButton;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxStatModifierButton*                   ModButton;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCharacterUI.PlusButtonPressed
// [0x00020002] 
struct UNetherCharacterUI_execPlusButtonPressed_Parms
{
	class UGFxButton*                                  PlusButton;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxStatModifierButton*                   ModButton;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCharacterUI.LeftMouseDown
// [0x00020002] 
struct UNetherCharacterUI_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherCharacterUI.StartClosing
// [0x00020002] 
struct UNetherCharacterUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherCharacterUI.CloseCharacter
// [0x00020002] 
struct UNetherCharacterUI_execCloseCharacter_Parms
{
};

// Function NetherGame.NetherCharacterUI.InitStatWidget
// [0x00020003] ( FUNC_Final )
struct UNetherCharacterUI_execInitStatWidget_Parms
{
	struct FString                                     WidgetPath;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      AttributeType;                                    		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxStatWidget*                           Widget;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             Level;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCharacterUI.Init
// [0x00024002] 
struct UNetherCharacterUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherCheatManager.SpeedGod
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execSpeedGod_Parms
{
	// class ANetherPlayerController*                  NetherPC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.ValidateTerritoryVolumes
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execValidateTerritoryVolumes_Parms
{
};

// Function NetherGame.NetherCheatManager.ToggleDebugPickupFinder
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execToggleDebugPickupFinder_Parms
{
	// class ANetherPlayerController*                  NetherPC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANPickupFactory*                          NetherPickupFactory;                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.KillNearbyEnemies
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execKillNearbyEnemies_Parms
{
	// class ANPawnEnemy*                              NetherEnemy;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANetherPawn*                              PlayerPawn;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.TakeDamage
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              PlayerPawn;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.GiveGold
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveGold_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherCheatManager.GiveCash
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveCash_Parms
{
	int                                                CashToGive;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugResetServerDocs
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugResetServerDocs_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.GiveAllWeapons_Ranged
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveAllWeapons_Ranged_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ANetherPawn*                              PlayerPawn;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.GiveAllWeapons_Melee
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveAllWeapons_Melee_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ANetherPawn*                              PlayerPawn;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.GiveAllWeapons
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveAllWeapons_Parms
{
};

// Function NetherGame.NetherCheatManager.GiveBiggestBackpack
// [0x00040003] ( FUNC_Final )
struct UNetherCheatManager_execGiveBiggestBackpack_Parms
{
	// class ANetherPlayerController*                  NetherPC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.GiveXP
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveXP_Parms
{
	int                                                XPToGive;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.Invisible
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execInvisible_Parms
{
	unsigned long                                      B : 1;                                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherCheatManager.ToggleAggroDisplay
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execToggleAggroDisplay_Parms
{
	unsigned long                                      bSight : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bSound : 1;                                       		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ANPawnEnemy*                              EnemyPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.ToggleGlobalInventory
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execToggleGlobalInventory_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.ToggleDebugAim
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execToggleDebugAim_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.ToggleDebugSpawn
// [0x00024202] ( FUNC_Exec )
struct UNetherCheatManager_execToggleDebugSpawn_Parms
{
	unsigned long                                      bPrintToScreen : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherCheatManager.GiveAmmo
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execGiveAmmo_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherInventoryManager*                  PlayerInvManager;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANWeap*                                   PlayerWeapon;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class APawn*                                    PlayerPawn;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.TossItemInFrontOfPlayer
// [0x00840003] ( FUNC_Final )
struct UNetherCheatManager_execTossItemInFrontOfPlayer_Parms
{
	class UClass*                                      InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  TossVel;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// class APawn*                                    PlayerPawn;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugSpawnPackages
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugSpawnPackages_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugSpawnAmmo
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugSpawnAmmo_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugSpawnWings
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugSpawnWings_Parms
{
};

// Function NetherGame.NetherCheatManager.DebugSpawnConsumables_Health
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugSpawnConsumables_Health_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugSpawnConsumables_Energy
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugSpawnConsumables_Energy_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugSpawnBackpacks
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugSpawnBackpacks_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugDropBackpack
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugDropBackpack_Parms
{
	// class ANetherInventoryManager*                  PlayerInvManager;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherCheatManager.DebugDropWeapon
// [0x00020202] ( FUNC_Exec )
struct UNetherCheatManager_execDebugDropWeapon_Parms
{
	// class ANetherPlayerController*                  WeaponDropper;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NHealthConsumable.GetItemType
// [0x00022102] 
struct ANHealthConsumable_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NHealthConsumable.IsQuickSlotable
// [0x00022102] 
struct ANHealthConsumable_execIsQuickSlotable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NHealthConsumable.SetSlotNumber
// [0x00020102] 
struct ANHealthConsumable_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NHealthConsumable.ConsumeItem
// [0x00020102] 
struct ANHealthConsumable_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPawn*                              NPawn;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NFoodConsumable.GetItemType
// [0x00022102] 
struct ANFoodConsumable_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFoodConsumable.ConsumeItem
// [0x00020102] 
struct ANFoodConsumable_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bConsumedItem : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class ANetherPawn*                              NPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPackage.SaveBetweenSessions
// [0x00022002] 
struct ANPackage_execSaveBetweenSessions_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.CanBeStoredInGlobalInventory
// [0x00022002] 
struct ANPackage_execCanBeStoredInGlobalInventory_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.AnnouncePickup
// [0x00020002] 
struct ANPackage_execAnnouncePickup_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPackage.GetInvClass
// [0x00022102] 
struct ANPackage_execGetInvClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.GetItemType
// [0x00022102] 
struct ANPackage_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.SetSlotNumber
// [0x00020102] 
struct ANPackage_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPackage.GetSlotNumber
// [0x00020102] 
struct ANPackage_execGetSlotNumber_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.GetInventoryCount
// [0x00020102] 
struct ANPackage_execGetInventoryCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.GetDefaultInventoryCount
// [0x00022102] 
struct ANPackage_execGetDefaultInventoryCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.GetInventoryID
// [0x00022102] 
struct ANPackage_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.GetWeight
// [0x00022102] 
struct ANPackage_execGetWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage.GetInventoryDesc
// [0x00022102] 
struct ANPackage_execGetInventoryDesc_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NPackage.GetInventoryName
// [0x00022102] 
struct ANPackage_execGetInventoryName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NPackage.DenyPickupQuery
// [0x00020002] 
struct ANPackage_execDenyPickupQuery_Parms
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWings.GetInventoryCount
// [0x00020102] 
struct ANWings_execGetInventoryCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWings.ItemRemovedFromInvManager
// [0x00020002] 
struct ANWings_execItemRemovedFromInvManager_Parms
{
};

// Function NetherGame.NWings.ConsumeItem
// [0x00020102] 
struct ANWings_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWings.SetWingsActive
// [0x00020002] 
struct ANWings_execSetWingsActive_Parms
{
	unsigned long                                      bActive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NWings.IsQuickSlotable
// [0x00022102] 
struct ANWings_execIsQuickSlotable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWings.IsDroppable
// [0x00022102] 
struct ANWings_execIsDroppable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWings.GetItemType
// [0x00022102] 
struct ANWings_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWings.UpdateAttachment
// [0x00020102] 
struct ANWings_execUpdateAttachment_Parms
{
	// class ANetherPawn*                              NP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NWings.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANWings_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPickupFactory.EnablePickup
// [0x00020102] 
struct ANPickupFactory_execEnablePickup_Parms
{
};

// Function NetherGame.NPickupFactory.PickedUpBy
// [0x00020002] 
struct ANPickupFactory_execPickedUpBy_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPickupFactory.SetRecycleTimer
// [0x00020002] 
struct ANPickupFactory_execSetRecycleTimer_Parms
{
	float                                              InTimerDuration;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPickupFactory.InitializeRecycle
// [0x00024003] ( FUNC_Final )
struct ANPickupFactory_execInitializeRecycle_Parms
{
	unsigned long                                      bWasPickedUp : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NPickupFactory.IsInUse
// [0x00020002] 
struct ANPickupFactory_execIsInUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPickupFactory.ReleaseFromUse
// [0x00020002] 
struct ANPickupFactory_execReleaseFromUse_Parms
{
};

// Function NetherGame.NPickupFactory.MarkForUse
// [0x00020002] 
struct ANPickupFactory_execMarkForUse_Parms
{
};

// Function NetherGame.NPickupFactory.GetWeight
// [0x00020102] 
struct ANPickupFactory_execGetWeight_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPickupFactory.SpawnCopyFor
// [0x00020002] 
struct ANPickupFactory_execSpawnCopyFor_Parms
{
	class APawn*                                       Recipient;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class AInventory*                               Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPickupFactory.InitializeContents
// [0x010201C2] 
struct ANPickupFactory_execInitializeContents_Parms
{
	int                                                ServerRandom;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ServerWeight;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NPickupFactory.PostBeginPlay
// [0x00020102] 
struct ANPickupFactory_execPostBeginPlay_Parms
{
};

// Function NetherGame.NPickupFactory.PawnHasSight
// [0x00020102] 
struct ANPickupFactory_execPawnHasSight_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPickupFactory.RefreshPickupFinderDebug
// [0x00020102] 
struct ANPickupFactory_execRefreshPickupFinderDebug_Parms
{
	// class ANetherPlayerController*                  NetherPC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NPickupFactory.InitPickupMeshEffects
// [0x00020902] ( FUNC_Event )
struct ANPickupFactory_eventInitPickupMeshEffects_Parms
{
};

// Function NetherGame.NPickupFactory.OnPickupRecycled
// [0x00120000] 
struct ANPickupFactory_execOnPickupRecycled_Parms
{
	class ANPickupFactory*                             NetherPickupFactory;                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasPickedUp : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NHealthConsumable_DoctorsBag.GetInventoryID
// [0x00022102] 
struct ANHealthConsumable_DoctorsBag_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NHealthConsumable_FirstAidKit.GetInventoryID
// [0x00022102] 
struct ANHealthConsumable_FirstAidKit_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NHealthConsumable_PainPills.GetInventoryID
// [0x00022102] 
struct ANHealthConsumable_PainPills_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NHealthConsumable_Bandages.GetInventoryID
// [0x00022102] 
struct ANHealthConsumable_Bandages_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFoodConsumable_EnergyBar.GetInventoryID
// [0x00022102] 
struct ANFoodConsumable_EnergyBar_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFoodConsumable_EnergyDrink.GetInventoryID
// [0x00022102] 
struct ANFoodConsumable_EnergyDrink_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFoodConsumable_Rations.GetInventoryID
// [0x00022102] 
struct ANFoodConsumable_Rations_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_WTOToSZ.GetInventoryID
// [0x00022102] 
struct ANPackage_WTOToSZ_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_WTOToRTO.GetInventoryID
// [0x00022102] 
struct ANPackage_WTOToRTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_WTOToMTO.GetInventoryID
// [0x00022102] 
struct ANPackage_WTOToMTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_SZToWTO.GetInventoryID
// [0x00022102] 
struct ANPackage_SZToWTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_SZToRTO.GetInventoryID
// [0x00022102] 
struct ANPackage_SZToRTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_RTOToWTO.GetInventoryID
// [0x00022102] 
struct ANPackage_RTOToWTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_RTOToSZ.GetInventoryID
// [0x00022102] 
struct ANPackage_RTOToSZ_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_RTOToMTO.GetInventoryID
// [0x00022102] 
struct ANPackage_RTOToMTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_MTOToWTO.GetInventoryID
// [0x00022102] 
struct ANPackage_MTOToWTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_MTOToSZ.GetInventoryID
// [0x00022102] 
struct ANPackage_MTOToSZ_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_MTOToRTO.GetInventoryID
// [0x00022102] 
struct ANPackage_MTOToRTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPackage_SZToMTO.GetInventoryID
// [0x00022102] 
struct ANPackage_SZToMTO_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPopupUI.RefreshButtonLayout
// [0x00840003] ( FUNC_Final )
struct UNetherPopupUI_execRefreshButtonLayout_Parms
{
	// class UGFxButton*                               Button;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FASDisplayInfo                           ButtonDI;                                         		// 0x0008 (0x002C) [0x0000000000000000]              
	// float                                           ButtonXOffset;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           ButtonYOffset;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPopupUI.ResizeBorder
// [0x00840003] ( FUNC_Final )
struct UNetherPopupUI_execResizeBorder_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewHeight;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           BorderDI;                                         		// 0x0008 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           BackgroundDI;                                     		// 0x0034 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherPopupUI.SetPosition
// [0x00020002] 
struct UNetherPopupUI_execSetPosition_Parms
{
	float                                              NewPosX;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewPosY;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPopupUI.AddButtonWithParams
// [0x00024002] 
struct UNetherPopupUI_execAddButtonWithParams_Parms
{
	struct FString                                     ButtonLabel;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             BA;                                               		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Params;                                           		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UGFxButton*                               Button;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPopupUI.AddButton
// [0x00020002] 
struct UNetherPopupUI_execAddButton_Parms
{
	struct FString                                     ButtonLabel;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             BA;                                               		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class UGFxButton*                               Button;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPopupUI.RefreshLayout
// [0x00820002] 
struct UNetherPopupUI_execRefreshLayout_Parms
{
	// struct FASDisplayInfo                           HeaderDI;                                         		// 0x0000 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           BodyDI;                                           		// 0x002C (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           ButtonsDI;                                        		// 0x0058 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherPopupUI.SetPopupID
// [0x00020002] 
struct UNetherPopupUI_execSetPopupID_Parms
{
	unsigned char                                      NewId;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPopupUI.GetID
// [0x00020002] 
struct UNetherPopupUI_execGetID_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherPopupUI.SetWidth
// [0x00020002] 
struct UNetherPopupUI_execSetWidth_Parms
{
	float                                              NewWidth;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPopupUI.SetBodyText
// [0x00020002] 
struct UNetherPopupUI_execSetBodyText_Parms
{
	struct FString                                     BodyText;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPopupUI.SetHeaderText
// [0x00020002] 
struct UNetherPopupUI_execSetHeaderText_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherPopupUI.AS_StartClosing
// [0x00020002] 
struct UNetherPopupUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherPopupUI.LeftMouseDownCallBack
// [0x00020002] 
struct UNetherPopupUI_execLeftMouseDownCallBack_Parms
{
	class UIGFxClickable*                              ClickableElement;                                 		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPopupUI.Tick
// [0x00820002] 
struct UNetherPopupUI_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           ContainerDI;                                      		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherPopupUI.StartClosing
// [0x00020002] 
struct UNetherPopupUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherPopupUI.ClosePopup
// [0x00020002] 
struct UNetherPopupUI_execClosePopup_Parms
{
};

// Function NetherGame.NetherPopupUI.Init
// [0x00024002] 
struct UNetherPopupUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NSeqEvent_SyncDayNightCycle.Activated
// [0x00020002] 
struct UNSeqEvent_SyncDayNightCycle_execActivated_Parms
{
};

// Function NetherGame.NetherFamilyInfo.GetFirstPersonArmsMaterial
// [0x00022002] 
struct UNetherFamilyInfo_execGetFirstPersonArmsMaterial_Parms
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInterface*                          ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherFamilyInfo.GetFirstPersonArms
// [0x00022002] 
struct UNetherFamilyInfo_execGetFirstPersonArms_Parms
{
	class USkeletalMesh*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherFrontendPlayerController.ClientLoggedIn
// [0x010201C2] 
struct ANetherFrontendPlayerController_execClientLoggedIn_Parms
{
	// class ANetherHUD*                               FrontendHUD;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerReplicationInfo.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANetherPlayerReplicationInfo_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NP;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerReplicationInfo.SeamlessTravelTo
// [0x00020002] 
struct ANetherPlayerReplicationInfo_execSeamlessTravelTo_Parms
{
	class APlayerReplicationInfo*                      NewPRI;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerReplicationInfo*             NPRI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerReplicationInfo.CopyProperties
// [0x00020002] 
struct ANetherPlayerReplicationInfo_execCopyProperties_Parms
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerReplicationInfo*             NPRI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerReplicationInfo.GetNFIClass
// [0x00020102] 
struct ANetherPlayerReplicationInfo_execGetNFIClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerDocument_Server.UpdateDocument
// [0x00020002] 
struct ANetherServerDocument_Server_execUpdateDocument_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocument_Server.OnDocumentUpdate
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_Server_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class ANetherGame*                              Game;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             CurrentTimeSeconds;                               		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             TimestampSeconds;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocument_Server.OnDocumentCreate
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_Server_eventOnDocumentCreate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherServerDocument_Server.GetDocumentTags
// [0x00420802] ( FUNC_Event )
struct ANetherServerDocument_Server_eventGetDocumentTags_Parms
{
	TArray< struct FString >                           DocumentTags;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FString                                  RegionString;                                     		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerDocument_Server.GetDocumentName
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_Server_eventGetDocumentName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerDocument_Store.SafeToSave
// [0x00020002] 
struct ANetherServerDocument_Store_execSafeToSave_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjectiveManager.GetObjectives
// [0x00420002] 
struct ANetherObjectiveManager_execGetObjectives_Parms
{
	TArray< class ANetherObjective* >                  OutObjectives;                                    		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherObjectiveManager.AddObjective
// [0x00020002] 
struct ANetherObjectiveManager_execAddObjective_Parms
{
	class ANetherObjective*                            NObjective;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjectiveManager.AmIAllowedToSpawn
// [0x00020002] 
struct ANetherObjectiveManager_execAmIAllowedToSpawn_Parms
{
	class ANetherTerritoryVolume*                      VolumeToCheck;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherObjective*                         TempObjective;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// class ANetherTerritoryVolume*                   TempVolume;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjectiveManager.InitializeObjectives
// [0x00020002] 
struct ANetherObjectiveManager_execInitializeObjectives_Parms
{
	// class ANetherObjective*                         TempObjective;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANetherObjective*                         SpawnedObjective;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjectiveManager.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ANetherObjectiveManager_eventSetInitialState_Parms
{
};

// Function NetherGame.NetherObjectiveManager.PostBeginPlay
// [0x00020002] 
struct ANetherObjectiveManager_execPostBeginPlay_Parms
{
};

// Function NetherGame.NetherPlayerStart.GetNearbyPlayerCount
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerStart_execGetNearbyPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   A;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             PlayersNearby;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerStart.GetNearbyEnemyCount
// [0x00020003] ( FUNC_Final )
struct ANetherPlayerStart_execGetNearbyEnemyCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   A;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             EnemiesNearby;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.GetCurrentMovie
// [0x00020002] 
struct UNetherMenuOverlayUI_execGetCurrentMovie_Parms
{
	class UNetherMoviePlayer*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.AS_StartClosing
// [0x00020002] 
struct UNetherMenuOverlayUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.InitMenuButton
// [0x00040003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execInitMenuButton_Parms
{
	struct FString                                     ButtonPath;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxButton*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxButton*                               MenuButton;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.MouseWheel
// [0x00020002] 
struct UNetherMenuOverlayUI_execMouseWheel_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.RightMouseUp
// [0x00020002] 
struct UNetherMenuOverlayUI_execRightMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.RightMouseDown
// [0x00020002] 
struct UNetherMenuOverlayUI_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.LeftMouseUp
// [0x00020002] 
struct UNetherMenuOverlayUI_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.MouseMoved
// [0x00020002] 
struct UNetherMenuOverlayUI_execMouseMoved_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.LeftMouseDown
// [0x00020002] 
struct UNetherMenuOverlayUI_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UIGFxClickable*                           ClickableElement;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.DeleteButtonConfirmed
// [0x00020002] 
struct UNetherMenuOverlayUI_execDeleteButtonConfirmed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnDeleteCharacter
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnDeleteCharacter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.DisablePlayButton
// [0x00020002] 
struct UNetherMenuOverlayUI_execDisablePlayButton_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.EnablePlayButton
// [0x00020002] 
struct UNetherMenuOverlayUI_execEnablePlayButton_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.PlayButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execPlayButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.ExitButtonConfirmed
// [0x00020002] 
struct UNetherMenuOverlayUI_execExitButtonConfirmed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.ExitButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execExitButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  BodyText;                                         		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ExitButtonText;                                   		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherMenuOverlayUI.ServerButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execServerButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.MapButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execMapButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.SettingsButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execSettingsButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.ItemsButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execItemsButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.CustomizeButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execCustomizeButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.CharacterButtonPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execCharacterButtonPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.CharacterSlotPressed
// [0x00020002] 
struct UNetherMenuOverlayUI_execCharacterSlotPressed_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxCharacterSlot*                        SlotButton;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.DeselectAllSlotWidgets
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execDeselectAllSlotWidgets_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.SelectSlotWidget
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execSelectSlotWidget_Parms
{
	class UGFxCharacterSlot*                           ToSelect;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.SelectButton
// [0x00020002] 
struct UNetherMenuOverlayUI_execSelectButton_Parms
{
	class UGFxButton*                                  ToSelect;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxButton*                               Button;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Highlight;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.IsSlaveMovieEnabled
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execIsSlaveMovieEnabled_Parms
{
	unsigned char                                      MovieType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.IsSlaveMovieOpen
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execIsSlaveMovieOpen_Parms
{
	unsigned char                                      MovieType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.UpdatePurchaseInfo
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execUpdatePurchaseInfo_Parms
{
	// float                                           TemplatePrice;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnablePurchasing : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UClass*                                   TemplateClass;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.RefreshUI
// [0x00020002] 
struct UNetherMenuOverlayUI_execRefreshUI_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.IsClosing
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execIsClosing_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.SetSlaveMovie
// [0x00040003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execSetSlaveMovie_Parms
{
	unsigned char                                      NewSlave;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.OpenSlaveMovie
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execOpenSlaveMovie_Parms
{
	unsigned char                                      NewSlave;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxButton*                               Button;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.OnPrevLegs
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnPrevLegs_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnNextLegs
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnNextLegs_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnPrevBody
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnPrevBody_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnNextBody
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnNextBody_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnPrevHead
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnPrevHead_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnNextHead
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnNextHead_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.GetFamilyInfo
// [0x00022002] 
struct UNetherMenuOverlayUI_execGetFamilyInfo_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnConfirmTemplatePurchase
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnConfirmTemplatePurchase_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnPurchaseTemplate
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnPurchaseTemplate_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   NFamilyInfo;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           ItemPrice;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.OnPrevTemplate
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnPrevTemplate_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.OnNextTemplate
// [0x00020002] 
struct UNetherMenuOverlayUI_execOnNextTemplate_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMenuOverlayUI.SetCharacterTemplate
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execSetCharacterTemplate_Parms
{
	int                                                TemplateID;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   TemplateClass;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             Max;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.CloseMenuOverlay
// [0x00020002] 
struct UNetherMenuOverlayUI_execCloseMenuOverlay_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.StartClosing
// [0x00020002] 
struct UNetherMenuOverlayUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.BuildOnComplete
// [0x00020002] 
struct UNetherMenuOverlayUI_execBuildOnComplete_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.Tick
// [0x00020002] 
struct UNetherMenuOverlayUI_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMenuOverlayUI.InitSlotWidget
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execInitSlotWidget_Parms
{
	struct FString                                     WidgetPath;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                SlotIndex;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxCharacterSlot*                        SlotWidget;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMenuOverlayUI.InitGameMenus
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execInitGameMenus_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.InitStartScreenMenus
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execInitStartScreenMenus_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.InitFrontendMenus
// [0x00020003] ( FUNC_Final )
struct UNetherMenuOverlayUI_execInitFrontendMenus_Parms
{
};

// Function NetherGame.NetherMenuOverlayUI.Init
// [0x00024002] 
struct UNetherMenuOverlayUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.IsValidUse
// [0x00020102] 
struct ANInteractiveObject_Barter_execIsValidUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject_Barter.UnTouch
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Barter_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Barter.Touch
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Barter_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Barter.CompleteTrade
// [0x00A200C2] 
struct ANInteractiveObject_Barter_execCompleteTrade_Parms
{
	class ANetherPlayerController*                     User;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FTradeItem                               TempTrade;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.OnUse
// [0x00020002] 
struct ANInteractiveObject_Barter_execOnUse_Parms
{
	class ANetherPlayerController*                     User;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Barter.PlayerHasNecessaryItems
// [0x00840003] ( FUNC_Final )
struct ANInteractiveObject_Barter_execPlayerHasNecessaryItems_Parms
{
	class ANetherPlayerController*                     User;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FTradeItem                               TempTrade;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.Tick
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Barter_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Barter.MakeTradeHeader
// [0x00020002] 
struct ANInteractiveObject_Barter_execMakeTradeHeader_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  HeaderString;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.CancelOverlappingNPawnPopup
// [0x00020002] 
struct ANInteractiveObject_Barter_execCancelOverlappingNPawnPopup_Parms
{
	// class ANetherPawn*                              NPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.UpdateOverlappingNPawnText
// [0x00024002] 
struct ANInteractiveObject_Barter_execUpdateOverlappingNPawnText_Parms
{
	struct FString                                     HeaderText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     PromptText;                                       		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class ANetherPawn*                              NPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.PickANewTrade
// [0x00020002] 
struct ANInteractiveObject_Barter_execPickANewTrade_Parms
{
	// int                                             RandomNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Barter.ClientClearMesh
// [0x010201C2] 
struct ANInteractiveObject_Barter_execClientClearMesh_Parms
{
};

// Function NetherGame.NInteractiveObject_Barter.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Barter_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NInteractiveObject.TimeLeftToUse
// [0x00020002] 
struct ANInteractiveObject_execTimeLeftToUse_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject.ReleaseFromUse
// [0x00020002] 
struct ANInteractiveObject_execReleaseFromUse_Parms
{
};

// Function NetherGame.NInteractiveObject.IsValidUse
// [0x00020102] 
struct ANInteractiveObject_execIsValidUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject.MarkForUse
// [0x00020002] 
struct ANInteractiveObject_execMarkForUse_Parms
{
	class ANetherPlayerController*                     User;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject.IsInUse
// [0x00020002] 
struct ANInteractiveObject_execIsInUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANInteractiveObject_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject.IsVolume
// [0x00020102] 
struct ANInteractiveObject_execIsVolume_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject.OnUse
// [0x00020000] 
struct ANInteractiveObject_execOnUse_Parms
{
	class ANetherPlayerController*                     User;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NFoodConsumable_SnackPackage.GetInventoryID
// [0x00022102] 
struct ANFoodConsumable_SnackPackage_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFoodConsumable_Canned.GetInventoryID
// [0x00022102] 
struct ANFoodConsumable_Canned_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFoodConsumable_Water.GetInventoryID
// [0x00022102] 
struct ANFoodConsumable_Water_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe_Head.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANWardrobe_Head_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe_Head.SetSlotNumber
// [0x00020102] 
struct ANWardrobe_Head_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe_Head.GetItemType
// [0x00022102] 
struct ANWardrobe_Head_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe_Arm.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANWardrobe_Arm_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe_Arm.SetSlotNumber
// [0x00020102] 
struct ANWardrobe_Arm_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NWardrobe_Arm.GetItemType
// [0x00022102] 
struct ANWardrobe_Arm_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_ChewingGum.GetInventoryID
// [0x00022102] 
struct ANMisc_ChewingGum_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_Cigarettes.GetInventoryID
// [0x00022102] 
struct ANMisc_Cigarettes_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_BagOfSalt.GetInventoryID
// [0x00022102] 
struct ANMisc_BagOfSalt_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_PlayingCards.GetInventoryID
// [0x00022102] 
struct ANMisc_PlayingCards_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_Bleach.GetInventoryID
// [0x00022102] 
struct ANMisc_Bleach_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_Cookware.GetInventoryID
// [0x00022102] 
struct ANMisc_Cookware_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_BoxedSoap.GetInventoryID
// [0x00022102] 
struct ANMisc_BoxedSoap_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_Toiletries.GetInventoryID
// [0x00022102] 
struct ANMisc_Toiletries_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_InsectRepellent.GetInventoryID
// [0x00022102] 
struct ANMisc_InsectRepellent_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NMisc_SewingKit.GetInventoryID
// [0x00022102] 
struct ANMisc_SewingKit_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NWardrobe_NetherSkin_Backpack.GetInventoryID
// [0x00022102] 
struct ANWardrobe_NetherSkin_Backpack_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable_SmokeGrenade.GetInventoryID
// [0x00022102] 
struct ANThrowableConsumable_SmokeGrenade_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable.GetItemType
// [0x00022102] 
struct ANThrowableConsumable_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable.IsQuickSlotable
// [0x00022102] 
struct ANThrowableConsumable_execIsQuickSlotable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable.SetSlotNumber
// [0x00020102] 
struct ANThrowableConsumable_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrowableConsumable.ConsumeItem
// [0x00820102] 
struct ANThrowableConsumable_execConsumeItem_Parms
{
	class APawn*                                       Consumer;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPawn*                              NPawn;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FRotator                                 ThrowRotation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ANThrownObject*                           ThrownObject;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NFlashlight.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANFlashlight_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NFlashlight.DropFrom
// [0x00020002] 
struct ANFlashlight_execDropFrom_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NFlashlight.CreateFlashLightLightComponent
// [0x00020102] 
struct ANFlashlight_execCreateFlashLightLightComponent_Parms
{
};

// Function NetherGame.NFlashlight.AttachTo
// [0x00820102] 
struct ANFlashlight_execAttachTo_Parms
{
	class ANetherPawn*                                 OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       AttachmentSocket;                                 		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  SocketPos;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NFlashlight.DetachFrom
// [0x00020102] 
struct ANFlashlight_execDetachFrom_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function NetherGame.NFlashlight.ItemRemovedFromInvManager
// [0x00020002] 
struct ANFlashlight_execItemRemovedFromInvManager_Parms
{
};

// Function NetherGame.NFlashlight.SetSlotNumber
// [0x00020102] 
struct ANFlashlight_execSetSlotNumber_Parms
{
	int                                                NewSlotNumber;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NFlashlight.IsDroppable
// [0x00022102] 
struct ANFlashlight_execIsDroppable_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFlashlight.GetItemType
// [0x00022102] 
struct ANFlashlight_execGetItemType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NFlashlight.ToggleFlashlight
// [0x00020000] 
struct ANFlashlight_execToggleFlashlight_Parms
{
};

// Function NetherGame.NThrowableConsumable_Flare.GetInventoryID
// [0x00022102] 
struct ANThrowableConsumable_Flare_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable_AggroBomb.GetInventoryID
// [0x00022102] 
struct ANThrowableConsumable_AggroBomb_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable_Flashbang.GetInventoryID
// [0x00022102] 
struct ANThrowableConsumable_Flashbang_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable_FragGrenade.GetInventoryID
// [0x00022102] 
struct ANThrowableConsumable_FragGrenade_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NThrowableConsumable_PortableAntiNetherDevice.GetInventoryID
// [0x00022102] 
struct ANThrowableConsumable_PortableAntiNetherDevice_execGetInventoryID_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.AS_StartClosing
// [0x00020002] 
struct UNetherInventoryUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherInventoryUI.StartClosing
// [0x00020002] 
struct UNetherInventoryUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherInventoryUI.CloseInventory
// [0x00020002] 
struct UNetherInventoryUI_execCloseInventory_Parms
{
};

// Function NetherGame.NetherInventoryUI.ShowBuyGoldButton
// [0x00020002] 
struct UNetherInventoryUI_execShowBuyGoldButton_Parms
{
};

// Function NetherGame.NetherInventoryUI.HideBuyGoldButton
// [0x00020002] 
struct UNetherInventoryUI_execHideBuyGoldButton_Parms
{
};

// Function NetherGame.NetherInventoryUI.ShowBuyButton
// [0x00020002] 
struct UNetherInventoryUI_execShowBuyButton_Parms
{
};

// Function NetherGame.NetherInventoryUI.HideBuyButton
// [0x00020002] 
struct UNetherInventoryUI_execHideBuyButton_Parms
{
};

// Function NetherGame.NetherInventoryUI.GlobalSlotsVisible
// [0x00020102] 
struct UNetherInventoryUI_execGlobalSlotsVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.StoreSlotsVisible
// [0x00020102] 
struct UNetherInventoryUI_execStoreSlotsVisible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.NothingSelected
// [0x00020002] 
struct UNetherInventoryUI_execNothingSelected_Parms
{
};

// Function NetherGame.NetherInventoryUI.StoreSlotSelected
// [0x00020002] 
struct UNetherInventoryUI_execStoreSlotSelected_Parms
{
	class UGFxItemSlot*                                Slot;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.BackPackTooHeavy
// [0x00020102] 
struct UNetherInventoryUI_execBackPackTooHeavy_Parms
{
};

// Function NetherGame.NetherInventoryUI.NotEnoughRoomInBackPack
// [0x00020102] 
struct UNetherInventoryUI_execNotEnoughRoomInBackPack_Parms
{
};

// Function NetherGame.NetherInventoryUI.ResetInventoryUI
// [0x00020102] 
struct UNetherInventoryUI_execResetInventoryUI_Parms
{
};

// Function NetherGame.NetherInventoryUI.PurchaseItem
// [0x00020102] 
struct UNetherInventoryUI_execPurchaseItem_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.AskToBuyGold
// [0x00020102] 
struct UNetherInventoryUI_execAskToBuyGold_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.AskToPurchaseItem
// [0x00020102] 
struct UNetherInventoryUI_execAskToPurchaseItem_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.SellItem
// [0x00020102] 
struct UNetherInventoryUI_execSellItem_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.AskToSellItem
// [0x00020102] 
struct UNetherInventoryUI_execAskToSellItem_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.GlobalInventoryButtonClicked
// [0x00820002] 
struct UNetherInventoryUI_execGlobalInventoryButtonClicked_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FASDisplayInfo                           ButtonDI;                                         		// 0x000C (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           SelectionBoxDI;                                   		// 0x0038 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.MarketplaceButtonClicked
// [0x00820002] 
struct UNetherInventoryUI_execMarketplaceButtonClicked_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FASDisplayInfo                           ButtonDI;                                         		// 0x000C (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           SelectionBoxDI;                                   		// 0x0038 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.SetCurrentItemToQuickSlot3
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execSetCurrentItemToQuickSlot3_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.SetCurrentItemToQuickSlot2
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execSetCurrentItemToQuickSlot2_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.SetCurrentItemToQuickSlot1
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execSetCurrentItemToQuickSlot1_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.SetCurrentItemToQuickSlot0
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execSetCurrentItemToQuickSlot0_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.RefreshFilters
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execRefreshFilters_Parms
{
};

// Function NetherGame.NetherInventoryUI.TurnOnAllFilters
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execTurnOnAllFilters_Parms
{
};

// Function NetherGame.NetherInventoryUI.TurnOffAllFilters
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execTurnOffAllFilters_Parms
{
};

// Function NetherGame.NetherInventoryUI.ToggleAccessoriesFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleAccessoriesFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ToggleFoodFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleFoodFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ToggleHealthFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleHealthFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ToggleMeleeFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleMeleeFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ToggleAmmoFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleAmmoFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ToggleRangedFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleRangedFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ToggleAllFilter
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execToggleAllFilter_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ConsumeCurrentlySelectedSlotItem
// [0x00020002] 
struct UNetherInventoryUI_execConsumeCurrentlySelectedSlotItem_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.ItemDroppedSuccessfully
// [0x00020002] 
struct UNetherInventoryUI_execItemDroppedSuccessfully_Parms
{
};

// Function NetherGame.NetherInventoryUI.UnloadCurrentlySelectedGun
// [0x00020002] 
struct UNetherInventoryUI_execUnloadCurrentlySelectedGun_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.DropCurrentlySelectedSlotItem
// [0x00020002] 
struct UNetherInventoryUI_execDropCurrentlySelectedSlotItem_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.SetCurrentlySelectedSlot
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execSetCurrentlySelectedSlot_Parms
{
	class UGFxItemSlot*                                Slot;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryUI.RightMouseDown
// [0x00020002] 
struct UNetherInventoryUI_execRightMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryUI.PositionButtonList
// [0x00442003] ( FUNC_Final )
struct UNetherInventoryUI_execPositionButtonList_Parms
{
	TArray< class UGFxButton* >                        ButtonList;                                       		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XBounds;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YBounds;                                          		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxButton*                               Button;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             ButtonX;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             ButtonY;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             ButtonGroupHeight;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.FilterSlots
// [0x00440003] ( FUNC_Final )
struct UNetherInventoryUI_execFilterSlots_Parms
{
	TArray< class UGFxItemSlot* >                      Slots;                                            		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UGFxItemSlot*                             Slot;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UGFxItem*                                 Item;                                             		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.TryToSwapItems
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execTryToSwapItems_Parms
{
	class UGFxItemSlot*                                SlotA;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxItemSlot*                                SlotB;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             SlotANum;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SlotBNum;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.KeyDown
// [0x00020002] 
struct UNetherInventoryUI_execKeyDown_Parms
{
	int                                                KeyCode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherInventoryUI.LeftMouseUp
// [0x00020002] 
struct UNetherInventoryUI_execLeftMouseUp_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxItemSlot*                             DestSlot;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.EquipRightArmAccessory
// [0x00020002] 
struct UNetherInventoryUI_execEquipRightArmAccessory_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.EquipLeftArmAccessory
// [0x00020002] 
struct UNetherInventoryUI_execEquipLeftArmAccessory_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.EquipHeadAccessory
// [0x00020002] 
struct UNetherInventoryUI_execEquipHeadAccessory_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.EquipMeleeWeapon
// [0x00020002] 
struct UNetherInventoryUI_execEquipMeleeWeapon_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.EquipSidearmWeapon
// [0x00020002] 
struct UNetherInventoryUI_execEquipSidearmWeapon_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.EquipRangedWeapon
// [0x00020002] 
struct UNetherInventoryUI_execEquipRangedWeapon_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.CheckIfMouseOverButtons
// [0x00080002] 
struct UNetherInventoryUI_execCheckIfMouseOverButtons_Parms
{
	class UGFxButton*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxButton*                               Button;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.LeftMouseDown
// [0x00820002] 
struct UNetherInventoryUI_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxItemSlot*                             Slot;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxButton*                               Button;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SlotGlobalPos;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.CheckIfMouseOverItemSlot
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execCheckIfMouseOverItemSlot_Parms
{
	class UGFxItemSlot*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.UpdateItemInfo
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execUpdateItemInfo_Parms
{
	class UGFxItemSlot*                                Slot;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   NInv;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  NameText;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             ItemType;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UGFxItem*                                 Item;                                             		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.FillGlobalSlotsWithItems
// [0x00040103] ( FUNC_Final )
struct UNetherInventoryUI_execFillGlobalSlotsWithItems_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxItem*                                 Item;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANDocument_PlayerInv*                     PlayerInv;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.FillStoreSlotsWithItems
// [0x00040103] ( FUNC_Final )
struct UNetherInventoryUI_execFillStoreSlotsWithItems_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxItem*                                 Item;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// TArray< class UClass* >                         NInventories;                                     		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UClass*                                   NInventory;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             Price;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.FillBackPackSlotsWithItems
// [0x00044003] ( FUNC_Final )
struct UNetherInventoryUI_execFillBackPackSlotsWithItems_Parms
{
	unsigned long                                      Silently : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ANDocument_CharacterInv*                  CharInv;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.AddItemToBackPack
// [0x00024003] ( FUNC_Final )
struct UNetherInventoryUI_execAddItemToBackPack_Parms
{
	int                                                InvID;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InvCount;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SlotNumber;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Silently : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxItem*                                 Item;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UGFxItemSlot*                             SlotToAddTo;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.MouseMoved
// [0x00820002] 
struct UNetherInventoryUI_execMouseMoved_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           CurrentlySelectedItemDI;                          		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.Tick
// [0x00020002] 
struct UNetherInventoryUI_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           Weight;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           MaxWeight;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.ClearTempButtons
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execClearTempButtons_Parms
{
	// class UGFxButton*                               Button;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.BuildButtonList
// [0x00440003] ( FUNC_Final )
struct UNetherInventoryUI_execBuildButtonList_Parms
{
	class UGFxItemSlot*                                ItemSlot;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UGFxButton* >                        ButtonList;                                       		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UGFxNetherObject*                            Parent;                                           		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxItem*                                 Item;                                             		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UClass*                                   Inv;                                              		// 0x002C (0x0008) [0x0000000000000000]              
	// class UGFxButton*                               Button;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.ResizeSlots
// [0x00846003] ( FUNC_Final )
struct UNetherInventoryUI_execResizeSlots_Parms
{
	TArray< class UGFxItemSlot* >                      Slots;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxScrollWindow*                            Window;                                           		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                RowLen;                                           		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                SlotPadding;                                      		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CoolRowLen;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             HiddenSlots;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           GroupWidth;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           GroupHeight;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           SlotWidth;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           SlotDI;                                           		// 0x003C (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.CreateBackpackSlots
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execCreateBackpackSlots_Parms
{
	int                                                NumSlotsIn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SlotsAlreadyMade;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxItemSlot*                             Slot;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.ClearSlots
// [0x00440003] ( FUNC_Final )
struct UNetherInventoryUI_execClearSlots_Parms
{
	class UGFxScrollWindow*                            Window;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UGFxItemSlot* >                      Slots;                                            		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// class UGFxItemSlot*                             Slot;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.RefreshGlobalSlots
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execRefreshGlobalSlots_Parms
{
	// class UGFxItemSlot*                             Slot;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.RefreshBackpackSlots
// [0x00020003] ( FUNC_Final )
struct UNetherInventoryUI_execRefreshBackpackSlots_Parms
{
	// class UGFxItemSlot*                             Slot;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.CreateStoreSlots
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execCreateStoreSlots_Parms
{
	int                                                NumSlotsIn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SlotsAlreadyMade;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxItemSlot*                             Slot;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.CreateGlobalSlots
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execCreateGlobalSlots_Parms
{
	int                                                NumSlotsIn;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             SlotsAlreadyMade;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UGFxItemSlot*                             Slot;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherInventoryUI.HideGlobalInventoryUI
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execHideGlobalInventoryUI_Parms
{
};

// Function NetherGame.NetherInventoryUI.SetCurrentItemToQuickSlot
// [0x00040103] ( FUNC_Final )
struct UNetherInventoryUI_execSetCurrentItemToQuickSlot_Parms
{
	int                                                SlotIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherInventoryUI.RefreshStatusBox
// [0x00040003] ( FUNC_Final )
struct UNetherInventoryUI_execRefreshStatusBox_Parms
{
};

// Function NetherGame.NetherInventoryUI.Init
// [0x00824002] 
struct UNetherInventoryUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FASDisplayInfo                           GlobalSlotGroupDI;                                		// 0x0008 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           SlotGroupDI;                                      		// 0x0034 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetTemplateSalePrice
// [0x00020103] ( FUNC_Final )
struct ANStore_execGetTemplateSalePrice_Parms
{
	class UClass*                                      TemplateClass;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetTemplatePremiumPrice
// [0x00020103] ( FUNC_Final )
struct ANStore_execGetTemplatePremiumPrice_Parms
{
	class UClass*                                      TemplateClass;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetTemplatePrice
// [0x00020103] ( FUNC_Final )
struct ANStore_execGetTemplatePrice_Parms
{
	class UClass*                                      TemplateClass;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetInventorySalePrice
// [0x00020103] ( FUNC_Final )
struct ANStore_execGetInventorySalePrice_Parms
{
	class UClass*                                      InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetInventoryPremiumPrice
// [0x00020103] ( FUNC_Final )
struct ANStore_execGetInventoryPremiumPrice_Parms
{
	class UClass*                                      InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetInventoryPrice
// [0x00020103] ( FUNC_Final )
struct ANStore_execGetInventoryPrice_Parms
{
	class UClass*                                      InvClass;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.GetStoreItems
// [0x00420103] ( FUNC_Final )
struct ANStore_execGetStoreItems_Parms
{
	TArray< class UClass* >                            Items;                                            		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NStore.SetControllerOwner
// [0x00020103] ( FUNC_Final )
struct ANStore_execSetControllerOwner_Parms
{
	class ANetherPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NStore.SetupItemsFromStoreDoc
// [0x00020103] ( FUNC_Final )
struct ANStore_execSetupItemsFromStoreDoc_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_SoundBox.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANInteractiveObject_SoundBox_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_SoundBox.MarkAsRepaired
// [0x00020002] 
struct ANInteractiveObject_SoundBox_execMarkAsRepaired_Parms
{
};

// Function NetherGame.NInteractiveObject_SoundBox.Tick
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_SoundBox_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_SoundBox.ReleaseFromUse
// [0x00020002] 
struct ANInteractiveObject_SoundBox_execReleaseFromUse_Parms
{
};

// Function NetherGame.NInteractiveObject_SoundBox.IsValidUse
// [0x00020102] 
struct ANInteractiveObject_SoundBox_execIsValidUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject_SoundBox.ResetObj
// [0x00020002] 
struct ANInteractiveObject_SoundBox_execResetObj_Parms
{
};

// Function NetherGame.NInteractiveObject_SoundBox.TimeLeftToUse
// [0x00020002] 
struct ANInteractiveObject_SoundBox_execTimeLeftToUse_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPlayerPreviewMesh.AttachCAPItem
// [0x00040003] ( FUNC_Final )
struct ANPlayerPreviewMesh_execAttachCAPItem_Parms
{
	int                                                SlotID;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ADynamicSMActor*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UClass*                                   CAPItemClass;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	// class ADynamicSMActor*                          CAPItem;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UStaticMesh*                              WardrobeMesh;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// int                                             ItemId;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPlayerPreviewMesh.SetTemplateMesh
// [0x00820003] ( FUNC_Final )
struct ANPlayerPreviewMesh_execSetTemplateMesh_Parms
{
	class UClass*                                      NFI;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Head;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Body;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Legs;                                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                UVOffsets;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bChangedMeshes : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NPlayerPreviewMesh.VerifyBodyMaterialInstance
// [0x00020102] 
struct ANPlayerPreviewMesh_execVerifyBodyMaterialInstance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NPlayerPreviewMesh.Cleanup
// [0x00020003] ( FUNC_Final )
struct ANPlayerPreviewMesh_execCleanup_Parms
{
};

// Function NetherGame.NPlayerPreviewMesh.Setup
// [0x00020003] ( FUNC_Final )
struct ANPlayerPreviewMesh_execSetup_Parms
{
};

// Function NetherGame.NPlayerPreviewMesh.GetSceneOffset
// [0x00020003] ( FUNC_Final )
struct ANPlayerPreviewMesh_execGetSceneOffset_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSavedMove.SetMoveFor
// [0x00020002] 
struct UNetherSavedMove_execSetMoveFor_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     newAccel;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InDoubleClick;                                    		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSavedMove.CanCombineWith
// [0x00020002] 
struct UNetherSavedMove_execCanCombineWith_Parms
{
	class USavedMove*                                  NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       inPawn;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxDelta;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSavedMove.Clear
// [0x00020002] 
struct UNetherSavedMove_execClear_Parms
{
};

// Function NetherGame.NetherSubwayVolume.UnTouch
// [0x00020802] ( FUNC_Event )
struct ANetherSubwayVolume_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSubwayVolume.Touch
// [0x00020802] ( FUNC_Event )
struct ANetherSubwayVolume_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSubwayVolume_Transition.UnTouch
// [0x00020802] ( FUNC_Event )
struct ANetherSubwayVolume_Transition_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSubwayVolume_Transition.Touch
// [0x00020802] ( FUNC_Event )
struct ANetherSubwayVolume_Transition_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherPlayerCamera.FindBestCameraType
// [0x00080002] 
struct ANetherPlayerCamera_execFindBestCameraType_Parms
{
	class AActor*                                      CameraTarget;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGameCameraBase*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameCameraBase*                          BestCam;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherPlayerInput.StartBreathing
// [0x00020302] ( FUNC_Exec )
struct UNetherPlayerInput_execStartBreathing_Parms
{
};

// Function NetherGame.NetherPlayerInput.StopBreathing
// [0x00020302] ( FUNC_Exec )
struct UNetherPlayerInput_execStopBreathing_Parms
{
};

// Function NetherGame.NetherPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
struct UNetherPlayerInput_execJump_Parms
{
};

// Function NetherGame.NetherPlayerInput.OnToggleCrawl
// [0x00020302] ( FUNC_Exec )
struct UNetherPlayerInput_execOnToggleCrawl_Parms
{
};

// Function NetherGame.NetherPlayerInput.Duck
// [0x00020302] ( FUNC_Exec )
struct UNetherPlayerInput_execDuck_Parms
{
};

// Function NetherGame.NetherMapUI.WorldToMap
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execWorldToMap_Parms
{
	struct FVector                                     World;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  MapLoc;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.AS_StartClosing
// [0x00020002] 
struct UNetherMapUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherMapUI.StartClosing
// [0x00020002] 
struct UNetherMapUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherMapUI.CloseMap
// [0x00020002] 
struct UNetherMapUI_execCloseMap_Parms
{
};

// Function NetherGame.NetherMapUI.Tick
// [0x00820002] 
struct UNetherMapUI_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           MapContainerDI;                                   		// 0x0004 (0x002C) [0x0000000000000000]              
	// class UGFxMapIcon*                              MapIcon;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// class UGFxObjectiveIcon*                        ObjectiveIcon;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bCorrectScale : 1;                                		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// class ANetherPlayerController*                  NPC;                                              		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.DrawDebugPoints
// [0x00C20002] 
struct UNetherMapUI_execDrawDebugPoints_Parms
{
	TArray< struct FDebugNetherMapData >               DebugMapData;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UGFxDebugPoint*                           DebugPoint;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FVector                                  MapLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// int                                             NumNewPointsNeeded;                               		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.AddSafeZonesTriggers
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execAddSafeZonesTriggers_Parms
{
	class UGFxObject*                                  Parent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxSafeZoneTriggerIcon*                  TriggerIcon;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANetherSafeZone_Trigger*                  NTrigger;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  MapPosition;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.AddSafeZones
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execAddSafeZones_Parms
{
	class UGFxObject*                                  Parent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxSafeZoneIcon*                         SafeZoneIcon;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANetherTerritoryVolume*                   NTerritory;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ANPointOfInterest*                        NPoint;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FVector                                  MapPosition;                                      		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.AddPointsOfInterest
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execAddPointsOfInterest_Parms
{
	class UGFxObject*                                  Parent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxPointOfInterestIcon*                  PointOfInterestIcon;                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANPointOfInterest*                        NPoint;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  MapLoc;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.SetupPlayerPointer
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execSetupPlayerPointer_Parms
{
	// class ANetherPlayerController*                  NPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANetherPawn*                              NPawn;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  MapLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FASDisplayInfo                           PlayerPointerDI;                                  		// 0x001C (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.AddObjectives
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execAddObjectives_Parms
{
	class UGFxObject*                                  Parent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxObjectiveIcon*                        ObjectiveIcon;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  MapLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// class ANetherObjective*                         NObjective;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ANetherPlayerController*                  NPC;                                              		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.MouseMoved
// [0x00820002] 
struct UNetherMapUI_execMouseMoved_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           MapOffsetDI;                                      		// 0x0008 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           MapContainerDI;                                   		// 0x0034 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.ConstrainMapOffset
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execConstrainMapOffset_Parms
{
	class UGFxNetherObject*                            BoundingArea;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           MapOffsetDI;                                      		// 0x0008 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           BoundingAreaDI;                                   		// 0x0034 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           MapContainerDI;                                   		// 0x0060 (0x002C) [0x0000000000000000]              
	// float                                           BoundingAreaWidth;                                		// 0x008C (0x0004) [0x0000000000000000]              
	// float                                           BoundingAreaHeight;                               		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           MapOffsetWidth;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	// float                                           MapOffsetHeight;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.SetMapOffset
// [0x00840003] ( FUNC_Final )
struct UNetherMapUI_execSetMapOffset_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASDisplayInfo                           MapOffsetDI;                                      		// 0x0008 (0x002C) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.Init
// [0x00824002] 
struct UNetherMapUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FASDisplayInfo                           MapContainerDI;                                   		// 0x0008 (0x002C) [0x0000000000000000]              
	// struct FASDisplayInfo                           PlayerPointerDI;                                  		// 0x0034 (0x002C) [0x0000000000000000]              
	// class UGFxButton*                               ZoomInButton;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	// class UGFxButton*                               ZoomOutButton;                                    		// 0x0068 (0x0008) [0x0000000000000000]              
	// class UNMapInfo*                                NetherInfo;                                       		// 0x0070 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherMapUI.MouseWheel
// [0x00020002] 
struct UNetherMapUI_execMouseWheel_Parms
{
	int                                                Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherMapUI.ZoomOut
// [0x00020002] 
struct UNetherMapUI_execZoomOut_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherMapUI.ZoomIn
// [0x00020002] 
struct UNetherMapUI_execZoomIn_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPointOfInterest.GetInitialRotation
// [0x00020103] ( FUNC_Final )
struct ANPointOfInterest_execGetInitialRotation_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPointOfInterest.GetFontSize
// [0x00020103] ( FUNC_Final )
struct ANPointOfInterest_execGetFontSize_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NPointOfInterest.GetPOIName
// [0x00020103] ( FUNC_Final )
struct ANPointOfInterest_execGetPOIName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  POIName;                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherSafeZone_Trigger.GetTriggerName
// [0x00020003] ( FUNC_Final )
struct ANetherSafeZone_Trigger_execGetTriggerName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherSafeZone_Trigger.UnTouch
// [0x00020802] ( FUNC_Event )
struct ANetherSafeZone_Trigger_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSafeZone_Trigger.Touch
// [0x00020802] ( FUNC_Event )
struct ANetherSafeZone_Trigger_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSafeZone_Trigger.TriggerInit
// [0x00020002] 
struct ANetherSafeZone_Trigger_execTriggerInit_Parms
{
	class ANetherTerritoryVolume*                      ParentVolume;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherSettingsUI.AS_StartClosing
// [0x00020002] 
struct UNetherSettingsUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherSettingsUI.StartClosing
// [0x00020002] 
struct UNetherSettingsUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherSettingsUI.CloseSettings
// [0x00020002] 
struct UNetherSettingsUI_execCloseSettings_Parms
{
};

// Function NetherGame.NetherSettingsUI.ApplyButtonClicked
// [0x00020002] 
struct UNetherSettingsUI_execApplyButtonClicked_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UIGFxOptionSelector*                      OptionSelector;                                   		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.CheckIfRespawnCheckboxEnabled
// [0x00020002] 
struct UNetherSettingsUI_execCheckIfRespawnCheckboxEnabled_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.RespawnCheckBoxClicked
// [0x00020002] 
struct UNetherSettingsUI_execRespawnCheckBoxClicked_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionHideChatMessages
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionHideChatMessages_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionHideChatMessages
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionHideChatMessages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionShowChatForNewMessages
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionShowChatForNewMessages_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionShowChatForNewMessages
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionShowChatForNewMessages_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionMuteVoiceChat
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionMuteVoiceChat_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionMuteVoiceChat
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionMuteVoiceChat_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionFOV
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionFOV_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionFOV
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionFOV_Parms
{
	float                                              NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionLightShafts
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionLightShafts_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionLightShafts
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionLightShafts_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionAntiAliasing
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionAntiAliasing_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionAntialiasing
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionAntialiasing_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionMotionBlur
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionMotionBlur_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionMotionBlur
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionMotionBlur_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionShadows
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionShadows_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionShadows
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionShadows_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionBloom
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionBloom_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionBloom
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionBloom_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionDynamicLights
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionDynamicLights_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionDynamicLights
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionDynamicLights_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionAO
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionAO_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionAO
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionAO_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionVSync
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionVSync_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionVSync
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionVSync_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionFullScreen
// [0x00040003] ( FUNC_Final )
struct UNetherSettingsUI_execGetOptionFullScreen_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionFullScreen
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionFullScreen_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionMouseYInvert
// [0x00040003] ( FUNC_Final )
struct UNetherSettingsUI_execSetOptionMouseYInvert_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bShouldInvert : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherSettingsUI.GetOptionMouseYInvert
// [0x00040003] ( FUNC_Final )
struct UNetherSettingsUI_execGetOptionMouseYInvert_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPlayerController*                  NPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ReturnVal;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.GetOptionDetailMode
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionDetailMode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionDetailMode
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionDetailMode_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetOptionViewDistance
// [0x00020002] 
struct UNetherSettingsUI_execGetOptionViewDistance_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetOptionViewDistance
// [0x00020002] 
struct UNetherSettingsUI_execSetOptionViewDistance_Parms
{
	float                                              OptionValue;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetResOption
// [0x00840003] ( FUNC_Final )
struct UNetherSettingsUI_execGetResOption_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                outRes;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                ResOption;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.SetResOption
// [0x00020002] 
struct UNetherSettingsUI_execSetResOption_Parms
{
	int                                                OptionIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  CommandString;                                    		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherSettingsUI.StartNewCollumn
// [0x00040003] ( FUNC_Final )
struct UNetherSettingsUI_execStartNewCollumn_Parms
{
};

// Function NetherGame.NetherSettingsUI.GetNextPos
// [0x00840003] ( FUNC_Final )
struct UNetherSettingsUI_execGetNextPos_Parms
{
	unsigned char                                      WidgetType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector2D                                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector2D                                pos;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.AddSlider
// [0x00024002] 
struct UNetherSettingsUI_execAddSlider_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              MinValue;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxValue;                                         		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SetOptionDelegate;                                		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             GetOptionDelegate;                                		// 0x0028 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector2D                                   pos;                                              		// 0x0038 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bApplyImmediately : 1;                            		// 0x0040 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UGFxSlider*                               Slider;                                           		// 0x0044 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               LabelText;                                        		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.AddDropDown
// [0x00420002] 
struct UNetherSettingsUI_execAddDropDown_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FString >                           OptionLabels;                                     		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SetOptionDelegate;                                		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             GetOptionDelegate;                                		// 0x0030 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector2D                                   pos;                                              		// 0x0040 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxDropDown*                             DropDown;                                         		// 0x0048 (0x0008) [0x0000000000000000]              
	// struct FString                                  OptionLabel;                                      		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGFxObject*                               LabelText;                                        		// 0x0060 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.AddCheckBox
// [0x00024002] 
struct UNetherSettingsUI_execAddCheckBox_Parms
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             SetOptionDelegate;                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             GetOptionDelegate;                                		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FVector2D                                   pos;                                              		// 0x0030 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bApplyImmediately : 1;                            		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UGFxCheckBox*                             CheckBox;                                         		// 0x003C (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               LabelText;                                        		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.Init
// [0x00824002] 
struct UNetherSettingsUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// float                                           OptionsGroupX;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           OptionsGroupY;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        DropDownOptionLabels;                             		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector2D                                ResOption;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherSettingsUI.SetFloat
// [0x00120000] 
struct UNetherSettingsUI_execSetFloat_Parms
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetFloat
// [0x00120000] 
struct UNetherSettingsUI_execGetFloat_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.GetInt
// [0x00120000] 
struct UNetherSettingsUI_execGetInt_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherSettingsUI.SetInt
// [0x00120000] 
struct UNetherSettingsUI_execSetInt_Parms
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerScreenUI.AS_StartClosing
// [0x00020002] 
struct UNetherServerScreenUI_execAS_StartClosing_Parms
{
};

// Function NetherGame.NetherServerScreenUI.OnServerSelect
// [0x00020002] 
struct UNetherServerScreenUI_execOnServerSelect_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGFxServerButton*                         ServerButton;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.LeftMouseDown
// [0x00020002] 
struct UNetherServerScreenUI_execLeftMouseDown_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UGFxButton*                               Button;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.StartClosing
// [0x00020002] 
struct UNetherServerScreenUI_execStartClosing_Parms
{
};

// Function NetherGame.NetherServerScreenUI.CloseServerScreen
// [0x00020002] 
struct UNetherServerScreenUI_execCloseServerScreen_Parms
{
};

// Function NetherGame.NetherServerScreenUI.OnCancelSearchComplete
// [0x00020002] 
struct UNetherServerScreenUI_execOnCancelSearchComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned char                                   CurrentAction;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.OnFindOnlineGamesComplete
// [0x00020003] ( FUNC_Final )
struct UNetherServerScreenUI_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherServerScreenUI.OnFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UNetherServerScreenUI_execOnFindOnlineGamesCompleteDelegate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bSearchCompleted : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherServerScreenUI.SubmitServerListQuery
// [0x00020003] ( FUNC_Final )
struct UNetherServerScreenUI_execSubmitServerListQuery_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherServerScreenUI.CancelQuery
// [0x00024003] ( FUNC_Final )
struct UNetherServerScreenUI_execCancelQuery_Parms
{
	unsigned char                                      DesiredCancelAction;                              		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherServerScreenUI.AllowJoinServer
// [0x00020003] ( FUNC_Final )
struct UNetherServerScreenUI_execAllowJoinServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherServerScreenUI.Cleanup
// [0x00020003] ( FUNC_Final )
struct UNetherServerScreenUI_execCleanup_Parms
{
	// class AUTPlayerController*                      PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.OnJoinGameComplete
// [0x00020002] 
struct UNetherServerScreenUI_execOnJoinGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccessful : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  URL;                                              		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UNetherGameSettings*                      CurGameSettings;                                  		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.BuildJoinURL
// [0x00020003] ( FUNC_Final )
struct UNetherServerScreenUI_execBuildJoinURL_Parms
{
	struct FString                                     ResolvedConnectionURL;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ConnectURL;                                       		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherServerScreenUI.ProcessJoin
// [0x00840003] ( FUNC_Final )
struct UNetherServerScreenUI_execProcessJoin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FOnlineGameSearchResult                  GameToJoin;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             ControllerId;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             CurrentIndex;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  CustomURL;                                        		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bJoinSuccess : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function NetherGame.NetherServerScreenUI.DisplayServerJoinError
// [0x00020002] 
struct UNetherServerScreenUI_execDisplayServerJoinError_Parms
{
};

// Function NetherGame.NetherServerScreenUI.JoinServer
// [0x00020003] ( FUNC_Final )
struct UNetherServerScreenUI_execJoinServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             CurrentIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.OnToggleHideFullServers
// [0x00020002] 
struct UNetherServerScreenUI_execOnToggleHideFullServers_Parms
{
	int                                                CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerScreenUI.OnToggleHideEmptyServers
// [0x00020002] 
struct UNetherServerScreenUI_execOnToggleHideEmptyServers_Parms
{
	int                                                CurrentValue;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerScreenUI.PopulateMberServers
// [0x00040003] ( FUNC_Final )
struct UNetherServerScreenUI_execPopulateMberServers_Parms
{
	// class UOnlineSubsystemNether*                   OSS;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerName;                                       		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  NumPlayersString;                                 		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MaxPlayersString;                                 		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ServerPlayersString;                              		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             NumPlayers;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             MaxPlayers;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             DividerIndex;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.RefreshServerUI
// [0x00020002] 
struct UNetherServerScreenUI_execRefreshServerUI_Parms
{
	class UGFxButton*                                  Button;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherServerScreenUI.PopulateMasterListServers
// [0x00040003] ( FUNC_Final )
struct UNetherServerScreenUI_execPopulateMasterListServers_Parms
{
	// class UOnlineGameSearch*                        LatestGameSearch;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UNetherGameSettings*                      NSettings;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.RefreshServerList
// [0x00024003] ( FUNC_Final )
struct UNetherServerScreenUI_execRefreshServerList_Parms
{
	int                                                InPlayerIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxResults;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UOnlineGameSearch*                        GameSearch;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.AddServerButton
// [0x00024003] ( FUNC_Final )
struct UNetherServerScreenUI_execAddServerButton_Parms
{
	struct FString                                     ServerName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                PlayerCount;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TotalPlayersAllowed;                              		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     CustomServerAddress;                              		// 0x0018 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// class UGFxServerButton*                         ServerEntry;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
	// float                                           ScrollListX;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           ScrollListY;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           ServerButtonX;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           ButtonWidth;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             buttonIndex;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.RefreshUI
// [0x00020002] 
struct UNetherServerScreenUI_execRefreshUI_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ScrollListX;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherServerScreenUI.Init
// [0x00024002] 
struct UNetherServerScreenUI_execInit_Parms
{
	class ULocalPlayer*                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UDataStoreClient*                         DSClient;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SpawnEnemies.ManageSpawns
// [0x00024002] 
struct ANetherObjective_SpawnEnemies_execManageSpawns_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EnemySet;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function NetherGame.NetherObjective_SpawnEnemies.SpawnAnEnemy
// [0x00020002] 
struct ANetherObjective_SpawnEnemies_execSpawnAnEnemy_Parms
{
	class ANetherTerritoryVolume*                      VolumeToSpawnIn;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                EnemySet;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           RandFloat;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           LastChances;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ANPawnEnemy*                              SpawnedEnemy;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SpawnEnemies.CheckPendingSpawns
// [0x00020002] 
struct ANetherObjective_SpawnEnemies_execCheckPendingSpawns_Parms
{
	int                                                EnemySet;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SpawnEnemies.AddPendingSpawn
// [0x00820002] 
struct ANetherObjective_SpawnEnemies_execAddPendingSpawn_Parms
{
	class ANetherTerritoryVolume*                      OwningVolume;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FPendingSpawn                            TempSpawn;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SpawnEnemies.UnTouched
// [0x00020002] 
struct ANetherObjective_SpawnEnemies_execUnTouched_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANPawnEnemy*                              ExitingPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SpawnEnemies.OnDeathNotifyEvent
// [0x00020002] 
struct ANetherObjective_SpawnEnemies_execOnDeathNotifyEvent_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjective_KillBoss.SpawnBoss
// [0x00020002] 
struct ANetherObjective_KillBoss_execSpawnBoss_Parms
{
};

// Function NetherGame.NetherObjective_KillBoss.OnBossDeathNotifyEvent
// [0x00020002] 
struct ANetherObjective_KillBoss_execOnBossDeathNotifyEvent_Parms
{
	class ANPawnEnemy*                                 Enemy;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjective_KillBoss.OnObjectiveEnded
// [0x00020002] 
struct ANetherObjective_KillBoss_execOnObjectiveEnded_Parms
{
	unsigned long                                      bWasCompleted : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherObjective_KillBoss.UnTouched
// [0x00020002] 
struct ANetherObjective_KillBoss_execUnTouched_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANPawnEnemy*                              ExitingPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_KillBoss.InitObjective
// [0x00020002] 
struct ANetherObjective_KillBoss_execInitObjective_Parms
{
};

// Function NetherGame.NetherObjective_LootDrop.GetPercentCompleteString
// [0x00020102] 
struct ANetherObjective_LootDrop_execGetPercentCompleteString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function NetherGame.NetherObjective_LootDrop.PickItemByChance
// [0x00040003] ( FUNC_Final )
struct ANetherObjective_LootDrop_execPickItemByChance_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           RandFloat;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           LastChances;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           ChancesTotal;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_LootDrop.SpawnLootBatch
// [0x00020002] 
struct ANetherObjective_LootDrop_execSpawnLootBatch_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumItemsToSpawn;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AInventory*                               TempInv;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ADroppedPickup*                           TempDroppedPickup;                                		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_LootDrop.InitObjective
// [0x00020002] 
struct ANetherObjective_LootDrop_execInitObjective_Parms
{
	// class ANLootDropPoint*                          LootDropPoint;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NLootDropPoint.StartSpawn
// [0x00020102] 
struct ANLootDropPoint_execStartSpawn_Parms
{
};

// Function NetherGame.NLootDropPoint.SpawnHelicopterParticle
// [0x00020102] 
struct ANLootDropPoint_execSpawnHelicopterParticle_Parms
{
};

// Function NetherGame.NLootDropPoint.GetSpawnVelocityVector
// [0x00820003] ( FUNC_Final )
struct ANLootDropPoint_execGetSpawnVelocityVector_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Direction;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NLootDropPoint.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANLootDropPoint_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjective_SafeZoneRepair.DebugWin
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execDebugWin_Parms
{
	// class ANInteractiveObject_SoundBox*             SoundBox;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SafeZoneRepair.TryActivate
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execTryActivate_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective_SafeZoneRepair.GoToActive
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execGoToActive_Parms
{
};

// Function NetherGame.NetherObjective_SafeZoneRepair.ImpendingAttack
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execImpendingAttack_Parms
{
};

// Function NetherGame.NetherObjective_SafeZoneRepair.AreAllObjsRepaired
// [0x00020003] ( FUNC_Final )
struct ANetherObjective_SafeZoneRepair_execAreAllObjsRepaired_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NetherObjective_SafeZoneRepair.DisableAllObjects
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execDisableAllObjects_Parms
{
	// class ANInteractiveObject_SoundBox*             SoundBox;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SafeZoneRepair.RepairAllObjects
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execRepairAllObjects_Parms
{
	// class ANInteractiveObject_SoundBox*             SoundBox;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SafeZoneRepair.ResetAllObjects
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execResetAllObjects_Parms
{
	// class ANInteractiveObject_SoundBox*             SoundBox;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SafeZoneRepair.OnObjectiveEnded
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execOnObjectiveEnded_Parms
{
	unsigned long                                      bWasCompleted : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherObjective_SafeZoneRepair.UnTouched
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execUnTouched_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ANPawnEnemy*                              ExitingPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SafeZoneRepair.Touched
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execTouched_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjective_SafeZoneRepair.SoundBoxRepaired
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execSoundBoxRepaired_Parms
{
};

// Function NetherGame.NetherObjective_SafeZoneRepair.InitObjective
// [0x00020002] 
struct ANetherObjective_SafeZoneRepair_execInitObjective_Parms
{
	// class ANInteractiveObject_SoundBox*             SoundBox;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherObjective_SafeZoneRepair.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ANetherObjective_SafeZoneRepair_eventSetInitialState_Parms
{
};

// Function NetherGame.NetherObjective_SafeZoneRepair.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ANetherObjective_SafeZoneRepair_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NetherObjective_SurgeRandomized.OnObjectiveEnded
// [0x00020002] 
struct ANetherObjective_SurgeRandomized_execOnObjectiveEnded_Parms
{
	unsigned long                                      bWasCompleted : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherObjective_SurgeRandomized.PickRandomVolume
// [0x00820002] 
struct ANetherObjective_SurgeRandomized_execPickRandomVolume_Parms
{
	// int                                             RandomNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FPossibleVolumeInfo                      TempVolumeInfo;                                   		// 0x0004 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function NetherGame.NetherThirdPersonCamera.UpdateCamera
// [0x00C20002] 
struct UNetherThirdPersonCamera_execUpdateCamera_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AGamePlayerCamera*                           CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTViewTarget                                OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FVector                                  VecToPawn;                                        		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x007C (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NetherThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
struct UNetherThirdPersonCamera_execFindBestCameraMode_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGameThirdPersonCameraMode*                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NetherThirdPersonCamera.Init
// [0x00020002] 
struct UNetherThirdPersonCamera_execInit_Parms
{
};

// Function NetherGame.NetherServerDocument_Test.OnDocumentUpdate
// [0x00020802] ( FUNC_Event )
struct ANetherServerDocument_Test_eventOnDocumentUpdate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function NetherGame.NetherThirdPersonCameraMode_Ironsight.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
struct UNetherThirdPersonCameraMode_Ironsight_eventAdjustViewOffset_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANetherPawn*                              NPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NInteractiveObject_Note.IsValidUse
// [0x00020102] 
struct ANInteractiveObject_Note_execIsValidUse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function NetherGame.NInteractiveObject_Note.UnTouch
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Note_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Note.Touch
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Note_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Note.Tick
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Note_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NInteractiveObject_Note.ClientClearMesh
// [0x010201C2] 
struct ANInteractiveObject_Note_execClientClearMesh_Parms
{
};

// Function NetherGame.NInteractiveObject_Note.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ANInteractiveObject_Note_eventPostBeginPlay_Parms
{
};

// Function NetherGame.NSeqAction_FindDayNightManager.Activated
// [0x00020802] ( FUNC_Event )
struct UNSeqAction_FindDayNightManager_eventActivated_Parms
{
};

// Function NetherGame.NThrownObject_AggroBomb.ExplosionFX
// [0x00820102] 
struct ANThrownObject_AggroBomb_execExplosionFX_Parms
{
	// struct FRotator                                 ZeroRotator;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_AggroBomb.Tick
// [0x00820902] ( FUNC_Event )
struct ANThrownObject_AggroBomb_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 TempRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_AggroBomb.AreaEffect
// [0x00020002] 
struct ANThrownObject_AggroBomb_execAreaEffect_Parms
{
	struct FHitPawn                                    InHitPawn;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function NetherGame.NThrownObject_Flare.Destroyed
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_Flare_eventDestroyed_Parms
{
};

// Function NetherGame.NThrownObject_Flare.Tick
// [0x00820902] ( FUNC_Event )
struct ANThrownObject_Flare_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 TempRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_Flare.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_Flare_eventSetInitialState_Parms
{
};

// Function NetherGame.NThrownObject_Flashbang.AreaEffect
// [0x00820002] 
struct ANThrownObject_Flashbang_execAreaEffect_Parms
{
	struct FHitPawn                                    InHitPawn;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  VectorFromGrenadeToPawn;                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnFacing;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           DotProduct;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_FragGrenade.AreaEffect
// [0x00020002] 
struct ANThrownObject_FragGrenade_execAreaEffect_Parms
{
	struct FHitPawn                                    InHitPawn;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             DamageTaken;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           SqrdDistance;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           SqrdFullDamageRadius;                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_PortableAntiNetherDevice.Destroyed
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_PortableAntiNetherDevice_eventDestroyed_Parms
{
};

// Function NetherGame.NThrownObject_PortableAntiNetherDevice.ExplosionFX
// [0x00020102] 
struct ANThrownObject_PortableAntiNetherDevice_execExplosionFX_Parms
{
};

// Function NetherGame.NThrownObject_PortableAntiNetherDevice.AreaEffect
// [0x00020002] 
struct ANThrownObject_PortableAntiNetherDevice_execAreaEffect_Parms
{
	struct FHitPawn                                    InHitPawn;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ANPawnEnemy*                              EnemyPawn;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_PortableAntiNetherDevice.Tick
// [0x00820902] ( FUNC_Event )
struct ANThrownObject_PortableAntiNetherDevice_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 TempRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_SmokeGrenade.Destroyed
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_SmokeGrenade_eventDestroyed_Parms
{
};

// Function NetherGame.NThrownObject_SmokeGrenade.Tick
// [0x00820902] ( FUNC_Event )
struct ANThrownObject_SmokeGrenade_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 TempRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function NetherGame.NThrownObject_SmokeGrenade.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ANThrownObject_SmokeGrenade_eventSetInitialState_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif