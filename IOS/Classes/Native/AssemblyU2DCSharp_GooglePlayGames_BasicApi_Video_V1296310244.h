#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_VideoCa3658338718.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_VideoQu3712660584.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct  VideoCaptureState_t1296310244  : public Il2CppObject
{
public:
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;

public:
	inline static int32_t get_offset_of_mIsCapturing_0() { return static_cast<int32_t>(offsetof(VideoCaptureState_t1296310244, ___mIsCapturing_0)); }
	inline bool get_mIsCapturing_0() const { return ___mIsCapturing_0; }
	inline bool* get_address_of_mIsCapturing_0() { return &___mIsCapturing_0; }
	inline void set_mIsCapturing_0(bool value)
	{
		___mIsCapturing_0 = value;
	}

	inline static int32_t get_offset_of_mCaptureMode_1() { return static_cast<int32_t>(offsetof(VideoCaptureState_t1296310244, ___mCaptureMode_1)); }
	inline int32_t get_mCaptureMode_1() const { return ___mCaptureMode_1; }
	inline int32_t* get_address_of_mCaptureMode_1() { return &___mCaptureMode_1; }
	inline void set_mCaptureMode_1(int32_t value)
	{
		___mCaptureMode_1 = value;
	}

	inline static int32_t get_offset_of_mQualityLevel_2() { return static_cast<int32_t>(offsetof(VideoCaptureState_t1296310244, ___mQualityLevel_2)); }
	inline int32_t get_mQualityLevel_2() const { return ___mQualityLevel_2; }
	inline int32_t* get_address_of_mQualityLevel_2() { return &___mQualityLevel_2; }
	inline void set_mQualityLevel_2(int32_t value)
	{
		___mQualityLevel_2 = value;
	}

	inline static int32_t get_offset_of_mIsOverlayVisible_3() { return static_cast<int32_t>(offsetof(VideoCaptureState_t1296310244, ___mIsOverlayVisible_3)); }
	inline bool get_mIsOverlayVisible_3() const { return ___mIsOverlayVisible_3; }
	inline bool* get_address_of_mIsOverlayVisible_3() { return &___mIsOverlayVisible_3; }
	inline void set_mIsOverlayVisible_3(bool value)
	{
		___mIsOverlayVisible_3 = value;
	}

	inline static int32_t get_offset_of_mIsPaused_4() { return static_cast<int32_t>(offsetof(VideoCaptureState_t1296310244, ___mIsPaused_4)); }
	inline bool get_mIsPaused_4() const { return ___mIsPaused_4; }
	inline bool* get_address_of_mIsPaused_4() { return &___mIsPaused_4; }
	inline void set_mIsPaused_4(bool value)
	{
		___mIsPaused_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
