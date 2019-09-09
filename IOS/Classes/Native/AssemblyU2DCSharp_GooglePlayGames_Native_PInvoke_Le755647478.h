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
// System.String
struct String_t;
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

// GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1
struct  U3CHandleFetchU3Ec__AnonStorey1_t755647478  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.LeaderboardScoreData GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1::data
	LeaderboardScoreData_t1591974969 * ___data_0;
	// System.String GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1::selfPlayerId
	String_t* ___selfPlayerId_1;
	// System.Int32 GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1::maxResults
	int32_t ___maxResults_2;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1::token
	ScorePageToken_t957164028 * ___token_3;
	// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData> GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1::callback
	Action_1_t1393774351 * ___callback_4;
	// GooglePlayGames.Native.PInvoke.LeaderboardManager GooglePlayGames.Native.PInvoke.LeaderboardManager/<HandleFetch>c__AnonStorey1::$this
	LeaderboardManager_t64301252 * ___U24this_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey1_t755647478, ___data_0)); }
	inline LeaderboardScoreData_t1591974969 * get_data_0() const { return ___data_0; }
	inline LeaderboardScoreData_t1591974969 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(LeaderboardScoreData_t1591974969 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_selfPlayerId_1() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey1_t755647478, ___selfPlayerId_1)); }
	inline String_t* get_selfPlayerId_1() const { return ___selfPlayerId_1; }
	inline String_t** get_address_of_selfPlayerId_1() { return &___selfPlayerId_1; }
	inline void set_selfPlayerId_1(String_t* value)
	{
		___selfPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier(&___selfPlayerId_1, value);
	}

	inline static int32_t get_offset_of_maxResults_2() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey1_t755647478, ___maxResults_2)); }
	inline int32_t get_maxResults_2() const { return ___maxResults_2; }
	inline int32_t* get_address_of_maxResults_2() { return &___maxResults_2; }
	inline void set_maxResults_2(int32_t value)
	{
		___maxResults_2 = value;
	}

	inline static int32_t get_offset_of_token_3() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey1_t755647478, ___token_3)); }
	inline ScorePageToken_t957164028 * get_token_3() const { return ___token_3; }
	inline ScorePageToken_t957164028 ** get_address_of_token_3() { return &___token_3; }
	inline void set_token_3(ScorePageToken_t957164028 * value)
	{
		___token_3 = value;
		Il2CppCodeGenWriteBarrier(&___token_3, value);
	}

	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey1_t755647478, ___callback_4)); }
	inline Action_1_t1393774351 * get_callback_4() const { return ___callback_4; }
	inline Action_1_t1393774351 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(Action_1_t1393774351 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___callback_4, value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CHandleFetchU3Ec__AnonStorey1_t755647478, ___U24this_5)); }
	inline LeaderboardManager_t64301252 * get_U24this_5() const { return ___U24this_5; }
	inline LeaderboardManager_t64301252 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(LeaderboardManager_t64301252 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
