#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rewards_Header

#include "Basic.hpp"

#include "Rewards_Header_classes.hpp"
#include "Rewards_Header_parameters.hpp"


namespace SDK
{

// Function Rewards_Header.Rewards_Header_C.ExecuteUbergraph_Rewards_Header
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_Header_C::ExecuteUbergraph_Rewards_Header(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "ExecuteUbergraph_Rewards_Header");

	Params::Rewards_Header_C_ExecuteUbergraph_Rewards_Header Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Rewards_Header.Rewards_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewards_Header_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "PreConstruct");

	Params::Rewards_Header_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Rewards_Header.Rewards_Header_C.PopulateFromReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData*      InReward                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewards_Header_C::PopulateFromReward(class UFortRewardNotificationData* InReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "PopulateFromReward");

	Params::Rewards_Header_C_PopulateFromReward Parms{};

	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Rewards_Header.Rewards_Header_C.SetMissionLootLevelText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::SetMissionLootLevelText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "SetMissionLootLevelText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Rewards_Header.Rewards_Header_C.FadeInSubHeader
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::FadeInSubHeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "FadeInSubHeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Rewards_Header.Rewards_Header_C.ResetSubHeader
// (Public, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::ResetSubHeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "ResetSubHeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Rewards_Header.Rewards_Header_C.PopulateFromRewardType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndRewardType                     Selection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECollectionBookRewardType               CollectionBookRewardType                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             RewardDetailText                                       (Parm)

void URewards_Header_C::PopulateFromRewardType(EFrontEndRewardType Selection, ECollectionBookRewardType CollectionBookRewardType, const class FText& RewardDetailText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "PopulateFromRewardType");

	Params::Rewards_Header_C_PopulateFromRewardType Parms{};

	Parms.Selection = Selection;
	Parms.CollectionBookRewardType = CollectionBookRewardType;
	Parms.RewardDetailText = std::move(RewardDetailText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Rewards_Header.Rewards_Header_C.SetQuestNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::SetQuestNameText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "SetQuestNameText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Rewards_Header.Rewards_Header_C.SkipFadeInSubHeaderAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URewards_Header_C::SkipFadeInSubHeaderAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Rewards_Header_C", "SkipFadeInSubHeaderAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

