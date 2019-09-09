#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus>
struct Action_1_t848455129;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.Callbacks
struct  Callbacks_t196378972  : public Il2CppObject
{
public:

public:
};

struct Callbacks_t196378972_StaticFields
{
public:
	// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus> GooglePlayGames.Native.PInvoke.Callbacks::NoopUICallback
	Action_1_t848455129 * ___NoopUICallback_0;

public:
	inline static int32_t get_offset_of_NoopUICallback_0() { return static_cast<int32_t>(offsetof(Callbacks_t196378972_StaticFields, ___NoopUICallback_0)); }
	inline Action_1_t848455129 * get_NoopUICallback_0() const { return ___NoopUICallback_0; }
	inline Action_1_t848455129 ** get_address_of_NoopUICallback_0() { return &___NoopUICallback_0; }
	inline void set_NoopUICallback_0(Action_1_t848455129 * value)
	{
		___NoopUICallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___NoopUICallback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
