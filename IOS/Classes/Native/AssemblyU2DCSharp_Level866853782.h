#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Pixel>
struct List_1_t2286167492;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Level
struct  Level_t866853782  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Pixel> Level::Pixels
	List_1_t2286167492 * ___Pixels_0;

public:
	inline static int32_t get_offset_of_Pixels_0() { return static_cast<int32_t>(offsetof(Level_t866853782, ___Pixels_0)); }
	inline List_1_t2286167492 * get_Pixels_0() const { return ___Pixels_0; }
	inline List_1_t2286167492 ** get_address_of_Pixels_0() { return &___Pixels_0; }
	inline void set_Pixels_0(List_1_t2286167492 * value)
	{
		___Pixels_0 = value;
		Il2CppCodeGenWriteBarrier(&___Pixels_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
