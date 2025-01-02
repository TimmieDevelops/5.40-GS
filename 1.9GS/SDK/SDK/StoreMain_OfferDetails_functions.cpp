#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_OfferDetails

#include "Basic.hpp"

#include "StoreMain_OfferDetails_classes.hpp"
#include "StoreMain_OfferDetails_parameters.hpp"


namespace SDK
{

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "ExecuteUbergraph_StoreMain_OfferDetails");

	Params::StoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_OfferDetails_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_OfferDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandlePurchaseComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_OfferDetails_C::HandlePurchaseComplete(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "HandlePurchaseComplete");

	Params::StoreMain_OfferDetails_C_HandlePurchaseComplete Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_OfferDetails_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	Params::StoreMain_OfferDetails_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "HandleBack");

	Params::StoreMain_OfferDetails_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::PopDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_OfferDetails_C", "PopDetails");

	UObject::ProcessEvent(Func, nullptr);
}

}
