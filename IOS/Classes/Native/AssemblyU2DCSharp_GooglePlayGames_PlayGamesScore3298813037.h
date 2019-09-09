#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesScore
struct  PlayGamesScore_t3298813037  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.PlayGamesScore::mLbId
	String_t* ___mLbId_0;
	// System.Int64 GooglePlayGames.PlayGamesScore::mValue
	int64_t ___mValue_1;
	// System.UInt64 GooglePlayGames.PlayGamesScore::mRank
	uint64_t ___mRank_2;
	// System.String GooglePlayGames.PlayGamesScore::mPlayerId
	String_t* ___mPlayerId_3;
	// System.String GooglePlayGames.PlayGamesScore::mMetadata
	String_t* ___mMetadata_4;
	// System.DateTime GooglePlayGames.PlayGamesScore::mDate
	DateTime_t693205669  ___mDate_5;

public:
	inline static int32_t get_offset_of_mLbId_0() { return static_cast<int32_t>(offsetof(PlayGamesScore_t3298813037, ___mLbId_0)); }
	inline String_t* get_mLbId_0() const { return ___mLbId_0; }
	inline String_t** get_address_of_mLbId_0() { return &___mLbId_0; }
	inline void set_mLbId_0(String_t* value)
	{
		___mLbId_0 = value;
		Il2CppCodeGenWriteBarrier(&___mLbId_0, value);
	}

	inline static int32_t get_offset_of_mValue_1() { return static_cast<int32_t>(offsetof(PlayGamesScore_t3298813037, ___mValue_1)); }
	inline int64_t get_mValue_1() const { return ___mValue_1; }
	inline int64_t* get_address_of_mValue_1() { return &___mValue_1; }
	inline void set_mValue_1(int64_t value)
	{
		___mValue_1 = value;
	}

	inline static int32_t get_offset_of_mRank_2() { return static_cast<int32_t>(offsetof(PlayGamesScore_t3298813037, ___mRank_2)); }
	inline uint64_t get_mRank_2() const { return ___mRank_2; }
	inline uint64_t* get_address_of_mRank_2() { return &___mRank_2; }
	inline void set_mRank_2(uint64_t value)
	{
		___mRank_2 = value;
	}

	inline static int32_t get_offset_of_mPlayerId_3() { return static_cast<int32_t>(offsetof(PlayGamesScore_t3298813037, ___mPlayerId_3)); }
	inline String_t* get_mPlayerId_3() const { return ___mPlayerId_3; }
	inline String_t** get_address_of_mPlayerId_3() { return &___mPlayerId_3; }
	inline void set_mPlayerId_3(String_t* value)
	{
		___mPlayerId_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerId_3, value);
	}

	inline static int32_t get_offset_of_mMetadata_4() { return static_cast<int32_t>(offsetof(PlayGamesScore_t3298813037, ___mMetadata_4)); }
	inline String_t* get_mMetadata_4() const { return ___mMetadata_4; }
	inline String_t** get_address_of_mMetadata_4() { return &___mMetadata_4; }
	inline void set_mMetadata_4(String_t* value)
	{
		___mMetadata_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMetadata_4, value);
	}

	inline static int32_t get_offset_of_mDate_5() { return static_cast<int32_t>(offsetof(PlayGamesScore_t3298813037, ___mDate_5)); }
	inline DateTime_t693205669  get_mDate_5() const { return ___mDate_5; }
	inline DateTime_t693205669 * get_address_of_mDate_5() { return &___mDate_5; }
	inline void set_mDate_5(DateTime_t693205669  value)
	{
		___mDate_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
