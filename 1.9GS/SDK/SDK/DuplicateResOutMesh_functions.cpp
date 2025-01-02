#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DuplicateResOutMesh

#include "Basic.hpp"

#include "DuplicateResOutMesh_classes.hpp"
#include "DuplicateResOutMesh_parameters.hpp"


namespace SDK
{

// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADuplicateResOutMesh_C::ExecuteUbergraph_DuplicateResOutMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ExecuteUbergraph_DuplicateResOutMesh");

	Params::DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MID_Array                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USkeletalMeshComponent*>   External_MEsh_Component_Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ADuplicateResOutMesh_C::UpdateExternalParameters(const TArray<class UMaterialInstanceDynamic*>& MID_Array, const TArray<class USkeletalMeshComponent*>& External_MEsh_Component_Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "UpdateExternalParameters");

	Params::DuplicateResOutMesh_C_UpdateExternalParameters Parms{};

	Parms.MID_Array = std::move(MID_Array);
	Parms.External_MEsh_Component_Array = std::move(External_MEsh_Component_Array);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADuplicateResOutMesh_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ReceiveTick");

	Params::DuplicateResOutMesh_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADuplicateResOutMesh_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc
// (BlueprintEvent)

void ADuplicateResOutMesh_C::CharacterSpawnInTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "CharacterSpawnInTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc
// (BlueprintEvent)

void ADuplicateResOutMesh_C::CharacterSpawnInTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "CharacterSpawnInTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray
// (Public, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::initializeExternalSkeletalMeshArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "initializeExternalSkeletalMeshArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Find_Bounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Find Bounds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Spawn__Light()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Spawn  Light");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Make_and_slave_internal_meshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Make and slave internal meshes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array
// (Public, BlueprintCallable, BlueprintEvent)

void ADuplicateResOutMesh_C::Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DuplicateResOutMesh_C", "Make internal mids and append external and intermal mids to mid array");

	UObject::ProcessEvent(Func, nullptr);
}

}

