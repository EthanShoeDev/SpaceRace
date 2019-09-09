#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2678288295.h"

// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t3632715513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct  Invitation_t916425311  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.Multiplayer.Invitation/InvType GooglePlayGames.BasicApi.Multiplayer.Invitation::mInvitationType
	int32_t ___mInvitationType_0;
	// System.String GooglePlayGames.BasicApi.Multiplayer.Invitation::mInvitationId
	String_t* ___mInvitationId_1;
	// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.BasicApi.Multiplayer.Invitation::mInviter
	Participant_t3632715513 * ___mInviter_2;
	// System.Int32 GooglePlayGames.BasicApi.Multiplayer.Invitation::mVariant
	int32_t ___mVariant_3;

public:
	inline static int32_t get_offset_of_mInvitationType_0() { return static_cast<int32_t>(offsetof(Invitation_t916425311, ___mInvitationType_0)); }
	inline int32_t get_mInvitationType_0() const { return ___mInvitationType_0; }
	inline int32_t* get_address_of_mInvitationType_0() { return &___mInvitationType_0; }
	inline void set_mInvitationType_0(int32_t value)
	{
		___mInvitationType_0 = value;
	}

	inline static int32_t get_offset_of_mInvitationId_1() { return static_cast<int32_t>(offsetof(Invitation_t916425311, ___mInvitationId_1)); }
	inline String_t* get_mInvitationId_1() const { return ___mInvitationId_1; }
	inline String_t** get_address_of_mInvitationId_1() { return &___mInvitationId_1; }
	inline void set_mInvitationId_1(String_t* value)
	{
		___mInvitationId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitationId_1, value);
	}

	inline static int32_t get_offset_of_mInviter_2() { return static_cast<int32_t>(offsetof(Invitation_t916425311, ___mInviter_2)); }
	inline Participant_t3632715513 * get_mInviter_2() const { return ___mInviter_2; }
	inline Participant_t3632715513 ** get_address_of_mInviter_2() { return &___mInviter_2; }
	inline void set_mInviter_2(Participant_t3632715513 * value)
	{
		___mInviter_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInviter_2, value);
	}

	inline static int32_t get_offset_of_mVariant_3() { return static_cast<int32_t>(offsetof(Invitation_t916425311, ___mVariant_3)); }
	inline int32_t get_mVariant_3() const { return ___mVariant_3; }
	inline int32_t* get_address_of_mVariant_3() { return &___mVariant_3; }
	inline void set_mVariant_3(int32_t value)
	{
		___mVariant_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
