#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_2_t2619083326;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t2138038229;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStoreyE
struct  U3CFindEqualVersionMatchWithParticipantU3Ec__AnonStoreyE_t2727608375  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStoreyE::participantId
	String_t* ___participantId_0;
	// System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStoreyE::onFoundParticipantAndMatch
	Action_2_t2619083326 * ___onFoundParticipantAndMatch_1;
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStoreyE::match
	TurnBasedMatch_t2138038229 * ___match_2;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatchWithParticipant>c__AnonStoreyE::onFailure
	Action_1_t3627374100 * ___onFailure_3;

public:
	inline static int32_t get_offset_of_participantId_0() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchWithParticipantU3Ec__AnonStoreyE_t2727608375, ___participantId_0)); }
	inline String_t* get_participantId_0() const { return ___participantId_0; }
	inline String_t** get_address_of_participantId_0() { return &___participantId_0; }
	inline void set_participantId_0(String_t* value)
	{
		___participantId_0 = value;
		Il2CppCodeGenWriteBarrier(&___participantId_0, value);
	}

	inline static int32_t get_offset_of_onFoundParticipantAndMatch_1() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchWithParticipantU3Ec__AnonStoreyE_t2727608375, ___onFoundParticipantAndMatch_1)); }
	inline Action_2_t2619083326 * get_onFoundParticipantAndMatch_1() const { return ___onFoundParticipantAndMatch_1; }
	inline Action_2_t2619083326 ** get_address_of_onFoundParticipantAndMatch_1() { return &___onFoundParticipantAndMatch_1; }
	inline void set_onFoundParticipantAndMatch_1(Action_2_t2619083326 * value)
	{
		___onFoundParticipantAndMatch_1 = value;
		Il2CppCodeGenWriteBarrier(&___onFoundParticipantAndMatch_1, value);
	}

	inline static int32_t get_offset_of_match_2() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchWithParticipantU3Ec__AnonStoreyE_t2727608375, ___match_2)); }
	inline TurnBasedMatch_t2138038229 * get_match_2() const { return ___match_2; }
	inline TurnBasedMatch_t2138038229 ** get_address_of_match_2() { return &___match_2; }
	inline void set_match_2(TurnBasedMatch_t2138038229 * value)
	{
		___match_2 = value;
		Il2CppCodeGenWriteBarrier(&___match_2, value);
	}

	inline static int32_t get_offset_of_onFailure_3() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchWithParticipantU3Ec__AnonStoreyE_t2727608375, ___onFailure_3)); }
	inline Action_1_t3627374100 * get_onFailure_3() const { return ___onFailure_3; }
	inline Action_1_t3627374100 ** get_address_of_onFailure_3() { return &___onFailure_3; }
	inline void set_onFailure_3(Action_1_t3627374100 * value)
	{
		___onFailure_3 = value;
		Il2CppCodeGenWriteBarrier(&___onFailure_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
