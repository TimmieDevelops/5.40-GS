#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainQuestsTile

#include "Basic.hpp"

#include "MainQuestsTile_classes.hpp"
#include "MainQuestsTile_parameters.hpp"


namespace SDK
{

// Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::ExecuteUbergraph_MainQuestsTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "ExecuteUbergraph_MainQuestsTile");

	Params::MainQuestsTile_C_ExecuteUbergraph_MainQuestsTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainQuestsTile.MainQuestsTile_C.PlayDialogIfRequired
// (BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::PlayDialogIfRequired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "PlayDialogIfRequired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainQuestsTile.MainQuestsTile_C.HandleQuestsUpdated
// (BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::HandleQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "HandleQuestsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::HandleButtonClick(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "HandleButtonClick");

	Params::MainQuestsTile_C_HandleButtonClick Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainQuestsTile.MainQuestsTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainQuestsTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::HandleQuestChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "HandleQuestChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   Quest                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainQuestsTile_C::PopulateFilteredObjectives(class UFortQuestItem* Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "PopulateFilteredObjectives");

	Params::MainQuestsTile_C_PopulateFilteredObjectives Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainQuestsTile.MainQuestsTile_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMainQuestsTile_C::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainQuestsTile_C", "SetScrollWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}
