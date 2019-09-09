#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`2<System.Boolean,System.String>
struct Action_2_t1865222972;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2<System.Boolean,System.String>
struct  U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t1609723508  : public Il2CppObject
{
public:
	// System.Action`2<T,S> GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2::callback
	Action_2_t1865222972 * ___callback_0;
	// T GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2::data
	bool ___data_1;
	// S GooglePlayGames.Native.NativeClient/<InvokeCallbackOnGameThread>c__AnonStorey1`2::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t1609723508, ___callback_0)); }
	inline Action_2_t1865222972 * get_callback_0() const { return ___callback_0; }
	inline Action_2_t1865222972 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_2_t1865222972 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t1609723508, ___data_1)); }
	inline bool get_data_1() const { return ___data_1; }
	inline bool* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(bool value)
	{
		___data_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CInvokeCallbackOnGameThreadU3Ec__AnonStorey1_2_t1609723508, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___msg_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
