#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPerksListDetailWidget

#include "Basic.hpp"

#include "ItemPerksListDetailWidget_classes.hpp"
#include "ItemPerksListDetailWidget_parameters.hpp"


namespace SDK
{

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPerksListDetailWidget_C::ExecuteUbergraph_ItemPerksListDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPerksListDetailWidget_C", "ExecuteUbergraph_ItemPerksListDetailWidget");

	Params::ItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemPerksListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPerksListDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPerksWidgetState                   InState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                        InEvolutionOption                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPerksListDetailWidget_C::SetState(EFortPerksWidgetState InState, class UFortHero* InEvolutionOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPerksListDetailWidget_C", "SetState");

	Params::ItemPerksListDetailWidget_C_SetState Parms{};

	Parms.InState = InState;
	Parms.InEvolutionOption = InEvolutionOption;

	UObject::ProcessEvent(Func, &Parms);
}

}
