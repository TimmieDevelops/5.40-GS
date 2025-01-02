#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_CommandoTriggeredAbility

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C.ExecuteUbergraph_GAT_CommandoTriggeredAbility
// 0x01D8 (0x01D8 - 0x0000)
struct GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0048(0x00A8)(ConstParm)
	class APlayerPawn_Commando_C*                 K2Node_DynamicCast_AsPlayer_Pawn_Commando;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0100(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0120(0x0010)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0130(0x00A8)()
};
static_assert(alignof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility) == 0x000008, "Wrong alignment on GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility");
static_assert(sizeof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility) == 0x0001D8, "Wrong size on GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, EntryPoint) == 0x000000, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, K2Node_Event_EventData) == 0x000048, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, K2Node_DynamicCast_AsPlayer_Pawn_Commando) == 0x0000F0, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::K2Node_DynamicCast_AsPlayer_Pawn_Commando' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000100, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000120, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility, K2Node_MakeStruct_GameplayEventData) == 0x000130, "Member 'GAT_CommandoTriggeredAbility_C_ExecuteUbergraph_GAT_CommandoTriggeredAbility::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");

// Function GAT_CommandoTriggeredAbility.GAT_CommandoTriggeredAbility_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAT_CommandoTriggeredAbility_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}
