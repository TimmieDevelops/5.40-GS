#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookProgressWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
// 0x000C (0x000C - 0x0000)
struct CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_PreviewCompletionPct;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_NewCompletionPct;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget) == 0x000004, "Wrong alignment on CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget");
static_assert(sizeof(CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget) == 0x00000C, "Wrong size on CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget");
static_assert(offsetof(CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget, EntryPoint) == 0x000000, "Member 'CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget, K2Node_Event_PreviewCompletionPct) == 0x000004, "Member 'CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget::K2Node_Event_PreviewCompletionPct' has a wrong offset!");
static_assert(offsetof(CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget, K2Node_Event_NewCompletionPct) == 0x000008, "Member 'CollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget::K2Node_Event_NewCompletionPct' has a wrong offset!");

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
// 0x0004 (0x0004 - 0x0000)
struct CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange final
{
public:
	float                                         PreviewCompletionPct;                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange) == 0x000004, "Wrong alignment on CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange");
static_assert(sizeof(CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange) == 0x000004, "Wrong size on CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange");
static_assert(offsetof(CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange, PreviewCompletionPct) == 0x000000, "Member 'CollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange::PreviewCompletionPct' has a wrong offset!");

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
// 0x0004 (0x0004 - 0x0000)
struct CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged final
{
public:
	float                                         NewCompletionPct;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged) == 0x000004, "Wrong alignment on CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged");
static_assert(sizeof(CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged) == 0x000004, "Wrong size on CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged");
static_assert(offsetof(CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged, NewCompletionPct) == 0x000000, "Member 'CollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged::NewCompletionPct' has a wrong offset!");

}

