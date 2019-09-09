#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSour891715793.h"

// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t686458704;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t1500688787;
// GooglePlayGames.Native.NativeSavedGameClient
struct NativeSavedGameClient_t610532847;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3
struct  U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104  : public Il2CppObject
{
public:
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3::completedCallback
	Action_2_t686458704 * ___completedCallback_0;
	// System.String GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3::filename
	String_t* ___filename_1;
	// GooglePlayGames.BasicApi.DataSource GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3::source
	int32_t ___source_2;
	// System.Boolean GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3::prefetchDataOnConflict
	bool ___prefetchDataOnConflict_3;
	// GooglePlayGames.BasicApi.SavedGame.ConflictCallback GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3::conflictCallback
	ConflictCallback_t1500688787 * ___conflictCallback_4;
	// GooglePlayGames.Native.NativeSavedGameClient GooglePlayGames.Native.NativeSavedGameClient/<InternalManualOpen>c__AnonStorey3::$this
	NativeSavedGameClient_t610532847 * ___U24this_5;

public:
	inline static int32_t get_offset_of_completedCallback_0() { return static_cast<int32_t>(offsetof(U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104, ___completedCallback_0)); }
	inline Action_2_t686458704 * get_completedCallback_0() const { return ___completedCallback_0; }
	inline Action_2_t686458704 ** get_address_of_completedCallback_0() { return &___completedCallback_0; }
	inline void set_completedCallback_0(Action_2_t686458704 * value)
	{
		___completedCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___completedCallback_0, value);
	}

	inline static int32_t get_offset_of_filename_1() { return static_cast<int32_t>(offsetof(U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104, ___filename_1)); }
	inline String_t* get_filename_1() const { return ___filename_1; }
	inline String_t** get_address_of_filename_1() { return &___filename_1; }
	inline void set_filename_1(String_t* value)
	{
		___filename_1 = value;
		Il2CppCodeGenWriteBarrier(&___filename_1, value);
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104, ___source_2)); }
	inline int32_t get_source_2() const { return ___source_2; }
	inline int32_t* get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(int32_t value)
	{
		___source_2 = value;
	}

	inline static int32_t get_offset_of_prefetchDataOnConflict_3() { return static_cast<int32_t>(offsetof(U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104, ___prefetchDataOnConflict_3)); }
	inline bool get_prefetchDataOnConflict_3() const { return ___prefetchDataOnConflict_3; }
	inline bool* get_address_of_prefetchDataOnConflict_3() { return &___prefetchDataOnConflict_3; }
	inline void set_prefetchDataOnConflict_3(bool value)
	{
		___prefetchDataOnConflict_3 = value;
	}

	inline static int32_t get_offset_of_conflictCallback_4() { return static_cast<int32_t>(offsetof(U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104, ___conflictCallback_4)); }
	inline ConflictCallback_t1500688787 * get_conflictCallback_4() const { return ___conflictCallback_4; }
	inline ConflictCallback_t1500688787 ** get_address_of_conflictCallback_4() { return &___conflictCallback_4; }
	inline void set_conflictCallback_4(ConflictCallback_t1500688787 * value)
	{
		___conflictCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___conflictCallback_4, value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CInternalManualOpenU3Ec__AnonStorey3_t2316503104, ___U24this_5)); }
	inline NativeSavedGameClient_t610532847 * get_U24this_5() const { return ___U24this_5; }
	inline NativeSavedGameClient_t610532847 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(NativeSavedGameClient_t610532847 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
