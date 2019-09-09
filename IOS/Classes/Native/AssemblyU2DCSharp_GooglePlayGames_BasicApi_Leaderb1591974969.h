#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Response167331027.h"

// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t513966369;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t957164028;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t2667934169;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct  LeaderboardScoreData_t1591974969  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	Il2CppObject * ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t957164028 * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t957164028 * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_t2667934169 * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier(&___mId_0, value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTitle_3, value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mPlayerScore_4)); }
	inline Il2CppObject * get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline Il2CppObject ** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(Il2CppObject * value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerScore_4, value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mPrevPage_5)); }
	inline ScorePageToken_t957164028 * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t957164028 ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t957164028 * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPrevPage_5, value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mNextPage_6)); }
	inline ScorePageToken_t957164028 * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t957164028 ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t957164028 * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier(&___mNextPage_6, value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t1591974969, ___mScores_7)); }
	inline List_1_t2667934169 * get_mScores_7() const { return ___mScores_7; }
	inline List_1_t2667934169 ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_t2667934169 * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier(&___mScores_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
