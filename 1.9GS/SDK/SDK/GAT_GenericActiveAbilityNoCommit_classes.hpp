#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericActiveAbilityNoCommit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GAT_ActiveAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C
// 0x00C0 (0x0B10 - 0x0A50)
class UGAT_GenericActiveAbilityNoCommit_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C; // 0x0A50(0x0008)(Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x0A58(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isAutoCommitted;                                   // 0x0B08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isStaminaLockedOut;                                // 0x0B09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_GenericActiveAbilityNoCommit_C">();
	}
	static class UGAT_GenericActiveAbilityNoCommit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_GenericActiveAbilityNoCommit_C>();
	}
};
static_assert(alignof(UGAT_GenericActiveAbilityNoCommit_C) == 0x000008, "Wrong alignment on UGAT_GenericActiveAbilityNoCommit_C");
static_assert(sizeof(UGAT_GenericActiveAbilityNoCommit_C) == 0x000B10, "Wrong size on UGAT_GenericActiveAbilityNoCommit_C");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C) == 0x000A50, "Member 'UGAT_GenericActiveAbilityNoCommit_C::UberGraphFrame_GAT_GenericActiveAbilityNoCommit_C' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, EventData) == 0x000A58, "Member 'UGAT_GenericActiveAbilityNoCommit_C::EventData' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, FortPlayerPawn) == 0x000B00, "Member 'UGAT_GenericActiveAbilityNoCommit_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, isAutoCommitted) == 0x000B08, "Member 'UGAT_GenericActiveAbilityNoCommit_C::isAutoCommitted' has a wrong offset!");
static_assert(offsetof(UGAT_GenericActiveAbilityNoCommit_C, isStaminaLockedOut) == 0x000B09, "Member 'UGAT_GenericActiveAbilityNoCommit_C::isStaminaLockedOut' has a wrong offset!");

}

