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
// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse>
struct Func_2_t2462499959;
// GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback
struct FetchForPlayerCallback_t2680852957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.StatsManager
struct  StatsManager_t708751488  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.GameServices GooglePlayGames.Native.PInvoke.StatsManager::mServices
	GameServices_t348752010 * ___mServices_0;

public:
	inline static int32_t get_offset_of_mServices_0() { return static_cast<int32_t>(offsetof(StatsManager_t708751488, ___mServices_0)); }
	inline GameServices_t348752010 * get_mServices_0() const { return ___mServices_0; }
	inline GameServices_t348752010 ** get_address_of_mServices_0() { return &___mServices_0; }
	inline void set_mServices_0(GameServices_t348752010 * value)
	{
		___mServices_0 = value;
		Il2CppCodeGenWriteBarrier(&___mServices_0, value);
	}
};

struct StatsManager_t708751488_StaticFields
{
public:
	// System.Func`2<System.IntPtr,GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse> GooglePlayGames.Native.PInvoke.StatsManager::<>f__mg$cache0
	Func_2_t2462499959 * ___U3CU3Ef__mgU24cache0_1;
	// GooglePlayGames.Native.Cwrapper.StatsManager/FetchForPlayerCallback GooglePlayGames.Native.PInvoke.StatsManager::<>f__mg$cache1
	FetchForPlayerCallback_t2680852957 * ___U3CU3Ef__mgU24cache1_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(StatsManager_t708751488_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Func_2_t2462499959 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Func_2_t2462499959 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Func_2_t2462499959 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(StatsManager_t708751488_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline FetchForPlayerCallback_t2680852957 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline FetchForPlayerCallback_t2680852957 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(FetchForPlayerCallback_t2680852957 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
