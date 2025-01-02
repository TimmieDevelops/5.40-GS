#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCountRecycling

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemCountRecycling.ItemCountRecycling_C
// 0x0050 (0x0288 - 0x0238)
class UItemCountRecycling_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UFortItemCountTextBlock*                CountText;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DisplayName;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          IconLeft;                                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Indicator;                                         // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                    ItemDefinition;                                    // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 TextStyle;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EFortItemCountStyle                           CountStyle;                                        // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OverrideValue;                                     // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EFortBrushSize                                BrushSize;                                         // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 DisplayNameStyle;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemCountRecycling(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetItemDefinition(class UFortItemDefinition* ItemDefinition_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemCountRecycling_C">();
	}
	static class UItemCountRecycling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemCountRecycling_C>();
	}
};
static_assert(alignof(UItemCountRecycling_C) == 0x000008, "Wrong alignment on UItemCountRecycling_C");
static_assert(sizeof(UItemCountRecycling_C) == 0x000288, "Wrong size on UItemCountRecycling_C");
static_assert(offsetof(UItemCountRecycling_C, UberGraphFrame) == 0x000238, "Member 'UItemCountRecycling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, CountText) == 0x000240, "Member 'UItemCountRecycling_C::CountText' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, DisplayName) == 0x000248, "Member 'UItemCountRecycling_C::DisplayName' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, IconLeft) == 0x000250, "Member 'UItemCountRecycling_C::IconLeft' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, Indicator) == 0x000258, "Member 'UItemCountRecycling_C::Indicator' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, ItemDefinition) == 0x000260, "Member 'UItemCountRecycling_C::ItemDefinition' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, TextStyle) == 0x000268, "Member 'UItemCountRecycling_C::TextStyle' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, CountStyle) == 0x000270, "Member 'UItemCountRecycling_C::CountStyle' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, OverrideValue) == 0x000274, "Member 'UItemCountRecycling_C::OverrideValue' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, BrushSize) == 0x000278, "Member 'UItemCountRecycling_C::BrushSize' has a wrong offset!");
static_assert(offsetof(UItemCountRecycling_C, DisplayNameStyle) == 0x000280, "Member 'UItemCountRecycling_C::DisplayNameStyle' has a wrong offset!");

}

