#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb2134496543.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Leaderb3485669020.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.ScorePageToken
struct  ScorePageToken_t957164028  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	Il2CppObject * ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(ScorePageToken_t957164028, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier(&___mId_0, value);
	}

	inline static int32_t get_offset_of_mInternalObject_1() { return static_cast<int32_t>(offsetof(ScorePageToken_t957164028, ___mInternalObject_1)); }
	inline Il2CppObject * get_mInternalObject_1() const { return ___mInternalObject_1; }
	inline Il2CppObject ** get_address_of_mInternalObject_1() { return &___mInternalObject_1; }
	inline void set_mInternalObject_1(Il2CppObject * value)
	{
		___mInternalObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___mInternalObject_1, value);
	}

	inline static int32_t get_offset_of_mCollection_2() { return static_cast<int32_t>(offsetof(ScorePageToken_t957164028, ___mCollection_2)); }
	inline int32_t get_mCollection_2() const { return ___mCollection_2; }
	inline int32_t* get_address_of_mCollection_2() { return &___mCollection_2; }
	inline void set_mCollection_2(int32_t value)
	{
		___mCollection_2 = value;
	}

	inline static int32_t get_offset_of_mTimespan_3() { return static_cast<int32_t>(offsetof(ScorePageToken_t957164028, ___mTimespan_3)); }
	inline int32_t get_mTimespan_3() const { return ___mTimespan_3; }
	inline int32_t* get_address_of_mTimespan_3() { return &___mTimespan_3; }
	inline void set_mTimespan_3(int32_t value)
	{
		___mTimespan_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
