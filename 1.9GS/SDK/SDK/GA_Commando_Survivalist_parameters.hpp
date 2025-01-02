#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_Survivalist

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.ExecuteUbergraph_GA_Commando_Survivalist
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist) == 0x000008, "Wrong alignment on GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist");
static_assert(sizeof(GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist) == 0x0000B8, "Wrong size on GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist");
static_assert(offsetof(GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist, EntryPoint) == 0x000000, "Member 'GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist, K2Node_Event_EventData) == 0x000008, "Member 'GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000B0, "Member 'GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData_0;                                       // 0x0000(0x00A8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent, EventData_0) == 0x000000, "Member 'GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent::EventData_0' has a wrong offset!");

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.ApplyHeal
// 0x0048 (0x0048 - 0x0000)
struct GA_Commando_Survivalist_C_ApplyHeal final
{
public:
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0008(0x0018)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x0028(0x0018)()
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Commando_Survivalist_C_ApplyHeal) == 0x000008, "Wrong alignment on GA_Commando_Survivalist_C_ApplyHeal");
static_assert(sizeof(GA_Commando_Survivalist_C_ApplyHeal) == 0x000048, "Wrong size on GA_Commando_Survivalist_C_ApplyHeal");
static_assert(offsetof(GA_Commando_Survivalist_C_ApplyHeal, CallFunc_FMax_ReturnValue) == 0x000000, "Member 'GA_Commando_Survivalist_C_ApplyHeal::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_ApplyHeal, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000008, "Member 'GA_Commando_Survivalist_C_ApplyHeal::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_ApplyHeal, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'GA_Commando_Survivalist_C_ApplyHeal::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_ApplyHeal, CallFunc_AssignSetByCallerMagnitude_ReturnValue) == 0x000028, "Member 'GA_Commando_Survivalist_C_ApplyHeal::CallFunc_AssignSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_ApplyHeal, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000040, "Member 'GA_Commando_Survivalist_C_ApplyHeal::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.SetupAbility
// 0x0020 (0x0020 - 0x0000)
struct GA_Commando_Survivalist_C_SetupAbility final
{
public:
	class UAbilitySystemComponent*                AbilitySystemComponentRef;                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Commando_Survivalist_C_SetupAbility) == 0x000008, "Wrong alignment on GA_Commando_Survivalist_C_SetupAbility");
static_assert(sizeof(GA_Commando_Survivalist_C_SetupAbility) == 0x000020, "Wrong size on GA_Commando_Survivalist_C_SetupAbility");
static_assert(offsetof(GA_Commando_Survivalist_C_SetupAbility, AbilitySystemComponentRef) == 0x000000, "Member 'GA_Commando_Survivalist_C_SetupAbility::AbilitySystemComponentRef' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000008, "Member 'GA_Commando_Survivalist_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000018, "Member 'GA_Commando_Survivalist_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.K2_ShouldAbilityRespondToEvent
// 0x0100 (0x0100 - 0x0000)
struct GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0040(0x00A8)(Parm)
	bool                                          ReturnValue;                                       // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllTags_ReturnValue;                   // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent) == 0x000100, "Wrong size on GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000040, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000E8, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_AsFort_Pawn) == 0x0000F0, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, CallFunc_HasAllTags_ReturnValue) == 0x0000F9, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::CallFunc_HasAllTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue) == 0x0000FA, "Member 'GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

