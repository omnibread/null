/*
#############################################################################################
# Mortal Online (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0008 (0x00A4 - 0x009C)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x009C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    ChildProcHandle;                                  		// 0x00A0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1495 ];

		return pClassPointer;
	};

	void OnFacebookFriendsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void eventRequestFacebookFriends ( );
	void OnFacebookMeRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void eventRequestFacebookMeInfo ( );
	void FacebookRequestCallback ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void ProcessFacebookRequest ( struct FString Payload, int ResponseCode );
	void FacebookRequest ( struct FString GraphRequest );
	void Disconnect ( );
	bool IsAuthorized ( );
	bool Authorize ( );
	bool Init ( );
};

UClass* UFacebookWindows::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindows
// 0x0020 (0x0070 - 0x0050)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                          		// 0x0050 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FString                                     RequestVerb;                                      		// 0x0054 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    RequestURL;                                       		// 0x0060 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< unsigned char >                            Payload;                                          		// 0x0064 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1496 ];

		return pClassPointer;
	};

	bool ProcessRequest ( );
	class UHttpRequestInterface* SetHeader ( struct FString HeaderName, struct FString HeaderValue );
	class UHttpRequestInterface* SetContentAsString ( struct FString ContentString );
	class UHttpRequestInterface* SetContent ( TArray< unsigned char >* ContentPayload );
	class UHttpRequestInterface* SetURL ( struct FString URL );
	class UHttpRequestInterface* SetVerb ( struct FString Verb );
	struct FString GetVerb ( );
	void GetContent ( TArray< unsigned char >* Content );
	struct FString GetURL ( );
	int GetContentLength ( );
	struct FString GetContentType ( );
	struct FString GetURLParameter ( struct FString ParameterName );
	TArray< struct FString > GetHeaders ( );
	struct FString GetHeader ( struct FString HeaderName );
};

UClass* UHttpRequestWindows::pClassPointer = NULL;

// Class WinDrv.HttpResponseWindows
// 0x0010 (0x004C - 0x003C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                         		// 0x003C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< unsigned char >                            Payload;                                          		// 0x0040 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1497 ];

		return pClassPointer;
	};

	int GetResponseCode ( );
	struct FString GetContentAsString ( );
	void GetContent ( TArray< unsigned char >* Content );
	struct FString GetURL ( );
	int GetContentLength ( );
	struct FString GetContentType ( );
	struct FString GetURLParameter ( struct FString ParameterName );
	TArray< struct FString > GetHeaders ( );
	struct FString GetHeader ( struct FString HeaderName );
};

UClass* UHttpResponseWindows::pClassPointer = NULL;

// Class WinDrv.SwrveAnalyticsWindows
// 0x0038 (0x00A0 - 0x0068)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[ 0x38 ];                            		// 0x0068 (0x0038) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1498 ];

		return pClassPointer;
	};

};

UClass* USwrveAnalyticsWindows::pClassPointer = NULL;

// Class WinDrv.WindowsClient
// 0x018C (0x01DC - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0050 (0x014C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x019C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x2C ];                            		// 0x01A0 (0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x01CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0xC ];                             		// 0x01D0 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1499 ];

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0054 - 0x0054)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1500 ];

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindowsMcp
// 0x0018 (0x0088 - 0x0070)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                            		// 0x0070 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AppSecret;                                        		// 0x007C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40795 ];

		return pClassPointer;
	};

	bool ProcessRequest ( );
};

UClass* UHttpRequestWindowsMcp::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif