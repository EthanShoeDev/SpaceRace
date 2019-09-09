#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig
struct RealtimeRoomConfig_t3701657168;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/<CreateQuickGame>c__AnonStorey0
struct  U3CCreateQuickGameU3Ec__AnonStorey0_t2937054523  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig GooglePlayGames.Native.NativeRealtimeMultiplayerClient/<CreateQuickGame>c__AnonStorey0::config
	RealtimeRoomConfig_t3701657168 * ___config_0;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(U3CCreateQuickGameU3Ec__AnonStorey0_t2937054523, ___config_0)); }
	inline RealtimeRoomConfig_t3701657168 * get_config_0() const { return ___config_0; }
	inline RealtimeRoomConfig_t3701657168 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(RealtimeRoomConfig_t3701657168 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier(&___config_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
