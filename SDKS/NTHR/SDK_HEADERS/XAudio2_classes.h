/*
#############################################################################################
# Nether (BETA Patch #7 (64-bit, DX9)) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51->custom
# ========================================================================================= #
# File: XAudio2_classes.h
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

// Class XAudio2.XAudio2Device
// 0x00A8 (0x0410 - 0x0368)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[ 0xA8 ];                            		// 0x0368 (0x00A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1416 ];

		return pClassPointer;
	};

};

UClass* UXAudio2Device::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif