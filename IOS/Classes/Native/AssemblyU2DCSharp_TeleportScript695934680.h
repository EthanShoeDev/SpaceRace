#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TeleportScript
struct  TeleportScript_t695934680  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TeleportScript::Cooldown
	float ___Cooldown_2;
	// UnityEngine.UI.Text TeleportScript::CountDownText
	Text_t356221433 * ___CountDownText_3;
	// System.Single TeleportScript::TeleportDist
	float ___TeleportDist_4;
	// System.Single TeleportScript::LerpSpeed
	float ___LerpSpeed_5;
	// System.Single TeleportScript::TimeToTeleport
	float ___TimeToTeleport_6;
	// System.Single TeleportScript::baseTeleDist
	float ___baseTeleDist_7;
	// System.Single TeleportScript::baseSpeed
	float ___baseSpeed_8;
	// System.Single TeleportScript::coolDownLeft
	float ___coolDownLeft_9;
	// UnityEngine.UI.Image TeleportScript::imgRender
	Image_t2042527209 * ___imgRender_10;
	// System.Boolean TeleportScript::isTeleporting
	bool ___isTeleporting_11;
	// System.Single TeleportScript::lerp
	float ___lerp_12;
	// System.Single TeleportScript::teleSpeed
	float ___teleSpeed_13;
	// System.Int32 TeleportScript::fileId
	int32_t ___fileId_14;
	// System.Int32 TeleportScript::streamId
	int32_t ___streamId_15;

public:
	inline static int32_t get_offset_of_Cooldown_2() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___Cooldown_2)); }
	inline float get_Cooldown_2() const { return ___Cooldown_2; }
	inline float* get_address_of_Cooldown_2() { return &___Cooldown_2; }
	inline void set_Cooldown_2(float value)
	{
		___Cooldown_2 = value;
	}

	inline static int32_t get_offset_of_CountDownText_3() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___CountDownText_3)); }
	inline Text_t356221433 * get_CountDownText_3() const { return ___CountDownText_3; }
	inline Text_t356221433 ** get_address_of_CountDownText_3() { return &___CountDownText_3; }
	inline void set_CountDownText_3(Text_t356221433 * value)
	{
		___CountDownText_3 = value;
		Il2CppCodeGenWriteBarrier(&___CountDownText_3, value);
	}

	inline static int32_t get_offset_of_TeleportDist_4() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___TeleportDist_4)); }
	inline float get_TeleportDist_4() const { return ___TeleportDist_4; }
	inline float* get_address_of_TeleportDist_4() { return &___TeleportDist_4; }
	inline void set_TeleportDist_4(float value)
	{
		___TeleportDist_4 = value;
	}

	inline static int32_t get_offset_of_LerpSpeed_5() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___LerpSpeed_5)); }
	inline float get_LerpSpeed_5() const { return ___LerpSpeed_5; }
	inline float* get_address_of_LerpSpeed_5() { return &___LerpSpeed_5; }
	inline void set_LerpSpeed_5(float value)
	{
		___LerpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_TimeToTeleport_6() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___TimeToTeleport_6)); }
	inline float get_TimeToTeleport_6() const { return ___TimeToTeleport_6; }
	inline float* get_address_of_TimeToTeleport_6() { return &___TimeToTeleport_6; }
	inline void set_TimeToTeleport_6(float value)
	{
		___TimeToTeleport_6 = value;
	}

	inline static int32_t get_offset_of_baseTeleDist_7() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___baseTeleDist_7)); }
	inline float get_baseTeleDist_7() const { return ___baseTeleDist_7; }
	inline float* get_address_of_baseTeleDist_7() { return &___baseTeleDist_7; }
	inline void set_baseTeleDist_7(float value)
	{
		___baseTeleDist_7 = value;
	}

	inline static int32_t get_offset_of_baseSpeed_8() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___baseSpeed_8)); }
	inline float get_baseSpeed_8() const { return ___baseSpeed_8; }
	inline float* get_address_of_baseSpeed_8() { return &___baseSpeed_8; }
	inline void set_baseSpeed_8(float value)
	{
		___baseSpeed_8 = value;
	}

	inline static int32_t get_offset_of_coolDownLeft_9() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___coolDownLeft_9)); }
	inline float get_coolDownLeft_9() const { return ___coolDownLeft_9; }
	inline float* get_address_of_coolDownLeft_9() { return &___coolDownLeft_9; }
	inline void set_coolDownLeft_9(float value)
	{
		___coolDownLeft_9 = value;
	}

	inline static int32_t get_offset_of_imgRender_10() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___imgRender_10)); }
	inline Image_t2042527209 * get_imgRender_10() const { return ___imgRender_10; }
	inline Image_t2042527209 ** get_address_of_imgRender_10() { return &___imgRender_10; }
	inline void set_imgRender_10(Image_t2042527209 * value)
	{
		___imgRender_10 = value;
		Il2CppCodeGenWriteBarrier(&___imgRender_10, value);
	}

	inline static int32_t get_offset_of_isTeleporting_11() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___isTeleporting_11)); }
	inline bool get_isTeleporting_11() const { return ___isTeleporting_11; }
	inline bool* get_address_of_isTeleporting_11() { return &___isTeleporting_11; }
	inline void set_isTeleporting_11(bool value)
	{
		___isTeleporting_11 = value;
	}

	inline static int32_t get_offset_of_lerp_12() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___lerp_12)); }
	inline float get_lerp_12() const { return ___lerp_12; }
	inline float* get_address_of_lerp_12() { return &___lerp_12; }
	inline void set_lerp_12(float value)
	{
		___lerp_12 = value;
	}

	inline static int32_t get_offset_of_teleSpeed_13() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___teleSpeed_13)); }
	inline float get_teleSpeed_13() const { return ___teleSpeed_13; }
	inline float* get_address_of_teleSpeed_13() { return &___teleSpeed_13; }
	inline void set_teleSpeed_13(float value)
	{
		___teleSpeed_13 = value;
	}

	inline static int32_t get_offset_of_fileId_14() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___fileId_14)); }
	inline int32_t get_fileId_14() const { return ___fileId_14; }
	inline int32_t* get_address_of_fileId_14() { return &___fileId_14; }
	inline void set_fileId_14(int32_t value)
	{
		___fileId_14 = value;
	}

	inline static int32_t get_offset_of_streamId_15() { return static_cast<int32_t>(offsetof(TeleportScript_t695934680, ___streamId_15)); }
	inline int32_t get_streamId_15() const { return ___streamId_15; }
	inline int32_t* get_address_of_streamId_15() { return &___streamId_15; }
	inline void set_streamId_15(int32_t value)
	{
		___streamId_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
