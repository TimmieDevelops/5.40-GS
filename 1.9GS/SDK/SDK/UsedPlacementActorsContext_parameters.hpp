#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UsedPlacementActorsContext

#include "Basic.hpp"


namespace SDK::Params
{

// Function UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet
// 0x0038 (0x0038 - 0x0000)
struct UsedPlacementActorsContext_C_ProvideActorsSet final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ResultingActorsSet;                                // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                         CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors; // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UsedPlacementActorsContext_C_ProvideActorsSet) == 0x000008, "Wrong alignment on UsedPlacementActorsContext_C_ProvideActorsSet");
static_assert(sizeof(UsedPlacementActorsContext_C_ProvideActorsSet) == 0x000038, "Wrong size on UsedPlacementActorsContext_C_ProvideActorsSet");
static_assert(offsetof(UsedPlacementActorsContext_C_ProvideActorsSet, QuerierObject) == 0x000000, "Member 'UsedPlacementActorsContext_C_ProvideActorsSet::QuerierObject' has a wrong offset!");
static_assert(offsetof(UsedPlacementActorsContext_C_ProvideActorsSet, QuerierActor) == 0x000008, "Member 'UsedPlacementActorsContext_C_ProvideActorsSet::QuerierActor' has a wrong offset!");
static_assert(offsetof(UsedPlacementActorsContext_C_ProvideActorsSet, ResultingActorsSet) == 0x000010, "Member 'UsedPlacementActorsContext_C_ProvideActorsSet::ResultingActorsSet' has a wrong offset!");
static_assert(offsetof(UsedPlacementActorsContext_C_ProvideActorsSet, CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors) == 0x000020, "Member 'UsedPlacementActorsContext_C_ProvideActorsSet::CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors' has a wrong offset!");
static_assert(offsetof(UsedPlacementActorsContext_C_ProvideActorsSet, CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue) == 0x000030, "Member 'UsedPlacementActorsContext_C_ProvideActorsSet::CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue' has a wrong offset!");

}

