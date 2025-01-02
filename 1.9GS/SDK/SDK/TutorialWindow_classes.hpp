#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialWindow

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialWindow.TutorialWindow_C
// 0x0040 (0x0448 - 0x0408)
class UTutorialWindow_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonBox;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRequestRetry;                                    // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_TutorialWindow(int32 EntryPoint);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetDescription(const class FText& Description_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialWindow_C">();
	}
	static class UTutorialWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialWindow_C>();
	}
};
static_assert(alignof(UTutorialWindow_C) == 0x000008, "Wrong alignment on UTutorialWindow_C");
static_assert(sizeof(UTutorialWindow_C) == 0x000448, "Wrong size on UTutorialWindow_C");
static_assert(offsetof(UTutorialWindow_C, UberGraphFrame) == 0x000410, "Member 'UTutorialWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, ButtonBox) == 0x000418, "Member 'UTutorialWindow_C::ButtonBox' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, Description) == 0x000420, "Member 'UTutorialWindow_C::Description' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, IconTextButton) == 0x000428, "Member 'UTutorialWindow_C::IconTextButton' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, Title) == 0x000430, "Member 'UTutorialWindow_C::Title' has a wrong offset!");
static_assert(offsetof(UTutorialWindow_C, OnRequestRetry) == 0x000438, "Member 'UTutorialWindow_C::OnRequestRetry' has a wrong offset!");

}

