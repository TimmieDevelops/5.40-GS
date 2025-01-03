#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StockBattleBus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C
// 0x0048 (0x03D8 - 0x0390)
class AB_StockBattleBus_C final : public AFortClientOnlyActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Bus;                                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LaunchTheBalloon_van_generator;                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BalloonFlame;                                      // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Apparatus;                                         // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Balloon;                                           // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LoopingSound;                                      // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LoopingMusic;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_StockBattleBus(int32 EntryPoint);
	void Start_Audio();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_StockBattleBus_C">();
	}
	static class AB_StockBattleBus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_StockBattleBus_C>();
	}
};
static_assert(alignof(AB_StockBattleBus_C) == 0x000008, "Wrong alignment on AB_StockBattleBus_C");
static_assert(sizeof(AB_StockBattleBus_C) == 0x0003D8, "Wrong size on AB_StockBattleBus_C");
static_assert(offsetof(AB_StockBattleBus_C, UberGraphFrame) == 0x000390, "Member 'AB_StockBattleBus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, Bus) == 0x000398, "Member 'AB_StockBattleBus_C::Bus' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, Scene) == 0x0003A0, "Member 'AB_StockBattleBus_C::Scene' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, LaunchTheBalloon_van_generator) == 0x0003A8, "Member 'AB_StockBattleBus_C::LaunchTheBalloon_van_generator' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, BalloonFlame) == 0x0003B0, "Member 'AB_StockBattleBus_C::BalloonFlame' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, Apparatus) == 0x0003B8, "Member 'AB_StockBattleBus_C::Apparatus' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, Balloon) == 0x0003C0, "Member 'AB_StockBattleBus_C::Balloon' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, LoopingSound) == 0x0003C8, "Member 'AB_StockBattleBus_C::LoopingSound' has a wrong offset!");
static_assert(offsetof(AB_StockBattleBus_C, LoopingMusic) == 0x0003D0, "Member 'AB_StockBattleBus_C::LoopingMusic' has a wrong offset!");

}

