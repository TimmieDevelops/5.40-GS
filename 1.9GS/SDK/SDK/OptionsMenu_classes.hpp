#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenu

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// 0x0090 (0x04A0 - 0x0410)
class UOptionsMenu_C final : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          BorderBackground;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CurrentTabSwitcher;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      LanguageOk;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MESSAGE;                                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OverlayText;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                   SettingsTabs;                                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      VideoSettingsAccept;                               // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      VideoSettingsCancel;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedOption;                                    // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C[0x4];                                      // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Current_Tab;                                       // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Accept_Input;                                      // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Video_Tab_Selected;                                // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Apply_Visible;                                     // 0x048A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_48B[0x5];                                      // 0x048B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortOptionsTab*>                AllTabWidgets;                                     // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint);
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnHandleBack();
	void HandleSettingsErrorMessageClosed();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleBenchmarkComplete();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Gamepad_Changed(bool Gamepad_Enabled);
	void Disable_Overlay_Input();
	void OnActivated();
	void Tab_Setting_Changed();
	void Destruct();
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Disable_Overlay();
	void Enable_Overlay_Video(bool Accept_Input_0);
	void Enable_Overlay_Input(bool Accept_Input_0, const class FText& Overlay_Text);
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Construct();
	void DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F(EFortDialogResult Result, class FName ResultName);
	void Initialize();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Handle_Apply(bool* PassThrough);
	void Handle_Reset_Default(bool* PassThrough);
	void Handle_Reset(bool* PassThrough);
	void HandleBack(bool* PassThrough);
	void Set_Input_Action_Handlers();
	void Handle_Toggle_Mode(bool* PassThrough);
	void HandleCursorModeChanging(bool IsEnabled);
	void AddTab(class UClass* WidgetClass, const class FText& DisplayName, class FName NameId);
	void SetBackground();
	void Handle_Reset_HUD_Default(bool* PassThrough);
	void CenterOnActiveTab();
	void HandleResetGameOptionsToDefault(bool* PassThrough);
	void HandleTabGameOptionsResetButtonVisibility(int32 ActiveWidgetIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenu_C">();
	}
	static class UOptionsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenu_C>();
	}
};
static_assert(alignof(UOptionsMenu_C) == 0x000008, "Wrong alignment on UOptionsMenu_C");
static_assert(sizeof(UOptionsMenu_C) == 0x0004A0, "Wrong size on UOptionsMenu_C");
static_assert(offsetof(UOptionsMenu_C, UberGraphFrame) == 0x000410, "Member 'UOptionsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, BorderBackground) == 0x000418, "Member 'UOptionsMenu_C::BorderBackground' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, CurrentTabSwitcher) == 0x000420, "Member 'UOptionsMenu_C::CurrentTabSwitcher' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Image_0) == 0x000428, "Member 'UOptionsMenu_C::Image_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, LanguageOk) == 0x000430, "Member 'UOptionsMenu_C::LanguageOk' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, MESSAGE) == 0x000438, "Member 'UOptionsMenu_C::MESSAGE' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, OverlayText) == 0x000440, "Member 'UOptionsMenu_C::OverlayText' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SafeZone_0) == 0x000448, "Member 'UOptionsMenu_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SafeZone_1) == 0x000450, "Member 'UOptionsMenu_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SettingsTabs) == 0x000458, "Member 'UOptionsMenu_C::SettingsTabs' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Title) == 0x000460, "Member 'UOptionsMenu_C::Title' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, VideoSettingsAccept) == 0x000468, "Member 'UOptionsMenu_C::VideoSettingsAccept' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, VideoSettingsCancel) == 0x000470, "Member 'UOptionsMenu_C::VideoSettingsCancel' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, SelectedOption) == 0x000478, "Member 'UOptionsMenu_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Current_Tab) == 0x000480, "Member 'UOptionsMenu_C::Current_Tab' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Accept_Input) == 0x000488, "Member 'UOptionsMenu_C::Accept_Input' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Video_Tab_Selected) == 0x000489, "Member 'UOptionsMenu_C::Video_Tab_Selected' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, Apply_Visible) == 0x00048A, "Member 'UOptionsMenu_C::Apply_Visible' has a wrong offset!");
static_assert(offsetof(UOptionsMenu_C, AllTabWidgets) == 0x000490, "Member 'UOptionsMenu_C::AllTabWidgets' has a wrong offset!");

}

