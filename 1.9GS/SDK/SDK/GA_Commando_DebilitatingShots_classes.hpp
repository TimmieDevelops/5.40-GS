#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_DebilitatingShots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GAT_CommandoTriggeredAbility_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C
// 0x0148 (0x0C58 - 0x0B10)
class UGA_Commando_DebilitatingShots_C final : public UGAT_CommandoTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Commando_DebilitatingShots_C;    // 0x0B10(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           TC_IsGun;                                          // 0x0B18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventActivation;                                   // 0x0B20(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DebilitatingShots;                              // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0B30(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventDirectTrigger;                                // 0x0B38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         StackCount;                                        // 0x0B40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultStackCount;                                 // 0x0B44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerfectEngineeringStack;                           // 0x0B48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4C[0x4];                                      // 0x0B4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0B50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_LingeringPain;                                  // 0x0B70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_DebilitationTraining;                           // 0x0B90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_Kneecapper;                                     // 0x0BB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TC_HackStackBreaker;                               // 0x0BD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_LingeringPain;                                  // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebuffValue;                                       // 0x0BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultValue;                                      // 0x0BFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KneecapperValue;                                   // 0x0C00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebuffDuration;                                    // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DebilitationTraining_FatigueInstant;            // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_IsAfflicted;                                    // 0x0C10(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                              HitTargetPawn;                                     // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DebilitationTraining_FatigueDuration;           // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Kneecapper;                                        // 0x0C40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebilitationTraining;                              // 0x0C41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LingeringPain;                                     // 0x0C42(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C43[0x1];                                      // 0x0C43(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxStacks;                                         // 0x0C44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LingeringPainStacks;                               // 0x0C48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultStacks;                                     // 0x0C4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        PS;                                                // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Commando_DebilitatingShots(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void SetupGameplayEffect(const struct FGameplayTag& EventTag, class AActor* HitActor, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int32* Effect_Level, int32* Stack_Count);
	void SetupAppliedEffect(float Magnitude, float Duration, int32 Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut);
	void SetupDebilitationTraining(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Commando_DebilitatingShots_C">();
	}
	static class UGA_Commando_DebilitatingShots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Commando_DebilitatingShots_C>();
	}
};
static_assert(alignof(UGA_Commando_DebilitatingShots_C) == 0x000008, "Wrong alignment on UGA_Commando_DebilitatingShots_C");
static_assert(sizeof(UGA_Commando_DebilitatingShots_C) == 0x000C58, "Wrong size on UGA_Commando_DebilitatingShots_C");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, UberGraphFrame_GA_Commando_DebilitatingShots_C) == 0x000B10, "Member 'UGA_Commando_DebilitatingShots_C::UberGraphFrame_GA_Commando_DebilitatingShots_C' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TC_IsGun) == 0x000B18, "Member 'UGA_Commando_DebilitatingShots_C::TC_IsGun' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, EventActivation) == 0x000B20, "Member 'UGA_Commando_DebilitatingShots_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, GE_DebilitatingShots) == 0x000B28, "Member 'UGA_Commando_DebilitatingShots_C::GE_DebilitatingShots' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, EventComplete) == 0x000B30, "Member 'UGA_Commando_DebilitatingShots_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, EventDirectTrigger) == 0x000B38, "Member 'UGA_Commando_DebilitatingShots_C::EventDirectTrigger' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, StackCount) == 0x000B40, "Member 'UGA_Commando_DebilitatingShots_C::StackCount' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, DefaultStackCount) == 0x000B44, "Member 'UGA_Commando_DebilitatingShots_C::DefaultStackCount' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, PerfectEngineeringStack) == 0x000B48, "Member 'UGA_Commando_DebilitatingShots_C::PerfectEngineeringStack' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TargetData) == 0x000B50, "Member 'UGA_Commando_DebilitatingShots_C::TargetData' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TC_LingeringPain) == 0x000B70, "Member 'UGA_Commando_DebilitatingShots_C::TC_LingeringPain' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TC_DebilitationTraining) == 0x000B90, "Member 'UGA_Commando_DebilitatingShots_C::TC_DebilitationTraining' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TC_Kneecapper) == 0x000BB0, "Member 'UGA_Commando_DebilitatingShots_C::TC_Kneecapper' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TC_HackStackBreaker) == 0x000BD0, "Member 'UGA_Commando_DebilitatingShots_C::TC_HackStackBreaker' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, GE_LingeringPain) == 0x000BF0, "Member 'UGA_Commando_DebilitatingShots_C::GE_LingeringPain' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, DebuffValue) == 0x000BF8, "Member 'UGA_Commando_DebilitatingShots_C::DebuffValue' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, DefaultValue) == 0x000BFC, "Member 'UGA_Commando_DebilitatingShots_C::DefaultValue' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, KneecapperValue) == 0x000C00, "Member 'UGA_Commando_DebilitatingShots_C::KneecapperValue' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, DebuffDuration) == 0x000C04, "Member 'UGA_Commando_DebilitatingShots_C::DebuffDuration' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, GE_DebilitationTraining_FatigueInstant) == 0x000C08, "Member 'UGA_Commando_DebilitatingShots_C::GE_DebilitationTraining_FatigueInstant' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, TC_IsAfflicted) == 0x000C10, "Member 'UGA_Commando_DebilitatingShots_C::TC_IsAfflicted' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, HitTargetPawn) == 0x000C30, "Member 'UGA_Commando_DebilitatingShots_C::HitTargetPawn' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, GE_DebilitationTraining_FatigueDuration) == 0x000C38, "Member 'UGA_Commando_DebilitatingShots_C::GE_DebilitationTraining_FatigueDuration' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, Kneecapper) == 0x000C40, "Member 'UGA_Commando_DebilitatingShots_C::Kneecapper' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, DebilitationTraining) == 0x000C41, "Member 'UGA_Commando_DebilitatingShots_C::DebilitationTraining' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, LingeringPain) == 0x000C42, "Member 'UGA_Commando_DebilitatingShots_C::LingeringPain' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, MaxStacks) == 0x000C44, "Member 'UGA_Commando_DebilitatingShots_C::MaxStacks' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, LingeringPainStacks) == 0x000C48, "Member 'UGA_Commando_DebilitatingShots_C::LingeringPainStacks' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, DefaultStacks) == 0x000C4C, "Member 'UGA_Commando_DebilitatingShots_C::DefaultStacks' has a wrong offset!");
static_assert(offsetof(UGA_Commando_DebilitatingShots_C, PS) == 0x000C50, "Member 'UGA_Commando_DebilitatingShots_C::PS' has a wrong offset!");

}
