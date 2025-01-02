#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Ceiling_ElectricWeak_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C
// 0x0060 (0x1140 - 0x10E0)
class ATrap_Ceiling_ElectricWeak_Athena_C final : public ABuildingTrapCeiling
{
public:
	uint8                                         Pad_10D8[0x8];                                     // 0x10D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10E0(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        TraceLocation;                                     // 0x10E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Charge_Sound;                                      // 0x10F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               IdleElectricFX;                                    // 0x10F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Light;                                             // 0x1100(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TriggerComponent;                                  // 0x1108(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x1110(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5; // 0x1118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5; // 0x111C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111D[0x3];                                     // 0x111D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleOutLight;                                     // 0x1120(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Placed_Sound;                                 // 0x1128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x1130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Explosion_Sound;                                   // 0x1138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena(int32 EntryPoint);
	void OnWorldReady();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnReloadEnd();
	void OnFinishedBuilding();
	void OnPlaced();
	void ScaleOutLight__UpdateFunc();
	void ScaleOutLight__FinishedFunc();
	void UserConstructionScript();

	struct FTransform GetFireLocationAndRotation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Ceiling_ElectricWeak_Athena_C">();
	}
	static class ATrap_Ceiling_ElectricWeak_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Ceiling_ElectricWeak_Athena_C>();
	}
};
static_assert(alignof(ATrap_Ceiling_ElectricWeak_Athena_C) == 0x000010, "Wrong alignment on ATrap_Ceiling_ElectricWeak_Athena_C");
static_assert(sizeof(ATrap_Ceiling_ElectricWeak_Athena_C) == 0x001140, "Wrong size on ATrap_Ceiling_ElectricWeak_Athena_C");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, UberGraphFrame) == 0x0010E0, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, TraceLocation) == 0x0010E8, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::TraceLocation' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, Charge_Sound) == 0x0010F0, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::Charge_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, IdleElectricFX) == 0x0010F8, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::IdleElectricFX' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, Light) == 0x001100, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::Light' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, TriggerComponent) == 0x001108, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::TriggerComponent' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, Root) == 0x001110, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::Root' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5) == 0x001118, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5) == 0x00111C, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, ScaleOutLight) == 0x001120, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::ScaleOutLight' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, Trap_Placed_Sound) == 0x001128, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::Trap_Placed_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, Trap_Fire_Sound) == 0x001130, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::Trap_Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_ElectricWeak_Athena_C, Explosion_Sound) == 0x001138, "Member 'ATrap_Ceiling_ElectricWeak_Athena_C::Explosion_Sound' has a wrong offset!");

}

