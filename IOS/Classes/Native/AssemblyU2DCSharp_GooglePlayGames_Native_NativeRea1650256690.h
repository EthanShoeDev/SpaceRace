#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea4005126557.h"

// System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus>
struct HashSet_1_t420224200;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState
struct  ConnectingState_t1650256690  : public MessagingEnabledState_t4005126557
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::mConnectedParticipants
	HashSet_1_t362681087 * ___mConnectedParticipants_10;
	// System.Single GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::mPercentComplete
	float ___mPercentComplete_11;
	// System.Single GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::mPercentPerParticipant
	float ___mPercentPerParticipant_12;

public:
	inline static int32_t get_offset_of_mConnectedParticipants_10() { return static_cast<int32_t>(offsetof(ConnectingState_t1650256690, ___mConnectedParticipants_10)); }
	inline HashSet_1_t362681087 * get_mConnectedParticipants_10() const { return ___mConnectedParticipants_10; }
	inline HashSet_1_t362681087 ** get_address_of_mConnectedParticipants_10() { return &___mConnectedParticipants_10; }
	inline void set_mConnectedParticipants_10(HashSet_1_t362681087 * value)
	{
		___mConnectedParticipants_10 = value;
		Il2CppCodeGenWriteBarrier(&___mConnectedParticipants_10, value);
	}

	inline static int32_t get_offset_of_mPercentComplete_11() { return static_cast<int32_t>(offsetof(ConnectingState_t1650256690, ___mPercentComplete_11)); }
	inline float get_mPercentComplete_11() const { return ___mPercentComplete_11; }
	inline float* get_address_of_mPercentComplete_11() { return &___mPercentComplete_11; }
	inline void set_mPercentComplete_11(float value)
	{
		___mPercentComplete_11 = value;
	}

	inline static int32_t get_offset_of_mPercentPerParticipant_12() { return static_cast<int32_t>(offsetof(ConnectingState_t1650256690, ___mPercentPerParticipant_12)); }
	inline float get_mPercentPerParticipant_12() const { return ___mPercentPerParticipant_12; }
	inline float* get_address_of_mPercentPerParticipant_12() { return &___mPercentPerParticipant_12; }
	inline void set_mPercentPerParticipant_12(float value)
	{
		___mPercentPerParticipant_12 = value;
	}
};

struct ConnectingState_t1650256690_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::FailedStatuses
	HashSet_1_t420224200 * ___FailedStatuses_9;

public:
	inline static int32_t get_offset_of_FailedStatuses_9() { return static_cast<int32_t>(offsetof(ConnectingState_t1650256690_StaticFields, ___FailedStatuses_9)); }
	inline HashSet_1_t420224200 * get_FailedStatuses_9() const { return ___FailedStatuses_9; }
	inline HashSet_1_t420224200 ** get_address_of_FailedStatuses_9() { return &___FailedStatuses_9; }
	inline void set_FailedStatuses_9(HashSet_1_t420224200 * value)
	{
		___FailedStatuses_9 = value;
		Il2CppCodeGenWriteBarrier(&___FailedStatuses_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
