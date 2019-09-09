#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_B2912115440.h"

// System.Collections.Generic.Dictionary`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>
struct Dictionary_2_t2677749416;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct  MultiplayerParticipant_t2353950471  : public BaseReferenceHolder_t2912115440
{
public:

public:
};

struct MultiplayerParticipant_t2353950471_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus> GooglePlayGames.Native.PInvoke.MultiplayerParticipant::StatusConversion
	Dictionary_2_t2677749416 * ___StatusConversion_2;

public:
	inline static int32_t get_offset_of_StatusConversion_2() { return static_cast<int32_t>(offsetof(MultiplayerParticipant_t2353950471_StaticFields, ___StatusConversion_2)); }
	inline Dictionary_2_t2677749416 * get_StatusConversion_2() const { return ___StatusConversion_2; }
	inline Dictionary_2_t2677749416 ** get_address_of_StatusConversion_2() { return &___StatusConversion_2; }
	inline void set_StatusConversion_2(Dictionary_2_t2677749416 * value)
	{
		___StatusConversion_2 = value;
		Il2CppCodeGenWriteBarrier(&___StatusConversion_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
