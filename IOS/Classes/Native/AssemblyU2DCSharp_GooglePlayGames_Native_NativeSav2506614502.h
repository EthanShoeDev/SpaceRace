#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t3769148875;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t3300763578;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t686458704;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver
struct  NativeConflictResolver_t2506614502  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.SnapshotManager GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mManager
	SnapshotManager_t3769148875 * ___mManager_0;
	// System.String GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mConflictId
	String_t* ___mConflictId_1;
	// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mOriginal
	NativeSnapshotMetadata_t3300763578 * ___mOriginal_2;
	// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mUnmerged
	NativeSnapshotMetadata_t3300763578 * ___mUnmerged_3;
	// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata> GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mCompleteCallback
	Action_2_t686458704 * ___mCompleteCallback_4;
	// System.Action GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::mRetryFileOpen
	Action_t3226471752 * ___mRetryFileOpen_5;

public:
	inline static int32_t get_offset_of_mManager_0() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t2506614502, ___mManager_0)); }
	inline SnapshotManager_t3769148875 * get_mManager_0() const { return ___mManager_0; }
	inline SnapshotManager_t3769148875 ** get_address_of_mManager_0() { return &___mManager_0; }
	inline void set_mManager_0(SnapshotManager_t3769148875 * value)
	{
		___mManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___mManager_0, value);
	}

	inline static int32_t get_offset_of_mConflictId_1() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t2506614502, ___mConflictId_1)); }
	inline String_t* get_mConflictId_1() const { return ___mConflictId_1; }
	inline String_t** get_address_of_mConflictId_1() { return &___mConflictId_1; }
	inline void set_mConflictId_1(String_t* value)
	{
		___mConflictId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mConflictId_1, value);
	}

	inline static int32_t get_offset_of_mOriginal_2() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t2506614502, ___mOriginal_2)); }
	inline NativeSnapshotMetadata_t3300763578 * get_mOriginal_2() const { return ___mOriginal_2; }
	inline NativeSnapshotMetadata_t3300763578 ** get_address_of_mOriginal_2() { return &___mOriginal_2; }
	inline void set_mOriginal_2(NativeSnapshotMetadata_t3300763578 * value)
	{
		___mOriginal_2 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginal_2, value);
	}

	inline static int32_t get_offset_of_mUnmerged_3() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t2506614502, ___mUnmerged_3)); }
	inline NativeSnapshotMetadata_t3300763578 * get_mUnmerged_3() const { return ___mUnmerged_3; }
	inline NativeSnapshotMetadata_t3300763578 ** get_address_of_mUnmerged_3() { return &___mUnmerged_3; }
	inline void set_mUnmerged_3(NativeSnapshotMetadata_t3300763578 * value)
	{
		___mUnmerged_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUnmerged_3, value);
	}

	inline static int32_t get_offset_of_mCompleteCallback_4() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t2506614502, ___mCompleteCallback_4)); }
	inline Action_2_t686458704 * get_mCompleteCallback_4() const { return ___mCompleteCallback_4; }
	inline Action_2_t686458704 ** get_address_of_mCompleteCallback_4() { return &___mCompleteCallback_4; }
	inline void set_mCompleteCallback_4(Action_2_t686458704 * value)
	{
		___mCompleteCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCompleteCallback_4, value);
	}

	inline static int32_t get_offset_of_mRetryFileOpen_5() { return static_cast<int32_t>(offsetof(NativeConflictResolver_t2506614502, ___mRetryFileOpen_5)); }
	inline Action_t3226471752 * get_mRetryFileOpen_5() const { return ___mRetryFileOpen_5; }
	inline Action_t3226471752 ** get_address_of_mRetryFileOpen_5() { return &___mRetryFileOpen_5; }
	inline void set_mRetryFileOpen_5(Action_t3226471752 * value)
	{
		___mRetryFileOpen_5 = value;
		Il2CppCodeGenWriteBarrier(&___mRetryFileOpen_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
