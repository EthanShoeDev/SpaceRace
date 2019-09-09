#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t686458704;
// System.Action`2<System.Byte[],System.Byte[]>
struct Action_2_t383155989;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher
struct  Prefetcher_t3127534619  : public Il2CppObject
{
public:
	// System.Object GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mLock
	Il2CppObject * ___mLock_0;
	// System.Boolean GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mOriginalDataFetched
	bool ___mOriginalDataFetched_1;
	// System.Byte[] GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mOriginalData
	ByteU5BU5D_t3397334013* ___mOriginalData_2;
	// System.Boolean GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mUnmergedDataFetched
	bool ___mUnmergedDataFetched_3;
	// System.Byte[] GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mUnmergedData
	ByteU5BU5D_t3397334013* ___mUnmergedData_4;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::completedCallback
	Action_2_t686458704 * ___completedCallback_5;
	// System.Action`2<System.Byte[],System.Byte[]> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::mDataFetchedCallback
	Action_2_t383155989 * ___mDataFetchedCallback_6;

public:
	inline static int32_t get_offset_of_mLock_0() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___mLock_0)); }
	inline Il2CppObject * get_mLock_0() const { return ___mLock_0; }
	inline Il2CppObject ** get_address_of_mLock_0() { return &___mLock_0; }
	inline void set_mLock_0(Il2CppObject * value)
	{
		___mLock_0 = value;
		Il2CppCodeGenWriteBarrier(&___mLock_0, value);
	}

	inline static int32_t get_offset_of_mOriginalDataFetched_1() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___mOriginalDataFetched_1)); }
	inline bool get_mOriginalDataFetched_1() const { return ___mOriginalDataFetched_1; }
	inline bool* get_address_of_mOriginalDataFetched_1() { return &___mOriginalDataFetched_1; }
	inline void set_mOriginalDataFetched_1(bool value)
	{
		___mOriginalDataFetched_1 = value;
	}

	inline static int32_t get_offset_of_mOriginalData_2() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___mOriginalData_2)); }
	inline ByteU5BU5D_t3397334013* get_mOriginalData_2() const { return ___mOriginalData_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_mOriginalData_2() { return &___mOriginalData_2; }
	inline void set_mOriginalData_2(ByteU5BU5D_t3397334013* value)
	{
		___mOriginalData_2 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginalData_2, value);
	}

	inline static int32_t get_offset_of_mUnmergedDataFetched_3() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___mUnmergedDataFetched_3)); }
	inline bool get_mUnmergedDataFetched_3() const { return ___mUnmergedDataFetched_3; }
	inline bool* get_address_of_mUnmergedDataFetched_3() { return &___mUnmergedDataFetched_3; }
	inline void set_mUnmergedDataFetched_3(bool value)
	{
		___mUnmergedDataFetched_3 = value;
	}

	inline static int32_t get_offset_of_mUnmergedData_4() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___mUnmergedData_4)); }
	inline ByteU5BU5D_t3397334013* get_mUnmergedData_4() const { return ___mUnmergedData_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_mUnmergedData_4() { return &___mUnmergedData_4; }
	inline void set_mUnmergedData_4(ByteU5BU5D_t3397334013* value)
	{
		___mUnmergedData_4 = value;
		Il2CppCodeGenWriteBarrier(&___mUnmergedData_4, value);
	}

	inline static int32_t get_offset_of_completedCallback_5() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___completedCallback_5)); }
	inline Action_2_t686458704 * get_completedCallback_5() const { return ___completedCallback_5; }
	inline Action_2_t686458704 ** get_address_of_completedCallback_5() { return &___completedCallback_5; }
	inline void set_completedCallback_5(Action_2_t686458704 * value)
	{
		___completedCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___completedCallback_5, value);
	}

	inline static int32_t get_offset_of_mDataFetchedCallback_6() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619, ___mDataFetchedCallback_6)); }
	inline Action_2_t383155989 * get_mDataFetchedCallback_6() const { return ___mDataFetchedCallback_6; }
	inline Action_2_t383155989 ** get_address_of_mDataFetchedCallback_6() { return &___mDataFetchedCallback_6; }
	inline void set_mDataFetchedCallback_6(Action_2_t383155989 * value)
	{
		___mDataFetchedCallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___mDataFetchedCallback_6, value);
	}
};

struct Prefetcher_t3127534619_StaticFields
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<>f__am$cache0
	Action_2_t686458704 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<>f__am$cache1
	Action_2_t686458704 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_2_t686458704 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_2_t686458704 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_2_t686458704 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(Prefetcher_t3127534619_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_2_t686458704 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_2_t686458704 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_2_t686458704 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
