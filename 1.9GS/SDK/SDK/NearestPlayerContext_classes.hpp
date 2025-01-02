#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NearestPlayerContext

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NearestPlayerContext.NearestPlayerContext_C
// 0x0040 (0x0070 - 0x0030)
class UNearestPlayerContext_C final : public UEnvQueryContext_BlueprintBase
{
public:
	struct FVector                                QuerierLocation;                                   // 0x0030(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GoalActorLocation;                                 // 0x003C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceBetweenQuerierAndGoal;                     // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalHuntingRadiusToUse;                           // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FinalHuntingRadiusLocationToUse;                   // 0x0050(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAIPawn*                            Querier;                                           // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NearestPlayerContext_C">();
	}
	static class UNearestPlayerContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNearestPlayerContext_C>();
	}
};
static_assert(alignof(UNearestPlayerContext_C) == 0x000008, "Wrong alignment on UNearestPlayerContext_C");
static_assert(sizeof(UNearestPlayerContext_C) == 0x000070, "Wrong size on UNearestPlayerContext_C");
static_assert(offsetof(UNearestPlayerContext_C, QuerierLocation) == 0x000030, "Member 'UNearestPlayerContext_C::QuerierLocation' has a wrong offset!");
static_assert(offsetof(UNearestPlayerContext_C, GoalActorLocation) == 0x00003C, "Member 'UNearestPlayerContext_C::GoalActorLocation' has a wrong offset!");
static_assert(offsetof(UNearestPlayerContext_C, DistanceBetweenQuerierAndGoal) == 0x000048, "Member 'UNearestPlayerContext_C::DistanceBetweenQuerierAndGoal' has a wrong offset!");
static_assert(offsetof(UNearestPlayerContext_C, FinalHuntingRadiusToUse) == 0x00004C, "Member 'UNearestPlayerContext_C::FinalHuntingRadiusToUse' has a wrong offset!");
static_assert(offsetof(UNearestPlayerContext_C, FinalHuntingRadiusLocationToUse) == 0x000050, "Member 'UNearestPlayerContext_C::FinalHuntingRadiusLocationToUse' has a wrong offset!");
static_assert(offsetof(UNearestPlayerContext_C, Querier) == 0x000060, "Member 'UNearestPlayerContext_C::Querier' has a wrong offset!");
static_assert(offsetof(UNearestPlayerContext_C, Debug) == 0x000068, "Member 'UNearestPlayerContext_C::Debug' has a wrong offset!");

}

