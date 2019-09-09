#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RepeatingBck
struct  RepeatingBck_t3861501219  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RepeatingBck::XOffSet
	float ___XOffSet_2;
	// UnityEngine.GameObject RepeatingBck::OtherBack
	GameObject_t1756533147 * ___OtherBack_3;
	// System.Single RepeatingBck::XCamBound
	float ___XCamBound_4;

public:
	inline static int32_t get_offset_of_XOffSet_2() { return static_cast<int32_t>(offsetof(RepeatingBck_t3861501219, ___XOffSet_2)); }
	inline float get_XOffSet_2() const { return ___XOffSet_2; }
	inline float* get_address_of_XOffSet_2() { return &___XOffSet_2; }
	inline void set_XOffSet_2(float value)
	{
		___XOffSet_2 = value;
	}

	inline static int32_t get_offset_of_OtherBack_3() { return static_cast<int32_t>(offsetof(RepeatingBck_t3861501219, ___OtherBack_3)); }
	inline GameObject_t1756533147 * get_OtherBack_3() const { return ___OtherBack_3; }
	inline GameObject_t1756533147 ** get_address_of_OtherBack_3() { return &___OtherBack_3; }
	inline void set_OtherBack_3(GameObject_t1756533147 * value)
	{
		___OtherBack_3 = value;
		Il2CppCodeGenWriteBarrier(&___OtherBack_3, value);
	}

	inline static int32_t get_offset_of_XCamBound_4() { return static_cast<int32_t>(offsetof(RepeatingBck_t3861501219, ___XCamBound_4)); }
	inline float get_XCamBound_4() const { return ___XCamBound_4; }
	inline float* get_address_of_XCamBound_4() { return &___XCamBound_4; }
	inline void set_XCamBound_4(float value)
	{
		___XCamBound_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
