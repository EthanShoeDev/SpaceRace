#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>
struct Action_2_t2979948022;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/<ReadBinaryData>c__AnonStorey5
struct  U3CReadBinaryDataU3Ec__AnonStorey5_t3699744684  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]> GooglePlayGames.Native.NativeSavedGameClient/<ReadBinaryData>c__AnonStorey5::completedCallback
	Action_2_t2979948022 * ___completedCallback_0;

public:
	inline static int32_t get_offset_of_completedCallback_0() { return static_cast<int32_t>(offsetof(U3CReadBinaryDataU3Ec__AnonStorey5_t3699744684, ___completedCallback_0)); }
	inline Action_2_t2979948022 * get_completedCallback_0() const { return ___completedCallback_0; }
	inline Action_2_t2979948022 ** get_address_of_completedCallback_0() { return &___completedCallback_0; }
	inline void set_completedCallback_0(Action_2_t2979948022 * value)
	{
		___completedCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___completedCallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
