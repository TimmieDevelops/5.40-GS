#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SimpleItemWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SimpleItemWidget.BP_SimpleItemWidget_C
// 0x00B0 (0x02E8 - 0x0238)
class UBP_SimpleItemWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 IconImage;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuantityText;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            IconBrush;                                         // 0x0250(0x0090)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Quantity;                                          // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SimpleItemWidget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SimpleItemWidget_C">();
	}
	static class UBP_SimpleItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SimpleItemWidget_C>();
	}
};
static_assert(alignof(UBP_SimpleItemWidget_C) == 0x000008, "Wrong alignment on UBP_SimpleItemWidget_C");
static_assert(sizeof(UBP_SimpleItemWidget_C) == 0x0002E8, "Wrong size on UBP_SimpleItemWidget_C");
static_assert(offsetof(UBP_SimpleItemWidget_C, UberGraphFrame) == 0x000238, "Member 'UBP_SimpleItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SimpleItemWidget_C, IconImage) == 0x000240, "Member 'UBP_SimpleItemWidget_C::IconImage' has a wrong offset!");
static_assert(offsetof(UBP_SimpleItemWidget_C, QuantityText) == 0x000248, "Member 'UBP_SimpleItemWidget_C::QuantityText' has a wrong offset!");
static_assert(offsetof(UBP_SimpleItemWidget_C, IconBrush) == 0x000250, "Member 'UBP_SimpleItemWidget_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UBP_SimpleItemWidget_C, Quantity) == 0x0002E0, "Member 'UBP_SimpleItemWidget_C::Quantity' has a wrong offset!");

}

