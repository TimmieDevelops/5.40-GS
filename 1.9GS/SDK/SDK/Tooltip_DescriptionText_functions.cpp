#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_DescriptionText

#include "Basic.hpp"

#include "Tooltip_DescriptionText_classes.hpp"
#include "Tooltip_DescriptionText_parameters.hpp"


namespace SDK
{

// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.ExecuteUbergraph_Tooltip-DescriptionText
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltip_DescriptionText_C::ExecuteUbergraph_Tooltip_DescriptionText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-DescriptionText_C", "ExecuteUbergraph_Tooltip-DescriptionText");

	Params::Tooltip_DescriptionText_C_ExecuteUbergraph_Tooltip_DescriptionText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTooltip_DescriptionText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-DescriptionText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

