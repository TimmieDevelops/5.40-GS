#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipHeroBonuses

#include "Basic.hpp"

#include "TooltipHeroBonuses_classes.hpp"
#include "TooltipHeroBonuses_parameters.hpp"


namespace SDK
{

// Function TooltipHeroBonuses.TooltipHeroBonuses_C.ExecuteUbergraph_TooltipHeroBonuses
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipHeroBonuses_C::ExecuteUbergraph_TooltipHeroBonuses(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TooltipHeroBonuses_C", "ExecuteUbergraph_TooltipHeroBonuses");

	Params::TooltipHeroBonuses_C_ExecuteUbergraph_TooltipHeroBonuses Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TooltipHeroBonuses.TooltipHeroBonuses_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipHeroBonuses_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TooltipHeroBonuses_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

