#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampaignMapPage_Stonewood_06

#include "Basic.hpp"

#include "CampaignMapPage_Stonewood_06_classes.hpp"
#include "CampaignMapPage_Stonewood_06_parameters.hpp"


namespace SDK
{

// Function CampaignMapPage_Stonewood_06.CampaignMapPage_Stonewood_06_C.ExecuteUbergraph_CampaignMapPage_Stonewood_06
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampaignMapPage_Stonewood_06_C::ExecuteUbergraph_CampaignMapPage_Stonewood_06(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignMapPage_Stonewood_06_C", "ExecuteUbergraph_CampaignMapPage_Stonewood_06");

	Params::CampaignMapPage_Stonewood_06_C_ExecuteUbergraph_CampaignMapPage_Stonewood_06 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CampaignMapPage_Stonewood_06.CampaignMapPage_Stonewood_06_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignMapPage_Stonewood_06_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CampaignMapPage_Stonewood_06_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
