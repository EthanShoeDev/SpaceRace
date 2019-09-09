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

// ExplosionOnTrigger
struct  ExplosionOnTrigger_t949452770  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ExplosionOnTrigger::ExplosionAnimation
	GameObject_t1756533147 * ___ExplosionAnimation_2;

public:
	inline static int32_t get_offset_of_ExplosionAnimation_2() { return static_cast<int32_t>(offsetof(ExplosionOnTrigger_t949452770, ___ExplosionAnimation_2)); }
	inline GameObject_t1756533147 * get_ExplosionAnimation_2() const { return ___ExplosionAnimation_2; }
	inline GameObject_t1756533147 ** get_address_of_ExplosionAnimation_2() { return &___ExplosionAnimation_2; }
	inline void set_ExplosionAnimation_2(GameObject_t1756533147 * value)
	{
		___ExplosionAnimation_2 = value;
		Il2CppCodeGenWriteBarrier(&___ExplosionAnimation_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
