#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsMenuSlider.OptionsMenuSlider_C
// 0x0090 (0x02C0 - 0x0230)
class UOptionsMenuSlider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                          MenuSlider;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SliderBackground;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SliderText;                                        // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SliderValue;                                       // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   SliderChanged;                                     // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Total_Width;                                       // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Slider_Texture;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Tab_Tooltip_Text;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Hover_Text;                                        // 0x0288(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MinIntegralDigits;                                 // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxIntegralDigits;                                 // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MinFractionalDigits;                               // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxFractionalDigits;                               // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxSensitivityValue;                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinSensitivityValue;                               // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERoundingMode                                 RoundingMode;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OptionsMenuSlider(int32 EntryPoint);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature();
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void Update_Slider(const class FText& Slider_Text, float Slider_Value, const class FText& Hover_Text_0, class UCommonTextBlock* Tooltip_Text_Block);
	void Center_On_Widget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsMenuSlider_C">();
	}
	static class UOptionsMenuSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsMenuSlider_C>();
	}
};
static_assert(alignof(UOptionsMenuSlider_C) == 0x000008, "Wrong alignment on UOptionsMenuSlider_C");
static_assert(sizeof(UOptionsMenuSlider_C) == 0x0002C0, "Wrong size on UOptionsMenuSlider_C");
static_assert(offsetof(UOptionsMenuSlider_C, UberGraphFrame) == 0x000230, "Member 'UOptionsMenuSlider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, Button_0) == 0x000238, "Member 'UOptionsMenuSlider_C::Button_0' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MenuSlider) == 0x000240, "Member 'UOptionsMenuSlider_C::MenuSlider' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, SliderBackground) == 0x000248, "Member 'UOptionsMenuSlider_C::SliderBackground' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, SliderText) == 0x000250, "Member 'UOptionsMenuSlider_C::SliderText' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, SliderValue) == 0x000258, "Member 'UOptionsMenuSlider_C::SliderValue' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, SliderChanged) == 0x000260, "Member 'UOptionsMenuSlider_C::SliderChanged' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, Total_Width) == 0x000270, "Member 'UOptionsMenuSlider_C::Total_Width' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, Slider_Texture) == 0x000278, "Member 'UOptionsMenuSlider_C::Slider_Texture' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, Tab_Tooltip_Text) == 0x000280, "Member 'UOptionsMenuSlider_C::Tab_Tooltip_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, Hover_Text) == 0x000288, "Member 'UOptionsMenuSlider_C::Hover_Text' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MinIntegralDigits) == 0x0002A0, "Member 'UOptionsMenuSlider_C::MinIntegralDigits' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MaxIntegralDigits) == 0x0002A4, "Member 'UOptionsMenuSlider_C::MaxIntegralDigits' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MinFractionalDigits) == 0x0002A8, "Member 'UOptionsMenuSlider_C::MinFractionalDigits' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MaxFractionalDigits) == 0x0002AC, "Member 'UOptionsMenuSlider_C::MaxFractionalDigits' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MaxSensitivityValue) == 0x0002B0, "Member 'UOptionsMenuSlider_C::MaxSensitivityValue' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, MinSensitivityValue) == 0x0002B4, "Member 'UOptionsMenuSlider_C::MinSensitivityValue' has a wrong offset!");
static_assert(offsetof(UOptionsMenuSlider_C, RoundingMode) == 0x0002B8, "Member 'UOptionsMenuSlider_C::RoundingMode' has a wrong offset!");

}

