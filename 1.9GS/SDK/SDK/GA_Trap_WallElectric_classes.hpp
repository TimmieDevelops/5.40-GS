#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_WallElectric

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_TrapGeneric_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_WallElectric.GA_Trap_WallElectric_C
// 0x0020 (0x0A90 - 0x0A70)
class UGA_Trap_WallElectric_C final : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Trap_WallElectric_C;             // 0x0A70(0x0008)(Transient, DuplicateTransient)
	TArray<class AActor*>                         HitActors;                                         // 0x0A78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         targetCount;                                       // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Trap_WallElectric(int32 EntryPoint);
	void K2_ActivateAbility();
	void Targeted_CEF58A2B40484B3CF27922840D6C4E82(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_CEF58A2B40484B3CF27922840D6C4E82(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_WallElectric_C">();
	}
	static class UGA_Trap_WallElectric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_WallElectric_C>();
	}
};
static_assert(alignof(UGA_Trap_WallElectric_C) == 0x000008, "Wrong alignment on UGA_Trap_WallElectric_C");
static_assert(sizeof(UGA_Trap_WallElectric_C) == 0x000A90, "Wrong size on UGA_Trap_WallElectric_C");
static_assert(offsetof(UGA_Trap_WallElectric_C, UberGraphFrame_GA_Trap_WallElectric_C) == 0x000A70, "Member 'UGA_Trap_WallElectric_C::UberGraphFrame_GA_Trap_WallElectric_C' has a wrong offset!");
static_assert(offsetof(UGA_Trap_WallElectric_C, HitActors) == 0x000A78, "Member 'UGA_Trap_WallElectric_C::HitActors' has a wrong offset!");
static_assert(offsetof(UGA_Trap_WallElectric_C, targetCount) == 0x000A88, "Member 'UGA_Trap_WallElectric_C::targetCount' has a wrong offset!");

}

