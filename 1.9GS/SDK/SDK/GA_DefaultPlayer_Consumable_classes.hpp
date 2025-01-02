#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Consumable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C
// 0x0010 (0x0A50 - 0x0A40)
class UGA_DefaultPlayer_Consumable_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A40(0x0008)(Transient, DuplicateTransient)
	class UAnimMontage*                           EatMontage;                                        // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_Consumable(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void Triggered_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_A3A081314405D22C4EED5CB989DC8CB1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_Consumable_C">();
	}
	static class UGA_DefaultPlayer_Consumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_Consumable_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_Consumable_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_Consumable_C");
static_assert(sizeof(UGA_DefaultPlayer_Consumable_C) == 0x000A50, "Wrong size on UGA_DefaultPlayer_Consumable_C");
static_assert(offsetof(UGA_DefaultPlayer_Consumable_C, UberGraphFrame) == 0x000A40, "Member 'UGA_DefaultPlayer_Consumable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Consumable_C, EatMontage) == 0x000A48, "Member 'UGA_DefaultPlayer_Consumable_C::EatMontage' has a wrong offset!");

}

