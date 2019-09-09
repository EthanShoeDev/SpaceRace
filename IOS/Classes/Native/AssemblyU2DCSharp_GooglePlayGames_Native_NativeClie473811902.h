#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t2517032204;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_t2715232822;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<LoadAchievements>c__AnonStoreyC
struct  U3CLoadAchievementsU3Ec__AnonStoreyC_t473811902  : public Il2CppObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Achievement[]> GooglePlayGames.Native.NativeClient/<LoadAchievements>c__AnonStoreyC::callback
	Action_1_t2517032204 * ___callback_0;
	// GooglePlayGames.BasicApi.Achievement[] GooglePlayGames.Native.NativeClient/<LoadAchievements>c__AnonStoreyC::data
	AchievementU5BU5D_t2715232822* ___data_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLoadAchievementsU3Ec__AnonStoreyC_t473811902, ___callback_0)); }
	inline Action_1_t2517032204 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t2517032204 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t2517032204 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CLoadAchievementsU3Ec__AnonStoreyC_t473811902, ___data_1)); }
	inline AchievementU5BU5D_t2715232822* get_data_1() const { return ___data_1; }
	inline AchievementU5BU5D_t2715232822** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(AchievementU5BU5D_t2715232822* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
