/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: AkAudio_classes.h
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

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x00A4 - 0x009C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x009C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1433 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSound
// 0x000C (0x02A0 - 0x0294)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                     		// 0x0294 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0294 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	class UAkEvent*                                    PlayEvent;                                        		// 0x0298 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1434 ];

		return pClassPointer;
	};

};

UClass* AAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAudioDevice
// 0x0048 (0x00B0 - 0x0068)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0068 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1435 ];

		return pClassPointer;
	};

};

UClass* UAkAudioDevice::pClassPointer = NULL;

// Class AkAudio.AkComponent
// 0x001B (0x00A0 - 0x0085)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                         		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    AutoPlayEvent;                                    		// 0x0090 (0x0008) [0x0000000000000000]              
	int                                                GameObjectID;                                     		// 0x0098 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1436 ];

		return pClassPointer;
	};

};

UClass* UAkComponent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkEvent
// 0x0010 (0x00D0 - 0x00C0)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray< struct FAkEventTrackKey >                  AkEvents;                                         		// 0x00C0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1437 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00E8 - 0x00D8)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x00D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1438 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkRTPC::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0064 - 0x0060)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x0060 (0x0004) [0x0000000000000000]              

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

UClass* UInterpTrackInstAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1440 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkRTPC::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0150 - 0x0150)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1441 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkClearBanks::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0178 - 0x0168)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x0168 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWaitingCallback : 1;                             		// 0x0168 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UAkBank*                                     Bank;                                             		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Signal;                                           		// 0x0174 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1442 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkLoadBank::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostEvent
// 0x000C (0x0174 - 0x0168)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                           		// 0x0168 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAkEvent*                                    Event;                                            		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1443 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostEvent::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0160 - 0x0150)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1444 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostTrigger::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0180 - 0x0168)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0168 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x0178 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x017C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1445 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetRTPCValue::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0170 - 0x0150)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x0160 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1446 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetState::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0170 - 0x0150)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x0160 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1447 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetSwitch::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0150 - 0x0150)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

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

UClass* USeqAct_AkStartAmbientSound::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0150 - 0x0150)
class USeqAct_AkStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1449 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStopAll::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif