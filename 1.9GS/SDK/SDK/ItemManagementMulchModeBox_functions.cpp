#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementMulchModeBox

#include "Basic.hpp"

#include "ItemManagementMulchModeBox_classes.hpp"
#include "ItemManagementMulchModeBox_parameters.hpp"


namespace SDK
{

// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.ExecuteUbergraph_ItemManagementMulchModeBox
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementMulchModeBox_C::ExecuteUbergraph_ItemManagementMulchModeBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "ExecuteUbergraph_ItemManagementMulchModeBox");

	Params::ItemManagementMulchModeBox_C_ExecuteUbergraph_ItemManagementMulchModeBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementMulchModeBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementMulchModeBox_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementMulchModeBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)

void UItemManagementMulchModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleDifferentItemToDetailSetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleBack");

	Params::ItemManagementMulchModeBox_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Pass_Through                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleInfo(bool* Pass_Through)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleInfo");

	Params::ItemManagementMulchModeBox_C_HandleInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pass_Through != nullptr)
		*Pass_Through = Parms.Pass_Through;
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleMulchListChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementMulchModeBox_C::HandleMulchListChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleMulchListChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleCursorModeChanging(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleCursorModeChanging");

	Params::ItemManagementMulchModeBox_C_HandleCursorModeChanging Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemManagementMulchModeBox.ItemManagementMulchModeBox_C.HandleLeaveInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementMulchModeBox_C::HandleLeaveInventory(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemManagementMulchModeBox_C", "HandleLeaveInventory");

	Params::ItemManagementMulchModeBox_C_HandleLeaveInventory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

}

