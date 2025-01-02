#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionReturnsWidget

#include "Basic.hpp"

#include "BP_FortExpeditionReturnsWidget_classes.hpp"
#include "BP_FortExpeditionReturnsWidget_parameters.hpp"


namespace SDK
{

// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.ExecuteUbergraph_BP_FortExpeditionReturnsWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::ExecuteUbergraph_BP_FortExpeditionReturnsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "ExecuteUbergraph_BP_FortExpeditionReturnsWidget");

	Params::BP_FortExpeditionReturnsWidget_C_ExecuteUbergraph_BP_FortExpeditionReturnsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionReturnsWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "PreConstruct");

	Params::BP_FortExpeditionReturnsWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              InItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "SetData");

	Params::BP_FortExpeditionReturnsWidget_C_SetData Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionReturnsWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.OnExpeditionInProgressUpdated
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionReturnsWidget_C::OnExpeditionInProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "OnExpeditionInProgressUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Refresh In Progress Widgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Refresh_In_Progress_Widgets(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Refresh In Progress Widgets");

	Params::BP_FortExpeditionReturnsWidget_C_Refresh_In_Progress_Widgets Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Time
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Set_Expedition_Return_Time(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Set Expedition Return Time");

	Params::BP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Time Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Set Expedition Return Progress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Set_Expedition_Return_Progress(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Set Expedition Return Progress");

	Params::BP_FortExpeditionReturnsWidget_C_Set_Expedition_Return_Progress Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition*    ItemDef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Get_Expedition_Item_Definition(class UFortExpeditionItem* Item_0, class UFortExpeditionItemDefinition** ItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Get Expedition Item Definition");

	Params::BP_FortExpeditionReturnsWidget_C_Get_Expedition_Item_Definition Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDef != nullptr)
		*ItemDef = Parms.ItemDef;
}


// Function BP_FortExpeditionReturnsWidget.BP_FortExpeditionReturnsWidget_C.Get Mcp Relative Utc Now
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        UtcNow                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionReturnsWidget_C::Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionReturnsWidget_C", "Get Mcp Relative Utc Now");

	Params::BP_FortExpeditionReturnsWidget_C_Get_Mcp_Relative_Utc_Now Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UtcNow != nullptr)
		*UtcNow = std::move(Parms.UtcNow);
}

}

