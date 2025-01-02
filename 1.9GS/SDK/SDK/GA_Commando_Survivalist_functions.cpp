#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_Survivalist

#include "Basic.hpp"

#include "GA_Commando_Survivalist_classes.hpp"
#include "GA_Commando_Survivalist_parameters.hpp"


namespace SDK
{

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.ExecuteUbergraph_GA_Commando_Survivalist
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_Survivalist_C::ExecuteUbergraph_GA_Commando_Survivalist(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_Survivalist_C", "ExecuteUbergraph_GA_Commando_Survivalist");

	Params::GA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData_0                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UGA_Commando_Survivalist_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_Survivalist_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.ApplyHeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Commando_Survivalist_C::ApplyHeal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_Survivalist_C", "ApplyHeal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystemComponentRef                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_Survivalist_C::SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_Survivalist_C", "SetupAbility");

	Params::GA_Commando_Survivalist_C_SetupAbility Parms{};

	Parms.AbilitySystemComponentRef = AbilitySystemComponentRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Commando_Survivalist_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_Survivalist_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
