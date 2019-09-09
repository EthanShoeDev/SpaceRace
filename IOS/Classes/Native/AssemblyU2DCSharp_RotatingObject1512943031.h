#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotatingObject
struct  RotatingObject_t1512943031  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RotatingObject::RotationSpeed
	float ___RotationSpeed_2;
	// System.Single RotatingObject::Variation
	float ___Variation_3;
	// System.Boolean RotatingObject::StartWithRandomRotation
	bool ___StartWithRandomRotation_4;
	// System.Single RotatingObject::baseRotationSpeed
	float ___baseRotationSpeed_5;

public:
	inline static int32_t get_offset_of_RotationSpeed_2() { return static_cast<int32_t>(offsetof(RotatingObject_t1512943031, ___RotationSpeed_2)); }
	inline float get_RotationSpeed_2() const { return ___RotationSpeed_2; }
	inline float* get_address_of_RotationSpeed_2() { return &___RotationSpeed_2; }
	inline void set_RotationSpeed_2(float value)
	{
		___RotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_Variation_3() { return static_cast<int32_t>(offsetof(RotatingObject_t1512943031, ___Variation_3)); }
	inline float get_Variation_3() const { return ___Variation_3; }
	inline float* get_address_of_Variation_3() { return &___Variation_3; }
	inline void set_Variation_3(float value)
	{
		___Variation_3 = value;
	}

	inline static int32_t get_offset_of_StartWithRandomRotation_4() { return static_cast<int32_t>(offsetof(RotatingObject_t1512943031, ___StartWithRandomRotation_4)); }
	inline bool get_StartWithRandomRotation_4() const { return ___StartWithRandomRotation_4; }
	inline bool* get_address_of_StartWithRandomRotation_4() { return &___StartWithRandomRotation_4; }
	inline void set_StartWithRandomRotation_4(bool value)
	{
		___StartWithRandomRotation_4 = value;
	}

	inline static int32_t get_offset_of_baseRotationSpeed_5() { return static_cast<int32_t>(offsetof(RotatingObject_t1512943031, ___baseRotationSpeed_5)); }
	inline float get_baseRotationSpeed_5() const { return ___baseRotationSpeed_5; }
	inline float* get_address_of_baseRotationSpeed_5() { return &___baseRotationSpeed_5; }
	inline void set_baseRotationSpeed_5(float value)
	{
		___baseRotationSpeed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
