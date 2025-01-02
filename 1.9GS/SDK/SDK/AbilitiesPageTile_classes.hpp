#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilitiesPageTile

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AbilitiesPageTile.AbilitiesPageTile_C
// 0x0128 (0x09C8 - 0x08A0)
class UAbilitiesPageTile_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(Transient, DuplicateTransient)
	class UFortSZAwareImage*                      AbilityImage;                                      // 0x08A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       AbilityName;                                       // 0x08B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindAbilityKeybind;                             // 0x08B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindGamepadAbility1;                            // 0x08C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindGamepadAbility2;                            // 0x08C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxAbilityKeybind;                             // 0x08D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherAbilityBindingSwitcher;                    // 0x08D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         QuickBarSlot;                                      // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E4[0x4];                                      // 0x08E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityKit*                        AbilityKit;                                        // 0x08E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGadgetItemDefinition*              GadgetItemDef;                                     // 0x08F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              AbilityItem;                                       // 0x08F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityLocked;                                     // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901[0x7];                                      // 0x0901(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIPerk                            AbilityUIPerk;                                     // 0x0908(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                           LockedColor;                                       // 0x0990(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UnlockedColor;                                     // 0x09A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                AbilityIconBrushSize;                              // 0x09B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B1[0x3];                                      // 0x09B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LockedAbilityIconColor;                            // 0x09B4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AbilitiesPageTile(int32 EntryPoint);
	void HandleInputMethodChanged(bool bUsingGamepad);
	void Construct();
	void SetAbilityItemInfo(class UFortItem* SlottedAbilityItem);
	void UpdateKeyBinding();
	void SetAbilityPerkInfo(const struct FFortUIPerk& AbilityPerk);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilitiesPageTile_C">();
	}
	static class UAbilitiesPageTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilitiesPageTile_C>();
	}
};
static_assert(alignof(UAbilitiesPageTile_C) == 0x000008, "Wrong alignment on UAbilitiesPageTile_C");
static_assert(sizeof(UAbilitiesPageTile_C) == 0x0009C8, "Wrong size on UAbilitiesPageTile_C");
static_assert(offsetof(UAbilitiesPageTile_C, UberGraphFrame) == 0x0008A0, "Member 'UAbilitiesPageTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityImage) == 0x0008A8, "Member 'UAbilitiesPageTile_C::AbilityImage' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityName) == 0x0008B0, "Member 'UAbilitiesPageTile_C::AbilityName' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, KeybindAbilityKeybind) == 0x0008B8, "Member 'UAbilitiesPageTile_C::KeybindAbilityKeybind' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, KeybindGamepadAbility1) == 0x0008C0, "Member 'UAbilitiesPageTile_C::KeybindGamepadAbility1' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, KeybindGamepadAbility2) == 0x0008C8, "Member 'UAbilitiesPageTile_C::KeybindGamepadAbility2' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, SizeBoxAbilityKeybind) == 0x0008D0, "Member 'UAbilitiesPageTile_C::SizeBoxAbilityKeybind' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, SwitcherAbilityBindingSwitcher) == 0x0008D8, "Member 'UAbilitiesPageTile_C::SwitcherAbilityBindingSwitcher' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, QuickBarSlot) == 0x0008E0, "Member 'UAbilitiesPageTile_C::QuickBarSlot' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityKit) == 0x0008E8, "Member 'UAbilitiesPageTile_C::AbilityKit' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, GadgetItemDef) == 0x0008F0, "Member 'UAbilitiesPageTile_C::GadgetItemDef' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityItem) == 0x0008F8, "Member 'UAbilitiesPageTile_C::AbilityItem' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityLocked) == 0x000900, "Member 'UAbilitiesPageTile_C::AbilityLocked' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityUIPerk) == 0x000908, "Member 'UAbilitiesPageTile_C::AbilityUIPerk' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, LockedColor) == 0x000990, "Member 'UAbilitiesPageTile_C::LockedColor' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, UnlockedColor) == 0x0009A0, "Member 'UAbilitiesPageTile_C::UnlockedColor' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, AbilityIconBrushSize) == 0x0009B0, "Member 'UAbilitiesPageTile_C::AbilityIconBrushSize' has a wrong offset!");
static_assert(offsetof(UAbilitiesPageTile_C, LockedAbilityIconColor) == 0x0009B4, "Member 'UAbilitiesPageTile_C::LockedAbilityIconColor' has a wrong offset!");

}

