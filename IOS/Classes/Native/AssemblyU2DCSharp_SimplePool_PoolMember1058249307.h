#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SimplePool/Pool
struct Pool_t316968743;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePool/PoolMember
struct  PoolMember_t1058249307  : public MonoBehaviour_t1158329972
{
public:
	// SimplePool/Pool SimplePool/PoolMember::myPool
	Pool_t316968743 * ___myPool_2;

public:
	inline static int32_t get_offset_of_myPool_2() { return static_cast<int32_t>(offsetof(PoolMember_t1058249307, ___myPool_2)); }
	inline Pool_t316968743 * get_myPool_2() const { return ___myPool_2; }
	inline Pool_t316968743 ** get_address_of_myPool_2() { return &___myPool_2; }
	inline void set_myPool_2(Pool_t316968743 * value)
	{
		___myPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___myPool_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
