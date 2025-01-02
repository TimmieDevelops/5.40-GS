#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewardsCurrent

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyRewardsCurrent.DailyRewardsCurrent_C
// 0x0060 (0x02A8 - 0x0248)
class UDailyRewardsCurrent_C final : public UFortDailyRewardsItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Flare_Backing;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortItemCard;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRarityFlare;                                  // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ScheduleText;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_LFT;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_RGT;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ScheduleName;                                      // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          IsClaiming;                                        // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               RarityFlare_MID;                                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DailyRewardsCurrent(int32 EntryPoint);
	void Construct();
	void Set_Item(class UFortItem* Item_To_Represent, int32 Quantity);
	void Set_Item_Flare();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyRewardsCurrent_C">();
	}
	static class UDailyRewardsCurrent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyRewardsCurrent_C>();
	}
};
static_assert(alignof(UDailyRewardsCurrent_C) == 0x000008, "Wrong alignment on UDailyRewardsCurrent_C");
static_assert(sizeof(UDailyRewardsCurrent_C) == 0x0002A8, "Wrong size on UDailyRewardsCurrent_C");
static_assert(offsetof(UDailyRewardsCurrent_C, UberGraphFrame) == 0x000248, "Member 'UDailyRewardsCurrent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, Flare_Backing) == 0x000250, "Member 'UDailyRewardsCurrent_C::Flare_Backing' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, FortItemCard) == 0x000258, "Member 'UDailyRewardsCurrent_C::FortItemCard' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, ImageRarityFlare) == 0x000260, "Member 'UDailyRewardsCurrent_C::ImageRarityFlare' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, ScheduleText) == 0x000268, "Member 'UDailyRewardsCurrent_C::ScheduleText' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, Spacer_LFT) == 0x000270, "Member 'UDailyRewardsCurrent_C::Spacer_LFT' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, Spacer_RGT) == 0x000278, "Member 'UDailyRewardsCurrent_C::Spacer_RGT' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, ScheduleName) == 0x000280, "Member 'UDailyRewardsCurrent_C::ScheduleName' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, IsClaiming) == 0x000298, "Member 'UDailyRewardsCurrent_C::IsClaiming' has a wrong offset!");
static_assert(offsetof(UDailyRewardsCurrent_C, RarityFlare_MID) == 0x0002A0, "Member 'UDailyRewardsCurrent_C::RarityFlare_MID' has a wrong offset!");

}

