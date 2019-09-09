#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlowTimeScript
struct  SlowTimeScript_t1551673367  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SlowTimeScript::Cooldown
	float ___Cooldown_2;
	// UnityEngine.UI.Text SlowTimeScript::CountDownText
	Text_t356221433 * ___CountDownText_3;
	// System.Single SlowTimeScript::SlowMoDur
	float ___SlowMoDur_4;
	// System.Single SlowTimeScript::SlowAmount
	float ___SlowAmount_5;
	// System.Single SlowTimeScript::LerpSpeed
	float ___LerpSpeed_6;
	// UnityEngine.GameObject SlowTimeScript::TimeOverlay
	GameObject_t1756533147 * ___TimeOverlay_7;
	// System.Single SlowTimeScript::OverlayMaxA
	float ___OverlayMaxA_8;
	// System.Single SlowTimeScript::OverlayMinA
	float ___OverlayMinA_9;
	// System.Single SlowTimeScript::baseDuration
	float ___baseDuration_10;
	// System.Single SlowTimeScript::coolDownLeft
	float ___coolDownLeft_11;
	// UnityEngine.UI.Image SlowTimeScript::imgRender
	Image_t2042527209 * ___imgRender_12;
	// System.Boolean SlowTimeScript::slowMoEnabled
	bool ___slowMoEnabled_13;
	// System.Single SlowTimeScript::startingSpeed
	float ___startingSpeed_14;
	// System.Single SlowTimeScript::lerp
	float ___lerp_15;
	// UnityEngine.UI.Image SlowTimeScript::overlay
	Image_t2042527209 * ___overlay_16;
	// UnityEngine.Color SlowTimeScript::overlayColor
	Color_t2020392075  ___overlayColor_17;
	// System.Int32 SlowTimeScript::fileId
	int32_t ___fileId_18;
	// System.Int32 SlowTimeScript::streamId
	int32_t ___streamId_19;

public:
	inline static int32_t get_offset_of_Cooldown_2() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___Cooldown_2)); }
	inline float get_Cooldown_2() const { return ___Cooldown_2; }
	inline float* get_address_of_Cooldown_2() { return &___Cooldown_2; }
	inline void set_Cooldown_2(float value)
	{
		___Cooldown_2 = value;
	}

	inline static int32_t get_offset_of_CountDownText_3() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___CountDownText_3)); }
	inline Text_t356221433 * get_CountDownText_3() const { return ___CountDownText_3; }
	inline Text_t356221433 ** get_address_of_CountDownText_3() { return &___CountDownText_3; }
	inline void set_CountDownText_3(Text_t356221433 * value)
	{
		___CountDownText_3 = value;
		Il2CppCodeGenWriteBarrier(&___CountDownText_3, value);
	}

	inline static int32_t get_offset_of_SlowMoDur_4() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___SlowMoDur_4)); }
	inline float get_SlowMoDur_4() const { return ___SlowMoDur_4; }
	inline float* get_address_of_SlowMoDur_4() { return &___SlowMoDur_4; }
	inline void set_SlowMoDur_4(float value)
	{
		___SlowMoDur_4 = value;
	}

	inline static int32_t get_offset_of_SlowAmount_5() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___SlowAmount_5)); }
	inline float get_SlowAmount_5() const { return ___SlowAmount_5; }
	inline float* get_address_of_SlowAmount_5() { return &___SlowAmount_5; }
	inline void set_SlowAmount_5(float value)
	{
		___SlowAmount_5 = value;
	}

	inline static int32_t get_offset_of_LerpSpeed_6() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___LerpSpeed_6)); }
	inline float get_LerpSpeed_6() const { return ___LerpSpeed_6; }
	inline float* get_address_of_LerpSpeed_6() { return &___LerpSpeed_6; }
	inline void set_LerpSpeed_6(float value)
	{
		___LerpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_TimeOverlay_7() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___TimeOverlay_7)); }
	inline GameObject_t1756533147 * get_TimeOverlay_7() const { return ___TimeOverlay_7; }
	inline GameObject_t1756533147 ** get_address_of_TimeOverlay_7() { return &___TimeOverlay_7; }
	inline void set_TimeOverlay_7(GameObject_t1756533147 * value)
	{
		___TimeOverlay_7 = value;
		Il2CppCodeGenWriteBarrier(&___TimeOverlay_7, value);
	}

	inline static int32_t get_offset_of_OverlayMaxA_8() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___OverlayMaxA_8)); }
	inline float get_OverlayMaxA_8() const { return ___OverlayMaxA_8; }
	inline float* get_address_of_OverlayMaxA_8() { return &___OverlayMaxA_8; }
	inline void set_OverlayMaxA_8(float value)
	{
		___OverlayMaxA_8 = value;
	}

	inline static int32_t get_offset_of_OverlayMinA_9() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___OverlayMinA_9)); }
	inline float get_OverlayMinA_9() const { return ___OverlayMinA_9; }
	inline float* get_address_of_OverlayMinA_9() { return &___OverlayMinA_9; }
	inline void set_OverlayMinA_9(float value)
	{
		___OverlayMinA_9 = value;
	}

	inline static int32_t get_offset_of_baseDuration_10() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___baseDuration_10)); }
	inline float get_baseDuration_10() const { return ___baseDuration_10; }
	inline float* get_address_of_baseDuration_10() { return &___baseDuration_10; }
	inline void set_baseDuration_10(float value)
	{
		___baseDuration_10 = value;
	}

	inline static int32_t get_offset_of_coolDownLeft_11() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___coolDownLeft_11)); }
	inline float get_coolDownLeft_11() const { return ___coolDownLeft_11; }
	inline float* get_address_of_coolDownLeft_11() { return &___coolDownLeft_11; }
	inline void set_coolDownLeft_11(float value)
	{
		___coolDownLeft_11 = value;
	}

	inline static int32_t get_offset_of_imgRender_12() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___imgRender_12)); }
	inline Image_t2042527209 * get_imgRender_12() const { return ___imgRender_12; }
	inline Image_t2042527209 ** get_address_of_imgRender_12() { return &___imgRender_12; }
	inline void set_imgRender_12(Image_t2042527209 * value)
	{
		___imgRender_12 = value;
		Il2CppCodeGenWriteBarrier(&___imgRender_12, value);
	}

	inline static int32_t get_offset_of_slowMoEnabled_13() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___slowMoEnabled_13)); }
	inline bool get_slowMoEnabled_13() const { return ___slowMoEnabled_13; }
	inline bool* get_address_of_slowMoEnabled_13() { return &___slowMoEnabled_13; }
	inline void set_slowMoEnabled_13(bool value)
	{
		___slowMoEnabled_13 = value;
	}

	inline static int32_t get_offset_of_startingSpeed_14() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___startingSpeed_14)); }
	inline float get_startingSpeed_14() const { return ___startingSpeed_14; }
	inline float* get_address_of_startingSpeed_14() { return &___startingSpeed_14; }
	inline void set_startingSpeed_14(float value)
	{
		___startingSpeed_14 = value;
	}

	inline static int32_t get_offset_of_lerp_15() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___lerp_15)); }
	inline float get_lerp_15() const { return ___lerp_15; }
	inline float* get_address_of_lerp_15() { return &___lerp_15; }
	inline void set_lerp_15(float value)
	{
		___lerp_15 = value;
	}

	inline static int32_t get_offset_of_overlay_16() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___overlay_16)); }
	inline Image_t2042527209 * get_overlay_16() const { return ___overlay_16; }
	inline Image_t2042527209 ** get_address_of_overlay_16() { return &___overlay_16; }
	inline void set_overlay_16(Image_t2042527209 * value)
	{
		___overlay_16 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_16, value);
	}

	inline static int32_t get_offset_of_overlayColor_17() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___overlayColor_17)); }
	inline Color_t2020392075  get_overlayColor_17() const { return ___overlayColor_17; }
	inline Color_t2020392075 * get_address_of_overlayColor_17() { return &___overlayColor_17; }
	inline void set_overlayColor_17(Color_t2020392075  value)
	{
		___overlayColor_17 = value;
	}

	inline static int32_t get_offset_of_fileId_18() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___fileId_18)); }
	inline int32_t get_fileId_18() const { return ___fileId_18; }
	inline int32_t* get_address_of_fileId_18() { return &___fileId_18; }
	inline void set_fileId_18(int32_t value)
	{
		___fileId_18 = value;
	}

	inline static int32_t get_offset_of_streamId_19() { return static_cast<int32_t>(offsetof(SlowTimeScript_t1551673367, ___streamId_19)); }
	inline int32_t get_streamId_19() const { return ___streamId_19; }
	inline int32_t* get_address_of_streamId_19() { return &___streamId_19; }
	inline void set_streamId_19(int32_t value)
	{
		___streamId_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
