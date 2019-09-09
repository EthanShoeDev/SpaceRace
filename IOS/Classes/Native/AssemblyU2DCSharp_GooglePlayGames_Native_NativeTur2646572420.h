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
// System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t1974040968;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t1128837132;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey8
struct  U3CAcceptInvitationU3Ec__AnonStorey8_t2646572420  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey8::invitationId
	String_t* ___invitationId_0;
	// System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey8::callback
	Action_2_t1974040968 * ___callback_1;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<AcceptInvitation>c__AnonStorey8::$this
	NativeTurnBasedMultiplayerClient_t1128837132 * ___U24this_2;

public:
	inline static int32_t get_offset_of_invitationId_0() { return static_cast<int32_t>(offsetof(U3CAcceptInvitationU3Ec__AnonStorey8_t2646572420, ___invitationId_0)); }
	inline String_t* get_invitationId_0() const { return ___invitationId_0; }
	inline String_t** get_address_of_invitationId_0() { return &___invitationId_0; }
	inline void set_invitationId_0(String_t* value)
	{
		___invitationId_0 = value;
		Il2CppCodeGenWriteBarrier(&___invitationId_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CAcceptInvitationU3Ec__AnonStorey8_t2646572420, ___callback_1)); }
	inline Action_2_t1974040968 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t1974040968 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t1974040968 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAcceptInvitationU3Ec__AnonStorey8_t2646572420, ___U24this_2)); }
	inline NativeTurnBasedMultiplayerClient_t1128837132 * get_U24this_2() const { return ___U24this_2; }
	inline NativeTurnBasedMultiplayerClient_t1128837132 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(NativeTurnBasedMultiplayerClient_t1128837132 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
