#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_Bush

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_Bush.GCN_Athena_Bush_C
// 0x0048 (0x04B0 - 0x0468)
class AGCN_Athena_Bush_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0468(0x0008)(Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow2;                                            // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BushMesh;                                          // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Trail_Leaves;                                      // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PlayerPawn;                                        // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Bush;                                          // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GCN_Athena_Bush(int32 EntryPoint);
	void On_Player_Step();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Activated(class AActor* PlayerPawn_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Bush_C">();
	}
	static class AGCN_Athena_Bush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_Bush_C>();
	}
};
static_assert(alignof(AGCN_Athena_Bush_C) == 0x000008, "Wrong alignment on AGCN_Athena_Bush_C");
static_assert(sizeof(AGCN_Athena_Bush_C) == 0x0004B0, "Wrong size on AGCN_Athena_Bush_C");
static_assert(offsetof(AGCN_Athena_Bush_C, UberGraphFrame) == 0x000468, "Member 'AGCN_Athena_Bush_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow2) == 0x000470, "Member 'AGCN_Athena_Bush_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow1) == 0x000478, "Member 'AGCN_Athena_Bush_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushMesh) == 0x000480, "Member 'AGCN_Athena_Bush_C::BushMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow) == 0x000488, "Member 'AGCN_Athena_Bush_C::Arrow' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Trail_Leaves) == 0x000490, "Member 'AGCN_Athena_Bush_C::Trail_Leaves' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, PlayerPawn) == 0x000498, "Member 'AGCN_Athena_Bush_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, MID_Bush) == 0x0004A0, "Member 'AGCN_Athena_Bush_C::MID_Bush' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, IsActive) == 0x0004A8, "Member 'AGCN_Athena_Bush_C::IsActive' has a wrong offset!");

}

