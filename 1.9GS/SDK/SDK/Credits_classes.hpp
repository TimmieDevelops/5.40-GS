#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Credits

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Credits.Credits_C
// 0x0040 (0x0420 - 0x03E0)
class UCredits_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeMask_Show;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_0;                               // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageMask;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_2;                                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxCredits;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         EndPointOffset;                                    // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_414[0x4];                                      // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ScrollTimerHandle;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_Credits(int32 EntryPoint);
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void HandleFadeInFinished();
	void HandleBack(bool* PassThrough);
	void ToggleScrollTimer(bool EnableTimer);
	void ScrollCredits();
	void CaptureEndPoint();
	void Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Credits_C">();
	}
	static class UCredits_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCredits_C>();
	}
};
static_assert(alignof(UCredits_C) == 0x000008, "Wrong alignment on UCredits_C");
static_assert(sizeof(UCredits_C) == 0x000420, "Wrong size on UCredits_C");
static_assert(offsetof(UCredits_C, UberGraphFrame) == 0x0003E0, "Member 'UCredits_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCredits_C, FadeMask_Show) == 0x0003E8, "Member 'UCredits_C::FadeMask_Show' has a wrong offset!");
static_assert(offsetof(UCredits_C, FortRichTextBlock_0) == 0x0003F0, "Member 'UCredits_C::FortRichTextBlock_0' has a wrong offset!");
static_assert(offsetof(UCredits_C, ImageMask) == 0x0003F8, "Member 'UCredits_C::ImageMask' has a wrong offset!");
static_assert(offsetof(UCredits_C, SafeZone_2) == 0x000400, "Member 'UCredits_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(UCredits_C, ScrollBoxCredits) == 0x000408, "Member 'UCredits_C::ScrollBoxCredits' has a wrong offset!");
static_assert(offsetof(UCredits_C, EndPointOffset) == 0x000410, "Member 'UCredits_C::EndPointOffset' has a wrong offset!");
static_assert(offsetof(UCredits_C, ScrollTimerHandle) == 0x000418, "Member 'UCredits_C::ScrollTimerHandle' has a wrong offset!");

}

