#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNews

#include "Basic.hpp"

#include "AthenaNews_classes.hpp"
#include "AthenaNews_parameters.hpp"


namespace SDK
{

// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNews_C", "ExecuteUbergraph_AthenaNews");

	Params::AthenaNews_C_ExecuteUbergraph_AthenaNews Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaNews.AthenaNews_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaNews_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaNews_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

