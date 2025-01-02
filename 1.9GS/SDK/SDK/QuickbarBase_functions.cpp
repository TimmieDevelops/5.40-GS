#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuickbarBase

#include "Basic.hpp"

#include "QuickbarBase_classes.hpp"
#include "QuickbarBase_parameters.hpp"


namespace SDK
{

// Function QuickbarBase.QuickbarBase_C.ExecuteUbergraph_QuickbarBase
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::ExecuteUbergraph_QuickbarBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "ExecuteUbergraph_QuickbarBase");

	Params::QuickbarBase_C_ExecuteUbergraph_QuickbarBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerSpawned
// (BlueprintCallable, BlueprintEvent)

void UQuickbarBase_C::OnLocalPlayerSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnLocalPlayerSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerRevived
// (BlueprintCallable, BlueprintEvent)

void UQuickbarBase_C::OnLocalPlayerRevived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnLocalPlayerRevived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.OnLocalPlayerDied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           DeathReport                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UQuickbarBase_C::OnLocalPlayerDied(const struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnLocalPlayerDied");

	Params::QuickbarBase_C_OnLocalPlayerDied Parms{};

	Parms.DeathReport = std::move(DeathReport);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarSecondarySlotFocusChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Slot_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::OnQuickbarSecondarySlotFocusChanged_Event_0(EFortQuickBars QuickbarIndex, int32 Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarSecondarySlotFocusChanged_Event_0");

	Params::QuickbarBase_C_OnQuickbarSecondarySlotFocusChanged_Event_0 Parms{};

	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarForceFullUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::OnQuickbarForceFullUpdate(EFortQuickBars QuickbarIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarForceFullUpdate");

	Params::QuickbarBase_C_OnQuickbarForceFullUpdate Parms{};

	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarContentsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarBase_C::OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarContentsChanged");

	Params::QuickbarBase_C_OnQuickbarContentsChanged Parms{};

	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.OnQuickbarSlotFocusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Slot_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::OnQuickbarSlotFocusChanged(EFortQuickBars QuickbarIndex, int32 Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnQuickbarSlotFocusChanged");

	Params::QuickbarBase_C_OnQuickbarSlotFocusChanged Parms{};

	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.OnWorldItemListChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>           ItemsAdded                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>           ItemsRemoved                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UQuickbarBase_C::OnWorldItemListChanged(const TArray<class UFortWorldItem*>& ItemsAdded, const TArray<class UFortWorldItem*>& ItemsRemoved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "OnWorldItemListChanged");

	Params::QuickbarBase_C_OnWorldItemListChanged Parms{};

	Parms.ItemsAdded = std::move(ItemsAdded);
	Parms.ItemsRemoved = std::move(ItemsRemoved);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarBase.QuickbarBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.Is Valid Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Slot_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Valid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Array_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarBase_C::Is_Valid_Slot(int32 Slot_0, bool* Is_Valid, int32* Array_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "Is Valid Slot");

	Params::QuickbarBase_C_Is_Valid_Slot Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Valid != nullptr)
		*Is_Valid = Parms.Is_Valid;

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;
}


// Function QuickbarBase.QuickbarBase_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarBase_C::Maximize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "Maximize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarBase_C::Minimize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "Minimize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarBase_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarBase.QuickbarBase_C.RefreshQuickbar
// (Protected, BlueprintCallable, BlueprintEvent)

void UQuickbarBase_C::RefreshQuickbar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarBase_C", "RefreshQuickbar");

	UObject::ProcessEvent(Func, nullptr);
}

}
