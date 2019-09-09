#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t1148216180;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t1128837132;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<BridgeMatchToUserCallback>c__AnonStorey6
struct  U3CBridgeMatchToUserCallbackU3Ec__AnonStorey6_t978988882  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<BridgeMatchToUserCallback>c__AnonStorey6::userCallback
	Action_2_t1148216180 * ___userCallback_0;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<BridgeMatchToUserCallback>c__AnonStorey6::$this
	NativeTurnBasedMultiplayerClient_t1128837132 * ___U24this_1;

public:
	inline static int32_t get_offset_of_userCallback_0() { return static_cast<int32_t>(offsetof(U3CBridgeMatchToUserCallbackU3Ec__AnonStorey6_t978988882, ___userCallback_0)); }
	inline Action_2_t1148216180 * get_userCallback_0() const { return ___userCallback_0; }
	inline Action_2_t1148216180 ** get_address_of_userCallback_0() { return &___userCallback_0; }
	inline void set_userCallback_0(Action_2_t1148216180 * value)
	{
		___userCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___userCallback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CBridgeMatchToUserCallbackU3Ec__AnonStorey6_t978988882, ___U24this_1)); }
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
