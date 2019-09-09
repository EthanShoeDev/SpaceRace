#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppAdvisory.social.LEADERBOARDIDS
struct  LEADERBOARDIDS_t1667058907  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean AppAdvisory.social.LEADERBOARDIDS::FIRST_TIME
	bool ___FIRST_TIME_2;
	// System.Boolean AppAdvisory.social.LEADERBOARDIDS::ENABLE_IOS
	bool ___ENABLE_IOS_3;
	// System.Boolean AppAdvisory.social.LEADERBOARDIDS::ENABLE_ANDROID
	bool ___ENABLE_ANDROID_4;
	// System.String AppAdvisory.social.LEADERBOARDIDS::LEADERBOARDID_IOS
	String_t* ___LEADERBOARDID_IOS_5;
	// System.String AppAdvisory.social.LEADERBOARDIDS::LEADERBOARDID_ANDROID
	String_t* ___LEADERBOARDID_ANDROID_6;
	// System.Boolean AppAdvisory.social.LEADERBOARDIDS::isLeaderboardIDsFoldoutOpened
	bool ___isLeaderboardIDsFoldoutOpened_7;

public:
	inline static int32_t get_offset_of_FIRST_TIME_2() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907, ___FIRST_TIME_2)); }
	inline bool get_FIRST_TIME_2() const { return ___FIRST_TIME_2; }
	inline bool* get_address_of_FIRST_TIME_2() { return &___FIRST_TIME_2; }
	inline void set_FIRST_TIME_2(bool value)
	{
		___FIRST_TIME_2 = value;
	}

	inline static int32_t get_offset_of_ENABLE_IOS_3() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907, ___ENABLE_IOS_3)); }
	inline bool get_ENABLE_IOS_3() const { return ___ENABLE_IOS_3; }
	inline bool* get_address_of_ENABLE_IOS_3() { return &___ENABLE_IOS_3; }
	inline void set_ENABLE_IOS_3(bool value)
	{
		___ENABLE_IOS_3 = value;
	}

	inline static int32_t get_offset_of_ENABLE_ANDROID_4() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907, ___ENABLE_ANDROID_4)); }
	inline bool get_ENABLE_ANDROID_4() const { return ___ENABLE_ANDROID_4; }
	inline bool* get_address_of_ENABLE_ANDROID_4() { return &___ENABLE_ANDROID_4; }
	inline void set_ENABLE_ANDROID_4(bool value)
	{
		___ENABLE_ANDROID_4 = value;
	}

	inline static int32_t get_offset_of_LEADERBOARDID_IOS_5() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907, ___LEADERBOARDID_IOS_5)); }
	inline String_t* get_LEADERBOARDID_IOS_5() const { return ___LEADERBOARDID_IOS_5; }
	inline String_t** get_address_of_LEADERBOARDID_IOS_5() { return &___LEADERBOARDID_IOS_5; }
	inline void set_LEADERBOARDID_IOS_5(String_t* value)
	{
		___LEADERBOARDID_IOS_5 = value;
		Il2CppCodeGenWriteBarrier(&___LEADERBOARDID_IOS_5, value);
	}

	inline static int32_t get_offset_of_LEADERBOARDID_ANDROID_6() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907, ___LEADERBOARDID_ANDROID_6)); }
	inline String_t* get_LEADERBOARDID_ANDROID_6() const { return ___LEADERBOARDID_ANDROID_6; }
	inline String_t** get_address_of_LEADERBOARDID_ANDROID_6() { return &___LEADERBOARDID_ANDROID_6; }
	inline void set_LEADERBOARDID_ANDROID_6(String_t* value)
	{
		___LEADERBOARDID_ANDROID_6 = value;
		Il2CppCodeGenWriteBarrier(&___LEADERBOARDID_ANDROID_6, value);
	}

	inline static int32_t get_offset_of_isLeaderboardIDsFoldoutOpened_7() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907, ___isLeaderboardIDsFoldoutOpened_7)); }
	inline bool get_isLeaderboardIDsFoldoutOpened_7() const { return ___isLeaderboardIDsFoldoutOpened_7; }
	inline bool* get_address_of_isLeaderboardIDsFoldoutOpened_7() { return &___isLeaderboardIDsFoldoutOpened_7; }
	inline void set_isLeaderboardIDsFoldoutOpened_7(bool value)
	{
		___isLeaderboardIDsFoldoutOpened_7 = value;
	}
};

struct LEADERBOARDIDS_t1667058907_StaticFields
{
public:
	// System.String AppAdvisory.social.LEADERBOARDIDS::PATH
	String_t* ___PATH_8;
	// System.String AppAdvisory.social.LEADERBOARDIDS::NAME
	String_t* ___NAME_9;

public:
	inline static int32_t get_offset_of_PATH_8() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907_StaticFields, ___PATH_8)); }
	inline String_t* get_PATH_8() const { return ___PATH_8; }
	inline String_t** get_address_of_PATH_8() { return &___PATH_8; }
	inline void set_PATH_8(String_t* value)
	{
		___PATH_8 = value;
		Il2CppCodeGenWriteBarrier(&___PATH_8, value);
	}

	inline static int32_t get_offset_of_NAME_9() { return static_cast<int32_t>(offsetof(LEADERBOARDIDS_t1667058907_StaticFields, ___NAME_9)); }
	inline String_t* get_NAME_9() const { return ___NAME_9; }
	inline String_t** get_address_of_NAME_9() { return &___NAME_9; }
	inline void set_NAME_9(String_t* value)
	{
		___NAME_9 = value;
		Il2CppCodeGenWriteBarrier(&___NAME_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
