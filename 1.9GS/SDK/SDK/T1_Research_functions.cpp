#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T1_Research

#include "Basic.hpp"

#include "T1_Research_classes.hpp"
#include "T1_Research_parameters.hpp"


namespace SDK
{

// Function T1_Research.T1_Research_C.ExecuteUbergraph_T1_Research
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UT1_Research_C::ExecuteUbergraph_T1_Research(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T1_Research_C", "ExecuteUbergraph_T1_Research");

	Params::T1_Research_C_ExecuteUbergraph_T1_Research Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function T1_Research.T1_Research_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT1_Research_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T1_Research_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function T1_Research.T1_Research_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UT1_Research_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T1_Research_C", "PreConstruct");

	Params::T1_Research_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
