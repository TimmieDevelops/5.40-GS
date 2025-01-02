#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionTileRewardWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.ExecuteUbergraph_CollectionBookSectionTileRewardWidget
// 0x0028 (0x0028 - 0x0000)
struct CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollectionBookRewardStatus                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollectionBookRewardStatus                   K2Node_Event_NewStatus;                            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollectionBookRewardStatus                   Temp_byte_Variable2;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select2_Default;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget) == 0x000008, "Wrong alignment on CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget");
static_assert(sizeof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget) == 0x000028, "Wrong size on CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, EntryPoint) == 0x000000, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, Temp_byte_Variable) == 0x000004, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, K2Node_Event_NewStatus) == 0x000005, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::K2Node_Event_NewStatus' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, Temp_class_Variable) == 0x000008, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, Temp_byte_Variable2) == 0x000010, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, K2Node_Select_Default) == 0x000018, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget, K2Node_Select2_Default) == 0x000020, "Member 'CollectionBookSectionTileRewardWidget_C_ExecuteUbergraph_CollectionBookSectionTileRewardWidget::K2Node_Select2_Default' has a wrong offset!");

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.OnRewardStatusChanged
// 0x0001 (0x0001 - 0x0000)
struct CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged final
{
public:
	ECollectionBookRewardStatus                   NewStatus;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged) == 0x000001, "Wrong alignment on CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged");
static_assert(sizeof(CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged) == 0x000001, "Wrong size on CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged, NewStatus) == 0x000000, "Member 'CollectionBookSectionTileRewardWidget_C_OnRewardStatusChanged::NewStatus' has a wrong offset!");

// Function CollectionBookSectionTileRewardWidget.CollectionBookSectionTileRewardWidget_C.SetSlotCompletionRatio
// 0x0010 (0x0010 - 0x0000)
struct CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio final
{
public:
	int32                                         NumSlotted;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumSlots;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio) == 0x000004, "Wrong alignment on CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio");
static_assert(sizeof(CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio) == 0x000010, "Wrong size on CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio, NumSlotted) == 0x000000, "Member 'CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio::NumSlotted' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio, NumSlots) == 0x000004, "Member 'CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio::NumSlots' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x00000C, "Member 'CollectionBookSectionTileRewardWidget_C_SetSlotCompletionRatio::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");

}

