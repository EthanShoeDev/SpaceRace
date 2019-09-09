#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipla299659063.h"

// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t258639277;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Multiplayer.Participant
struct  Participant_t3632715513  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.BasicApi.Multiplayer.Participant::mParticipantId
	String_t* ___mParticipantId_1;
	// GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus GooglePlayGames.BasicApi.Multiplayer.Participant::mStatus
	int32_t ___mStatus_2;
	// GooglePlayGames.BasicApi.Multiplayer.Player GooglePlayGames.BasicApi.Multiplayer.Participant::mPlayer
	Player_t258639277 * ___mPlayer_3;
	// System.Boolean GooglePlayGames.BasicApi.Multiplayer.Participant::mIsConnectedToRoom
	bool ___mIsConnectedToRoom_4;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(Participant_t3632715513, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier(&___mDisplayName_0, value);
	}

	inline static int32_t get_offset_of_mParticipantId_1() { return static_cast<int32_t>(offsetof(Participant_t3632715513, ___mParticipantId_1)); }
	inline String_t* get_mParticipantId_1() const { return ___mParticipantId_1; }
	inline String_t** get_address_of_mParticipantId_1() { return &___mParticipantId_1; }
	inline void set_mParticipantId_1(String_t* value)
	{
		___mParticipantId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mParticipantId_1, value);
	}

	inline static int32_t get_offset_of_mStatus_2() { return static_cast<int32_t>(offsetof(Participant_t3632715513, ___mStatus_2)); }
	inline int32_t get_mStatus_2() const { return ___mStatus_2; }
	inline int32_t* get_address_of_mStatus_2() { return &___mStatus_2; }
	inline void set_mStatus_2(int32_t value)
	{
		___mStatus_2 = value;
	}

	inline static int32_t get_offset_of_mPlayer_3() { return static_cast<int32_t>(offsetof(Participant_t3632715513, ___mPlayer_3)); }
	inline Player_t258639277 * get_mPlayer_3() const { return ___mPlayer_3; }
	inline Player_t258639277 ** get_address_of_mPlayer_3() { return &___mPlayer_3; }
	inline void set_mPlayer_3(Player_t258639277 * value)
	{
		___mPlayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayer_3, value);
	}

	inline static int32_t get_offset_of_mIsConnectedToRoom_4() { return static_cast<int32_t>(offsetof(Participant_t3632715513, ___mIsConnectedToRoom_4)); }
	inline bool get_mIsConnectedToRoom_4() const { return ___mIsConnectedToRoom_4; }
	inline bool* get_address_of_mIsConnectedToRoom_4() { return &___mIsConnectedToRoom_4; }
	inline void set_mIsConnectedToRoom_4(bool value)
	{
		___mIsConnectedToRoom_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
