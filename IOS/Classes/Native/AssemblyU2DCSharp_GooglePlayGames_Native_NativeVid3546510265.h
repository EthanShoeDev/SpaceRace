#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.VideoManager
struct VideoManager_t2654237376;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeVideoClient
struct  NativeVideoClient_t3546510265  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.VideoManager GooglePlayGames.Native.NativeVideoClient::mManager
	VideoManager_t2654237376 * ___mManager_0;

public:
	inline static int32_t get_offset_of_mManager_0() { return static_cast<int32_t>(offsetof(NativeVideoClient_t3546510265, ___mManager_0)); }
	inline VideoManager_t2654237376 * get_mManager_0() const { return ___mManager_0; }
	inline VideoManager_t2654237376 ** get_address_of_mManager_0() { return &___mManager_0; }
	inline void set_mManager_0(VideoManager_t2654237376 * value)
	{
		___mManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___mManager_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
