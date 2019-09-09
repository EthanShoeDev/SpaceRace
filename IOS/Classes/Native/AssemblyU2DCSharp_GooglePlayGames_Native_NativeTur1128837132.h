#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct TurnBasedManager_t2476777335;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3826918770;
// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean>
struct Action_2_t3085869086;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct  NativeTurnBasedMultiplayerClient_t1128837132  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.TurnBasedManager GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::mTurnBasedManager
	TurnBasedManager_t2476777335 * ___mTurnBasedManager_0;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::mNativeClient
	NativeClient_t3826918770 * ___mNativeClient_1;
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::mMatchDelegate
	Action_2_t3085869086 * ___mMatchDelegate_2;

public:
	inline static int32_t get_offset_of_mTurnBasedManager_0() { return static_cast<int32_t>(offsetof(NativeTurnBasedMultiplayerClient_t1128837132, ___mTurnBasedManager_0)); }
	inline TurnBasedManager_t2476777335 * get_mTurnBasedManager_0() const { return ___mTurnBasedManager_0; }
	inline TurnBasedManager_t2476777335 ** get_address_of_mTurnBasedManager_0() { return &___mTurnBasedManager_0; }
	inline void set_mTurnBasedManager_0(TurnBasedManager_t2476777335 * value)
	{
		___mTurnBasedManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___mTurnBasedManager_0, value);
	}

	inline static int32_t get_offset_of_mNativeClient_1() { return static_cast<int32_t>(offsetof(NativeTurnBasedMultiplayerClient_t1128837132, ___mNativeClient_1)); }
	inline NativeClient_t3826918770 * get_mNativeClient_1() const { return ___mNativeClient_1; }
	inline NativeClient_t3826918770 ** get_address_of_mNativeClient_1() { return &___mNativeClient_1; }
	inline void set_mNativeClient_1(NativeClient_t3826918770 * value)
	{
		___mNativeClient_1 = value;
		Il2CppCodeGenWriteBarrier(&___mNativeClient_1, value);
	}

	inline static int32_t get_offset_of_mMatchDelegate_2() { return static_cast<int32_t>(offsetof(NativeTurnBasedMultiplayerClient_t1128837132, ___mMatchDelegate_2)); }
	inline Action_2_t3085869086 * get_mMatchDelegate_2() const { return ___mMatchDelegate_2; }
	inline Action_2_t3085869086 ** get_address_of_mMatchDelegate_2() { return &___mMatchDelegate_2; }
	inline void set_mMatchDelegate_2(Action_2_t3085869086 * value)
	{
		___mMatchDelegate_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMatchDelegate_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
