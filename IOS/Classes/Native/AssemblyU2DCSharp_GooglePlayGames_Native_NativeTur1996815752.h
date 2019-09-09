#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean>
struct Action_2_t3085869086;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t2690443672;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t1128837132;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStoreyB
struct  U3CHandleMatchEventU3Ec__AnonStoreyB_t1996815752  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStoreyB::currentDelegate
	Action_2_t3085869086 * ___currentDelegate_0;
	// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStoreyB::match
	NativeTurnBasedMatch_t2690443672 * ___match_1;
	// System.Boolean GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStoreyB::shouldAutolaunch
	bool ___shouldAutolaunch_2;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<HandleMatchEvent>c__AnonStoreyB::$this
	NativeTurnBasedMultiplayerClient_t1128837132 * ___U24this_3;

public:
	inline static int32_t get_offset_of_currentDelegate_0() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStoreyB_t1996815752, ___currentDelegate_0)); }
	inline Action_2_t3085869086 * get_currentDelegate_0() const { return ___currentDelegate_0; }
	inline Action_2_t3085869086 ** get_address_of_currentDelegate_0() { return &___currentDelegate_0; }
	inline void set_currentDelegate_0(Action_2_t3085869086 * value)
	{
		___currentDelegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentDelegate_0, value);
	}

	inline static int32_t get_offset_of_match_1() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStoreyB_t1996815752, ___match_1)); }
	inline NativeTurnBasedMatch_t2690443672 * get_match_1() const { return ___match_1; }
	inline NativeTurnBasedMatch_t2690443672 ** get_address_of_match_1() { return &___match_1; }
	inline void set_match_1(NativeTurnBasedMatch_t2690443672 * value)
	{
		___match_1 = value;
		Il2CppCodeGenWriteBarrier(&___match_1, value);
	}

	inline static int32_t get_offset_of_shouldAutolaunch_2() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStoreyB_t1996815752, ___shouldAutolaunch_2)); }
	inline bool get_shouldAutolaunch_2() const { return ___shouldAutolaunch_2; }
	inline bool* get_address_of_shouldAutolaunch_2() { return &___shouldAutolaunch_2; }
	inline void set_shouldAutolaunch_2(bool value)
	{
		___shouldAutolaunch_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CHandleMatchEventU3Ec__AnonStoreyB_t1996815752, ___U24this_3)); }
	inline NativeTurnBasedMultiplayerClient_t1128837132 * get_U24this_3() const { return ___U24this_3; }
	inline NativeTurnBasedMultiplayerClient_t1128837132 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(NativeTurnBasedMultiplayerClient_t1128837132 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
