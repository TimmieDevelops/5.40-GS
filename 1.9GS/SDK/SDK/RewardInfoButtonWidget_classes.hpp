#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardInfoButtonWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C
// 0x0048 (0x0908 - 0x08C0)
class URewardInfoButtonWidget_C final : public UFortRewardInfoButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08C0(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ItemDetails;                                       // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemInfo;                                          // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DisplayNameText;                                   // 0x08D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   DisplayQuantity;                                   // 0x08F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_RewardInfoButtonWidget(int32 EntryPoint);
	void HandleDifferentItemOrQuantitySetBP();
	void SetShowDescriptionBP(bool bInShowDescription);
	void GetDisplayName(class FText* DisplayName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardInfoButtonWidget_C">();
	}
	static class URewardInfoButtonWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardInfoButtonWidget_C>();
	}
};
static_assert(alignof(URewardInfoButtonWidget_C) == 0x000008, "Wrong alignment on URewardInfoButtonWidget_C");
static_assert(sizeof(URewardInfoButtonWidget_C) == 0x000908, "Wrong size on URewardInfoButtonWidget_C");
static_assert(offsetof(URewardInfoButtonWidget_C, UberGraphFrame) == 0x0008C0, "Member 'URewardInfoButtonWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URewardInfoButtonWidget_C, ItemDetails) == 0x0008C8, "Member 'URewardInfoButtonWidget_C::ItemDetails' has a wrong offset!");
static_assert(offsetof(URewardInfoButtonWidget_C, ItemInfo) == 0x0008D0, "Member 'URewardInfoButtonWidget_C::ItemInfo' has a wrong offset!");
static_assert(offsetof(URewardInfoButtonWidget_C, DisplayNameText) == 0x0008D8, "Member 'URewardInfoButtonWidget_C::DisplayNameText' has a wrong offset!");
static_assert(offsetof(URewardInfoButtonWidget_C, DisplayQuantity) == 0x0008F0, "Member 'URewardInfoButtonWidget_C::DisplayQuantity' has a wrong offset!");

}

