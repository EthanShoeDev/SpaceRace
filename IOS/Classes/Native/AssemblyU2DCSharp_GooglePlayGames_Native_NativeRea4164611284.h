#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t720409396;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/<HelperForSession>c__AnonStorey3
struct  U3CHelperForSessionU3Ec__AnonStorey3_t4164611284  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/<HelperForSession>c__AnonStorey3::session
	RoomSession_t720409396 * ___session_0;

public:
	inline static int32_t get_offset_of_session_0() { return static_cast<int32_t>(offsetof(U3CHelperForSessionU3Ec__AnonStorey3_t4164611284, ___session_0)); }
	inline RoomSession_t720409396 * get_session_0() const { return ___session_0; }
	inline RoomSession_t720409396 ** get_address_of_session_0() { return &___session_0; }
	inline void set_session_0(RoomSession_t720409396 * value)
	{
		___session_0 = value;
		Il2CppCodeGenWriteBarrier(&___session_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
