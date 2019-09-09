#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t3627374100;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3826918770;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<UpdateAchievement>c__AnonStoreyF
struct  U3CUpdateAchievementU3Ec__AnonStoreyF_t2851141557  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.Native.NativeClient/<UpdateAchievement>c__AnonStoreyF::achId
	String_t* ___achId_0;
	// System.Action`1<System.Boolean> GooglePlayGames.Native.NativeClient/<UpdateAchievement>c__AnonStoreyF::callback
	Action_1_t3627374100 * ___callback_1;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeClient/<UpdateAchievement>c__AnonStoreyF::$this
	NativeClient_t3826918770 * ___U24this_2;

public:
	inline static int32_t get_offset_of_achId_0() { return static_cast<int32_t>(offsetof(U3CUpdateAchievementU3Ec__AnonStoreyF_t2851141557, ___achId_0)); }
	inline String_t* get_achId_0() const { return ___achId_0; }
	inline String_t** get_address_of_achId_0() { return &___achId_0; }
	inline void set_achId_0(String_t* value)
	{
		___achId_0 = value;
		Il2CppCodeGenWriteBarrier(&___achId_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CUpdateAchievementU3Ec__AnonStoreyF_t2851141557, ___callback_1)); }
	inline Action_1_t3627374100 * get_callback_1() const { return ___callback_1; }
	inline Action_1_t3627374100 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_1_t3627374100 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CUpdateAchievementU3Ec__AnonStoreyF_t2851141557, ___U24this_2)); }
	inline NativeClient_t3826918770 * get_U24this_2() const { return ___U24this_2; }
	inline NativeClient_t3826918770 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(NativeClient_t3826918770 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
