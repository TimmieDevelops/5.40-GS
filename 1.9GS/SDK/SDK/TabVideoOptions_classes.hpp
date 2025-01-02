#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabVideoOptions

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
// 0x00B0 (0x0358 - 0x02A8)
class UTabVideoOptions_C final : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(Transient, DuplicateTransient)
	class UOptionsMenuRowSelector_C*              ThreeDResolution;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              Anti_Aliasing;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     DisplayResolution;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              Effects;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     FrameRateLimit;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     MotionBlur;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              PostProcessing;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              Quality;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              Shadows;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ShowFPS;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     ShowGrass;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              Textures;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TooltipDisplay;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*              ViewDistance;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     VSync;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     WindowMode;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Enable_Overlay;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Disable_Overlay;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_TabVideoOptions(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_1(int32 Selected_Index);
	void CustomEvent(int32 Selected_Index);
	void Motion_Blur_Changed(int32 Selected_Index);
	void VSync_Changed(int32 Selected_Index);
	void CenterOnTab();
	void Construct();
	void CustomEvent_23(int32 Selected_Index);
	void CustomEvent_22(int32 Selected_Index);
	void Window_Mode__Changed(int32 Selected_Index);
	void UpdateOptionsTab();
	void Quality_Changed(int32 Tab_Id);
	void Effects_Changed(int32 Tab_Id);
	void Post_Processing_Changed(int32 Tab_Id);
	void Textures_Changed(int32 Tab_Id);
	void Anti_Aliasing_Changed(int32 Tab_Id);
	void Shadows_Changed(int32 Tab_Id);
	void Discrete_Resolution_Changed(int32 Tab_Id);
	void View_Distance_Changed(int32 Tab_Id);
	void Initialize_Data();
	void Update_Data(bool Reset_Quality_Selector);
	void Initialize_Display_Resolutions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabVideoOptions_C">();
	}
	static class UTabVideoOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabVideoOptions_C>();
	}
};
static_assert(alignof(UTabVideoOptions_C) == 0x000008, "Wrong alignment on UTabVideoOptions_C");
static_assert(sizeof(UTabVideoOptions_C) == 0x000358, "Wrong size on UTabVideoOptions_C");
static_assert(offsetof(UTabVideoOptions_C, UberGraphFrame) == 0x0002A8, "Member 'UTabVideoOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, ThreeDResolution) == 0x0002B0, "Member 'UTabVideoOptions_C::ThreeDResolution' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Anti_Aliasing) == 0x0002B8, "Member 'UTabVideoOptions_C::Anti_Aliasing' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, DisplayResolution) == 0x0002C0, "Member 'UTabVideoOptions_C::DisplayResolution' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Effects) == 0x0002C8, "Member 'UTabVideoOptions_C::Effects' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, FrameRateLimit) == 0x0002D0, "Member 'UTabVideoOptions_C::FrameRateLimit' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, MotionBlur) == 0x0002D8, "Member 'UTabVideoOptions_C::MotionBlur' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, PostProcessing) == 0x0002E0, "Member 'UTabVideoOptions_C::PostProcessing' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Quality) == 0x0002E8, "Member 'UTabVideoOptions_C::Quality' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Shadows) == 0x0002F0, "Member 'UTabVideoOptions_C::Shadows' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, ShowFPS) == 0x0002F8, "Member 'UTabVideoOptions_C::ShowFPS' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, ShowGrass) == 0x000300, "Member 'UTabVideoOptions_C::ShowGrass' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Textures) == 0x000308, "Member 'UTabVideoOptions_C::Textures' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, TooltipDisplay) == 0x000310, "Member 'UTabVideoOptions_C::TooltipDisplay' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, VerticalBox_0) == 0x000318, "Member 'UTabVideoOptions_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, ViewDistance) == 0x000320, "Member 'UTabVideoOptions_C::ViewDistance' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, VSync) == 0x000328, "Member 'UTabVideoOptions_C::VSync' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, WindowMode) == 0x000330, "Member 'UTabVideoOptions_C::WindowMode' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Enable_Overlay) == 0x000338, "Member 'UTabVideoOptions_C::Enable_Overlay' has a wrong offset!");
static_assert(offsetof(UTabVideoOptions_C, Disable_Overlay) == 0x000348, "Member 'UTabVideoOptions_C::Disable_Overlay' has a wrong offset!");

}

