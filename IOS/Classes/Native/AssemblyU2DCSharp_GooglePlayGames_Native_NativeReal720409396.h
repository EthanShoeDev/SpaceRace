#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"

// System.Object
struct Il2CppObject;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t3905545025;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t2852124690;
// System.String
struct String_t;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State
struct State_t2818940644;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t916425311;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct  RoomSession_t720409396  : public Il2CppObject
{
public:
	// System.Object GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mLifecycleLock
	Il2CppObject * ___mLifecycleLock_0;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mListener
	OnGameThreadForwardingListener_t3905545025 * ___mListener_1;
	// GooglePlayGames.Native.PInvoke.RealtimeManager GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mManager
	RealtimeManager_t2852124690 * ___mManager_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mCurrentPlayerId
	String_t* ___mCurrentPlayerId_3;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mState
	State_t2818940644 * ___mState_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mStillPreRoomCreation
	bool ___mStillPreRoomCreation_5;
	// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mInvitation
	Invitation_t916425311 * ___mInvitation_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mShowingUI
	bool ___mShowingUI_7;
	// System.UInt32 GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::mMinPlayersToStart
	uint32_t ___mMinPlayersToStart_8;

public:
	inline static int32_t get_offset_of_mLifecycleLock_0() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mLifecycleLock_0)); }
	inline Il2CppObject * get_mLifecycleLock_0() const { return ___mLifecycleLock_0; }
	inline Il2CppObject ** get_address_of_mLifecycleLock_0() { return &___mLifecycleLock_0; }
	inline void set_mLifecycleLock_0(Il2CppObject * value)
	{
		___mLifecycleLock_0 = value;
		Il2CppCodeGenWriteBarrier(&___mLifecycleLock_0, value);
	}

	inline static int32_t get_offset_of_mListener_1() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mListener_1)); }
	inline OnGameThreadForwardingListener_t3905545025 * get_mListener_1() const { return ___mListener_1; }
	inline OnGameThreadForwardingListener_t3905545025 ** get_address_of_mListener_1() { return &___mListener_1; }
	inline void set_mListener_1(OnGameThreadForwardingListener_t3905545025 * value)
	{
		___mListener_1 = value;
		Il2CppCodeGenWriteBarrier(&___mListener_1, value);
	}

	inline static int32_t get_offset_of_mManager_2() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mManager_2)); }
	inline RealtimeManager_t2852124690 * get_mManager_2() const { return ___mManager_2; }
	inline RealtimeManager_t2852124690 ** get_address_of_mManager_2() { return &___mManager_2; }
	inline void set_mManager_2(RealtimeManager_t2852124690 * value)
	{
		___mManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___mManager_2, value);
	}

	inline static int32_t get_offset_of_mCurrentPlayerId_3() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mCurrentPlayerId_3)); }
	inline String_t* get_mCurrentPlayerId_3() const { return ___mCurrentPlayerId_3; }
	inline String_t** get_address_of_mCurrentPlayerId_3() { return &___mCurrentPlayerId_3; }
	inline void set_mCurrentPlayerId_3(String_t* value)
	{
		___mCurrentPlayerId_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentPlayerId_3, value);
	}

	inline static int32_t get_offset_of_mState_4() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mState_4)); }
	inline State_t2818940644 * get_mState_4() const { return ___mState_4; }
	inline State_t2818940644 ** get_address_of_mState_4() { return &___mState_4; }
	inline void set_mState_4(State_t2818940644 * value)
	{
		___mState_4 = value;
		Il2CppCodeGenWriteBarrier(&___mState_4, value);
	}

	inline static int32_t get_offset_of_mStillPreRoomCreation_5() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mStillPreRoomCreation_5)); }
	inline bool get_mStillPreRoomCreation_5() const { return ___mStillPreRoomCreation_5; }
	inline bool* get_address_of_mStillPreRoomCreation_5() { return &___mStillPreRoomCreation_5; }
	inline void set_mStillPreRoomCreation_5(bool value)
	{
		___mStillPreRoomCreation_5 = value;
	}

	inline static int32_t get_offset_of_mInvitation_6() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mInvitation_6)); }
	inline Invitation_t916425311 * get_mInvitation_6() const { return ___mInvitation_6; }
	inline Invitation_t916425311 ** get_address_of_mInvitation_6() { return &___mInvitation_6; }
	inline void set_mInvitation_6(Invitation_t916425311 * value)
	{
		___mInvitation_6 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitation_6, value);
	}

	inline static int32_t get_offset_of_mShowingUI_7() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mShowingUI_7)); }
	inline bool get_mShowingUI_7() const { return ___mShowingUI_7; }
	inline bool* get_address_of_mShowingUI_7() { return &___mShowingUI_7; }
	inline void set_mShowingUI_7(bool value)
	{
		___mShowingUI_7 = value;
	}

	inline static int32_t get_offset_of_mMinPlayersToStart_8() { return static_cast<int32_t>(offsetof(RoomSession_t720409396, ___mMinPlayersToStart_8)); }
	inline uint32_t get_mMinPlayersToStart_8() const { return ___mMinPlayersToStart_8; }
	inline uint32_t* get_address_of_mMinPlayersToStart_8() { return &___mMinPlayersToStart_8; }
	inline void set_mMinPlayersToStart_8(uint32_t value)
	{
		___mMinPlayersToStart_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
