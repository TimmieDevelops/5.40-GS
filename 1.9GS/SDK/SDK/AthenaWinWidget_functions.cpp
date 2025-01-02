#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaWinWidget

#include "Basic.hpp"

#include "AthenaWinWidget_classes.hpp"
#include "AthenaWinWidget_parameters.hpp"


namespace SDK
{

// Function AthenaWinWidget.AthenaWinWidget_C.ExecuteUbergraph_AthenaWinWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWinWidget_C::ExecuteUbergraph_AthenaWinWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinWidget_C", "ExecuteUbergraph_AthenaWinWidget");

	Params::AthenaWinWidget_C_ExecuteUbergraph_AthenaWinWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWinWidget.AthenaWinWidget_C.BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWinWidget_C::BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinWidget_C", "BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	Params::AthenaWinWidget_C_BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWinWidget.AthenaWinWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaWinWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWinWidget.AthenaWinWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaWinWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWinWidget.AthenaWinWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWinWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinWidget_C", "BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::AthenaWinWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWinWidget.AthenaWinWidget_C.HighlightCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HighlightCount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWinWidget_C::HighlightCountChanged(int32 HighlightCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinWidget_C", "HighlightCountChanged");

	Params::AthenaWinWidget_C_HighlightCountChanged Parms{};

	Parms.HighlightCount = HighlightCount;

	UObject::ProcessEvent(Func, &Parms);
}

}
