#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Shields

#include "Basic.hpp"

#include "GA_Athena_Shields_classes.hpp"
#include "GA_Athena_Shields_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Shields.GA_Athena_Shields_C.ExecuteUbergraph_GA_Athena_Shields
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Shields_C::ExecuteUbergraph_GA_Athena_Shields(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Shields_C", "ExecuteUbergraph_GA_Athena_Shields");

	Params::GA_Athena_Shields_C_ExecuteUbergraph_GA_Athena_Shields Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Shields.GA_Athena_Shields_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Shields_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Shields_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Shields.GA_Athena_Shields_C.Triggered_8143D5814CB74D956510E191077DBB83
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Shields_C::Triggered_8143D5814CB74D956510E191077DBB83(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Shields_C", "Triggered_8143D5814CB74D956510E191077DBB83");

	Params::GA_Athena_Shields_C_Triggered_8143D5814CB74D956510E191077DBB83 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Shields.GA_Athena_Shields_C.Cancelled_8143D5814CB74D956510E191077DBB83
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Shields_C::Cancelled_8143D5814CB74D956510E191077DBB83(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Shields_C", "Cancelled_8143D5814CB74D956510E191077DBB83");

	Params::GA_Athena_Shields_C_Cancelled_8143D5814CB74D956510E191077DBB83 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Shields.GA_Athena_Shields_C.Completed_8143D5814CB74D956510E191077DBB83
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Shields_C::Completed_8143D5814CB74D956510E191077DBB83(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Shields_C", "Completed_8143D5814CB74D956510E191077DBB83");

	Params::GA_Athena_Shields_C_Completed_8143D5814CB74D956510E191077DBB83 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Shields.GA_Athena_Shields_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Athena_Shields_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Shields_C", "K2_CanActivateAbility");

	Params::GA_Athena_Shields_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}

