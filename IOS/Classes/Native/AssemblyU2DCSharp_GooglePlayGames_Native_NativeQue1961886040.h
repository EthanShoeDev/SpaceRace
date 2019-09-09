#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GooglePlayGames.Native.PInvoke.QuestManager
struct QuestManager_t3690642463;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeQuestClient
struct  NativeQuestClient_t1961886040  : public Il2CppObject
{
public:
	// GooglePlayGames.Native.PInvoke.QuestManager GooglePlayGames.Native.NativeQuestClient::mManager
	QuestManager_t3690642463 * ___mManager_0;

public:
	inline static int32_t get_offset_of_mManager_0() { return static_cast<int32_t>(offsetof(NativeQuestClient_t1961886040, ___mManager_0)); }
	inline QuestManager_t3690642463 * get_mManager_0() const { return ___mManager_0; }
	inline QuestManager_t3690642463 ** get_address_of_mManager_0() { return &___mManager_0; }
	inline void set_mManager_0(QuestManager_t3690642463 * value)
	{
		___mManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___mManager_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
