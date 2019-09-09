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

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.PlayGamesUserProfile
struct  PlayGamesUserProfile_t3669903859  : public Il2CppObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_3;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_t3542995729 * ___mImage_4;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t3669903859, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier(&___mDisplayName_0, value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t3669903859, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayerId_1, value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t3669903859, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___mAvatarUrl_2, value);
	}

	inline static int32_t get_offset_of_mImageLoading_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t3669903859, ___mImageLoading_3)); }
	inline bool get_mImageLoading_3() const { return ___mImageLoading_3; }
	inline bool* get_address_of_mImageLoading_3() { return &___mImageLoading_3; }
	inline void set_mImageLoading_3(bool value)
	{
		___mImageLoading_3 = value;
	}

	inline static int32_t get_offset_of_mImage_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t3669903859, ___mImage_4)); }
	inline Texture2D_t3542995729 * get_mImage_4() const { return ___mImage_4; }
	inline Texture2D_t3542995729 ** get_address_of_mImage_4() { return &___mImage_4; }
	inline void set_mImage_4(Texture2D_t3542995729 * value)
	{
		___mImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___mImage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
