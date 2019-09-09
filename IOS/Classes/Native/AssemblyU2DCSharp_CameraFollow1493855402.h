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
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraFollow::Target
	GameObject_t1756533147 * ___Target_2;
	// System.Single CameraFollow::Ymin
	float ___Ymin_3;
	// System.Single CameraFollow::Ymax
	float ___Ymax_4;
	// System.Single CameraFollow::CameraMovSpeed
	float ___CameraMovSpeed_5;
	// UnityEngine.Camera CameraFollow::camComp
	Camera_t189460977 * ___camComp_6;

public:
	inline static int32_t get_offset_of_Target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___Target_2)); }
	inline GameObject_t1756533147 * get_Target_2() const { return ___Target_2; }
	inline GameObject_t1756533147 ** get_address_of_Target_2() { return &___Target_2; }
	inline void set_Target_2(GameObject_t1756533147 * value)
	{
		___Target_2 = value;
		Il2CppCodeGenWriteBarrier(&___Target_2, value);
	}

	inline static int32_t get_offset_of_Ymin_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___Ymin_3)); }
	inline float get_Ymin_3() const { return ___Ymin_3; }
	inline float* get_address_of_Ymin_3() { return &___Ymin_3; }
	inline void set_Ymin_3(float value)
	{
		___Ymin_3 = value;
	}

	inline static int32_t get_offset_of_Ymax_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___Ymax_4)); }
	inline float get_Ymax_4() const { return ___Ymax_4; }
	inline float* get_address_of_Ymax_4() { return &___Ymax_4; }
	inline void set_Ymax_4(float value)
	{
		___Ymax_4 = value;
	}

	inline static int32_t get_offset_of_CameraMovSpeed_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___CameraMovSpeed_5)); }
	inline float get_CameraMovSpeed_5() const { return ___CameraMovSpeed_5; }
	inline float* get_address_of_CameraMovSpeed_5() { return &___CameraMovSpeed_5; }
	inline void set_CameraMovSpeed_5(float value)
	{
		___CameraMovSpeed_5 = value;
	}

	inline static int32_t get_offset_of_camComp_6() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___camComp_6)); }
	inline Camera_t189460977 * get_camComp_6() const { return ___camComp_6; }
	inline Camera_t189460977 ** get_address_of_camComp_6() { return &___camComp_6; }
	inline void set_camComp_6(Camera_t189460977 * value)
	{
		___camComp_6 = value;
		Il2CppCodeGenWriteBarrier(&___camComp_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
