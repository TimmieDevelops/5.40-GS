#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreMessageNumber

#include "Basic.hpp"

#include "ScoreMessageNumber_classes.hpp"
#include "ScoreMessageNumber_parameters.hpp"


namespace SDK
{

// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreMessageNumber_C::ExecuteUbergraph_ScoreMessageNumber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreMessageNumber_C", "ExecuteUbergraph_ScoreMessageNumber");

	Params::ScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreMessageNumber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreMessageNumber_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreMessageNumber_C::UpdateScoreText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreMessageNumber_C", "UpdateScoreText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InScore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreMessageNumber_C::SetScore(int32 InScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreMessageNumber_C", "SetScore");

	Params::ScoreMessageNumber_C_SetScore Parms{};

	Parms.InScore = InScore;

	UObject::ProcessEvent(Func, &Parms);
}

}

