#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HomeScreenNextQuest

#include "Basic.hpp"

#include "HomeScreenNextQuest_classes.hpp"
#include "HomeScreenNextQuest_parameters.hpp"


namespace SDK
{

// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ExecuteUbergraph_HomeScreenNextQuest
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::ExecuteUbergraph_HomeScreenNextQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "ExecuteUbergraph_HomeScreenNextQuest");

	Params::HomeScreenNextQuest_C_ExecuteUbergraph_HomeScreenNextQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition*         inFinalQuestItemDef                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::CustomEvent_0(class UFortQuestItemDefinition* inFinalQuestItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "CustomEvent_0");

	Params::HomeScreenNextQuest_C_CustomEvent_0 Parms{};

	Parms.inFinalQuestItemDef = inFinalQuestItemDef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHomeScreenNextQuest_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleTabSwitch
// (BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::HandleTabSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "HandleTabSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomeScreenNextQuest_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Handle Event Flags Changed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   ActiveEventFlags                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHomeScreenNextQuest_C::Handle_Event_Flags_Changed(const TArray<class FString>& ActiveEventFlags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "Handle Event Flags Changed");

	Params::HomeScreenNextQuest_C_Handle_Event_Flags_Changed Parms{};

	Parms.ActiveEventFlags = std::move(ActiveEventFlags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeScreenNextQuest_C::BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature");

	Params::HomeScreenNextQuest_C_BndEvt__SwitchQuestMap_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateButtonBasedOnEventStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EventIsActive                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeScreenNextQuest_C::UpdateButtonBasedOnEventStatus(bool* EventIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "UpdateButtonBasedOnEventStatus");

	Params::HomeScreenNextQuest_C_UpdateButtonBasedOnEventStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EventIsActive != nullptr)
		*EventIsActive = Parms.EventIsActive;
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.UpdateSceenBasedOnQuestMapShown
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::UpdateSceenBasedOnQuestMapShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "UpdateSceenBasedOnQuestMapShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.ConfigureScreenForEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::ConfigureScreenForEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "ConfigureScreenForEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.HandleBeyondCutOffQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::HandleBeyondCutOffQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "HandleBeyondCutOffQuest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeScreenNextQuest.HomeScreenNextQuest_C.Center on Play Button
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeScreenNextQuest_C::Center_on_Play_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeScreenNextQuest_C", "Center on Play Button");

	UObject::ProcessEvent(Func, nullptr);
}

}
