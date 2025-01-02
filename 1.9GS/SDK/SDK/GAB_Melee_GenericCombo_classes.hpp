#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Melee_GenericCombo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_Melee_Generic_EventGraph_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
// 0x0010 (0x0A68 - 0x0A58)
class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_Melee_GenericCombo_C;           // 0x0A58(0x0008)(Transient, DuplicateTransient)
	float                                         OriginalMontagePlayRate;                           // 0x0A60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_Melee_GenericCombo(int32 EntryPoint);
	void K2_OnEndAbility();
	void K2_ActivateAbility();
	void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Melee_GenericCombo_C">();
	}
	static class UGAB_Melee_GenericCombo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Melee_GenericCombo_C>();
	}
};
static_assert(alignof(UGAB_Melee_GenericCombo_C) == 0x000008, "Wrong alignment on UGAB_Melee_GenericCombo_C");
static_assert(sizeof(UGAB_Melee_GenericCombo_C) == 0x000A68, "Wrong size on UGAB_Melee_GenericCombo_C");
static_assert(offsetof(UGAB_Melee_GenericCombo_C, UberGraphFrame_GAB_Melee_GenericCombo_C) == 0x000A58, "Member 'UGAB_Melee_GenericCombo_C::UberGraphFrame_GAB_Melee_GenericCombo_C' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_GenericCombo_C, OriginalMontagePlayRate) == 0x000A60, "Member 'UGAB_Melee_GenericCombo_C::OriginalMontagePlayRate' has a wrong offset!");

}

