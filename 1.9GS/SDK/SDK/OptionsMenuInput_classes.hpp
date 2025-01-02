#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuInput

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuInput.OptionsMenuInput_C
// 0x0070 (0x02A8 - 0x0238)
class UOptionsMenuInput_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       InputText;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollingTextButton_C*                 PrimaryInput;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollingTextButton_C*                 SecondaryInput;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Number_in_List;                                    // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Input_Clicked;                                     // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonTextBlock*                       Tab_Tooltip_Text;                                  // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Hover_Text;                                        // 0x0280(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   UnbindClicked;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_OptionsMenuInput(int32 EntryPoint);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Reset();
	void ToggleExpansion();
	void SetSelected(bool bSelected);
	void SetIndexInList(int32 InIndexInList);
	void SetExpanded(bool bExpanded);
	void RegisterOnClicked(const TDelegate<void(class UUserWidget* Widget)>& Callback);
	void Private_OnExpanderArrowShiftClicked();
	void OnReleaseToPool();
	void OnAcquireFromPool();
	void Center_On_Widget();
	void Change_Key(bool Primary_Key, const class FText& Key_To_Sets);

	class UObject* GetData() const;
	bool IsItemExpanded() const;
	int32 GetIndentLevel() const;
	int32 DoesItemHaveChildren() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuInput_C">();
	}
	static class UOptionsMenuInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuInput_C>();
	}
};
static_assert(alignof(UOptionsMenuInput_C) == 0x000008, "Wrong alignment on UOptionsMenuInput_C");
static_assert(sizeof(UOptionsMenuInput_C) == 0x0002A8, "Wrong size on UOptionsMenuInput_C");
static_assert(offsetof(UOptionsMenuInput_C, UberGraphFrame) == 0x000238, "Member 'UOptionsMenuInput_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, IconTextButton) == 0x000240, "Member 'UOptionsMenuInput_C::IconTextButton' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, InputText) == 0x000248, "Member 'UOptionsMenuInput_C::InputText' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, PrimaryInput) == 0x000250, "Member 'UOptionsMenuInput_C::PrimaryInput' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, SecondaryInput) == 0x000258, "Member 'UOptionsMenuInput_C::SecondaryInput' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, Number_in_List) == 0x000260, "Member 'UOptionsMenuInput_C::Number_in_List' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, Input_Clicked) == 0x000268, "Member 'UOptionsMenuInput_C::Input_Clicked' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, Tab_Tooltip_Text) == 0x000278, "Member 'UOptionsMenuInput_C::Tab_Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, Hover_Text) == 0x000280, "Member 'UOptionsMenuInput_C::Hover_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuInput_C, UnbindClicked) == 0x000298, "Member 'UOptionsMenuInput_C::UnbindClicked' has a wrong offset!");

}

