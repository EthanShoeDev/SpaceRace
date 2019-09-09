#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa4139147467.h"

// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t686458704;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/<OpenWithAutomaticConflictResolution>c__AnonStorey0
struct  U3COpenWithAutomaticConflictResolutionU3Ec__AnonStorey0_t4174029749  : public Il2CppObject
{
public:
	// GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy GooglePlayGames.Native.NativeSavedGameClient/<OpenWithAutomaticConflictResolution>c__AnonStorey0::resolutionStrategy
	int32_t ___resolutionStrategy_0;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/<OpenWithAutomaticConflictResolution>c__AnonStorey0::callback
	Action_2_t686458704 * ___callback_1;

public:
	inline static int32_t get_offset_of_resolutionStrategy_0() { return static_cast<int32_t>(offsetof(U3COpenWithAutomaticConflictResolutionU3Ec__AnonStorey0_t4174029749, ___resolutionStrategy_0)); }
	inline int32_t get_resolutionStrategy_0() const { return ___resolutionStrategy_0; }
	inline int32_t* get_address_of_resolutionStrategy_0() { return &___resolutionStrategy_0; }
	inline void set_resolutionStrategy_0(int32_t value)
	{
		___resolutionStrategy_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3COpenWithAutomaticConflictResolutionU3Ec__AnonStorey0_t4174029749, ___callback_1)); }
	inline Action_2_t686458704 * get_callback_1() const { return ___callback_1; }
	inline Action_2_t686458704 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(Action_2_t686458704 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
