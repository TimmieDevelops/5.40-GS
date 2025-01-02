#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EulaWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EulaWidget.EulaWidget_C
// 0x0060 (0x0468 - 0x0408)
class UEulaWidget_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonsHBox;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ConfirmButton;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DeclineButton;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     DescriptionText;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_1;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleText;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnEulaResponse;                                    // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SelectedResponse;                                  // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EulaWidget(int32 EntryPoint);
	void Construct();
	void Destruct();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_44_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetEulaText(const class FText& EULA);
	void SetViewOnly(bool bViewOnly);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EulaWidget_C">();
	}
	static class UEulaWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEulaWidget_C>();
	}
};
static_assert(alignof(UEulaWidget_C) == 0x000008, "Wrong alignment on UEulaWidget_C");
static_assert(sizeof(UEulaWidget_C) == 0x000468, "Wrong size on UEulaWidget_C");
static_assert(offsetof(UEulaWidget_C, UberGraphFrame) == 0x000410, "Member 'UEulaWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, ButtonsHBox) == 0x000418, "Member 'UEulaWidget_C::ButtonsHBox' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, ConfirmButton) == 0x000420, "Member 'UEulaWidget_C::ConfirmButton' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, DeclineButton) == 0x000428, "Member 'UEulaWidget_C::DeclineButton' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, DescriptionText) == 0x000430, "Member 'UEulaWidget_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, SafeZone) == 0x000438, "Member 'UEulaWidget_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, ScrollBox_1) == 0x000440, "Member 'UEulaWidget_C::ScrollBox_1' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, TitleText) == 0x000448, "Member 'UEulaWidget_C::TitleText' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, OnEulaResponse) == 0x000450, "Member 'UEulaWidget_C::OnEulaResponse' has a wrong offset!");
static_assert(offsetof(UEulaWidget_C, SelectedResponse) == 0x000460, "Member 'UEulaWidget_C::SelectedResponse' has a wrong offset!");

}

