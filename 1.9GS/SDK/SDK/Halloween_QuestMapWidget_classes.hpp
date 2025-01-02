#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween_QuestMapWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Halloween_QuestMapWidget.Halloween_QuestMapWidget_C
// 0x00F8 (0x0330 - 0x0238)
class UHalloween_QuestMapWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      BtnTest;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaignMapIconTextButton_C*           CMButtonNext;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCampaignMapIconTextButton_C*           CMButtonPrevious;                                  // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*                CVWLeft;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*                CVWRight;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*                Halloween01;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*                Halloween02;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*                Halloween03;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*                Halloween04;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProtoCampaignMapPage_C*                Halloween05;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_01_C*                 HalloweenMapPage_01;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_02_C*                 HalloweenMapPage_02;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_03_C*                 HalloweenMapPage_03;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_04_C*                 HalloweenMapPage_04;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHalloweenMapPage_05_C*                 HalloweenMapPage_05;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLeftTrigger;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRightTrigger;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_PowerBolt;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayLeft;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayRight;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherPages;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMap;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPage;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_PowerNumber;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Txt_Recommeded;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                         CurrentQuestItem;                                  // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetIndex;                                       // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             SoundCue_Woosh;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberOfPages;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Halloween_QuestMapWidget(int32 EntryPoint);
	void BndEvt__CMButtonPrevious_K2Node_ComponentBoundEvent_414_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CMButtonNext_K2Node_ComponentBoundEvent_199_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Handle_OnQuestsUpdated();
	void Construct();
	void BndEvt__BtnTest_K2Node_ComponentBoundEvent_514_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Update();
	void Find_Active_Page();
	void SetTriggerIcon(bool PassThrough);
	void Find_Current_Page___Halloween_Event();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Halloween_QuestMapWidget_C">();
	}
	static class UHalloween_QuestMapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHalloween_QuestMapWidget_C>();
	}
};
static_assert(alignof(UHalloween_QuestMapWidget_C) == 0x000008, "Wrong alignment on UHalloween_QuestMapWidget_C");
static_assert(sizeof(UHalloween_QuestMapWidget_C) == 0x000330, "Wrong size on UHalloween_QuestMapWidget_C");
static_assert(offsetof(UHalloween_QuestMapWidget_C, UberGraphFrame) == 0x000238, "Member 'UHalloween_QuestMapWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, BtnTest) == 0x000240, "Member 'UHalloween_QuestMapWidget_C::BtnTest' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, CMButtonNext) == 0x000248, "Member 'UHalloween_QuestMapWidget_C::CMButtonNext' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, CMButtonPrevious) == 0x000250, "Member 'UHalloween_QuestMapWidget_C::CMButtonPrevious' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, CVWLeft) == 0x000258, "Member 'UHalloween_QuestMapWidget_C::CVWLeft' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, CVWRight) == 0x000260, "Member 'UHalloween_QuestMapWidget_C::CVWRight' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Halloween01) == 0x000268, "Member 'UHalloween_QuestMapWidget_C::Halloween01' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Halloween02) == 0x000270, "Member 'UHalloween_QuestMapWidget_C::Halloween02' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Halloween03) == 0x000278, "Member 'UHalloween_QuestMapWidget_C::Halloween03' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Halloween04) == 0x000280, "Member 'UHalloween_QuestMapWidget_C::Halloween04' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Halloween05) == 0x000288, "Member 'UHalloween_QuestMapWidget_C::Halloween05' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, HalloweenMapPage_01) == 0x000290, "Member 'UHalloween_QuestMapWidget_C::HalloweenMapPage_01' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, HalloweenMapPage_02) == 0x000298, "Member 'UHalloween_QuestMapWidget_C::HalloweenMapPage_02' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, HalloweenMapPage_03) == 0x0002A0, "Member 'UHalloween_QuestMapWidget_C::HalloweenMapPage_03' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, HalloweenMapPage_04) == 0x0002A8, "Member 'UHalloween_QuestMapWidget_C::HalloweenMapPage_04' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, HalloweenMapPage_05) == 0x0002B0, "Member 'UHalloween_QuestMapWidget_C::HalloweenMapPage_05' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, ImageLeftTrigger) == 0x0002B8, "Member 'UHalloween_QuestMapWidget_C::ImageLeftTrigger' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, ImageRightTrigger) == 0x0002C0, "Member 'UHalloween_QuestMapWidget_C::ImageRightTrigger' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Img_PowerBolt) == 0x0002C8, "Member 'UHalloween_QuestMapWidget_C::Img_PowerBolt' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, OverlayLeft) == 0x0002D0, "Member 'UHalloween_QuestMapWidget_C::OverlayLeft' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, OverlayRight) == 0x0002D8, "Member 'UHalloween_QuestMapWidget_C::OverlayRight' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, SafeZone_0) == 0x0002E0, "Member 'UHalloween_QuestMapWidget_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, SwitcherPages) == 0x0002E8, "Member 'UHalloween_QuestMapWidget_C::SwitcherPages' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, TextMap) == 0x0002F0, "Member 'UHalloween_QuestMapWidget_C::TextMap' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, TextPage) == 0x0002F8, "Member 'UHalloween_QuestMapWidget_C::TextPage' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Txt_PowerNumber) == 0x000300, "Member 'UHalloween_QuestMapWidget_C::Txt_PowerNumber' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, Txt_Recommeded) == 0x000308, "Member 'UHalloween_QuestMapWidget_C::Txt_Recommeded' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, CurrentQuestItem) == 0x000310, "Member 'UHalloween_QuestMapWidget_C::CurrentQuestItem' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, TargetIndex) == 0x000318, "Member 'UHalloween_QuestMapWidget_C::TargetIndex' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, SoundCue_Woosh) == 0x000320, "Member 'UHalloween_QuestMapWidget_C::SoundCue_Woosh' has a wrong offset!");
static_assert(offsetof(UHalloween_QuestMapWidget_C, NumberOfPages) == 0x000328, "Member 'UHalloween_QuestMapWidget_C::NumberOfPages' has a wrong offset!");

}
