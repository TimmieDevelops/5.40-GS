#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDragVisual

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaInventoryDragVisual.AthenaInventoryDragVisual_C
// 0x0020 (0x0260 - 0x0240)
class UAthenaInventoryDragVisual_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                 ItemWidget;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              Item;                                              // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EFortItemCardSize                             ItemCardSize;                                      // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_AthenaInventoryDragVisual(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaInventoryDragVisual_C">();
	}
	static class UAthenaInventoryDragVisual_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryDragVisual_C>();
	}
};
static_assert(alignof(UAthenaInventoryDragVisual_C) == 0x000008, "Wrong alignment on UAthenaInventoryDragVisual_C");
static_assert(sizeof(UAthenaInventoryDragVisual_C) == 0x000260, "Wrong size on UAthenaInventoryDragVisual_C");
static_assert(offsetof(UAthenaInventoryDragVisual_C, UberGraphFrame) == 0x000240, "Member 'UAthenaInventoryDragVisual_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryDragVisual_C, ItemWidget) == 0x000248, "Member 'UAthenaInventoryDragVisual_C::ItemWidget' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryDragVisual_C, Item) == 0x000250, "Member 'UAthenaInventoryDragVisual_C::Item' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryDragVisual_C, ItemCardSize) == 0x000258, "Member 'UAthenaInventoryDragVisual_C::ItemCardSize' has a wrong offset!");

}

