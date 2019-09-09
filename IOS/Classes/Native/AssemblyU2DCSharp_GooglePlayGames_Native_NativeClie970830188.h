#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3826918770;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<LoadFriends>c__AnonStorey4
struct  U3CLoadFriendsU3Ec__AnonStorey4_t970830188  : public Il2CppObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeClient/<LoadFriends>c__AnonStorey4::callback
	Action_1_t3627374100 * ___callback_0;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeClient/<LoadFriends>c__AnonStorey4::$this
	NativeClient_t3826918770 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLoadFriendsU3Ec__AnonStorey4_t970830188, ___callback_0)); }
	inline Action_1_t3627374100 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t3627374100 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t3627374100 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLoadFriendsU3Ec__AnonStorey4_t970830188, ___U24this_1)); }
	inline NativeClient_t3826918770 * get_U24this_1() const { return ___U24this_1; }
	inline NativeClient_t3826918770 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NativeClient_t3826918770 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
