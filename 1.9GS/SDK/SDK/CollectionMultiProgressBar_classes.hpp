#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionMultiProgressBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CollectionMissionBadgeDisplayInfo_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionMultiProgressBar.CollectionMultiProgressBar_C
// 0x02D8 (0x0510 - 0x0238)
class UCollectionMultiProgressBar_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Flash;                                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CategoryIcon;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FlashImage;                                        // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ProgressBarsBox;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SpacerImage;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TopBox;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TopIconsBox;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCollectionMissionBadgeDisplayInfo> BarInfos;                                          // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	struct FProgressBarStyle                      ProgressBarsStyle;                                 // 0x0288(0x01B8)(Edit, BlueprintVisible)
	bool                                          bOnlyShowBarWithCountInRange;                      // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconBrush;                                         // 0x0448(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	EFortBrushSize                                IconSize;                                          // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bShowBarTopIcons;                                  // 0x04D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShowBarSideIcons;                                 // 0x04DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4DB[0x1];                                      // 0x04DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                BarsMargin;                                        // 0x04DC(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FMargin                                BarsIconMargin;                                    // 0x04EC(0x0010)(Edit, BlueprintVisible, NoDestructor)
	float                                         BarHeightFactor;                                   // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCollectionBar_C*                       PreviousBarWithCountInRange;                       // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BarHeightOverride;                                 // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CollectionMultiProgressBar(int32 EntryPoint);
	void Construct();
	void Setup(TArray<struct FCollectionMissionBadgeDisplayInfo>& InBarInfos, int32 AchievedCount);
	void Update(int32 AchievedCount);
	void UpdateVisibleBar();
	void PlayFlashAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionMultiProgressBar_C">();
	}
	static class UCollectionMultiProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionMultiProgressBar_C>();
	}
};
static_assert(alignof(UCollectionMultiProgressBar_C) == 0x000008, "Wrong alignment on UCollectionMultiProgressBar_C");
static_assert(sizeof(UCollectionMultiProgressBar_C) == 0x000510, "Wrong size on UCollectionMultiProgressBar_C");
static_assert(offsetof(UCollectionMultiProgressBar_C, UberGraphFrame) == 0x000238, "Member 'UCollectionMultiProgressBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, Flash) == 0x000240, "Member 'UCollectionMultiProgressBar_C::Flash' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, CategoryIcon) == 0x000248, "Member 'UCollectionMultiProgressBar_C::CategoryIcon' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, FlashImage) == 0x000250, "Member 'UCollectionMultiProgressBar_C::FlashImage' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, ProgressBarsBox) == 0x000258, "Member 'UCollectionMultiProgressBar_C::ProgressBarsBox' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, SpacerImage) == 0x000260, "Member 'UCollectionMultiProgressBar_C::SpacerImage' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, TopBox) == 0x000268, "Member 'UCollectionMultiProgressBar_C::TopBox' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, TopIconsBox) == 0x000270, "Member 'UCollectionMultiProgressBar_C::TopIconsBox' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, BarInfos) == 0x000278, "Member 'UCollectionMultiProgressBar_C::BarInfos' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, ProgressBarsStyle) == 0x000288, "Member 'UCollectionMultiProgressBar_C::ProgressBarsStyle' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, bOnlyShowBarWithCountInRange) == 0x000440, "Member 'UCollectionMultiProgressBar_C::bOnlyShowBarWithCountInRange' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, IconBrush) == 0x000448, "Member 'UCollectionMultiProgressBar_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, IconSize) == 0x0004D8, "Member 'UCollectionMultiProgressBar_C::IconSize' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, bShowBarTopIcons) == 0x0004D9, "Member 'UCollectionMultiProgressBar_C::bShowBarTopIcons' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, bShowBarSideIcons) == 0x0004DA, "Member 'UCollectionMultiProgressBar_C::bShowBarSideIcons' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, BarsMargin) == 0x0004DC, "Member 'UCollectionMultiProgressBar_C::BarsMargin' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, BarsIconMargin) == 0x0004EC, "Member 'UCollectionMultiProgressBar_C::BarsIconMargin' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, BarHeightFactor) == 0x0004FC, "Member 'UCollectionMultiProgressBar_C::BarHeightFactor' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, PreviousBarWithCountInRange) == 0x000500, "Member 'UCollectionMultiProgressBar_C::PreviousBarWithCountInRange' has a wrong offset!");
static_assert(offsetof(UCollectionMultiProgressBar_C, BarHeightOverride) == 0x000508, "Member 'UCollectionMultiProgressBar_C::BarHeightOverride' has a wrong offset!");

}

