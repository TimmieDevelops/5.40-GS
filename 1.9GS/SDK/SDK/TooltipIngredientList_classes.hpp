#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipIngredientList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TooltipIngredientList.TooltipIngredientList_C
// 0x0020 (0x0250 - 0x0230)
class UTooltipIngredientList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBoxIngredients;                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSchematicItem*                     Schematic;                                         // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Panel_Mode;                                        // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_TooltipIngredientList(int32 EntryPoint);
	void Construct();
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TooltipIngredientList_C">();
	}
	static class UTooltipIngredientList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltipIngredientList_C>();
	}
};
static_assert(alignof(UTooltipIngredientList_C) == 0x000008, "Wrong alignment on UTooltipIngredientList_C");
static_assert(sizeof(UTooltipIngredientList_C) == 0x000250, "Wrong size on UTooltipIngredientList_C");
static_assert(offsetof(UTooltipIngredientList_C, UberGraphFrame) == 0x000230, "Member 'UTooltipIngredientList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTooltipIngredientList_C, HorizontalBoxIngredients) == 0x000238, "Member 'UTooltipIngredientList_C::HorizontalBoxIngredients' has a wrong offset!");
static_assert(offsetof(UTooltipIngredientList_C, Schematic) == 0x000240, "Member 'UTooltipIngredientList_C::Schematic' has a wrong offset!");
static_assert(offsetof(UTooltipIngredientList_C, Panel_Mode) == 0x000248, "Member 'UTooltipIngredientList_C::Panel_Mode' has a wrong offset!");

}
