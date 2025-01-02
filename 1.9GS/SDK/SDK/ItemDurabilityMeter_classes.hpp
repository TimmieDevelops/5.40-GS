#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDurabilityMeter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDurabilityMeter.ItemDurabilityMeter_C
// 0x0038 (0x0268 - 0x0230)
class UItemDurabilityMeter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__Backfill;                                  // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Overfill;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Size_Box;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         DefaultPadding;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinimumFillHeight;                                 // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Backfill_Color;                                    // 0x0258(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemDurabilityMeter(int32 EntryPoint);
	void Construct();
	void Update(const struct FVector2D& Draw_Size, float Durability);
	void Set_Durability(float Durability);
	void Set_Backfill_Color(const struct FLinearColor& Backfill_Color_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDurabilityMeter_C">();
	}
	static class UItemDurabilityMeter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDurabilityMeter_C>();
	}
};
static_assert(alignof(UItemDurabilityMeter_C) == 0x000008, "Wrong alignment on UItemDurabilityMeter_C");
static_assert(sizeof(UItemDurabilityMeter_C) == 0x000268, "Wrong size on UItemDurabilityMeter_C");
static_assert(offsetof(UItemDurabilityMeter_C, UberGraphFrame) == 0x000230, "Member 'UItemDurabilityMeter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDurabilityMeter_C, _Image__Backfill) == 0x000238, "Member 'UItemDurabilityMeter_C::_Image__Backfill' has a wrong offset!");
static_assert(offsetof(UItemDurabilityMeter_C, _Image__Overfill) == 0x000240, "Member 'UItemDurabilityMeter_C::_Image__Overfill' has a wrong offset!");
static_assert(offsetof(UItemDurabilityMeter_C, Size_Box) == 0x000248, "Member 'UItemDurabilityMeter_C::Size_Box' has a wrong offset!");
static_assert(offsetof(UItemDurabilityMeter_C, DefaultPadding) == 0x000250, "Member 'UItemDurabilityMeter_C::DefaultPadding' has a wrong offset!");
static_assert(offsetof(UItemDurabilityMeter_C, MinimumFillHeight) == 0x000254, "Member 'UItemDurabilityMeter_C::MinimumFillHeight' has a wrong offset!");
static_assert(offsetof(UItemDurabilityMeter_C, Backfill_Color) == 0x000258, "Member 'UItemDurabilityMeter_C::Backfill_Color' has a wrong offset!");

}

