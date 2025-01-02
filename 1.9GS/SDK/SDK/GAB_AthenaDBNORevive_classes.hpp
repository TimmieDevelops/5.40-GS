#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNORevive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
// 0x0040 (0x0A80 - 0x0A40)
class UGAB_AthenaDBNORevive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A40(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           EC_AppliedEffect;                                  // 0x0A48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KnockbackMagnitude;                                // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5C[0x4];                                      // 0x0A5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HitActors;                                         // 0x0A60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                 KnockbackStunGE;                                   // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BP_VictoryDrone;                                   // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility();
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_AthenaDBNORevive_C">();
	}
	static class UGAB_AthenaDBNORevive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_AthenaDBNORevive_C>();
	}
};
static_assert(alignof(UGAB_AthenaDBNORevive_C) == 0x000008, "Wrong alignment on UGAB_AthenaDBNORevive_C");
static_assert(sizeof(UGAB_AthenaDBNORevive_C) == 0x000A80, "Wrong size on UGAB_AthenaDBNORevive_C");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, UberGraphFrame) == 0x000A40, "Member 'UGAB_AthenaDBNORevive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, EC_AppliedEffect) == 0x000A48, "Member 'UGAB_AthenaDBNORevive_C::EC_AppliedEffect' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, PlayerPawn) == 0x000A50, "Member 'UGAB_AthenaDBNORevive_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, KnockbackMagnitude) == 0x000A58, "Member 'UGAB_AthenaDBNORevive_C::KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, HitActors) == 0x000A60, "Member 'UGAB_AthenaDBNORevive_C::HitActors' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, KnockbackStunGE) == 0x000A70, "Member 'UGAB_AthenaDBNORevive_C::KnockbackStunGE' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, BP_VictoryDrone) == 0x000A78, "Member 'UGAB_AthenaDBNORevive_C::BP_VictoryDrone' has a wrong offset!");

}
