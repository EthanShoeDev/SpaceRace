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
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t3973682211;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InvincibleScript
struct  InvincibleScript_t2594468098  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InvincibleScript::Cooldown
	float ___Cooldown_2;
	// UnityEngine.UI.Text InvincibleScript::CountDownText
	Text_t356221433 * ___CountDownText_3;
	// System.Single InvincibleScript::InvinDur
	float ___InvinDur_4;
	// System.Single InvincibleScript::SpriteCycleSpeed
	float ___SpriteCycleSpeed_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> InvincibleScript::SpritesList
	List_1_t3973682211 * ___SpritesList_6;
	// System.Int32 InvincibleScript::lastIndexUsed
	int32_t ___lastIndexUsed_7;
	// System.Single InvincibleScript::baseDuration
	float ___baseDuration_8;
	// System.Single InvincibleScript::baseCycleSpeed
	float ___baseCycleSpeed_9;
	// System.Single InvincibleScript::coolDownLeft
	float ___coolDownLeft_10;
	// UnityEngine.UI.Image InvincibleScript::imgRender
	Image_t2042527209 * ___imgRender_11;
	// System.Boolean InvincibleScript::invinEnabled
	bool ___invinEnabled_12;
	// UnityEngine.SpriteRenderer InvincibleScript::playerShipSpriteRend
	SpriteRenderer_t1209076198 * ___playerShipSpriteRend_13;
	// UnityEngine.Sprite InvincibleScript::orginalSprite
	Sprite_t309593783 * ___orginalSprite_14;
	// System.Int32 InvincibleScript::fileId
	int32_t ___fileId_15;
	// System.Int32 InvincibleScript::streamId
	int32_t ___streamId_16;

public:
	inline static int32_t get_offset_of_Cooldown_2() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___Cooldown_2)); }
	inline float get_Cooldown_2() const { return ___Cooldown_2; }
	inline float* get_address_of_Cooldown_2() { return &___Cooldown_2; }
	inline void set_Cooldown_2(float value)
	{
		___Cooldown_2 = value;
	}

	inline static int32_t get_offset_of_CountDownText_3() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___CountDownText_3)); }
	inline Text_t356221433 * get_CountDownText_3() const { return ___CountDownText_3; }
	inline Text_t356221433 ** get_address_of_CountDownText_3() { return &___CountDownText_3; }
	inline void set_CountDownText_3(Text_t356221433 * value)
	{
		___CountDownText_3 = value;
		Il2CppCodeGenWriteBarrier(&___CountDownText_3, value);
	}

	inline static int32_t get_offset_of_InvinDur_4() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___InvinDur_4)); }
	inline float get_InvinDur_4() const { return ___InvinDur_4; }
	inline float* get_address_of_InvinDur_4() { return &___InvinDur_4; }
	inline void set_InvinDur_4(float value)
	{
		___InvinDur_4 = value;
	}

	inline static int32_t get_offset_of_SpriteCycleSpeed_5() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___SpriteCycleSpeed_5)); }
	inline float get_SpriteCycleSpeed_5() const { return ___SpriteCycleSpeed_5; }
	inline float* get_address_of_SpriteCycleSpeed_5() { return &___SpriteCycleSpeed_5; }
	inline void set_SpriteCycleSpeed_5(float value)
	{
		___SpriteCycleSpeed_5 = value;
	}

	inline static int32_t get_offset_of_SpritesList_6() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___SpritesList_6)); }
	inline List_1_t3973682211 * get_SpritesList_6() const { return ___SpritesList_6; }
	inline List_1_t3973682211 ** get_address_of_SpritesList_6() { return &___SpritesList_6; }
	inline void set_SpritesList_6(List_1_t3973682211 * value)
	{
		___SpritesList_6 = value;
		Il2CppCodeGenWriteBarrier(&___SpritesList_6, value);
	}

	inline static int32_t get_offset_of_lastIndexUsed_7() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___lastIndexUsed_7)); }
	inline int32_t get_lastIndexUsed_7() const { return ___lastIndexUsed_7; }
	inline int32_t* get_address_of_lastIndexUsed_7() { return &___lastIndexUsed_7; }
	inline void set_lastIndexUsed_7(int32_t value)
	{
		___lastIndexUsed_7 = value;
	}

	inline static int32_t get_offset_of_baseDuration_8() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___baseDuration_8)); }
	inline float get_baseDuration_8() const { return ___baseDuration_8; }
	inline float* get_address_of_baseDuration_8() { return &___baseDuration_8; }
	inline void set_baseDuration_8(float value)
	{
		___baseDuration_8 = value;
	}

	inline static int32_t get_offset_of_baseCycleSpeed_9() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___baseCycleSpeed_9)); }
	inline float get_baseCycleSpeed_9() const { return ___baseCycleSpeed_9; }
	inline float* get_address_of_baseCycleSpeed_9() { return &___baseCycleSpeed_9; }
	inline void set_baseCycleSpeed_9(float value)
	{
		___baseCycleSpeed_9 = value;
	}

	inline static int32_t get_offset_of_coolDownLeft_10() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___coolDownLeft_10)); }
	inline float get_coolDownLeft_10() const { return ___coolDownLeft_10; }
	inline float* get_address_of_coolDownLeft_10() { return &___coolDownLeft_10; }
	inline void set_coolDownLeft_10(float value)
	{
		___coolDownLeft_10 = value;
	}

	inline static int32_t get_offset_of_imgRender_11() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___imgRender_11)); }
	inline Image_t2042527209 * get_imgRender_11() const { return ___imgRender_11; }
	inline Image_t2042527209 ** get_address_of_imgRender_11() { return &___imgRender_11; }
	inline void set_imgRender_11(Image_t2042527209 * value)
	{
		___imgRender_11 = value;
		Il2CppCodeGenWriteBarrier(&___imgRender_11, value);
	}

	inline static int32_t get_offset_of_invinEnabled_12() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___invinEnabled_12)); }
	inline bool get_invinEnabled_12() const { return ___invinEnabled_12; }
	inline bool* get_address_of_invinEnabled_12() { return &___invinEnabled_12; }
	inline void set_invinEnabled_12(bool value)
	{
		___invinEnabled_12 = value;
	}

	inline static int32_t get_offset_of_playerShipSpriteRend_13() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___playerShipSpriteRend_13)); }
	inline SpriteRenderer_t1209076198 * get_playerShipSpriteRend_13() const { return ___playerShipSpriteRend_13; }
	inline SpriteRenderer_t1209076198 ** get_address_of_playerShipSpriteRend_13() { return &___playerShipSpriteRend_13; }
	inline void set_playerShipSpriteRend_13(SpriteRenderer_t1209076198 * value)
	{
		___playerShipSpriteRend_13 = value;
		Il2CppCodeGenWriteBarrier(&___playerShipSpriteRend_13, value);
	}

	inline static int32_t get_offset_of_orginalSprite_14() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___orginalSprite_14)); }
	inline Sprite_t309593783 * get_orginalSprite_14() const { return ___orginalSprite_14; }
	inline Sprite_t309593783 ** get_address_of_orginalSprite_14() { return &___orginalSprite_14; }
	inline void set_orginalSprite_14(Sprite_t309593783 * value)
	{
		___orginalSprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___orginalSprite_14, value);
	}

	inline static int32_t get_offset_of_fileId_15() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___fileId_15)); }
	inline int32_t get_fileId_15() const { return ___fileId_15; }
	inline int32_t* get_address_of_fileId_15() { return &___fileId_15; }
	inline void set_fileId_15(int32_t value)
	{
		___fileId_15 = value;
	}

	inline static int32_t get_offset_of_streamId_16() { return static_cast<int32_t>(offsetof(InvincibleScript_t2594468098, ___streamId_16)); }
	inline int32_t get_streamId_16() const { return ___streamId_16; }
	inline int32_t* get_address_of_streamId_16() { return &___streamId_16; }
	inline void set_streamId_16(int32_t value)
	{
		___streamId_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
