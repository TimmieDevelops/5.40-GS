#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompendiumBundleUpsellPage

#include "Basic.hpp"

#include "CompendiumBundleUpsellPage_classes.hpp"
#include "CompendiumBundleUpsellPage_parameters.hpp"


namespace SDK
{

// Function CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C.ExecuteUbergraph_CompendiumBundleUpsellPage
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundleUpsellPage_C::ExecuteUbergraph_CompendiumBundleUpsellPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompendiumBundleUpsellPage_C", "ExecuteUbergraph_CompendiumBundleUpsellPage");

	Params::CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundleUpsellPage_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompendiumBundleUpsellPage_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C.SetCompendiumBundleInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCompendiumBundleDefinition*  CompendiumBundleInfo                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompendiumBundleUpsellPage_C::SetCompendiumBundleInfo(class UFortCompendiumBundleDefinition* CompendiumBundleInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CompendiumBundleUpsellPage_C", "SetCompendiumBundleInfo");

	Params::CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo Parms{};

	Parms.CompendiumBundleInfo = CompendiumBundleInfo;

	UObject::ProcessEvent(Func, &Parms);
}

}
