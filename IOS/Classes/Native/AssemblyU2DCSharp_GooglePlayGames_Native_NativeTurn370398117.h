#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Action_1_t1596808689;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindInvitationWithId>c__AnonStorey9
struct  U3CFindInvitationWithIdU3Ec__AnonStorey9_t370398117  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindInvitationWithId>c__AnonStorey9::callback
	Action_1_t1596808689 * ___callback_0;
	// System.String GooglePlayGames.Native.NativeTurnBasedMultiplayerClient/<FindInvitationWithId>c__AnonStorey9::invitationId
	String_t* ___invitationId_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFindInvitationWithIdU3Ec__AnonStorey9_t370398117, ___callback_0)); }
	inline Action_1_t1596808689 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t1596808689 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t1596808689 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_invitationId_1() { return static_cast<int32_t>(offsetof(U3CFindInvitationWithIdU3Ec__AnonStorey9_t370398117, ___invitationId_1)); }
	inline String_t* get_invitationId_1() const { return ___invitationId_1; }
	inline String_t** get_address_of_invitationId_1() { return &___invitationId_1; }
	inline void set_invitationId_1(String_t* value)
	{
		___invitationId_1 = value;
		Il2CppCodeGenWriteBarrier(&___invitationId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
