﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t77027648;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t1888151212;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesPlatform/<LoadScores>c__AnonStorey4
struct  U3CLoadScoresU3Ec__AnonStorey4_t2020839161  : public Il2CppObject
{
public:
	// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform/<LoadScores>c__AnonStorey4::board
	Il2CppObject * ___board_0;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform/<LoadScores>c__AnonStorey4::callback
	Action_1_t3627374100 * ___callback_1;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform/<LoadScores>c__AnonStorey4::$this
	PlayGamesPlatform_t1888151212 * ___U24this_2;

public:
	inline static int32_t get_offset_of_board_0() { return static_cast<int32_t>(offsetof(U3CLoadScoresU3Ec__AnonStorey4_t2020839161, ___board_0)); }
	inline Il2CppObject * get_board_0() const { return ___board_0; }
	inline Il2CppObject ** get_address_of_board_0() { return &___board_0; }
	inline void set_board_0(Il2CppObject * value)
	{
		___board_0 = value;
		Il2CppCodeGenWriteBarrier(&___board_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CLoadScoresU3Ec__AnonStorey4_t2020839161, ___callback_1)); }
	inline Action_1_t3627374100 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t3627374100 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t3627374100 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CLoadScoresU3Ec__AnonStorey4_t2020839161, ___U24this_2)); }
	inline PlayGamesPlatform_t1888151212 * get_U24this_2() const { return ___U24this_2; }
	inline PlayGamesPlatform_t1888151212 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(PlayGamesPlatform_t1888151212 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif