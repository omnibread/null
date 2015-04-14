/*
#############################################################################################
# Mortal Online (Unknown) SDK
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
	eLoginFailedReason_ServerBooting                   = 10,
	eLoginFailedReason_ServerRebooting                 = 11,
	eLoginFailedReason_Banned                          = 12,
	eLoginFailedReason_ActivateAccountFailed           = 13,
	eLoginFailedReason_DevMode                         = 14,
	eLoginFailedReason_BADCID                          = 15,
	eLoginFailedReason_Unknown                         = 16,
	eLoginFailedReason_MAX                             = 17
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Atlas.AtlasAttachment
// 0x0003 (0x02F4 - 0x02F1)
class AAtlasAttachment : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1468 ];

		return pClassPointer;
	};

};

UClass* AAtlasAttachment::pClassPointer = NULL;

// Class Atlas.AtlasBoundsShape
// 0x001C (0x01F4 - 0x01D8)
class UAtlasBoundsShape : public UPrimitiveComponent
{
public:
	class UMaterialInstanceConstant*                   m_TransparentColorInst;                           		// 0x01D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_eBoundType;                                     		// 0x01DC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsAABB : 1;                                    		// 0x01E0 (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      m_bIsSubtractive : 1;                             		// 0x01E0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              m_fLength;                                        		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fWidth;                                         		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fHeight;                                        		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fRadius;                                        		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1469 ];

		return pClassPointer;
	};

	void eventResetDefaults ( );
};

UClass* UAtlasBoundsShape::pClassPointer = NULL;

// Class Atlas.AtlasHUD
// 0x000C (0x057C - 0x0570)
class AAtlasHUD : public AHUD
{
public:
	TArray< struct FString >                           DefaultScenes;                                    		// 0x0570 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1470 ];

		return pClassPointer;
	};

	void eventOpenUI ( class UAtlasAvatarComponent* InNpcComp, TArray< struct FString > InKeys, TArray< struct FString > InValues );
	void DrawEngineHUD ( );
	void eventPostBeginPlay ( );
};

UClass* AAtlasHUD::pClassPointer = NULL;

// Class Atlas.AtlasPawn
// 0x001C (0x05D8 - 0x05BC)
class AAtlasPawn : public APawn
{
public:
	class UAtlasAvatarComponent*                       m_AvatarComponent;                                		// 0x05BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LastLocation;                                     		// 0x05C0 (0x000C) [0x0000000000000000]              
	unsigned long                                      bLastLocationValid : 1;                           		// 0x05CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStunPrediction : 1;                              		// 0x05CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bCharacterIsCreated : 1;                        		// 0x05CC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LastTimeStampUpdateLol;                           		// 0x05D0 (0x0004) [0x0000000000000000]              
	float                                              LastTimeStampUpdateAtlasLol;                      		// 0x05D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1471 ];

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
// 0x0003 (0x0370 - 0x036D)
class AAtlasStructureAvatar : public AAtlasAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1472 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* AAtlasStructureAvatar::pClassPointer = NULL;

// Class Atlas.AtlasProjectileAvatar
// 0x0000 (0x0370 - 0x0370)
class AAtlasProjectileAvatar : public AAtlasStructureAvatar
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1473 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
};

UClass* AAtlasProjectileAvatar::pClassPointer = NULL;

// Class Atlas.OnlineSubsystemAtlas
// 0x0358 (0x0468 - 0x0110)
class UOnlineSubsystemAtlas : public UOnlineSubsystem
{
public:
	struct FPointer                                    m_ClientApp;                                      		// 0x0110 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FScriptDelegate >                   m_ClientConnectCompleteDelegates;                 		// 0x0114 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientLoginCompleteDelegates;                   		// 0x0120 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ItemListChangedDelegates;                       		// 0x012C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_SkillListChangedDelegates;                      		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_EquipmentChangedDelegates;                      		// 0x0144 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_LootListChangedDelegates;                       		// 0x0150 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_VendorListChangedDelegates;                     		// 0x015C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientAvatarUpdatedDelegates;                   		// 0x0168 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientAvatarListUpdatedDelegates;               		// 0x0174 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientVersionCheckDelegates;                    		// 0x0180 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientNoShard;                                  		// 0x018C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_ClientServDown;                                 		// 0x0198 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_HouseTradeListChangedDelegates;                 		// 0x01A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   m_WorldObjectTradeListChangedDelegates;           		// 0x01B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           m_ItemNames;                                      		// 0x01BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      m_ClientLoginFailedReason;                        		// 0x01C8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_sLoginFailedString;                             		// 0x01CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                m_CharacterSlots;                                 		// 0x01D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     m_sReportTo;                                      		// 0x01DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                m_iReportInt;                                     		// 0x01E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnClientLoginServDown__Delegate;                		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientConnectComplete__Delegate;              		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientVersionMissmatch__Delegate;             		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientNoShard__Delegate;                      		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientLoginComplete__Delegate;                		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnItemListChanged__Delegate;                    		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSkillListChanged__Delegate;                   		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEquipmentChanged__Delegate;                   		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLootListChanged__Delegate;                    		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnVendorListChanged__Delegate;                  		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWorldObjectTradeListChanged__Delegate;        		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHouseTradeListChanged__Delegate;              		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarUpdated__Delegate;                		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAvatarListUpdated__Delegate;            		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __QuickbarUpdate__Delegate;                       		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0318 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0330 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0348 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0354 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0360 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0378 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0384 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0390 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x039C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x03A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x03C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x03CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x03D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x03E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x03F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x03FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0408 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0414 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0420 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;          		// 0x042C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOnlineGameComplete__Delegate;                 		// 0x0438 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;     		// 0x0444 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;     		// 0x0450 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                   		// 0x045C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1474 ];

		return pClassPointer;
	};

	void eventDrawDebugLineColor ( struct FVector vStart, struct FVector vEnd, int R, int G, int B );
	void eventDrawDebugLine ( struct FVector vStart, struct FVector vEnd );
	void AddQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate );
	void ClearQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate );
	bool RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	void ClearRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate );
	void AddRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingCompleteDelegate );
	bool MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName );
	void AddMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate );
	void ClearMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate );
	bool JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	void AddJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate );
	void ClearJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate );
	void OnQosStatusChanged ( int NumComplete, int NumTotal );
	void OnRecalculateSkillRatingComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnJoinMigratedOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnMigrateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId, float PercentComplete );
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
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
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
	void PickupInventoryItem ( int iBag, int iSlot );
	void PickupEquipedItem ( struct FString sEquipSlot );
	void PickupActionBar ( int iSlot );
	class UContentInfo* GetPickedContentInfo ( );
	int GetVendorNumItems ( );
	int GetLootNumItems ( );
	void GetVendorContentInfo ( int iSlot, class UContentInfo** Int, int* ItemCost, int* ItemQuantity, struct FString* ItemName, int* MaxQuantity );
	void GetQuestPlayerStatus ( struct FString sQuestGuid, unsigned char* bHasQuest, unsigned char* bQuestComplete );
	struct FString GetQuestDisplayName ( struct FString sQuestGuid );
	struct FString GetQuestName ( struct FString sQuestGuid );
	void GetQuestInfo ( struct FString sQuestGuid, struct FString* sQuestText, TArray< struct FString >* tQuestItemsName, TArray< class UContentInfo* >* tQuestItemsInfo );
	void GetLootContentInfo ( int iSlot, class UContentInfo** Info, struct FString* LootName, int* ItemQuantity );
	void GetInventoryContentInfo ( int iBag, int iSlot, class UContentInfo** Info, int* itemValue, int* ItemQuantity, unsigned char* bLocked );
	void GetEquipSlotContentInfo ( struct FString sEquipSlot, struct FPointer pPlayer, class UContentInfo** Info, unsigned char* bLocked );
	void GetActionBarContentInfo ( int iSlot, class UContentInfo** Info );
	struct FString GetPlayerName ( struct FPointer pPlayer );
	struct FPointer GetInspectedPlayer ( );
	void DestroyPickedItem ( int iQuantity );
	void CloseVendorSession ( );
	class UAtlasAvatarComponent* GetVendorComponent ( );
	class UAtlasAvatarComponent* GetTargetComponent ( );
	int GetCredits ( );
	void UpdateAvatar ( );
	void JoinGame ( struct FString hostIP );
	void CreateGame ( );
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
	void OnClientLoginServDown ( );
	struct FString GetBookInfoString ( );
	void UpdateCharacterList ( struct FString NameToRemove );
	void AddPetInfo ( struct FString sPetName, struct FString sPetType, int iPetLevel, int iPetLoyalty, int iPetHP, int iStableIndex, struct FString sState );
	void AddPylonInfo ( struct FString newPylonGuid, struct FString newPylonGuild, struct FVector newPylonLoc, int newPylonAOE, int newPylonAOETgt, int newPylonDef, int newPylonDefTgt, int newPylonAtt, int newPylonAttTgt, int newPylonTier, int newPylonUpkeep );
};

UClass* UOnlineSubsystemAtlas::pClassPointer = NULL;

// Class Atlas.AtlasAvatarComponent
// 0x002B (0x0080 - 0x0055)
class UAtlasAvatarComponent : public UActorComponent
{
public:
	struct FPointer                                    VfTable_Atlas__CClientEngineObj;                  		// 0x0058 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bMyPawnsCharacterIsCreated : 1;                   		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bClientAvatar : 1;                              		// 0x005C (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned long                                      m_bReadOnlyLinks : 1;                             		// 0x005C (0x0004) [0x0000000000002002] [0x00000004] ( CPF_Const | CPF_Transient )
	unsigned long                                      bOkToSendParam : 1;                               		// 0x005C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FPointer                                    m_pAvatar;                                        		// 0x0060 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UContentInfo*                                m_pAvatarContentInfo;                             		// 0x0064 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FPointer >                          m_ParamLinks;                                     		// 0x0068 (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FVisibleItemData >                  m_VisibleItems;                                   		// 0x0074 (0x000C) [0x0000000000482002]              ( CPF_Const | CPF_Transient | CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1475 ];

		return pClassPointer;
	};

	bool TraceFromLeftSocket ( );
	void TellBehavior ( struct FString BehaviorCmd );
};

UClass* UAtlasAvatarComponent::pClassPointer = NULL;

// Class Atlas.AtlasPlayerController
// 0x001C (0x0744 - 0x0728)
class AAtlasPlayerController : public APlayerController
{
public:
	class UAtlasPlayerInput*                           m_AtlasPlayerInput;                               		// 0x0728 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      m_PickedActorPressed;                             		// 0x072C (0x0004) [0x0000000000000000]              
	class AActor*                                      m_PickedActorReleased;                            		// 0x0730 (0x0004) [0x0000000000000000]              
	int                                                m_iTarget;                                        		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              m_fLastTargetTime;                                		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              m_fTargetListLifeTime;                            		// 0x073C (0x0004) [0x0000000000000000]              
	unsigned long                                      bGotRangedWeapon : 1;                             		// 0x0740 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMeleeMode : 1;                                   		// 0x0740 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGotShield : 1;                                   		// 0x0740 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRangedMode : 1;                                  		// 0x0740 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bGotFishingWeapon : 1;                            		// 0x0740 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFishingMode : 1;                                 		// 0x0740 (0x0004) [0x0000000000000000] [0x00000020] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1476 ];

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
// 0x0007 (0x0277 - 0x0270)
class UAtlasPlayerInput : public UPlayerInput
{
public:
	float                                              aTurnPawn;                                        		// 0x0270 (0x0004) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bMouseLook;                                       		// 0x0274 (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bMouseTurn;                                       		// 0x0275 (0x0001) [0x0000000000000004]              ( CPF_Input )
	unsigned char                                      bAutoMove;                                        		// 0x0276 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1477 ];

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
// 0x0000 (0x0068 - 0x0068)
class UAtlasActorFactoryGhostZone : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44254 ];

		return pClassPointer;
	};

};

UClass* UAtlasActorFactoryGhostZone::pClassPointer = NULL;

// Class Atlas.AtlasActorFactoryTeleportZone
// 0x0000 (0x0068 - 0x0068)
class UAtlasActorFactoryTeleportZone : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44256 ];

		return pClassPointer;
	};

};

UClass* UAtlasActorFactoryTeleportZone::pClassPointer = NULL;

// Class Atlas.AtlasActorFactoryWorldZone
// 0x0000 (0x0068 - 0x0068)
class UAtlasActorFactoryWorldZone : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44258 ];

		return pClassPointer;
	};

};

UClass* UAtlasActorFactoryWorldZone::pClassPointer = NULL;

// Class Atlas.AtlasGameInfo
// 0x0004 (0x04A0 - 0x049C)
class AAtlasGameInfo : public AGameInfo
{
public:
	unsigned long                                      m_bLocalDebug : 1;                                		// 0x049C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44295 ];

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
// 0x0000 (0x02E8 - 0x02E8)
class AAtlasZone : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44328 ];

		return pClassPointer;
	};

};

UClass* AAtlasZone::pClassPointer = NULL;

// Class Atlas.AtlasGhostZone
// 0x0000 (0x02E8 - 0x02E8)
class AAtlasGhostZone : public AAtlasZone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44330 ];

		return pClassPointer;
	};

};

UClass* AAtlasGhostZone::pClassPointer = NULL;

// Class Atlas.AtlasMarker
// 0x0000 (0x02EC - 0x02EC)
class AAtlasMarker : public AKeypoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44342 ];

		return pClassPointer;
	};

};

UClass* AAtlasMarker::pClassPointer = NULL;

// Class Atlas.AtlasPlayerCamera
// 0x000C (0x05D0 - 0x05C4)
class AAtlasPlayerCamera : public ACamera
{
public:
	float                                              FreeCamZoomAdjust;                                		// 0x05C4 (0x0004) [0x0000000000000000]              
	float                                              FreeCamMaxDist;                                   		// 0x05C8 (0x0004) [0x0000000000000000]              
	float                                              FreeCamMinDist;                                   		// 0x05CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44381 ];

		return pClassPointer;
	};

	void ZoomOut ( );
	void ZoomIn ( );
};

UClass* AAtlasPlayerCamera::pClassPointer = NULL;

// Class Atlas.AtlasTeleportZone
// 0x0000 (0x02E8 - 0x02E8)
class AAtlasTeleportZone : public AAtlasZone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44490 ];

		return pClassPointer;
	};

};

UClass* AAtlasTeleportZone::pClassPointer = NULL;

// Class Atlas.AtlasWorldZone
// 0x0000 (0x02E8 - 0x02E8)
class AAtlasWorldZone : public AAtlasZone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44492 ];

		return pClassPointer;
	};

};

UClass* AAtlasWorldZone::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif