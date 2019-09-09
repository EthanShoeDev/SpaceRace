#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t4134901792;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t128069941;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesLocalUser/<GetStats>c__AnonStorey0
struct  U3CGetStatsU3Ec__AnonStorey0_t1097777194  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats> GooglePlayGames.PlayGamesLocalUser/<GetStats>c__AnonStorey0::callback
	Action_2_t4134901792 * ___callback_0;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesLocalUser/<GetStats>c__AnonStorey0::$this
	PlayGamesLocalUser_t128069941 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetStatsU3Ec__AnonStorey0_t1097777194, ___callback_0)); }
	inline Action_2_t4134901792 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t4134901792 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t4134901792 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetStatsU3Ec__AnonStorey0_t1097777194, ___U24this_1)); }
	inline PlayGamesLocalUser_t128069941 * get_U24this_1() const { return ___U24this_1; }
	inline PlayGamesLocalUser_t128069941 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(PlayGamesLocalUser_t128069941 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
