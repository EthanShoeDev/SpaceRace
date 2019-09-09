#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t2138038229;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_1_t2492243054;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStoreyD
struct  U3CFindEqualVersionMatchU3Ec__AnonStoreyD_t1073721207  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStoreyD::match
	TurnBasedMatch_t2138038229 * ___match_0;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStoreyD::onFailure
	Action_1_t3627374100 * ___onFailure_1;
	// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindEqualVersionMatch>c__AnonStoreyD::onVersionMatch
	Action_1_t2492243054 * ___onVersionMatch_2;

public:
	inline static int32_t get_offset_of_match_0() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchU3Ec__AnonStoreyD_t1073721207, ___match_0)); }
	inline TurnBasedMatch_t2138038229 * get_match_0() const { return ___match_0; }
	inline TurnBasedMatch_t2138038229 ** get_address_of_match_0() { return &___match_0; }
	inline void set_match_0(TurnBasedMatch_t2138038229 * value)
	{
		___match_0 = value;
		Il2CppCodeGenWriteBarrier(&___match_0, value);
	}

	inline static int32_t get_offset_of_onFailure_1() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchU3Ec__AnonStoreyD_t1073721207, ___onFailure_1)); }
	inline Action_1_t3627374100 * get_onFailure_1() const { return ___onFailure_1; }
	inline Action_1_t3627374100 ** get_address_of_onFailure_1() { return &___onFailure_1; }
	inline void set_onFailure_1(Action_1_t3627374100 * value)
	{
		___onFailure_1 = value;
		Il2CppCodeGenWriteBarrier(&___onFailure_1, value);
	}

	inline static int32_t get_offset_of_onVersionMatch_2() { return static_cast<int32_t>(offsetof(U3CFindEqualVersionMatchU3Ec__AnonStoreyD_t1073721207, ___onVersionMatch_2)); }
	inline Action_1_t2492243054 * get_onVersionMatch_2() const { return ___onVersionMatch_2; }
	inline Action_1_t2492243054 ** get_address_of_onVersionMatch_2() { return &___onVersionMatch_2; }
	inline void set_onVersionMatch_2(Action_1_t2492243054 * value)
	{
		___onVersionMatch_2 = value;
		Il2CppCodeGenWriteBarrier(&___onVersionMatch_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
