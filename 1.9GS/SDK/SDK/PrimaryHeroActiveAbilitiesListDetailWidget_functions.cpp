#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimaryHeroActiveAbilitiesListDetailWidget

#include "Basic.hpp"

#include "PrimaryHeroActiveAbilitiesListDetailWidget_classes.hpp"
#include "PrimaryHeroActiveAbilitiesListDetailWidget_parameters.hpp"


namespace SDK
{

// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimaryHeroActiveAbilitiesListDetailWidget_C", "ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget");

	Params::PrimaryHeroActiveAbilitiesListDetailWidget_C_ExecuteUbergraph_PrimaryHeroActiveAbilitiesListDetailWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimaryHeroActiveAbilitiesListDetailWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::HandlePostDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimaryHeroActiveAbilitiesListDetailWidget_C", "HandlePostDifferentSquadSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PrimaryHeroActiveAbilitiesListDetailWidget.PrimaryHeroActiveAbilitiesListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UPrimaryHeroActiveAbilitiesListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimaryHeroActiveAbilitiesListDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}

}

