#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRankEmblem

#include "Basic.hpp"

#include "PlayerRankEmblem_classes.hpp"
#include "PlayerRankEmblem_parameters.hpp"


namespace SDK
{

// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRankEmblem_C::ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "ExecuteUbergraph_PlayerRankEmblem");

	Params::PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerRankEmblem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

