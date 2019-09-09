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
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t4064461283;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult>
struct Dictionary_2_t3692667678;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct  MatchOutcome_t94455423  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::mParticipantIds
	List_1_t1398341365 * ___mParticipantIds_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::mPlacements
	Dictionary_2_t4064461283 * ___mPlacements_2;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult> GooglePlayGames.BasicApi.Multiplayer.MatchOutcome::mResults
	Dictionary_2_t3692667678 * ___mResults_3;

public:
	inline static int32_t get_offset_of_mParticipantIds_1() { return static_cast<int32_t>(offsetof(MatchOutcome_t94455423, ___mParticipantIds_1)); }
	inline List_1_t1398341365 * get_mParticipantIds_1() const { return ___mParticipantIds_1; }
	inline List_1_t1398341365 ** get_address_of_mParticipantIds_1() { return &___mParticipantIds_1; }
	inline void set_mParticipantIds_1(List_1_t1398341365 * value)
	{
		___mParticipantIds_1 = value;
		Il2CppCodeGenWriteBarrier(&___mParticipantIds_1, value);
	}

	inline static int32_t get_offset_of_mPlacements_2() { return static_cast<int32_t>(offsetof(MatchOutcome_t94455423, ___mPlacements_2)); }
	inline Dictionary_2_t4064461283 * get_mPlacements_2() const { return ___mPlacements_2; }
	inline Dictionary_2_t4064461283 ** get_address_of_mPlacements_2() { return &___mPlacements_2; }
	inline void set_mPlacements_2(Dictionary_2_t4064461283 * value)
	{
		___mPlacements_2 = value;
		Il2CppCodeGenWriteBarrier(&___mPlacements_2, value);
	}

	inline static int32_t get_offset_of_mResults_3() { return static_cast<int32_t>(offsetof(MatchOutcome_t94455423, ___mResults_3)); }
	inline Dictionary_2_t3692667678 * get_mResults_3() const { return ___mResults_3; }
	inline Dictionary_2_t3692667678 ** get_address_of_mResults_3() { return &___mResults_3; }
	inline void set_mResults_3(Dictionary_2_t3692667678 * value)
	{
		___mResults_3 = value;
		Il2CppCodeGenWriteBarrier(&___mResults_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
