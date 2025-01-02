#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabBrightnessOptions

#include "Basic.hpp"

#include "TabBrightnessOptions_classes.hpp"
#include "TabBrightnessOptions_parameters.hpp"


namespace SDK
{

// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::ExecuteUbergraph_TabBrightnessOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "ExecuteUbergraph_TabBrightnessOptions");

	Params::TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Slider_Value                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabBrightnessOptions_C::BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabBrightnessOptions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Update_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Update Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Initialize_Data()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Initialize Data");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Set_Default_Call_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabBrightnessOptions_C", "Set Default Call Out");

	UObject::ProcessEvent(Func, nullptr);
}

}

