#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean>
struct Action_2_t979687468;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t916425311;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<HandleInvitation>c__AnonStorey3
struct  U3CHandleInvitationU3Ec__AnonStorey3_t2476773465  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean> GooglePlayGames.Native.NativeClient/<HandleInvitation>c__AnonStorey3::currentHandler
	Action_2_t979687468 * ___currentHandler_0;
	// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.Native.NativeClient/<HandleInvitation>c__AnonStorey3::invite
	Invitation_t916425311 * ___invite_1;
	// System.Boolean GooglePlayGames.Native.NativeClient/<HandleInvitation>c__AnonStorey3::shouldAutolaunch
	bool ___shouldAutolaunch_2;

public:
	inline static int32_t get_offset_of_currentHandler_0() { return static_cast<int32_t>(offsetof(U3CHandleInvitationU3Ec__AnonStorey3_t2476773465, ___currentHandler_0)); }
	inline Action_2_t979687468 * get_currentHandler_0() const { return ___currentHandler_0; }
	inline Action_2_t979687468 ** get_address_of_currentHandler_0() { return &___currentHandler_0; }
	inline void set_currentHandler_0(Action_2_t979687468 * value)
	{
		___currentHandler_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentHandler_0, value);
	}

	inline static int32_t get_offset_of_invite_1() { return static_cast<int32_t>(offsetof(U3CHandleInvitationU3Ec__AnonStorey3_t2476773465, ___invite_1)); }
	inline Invitation_t916425311 * get_invite_1() const { return ___invite_1; }
	inline Invitation_t916425311 ** get_address_of_invite_1() { return &___invite_1; }
	inline void set_invite_1(Invitation_t916425311 * value)
	{
		___invite_1 = value;
		Il2CppCodeGenWriteBarrier(&___invite_1, value);
	}

	inline static int32_t get_offset_of_shouldAutolaunch_2() { return static_cast<int32_t>(offsetof(U3CHandleInvitationU3Ec__AnonStorey3_t2476773465, ___shouldAutolaunch_2)); }
	inline bool get_shouldAutolaunch_2() const { return ___shouldAutolaunch_2; }
	inline bool* get_address_of_shouldAutolaunch_2() { return &___shouldAutolaunch_2; }
	inline void set_shouldAutolaunch_2(bool value)
	{
		___shouldAutolaunch_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
