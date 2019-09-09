#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea2818940644.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t720409396;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ShutdownState
struct  ShutdownState_t3810199270  : public State_t2818940644
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ShutdownState::mSession
	RoomSession_t720409396 * ___mSession_0;

public:
	inline static int32_t get_offset_of_mSession_0() { return static_cast<int32_t>(offsetof(ShutdownState_t3810199270, ___mSession_0)); }
	inline RoomSession_t720409396 * get_mSession_0() const { return ___mSession_0; }
	inline RoomSession_t720409396 ** get_address_of_mSession_0() { return &___mSession_0; }
	inline void set_mSession_0(RoomSession_t720409396 * value)
	{
		___mSession_0 = value;
		Il2CppCodeGenWriteBarrier(&___mSession_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
