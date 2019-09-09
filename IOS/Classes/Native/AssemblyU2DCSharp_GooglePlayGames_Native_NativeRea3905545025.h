#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t1654223829;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct  OnGameThreadForwardingListener_t3905545025  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener::mListener
	Il2CppObject * ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadForwardingListener_t3905545025, ___mListener_0)); }
	inline Il2CppObject * get_mListener_0() const { return ___mListener_0; }
	inline Il2CppObject ** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(Il2CppObject * value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier(&___mListener_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
