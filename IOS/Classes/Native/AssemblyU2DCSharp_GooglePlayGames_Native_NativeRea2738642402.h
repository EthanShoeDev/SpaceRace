#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t3905545025;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<PeersDisconnected>c__AnonStorey3
struct  U3CPeersDisconnectedU3Ec__AnonStorey3_t2738642402  : public Il2CppObject
{
public:
	// System.String[] GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<PeersDisconnected>c__AnonStorey3::participantIds
	StringU5BU5D_t1642385972* ___participantIds_0;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<PeersDisconnected>c__AnonStorey3::$this
	OnGameThreadForwardingListener_t3905545025 * ___U24this_1;

public:
	inline static int32_t get_offset_of_participantIds_0() { return static_cast<int32_t>(offsetof(U3CPeersDisconnectedU3Ec__AnonStorey3_t2738642402, ___participantIds_0)); }
	inline StringU5BU5D_t1642385972* get_participantIds_0() const { return ___participantIds_0; }
	inline StringU5BU5D_t1642385972** get_address_of_participantIds_0() { return &___participantIds_0; }
	inline void set_participantIds_0(StringU5BU5D_t1642385972* value)
	{
		___participantIds_0 = value;
		Il2CppCodeGenWriteBarrier(&___participantIds_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CPeersDisconnectedU3Ec__AnonStorey3_t2738642402, ___U24this_1)); }
	inline OnGameThreadForwardingListener_t3905545025 * get_U24this_1() const { return ___U24this_1; }
	inline OnGameThreadForwardingListener_t3905545025 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(OnGameThreadForwardingListener_t3905545025 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
