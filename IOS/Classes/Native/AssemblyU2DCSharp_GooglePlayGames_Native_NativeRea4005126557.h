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
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t1403463147;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.Native.PInvoke.MultiplayerParticipant>
struct Dictionary_2_t4268729733;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Dictionary_2_t1252527479;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String>
struct Func_2_t2211312215;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant>
struct Func_2_t3814807495;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String>
struct Func_2_t1680474717;
// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean>
struct Func_2_t3476829202;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState
struct  MessagingEnabledState_t4005126557  : public State_t2818940644
{
public:
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mSession
	RoomSession_t720409396 * ___mSession_0;
	// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mRoom
	NativeRealTimeRoom_t1403463147 * ___mRoom_1;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.Native.PInvoke.MultiplayerParticipant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mNativeParticipants
	Dictionary_2_t4268729733 * ___mNativeParticipants_2;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::mParticipants
	Dictionary_2_t1252527479 * ___mParticipants_3;

public:
	inline static int32_t get_offset_of_mSession_0() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557, ___mSession_0)); }
	inline RoomSession_t720409396 * get_mSession_0() const { return ___mSession_0; }
	inline RoomSession_t720409396 ** get_address_of_mSession_0() { return &___mSession_0; }
	inline void set_mSession_0(RoomSession_t720409396 * value)
	{
		___mSession_0 = value;
		Il2CppCodeGenWriteBarrier(&___mSession_0, value);
	}

	inline static int32_t get_offset_of_mRoom_1() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557, ___mRoom_1)); }
	inline NativeRealTimeRoom_t1403463147 * get_mRoom_1() const { return ___mRoom_1; }
	inline NativeRealTimeRoom_t1403463147 ** get_address_of_mRoom_1() { return &___mRoom_1; }
	inline void set_mRoom_1(NativeRealTimeRoom_t1403463147 * value)
	{
		___mRoom_1 = value;
		Il2CppCodeGenWriteBarrier(&___mRoom_1, value);
	}

	inline static int32_t get_offset_of_mNativeParticipants_2() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557, ___mNativeParticipants_2)); }
	inline Dictionary_2_t4268729733 * get_mNativeParticipants_2() const { return ___mNativeParticipants_2; }
	inline Dictionary_2_t4268729733 ** get_address_of_mNativeParticipants_2() { return &___mNativeParticipants_2; }
	inline void set_mNativeParticipants_2(Dictionary_2_t4268729733 * value)
	{
		___mNativeParticipants_2 = value;
		Il2CppCodeGenWriteBarrier(&___mNativeParticipants_2, value);
	}

	inline static int32_t get_offset_of_mParticipants_3() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557, ___mParticipants_3)); }
	inline Dictionary_2_t1252527479 * get_mParticipants_3() const { return ___mParticipants_3; }
	inline Dictionary_2_t1252527479 ** get_address_of_mParticipants_3() { return &___mParticipants_3; }
	inline void set_mParticipants_3(Dictionary_2_t1252527479 * value)
	{
		___mParticipants_3 = value;
		Il2CppCodeGenWriteBarrier(&___mParticipants_3, value);
	}
};

struct MessagingEnabledState_t4005126557_StaticFields
{
public:
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache0
	Func_2_t2211312215 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache1
	Func_2_t3814807495 * ___U3CU3Ef__amU24cache1_5;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.String> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache2
	Func_2_t1680474717 * ___U3CU3Ef__amU24cache2_6;
	// System.Func`2<GooglePlayGames.BasicApi.Multiplayer.Participant,System.Boolean> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<>f__am$cache3
	Func_2_t3476829202 * ___U3CU3Ef__amU24cache3_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t2211312215 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t2211312215 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t2211312215 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t3814807495 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t3814807495 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t3814807495 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline Func_2_t1680474717 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline Func_2_t1680474717 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(Func_2_t1680474717 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_7() { return static_cast<int32_t>(offsetof(MessagingEnabledState_t4005126557_StaticFields, ___U3CU3Ef__amU24cache3_7)); }
	inline Func_2_t3476829202 * get_U3CU3Ef__amU24cache3_7() const { return ___U3CU3Ef__amU24cache3_7; }
	inline Func_2_t3476829202 ** get_address_of_U3CU3Ef__amU24cache3_7() { return &___U3CU3Ef__amU24cache3_7; }
	inline void set_U3CU3Ef__amU24cache3_7(Func_2_t3476829202 * value)
	{
		___U3CU3Ef__amU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
