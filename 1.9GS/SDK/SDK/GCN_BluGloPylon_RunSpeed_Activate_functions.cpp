#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_BluGloPylon_RunSpeed_Activate

#include "Basic.hpp"

#include "GCN_BluGloPylon_RunSpeed_Activate_classes.hpp"
#include "GCN_BluGloPylon_RunSpeed_Activate_parameters.hpp"


namespace SDK
{

// Function GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_BluGloPylon_RunSpeed_Activate_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BluGloPylon_RunSpeed_Activate_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         SpawnedParticleSysComponent                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCN_BluGloPylon_RunSpeed_Activate_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BluGloPylon_RunSpeed_Activate_C", "OnStartParticleSystemSpawned");

	Params::GCN_BluGloPylon_RunSpeed_Activate_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

