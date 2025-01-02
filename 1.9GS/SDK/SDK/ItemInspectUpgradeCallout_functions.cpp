#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectUpgradeCallout

#include "Basic.hpp"

#include "ItemInspectUpgradeCallout_classes.hpp"
#include "ItemInspectUpgradeCallout_parameters.hpp"


namespace SDK
{

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::ExecuteUbergraph_ItemInspectUpgradeCallout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "ExecuteUbergraph_ItemInspectUpgradeCallout");

	Params::ItemInspectUpgradeCallout_C_ExecuteUbergraph_ItemInspectUpgradeCallout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectUpgradeCallout_C_BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectUpgradeCallout_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::SetItemToRepresent(class UFortItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "SetItemToRepresent");

	Params::ItemInspectUpgradeCallout_C_SetItemToRepresent Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::DisableUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "DisableUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::EnableUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "EnableUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::RefreshOnUpgrade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "RefreshOnUpgrade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    UpgradeReady                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeCallout_C::IsUpgradeReady(bool* UpgradeReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "IsUpgradeReady");

	Params::ItemInspectUpgradeCallout_C_IsUpgradeReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeReady != nullptr)
		*UpgradeReady = Parms.UpgradeReady;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::ShowUpgradeInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "ShowUpgradeInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::ShowEvolutionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "ShowEvolutionInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    EvolutionReady                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeCallout_C::IsEvolutionReady(bool* EvolutionReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "IsEvolutionReady");

	Params::ItemInspectUpgradeCallout_C_IsEvolutionReady Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EvolutionReady != nullptr)
		*EvolutionReady = Parms.EvolutionReady;
}

}

