#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipStatWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TooltipStat_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TooltipStatWidget.TooltipStatWidget_C
// 0x00A0 (0x02D0 - 0x0230)
class UTooltipStatWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__HR;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             _Text__Label;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             _Text__Single;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             _Text__Value;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonHover;                                       // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTooltipStat                           TooltipData;                                       // 0x0268(0x0038)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            TextColor;                                         // 0x02A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HoverEnabled;                                      // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_TooltipStatWidget(int32 EntryPoint);
	void BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TooltipStatWidget_C">();
	}
	static class UTooltipStatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltipStatWidget_C>();
	}
};
static_assert(alignof(UTooltipStatWidget_C) == 0x000008, "Wrong alignment on UTooltipStatWidget_C");
static_assert(sizeof(UTooltipStatWidget_C) == 0x0002D0, "Wrong size on UTooltipStatWidget_C");
static_assert(offsetof(UTooltipStatWidget_C, UberGraphFrame) == 0x000230, "Member 'UTooltipStatWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, _Image__HR) == 0x000238, "Member 'UTooltipStatWidget_C::_Image__HR' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, _Text__Label) == 0x000240, "Member 'UTooltipStatWidget_C::_Text__Label' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, _Text__Single) == 0x000248, "Member 'UTooltipStatWidget_C::_Text__Single' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, _Text__Value) == 0x000250, "Member 'UTooltipStatWidget_C::_Text__Value' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, ButtonHover) == 0x000258, "Member 'UTooltipStatWidget_C::ButtonHover' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, Switcher) == 0x000260, "Member 'UTooltipStatWidget_C::Switcher' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, TooltipData) == 0x000268, "Member 'UTooltipStatWidget_C::TooltipData' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, TextColor) == 0x0002A0, "Member 'UTooltipStatWidget_C::TextColor' has a wrong offset!");
static_assert(offsetof(UTooltipStatWidget_C, HoverEnabled) == 0x0002C8, "Member 'UTooltipStatWidget_C::HoverEnabled' has a wrong offset!");

}

