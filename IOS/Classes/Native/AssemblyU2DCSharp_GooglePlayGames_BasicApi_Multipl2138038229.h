#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1688458124.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1664371563.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t3001836645;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String>
struct Func_2_t1680474717;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct  TurnBasedMatch_t2138038229  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mMatchId
	String_t* ___mMatchId_0;
	// System.Byte[] GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mData
	ByteU5BU5D_t3397334013* ___mData_1;
	// System.Boolean GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mCanRematch
	bool ___mCanRematch_2;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mAvailableAutomatchSlots
	uint32_t ___mAvailableAutomatchSlots_3;
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mSelfParticipantId
	String_t* ___mSelfParticipantId_4;
	// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mParticipants
	List_1_t3001836645 * ___mParticipants_5;
	// System.String GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mPendingParticipantId
	String_t* ___mPendingParticipantId_6;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchTurnStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mTurnStatus
	int32_t ___mTurnStatus_7;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch/MatchStatus GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mMatchStatus
	int32_t ___mMatchStatus_8;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mVariant
	uint32_t ___mVariant_9;
	// System.UInt32 GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::mVersion
	uint32_t ___mVersion_10;

public:
	inline static int32_t get_offset_of_mMatchId_0() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mMatchId_0)); }
	inline String_t* get_mMatchId_0() const { return ___mMatchId_0; }
	inline String_t** get_address_of_mMatchId_0() { return &___mMatchId_0; }
	inline void set_mMatchId_0(String_t* value)
	{
		___mMatchId_0 = value;
		Il2CppCodeGenWriteBarrier(&___mMatchId_0, value);
	}

	inline static int32_t get_offset_of_mData_1() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mData_1)); }
	inline ByteU5BU5D_t3397334013* get_mData_1() const { return ___mData_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_mData_1() { return &___mData_1; }
	inline void set_mData_1(ByteU5BU5D_t3397334013* value)
	{
		___mData_1 = value;
		Il2CppCodeGenWriteBarrier(&___mData_1, value);
	}

	inline static int32_t get_offset_of_mCanRematch_2() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mCanRematch_2)); }
	inline bool get_mCanRematch_2() const { return ___mCanRematch_2; }
	inline bool* get_address_of_mCanRematch_2() { return &___mCanRematch_2; }
	inline void set_mCanRematch_2(bool value)
	{
		___mCanRematch_2 = value;
	}

	inline static int32_t get_offset_of_mAvailableAutomatchSlots_3() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mAvailableAutomatchSlots_3)); }
	inline uint32_t get_mAvailableAutomatchSlots_3() const { return ___mAvailableAutomatchSlots_3; }
	inline uint32_t* get_address_of_mAvailableAutomatchSlots_3() { return &___mAvailableAutomatchSlots_3; }
	inline void set_mAvailableAutomatchSlots_3(uint32_t value)
	{
		___mAvailableAutomatchSlots_3 = value;
	}

	inline static int32_t get_offset_of_mSelfParticipantId_4() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mSelfParticipantId_4)); }
	inline String_t* get_mSelfParticipantId_4() const { return ___mSelfParticipantId_4; }
	inline String_t** get_address_of_mSelfParticipantId_4() { return &___mSelfParticipantId_4; }
	inline void set_mSelfParticipantId_4(String_t* value)
	{
		___mSelfParticipantId_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSelfParticipantId_4, value);
	}

	inline static int32_t get_offset_of_mParticipants_5() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mParticipants_5)); }
	inline List_1_t3001836645 * get_mParticipants_5() const { return ___mParticipants_5; }
	inline List_1_t3001836645 ** get_address_of_mParticipants_5() { return &___mParticipants_5; }
	inline void set_mParticipants_5(List_1_t3001836645 * value)
	{
		___mParticipants_5 = value;
		Il2CppCodeGenWriteBarrier(&___mParticipants_5, value);
	}

	inline static int32_t get_offset_of_mPendingParticipantId_6() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mPendingParticipantId_6)); }
	inline String_t* get_mPendingParticipantId_6() const { return ___mPendingParticipantId_6; }
	inline String_t** get_address_of_mPendingParticipantId_6() { return &___mPendingParticipantId_6; }
	inline void set_mPendingParticipantId_6(String_t* value)
	{
		___mPendingParticipantId_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPendingParticipantId_6, value);
	}

	inline static int32_t get_offset_of_mTurnStatus_7() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mTurnStatus_7)); }
	inline int32_t get_mTurnStatus_7() const { return ___mTurnStatus_7; }
	inline int32_t* get_address_of_mTurnStatus_7() { return &___mTurnStatus_7; }
	inline void set_mTurnStatus_7(int32_t value)
	{
		___mTurnStatus_7 = value;
	}

	inline static int32_t get_offset_of_mMatchStatus_8() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mMatchStatus_8)); }
	inline int32_t get_mMatchStatus_8() const { return ___mMatchStatus_8; }
	inline int32_t* get_address_of_mMatchStatus_8() { return &___mMatchStatus_8; }
	inline void set_mMatchStatus_8(int32_t value)
	{
		___mMatchStatus_8 = value;
	}

	inline static int32_t get_offset_of_mVariant_9() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mVariant_9)); }
	inline uint32_t get_mVariant_9() const { return ___mVariant_9; }
	inline uint32_t* get_address_of_mVariant_9() { return &___mVariant_9; }
	inline void set_mVariant_9(uint32_t value)
	{
		___mVariant_9 = value;
	}

	inline static int32_t get_offset_of_mVersion_10() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229, ___mVersion_10)); }
	inline uint32_t get_mVersion_10() const { return ___mVersion_10; }
	inline uint32_t* get_address_of_mVersion_10() { return &___mVersion_10; }
	inline void set_mVersion_10(uint32_t value)
	{
		___mVersion_10 = value;
	}
};

struct TurnBasedMatch_t2138038229_StaticFields
{
public:
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch::<>f__am$cache0
	Func_2_t1680474717 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(TurnBasedMatch_t2138038229_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t1680474717 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t1680474717 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t1680474717 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
