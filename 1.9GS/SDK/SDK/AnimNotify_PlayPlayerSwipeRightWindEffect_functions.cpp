#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_PlayPlayerSwipeRightWindEffect

#include "Basic.hpp"

#include "AnimNotify_PlayPlayerSwipeRightWindEffect_classes.hpp"
#include "AnimNotify_PlayPlayerSwipeRightWindEffect_parameters.hpp"


namespace SDK
{

// Function AnimNotify_PlayPlayerSwipeRightWindEffect.AnimNotify_PlayPlayerSwipeRightWindEffect_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_PlayPlayerSwipeRightWindEffect_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayPlayerSwipeRightWindEffect_C", "Received_Notify");

	Params::AnimNotify_PlayPlayerSwipeRightWindEffect_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

