#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamScoreDetailsContent

#include "Basic.hpp"

#include "TeamScoreDetailsContent_classes.hpp"
#include "TeamScoreDetailsContent_parameters.hpp"


namespace SDK
{

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.ExecuteUbergraph_TeamScoreDetailsContent
// ()
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreDetailsContent_C::ExecuteUbergraph_TeamScoreDetailsContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreDetailsContent_C", "ExecuteUbergraph_TeamScoreDetailsContent");

	Params::TeamScoreDetailsContent_C_ExecuteUbergraph_TeamScoreDetailsContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.OnScoreReportChanged
// (BlueprintCallable, BlueprintEvent)

void UTeamScoreDetailsContent_C::OnScoreReportChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreDetailsContent_C", "OnScoreReportChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamScoreDetailsContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreDetailsContent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.SetRowData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RowIdx                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamScoreDetailsContent_C::SetRowData(int32 RowIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreDetailsContent_C", "SetRowData");

	Params::TeamScoreDetailsContent_C_SetRowData Parms{};

	Parms.RowIdx = RowIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.TrimUnusedRows
// (Public, BlueprintCallable, BlueprintEvent)

void UTeamScoreDetailsContent_C::TrimUnusedRows()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamScoreDetailsContent_C", "TrimUnusedRows");

	UObject::ProcessEvent(Func, nullptr);
}

}
