#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplashScreenWidget

#include "Basic.hpp"

#include "SplashScreenWidget_classes.hpp"
#include "SplashScreenWidget_parameters.hpp"


namespace SDK
{

// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "ExecuteUbergraph_SplashScreenWidget");

	Params::SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USplashScreenWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   UserIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplashScreenWidget_C::OnGameBootableInviteReceived(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "OnGameBootableInviteReceived");

	Params::SplashScreenWidget_C_OnGameBootableInviteReceived Parms{};

	Parms.UserIndex = UserIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USplashScreenWidget_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "OnInputMethodChanged");

	Params::SplashScreenWidget_C_OnInputMethodChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USplashScreenWidget_C::SetInputFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "SetInputFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USplashScreenWidget_C::RelinquishInputFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "RelinquishInputFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USplashScreenWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "OnMouseButtonDown");

	Params::SplashScreenWidget_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USplashScreenWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplashScreenWidget_C", "OnFocusReceived");

	Params::SplashScreenWidget_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

