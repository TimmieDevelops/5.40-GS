#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExpeditionSquadSlotsView

#include "Basic.hpp"

#include "BP_ExpeditionSquadSlotsView_classes.hpp"
#include "BP_ExpeditionSquadSlotsView_parameters.hpp"


namespace SDK
{

// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.ExecuteUbergraph_BP_ExpeditionSquadSlotsView
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExpeditionSquadSlotsView_C::ExecuteUbergraph_BP_ExpeditionSquadSlotsView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "ExecuteUbergraph_BP_ExpeditionSquadSlotsView");

	Params::BP_ExpeditionSquadSlotsView_C_ExecuteUbergraph_BP_ExpeditionSquadSlotsView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotOpened
// (BlueprintCallable, BlueprintEvent)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "HandleSquadSlotOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ExpeditionSquadSlotsView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "PreConstruct");

	Params::BP_ExpeditionSquadSlotsView_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.HandleSquadSlotSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SquadSlotIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ExpeditionSquadSlotsView_C::HandleSquadSlotSelected(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "HandleSquadSlotSelected");

	Params::BP_ExpeditionSquadSlotsView_C_HandleSquadSlotSelected Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExpeditionSquadSlotsView.BP_ExpeditionSquadSlotsView_C.CreateAndAddSquadSlotButton
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SquadSlotIndex                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHomebaseSquadSlot               SquadSlotDefinition                                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UWidget*                          OutSquadSlotButtonHost                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortSquadSlotSelectorButton* UBP_ExpeditionSquadSlotsView_C::CreateAndAddSquadSlotButton(const int32 SquadSlotIndex, const struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExpeditionSquadSlotsView_C", "CreateAndAddSquadSlotButton");

	Params::BP_ExpeditionSquadSlotsView_C_CreateAndAddSquadSlotButton Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.SquadSlotDefinition = std::move(SquadSlotDefinition);

	UObject::ProcessEvent(Func, &Parms);

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = Parms.OutSquadSlotButtonHost;

	return Parms.ReturnValue;
}

}

