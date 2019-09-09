#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch[]>
struct Action_1_t2794125326;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t1128837132;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<GetAllMatches>c__AnonStorey5
struct  U3CGetAllMatchesU3Ec__AnonStorey5_t3440809598  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch[]> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<GetAllMatches>c__AnonStorey5::callback
	Action_1_t2794125326 * ___callback_0;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<GetAllMatches>c__AnonStorey5::$this
	NativeTurnBasedMultiplayerClient_t1128837132 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CGetAllMatchesU3Ec__AnonStorey5_t3440809598, ___callback_0)); }
	inline Action_1_t2794125326 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2794125326 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2794125326 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetAllMatchesU3Ec__AnonStorey5_t3440809598, ___U24this_1)); }
	inline NativeTurnBasedMultiplayerClient_t1128837132 * get_U24this_1() const { return ___U24this_1; }
	inline NativeTurnBasedMultiplayerClient_t1128837132 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NativeTurnBasedMultiplayerClient_t1128837132 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
