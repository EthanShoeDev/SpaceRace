#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2040019681;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1482948672;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct  Builder_t2602203538  : public Il2CppObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_t1398341365 * ___mScopes_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mHidePopups
	bool ___mHidePopups_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestEmail
	bool ___mRequestEmail_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestIdToken
	bool ___mRequestIdToken_6;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mAccountName
	String_t* ___mAccountName_7;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mInvitationDelegate
	InvitationReceivedDelegate_t2040019681 * ___mInvitationDelegate_8;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mMatchDelegate
	MatchDelegate_t1482948672 * ___mMatchDelegate_9;

public:
	inline static int32_t get_offset_of_mEnableSaveGames_0() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mEnableSaveGames_0)); }
	inline bool get_mEnableSaveGames_0() const { return ___mEnableSaveGames_0; }
	inline bool* get_address_of_mEnableSaveGames_0() { return &___mEnableSaveGames_0; }
	inline void set_mEnableSaveGames_0(bool value)
	{
		___mEnableSaveGames_0 = value;
	}

	inline static int32_t get_offset_of_mScopes_1() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mScopes_1)); }
	inline List_1_t1398341365 * get_mScopes_1() const { return ___mScopes_1; }
	inline List_1_t1398341365 ** get_address_of_mScopes_1() { return &___mScopes_1; }
	inline void set_mScopes_1(List_1_t1398341365 * value)
	{
		___mScopes_1 = value;
		Il2CppCodeGenWriteBarrier(&___mScopes_1, value);
	}

	inline static int32_t get_offset_of_mHidePopups_2() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mHidePopups_2)); }
	inline bool get_mHidePopups_2() const { return ___mHidePopups_2; }
	inline bool* get_address_of_mHidePopups_2() { return &___mHidePopups_2; }
	inline void set_mHidePopups_2(bool value)
	{
		___mHidePopups_2 = value;
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_5() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mRequestEmail_5)); }
	inline bool get_mRequestEmail_5() const { return ___mRequestEmail_5; }
	inline bool* get_address_of_mRequestEmail_5() { return &___mRequestEmail_5; }
	inline void set_mRequestEmail_5(bool value)
	{
		___mRequestEmail_5 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_6() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mRequestIdToken_6)); }
	inline bool get_mRequestIdToken_6() const { return ___mRequestIdToken_6; }
	inline bool* get_address_of_mRequestIdToken_6() { return &___mRequestIdToken_6; }
	inline void set_mRequestIdToken_6(bool value)
	{
		___mRequestIdToken_6 = value;
	}

	inline static int32_t get_offset_of_mAccountName_7() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mAccountName_7)); }
	inline String_t* get_mAccountName_7() const { return ___mAccountName_7; }
	inline String_t** get_address_of_mAccountName_7() { return &___mAccountName_7; }
	inline void set_mAccountName_7(String_t* value)
	{
		___mAccountName_7 = value;
		Il2CppCodeGenWriteBarrier(&___mAccountName_7, value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_8() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mInvitationDelegate_8)); }
	inline InvitationReceivedDelegate_t2040019681 * get_mInvitationDelegate_8() const { return ___mInvitationDelegate_8; }
	inline InvitationReceivedDelegate_t2040019681 ** get_address_of_mInvitationDelegate_8() { return &___mInvitationDelegate_8; }
	inline void set_mInvitationDelegate_8(InvitationReceivedDelegate_t2040019681 * value)
	{
		___mInvitationDelegate_8 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitationDelegate_8, value);
	}

	inline static int32_t get_offset_of_mMatchDelegate_9() { return static_cast<int32_t>(offsetof(Builder_t2602203538, ___mMatchDelegate_9)); }
	inline MatchDelegate_t1482948672 * get_mMatchDelegate_9() const { return ___mMatchDelegate_9; }
	inline MatchDelegate_t1482948672 ** get_address_of_mMatchDelegate_9() { return &___mMatchDelegate_9; }
	inline void set_mMatchDelegate_9(MatchDelegate_t1482948672 * value)
	{
		___mMatchDelegate_9 = value;
		Il2CppCodeGenWriteBarrier(&___mMatchDelegate_9, value);
	}
};

struct Builder_t2602203538_StaticFields
{
public:
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<>f__am$cache0
	InvitationReceivedDelegate_t2040019681 * ___U3CU3Ef__amU24cache0_10;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::<>f__am$cache1
	MatchDelegate_t1482948672 * ___U3CU3Ef__amU24cache1_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(Builder_t2602203538_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline InvitationReceivedDelegate_t2040019681 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline InvitationReceivedDelegate_t2040019681 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(InvitationReceivedDelegate_t2040019681 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_11() { return static_cast<int32_t>(offsetof(Builder_t2602203538_StaticFields, ___U3CU3Ef__amU24cache1_11)); }
	inline MatchDelegate_t1482948672 * get_U3CU3Ef__amU24cache1_11() const { return ___U3CU3Ef__amU24cache1_11; }
	inline MatchDelegate_t1482948672 ** get_address_of_U3CU3Ef__amU24cache1_11() { return &___U3CU3Ef__amU24cache1_11; }
	inline void set_U3CU3Ef__amU24cache1_11(MatchDelegate_t1482948672 * value)
	{
		___U3CU3Ef__amU24cache1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
