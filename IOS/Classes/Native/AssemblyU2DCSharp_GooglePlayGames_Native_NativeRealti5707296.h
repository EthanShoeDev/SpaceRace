#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t3905545025;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<RealTimeMessageReceived>c__AnonStorey4
struct  U3CRealTimeMessageReceivedU3Ec__AnonStorey4_t5707296  : public Il2CppObject
{
public:
	// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<RealTimeMessageReceived>c__AnonStorey4::isReliable
	bool ___isReliable_0;
	// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<RealTimeMessageReceived>c__AnonStorey4::senderId
	String_t* ___senderId_1;
	// System.Byte[] GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<RealTimeMessageReceived>c__AnonStorey4::data
	ByteU5BU5D_t3397334013* ___data_2;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener/<RealTimeMessageReceived>c__AnonStorey4::$this
	OnGameThreadForwardingListener_t3905545025 * ___U24this_3;

public:
	inline static int32_t get_offset_of_isReliable_0() { return static_cast<int32_t>(offsetof(U3CRealTimeMessageReceivedU3Ec__AnonStorey4_t5707296, ___isReliable_0)); }
	inline bool get_isReliable_0() const { return ___isReliable_0; }
	inline bool* get_address_of_isReliable_0() { return &___isReliable_0; }
	inline void set_isReliable_0(bool value)
	{
		___isReliable_0 = value;
	}

	inline static int32_t get_offset_of_senderId_1() { return static_cast<int32_t>(offsetof(U3CRealTimeMessageReceivedU3Ec__AnonStorey4_t5707296, ___senderId_1)); }
	inline String_t* get_senderId_1() const { return ___senderId_1; }
	inline String_t** get_address_of_senderId_1() { return &___senderId_1; }
	inline void set_senderId_1(String_t* value)
	{
		___senderId_1 = value;
		Il2CppCodeGenWriteBarrier(&___senderId_1, value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CRealTimeMessageReceivedU3Ec__AnonStorey4_t5707296, ___data_2)); }
	inline ByteU5BU5D_t3397334013* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_t3397334013* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CRealTimeMessageReceivedU3Ec__AnonStorey4_t5707296, ___U24this_3)); }
	inline OnGameThreadForwardingListener_t3905545025 * get_U24this_3() const { return ___U24this_3; }
	inline OnGameThreadForwardingListener_t3905545025 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(OnGameThreadForwardingListener_t3905545025 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
