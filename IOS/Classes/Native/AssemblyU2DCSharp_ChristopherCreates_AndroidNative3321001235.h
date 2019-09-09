#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_AndroidJavaProxy4274989947.h"

// System.Action`1<System.Int32>
struct Action_1_t1873676830;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChristopherCreates.AndroidNativeAudio.OnCompletionListener
struct  OnCompletionListener_t3321001235  : public AndroidJavaProxy_t4274989947
{
public:
	// System.Action`1<System.Int32> ChristopherCreates.AndroidNativeAudio.OnCompletionListener::Callback
	Action_1_t1873676830 * ___Callback_1;

public:
	inline static int32_t get_offset_of_Callback_1() { return static_cast<int32_t>(offsetof(OnCompletionListener_t3321001235, ___Callback_1)); }
	inline Action_1_t1873676830 * get_Callback_1() const { return ___Callback_1; }
	inline Action_1_t1873676830 ** get_address_of_Callback_1() { return &___Callback_1; }
	inline void set_Callback_1(Action_1_t1873676830 * value)
	{
		___Callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___Callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
