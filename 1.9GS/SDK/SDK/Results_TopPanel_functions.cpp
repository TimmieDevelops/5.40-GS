#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TopPanel

#include "Basic.hpp"

#include "Results_TopPanel_classes.hpp"
#include "Results_TopPanel_parameters.hpp"


namespace SDK
{

// Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TopPanel_C::ExecuteUbergraph_Results_TopPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TopPanel_C", "ExecuteUbergraph_Results_TopPanel");

	Params::Results_TopPanel_C_ExecuteUbergraph_Results_TopPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_TopPanel.Results_TopPanel_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_TopPanel_C::Intro_Sequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TopPanel_C", "Intro Sequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_TopPanel_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TopPanel_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_TopPanel.Results_TopPanel_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCompletionResult                   CompletionResult                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TopPanel_C::Initialize(EFortCompletionResult CompletionResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_TopPanel_C", "Initialize");

	Params::Results_TopPanel_C_Initialize Parms{};

	Parms.CompletionResult = CompletionResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

