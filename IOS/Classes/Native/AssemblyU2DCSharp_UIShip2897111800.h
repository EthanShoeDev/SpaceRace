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

// UIShip
struct  UIShip_t2897111800  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UIShip::Canvas
	GameObject_t1756533147 * ___Canvas_2;
	// UnityEngine.GameObject UIShip::MenuPanel
	GameObject_t1756533147 * ___MenuPanel_3;
	// UnityEngine.GameObject UIShip::Fire
	GameObject_t1756533147 * ___Fire_4;
	// System.Single UIShip::MovSpeed
	float ___MovSpeed_5;
	// System.Single UIShip::LerpSpeed
	float ___LerpSpeed_6;
	// System.Boolean UIShip::playStarted
	bool ___playStarted_7;
	// System.Single UIShip::lerp
	float ___lerp_8;

public:
	inline static int32_t get_offset_of_Canvas_2() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___Canvas_2)); }
	inline GameObject_t1756533147 * get_Canvas_2() const { return ___Canvas_2; }
	inline GameObject_t1756533147 ** get_address_of_Canvas_2() { return &___Canvas_2; }
	inline void set_Canvas_2(GameObject_t1756533147 * value)
	{
		___Canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___Canvas_2, value);
	}

	inline static int32_t get_offset_of_MenuPanel_3() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___MenuPanel_3)); }
	inline GameObject_t1756533147 * get_MenuPanel_3() const { return ___MenuPanel_3; }
	inline GameObject_t1756533147 ** get_address_of_MenuPanel_3() { return &___MenuPanel_3; }
	inline void set_MenuPanel_3(GameObject_t1756533147 * value)
	{
		___MenuPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___MenuPanel_3, value);
	}

	inline static int32_t get_offset_of_Fire_4() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___Fire_4)); }
	inline GameObject_t1756533147 * get_Fire_4() const { return ___Fire_4; }
	inline GameObject_t1756533147 ** get_address_of_Fire_4() { return &___Fire_4; }
	inline void set_Fire_4(GameObject_t1756533147 * value)
	{
		___Fire_4 = value;
		Il2CppCodeGenWriteBarrier(&___Fire_4, value);
	}

	inline static int32_t get_offset_of_MovSpeed_5() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___MovSpeed_5)); }
	inline float get_MovSpeed_5() const { return ___MovSpeed_5; }
	inline float* get_address_of_MovSpeed_5() { return &___MovSpeed_5; }
	inline void set_MovSpeed_5(float value)
	{
		___MovSpeed_5 = value;
	}

	inline static int32_t get_offset_of_LerpSpeed_6() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___LerpSpeed_6)); }
	inline float get_LerpSpeed_6() const { return ___LerpSpeed_6; }
	inline float* get_address_of_LerpSpeed_6() { return &___LerpSpeed_6; }
	inline void set_LerpSpeed_6(float value)
	{
		___LerpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_playStarted_7() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___playStarted_7)); }
	inline bool get_playStarted_7() const { return ___playStarted_7; }
	inline bool* get_address_of_playStarted_7() { return &___playStarted_7; }
	inline void set_playStarted_7(bool value)
	{
		___playStarted_7 = value;
	}

	inline static int32_t get_offset_of_lerp_8() { return static_cast<int32_t>(offsetof(UIShip_t2897111800, ___lerp_8)); }
	inline float get_lerp_8() const { return ___lerp_8; }
	inline float* get_address_of_lerp_8() { return &___lerp_8; }
	inline void set_lerp_8(float value)
	{
		___lerp_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
