#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.EventManager
struct EventManager_t2915808641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeEventClient
struct  NativeEventClient_t1065972850  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.EventManager GooglePlayGames.Native.NativeEventClient::mEventManager
	EventManager_t2915808641 * ___mEventManager_0;

public:
	inline static int32_t get_offset_of_mEventManager_0() { return static_cast<int32_t>(offsetof(NativeEventClient_t1065972850, ___mEventManager_0)); }
	inline EventManager_t2915808641 * get_mEventManager_0() const { return ___mEventManager_0; }
	inline EventManager_t2915808641 ** get_address_of_mEventManager_0() { return &___mEventManager_0; }
	inline void set_mEventManager_0(EventManager_t2915808641 * value)
	{
		___mEventManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___mEventManager_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
