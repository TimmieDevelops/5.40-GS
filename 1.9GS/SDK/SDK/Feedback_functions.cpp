#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Feedback

#include "Basic.hpp"

#include "Feedback_classes.hpp"
#include "Feedback_parameters.hpp"


namespace SDK
{

// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeedback_C::ExecuteUbergraph_Feedback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "ExecuteUbergraph_Feedback");

	Params::Feedback_C_ExecuteUbergraph_Feedback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Feedback.Feedback_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFeedback_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.HandleTextChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, Parm, OutParm, ReferenceParm)

void UFeedback_C::HandleTextChanged(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "HandleTextChanged");

	Params::Feedback_C_HandleTextChanged Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeedback_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::Feedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeedback_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::Feedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Feedback.Feedback_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UFeedback_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "OnBeginIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
// (Event, Protected, BlueprintEvent)

void UFeedback_C::OnInitiateDebugInfoForFeedbackComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "OnInitiateDebugInfoForFeedbackComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeedback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.AddButtonFeedbackTypes
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::AddButtonFeedbackTypes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "AddButtonFeedbackTypes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.IsAllTextNotEmpty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFeedback_C::IsAllTextNotEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "IsAllTextNotEmpty");

	Params::Feedback_C_IsAllTextNotEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Feedback.Feedback_C.InitializeFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::InitializeFeedback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "InitializeFeedback");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Feedback.Feedback_C.Setup For Reporting Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Player_Name                                            (Parm)

void UFeedback_C::Setup_For_Reporting_Player(const class FText& Player_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Feedback_C", "Setup For Reporting Player");

	Params::Feedback_C_Setup_For_Reporting_Player Parms{};

	Parms.Player_Name = std::move(Player_Name);

	UObject::ProcessEvent(Func, &Parms);
}

}

