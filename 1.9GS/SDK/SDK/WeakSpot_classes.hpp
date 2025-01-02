#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeakSpot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// 0x00E0 (0x0530 - 0x0450)
class AWeakSpot_C final : public AFortCrackEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               AnimatedBackgroundRingsParticleEffect;             // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SphereHitLocator;                                  // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionComponent;                                // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               DamageEffect;                                      // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47D[0x3];                                      // 0x047D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleDownParticleTL;                               // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Impact_Sound;                                      // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpawnSound;                                        // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Particle_Location;                                 // 0x0498(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A4[0x4];                                      // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundCrack_Level_01;                               // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_02;                               // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_03;                               // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_04;                               // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_05;                               // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_06;                               // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_07;                               // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                     Crack_sounds;                                      // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                             SoundCrack_Level_08;                               // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SoundCrack_Level_09;                               // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsWidth;                               // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_504[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   ConnectTheDotsMesh;                                // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsDuration;                            // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsTimeoutFromPreviousHit;              // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsDurationScale;                       // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsMaxDuration;                         // 0x051C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsTileScale;                           // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsMinLength;                           // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsMaxLength;                           // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeakSpot(int32 EntryPoint);
	void HideMesh();
	void OnFadeOut();
	void OnStartDirectionEffect();
	void OnHitCrack();
	void ScaleDownParticleTL__UpdateFunc();
	void ScaleDownParticleTL__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeakSpot_C">();
	}
	static class AWeakSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeakSpot_C>();
	}
};
static_assert(alignof(AWeakSpot_C) == 0x000008, "Wrong alignment on AWeakSpot_C");
static_assert(sizeof(AWeakSpot_C) == 0x000530, "Wrong size on AWeakSpot_C");
static_assert(offsetof(AWeakSpot_C, UberGraphFrame) == 0x000450, "Member 'AWeakSpot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, AnimatedBackgroundRingsParticleEffect) == 0x000458, "Member 'AWeakSpot_C::AnimatedBackgroundRingsParticleEffect' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SphereHitLocator) == 0x000460, "Member 'AWeakSpot_C::SphereHitLocator' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CollisionComponent) == 0x000468, "Member 'AWeakSpot_C::CollisionComponent' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, DamageEffect) == 0x000470, "Member 'AWeakSpot_C::DamageEffect' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E) == 0x000478, "Member 'AWeakSpot_C::ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E) == 0x00047C, "Member 'AWeakSpot_C::ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleDownParticleTL) == 0x000480, "Member 'AWeakSpot_C::ScaleDownParticleTL' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Impact_Sound) == 0x000488, "Member 'AWeakSpot_C::Impact_Sound' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SpawnSound) == 0x000490, "Member 'AWeakSpot_C::SpawnSound' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Particle_Location) == 0x000498, "Member 'AWeakSpot_C::Particle_Location' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_01) == 0x0004A8, "Member 'AWeakSpot_C::SoundCrack_Level_01' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_02) == 0x0004B0, "Member 'AWeakSpot_C::SoundCrack_Level_02' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_03) == 0x0004B8, "Member 'AWeakSpot_C::SoundCrack_Level_03' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_04) == 0x0004C0, "Member 'AWeakSpot_C::SoundCrack_Level_04' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_05) == 0x0004C8, "Member 'AWeakSpot_C::SoundCrack_Level_05' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_06) == 0x0004D0, "Member 'AWeakSpot_C::SoundCrack_Level_06' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_07) == 0x0004D8, "Member 'AWeakSpot_C::SoundCrack_Level_07' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Crack_sounds) == 0x0004E0, "Member 'AWeakSpot_C::Crack_sounds' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_08) == 0x0004F0, "Member 'AWeakSpot_C::SoundCrack_Level_08' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_09) == 0x0004F8, "Member 'AWeakSpot_C::SoundCrack_Level_09' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsWidth) == 0x000500, "Member 'AWeakSpot_C::ConnectTheDotsWidth' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMesh) == 0x000508, "Member 'AWeakSpot_C::ConnectTheDotsMesh' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsDuration) == 0x000510, "Member 'AWeakSpot_C::ConnectTheDotsDuration' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsTimeoutFromPreviousHit) == 0x000514, "Member 'AWeakSpot_C::ConnectTheDotsTimeoutFromPreviousHit' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsDurationScale) == 0x000518, "Member 'AWeakSpot_C::ConnectTheDotsDurationScale' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMaxDuration) == 0x00051C, "Member 'AWeakSpot_C::ConnectTheDotsMaxDuration' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsTileScale) == 0x000520, "Member 'AWeakSpot_C::ConnectTheDotsTileScale' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMinLength) == 0x000524, "Member 'AWeakSpot_C::ConnectTheDotsMinLength' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMaxLength) == 0x000528, "Member 'AWeakSpot_C::ConnectTheDotsMaxLength' has a wrong offset!");

}

