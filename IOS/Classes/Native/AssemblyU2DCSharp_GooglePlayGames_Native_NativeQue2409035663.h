#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Quests.IQuest>
struct Action_2_t1588445111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeQuestClient/<Fetch>c__AnonStorey0
struct  U3CFetchU3Ec__AnonStorey0_t2409035663  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Quests.IQuest> GooglePlayGames.Native.NativeQuestClient/<Fetch>c__AnonStorey0::callback
	Action_2_t1588445111 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchU3Ec__AnonStorey0_t2409035663, ___callback_0)); }
	inline Action_2_t1588445111 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1588445111 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1588445111 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
