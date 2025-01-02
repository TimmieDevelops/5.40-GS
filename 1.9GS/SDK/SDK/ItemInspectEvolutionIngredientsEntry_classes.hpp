#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolutionIngredientsEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C
// 0x00A0 (0x02D0 - 0x0230)
class UItemInspectEvolutionIngredientsEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 CheckMarkIcon;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          ItemIcon;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemName;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuantityText;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemQuantityPair                  IngredientItemQuantity;                            // 0x0258(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                            NotHaveColor;                                      // 0x0280(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            HaveColor;                                         // 0x02A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry(int32 EntryPoint);
	void Construct();
	void GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush);
	void SetIngredientCount();
	int32 GetHaveQuantity(const struct FFortItemQuantityPair& InPair);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectEvolutionIngredientsEntry_C">();
	}
	static class UItemInspectEvolutionIngredientsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectEvolutionIngredientsEntry_C>();
	}
};
static_assert(alignof(UItemInspectEvolutionIngredientsEntry_C) == 0x000008, "Wrong alignment on UItemInspectEvolutionIngredientsEntry_C");
static_assert(sizeof(UItemInspectEvolutionIngredientsEntry_C) == 0x0002D0, "Wrong size on UItemInspectEvolutionIngredientsEntry_C");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, UberGraphFrame) == 0x000230, "Member 'UItemInspectEvolutionIngredientsEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, CheckMarkIcon) == 0x000238, "Member 'UItemInspectEvolutionIngredientsEntry_C::CheckMarkIcon' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, ItemIcon) == 0x000240, "Member 'UItemInspectEvolutionIngredientsEntry_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, ItemName) == 0x000248, "Member 'UItemInspectEvolutionIngredientsEntry_C::ItemName' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, QuantityText) == 0x000250, "Member 'UItemInspectEvolutionIngredientsEntry_C::QuantityText' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, IngredientItemQuantity) == 0x000258, "Member 'UItemInspectEvolutionIngredientsEntry_C::IngredientItemQuantity' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, NotHaveColor) == 0x000280, "Member 'UItemInspectEvolutionIngredientsEntry_C::NotHaveColor' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionIngredientsEntry_C, HaveColor) == 0x0002A8, "Member 'UItemInspectEvolutionIngredientsEntry_C::HaveColor' has a wrong offset!");

}

