#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipIngredientList

#include "Basic.hpp"

#include "TooltipIngredientList_classes.hpp"
#include "TooltipIngredientList_parameters.hpp"


namespace SDK
{

// Function TooltipIngredientList.TooltipIngredientList_C.ExecuteUbergraph_TooltipIngredientList
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipIngredientList_C::ExecuteUbergraph_TooltipIngredientList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TooltipIngredientList_C", "ExecuteUbergraph_TooltipIngredientList");

	Params::TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TooltipIngredientList.TooltipIngredientList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltipIngredientList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TooltipIngredientList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TooltipIngredientList.TooltipIngredientList_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTooltipIngredientList_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TooltipIngredientList_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

