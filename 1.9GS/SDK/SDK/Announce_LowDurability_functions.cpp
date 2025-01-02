#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_LowDurability

#include "Basic.hpp"

#include "Announce_LowDurability_classes.hpp"
#include "Announce_LowDurability_parameters.hpp"


namespace SDK
{

// Function Announce_LowDurability.Announce_LowDurability_C.ExecuteUbergraph_Announce_LowDurability
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_LowDurability_C::ExecuteUbergraph_Announce_LowDurability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_LowDurability_C", "ExecuteUbergraph_Announce_LowDurability");

	Params::Announce_LowDurability_C_ExecuteUbergraph_Announce_LowDurability Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_LowDurability.Announce_LowDurability_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_LowDurability_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_LowDurability_C", "OnClientAnnouncementStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_LowDurability.Announce_LowDurability_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_LowDurability_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_LowDurability_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

