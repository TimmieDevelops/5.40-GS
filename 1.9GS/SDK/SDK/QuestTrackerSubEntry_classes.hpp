#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTrackerSubEntry

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestTrackerSubEntry.QuestTrackerSubEntry_C
// 0x0170 (0x03E8 - 0x0278)
class UQuestTrackerSubEntry_C final : public UFortQuestTrackerSubEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       CheckmarkAnimation;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CompletionRemove;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CompletionFlash;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bullet;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BulletOverlay;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Checkmark;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FlashImage;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ObjectiveDescriptionText;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pin;                                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            NonHUDBullet;                                      // 0x02C8(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            NonHUDPin;                                         // 0x0358(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_QuestTrackerSubEntry(int32 EntryPoint);
	void PostCompletionDelay();
	void OnCompletionFlashFInished();
	void OnPlayObjectiveCompletedAnimation();
	void OnQuestsUpdated();
	void Construct();
	void UpdateObjectiveText();
	void HideIfEmpty();
	void HandleRemoveFinished();

	float GetHeightEstimate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestTrackerSubEntry_C">();
	}
	static class UQuestTrackerSubEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestTrackerSubEntry_C>();
	}
};
static_assert(alignof(UQuestTrackerSubEntry_C) == 0x000008, "Wrong alignment on UQuestTrackerSubEntry_C");
static_assert(sizeof(UQuestTrackerSubEntry_C) == 0x0003E8, "Wrong size on UQuestTrackerSubEntry_C");
static_assert(offsetof(UQuestTrackerSubEntry_C, UberGraphFrame) == 0x000278, "Member 'UQuestTrackerSubEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, CheckmarkAnimation) == 0x000280, "Member 'UQuestTrackerSubEntry_C::CheckmarkAnimation' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, CompletionRemove) == 0x000288, "Member 'UQuestTrackerSubEntry_C::CompletionRemove' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, CompletionFlash) == 0x000290, "Member 'UQuestTrackerSubEntry_C::CompletionFlash' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, Bullet) == 0x000298, "Member 'UQuestTrackerSubEntry_C::Bullet' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, BulletOverlay) == 0x0002A0, "Member 'UQuestTrackerSubEntry_C::BulletOverlay' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, Checkmark) == 0x0002A8, "Member 'UQuestTrackerSubEntry_C::Checkmark' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, FlashImage) == 0x0002B0, "Member 'UQuestTrackerSubEntry_C::FlashImage' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, ObjectiveDescriptionText) == 0x0002B8, "Member 'UQuestTrackerSubEntry_C::ObjectiveDescriptionText' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, Pin) == 0x0002C0, "Member 'UQuestTrackerSubEntry_C::Pin' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, NonHUDBullet) == 0x0002C8, "Member 'UQuestTrackerSubEntry_C::NonHUDBullet' has a wrong offset!");
static_assert(offsetof(UQuestTrackerSubEntry_C, NonHUDPin) == 0x000358, "Member 'UQuestTrackerSubEntry_C::NonHUDPin' has a wrong offset!");

}

