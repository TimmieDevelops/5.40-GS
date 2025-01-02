#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroSquadManagementScreen

#include "Basic.hpp"

#include "HeroSquadManagementScreen_classes.hpp"
#include "HeroSquadManagementScreen_parameters.hpp"


namespace SDK
{

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadManagementScreen_C::ExecuteUbergraph_HeroSquadManagementScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "ExecuteUbergraph_HeroSquadManagementScreen");

	Params::HeroSquadManagementScreen_C_ExecuteUbergraph_HeroSquadManagementScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SquadSlotIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadManagementScreen_C::BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature");

	Params::HeroSquadManagementScreen_C_BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleSquadSlotPickerHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleSquadSlotPickerHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleSquadSlotPickerShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleSquadSlotPickerShown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll
// (BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::SetDefaultScroll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "SetDefaultScroll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroSquadManagementScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHeroSquadManagementScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

ESlateVisibility UHeroSquadManagementScreen_C::GetInZoneVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "GetInZoneVisibility");

	Params::HeroSquadManagementScreen_C_GetInZoneVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroSquadManagementScreen_C::HandleClosePicker(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleClosePicker");

	Params::HeroSquadManagementScreen_C_HandleClosePicker Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             HeaderText                                             (Parm)
// class FText                             BodyText                                               (Parm)

void UHeroSquadManagementScreen_C::ShowSlotInfo(const class FText& HeaderText, const class FText& BodyText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "ShowSlotInfo");

	Params::HeroSquadManagementScreen_C_ShowSlotInfo Parms{};

	Parms.HeaderText = std::move(HeaderText);
	Parms.BodyText = std::move(BodyText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HideSlotInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HideSlotInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "Update Hero Squad Bonus Tiles SubIcon Glow State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::Update_Hero_Squad_Bonus_Highlight_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "Update Hero Squad Bonus Highlight State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SquadSlotIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadManagementScreen_C::UpdateSquadSlotInfoPanel(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "UpdateSquadSlotInfoPanel");

	Params::HeroSquadManagementScreen_C_UpdateSquadSlotInfoPanel Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleShowSlotInfoAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleShowSlotInfoAni()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleShowSlotInfoAni");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerShowAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandlePickerShowAni()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandlePickerShowAni");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleHideSlotInfoAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandleHideSlotInfoAni()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandleHideSlotInfoAni");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerHideAni
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadManagementScreen_C::HandlePickerHideAni()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadManagementScreen_C", "HandlePickerHideAni");

	UObject::ProcessEvent(Func, nullptr);
}

}

