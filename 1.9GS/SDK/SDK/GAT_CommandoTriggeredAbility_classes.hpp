#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_CommandoTriggeredAbility

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C
// 0x00C0 (0x0B10 - 0x0A50)
class UGAT_CommandoTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_CommandoTriggeredAbility_C;     // 0x0A50(0x0008)(Transient, DuplicateTransient)
	struct FGameplayEventData                     Event_Data;                                        // 0x0A58(0x00A8)(Edit, BlueprintVisible)
	class APlayerPawn_Commando_C*                 CommandoPlayerPawn;                                // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isAutoCommitted;                                   // 0x0B08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isStaminaLockedOut;                                // 0x0B09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_CommandoTriggeredAbility(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_CommandoTriggeredAbility_C">();
	}
	static class UGAT_CommandoTriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_CommandoTriggeredAbility_C>();
	}
};
static_assert(alignof(UGAT_CommandoTriggeredAbility_C) == 0x000008, "Wrong alignment on UGAT_CommandoTriggeredAbility_C");
static_assert(sizeof(UGAT_CommandoTriggeredAbility_C) == 0x000B10, "Wrong size on UGAT_CommandoTriggeredAbility_C");
static_assert(offsetof(UGAT_CommandoTriggeredAbility_C, UberGraphFrame_GAT_CommandoTriggeredAbility_C) == 0x000A50, "Member 'UGAT_CommandoTriggeredAbility_C::UberGraphFrame_GAT_CommandoTriggeredAbility_C' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoTriggeredAbility_C, Event_Data) == 0x000A58, "Member 'UGAT_CommandoTriggeredAbility_C::Event_Data' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoTriggeredAbility_C, CommandoPlayerPawn) == 0x000B00, "Member 'UGAT_CommandoTriggeredAbility_C::CommandoPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoTriggeredAbility_C, isAutoCommitted) == 0x000B08, "Member 'UGAT_CommandoTriggeredAbility_C::isAutoCommitted' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoTriggeredAbility_C, isStaminaLockedOut) == 0x000B09, "Member 'UGAT_CommandoTriggeredAbility_C::isStaminaLockedOut' has a wrong offset!");

}

