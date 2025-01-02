#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractionIndicator

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InteractionIndicator.InteractionIndicator_C
// 0x0038 (0x02D0 - 0x0298)
class UInteractionIndicator_C final : public UFortActorIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(Transient, DuplicateTransient)
	class UBasicInteractionWidget_C*              BasicInteractionWidget;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_PickupItemWidget_C*                HUD_PickupItemWidget;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInteraction_DefenderBeacon_C*          Interaction_DefenderBeacon;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextUnderKeybindText;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInteractContextInfo*               CurrentInteraction;                                // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InteractionIndicator(int32 EntryPoint);
	void Destruct();
	void Construct();
	void HandleInteractionChanged(class UFortInteractContextInfo* Interaction);
	void ShowPickupWidget(class AFortPickup* Pickup);
	void ShowBasicInteractionWidget();
	void HandleInteractionUpdated(class UFortInteractContextInfo* Interaction);
	void ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap);
	void UpdateKeybinds();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractionIndicator_C">();
	}
	static class UInteractionIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractionIndicator_C>();
	}
};
static_assert(alignof(UInteractionIndicator_C) == 0x000008, "Wrong alignment on UInteractionIndicator_C");
static_assert(sizeof(UInteractionIndicator_C) == 0x0002D0, "Wrong size on UInteractionIndicator_C");
static_assert(offsetof(UInteractionIndicator_C, UberGraphFrame) == 0x000298, "Member 'UInteractionIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, BasicInteractionWidget) == 0x0002A0, "Member 'UInteractionIndicator_C::BasicInteractionWidget' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, HUD_PickupItemWidget) == 0x0002A8, "Member 'UInteractionIndicator_C::HUD_PickupItemWidget' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, Interaction_DefenderBeacon) == 0x0002B0, "Member 'UInteractionIndicator_C::Interaction_DefenderBeacon' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, KeybindWidget) == 0x0002B8, "Member 'UInteractionIndicator_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, TextUnderKeybindText) == 0x0002C0, "Member 'UInteractionIndicator_C::TextUnderKeybindText' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, CurrentInteraction) == 0x0002C8, "Member 'UInteractionIndicator_C::CurrentInteraction' has a wrong offset!");

}
