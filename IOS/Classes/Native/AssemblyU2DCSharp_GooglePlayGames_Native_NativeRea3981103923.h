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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState
struct  RoomCreationPendingState_t3981103923  : public State_t2818940644
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::mContainingSession
	RoomSession_t720409396 * ___mContainingSession_0;

public:
	inline static int32_t get_offset_of_mContainingSession_0() { return static_cast<int32_t>(offsetof(RoomCreationPendingState_t3981103923, ___mContainingSession_0)); }
	inline RoomSession_t720409396 * get_mContainingSession_0() const { return ___mContainingSession_0; }
	inline RoomSession_t720409396 ** get_address_of_mContainingSession_0() { return &___mContainingSession_0; }
	inline void set_mContainingSession_0(RoomSession_t720409396 * value)
	{
		___mContainingSession_0 = value;
		Il2CppCodeGenWriteBarrier(&___mContainingSession_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
