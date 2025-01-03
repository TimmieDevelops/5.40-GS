#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Proj_Athena_Bandage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C
// 0x0018 (0x0810 - 0x07F8)
class AB_Proj_Athena_Bandage_C final : public AFortProjectileBase
{
public:
	uint8                                         Pad_7F8[0x8];                                      // 0x07F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0800(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   MedBandage;                                        // 0x0808(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Proj_Athena_Bandage(int32 EntryPoint);
	void OnBounce(const struct FHitResult& Hit);
	void OnStop(const struct FHitResult& Hit);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Proj_Athena_Bandage_C">();
	}
	static class AB_Proj_Athena_Bandage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Proj_Athena_Bandage_C>();
	}
};
static_assert(alignof(AB_Proj_Athena_Bandage_C) == 0x000008, "Wrong alignment on AB_Proj_Athena_Bandage_C");
static_assert(sizeof(AB_Proj_Athena_Bandage_C) == 0x000810, "Wrong size on AB_Proj_Athena_Bandage_C");
static_assert(offsetof(AB_Proj_Athena_Bandage_C, UberGraphFrame) == 0x000800, "Member 'AB_Proj_Athena_Bandage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Proj_Athena_Bandage_C, MedBandage) == 0x000808, "Member 'AB_Proj_Athena_Bandage_C::MedBandage' has a wrong offset!");

}

