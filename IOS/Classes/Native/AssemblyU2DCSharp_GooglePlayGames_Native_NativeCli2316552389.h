#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2<System.Object,System.Object>
struct  U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t2316552389  : public Il2CppObject
{
public:
	// System.Action`2<T,S> GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2::callback
	Action_2_t2572051853 * ___callback_0;
	// T GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2::data
	Il2CppObject * ___data_1;
	// S GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2::msg
	Il2CppObject * ___msg_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t2316552389, ___callback_0)); }
	inline Action_2_t2572051853 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t2572051853 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t2572051853 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t2316552389, ___data_1)); }
	inline Il2CppObject * get_data_1() const { return ___data_1; }
	inline Il2CppObject ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Il2CppObject * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t2316552389, ___msg_2)); }
	inline Il2CppObject * get_msg_2() const { return ___msg_2; }
	inline Il2CppObject ** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(Il2CppObject * value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___msg_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
