/*
#############################################################################################
# Mortal Online (1.71.00.18) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Atlas_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_IMAGE_DATABINDING_INDEX                            0
#define CONST_LABEL_DATABINDING_INDEX                            1
#define CONST_kMaxActionBarSlots                                 12
#define CONST_kMaxCharacters                                     6
#define CONST_kMaxHotkeyButtons                                  3
#define CONST_kMaxInvSlots                                       40
#define CONST_kMaxLootSlots                                      4
#define CONST_kMaxVendorSlots                                    10
#define CONST_kMaxQuestSlots                                     4
#define CONST_kMaxActions                                        5
#define CONST_kMaxEquipSlots                                     20

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Atlas.AtlasBoundsShape.EAtlasBoundType
/*enum EAtlasBoundType
{
	AtlasBT_None                                       = 0,
	AtlasBT_Box                                        = 1,
	AtlasBT_Cylinder                                   = 2,
	AtlasBT_Sphere                                     = 3,
	AtlasBT_MAX                                        = 4
};*/

// Enum Atlas.OnlineSubsystemAtlas.eLoginFailedReason
/*enum eLoginFailedReason
{
	eLoginFailedReason_ClientVersionMismatch           = 0,
	eLoginFailedReason_UserPasswordMismatch            = 1,
	eLoginFailedReason_UserNotFound                    = 2,
	eLoginFailedReason_DesignatedClusterNotOnline      = 3,
	eLoginFailedReason_ParamDefsHashMismatch           = 4,
	eLoginFailedReason_AlreadyLoggedIn                 = 5,
	eLoginFailedReason_ConnectionAttemptFailed         = 6,
	eLoginFailedReason_ConnectionLost                  = 7,
	eLoginFailedReason_LoginServerDown                 = 8,
	eLoginFailedReason_ServerFull                      = 9,
	eLoginFailedReason_Unknown                         = 10,
	eLoginFailedReason_MAX                             = 11
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Atlas.AtlasAttachment
// 0x0000 (0x02F4 - 0x02F4)
class AAtlasAttachment : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1439 ];

		return pClassPointer;
	};

};

UClass* AAtlasAttachment::pClassPointer = NULL;

// Class Atlas.AtlasBoundsShape
// 0x001C (0x01E4 - 0x01C8)
class UAtlasBoundsShape : public UPrimitiveComponent
{
public:
	class UMaterialInstanceConstant*                   m_TransparentColorInst;                           		// 0x01C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eBoundType;                                     		// 0x01CC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsAABB : 1;                                    		// 0x01D0 (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      m_bIsSubtractive : 1;                             		// 0x01D0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              m_fLength;                                        		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fWidth;                                         		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fHeight;                                        		// 0x01DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fRadius;                                        		// 0x01E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1440 ];

		return pClassPointer;
	};

	void eventResetDefaults ( );
};

UClass* UAtlasBoundsShape::pClassPointer = NULL;

// Class Atlas.AtlasHUD
// 0x0018 (0x058C - 0x0574)
class AAtlasHUD : public AHUD
{
public:
	TArray< struct FSceneMapping >                     HudSceneMap;                                      		// 0x0574 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DefaultScenes;                                    		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1441 ];

		return pClassPointer;
	};

	void ToggleHudScene ( class UUIScene* SceneToToggle, class ULocalPlayer* Player, unsigned long bCloseScene );
	void HideHudScene ( class UUIScene* SceneToHide, unsigned long bCloseScene );
	void ShowHudScene ( class UUIScene* SceneToShow, class ULocalPlayer* Player );
	class UUIScene* ResolveHudScene ( class UUIScene* Template, class ULocalPlayer* Player );
	void HudSceneDeactivated ( class UUIScene* DeactivatedScene );
	class UUIScene* eventResolveUI ( struct FString InUIName );
	void eventOpenUI ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues );
	void DrawEngineHUD ( );
	void eventPostBeginPlay ( );
};

UClass* AAtlasHUD::pClassPointer = NULL;

// Class Atlas.AtlasPawn
// 0x001C (0x05EC - 0x05D0)
class AAtlasPawn : public APawn
{
public:
	class UAtlasAvatarComponent*                       m_AvatarComponent;                                		// 0x05D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LastLocation;                                     		// 0x05D4 (0x000C) [0x0000000000000000]              
	unsigned long                                      bLastLocationValid : 1;                           		// 0x05E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStunPrediction : 1;                              		// 0x05E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCharacterIsCreated : 1;                        		// 0x05E0 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LastTimeStampUpdateLol;                           		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              LastTimeStampUpdateAtlasLol;                      		// 0x05E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1442 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy );
	void Tick ( float DeltaTime );
	struct FString GetAvatarID ( );
	struct FString GetAtlasName ( );
	bool AtlasUnSelect ( );
	bool AtlasSelect ( );
	bool AtlasUse ( class APlayerController* PC );
	bool IsTarget ( );
	void SetServerTarget ( );
	class UComponent* GetAtlasComponent ( );
};

UClass* AAtlasPawn::pClassPointer = NULL;

// Class Atlas.AtlasStructureAvatar
// 0x0000 (0x037D - 0x037D)
class AAtlasStructureAvatar : public AAtlasAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1443 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* AAtlasStructureAvatar::pClassPointer = NULL;

// Class Atlas.AtlasProjectileAvatar
// 0x0000 (0x037D - 0x037D)
class AAtlasProjectileAvatar : public AAtlasStructureAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1444 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* AAtlasProjectileAvatar::pClassPointer = NULL;

// Class Atlas.OnlineSubsystemAtlas
// 0x0330 (0x0410 - 0x00E0)
class UOnlineSubsystemAtlas : public UOnlineSubsystem
{
public:
	float                                              RightClickUICoolDown;                             		// 0x00E0 (0x0004) [0x0000000000000000]              
	struct FString                                     m_AtlasPath;                                      		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPointer                                    m_ClientApp;                                      		// 0x00F0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FAvatarSelectInfo >                 m_AvatarSelectInfos;                              		// 0x00F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientConnectCompleteDelegates;                 		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientLoginCompleteDelegates;                   		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ItemListChangedDelegates;                       		// 0x0118 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_SkillListChangedDelegates;                      		// 0x0124 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_EquipmentChangedDelegates;                      		// 0x0130 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_LootListChangedDelegates;                       		// 0x013C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_VendorListChangedDelegates;                     		// 0x0148 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientAvatarUpdatedDelegates;                   		// 0x0154 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientAvatarListUpdatedDelegates;               		// 0x0160 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientVersionCheckDelegates;                    		// 0x016C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientNoShard;                                  		// 0x0178 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientServDown;                                 		// 0x0184 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_HouseTradeListChangedDelegates;                 		// 0x0190 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_WorldObjectTradeListChangedDelegates;           		// 0x019C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_ItemNames;                                      		// 0x01A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UAtlasGameDataStore*                         m_AtlasGameDataStore;                             		// 0x01B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAtlasPlayerDataStore*                       m_AtlasPlayerDataStore;                           		// 0x01B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      m_ClientLoginFailedReason;                        		// 0x01BC (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_PatchAddress;                                   		// 0x01C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                m_CharacterSlots;                                 		// 0x01CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnClientLoginServDown__Delegate;                		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientConnectComplete__Delegate;              		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientVersionMissmatch__Delegate;             		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientNoShard__Delegate;                      		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientLoginComplete__Delegate;                		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnItemListChanged__Delegate;                    		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSkillListChanged__Delegate;                   		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEquipmentChanged__Delegate;                   		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLootListChanged__Delegate;                    		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnVendorListChanged__Delegate;                  		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWorldObjectTradeListChanged__Delegate;        		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHouseTradeListChanged__Delegate;              		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarUpdated__Delegate;                		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarListUpdated__Delegate;            		// 0x026C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __QuickbarUpdate__Delegate;                       		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x02F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0308 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0314 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0320 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x035C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0368 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0374 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0380 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x038C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0398 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x03A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x03BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x03C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x03E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x03EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x03F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0404 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1445 ];

		return pClassPointer;
	};

	void eventDrawDebugLine ( struct FVector vStart, struct FVector vEnd );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	struct FRotator GetPersistentData_Rotator ( struct FString AttributeName );
	struct FVector GetPersistentData_Vector ( struct FString AttributeName );
	void BindPlayerPawn ( class APawn* P );
	void AddDefaultInventory ( class APawn* P );
	void AnnounceHostReady ( );
	bool RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* GameInviteSettings );
	bool WriteArbitrationData ( );
	TArray< struct FOnlineArbitrationRegistrant > GetArbitratedPlayers ( struct FName SessionName );
	void ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool RegisterForArbitration ( struct FName SessionName );
	unsigned char GetOnlineGameState ( );
	void ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool EndOnlineGame ( struct FName SessionName );
	void ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool StartOnlineGame ( struct FName SessionName );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	void ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	class UOnlineGameSearch* GetGameSearch ( );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool DestroyOnlineGame ( struct FName SessionName );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char CanShowPresenceInformation ( unsigned char LocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char LocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char LocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char LocalUserNum );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	unsigned char CanPlayOnline ( unsigned char LocalUserNum );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	bool GetSkillIsActive ( int iSlot );
	float GetSkillValue ( int iSlot );
	struct FString GetSkillGroup ( int iSlot );
	void GetSkillContentInfo ( int iSlot, class UContentInfo** Info );
	struct FString GetSkillName ( int iSlot );
	int GetNumSkills ( );
	void PickupSkill ( int iSlot );
	bool GetSkillOpenInterface ( int iSlot, struct FString* SceneStr, int* GFXEnum );
	bool GetSkillTargetRequierment ( int iSlot );
	int GetSkillTargetTypeID ( int iSlot );
	void GetVendorCompactGuid ( int iSlot, struct FString* ItemGuid );
	struct FString GetInventoryItemName ( int iBag, int iSlot );
	int GetPickedInventorySlot ( );
	class UContentInfo* GetPickedContentInfoActionBar ( );
	void ServerMove ( float TimeStamp, struct FVector InAccel, struct FVector ClientLoc, unsigned char MoveFlags, unsigned char ClientRoll, int View );
	void DualServerMove ( float TimeStampA, struct FVector InAccelA, unsigned char PendingFlags, int ViewA, float TimeStampB, struct FVector InAccelB, struct FVector ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, int ViewB );
	void OldServerMove ( float OldTimeStamp, unsigned char OldAccelX, unsigned char OldAccelY, unsigned char OldAccelZ, unsigned char OldMoveFlags );
	void ProcessCommand ( struct FString CmdStr );
	void VendorBuy ( class UAtlasAvatarComponent* InComp, struct FGuid ItemGuid );
	void VendorBrowse ( class UAtlasAvatarComponent* InComp );
	void TargetSet ( class AAtlasAvatar* NewTarget );
	void QuestStartRequest ( class UAtlasAvatarComponent* InComp, struct FString QuestGuid );
	void QuestReturn ( class UAtlasAvatarComponent* InComp, struct FString QuestGuid );
	void AvatarUse ( class AAtlasAvatar* InAvatar );
	void UseInventoryItem ( int iBag, int iSlot );
	void UnEquipSlotItem ( struct FString sEquipSlot );
	void TakeLootItem ( int iSlot );
	void PlacePickedInInventory ( int iBag, int iSlot );
	void PlacePickedInEquipSlot ( struct FString sEquipSlot );
	void PlacePickedInActionBar ( int iSlot );
	void PickupInventoryItem ( int iBag, int iSlot );
	void PickupEquipedItem ( struct FString sEquipSlot );
	void PickupActionBar ( int iSlot );
	class UContentInfo* GetPickedContentInfo ( );
	int GetVendorNumItems ( );
	int GetLootNumItems ( );
	void GetVendorContentInfo ( int iSlot, class UContentInfo** Int, int* ItemCost, int* itemQuantity, struct FString* ItemName, int* MaxQuantity );
	void GetQuestPlayerStatus ( struct FString sQuestGuid, unsigned char* bHasQuest, unsigned char* bQuestComplete );
	struct FString GetQuestDisplayName ( struct FString sQuestGuid );
	struct FString GetQuestName ( struct FString sQuestGuid );
	void GetQuestInfo ( struct FString sQuestGuid, struct FString* sQuestText, TArray< struct FString >* tQuestItemsName, TArray< class UContentInfo* >* tQuestItemsInfo );
	void GetLootContentInfo ( int iSlot, class UContentInfo** Info, struct FString* LootName, int* itemQuantity );
	void GetInventoryContentInfo ( int iBag, int iSlot, class UContentInfo** Info, int* ItemValue, int* itemQuantity, unsigned char* bLocked );
	void GetEquipSlotContentInfo ( struct FString sEquipSlot, struct FPointer pPlayer, class UContentInfo** Info, unsigned char* bLocked );
	void GetActionBarContentInfo ( int iSlot, class UContentInfo** Info );
	struct FString GetPlayerName ( struct FPointer pPlayer );
	struct FPointer GetInspectedPlayer ( );
	void DestroyPickedItem ( int iQuantity );
	void ClearPickedItem ( );
	void CloseVendorSession ( );
	class UAtlasAvatarComponent* GetVendorComponent ( );
	class UAtlasAvatarComponent* GetTargetComponent ( );
	int GetCredits ( );
	void UpdateAvatar ( );
	void JoinGame ( struct FString hostIP );
	void CreateGame ( );
	void AtlasLogout ( );
	bool AtlasLogin ( struct FString UserName, struct FString Password );
	bool Init ( );
	int QueryPlayerInt ( struct FString Param, int Default );
	void ClearClientAvatarListUpdatedDelegate ( struct FScriptDelegate RemoveDelegate );
	void AddQuickbarUpdateFunction ( struct FScriptDelegate thefunction );
	void QuickbarUpdate ( );
	void AddClientLoginCompleteDelegate ( struct FScriptDelegate ClientLoginCompleteDelegate );
	void AddClientAvatarListUpdatedDelegate ( struct FScriptDelegate AddDelegate );
	void OnClientAvatarListUpdated ( int NumChars );
	void ClearClientAvatarUpdatedDelegate ( struct FScriptDelegate ClientAvatarUpdatedDelegate );
	void AddClientAvatarUpdatedDelegate ( struct FScriptDelegate ClientAvatarUpdatedDelegate );
	void OnClientAvatarUpdated ( struct FPointer pClient, struct FPointer pAvatar, TArray< struct FPointer > tParams );
	void ClearHouseTradeListChangedDelegate ( struct FScriptDelegate HouseTradeListChangedDelegate );
	void AddHouseTradeListChangedDelegate ( struct FScriptDelegate HouseTradeListChangedDelegate );
	void OnHouseTradeListChanged ( );
	void ClearWorldObjectTradeListChangedDelegate ( struct FScriptDelegate WorldObjectTradeListChangedDelegate );
	void AddWorldObjectTradeListChangedDelegate ( struct FScriptDelegate WorldObjectTradeListChangedDelegate );
	void OnWorldObjectTradeListChanged ( );
	void ClearVendorListChangedDelegate ( struct FScriptDelegate VendorListChangedDelegate );
	void AddVendorListChangedDelegate ( struct FScriptDelegate VendorListChangedDelegate );
	void OnVendorListChanged ( );
	void ClearLootListChangedDelegate ( struct FScriptDelegate LootListChangedDelegate );
	void AddLootListChangedDelegate ( struct FScriptDelegate LootListChangedDelegate );
	void OnLootListChanged ( );
	void ClearEquipmentChangedDelegate ( struct FScriptDelegate EquipmentChangedDelegate );
	void AddEquipmentChangedDelegate ( struct FScriptDelegate EquipmentChangedDelegate );
	void OnEquipmentChanged ( );
	void ClearSkillListChangedDelegate ( struct FScriptDelegate SkillListChangedDelegate );
	void AddSkillListChangedDelegate ( struct FScriptDelegate SkillListChangedDelegate );
	void OnSkillListChanged ( );
	void ClearItemListChangedDelegate ( struct FScriptDelegate ItemListChangedDelegate );
	void AddItemListChangedDelegate ( struct FScriptDelegate ItemListChangedDelegate );
	void OnItemListChanged ( TArray< struct FString > ItemNames );
	void eventClearClientLoginCompleteDelegateByIndex ( int Index );
	void ClearClientLoginCompleteDelegate ( struct FScriptDelegate ClientLoginCompleteDelegate );
	void OnClientLoginComplete ( unsigned long bWasSuccessful );
	void ClearClientNoShardDelegate ( struct FScriptDelegate newDelegate );
	void AddClientNoShardDelegate ( struct FScriptDelegate newDelegate );
	void OnClientNoShard ( );
	void ClearClientVersionMissmatchDelegate ( struct FScriptDelegate ClientVersionMissmatchDelegate );
	void AddClientVersionMissmatchDelegate ( struct FScriptDelegate ClientVersionMissmatchDelegate );
	void OnClientVersionMissmatch ( );
	void ClearClientConnectCompleteDelegate ( struct FScriptDelegate ClientConnectCompleteDelegate );
	void AddClientConnectCompleteDelegate ( struct FScriptDelegate ClientConnectCompleteDelegate );
	void OnClientConnectComplete ( unsigned long bWasSuccessful );
	void eventOnLogOutput ( struct FName logEvent, struct FString strOutput );
	void eventDynamicOpenScene ( struct FString SceneName );
	void OnClientLoginServDown ( );
	void eventRemTimer ( struct FString sID );
	void eventAddTimer ( struct FString sID, struct FString sName, struct FString sDesc, struct FString sIcon, float fTimer, struct FString sCancelDesc );
	struct FString GetBookInfoString ( );
	void UpdateCharacterList ( struct FString NameToRemove );
	void AddPetInfo ( struct FString sPetName, struct FString sPetType, int iPetLevel, int iPetLoyalty, int iPetHP, int iStableIndex, struct FString sState );
	void AddPylonInfo ( struct FString newPylonGuid, struct FString newPylonGuild, struct FVector newPylonLoc, int newPylonAOE, int newPylonAOETgt, int newPylonDef, int newPylonDefTgt, int newPylonAtt, int newPylonAttTgt, int newPylonTier, int newPylonUpkeep );
};

UClass* UOnlineSubsystemAtlas::pClassPointer = NULL;

// Class Atlas.SeqAct_Atlas_UpdateAvatar
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_Atlas_UpdateAvatar : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1446 ];

		return pClassPointer;
	};

	void eventUpdateAvatar ( );
};

UClass* USeqAct_Atlas_UpdateAvatar::pClassPointer = NULL;

// Class Atlas.UIAction_Atlas_Login
// 0x0024 (0x0110 - 0x00EC)
class UUIAction_Atlas_Login : public UUIAction
{
public:
	struct FString                                     m_Username;                                       		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_Password;                                       		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ConnectionTry;                                    		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ConnectionMax;                                    		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsDone : 1;                                      		// 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LoginSuccess : 1;                                 		// 0x010C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      LoginRespons : 1;                                 		// 0x010C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      ConnectionSuccess : 1;                            		// 0x010C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ConnectionRespons : 1;                            		// 0x010C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      ClientServerMismatch : 1;                         		// 0x010C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bResult : 1;                                      		// 0x010C (0x0004) [0x0000000000000000] [0x00000040] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1447 ];

		return pClassPointer;
	};

	void eventResetData ( );
	void OnConnectionComplete ( unsigned long bWasSuccessful );
	void OnLoginComplete ( unsigned long bWasSuccessful );
	void OnClientMismatch ( );
	void eventLogin ( );
};

UClass* UUIAction_Atlas_Login::pClassPointer = NULL;

// Class Atlas.UIAction_Atlas_SelectCharacter
// 0x000C (0x00F8 - 0x00EC)
class UUIAction_Atlas_SelectCharacter : public UUIAction
{
public:
	struct FString                                     m_CharacterName;                                  		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1448 ];

		return pClassPointer;
	};

};

UClass* UUIAction_Atlas_SelectCharacter::pClassPointer = NULL;

// Class Atlas.UIAtlas_ContentImage
// 0x0078 (0x04DC - 0x0464)
class UUIAtlas_ContentImage : public UUIObject
{
public:
	struct FPointer                                    VfTable_IUIDataStoreSubscriber;                   		// 0x0464 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IUIStringRenderer;                        		// 0x0468 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FUIDataStoreBinding                         ImageDataSource;                                  		// 0x046C (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FUIDataStoreBinding                         LabelDataSource;                                  		// 0x049C (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIComp_DrawImage*                           ImageComponent;                                   		// 0x04CC (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawString*                          LabelComponent;                                   		// 0x04D0 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	int                                                m_iValue;                                         		// 0x04D4 (0x0004) [0x0000000000000000]              
	int                                                m_sGuid;                                          		// 0x04D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1449 ];

		return pClassPointer;
	};

	void ClearBoundDataStores ( );
	void GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores );
	void NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex );
	bool RefreshSubscriberValue ( int BindingIndex );
	struct FString GetDataStoreBinding ( int BindingIndex );
	void SetDataStoreBinding ( struct FString MarkupText, int BindingIndex );
	void SetTextAlignment ( unsigned char Horizontal, unsigned char Vertical );
	void OnDroppedOnTarget ( class UUIScreenObject* Target, unsigned long bAccepted );
	struct FString GetLabel ( );
	void SetLabel ( struct FString NewLabel );
	void SetImage ( class USurface* NewImage );
	void eventInitScene ( );
};

UClass* UUIAtlas_ContentImage::pClassPointer = NULL;

// Class Atlas.UIAtlas_ContentButton
// 0x0000 (0x04DC - 0x04DC)
class UUIAtlas_ContentButton : public UUIAtlas_ContentImage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1450 ];

		return pClassPointer;
	};

};

UClass* UUIAtlas_ContentButton::pClassPointer = NULL;

// Class Atlas.UIAtlas_ContentSlot
// 0x0014 (0x0484 - 0x0470)
class UUIAtlas_ContentSlot : public UUIPanel
{
public:
	int                                                m_iValue;                                         		// 0x0470 (0x0004) [0x0000000000000000]              
	int                                                m_sGuid;                                          		// 0x0474 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sEquipSlot;                                     		// 0x0478 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1451 ];

		return pClassPointer;
	};

};

UClass* UUIAtlas_ContentSlot::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_BaseScene
// 0x0024 (0x05C0 - 0x059C)
class UUIScene_Atlas_BaseScene : public UUIScene
{
public:
	float                                              m_FadeInTime;                                     		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_FadeOutTime;                                    		// 0x05A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bTickWhenHidden : 1;                            		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bSceneReady : 1;                                		// 0x05A4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      m_DragInProgress : 1;                             		// 0x05A4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      m_NowDragInProgress : 1;                          		// 0x05A4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bLock : 1;                                        		// 0x05A4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCanBeClosed : 1;                                 		// 0x05A4 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              m_FadeDestination;                                		// 0x05A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_FadeTime;                                       		// 0x05AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIScreenObject*                             m_DragWidget;                                     		// 0x05B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIScreenObject*                             m_DragObject;                                     		// 0x05B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_MouseDownPosX;                                  		// 0x05B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_MouseDownPosY;                                  		// 0x05BC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1452 ];

		return pClassPointer;
	};

	class UUIScene* SwitchToScene ( class UUIScene* SceneToOpen );
	class UUIScene* StaticOpenScene ( class UUIScene* SceneToOpen );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void SendEvent ( struct FName InEvent, struct FString InType, struct FString InMsg );
	struct FAtlasItem ParseAtlasItem ( struct FString ItemData );
	bool ProcessInputAxis ( struct FInputEventParameters* EventParms );
	bool ProcessInputKey ( struct FInputEventParameters* EventParms );
	bool MouseInDragRegion ( );
	void ClearDragComponent ( class UUIScreenObject* InComp );
	void SetDragComponent ( class UUIScreenObject* InComp, class UUIScreenObject* InMoveObj );
	void eventFadeScene ( float TargetOpacity, float TargetTime );
	void eventFadeCompleted ( );
	void FadeOut ( );
	void FadeIn ( unsigned long bResetOpacity );
	bool IsFading ( );
	void eventSetUIKeyPairs ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues );
	void eventSetVisibilityNoFade ( unsigned long bVisible );
	void eventSetVisibility ( unsigned long bVisible );
	void eventInitScene ( );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	struct FString IntToHumanReadable ( int InVal );
	class AAtlasPlayerController* GetAtlasPlayerOwner ( int PlayerIndex );
};

UClass* UUIScene_Atlas_BaseScene::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_AccountLogin
// 0x0020 (0x05E0 - 0x05C0)
class UUIScene_Atlas_AccountLogin : public UUIScene_Atlas_BaseScene
{
public:
	class UUIScene*                                    m_CharacterSelectScene;                           		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  m_UserNameBox;                                    		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  m_PasswordBox;                                    		// 0x05C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_MessagePanel;                                   		// 0x05CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_LoginButton;                                    		// 0x05D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_ExitButton;                                     		// 0x05D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_ProgressLabel;                                  		// 0x05D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_LoginDelegateIndex;                             		// 0x05DC (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1453 ];

		return pClassPointer;
	};

	void EnableUI ( unsigned long Enabled );
	bool CancelLoginClicked ( class UUIScreenObject* EventTarget, int PlayerIndex );
	void eventOnLoginServerDown ( );
	void eventOnServerFull ( );
	void eventOnClusterNotOnline ( );
	void eventOnUnknownLoginFailure ( );
	void PatchClient ( );
	void eventOnVersionMismatch ( );
	void eventOnPasswordMismatch ( );
	void eventOnUserNotFound ( );
	void eventOnLoginSuccess ( );
	void OnLoginComplete ( unsigned long WasSuccessful );
	bool LoginClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool ExitGameClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void EnsureLogout ( );
	void eventInitScene ( );
};

UClass* UUIScene_Atlas_AccountLogin::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_CharacterSelect
// 0x0034 (0x05F4 - 0x05C0)
class UUIScene_Atlas_CharacterSelect : public UUIScene_Atlas_BaseScene
{
public:
	class UUIToggleButton*                             m_CharacterButton[ 0x6 ];                         		// 0x05C0 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_EnterGameButton;                                		// 0x05D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_CharacterImage;                                 		// 0x05DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIScene*                                    m_LoadingScene;                                   		// 0x05E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_bCharactersUpdated : 1;                         		// 0x05E4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     m_SelectedCharacter;                              		// 0x05E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1454 ];

		return pClassPointer;
	};

	void UpdateCharacters ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	bool LogoutClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool EnterGameClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	struct FString GetCharacterPic ( struct FString CharacterName );
	bool CharacterClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventInitScene ( );
	void EnterGame ( struct FString CharacterName );
};

UClass* UUIScene_Atlas_CharacterSelect::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_Inventory
// 0x0154 (0x0714 - 0x05C0)
class UUIScene_Atlas_Inventory : public UUIScene_Atlas_BaseScene
{
public:
	int                                                m_BagID;                                          		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FInvItemWidgetData                          m_InvSlot[ 0x28 ];                                		// 0x05C4 (0x0140) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSlots;                                       		// 0x0704 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_WindowPanel;                                    		// 0x0708 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_TitlePanel;                                     		// 0x070C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_CreditsLabel;                                   		// 0x0710 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1455 ];

		return pClassPointer;
	};

	void UpdatePage ( );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnItemOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnItemDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnItemDragBegin ( class UUIScreenObject* Source );
	bool OnItemClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void FadeIn ( unsigned long bResetOpacity );
	void eventInitScene ( );
	void DropItem ( int ItemNum );
};

UClass* UUIScene_Atlas_Inventory::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_Loot
// 0x0064 (0x0624 - 0x05C0)
class UUIScene_Atlas_Loot : public UUIScene_Atlas_BaseScene
{
public:
	struct FLootItemWidgetData                         m_LootSlot[ 0x4 ];                                		// 0x05C0 (0x0040) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSlots;                                       		// 0x0600 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_WindowPanel;                                    		// 0x0604 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_TitlePanel;                                     		// 0x0608 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_WindowCloseButton;                              		// 0x060C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_NextPageButton;                                 		// 0x0610 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_PrevPageButton;                                 		// 0x0614 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_CurrentPage;                                    		// 0x0618 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumPages;                                       		// 0x061C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_bUpdatePage : 1;                                		// 0x0620 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1456 ];

		return pClassPointer;
	};

	void UpdatePageButtons ( );
	void UpdatePage ( );
	int FindValidPage ( int iPage );
	bool IsValidPage ( int iPage );
	int GetNumItemsOnPage ( int iPage );
	bool OnLootCloseClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnLootClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool PrevButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void LootChanged ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
	void LeaveLootSession ( );
};

UClass* UUIScene_Atlas_Loot::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_NpcSpeak
// 0x02E8 (0x08A8 - 0x05C0)
class UUIScene_Atlas_NpcSpeak : public UUIScene_Atlas_BaseScene
{
public:
	struct FVendorItemWidgetData                       m_VendorSlot[ 0xA ];                              		// 0x05C0 (0x0168) [0x0000000000002000]              ( CPF_Transient )
	struct FVendorItemWidgetData                       m_QuestSlot[ 0x4 ];                               		// 0x0728 (0x0090) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_WindowPanel;                                    		// 0x07B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_TitlePanel;                                     		// 0x07BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_BrowsePanel;                                    		// 0x07C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_TalkPanel;                                      		// 0x07C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_QuestPanel;                                     		// 0x07C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_RewardPanel;                                    		// 0x07CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_WindowCloseButton;                              		// 0x07D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_WindowLabel;                                    		// 0x07D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_NextPageButton;                                 		// 0x07D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_PrevPageButton;                                 		// 0x07DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_PageLabel;                                      		// 0x07E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_TextLabel;                                      		// 0x07E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_CloseButton;                                    		// 0x07E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct UUIScene_Atlas_NpcSpeak_FActionWidgetData   m_Actions[ 0x5 ];                                 		// 0x07EC (0x0064) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUILabel*                                    m_QuestLabel;                                     		// 0x0850 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              m_QuestConfirmButton;                             		// 0x0854 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabelButton*                              m_QuestCancelButton;                              		// 0x0858 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_CurrentPage;                                    		// 0x085C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumPages;                                       		// 0x0860 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_bUpdatePage : 1;                                		// 0x0864 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FString >                           m_Keys;                                           		// 0x0868 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_Values;                                         		// 0x0874 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FAtlasItem >                        m_SellItems;                                      		// 0x0880 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UAtlasAvatarComponent*                       m_NpcComp;                                        		// 0x088C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	int                                                m_NumActions;                                     		// 0x0890 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSlots;                                       		// 0x0894 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumQuestSlots;                                  		// 0x0898 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_QuestGuid;                                      		// 0x089C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1457 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void UpdatePage ( );
	void eventSetUIKeyPairs ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues );
	bool OnVendorButtonRightClick ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool QuestConfirmClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool QuestCancelClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool PrevButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool NextButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	int FindActionButtonIndex ( class UUIScreenObject* InObject );
	void ClearActions ( );
	bool AddAction ( struct FString ActionValue, unsigned long bIsQuest );
	bool ActionButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void VendorChanged ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void eventInitScene ( );
};

UClass* UUIScene_Atlas_NpcSpeak::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_PaperDoll
// 0x00B0 (0x0670 - 0x05C0)
class UUIScene_Atlas_PaperDoll : public UUIScene_Atlas_BaseScene
{
public:
	struct FEquipItemWidgetData                        m_EquipSlot[ 0x14 ];                              		// 0x05C0 (0x00A0) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSlots;                                       		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_WindowPanel;                                    		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_TitlePanel;                                     		// 0x0668 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_CharacterLabel;                                 		// 0x066C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1458 ];

		return pClassPointer;
	};

	void UpdatePage ( );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnEquipOpenContextMenu ( class UUIObject* Sender, int PlayerIndex, class UUIContextMenu** CustomContextMenu );
	bool OnEquipDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnEquipDragBegin ( class UUIScreenObject* Source );
	bool OnEquipClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void EquipmentChanged ( );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void FadeIn ( unsigned long bResetOpacity );
	void eventInitScene ( );
};

UClass* UUIScene_Atlas_PaperDoll::pClassPointer = NULL;

// Class Atlas.AtlasDataStore
// 0x0000 (0x0078 - 0x0078)
class UAtlasDataStore : public UUIDataStore
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1459 ];

		return pClassPointer;
	};

};

UClass* UAtlasDataStore::pClassPointer = NULL;

// Class Atlas.AtlasGameDataStore
// 0x0000 (0x0078 - 0x0078)
class UAtlasGameDataStore : public UAtlasDataStore
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1460 ];

		return pClassPointer;
	};

};

UClass* UAtlasGameDataStore::pClassPointer = NULL;

// Class Atlas.AtlasPlayerDataStore
// 0x0058 (0x00D0 - 0x0078)
class UAtlasPlayerDataStore : public UAtlasDataStore
{
public:
	struct FString                                     m_PlayerName;                                     		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    m_PlayerIcon;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                m_PlayerCurHP;                                    		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                m_PlayerMaxHP;                                    		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                m_PlayerCurMP;                                    		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                m_PlayerMaxMP;                                    		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                m_PlayerCurSP;                                    		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                m_PlayerMaxSP;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                m_PlayerStrength;                                 		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                m_bHasBeenWelcomed;                               		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bHasTarget : 1;                                 		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_TargetName;                                     		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USurface*                                    m_TargetIcon;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	int                                                m_TargetCurHP;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                m_TargetMaxHP;                                    		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                Strength;                                         		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                Dextarity;                                        		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                Sword;                                            		// 0x00CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1461 ];

		return pClassPointer;
	};

	bool eventGetFieldValue ( struct FString FieldName, int ArrayIndex, struct FUIProviderScriptFieldValue* FieldValue );
};

UClass* UAtlasPlayerDataStore::pClassPointer = NULL;

// Class Atlas.AtlasAvatarComponent
// 0x002B (0x0084 - 0x0059)
class UAtlasAvatarComponent : public UActorComponent
{
public:
	struct FPointer                                    VfTable_Atlas__CClientEngineObj;                  		// 0x005C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bMyPawnsCharacterIsCreated : 1;                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bClientAvatar : 1;                              		// 0x0060 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      m_bReadOnlyLinks : 1;                             		// 0x0060 (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	unsigned long                                      bOkToSendParam : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FPointer                                    m_pAvatar;                                        		// 0x0064 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UContentInfo*                                m_pAvatarContentInfo;                             		// 0x0068 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FPointer >                          m_ParamLinks;                                     		// 0x006C (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FVisibleItemData >                  m_VisibleItems;                                   		// 0x0078 (0x000C) [0x0000000000482002]              ( CPF_Const | CPF_Transient | CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1462 ];

		return pClassPointer;
	};

	void TellBehavior ( struct FString BehaviorCmd );
};

UClass* UAtlasAvatarComponent::pClassPointer = NULL;

// Class Atlas.AtlasPlayerController
// 0x001C (0x06E4 - 0x06C8)
class AAtlasPlayerController : public AGamePlayerController
{
public:
	class UAtlasPlayerInput*                           m_AtlasPlayerInput;                               		// 0x06C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      m_PickedActorPressed;                             		// 0x06CC (0x0004) [0x0000000000000000]              
	class AActor*                                      m_PickedActorReleased;                            		// 0x06D0 (0x0004) [0x0000000000000000]              
	int                                                m_iTarget;                                        		// 0x06D4 (0x0004) [0x0000000000000000]              
	float                                              m_fLastTargetTime;                                		// 0x06D8 (0x0004) [0x0000000000000000]              
	float                                              m_fTargetListLifeTime;                            		// 0x06DC (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotRangedWeapon : 1;                             		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMeleeMode : 1;                                   		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGotShield : 1;                                   		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRangedMode : 1;                                  		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bGotFishingWeapon : 1;                            		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFishingMode : 1;                                 		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000020] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1463 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void TempMarker ( struct FName NewTag );
	void ListMarker ( );
	void GotoMarker ( struct FName DestTag );
	void SetPos ( float X, float Y, float Z );
	void ActionBarSlotgugu ( int iSlot );
	void ToggleUI ( );
	void ClusterCom ( );
	void ZoomIn ( );
	class AActor* PickViewportActor ( );
	void ClearPickedActors ( );
	void CallServerMove ( class USavedMove* NewMove, struct FVector ClientLoc, unsigned char ClientRoll, int View, class USavedMove* OldMove );
	bool ShouldReplicateMove ( );
	void UpdateRotation ( float DeltaTime );
	void eventInitInputSystem ( );
	void eventPostBeginPlay ( );
	void eventSetFishingOn ( float NewRange );
	void eventStartDelayTimer ( struct FString Why, float Time );
	void eventExitCombatMode ( );
	void ClientAvatarUpdated ( struct FPointer pClient, struct FPointer pAvatar, TArray< struct FPointer > tParams );
};

UClass* AAtlasPlayerController::pClassPointer = NULL;

// Class Atlas.AtlasPlayerInput
// 0x0007 (0x0177 - 0x0170)
class UAtlasPlayerInput : public UPlayerInput
{
public:
	float                                              aTurnPawn;                                        		// 0x0170 (0x0004) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bMouseLook;                                       		// 0x0174 (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bMouseTurn;                                       		// 0x0175 (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bAutoMove;                                        		// 0x0176 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1464 ];

		return pClassPointer;
	};

	void eventRightMouseButtonReleased ( );
	void eventLeftMouseButtonReleased ( );
	void eventRightMouseButtonPressed ( );
	void eventLeftMouseButtonPressed ( );
	void eventPlayerInput ( float DeltaTime );
	bool HasLookInput ( );
	bool HasMoveInput ( );
};

UClass* UAtlasPlayerInput::pClassPointer = NULL;

// Class Atlas.AtlasActorFactoryGhostZone
// 0x0000 (0x005C - 0x005C)
class UAtlasActorFactoryGhostZone : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40334 ];

		return pClassPointer;
	};

};

UClass* UAtlasActorFactoryGhostZone::pClassPointer = NULL;

// Class Atlas.AtlasActorFactoryTeleportZone
// 0x0000 (0x005C - 0x005C)
class UAtlasActorFactoryTeleportZone : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40336 ];

		return pClassPointer;
	};

};

UClass* UAtlasActorFactoryTeleportZone::pClassPointer = NULL;

// Class Atlas.AtlasActorFactoryWorldZone
// 0x0000 (0x005C - 0x005C)
class UAtlasActorFactoryWorldZone : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40338 ];

		return pClassPointer;
	};

};

UClass* UAtlasActorFactoryWorldZone::pClassPointer = NULL;

// Class Atlas.AtlasGameInfo
// 0x0004 (0x0484 - 0x0480)
class AAtlasGameInfo : public AGameInfo
{
public:
	unsigned long                                      m_bLocalDebug : 1;                                		// 0x0480 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40373 ];

		return pClassPointer;
	};

	void LocalDebug ( );
	void ClearLoadingScreen ( );
	class APawn* SpawnDefaultPawnAt ( class AController* NewPlayer, struct FVector SpawnLoc, struct FRotator SpawnRot );
	void RestartPlayer ( class AController* NewPlayer );
	void eventPostCommitMapChange ( );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	void eventPreBeginPlay ( );
};

UClass* AAtlasGameInfo::pClassPointer = NULL;

// Class Atlas.AtlasZone
// 0x0000 (0x02EC - 0x02EC)
class AAtlasZone : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40406 ];

		return pClassPointer;
	};

};

UClass* AAtlasZone::pClassPointer = NULL;

// Class Atlas.AtlasGhostZone
// 0x0000 (0x02EC - 0x02EC)
class AAtlasGhostZone : public AAtlasZone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40408 ];

		return pClassPointer;
	};

};

UClass* AAtlasGhostZone::pClassPointer = NULL;

// Class Atlas.AtlasMarker
// 0x0000 (0x02F0 - 0x02F0)
class AAtlasMarker : public AKeypoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40458 ];

		return pClassPointer;
	};

};

UClass* AAtlasMarker::pClassPointer = NULL;

// Class Atlas.AtlasPlayerCamera
// 0x000C (0x0544 - 0x0538)
class AAtlasPlayerCamera : public ACamera
{
public:
	float                                              FreeCamZoomAdjust;                                		// 0x0538 (0x0004) [0x0000000000000000]              
	float                                              FreeCamMaxDist;                                   		// 0x053C (0x0004) [0x0000000000000000]              
	float                                              FreeCamMinDist;                                   		// 0x0540 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40498 ];

		return pClassPointer;
	};

	void ZoomOut ( );
	void ZoomIn ( );
};

UClass* AAtlasPlayerCamera::pClassPointer = NULL;

// Class Atlas.AtlasTeleportZone
// 0x0000 (0x02EC - 0x02EC)
class AAtlasTeleportZone : public AAtlasZone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40638 ];

		return pClassPointer;
	};

};

UClass* AAtlasTeleportZone::pClassPointer = NULL;

// Class Atlas.AtlasWorldZone
// 0x0000 (0x02EC - 0x02EC)
class AAtlasWorldZone : public AAtlasZone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40640 ];

		return pClassPointer;
	};

};

UClass* AAtlasWorldZone::pClassPointer = NULL;

// Class Atlas.UIDataStore_Atlas_Resource
// 0x0004 (0x00C8 - 0x00C4)
class UUIDataStore_Atlas_Resource : public UUIDataStore_GameResource
{
public:
	unsigned long                                      QuitGameOnLoginClose : 1;                         		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41667 ];

		return pClassPointer;
	};

};

UClass* UUIDataStore_Atlas_Resource::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_ActionBar
// 0x0064 (0x0624 - 0x05C0)
class UUIScene_Atlas_ActionBar : public UUIScene_Atlas_BaseScene
{
public:
	struct UUIScene_Atlas_ActionBar_FActionWidgetData  m_ActionBarSlot[ 0xC ];                           		// 0x05C0 (0x0060) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_NumSlots;                                       		// 0x0620 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41816 ];

		return pClassPointer;
	};

	void UpdatePage ( );
	bool OnSlotDragDrop ( class UUIScreenObject* Target, class UUIScreenObject* Source );
	bool OnSlotClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	bool OnActionButtonDragBegin ( class UUIScreenObject* Source );
	bool OnActionButtonClicked ( class UUIScreenObject* EventObject, int PlayerIndex );
	void ItemListChanged ( TArray< struct FString > ItemData );
	void eventSceneDeactivated ( );
	void eventSceneActivated ( unsigned long bInitialActivation );
	void FadeIn ( unsigned long bResetOpacity );
	void eventInitScene ( );
};

UClass* UUIScene_Atlas_ActionBar::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_Chat
// 0x0048 (0x0608 - 0x05C0)
class UUIScene_Atlas_Chat : public UUIScene_Atlas_BaseScene
{
public:
	class UUIPanel*                                    m_WindowPanel;                                    		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIEditBox*                                  m_InputBox;                                       		// 0x05C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_ChatText;                                       		// 0x05C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIScrollFrame*                              m_ScrollFrame;                                    		// 0x05CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_bIsTyping : 1;                                  		// 0x05D0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              m_fLastUpdateTime;                                		// 0x05D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_FadeTimeout;                                    		// 0x05D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_InputTextType;                                  		// 0x05DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_ScrollBack;                                     		// 0x05E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FColor                                      m_TextColor;                                      		// 0x05F4 (0x0004) [0x0000000000000000]              
	TArray< struct FTextColorMap >                     m_TextColorMap;                                   		// 0x05F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iMaxScrollBackSize;                             		// 0x0604 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41906 ];

		return pClassPointer;
	};

	void eventUpdateScene ( float DeltaTime, class AWorldInfo* WorldInfo );
	void CancelTyping ( );
	void StartTyping ( struct FString InValue, struct FString InTextType );
	bool SetTextColorByType ( struct FString InTextType );
	struct FString GetTextColorCode ( );
	void SendEvent ( struct FName InEvent, struct FString InType, struct FString InMsg );
	void OutputTextLine ( struct FString InText, struct FString InTextType );
	bool OnChatSubmitText ( class UUIEditBox* Sender, int PlayerIndex );
	bool OnChatRawInputKey ( struct FInputEventParameters* EventParms );
	void HandleInputText ( struct FString InText );
	void ChatClientRegionCalculated ( );
	void eventInitScene ( );
};

UClass* UUIScene_Atlas_Chat::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_HotkeyBar
// 0x000C (0x05CC - 0x05C0)
class UUIScene_Atlas_HotkeyBar : public UUIScene_Atlas_BaseScene
{
public:
	class UUIDockTarget*                               m_HotkeyDock[ 0x3 ];                              		// 0x05C0 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41963 ];

		return pClassPointer;
	};

	void eventInitScene ( );
};

UClass* UUIScene_Atlas_HotkeyBar::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_Mail
// 0x0000 (0x05C0 - 0x05C0)
class UUIScene_Atlas_Mail : public UUIScene_Atlas_BaseScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42104 ];

		return pClassPointer;
	};

};

UClass* UUIScene_Atlas_Mail::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_Status
// 0x0034 (0x05F4 - 0x05C0)
class UUIScene_Atlas_Status : public UUIScene_Atlas_BaseScene
{
public:
	struct FUIDataStoreBinding                         m_HasTargetDataStore;                             		// 0x05C0 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIPanel*                                    m_TargetPanel;                                    		// 0x05F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42323 ];

		return pClassPointer;
	};

	void eventInitScene ( );
};

UClass* UUIScene_Atlas_Status::pClassPointer = NULL;

// Class Atlas.UIScene_Atlas_Trade
// 0x0000 (0x05C0 - 0x05C0)
class UUIScene_Atlas_Trade : public UUIScene_Atlas_BaseScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42329 ];

		return pClassPointer;
	};

};

UClass* UUIScene_Atlas_Trade::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif