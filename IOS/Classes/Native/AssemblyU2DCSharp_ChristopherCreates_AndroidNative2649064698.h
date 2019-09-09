#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChristopherCreates.AndroidNativeAudio.AndroidMediaPlayer
struct  AndroidMediaPlayer_t2649064698  : public Il2CppObject
{
public:
	// UnityEngine.AndroidJavaObject ChristopherCreates.AndroidNativeAudio.AndroidMediaPlayer::AndroidJavaObject
	AndroidJavaObject_t4251328308 * ___AndroidJavaObject_0;
	// System.Int32 ChristopherCreates.AndroidNativeAudio.AndroidMediaPlayer::ID
	int32_t ___ID_1;
	// System.Boolean ChristopherCreates.AndroidNativeAudio.AndroidMediaPlayer::PlayInBackground
	bool ___PlayInBackground_2;
	// System.Boolean ChristopherCreates.AndroidNativeAudio.AndroidMediaPlayer::IsAllPaused
	bool ___IsAllPaused_3;
	// System.Boolean ChristopherCreates.AndroidNativeAudio.AndroidMediaPlayer::WasPlaying
	bool ___WasPlaying_4;

public:
	inline static int32_t get_offset_of_AndroidJavaObject_0() { return static_cast<int32_t>(offsetof(AndroidMediaPlayer_t2649064698, ___AndroidJavaObject_0)); }
	inline AndroidJavaObject_t4251328308 * get_AndroidJavaObject_0() const { return ___AndroidJavaObject_0; }
	inline AndroidJavaObject_t4251328308 ** get_address_of_AndroidJavaObject_0() { return &___AndroidJavaObject_0; }
	inline void set_AndroidJavaObject_0(AndroidJavaObject_t4251328308 * value)
	{
		___AndroidJavaObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___AndroidJavaObject_0, value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(AndroidMediaPlayer_t2649064698, ___ID_1)); }
	inline int32_t get_ID_1() const { return ___ID_1; }
	inline int32_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(int32_t value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_PlayInBackground_2() { return static_cast<int32_t>(offsetof(AndroidMediaPlayer_t2649064698, ___PlayInBackground_2)); }
	inline bool get_PlayInBackground_2() const { return ___PlayInBackground_2; }
	inline bool* get_address_of_PlayInBackground_2() { return &___PlayInBackground_2; }
	inline void set_PlayInBackground_2(bool value)
	{
		___PlayInBackground_2 = value;
	}

	inline static int32_t get_offset_of_IsAllPaused_3() { return static_cast<int32_t>(offsetof(AndroidMediaPlayer_t2649064698, ___IsAllPaused_3)); }
	inline bool get_IsAllPaused_3() const { return ___IsAllPaused_3; }
	inline bool* get_address_of_IsAllPaused_3() { return &___IsAllPaused_3; }
	inline void set_IsAllPaused_3(bool value)
	{
		___IsAllPaused_3 = value;
	}

	inline static int32_t get_offset_of_WasPlaying_4() { return static_cast<int32_t>(offsetof(AndroidMediaPlayer_t2649064698, ___WasPlaying_4)); }
	inline bool get_WasPlaying_4() const { return ___WasPlaying_4; }
	inline bool* get_address_of_WasPlaying_4() { return &___WasPlaying_4; }
	inline void set_WasPlaying_4(bool value)
	{
		___WasPlaying_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
