#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities>
struct Action_2_t2203676107;
// GooglePlayGames.Native.NativeVideoClient
struct NativeVideoClient_t3546510265;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeVideoClient/<GetCaptureCapabilities>c__AnonStorey0
struct  U3CGetCaptureCapabilitiesU3Ec__AnonStorey0_t2289009874  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Video.VideoCapabilities> GooglePlayGames.Native.NativeVideoClient/<GetCaptureCapabilities>c__AnonStorey0::callback
	Action_2_t2203676107 * ___callback_0;
	// GooglePlayGames.Native.NativeVideoClient GooglePlayGames.Native.NativeVideoClient/<GetCaptureCapabilities>c__AnonStorey0::$this
	NativeVideoClient_t3546510265 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetCaptureCapabilitiesU3Ec__AnonStorey0_t2289009874, ___callback_0)); }
	inline Action_2_t2203676107 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t2203676107 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t2203676107 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetCaptureCapabilitiesU3Ec__AnonStorey0_t2289009874, ___U24this_1)); }
	inline NativeVideoClient_t3546510265 * get_U24this_1() const { return ___U24this_1; }
	inline NativeVideoClient_t3546510265 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NativeVideoClient_t3546510265 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
