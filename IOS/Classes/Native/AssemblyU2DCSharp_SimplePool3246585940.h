#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,SimplePool/Pool>
struct Dictionary_2_t3647314187;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePool
struct  SimplePool_t3246585940  : public Il2CppObject
{
public:

public:
};

struct SimplePool_t3246585940_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,SimplePool/Pool> SimplePool::pools
	Dictionary_2_t3647314187 * ___pools_1;

public:
	inline static int32_t get_offset_of_pools_1() { return static_cast<int32_t>(offsetof(SimplePool_t3246585940_StaticFields, ___pools_1)); }
	inline Dictionary_2_t3647314187 * get_pools_1() const { return ___pools_1; }
	inline Dictionary_2_t3647314187 ** get_address_of_pools_1() { return &___pools_1; }
	inline void set_pools_1(Dictionary_2_t3647314187 * value)
	{
		___pools_1 = value;
		Il2CppCodeGenWriteBarrier(&___pools_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
