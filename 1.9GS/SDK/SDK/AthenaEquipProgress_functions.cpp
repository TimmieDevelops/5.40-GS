#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquipProgress

#include "Basic.hpp"

#include "AthenaEquipProgress_classes.hpp"
#include "AthenaEquipProgress_parameters.hpp"


namespace SDK
{

// Function AthenaEquipProgress.AthenaEquipProgress_C.ExecuteUbergraph_AthenaEquipProgress
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquipProgress_C::ExecuteUbergraph_AthenaEquipProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquipProgress_C", "ExecuteUbergraph_AthenaEquipProgress");

	Params::AthenaEquipProgress_C_ExecuteUbergraph_AthenaEquipProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEquipProgress_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquipProgress_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.OnUIGameplayCue_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CueName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAthenaEquipProgress_C::OnUIGameplayCue_Event_0(class FName CueName, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquipProgress_C", "OnUIGameplayCue_Event_0");

	Params::AthenaEquipProgress_C_OnUIGameplayCue_Event_0 Parms{};

	Parms.CueName = CueName;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEquipProgress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquipProgress_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaEquipProgress.AthenaEquipProgress_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEquipProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquipProgress_C", "Tick");

	Params::AthenaEquipProgress_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

