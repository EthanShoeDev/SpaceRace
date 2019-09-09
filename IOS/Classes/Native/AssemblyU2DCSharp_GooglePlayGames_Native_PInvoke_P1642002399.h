#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>
struct Action_2_t2604085571;
// GooglePlayGames.Native.PInvoke.PlayerManager
struct PlayerManager_t3427419990;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.PlayerManager/<FetchFriends>c__AnonStorey1
struct  U3CFetchFriendsU3Ec__AnonStorey1_t1642002399  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>> GooglePlayGames.Native.PInvoke.PlayerManager/<FetchFriends>c__AnonStorey1::callback
	Action_2_t2604085571 * ___callback_0;
	// GooglePlayGames.Native.PInvoke.PlayerManager GooglePlayGames.Native.PInvoke.PlayerManager/<FetchFriends>c__AnonStorey1::$this
	PlayerManager_t3427419990 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchFriendsU3Ec__AnonStorey1_t1642002399, ___callback_0)); }
	inline Action_2_t2604085571 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t2604085571 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t2604085571 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFetchFriendsU3Ec__AnonStorey1_t1642002399, ___U24this_1)); }
	inline PlayerManager_t3427419990 * get_U24this_1() const { return ___U24this_1; }
	inline PlayerManager_t3427419990 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(PlayerManager_t3427419990 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
