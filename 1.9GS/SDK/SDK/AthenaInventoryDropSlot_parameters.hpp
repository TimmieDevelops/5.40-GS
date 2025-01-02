#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryDropSlot

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.ExecuteUbergraph_AthenaInventoryDropSlot
// 0x0068 (0x0068 - 0x0000)
struct AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0034)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDragDropOperation*                     CallFunc_GetDragDroppingContent_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                     CallFunc_GetDragDroppingContent_ReturnValue2;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              K2Node_DynamicCast_AsFort_Item;                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot) == 0x000008, "Wrong alignment on AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot");
static_assert(sizeof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot) == 0x000068, "Wrong size on AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, EntryPoint) == 0x000000, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, K2Node_Event_MyGeometry) == 0x000004, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, K2Node_Event_InDeltaTime) == 0x000038, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, CallFunc_GetDragDroppingContent_ReturnValue) == 0x000040, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::CallFunc_GetDragDroppingContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, CallFunc_GetDragDroppingContent_ReturnValue2) == 0x000048, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::CallFunc_GetDragDroppingContent_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, K2Node_DynamicCast_AsFort_Item) == 0x000058, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::K2Node_DynamicCast_AsFort_Item' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'AthenaInventoryDropSlot_C_ExecuteUbergraph_AthenaInventoryDropSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.Tick
// 0x0038 (0x0038 - 0x0000)
struct AthenaInventoryDropSlot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0034(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryDropSlot_C_Tick) == 0x000004, "Wrong alignment on AthenaInventoryDropSlot_C_Tick");
static_assert(sizeof(AthenaInventoryDropSlot_C_Tick) == 0x000038, "Wrong size on AthenaInventoryDropSlot_C_Tick");
static_assert(offsetof(AthenaInventoryDropSlot_C_Tick, MyGeometry) == 0x000000, "Member 'AthenaInventoryDropSlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_Tick, InDeltaTime) == 0x000034, "Member 'AthenaInventoryDropSlot_C_Tick::InDeltaTime' has a wrong offset!");

// Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop
// 0x0130 (0x0130 - 0x0000)
struct AthenaInventoryDropSlot_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0034)(Parm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0078)(Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00B0(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaInventoryDragDrop_C*             K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop;   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputEvent                            CallFunc_GetInputEventFromPointerEvent_ReturnValue; // 0x00D0(0x0020)()
	bool                                          CallFunc_InputEvent_IsShiftDown_ReturnValue;       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumInStack_ReturnValue;                // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumInStack_ReturnValue2;               // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBeDropped_ReturnValue;                 // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryDropSlot_C_OnDrop) == 0x000008, "Wrong alignment on AthenaInventoryDropSlot_C_OnDrop");
static_assert(sizeof(AthenaInventoryDropSlot_C_OnDrop) == 0x000130, "Wrong size on AthenaInventoryDropSlot_C_OnDrop");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, MyGeometry) == 0x000000, "Member 'AthenaInventoryDropSlot_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, PointerEvent) == 0x000038, "Member 'AthenaInventoryDropSlot_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, Operation) == 0x0000B0, "Member 'AthenaInventoryDropSlot_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, ReturnValue) == 0x0000B8, "Member 'AthenaInventoryDropSlot_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop) == 0x0000C0, "Member 'AthenaInventoryDropSlot_C_OnDrop::K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'AthenaInventoryDropSlot_C_OnDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_GetInputEventFromPointerEvent_ReturnValue) == 0x0000D0, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_GetInputEventFromPointerEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_InputEvent_IsShiftDown_ReturnValue) == 0x0000F0, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_InputEvent_IsShiftDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_BooleanOR_ReturnValue) == 0x0000F1, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, K2Node_DynamicCast_AsFort_World_Item) == 0x0000F8, "Member 'AthenaInventoryDropSlot_C_OnDrop::K2Node_DynamicCast_AsFort_World_Item' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, K2Node_DynamicCast_bSuccess2) == 0x000100, "Member 'AthenaInventoryDropSlot_C_OnDrop::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_GetContext_ReturnValue) == 0x000108, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_GetNumInStack_ReturnValue) == 0x000110, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_GetNumInStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_GetNumInStack_ReturnValue2) == 0x000114, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_GetNumInStack_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_Divide_IntInt_ReturnValue) == 0x000118, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_CanBeDropped_ReturnValue) == 0x00011C, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_CanBeDropped_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, CallFunc_Max_ReturnValue) == 0x000120, "Member 'AthenaInventoryDropSlot_C_OnDrop::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, Temp_bool_Variable) == 0x000124, "Member 'AthenaInventoryDropSlot_C_OnDrop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryDropSlot_C_OnDrop, K2Node_Select_Default) == 0x000128, "Member 'AthenaInventoryDropSlot_C_OnDrop::K2Node_Select_Default' has a wrong offset!");

}

