#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<Level>
struct List_1_t235974914;
// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Int32>
struct Dictionary_2_t3016621180;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2939277584  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemySpawner::EnemyTypes
	List_1_t1125654279 * ___EnemyTypes_2;
	// System.Single EnemySpawner::HorizontalSpawnPos
	float ___HorizontalSpawnPos_3;
	// System.Collections.Generic.List`1<Level> EnemySpawner::lvls
	List_1_t235974914 * ___lvls_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Color,System.Int32> EnemySpawner::color2prefabLookup
	Dictionary_2_t3016621180 * ___color2prefabLookup_5;
	// UnityEngine.GameObject EnemySpawner::lastSpawnedObject
	GameObject_t1756533147 * ___lastSpawnedObject_6;

public:
	inline static int32_t get_offset_of_EnemyTypes_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___EnemyTypes_2)); }
	inline List_1_t1125654279 * get_EnemyTypes_2() const { return ___EnemyTypes_2; }
	inline List_1_t1125654279 ** get_address_of_EnemyTypes_2() { return &___EnemyTypes_2; }
	inline void set_EnemyTypes_2(List_1_t1125654279 * value)
	{
		___EnemyTypes_2 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyTypes_2, value);
	}

	inline static int32_t get_offset_of_HorizontalSpawnPos_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___HorizontalSpawnPos_3)); }
	inline float get_HorizontalSpawnPos_3() const { return ___HorizontalSpawnPos_3; }
	inline float* get_address_of_HorizontalSpawnPos_3() { return &___HorizontalSpawnPos_3; }
	inline void set_HorizontalSpawnPos_3(float value)
	{
		___HorizontalSpawnPos_3 = value;
	}

	inline static int32_t get_offset_of_lvls_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___lvls_4)); }
	inline List_1_t235974914 * get_lvls_4() const { return ___lvls_4; }
	inline List_1_t235974914 ** get_address_of_lvls_4() { return &___lvls_4; }
	inline void set_lvls_4(List_1_t235974914 * value)
	{
		___lvls_4 = value;
		Il2CppCodeGenWriteBarrier(&___lvls_4, value);
	}

	inline static int32_t get_offset_of_color2prefabLookup_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___color2prefabLookup_5)); }
	inline Dictionary_2_t3016621180 * get_color2prefabLookup_5() const { return ___color2prefabLookup_5; }
	inline Dictionary_2_t3016621180 ** get_address_of_color2prefabLookup_5() { return &___color2prefabLookup_5; }
	inline void set_color2prefabLookup_5(Dictionary_2_t3016621180 * value)
	{
		___color2prefabLookup_5 = value;
		Il2CppCodeGenWriteBarrier(&___color2prefabLookup_5, value);
	}

	inline static int32_t get_offset_of_lastSpawnedObject_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___lastSpawnedObject_6)); }
	inline GameObject_t1756533147 * get_lastSpawnedObject_6() const { return ___lastSpawnedObject_6; }
	inline GameObject_t1756533147 ** get_address_of_lastSpawnedObject_6() { return &___lastSpawnedObject_6; }
	inline void set_lastSpawnedObject_6(GameObject_t1756533147 * value)
	{
		___lastSpawnedObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___lastSpawnedObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
