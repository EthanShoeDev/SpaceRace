#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t1591974969;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t957164028;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_t1393774351;
// GooglePlayGames.Native.PInvoke.LeaderboardManager
struct LeaderboardManager_t64301252;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey2
struct  U3CLoadScorePageU3Ec__AnonStorey2_t606880094  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.LeaderboardScoreData GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey2::data
	LeaderboardScoreData_t1591974969 * ___data_0;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey2::token
	ScorePageToken_t957164028 * ___token_1;
	// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData> GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey2::callback
	Action_1_t1393774351 * ___callback_2;
	// GooglePlayGames.Native.PInvoke.LeaderboardManager GooglePlayGames.Native.PInvoke.LeaderboardManager/<LoadScorePage>c__AnonStorey2::$this
	LeaderboardManager_t64301252 * ___U24this_3;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey2_t606880094, ___data_0)); }
	inline LeaderboardScoreData_t1591974969 * get_data_0() const { return ___data_0; }
	inline LeaderboardScoreData_t1591974969 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(LeaderboardScoreData_t1591974969 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_token_1() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey2_t606880094, ___token_1)); }
	inline ScorePageToken_t957164028 * get_token_1() const { return ___token_1; }
	inline ScorePageToken_t957164028 ** get_address_of_token_1() { return &___token_1; }
	inline void set_token_1(ScorePageToken_t957164028 * value)
	{
		___token_1 = value;
		Il2CppCodeGenWriteBarrier(&___token_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey2_t606880094, ___callback_2)); }
	inline Action_1_t1393774351 * get_callback_2() const { return ___callback_2; }
	inline Action_1_t1393774351 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_t1393774351 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CLoadScorePageU3Ec__AnonStorey2_t606880094, ___U24this_3)); }
	inline LeaderboardManager_t64301252 * get_U24this_3() const { return ___U24this_3; }
	inline LeaderboardManager_t64301252 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(LeaderboardManager_t64301252 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
