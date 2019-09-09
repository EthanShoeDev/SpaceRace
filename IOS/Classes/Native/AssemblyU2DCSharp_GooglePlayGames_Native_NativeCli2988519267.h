#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_t2040019681;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<RegisterInvitationDelegate>c__AnonStorey14
struct  U3CRegisterInvitationDelegateU3Ec__AnonStorey14_t2988519267  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.Native.NativeClient/<RegisterInvitationDelegate>c__AnonStorey14::invitationDelegate
	InvitationReceivedDelegate_t2040019681 * ___invitationDelegate_0;

public:
	inline static int32_t get_offset_of_invitationDelegate_0() { return static_cast<int32_t>(offsetof(U3CRegisterInvitationDelegateU3Ec__AnonStorey14_t2988519267, ___invitationDelegate_0)); }
	inline InvitationReceivedDelegate_t2040019681 * get_invitationDelegate_0() const { return ___invitationDelegate_0; }
	inline InvitationReceivedDelegate_t2040019681 ** get_address_of_invitationDelegate_0() { return &___invitationDelegate_0; }
	inline void set_invitationDelegate_0(InvitationReceivedDelegate_t2040019681 * value)
	{
		___invitationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___invitationDelegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
