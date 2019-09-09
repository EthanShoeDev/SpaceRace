#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_PlayGam2438558858.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeClie549014019.h"
#include "mscorlib_System_UInt322149682021.h"
#include "mscorlib_System_Boolean3825574718.h"

// GooglePlayGames.IClientImpl
struct IClientImpl_t3644884816;
// System.Object
struct Il2CppObject;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t348752010;
// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t1128837132;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient
struct NativeRealtimeMultiplayerClient_t1467017973;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t1365239449;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t2154061873;
// GooglePlayGames.BasicApi.Quests.IQuestsClient
struct IQuestsClient_t1879813267;
// GooglePlayGames.BasicApi.Video.IVideoClient
struct IVideoClient_t3870711831;
// GooglePlayGames.TokenClient
struct TokenClient_t3731287876;
// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean>
struct Action_2_t979687468;
// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Achievement>
struct Dictionary_2_t1795441325;
// GooglePlayGames.BasicApi.Multiplayer.Player
struct Player_t258639277;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>
struct List_1_t3922727705;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t1865222972;
// System.Predicate`1<GooglePlayGames.BasicApi.Achievement>
struct Predicate_1_t2618599474;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient
struct  NativeClient_t3826918770  : public Il2CppObject
{
public:
	// GooglePlayGames.IClientImpl GooglePlayGames.Native.NativeClient::clientImpl
	Il2CppObject * ___clientImpl_0;
	// System.Object GooglePlayGames.Native.NativeClient::GameServicesLock
	Il2CppObject * ___GameServicesLock_1;
	// System.Object GooglePlayGames.Native.NativeClient::AuthStateLock
	Il2CppObject * ___AuthStateLock_2;
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.Native.NativeClient::mConfiguration
	PlayGamesClientConfiguration_t2438558858  ___mConfiguration_3;
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.NativeClient::mServices
	GameServices_t348752010 * ___mServices_4;
	// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mTurnBasedClient
	NativeTurnBasedMultiplayerClient_t1128837132 * ___mTurnBasedClient_5;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mRealTimeClient
	NativeRealtimeMultiplayerClient_t1467017973 * ___mRealTimeClient_6;
	// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSavedGameClient
	Il2CppObject * ___mSavedGameClient_7;
	// GooglePlayGames.BasicApi.Events.IEventsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mEventsClient
	Il2CppObject * ___mEventsClient_8;
	// GooglePlayGames.BasicApi.Quests.IQuestsClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mQuestsClient
	Il2CppObject * ___mQuestsClient_9;
	// GooglePlayGames.BasicApi.Video.IVideoClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mVideoClient
	Il2CppObject * ___mVideoClient_10;
	// GooglePlayGames.TokenClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mTokenClient
	Il2CppObject * ___mTokenClient_11;
	// System.Action`2<GooglePlayGames.BasicApi.Multiplayer.Invitation,System.Boolean> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mInvitationDelegate
	Action_2_t979687468 * ___mInvitationDelegate_12;
	// System.Collections.Generic.Dictionary`2<System.String,GooglePlayGames.BasicApi.Achievement> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAchievements
	Dictionary_2_t1795441325 * ___mAchievements_13;
	// GooglePlayGames.BasicApi.Multiplayer.Player modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mUser
	Player_t258639277 * ___mUser_14;
	// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mFriends
	List_1_t3922727705 * ___mFriends_15;
	// System.Action`2<System.Boolean,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mPendingAuthCallbacks
	Action_2_t1865222972 * ___mPendingAuthCallbacks_16;
	// System.Action`2<System.Boolean,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSilentAuthCallbacks
	Action_2_t1865222972 * ___mSilentAuthCallbacks_17;
	// GooglePlayGames.Native.NativeClient/AuthState modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAuthState
	int32_t ___mAuthState_18;
	// System.UInt32 modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mAuthGeneration
	uint32_t ___mAuthGeneration_19;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::mSilentAuthFailed
	bool ___mSilentAuthFailed_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeClient::friendsLoading
	bool ___friendsLoading_21;

public:
	inline static int32_t get_offset_of_clientImpl_0() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___clientImpl_0)); }
	inline Il2CppObject * get_clientImpl_0() const { return ___clientImpl_0; }
	inline Il2CppObject ** get_address_of_clientImpl_0() { return &___clientImpl_0; }
	inline void set_clientImpl_0(Il2CppObject * value)
	{
		___clientImpl_0 = value;
		Il2CppCodeGenWriteBarrier(&___clientImpl_0, value);
	}

	inline static int32_t get_offset_of_GameServicesLock_1() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___GameServicesLock_1)); }
	inline Il2CppObject * get_GameServicesLock_1() const { return ___GameServicesLock_1; }
	inline Il2CppObject ** get_address_of_GameServicesLock_1() { return &___GameServicesLock_1; }
	inline void set_GameServicesLock_1(Il2CppObject * value)
	{
		___GameServicesLock_1 = value;
		Il2CppCodeGenWriteBarrier(&___GameServicesLock_1, value);
	}

	inline static int32_t get_offset_of_AuthStateLock_2() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___AuthStateLock_2)); }
	inline Il2CppObject * get_AuthStateLock_2() const { return ___AuthStateLock_2; }
	inline Il2CppObject ** get_address_of_AuthStateLock_2() { return &___AuthStateLock_2; }
	inline void set_AuthStateLock_2(Il2CppObject * value)
	{
		___AuthStateLock_2 = value;
		Il2CppCodeGenWriteBarrier(&___AuthStateLock_2, value);
	}

	inline static int32_t get_offset_of_mConfiguration_3() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mConfiguration_3)); }
	inline PlayGamesClientConfiguration_t2438558858  get_mConfiguration_3() const { return ___mConfiguration_3; }
	inline PlayGamesClientConfiguration_t2438558858 * get_address_of_mConfiguration_3() { return &___mConfiguration_3; }
	inline void set_mConfiguration_3(PlayGamesClientConfiguration_t2438558858  value)
	{
		___mConfiguration_3 = value;
	}

	inline static int32_t get_offset_of_mServices_4() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mServices_4)); }
	inline GameServices_t348752010 * get_mServices_4() const { return ___mServices_4; }
	inline GameServices_t348752010 ** get_address_of_mServices_4() { return &___mServices_4; }
	inline void set_mServices_4(GameServices_t348752010 * value)
	{
		___mServices_4 = value;
		Il2CppCodeGenWriteBarrier(&___mServices_4, value);
	}

	inline static int32_t get_offset_of_mTurnBasedClient_5() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mTurnBasedClient_5)); }
	inline NativeTurnBasedMultiplayerClient_t1128837132 * get_mTurnBasedClient_5() const { return ___mTurnBasedClient_5; }
	inline NativeTurnBasedMultiplayerClient_t1128837132 ** get_address_of_mTurnBasedClient_5() { return &___mTurnBasedClient_5; }
	inline void set_mTurnBasedClient_5(NativeTurnBasedMultiplayerClient_t1128837132 * value)
	{
		___mTurnBasedClient_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTurnBasedClient_5, value);
	}

	inline static int32_t get_offset_of_mRealTimeClient_6() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mRealTimeClient_6)); }
	inline NativeRealtimeMultiplayerClient_t1467017973 * get_mRealTimeClient_6() const { return ___mRealTimeClient_6; }
	inline NativeRealtimeMultiplayerClient_t1467017973 ** get_address_of_mRealTimeClient_6() { return &___mRealTimeClient_6; }
	inline void set_mRealTimeClient_6(NativeRealtimeMultiplayerClient_t1467017973 * value)
	{
		___mRealTimeClient_6 = value;
		Il2CppCodeGenWriteBarrier(&___mRealTimeClient_6, value);
	}

	inline static int32_t get_offset_of_mSavedGameClient_7() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mSavedGameClient_7)); }
	inline Il2CppObject * get_mSavedGameClient_7() const { return ___mSavedGameClient_7; }
	inline Il2CppObject ** get_address_of_mSavedGameClient_7() { return &___mSavedGameClient_7; }
	inline void set_mSavedGameClient_7(Il2CppObject * value)
	{
		___mSavedGameClient_7 = value;
		Il2CppCodeGenWriteBarrier(&___mSavedGameClient_7, value);
	}

	inline static int32_t get_offset_of_mEventsClient_8() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mEventsClient_8)); }
	inline Il2CppObject * get_mEventsClient_8() const { return ___mEventsClient_8; }
	inline Il2CppObject ** get_address_of_mEventsClient_8() { return &___mEventsClient_8; }
	inline void set_mEventsClient_8(Il2CppObject * value)
	{
		___mEventsClient_8 = value;
		Il2CppCodeGenWriteBarrier(&___mEventsClient_8, value);
	}

	inline static int32_t get_offset_of_mQuestsClient_9() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mQuestsClient_9)); }
	inline Il2CppObject * get_mQuestsClient_9() const { return ___mQuestsClient_9; }
	inline Il2CppObject ** get_address_of_mQuestsClient_9() { return &___mQuestsClient_9; }
	inline void set_mQuestsClient_9(Il2CppObject * value)
	{
		___mQuestsClient_9 = value;
		Il2CppCodeGenWriteBarrier(&___mQuestsClient_9, value);
	}

	inline static int32_t get_offset_of_mVideoClient_10() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mVideoClient_10)); }
	inline Il2CppObject * get_mVideoClient_10() const { return ___mVideoClient_10; }
	inline Il2CppObject ** get_address_of_mVideoClient_10() { return &___mVideoClient_10; }
	inline void set_mVideoClient_10(Il2CppObject * value)
	{
		___mVideoClient_10 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoClient_10, value);
	}

	inline static int32_t get_offset_of_mTokenClient_11() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mTokenClient_11)); }
	inline Il2CppObject * get_mTokenClient_11() const { return ___mTokenClient_11; }
	inline Il2CppObject ** get_address_of_mTokenClient_11() { return &___mTokenClient_11; }
	inline void set_mTokenClient_11(Il2CppObject * value)
	{
		___mTokenClient_11 = value;
		Il2CppCodeGenWriteBarrier(&___mTokenClient_11, value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_12() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mInvitationDelegate_12)); }
	inline Action_2_t979687468 * get_mInvitationDelegate_12() const { return ___mInvitationDelegate_12; }
	inline Action_2_t979687468 ** get_address_of_mInvitationDelegate_12() { return &___mInvitationDelegate_12; }
	inline void set_mInvitationDelegate_12(Action_2_t979687468 * value)
	{
		___mInvitationDelegate_12 = value;
		Il2CppCodeGenWriteBarrier(&___mInvitationDelegate_12, value);
	}

	inline static int32_t get_offset_of_mAchievements_13() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mAchievements_13)); }
	inline Dictionary_2_t1795441325 * get_mAchievements_13() const { return ___mAchievements_13; }
	inline Dictionary_2_t1795441325 ** get_address_of_mAchievements_13() { return &___mAchievements_13; }
	inline void set_mAchievements_13(Dictionary_2_t1795441325 * value)
	{
		___mAchievements_13 = value;
		Il2CppCodeGenWriteBarrier(&___mAchievements_13, value);
	}

	inline static int32_t get_offset_of_mUser_14() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mUser_14)); }
	inline Player_t258639277 * get_mUser_14() const { return ___mUser_14; }
	inline Player_t258639277 ** get_address_of_mUser_14() { return &___mUser_14; }
	inline void set_mUser_14(Player_t258639277 * value)
	{
		___mUser_14 = value;
		Il2CppCodeGenWriteBarrier(&___mUser_14, value);
	}

	inline static int32_t get_offset_of_mFriends_15() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mFriends_15)); }
	inline List_1_t3922727705 * get_mFriends_15() const { return ___mFriends_15; }
	inline List_1_t3922727705 ** get_address_of_mFriends_15() { return &___mFriends_15; }
	inline void set_mFriends_15(List_1_t3922727705 * value)
	{
		___mFriends_15 = value;
		Il2CppCodeGenWriteBarrier(&___mFriends_15, value);
	}

	inline static int32_t get_offset_of_mPendingAuthCallbacks_16() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mPendingAuthCallbacks_16)); }
	inline Action_2_t1865222972 * get_mPendingAuthCallbacks_16() const { return ___mPendingAuthCallbacks_16; }
	inline Action_2_t1865222972 ** get_address_of_mPendingAuthCallbacks_16() { return &___mPendingAuthCallbacks_16; }
	inline void set_mPendingAuthCallbacks_16(Action_2_t1865222972 * value)
	{
		___mPendingAuthCallbacks_16 = value;
		Il2CppCodeGenWriteBarrier(&___mPendingAuthCallbacks_16, value);
	}

	inline static int32_t get_offset_of_mSilentAuthCallbacks_17() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mSilentAuthCallbacks_17)); }
	inline Action_2_t1865222972 * get_mSilentAuthCallbacks_17() const { return ___mSilentAuthCallbacks_17; }
	inline Action_2_t1865222972 ** get_address_of_mSilentAuthCallbacks_17() { return &___mSilentAuthCallbacks_17; }
	inline void set_mSilentAuthCallbacks_17(Action_2_t1865222972 * value)
	{
		___mSilentAuthCallbacks_17 = value;
		Il2CppCodeGenWriteBarrier(&___mSilentAuthCallbacks_17, value);
	}

	inline static int32_t get_offset_of_mAuthState_18() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mAuthState_18)); }
	inline int32_t get_mAuthState_18() const { return ___mAuthState_18; }
	inline int32_t* get_address_of_mAuthState_18() { return &___mAuthState_18; }
	inline void set_mAuthState_18(int32_t value)
	{
		___mAuthState_18 = value;
	}

	inline static int32_t get_offset_of_mAuthGeneration_19() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mAuthGeneration_19)); }
	inline uint32_t get_mAuthGeneration_19() const { return ___mAuthGeneration_19; }
	inline uint32_t* get_address_of_mAuthGeneration_19() { return &___mAuthGeneration_19; }
	inline void set_mAuthGeneration_19(uint32_t value)
	{
		___mAuthGeneration_19 = value;
	}

	inline static int32_t get_offset_of_mSilentAuthFailed_20() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___mSilentAuthFailed_20)); }
	inline bool get_mSilentAuthFailed_20() const { return ___mSilentAuthFailed_20; }
	inline bool* get_address_of_mSilentAuthFailed_20() { return &___mSilentAuthFailed_20; }
	inline void set_mSilentAuthFailed_20(bool value)
	{
		___mSilentAuthFailed_20 = value;
	}

	inline static int32_t get_offset_of_friendsLoading_21() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770, ___friendsLoading_21)); }
	inline bool get_friendsLoading_21() const { return ___friendsLoading_21; }
	inline bool* get_address_of_friendsLoading_21() { return &___friendsLoading_21; }
	inline void set_friendsLoading_21(bool value)
	{
		___friendsLoading_21 = value;
	}
};

struct NativeClient_t3826918770_StaticFields
{
public:
	// System.Predicate`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.Native.NativeClient::<>f__am$cache0
	Predicate_1_t2618599474 * ___U3CU3Ef__amU24cache0_22;
	// System.Predicate`1<GooglePlayGames.BasicApi.Achievement> GooglePlayGames.Native.NativeClient::<>f__am$cache1
	Predicate_1_t2618599474 * ___U3CU3Ef__amU24cache1_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_22() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770_StaticFields, ___U3CU3Ef__amU24cache0_22)); }
	inline Predicate_1_t2618599474 * get_U3CU3Ef__amU24cache0_22() const { return ___U3CU3Ef__amU24cache0_22; }
	inline Predicate_1_t2618599474 ** get_address_of_U3CU3Ef__amU24cache0_22() { return &___U3CU3Ef__amU24cache0_22; }
	inline void set_U3CU3Ef__amU24cache0_22(Predicate_1_t2618599474 * value)
	{
		___U3CU3Ef__amU24cache0_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_23() { return static_cast<int32_t>(offsetof(NativeClient_t3826918770_StaticFields, ___U3CU3Ef__amU24cache1_23)); }
	inline Predicate_1_t2618599474 * get_U3CU3Ef__amU24cache1_23() const { return ___U3CU3Ef__amU24cache1_23; }
	inline Predicate_1_t2618599474 ** get_address_of_U3CU3Ef__amU24cache1_23() { return &___U3CU3Ef__amU24cache1_23; }
	inline void set_U3CU3Ef__amU24cache1_23(Predicate_1_t2618599474 * value)
	{
		___U3CU3Ef__amU24cache1_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
