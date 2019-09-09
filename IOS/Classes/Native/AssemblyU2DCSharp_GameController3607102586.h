#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameController
struct GameController_t3607102586;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t3805611425;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameController::DefaultScrollSpeed
	float ___DefaultScrollSpeed_3;
	// System.Single GameController::DefaultRotationSpeed
	float ___DefaultRotationSpeed_4;
	// UnityEngine.UI.Text GameController::ScoreText
	Text_t356221433 * ___ScoreText_5;
	// System.Single GameController::SpeedMultiplier
	float ___SpeedMultiplier_6;
	// System.Single GameController::ScoreMultipler
	float ___ScoreMultipler_7;
	// System.Single GameController::GameSpeedCap
	float ___GameSpeedCap_8;
	// System.Single GameController::AdFailedTimeout
	float ___AdFailedTimeout_9;
	// UnityEngine.GameObject GameController::Fire
	GameObject_t1756533147 * ___Fire_10;
	// UnityEngine.GameObject GameController::GameOverMenu
	GameObject_t1756533147 * ___GameOverMenu_11;
	// System.Boolean GameController::FXMuted
	bool ___FXMuted_12;
	// System.Boolean GameController::AbilityInUse
	bool ___AbilityInUse_13;
	// System.Single GameController::GameMovSpeed
	float ___GameMovSpeed_14;
	// System.Boolean GameController::GameOver
	bool ___GameOver_15;
	// System.Boolean GameController::IsGameStarted
	bool ___IsGameStarted_16;
	// System.Boolean GameController::DontAddToSpeed
	bool ___DontAddToSpeed_17;
	// System.Boolean GameController::GodMode
	bool ___GodMode_18;
	// System.Boolean GameController::AnimFinished
	bool ___AnimFinished_19;
	// System.Int32 GameController::<ExplosionWavFileId>k__BackingField
	int32_t ___U3CExplosionWavFileIdU3Ek__BackingField_20;
	// GoogleMobileAds.Api.InterstitialAd GameController::interstitial
	InterstitialAd_t3805611425 * ___interstitial_21;
	// System.Single GameController::Score
	float ___Score_22;
	// System.Collections.Generic.List`1<System.Int32> GameController::loadedFiles
	List_1_t1440998580 * ___loadedFiles_23;
	// System.Boolean GameController::isAdClosed
	bool ___isAdClosed_24;
	// UnityEngine.AudioSource GameController::bckGroundMusic
	AudioSource_t1135106623 * ___bckGroundMusic_25;

public:
	inline static int32_t get_offset_of_DefaultScrollSpeed_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___DefaultScrollSpeed_3)); }
	inline float get_DefaultScrollSpeed_3() const { return ___DefaultScrollSpeed_3; }
	inline float* get_address_of_DefaultScrollSpeed_3() { return &___DefaultScrollSpeed_3; }
	inline void set_DefaultScrollSpeed_3(float value)
	{
		___DefaultScrollSpeed_3 = value;
	}

	inline static int32_t get_offset_of_DefaultRotationSpeed_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___DefaultRotationSpeed_4)); }
	inline float get_DefaultRotationSpeed_4() const { return ___DefaultRotationSpeed_4; }
	inline float* get_address_of_DefaultRotationSpeed_4() { return &___DefaultRotationSpeed_4; }
	inline void set_DefaultRotationSpeed_4(float value)
	{
		___DefaultRotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_ScoreText_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ScoreText_5)); }
	inline Text_t356221433 * get_ScoreText_5() const { return ___ScoreText_5; }
	inline Text_t356221433 ** get_address_of_ScoreText_5() { return &___ScoreText_5; }
	inline void set_ScoreText_5(Text_t356221433 * value)
	{
		___ScoreText_5 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreText_5, value);
	}

	inline static int32_t get_offset_of_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___SpeedMultiplier_6)); }
	inline float get_SpeedMultiplier_6() const { return ___SpeedMultiplier_6; }
	inline float* get_address_of_SpeedMultiplier_6() { return &___SpeedMultiplier_6; }
	inline void set_SpeedMultiplier_6(float value)
	{
		___SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_ScoreMultipler_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ScoreMultipler_7)); }
	inline float get_ScoreMultipler_7() const { return ___ScoreMultipler_7; }
	inline float* get_address_of_ScoreMultipler_7() { return &___ScoreMultipler_7; }
	inline void set_ScoreMultipler_7(float value)
	{
		___ScoreMultipler_7 = value;
	}

	inline static int32_t get_offset_of_GameSpeedCap_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GameSpeedCap_8)); }
	inline float get_GameSpeedCap_8() const { return ___GameSpeedCap_8; }
	inline float* get_address_of_GameSpeedCap_8() { return &___GameSpeedCap_8; }
	inline void set_GameSpeedCap_8(float value)
	{
		___GameSpeedCap_8 = value;
	}

	inline static int32_t get_offset_of_AdFailedTimeout_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___AdFailedTimeout_9)); }
	inline float get_AdFailedTimeout_9() const { return ___AdFailedTimeout_9; }
	inline float* get_address_of_AdFailedTimeout_9() { return &___AdFailedTimeout_9; }
	inline void set_AdFailedTimeout_9(float value)
	{
		___AdFailedTimeout_9 = value;
	}

	inline static int32_t get_offset_of_Fire_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Fire_10)); }
	inline GameObject_t1756533147 * get_Fire_10() const { return ___Fire_10; }
	inline GameObject_t1756533147 ** get_address_of_Fire_10() { return &___Fire_10; }
	inline void set_Fire_10(GameObject_t1756533147 * value)
	{
		___Fire_10 = value;
		Il2CppCodeGenWriteBarrier(&___Fire_10, value);
	}

	inline static int32_t get_offset_of_GameOverMenu_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GameOverMenu_11)); }
	inline GameObject_t1756533147 * get_GameOverMenu_11() const { return ___GameOverMenu_11; }
	inline GameObject_t1756533147 ** get_address_of_GameOverMenu_11() { return &___GameOverMenu_11; }
	inline void set_GameOverMenu_11(GameObject_t1756533147 * value)
	{
		___GameOverMenu_11 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverMenu_11, value);
	}

	inline static int32_t get_offset_of_FXMuted_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___FXMuted_12)); }
	inline bool get_FXMuted_12() const { return ___FXMuted_12; }
	inline bool* get_address_of_FXMuted_12() { return &___FXMuted_12; }
	inline void set_FXMuted_12(bool value)
	{
		___FXMuted_12 = value;
	}

	inline static int32_t get_offset_of_AbilityInUse_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___AbilityInUse_13)); }
	inline bool get_AbilityInUse_13() const { return ___AbilityInUse_13; }
	inline bool* get_address_of_AbilityInUse_13() { return &___AbilityInUse_13; }
	inline void set_AbilityInUse_13(bool value)
	{
		___AbilityInUse_13 = value;
	}

	inline static int32_t get_offset_of_GameMovSpeed_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GameMovSpeed_14)); }
	inline float get_GameMovSpeed_14() const { return ___GameMovSpeed_14; }
	inline float* get_address_of_GameMovSpeed_14() { return &___GameMovSpeed_14; }
	inline void set_GameMovSpeed_14(float value)
	{
		___GameMovSpeed_14 = value;
	}

	inline static int32_t get_offset_of_GameOver_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GameOver_15)); }
	inline bool get_GameOver_15() const { return ___GameOver_15; }
	inline bool* get_address_of_GameOver_15() { return &___GameOver_15; }
	inline void set_GameOver_15(bool value)
	{
		___GameOver_15 = value;
	}

	inline static int32_t get_offset_of_IsGameStarted_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___IsGameStarted_16)); }
	inline bool get_IsGameStarted_16() const { return ___IsGameStarted_16; }
	inline bool* get_address_of_IsGameStarted_16() { return &___IsGameStarted_16; }
	inline void set_IsGameStarted_16(bool value)
	{
		___IsGameStarted_16 = value;
	}

	inline static int32_t get_offset_of_DontAddToSpeed_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___DontAddToSpeed_17)); }
	inline bool get_DontAddToSpeed_17() const { return ___DontAddToSpeed_17; }
	inline bool* get_address_of_DontAddToSpeed_17() { return &___DontAddToSpeed_17; }
	inline void set_DontAddToSpeed_17(bool value)
	{
		___DontAddToSpeed_17 = value;
	}

	inline static int32_t get_offset_of_GodMode_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GodMode_18)); }
	inline bool get_GodMode_18() const { return ___GodMode_18; }
	inline bool* get_address_of_GodMode_18() { return &___GodMode_18; }
	inline void set_GodMode_18(bool value)
	{
		___GodMode_18 = value;
	}

	inline static int32_t get_offset_of_AnimFinished_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___AnimFinished_19)); }
	inline bool get_AnimFinished_19() const { return ___AnimFinished_19; }
	inline bool* get_address_of_AnimFinished_19() { return &___AnimFinished_19; }
	inline void set_AnimFinished_19(bool value)
	{
		___AnimFinished_19 = value;
	}

	inline static int32_t get_offset_of_U3CExplosionWavFileIdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___U3CExplosionWavFileIdU3Ek__BackingField_20)); }
	inline int32_t get_U3CExplosionWavFileIdU3Ek__BackingField_20() const { return ___U3CExplosionWavFileIdU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CExplosionWavFileIdU3Ek__BackingField_20() { return &___U3CExplosionWavFileIdU3Ek__BackingField_20; }
	inline void set_U3CExplosionWavFileIdU3Ek__BackingField_20(int32_t value)
	{
		___U3CExplosionWavFileIdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_interstitial_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___interstitial_21)); }
	inline InterstitialAd_t3805611425 * get_interstitial_21() const { return ___interstitial_21; }
	inline InterstitialAd_t3805611425 ** get_address_of_interstitial_21() { return &___interstitial_21; }
	inline void set_interstitial_21(InterstitialAd_t3805611425 * value)
	{
		___interstitial_21 = value;
		Il2CppCodeGenWriteBarrier(&___interstitial_21, value);
	}

	inline static int32_t get_offset_of_Score_22() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___Score_22)); }
	inline float get_Score_22() const { return ___Score_22; }
	inline float* get_address_of_Score_22() { return &___Score_22; }
	inline void set_Score_22(float value)
	{
		___Score_22 = value;
	}

	inline static int32_t get_offset_of_loadedFiles_23() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___loadedFiles_23)); }
	inline List_1_t1440998580 * get_loadedFiles_23() const { return ___loadedFiles_23; }
	inline List_1_t1440998580 ** get_address_of_loadedFiles_23() { return &___loadedFiles_23; }
	inline void set_loadedFiles_23(List_1_t1440998580 * value)
	{
		___loadedFiles_23 = value;
		Il2CppCodeGenWriteBarrier(&___loadedFiles_23, value);
	}

	inline static int32_t get_offset_of_isAdClosed_24() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___isAdClosed_24)); }
	inline bool get_isAdClosed_24() const { return ___isAdClosed_24; }
	inline bool* get_address_of_isAdClosed_24() { return &___isAdClosed_24; }
	inline void set_isAdClosed_24(bool value)
	{
		___isAdClosed_24 = value;
	}

	inline static int32_t get_offset_of_bckGroundMusic_25() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___bckGroundMusic_25)); }
	inline AudioSource_t1135106623 * get_bckGroundMusic_25() const { return ___bckGroundMusic_25; }
	inline AudioSource_t1135106623 ** get_address_of_bckGroundMusic_25() { return &___bckGroundMusic_25; }
	inline void set_bckGroundMusic_25(AudioSource_t1135106623 * value)
	{
		___bckGroundMusic_25 = value;
		Il2CppCodeGenWriteBarrier(&___bckGroundMusic_25, value);
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// GameController GameController::Instance
	GameController_t3607102586 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___Instance_2)); }
	inline GameController_t3607102586 * get_Instance_2() const { return ___Instance_2; }
	inline GameController_t3607102586 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GameController_t3607102586 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
