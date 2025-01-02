#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabBrightnessOptions

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabBrightnessOptions.TabBrightnessOptions_C
// 0x0040 (0x02C8 - 0x0288)
class UTabBrightnessOptions_C final : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 BackgroundSurpress;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_Light_C*             BrightnessValue;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DefaultCallOut;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_152;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TabBrightnessOptions(int32 EntryPoint);
	void CenterOnTab();
	void UpdateOptionsTab();
	void BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void Construct();
	void Update_Data();
	void Initialize_Data();
	void Set_Default_Call_Out();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabBrightnessOptions_C">();
	}
	static class UTabBrightnessOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabBrightnessOptions_C>();
	}
};
static_assert(alignof(UTabBrightnessOptions_C) == 0x000008, "Wrong alignment on UTabBrightnessOptions_C");
static_assert(sizeof(UTabBrightnessOptions_C) == 0x0002C8, "Wrong size on UTabBrightnessOptions_C");
static_assert(offsetof(UTabBrightnessOptions_C, UberGraphFrame) == 0x000288, "Member 'UTabBrightnessOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, BackgroundSurpress) == 0x000290, "Member 'UTabBrightnessOptions_C::BackgroundSurpress' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, BrightnessValue) == 0x000298, "Member 'UTabBrightnessOptions_C::BrightnessValue' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, CommonTextBlock_0) == 0x0002A0, "Member 'UTabBrightnessOptions_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, DefaultCallOut) == 0x0002A8, "Member 'UTabBrightnessOptions_C::DefaultCallOut' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, Image_0) == 0x0002B0, "Member 'UTabBrightnessOptions_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, Image_1) == 0x0002B8, "Member 'UTabBrightnessOptions_C::Image_1' has a wrong offset!");
static_assert(offsetof(UTabBrightnessOptions_C, Image_152) == 0x0002C0, "Member 'UTabBrightnessOptions_C::Image_152' has a wrong offset!");

}

