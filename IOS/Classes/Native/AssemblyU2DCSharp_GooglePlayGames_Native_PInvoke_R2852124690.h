#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t348752010;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback
struct RealTimeRoomCallback_t1042818501;
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>
struct Func_2_t2073838798;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t2239587760;
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse>
struct Func_2_t3551473442;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback
struct RoomInboxUICallback_t1782046464;
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse>
struct Func_2_t3562773593;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback
struct WaitingRoomUICallback_t4176562825;
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse>
struct Func_2_t1995718015;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback
struct FetchInvitationsCallback_t2496370155;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback
struct LeaveRoomCallback_t3947062849;
// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback
struct SendReliableMessageCallback_t1540360936;
// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.IntPtr>
struct Func_2_t2686152591;
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse>
struct Func_2_t4138615349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.RealtimeManager
struct  RealtimeManager_t2852124690  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.RealtimeManager::mGameServices
	GameServices_t348752010 * ___mGameServices_0;

public:
	inline static int32_t get_offset_of_mGameServices_0() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690, ___mGameServices_0)); }
	inline GameServices_t348752010 * get_mGameServices_0() const { return ___mGameServices_0; }
	inline GameServices_t348752010 ** get_address_of_mGameServices_0() { return &___mGameServices_0; }
	inline void set_mGameServices_0(GameServices_t348752010 * value)
	{
		___mGameServices_0 = value;
		Il2CppCodeGenWriteBarrier(&___mGameServices_0, value);
	}
};

struct RealtimeManager_t2852124690_StaticFields
{
public:
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache0
	RealTimeRoomCallback_t1042818501 * ___U3CU3Ef__mgU24cache0_1;
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache1
	Func_2_t2073838798 * ___U3CU3Ef__mgU24cache1_2;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/PlayerSelectUICallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache2
	PlayerSelectUICallback_t2239587760 * ___U3CU3Ef__mgU24cache2_3;
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/RoomInboxUIResponse> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache3
	Func_2_t3551473442 * ___U3CU3Ef__mgU24cache3_4;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RoomInboxUICallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache4
	RoomInboxUICallback_t1782046464 * ___U3CU3Ef__mgU24cache4_5;
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache5
	Func_2_t3562773593 * ___U3CU3Ef__mgU24cache5_6;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/WaitingRoomUICallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache6
	WaitingRoomUICallback_t4176562825 * ___U3CU3Ef__mgU24cache6_7;
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/FetchInvitationsResponse> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache7
	Func_2_t1995718015 * ___U3CU3Ef__mgU24cache7_8;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/FetchInvitationsCallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache8
	FetchInvitationsCallback_t2496370155 * ___U3CU3Ef__mgU24cache8_9;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/LeaveRoomCallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cache9
	LeaveRoomCallback_t3947062849 * ___U3CU3Ef__mgU24cache9_10;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/RealTimeRoomCallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cacheA
	RealTimeRoomCallback_t1042818501 * ___U3CU3Ef__mgU24cacheA_11;
	// GooglePlayGames.Native.Cwrapper.RealTimeMultiplayerManager/SendReliableMessageCallback GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cacheB
	SendReliableMessageCallback_t1540360936 * ___U3CU3Ef__mgU24cacheB_12;
	// System.Func`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.IntPtr> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__am$cache0
	Func_2_t2686152591 * ___U3CU3Ef__amU24cache0_13;
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse> GooglePlayGames.Native.PInvoke.RealtimeManager::<>f__mg$cacheC
	Func_2_t4138615349 * ___U3CU3Ef__mgU24cacheC_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline RealTimeRoomCallback_t1042818501 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline RealTimeRoomCallback_t1042818501 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(RealTimeRoomCallback_t1042818501 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline Func_2_t2073838798 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline Func_2_t2073838798 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(Func_2_t2073838798 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_3() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache2_3)); }
	inline PlayerSelectUICallback_t2239587760 * get_U3CU3Ef__mgU24cache2_3() const { return ___U3CU3Ef__mgU24cache2_3; }
	inline PlayerSelectUICallback_t2239587760 ** get_address_of_U3CU3Ef__mgU24cache2_3() { return &___U3CU3Ef__mgU24cache2_3; }
	inline void set_U3CU3Ef__mgU24cache2_3(PlayerSelectUICallback_t2239587760 * value)
	{
		___U3CU3Ef__mgU24cache2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_4() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache3_4)); }
	inline Func_2_t3551473442 * get_U3CU3Ef__mgU24cache3_4() const { return ___U3CU3Ef__mgU24cache3_4; }
	inline Func_2_t3551473442 ** get_address_of_U3CU3Ef__mgU24cache3_4() { return &___U3CU3Ef__mgU24cache3_4; }
	inline void set_U3CU3Ef__mgU24cache3_4(Func_2_t3551473442 * value)
	{
		___U3CU3Ef__mgU24cache3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_5() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache4_5)); }
	inline RoomInboxUICallback_t1782046464 * get_U3CU3Ef__mgU24cache4_5() const { return ___U3CU3Ef__mgU24cache4_5; }
	inline RoomInboxUICallback_t1782046464 ** get_address_of_U3CU3Ef__mgU24cache4_5() { return &___U3CU3Ef__mgU24cache4_5; }
	inline void set_U3CU3Ef__mgU24cache4_5(RoomInboxUICallback_t1782046464 * value)
	{
		___U3CU3Ef__mgU24cache4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_6() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache5_6)); }
	inline Func_2_t3562773593 * get_U3CU3Ef__mgU24cache5_6() const { return ___U3CU3Ef__mgU24cache5_6; }
	inline Func_2_t3562773593 ** get_address_of_U3CU3Ef__mgU24cache5_6() { return &___U3CU3Ef__mgU24cache5_6; }
	inline void set_U3CU3Ef__mgU24cache5_6(Func_2_t3562773593 * value)
	{
		___U3CU3Ef__mgU24cache5_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_7() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache6_7)); }
	inline WaitingRoomUICallback_t4176562825 * get_U3CU3Ef__mgU24cache6_7() const { return ___U3CU3Ef__mgU24cache6_7; }
	inline WaitingRoomUICallback_t4176562825 ** get_address_of_U3CU3Ef__mgU24cache6_7() { return &___U3CU3Ef__mgU24cache6_7; }
	inline void set_U3CU3Ef__mgU24cache6_7(WaitingRoomUICallback_t4176562825 * value)
	{
		___U3CU3Ef__mgU24cache6_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_8() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache7_8)); }
	inline Func_2_t1995718015 * get_U3CU3Ef__mgU24cache7_8() const { return ___U3CU3Ef__mgU24cache7_8; }
	inline Func_2_t1995718015 ** get_address_of_U3CU3Ef__mgU24cache7_8() { return &___U3CU3Ef__mgU24cache7_8; }
	inline void set_U3CU3Ef__mgU24cache7_8(Func_2_t1995718015 * value)
	{
		___U3CU3Ef__mgU24cache7_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache7_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_9() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache8_9)); }
	inline FetchInvitationsCallback_t2496370155 * get_U3CU3Ef__mgU24cache8_9() const { return ___U3CU3Ef__mgU24cache8_9; }
	inline FetchInvitationsCallback_t2496370155 ** get_address_of_U3CU3Ef__mgU24cache8_9() { return &___U3CU3Ef__mgU24cache8_9; }
	inline void set_U3CU3Ef__mgU24cache8_9(FetchInvitationsCallback_t2496370155 * value)
	{
		___U3CU3Ef__mgU24cache8_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache8_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_10() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cache9_10)); }
	inline LeaveRoomCallback_t3947062849 * get_U3CU3Ef__mgU24cache9_10() const { return ___U3CU3Ef__mgU24cache9_10; }
	inline LeaveRoomCallback_t3947062849 ** get_address_of_U3CU3Ef__mgU24cache9_10() { return &___U3CU3Ef__mgU24cache9_10; }
	inline void set_U3CU3Ef__mgU24cache9_10(LeaveRoomCallback_t3947062849 * value)
	{
		___U3CU3Ef__mgU24cache9_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache9_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_11() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cacheA_11)); }
	inline RealTimeRoomCallback_t1042818501 * get_U3CU3Ef__mgU24cacheA_11() const { return ___U3CU3Ef__mgU24cacheA_11; }
	inline RealTimeRoomCallback_t1042818501 ** get_address_of_U3CU3Ef__mgU24cacheA_11() { return &___U3CU3Ef__mgU24cacheA_11; }
	inline void set_U3CU3Ef__mgU24cacheA_11(RealTimeRoomCallback_t1042818501 * value)
	{
		___U3CU3Ef__mgU24cacheA_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheA_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_12() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cacheB_12)); }
	inline SendReliableMessageCallback_t1540360936 * get_U3CU3Ef__mgU24cacheB_12() const { return ___U3CU3Ef__mgU24cacheB_12; }
	inline SendReliableMessageCallback_t1540360936 ** get_address_of_U3CU3Ef__mgU24cacheB_12() { return &___U3CU3Ef__mgU24cacheB_12; }
	inline void set_U3CU3Ef__mgU24cacheB_12(SendReliableMessageCallback_t1540360936 * value)
	{
		___U3CU3Ef__mgU24cacheB_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheB_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Func_2_t2686152591 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Func_2_t2686152591 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Func_2_t2686152591 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_14() { return static_cast<int32_t>(offsetof(RealtimeManager_t2852124690_StaticFields, ___U3CU3Ef__mgU24cacheC_14)); }
	inline Func_2_t4138615349 * get_U3CU3Ef__mgU24cacheC_14() const { return ___U3CU3Ef__mgU24cacheC_14; }
	inline Func_2_t4138615349 ** get_address_of_U3CU3Ef__mgU24cacheC_14() { return &___U3CU3Ef__mgU24cacheC_14; }
	inline void set_U3CU3Ef__mgU24cacheC_14(Func_2_t4138615349 * value)
	{
		___U3CU3Ef__mgU24cacheC_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cacheC_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
