#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CollectionBar.CollectionBar_C.ExecuteUbergraph_CollectionBar
// 0x0008 (0x0008 - 0x0000)
struct CollectionBar_C_ExecuteUbergraph_CollectionBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBar_C_ExecuteUbergraph_CollectionBar) == 0x000004, "Wrong alignment on CollectionBar_C_ExecuteUbergraph_CollectionBar");
static_assert(sizeof(CollectionBar_C_ExecuteUbergraph_CollectionBar) == 0x000008, "Wrong size on CollectionBar_C_ExecuteUbergraph_CollectionBar");
static_assert(offsetof(CollectionBar_C_ExecuteUbergraph_CollectionBar, EntryPoint) == 0x000000, "Member 'CollectionBar_C_ExecuteUbergraph_CollectionBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_ExecuteUbergraph_CollectionBar, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CollectionBar_C_ExecuteUbergraph_CollectionBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_ExecuteUbergraph_CollectionBar, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000005, "Member 'CollectionBar_C_ExecuteUbergraph_CollectionBar::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function CollectionBar.CollectionBar_C.GetProgressBarPercentage
// 0x0030 (0x0030 - 0x0000)
struct CollectionBar_C_GetProgressBarPercentage final
{
public:
	int32                                         AchievedCount_0;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Percentage;                                        // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BarRange;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue2;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue2;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBar_C_GetProgressBarPercentage) == 0x000004, "Wrong alignment on CollectionBar_C_GetProgressBarPercentage");
static_assert(sizeof(CollectionBar_C_GetProgressBarPercentage) == 0x000030, "Wrong size on CollectionBar_C_GetProgressBarPercentage");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, AchievedCount_0) == 0x000000, "Member 'CollectionBar_C_GetProgressBarPercentage::AchievedCount_0' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, Percentage) == 0x000004, "Member 'CollectionBar_C_GetProgressBarPercentage::Percentage' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, BarRange) == 0x000008, "Member 'CollectionBar_C_GetProgressBarPercentage::BarRange' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Subtract_IntInt_ReturnValue2) == 0x000018, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Subtract_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Max_ReturnValue) == 0x00001C, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Max_ReturnValue2) == 0x000020, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Max_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x000024, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000028, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_GetProgressBarPercentage, CallFunc_FClamp_ReturnValue) == 0x00002C, "Member 'CollectionBar_C_GetProgressBarPercentage::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function CollectionBar.CollectionBar_C.Update
// 0x0004 (0x0004 - 0x0000)
struct CollectionBar_C_Update final
{
public:
	float                                         CallFunc_GetProgressBarPercentage_Percentage;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBar_C_Update) == 0x000004, "Wrong alignment on CollectionBar_C_Update");
static_assert(sizeof(CollectionBar_C_Update) == 0x000004, "Wrong size on CollectionBar_C_Update");
static_assert(offsetof(CollectionBar_C_Update, CallFunc_GetProgressBarPercentage_Percentage) == 0x000000, "Member 'CollectionBar_C_Update::CallFunc_GetProgressBarPercentage_Percentage' has a wrong offset!");

// Function CollectionBar.CollectionBar_C.SetAchievedCount
// 0x0004 (0x0004 - 0x0000)
struct CollectionBar_C_SetAchievedCount final
{
public:
	int32                                         InAchievedCount;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBar_C_SetAchievedCount) == 0x000004, "Wrong alignment on CollectionBar_C_SetAchievedCount");
static_assert(sizeof(CollectionBar_C_SetAchievedCount) == 0x000004, "Wrong size on CollectionBar_C_SetAchievedCount");
static_assert(offsetof(CollectionBar_C_SetAchievedCount, InAchievedCount) == 0x000000, "Member 'CollectionBar_C_SetAchievedCount::InAchievedCount' has a wrong offset!");

// Function CollectionBar.CollectionBar_C.IsAchievedCountInRange
// 0x0004 (0x0004 - 0x0000)
struct CollectionBar_C_IsAchievedCountInRange final
{
public:
	bool                                          bIsInRange;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBar_C_IsAchievedCountInRange) == 0x000001, "Wrong alignment on CollectionBar_C_IsAchievedCountInRange");
static_assert(sizeof(CollectionBar_C_IsAchievedCountInRange) == 0x000004, "Wrong size on CollectionBar_C_IsAchievedCountInRange");
static_assert(offsetof(CollectionBar_C_IsAchievedCountInRange, bIsInRange) == 0x000000, "Member 'CollectionBar_C_IsAchievedCountInRange::bIsInRange' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_IsAchievedCountInRange, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000001, "Member 'CollectionBar_C_IsAchievedCountInRange::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_IsAchievedCountInRange, CallFunc_Less_IntInt_ReturnValue) == 0x000002, "Member 'CollectionBar_C_IsAchievedCountInRange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_IsAchievedCountInRange, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'CollectionBar_C_IsAchievedCountInRange::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CollectionBar.CollectionBar_C.SetIcon
// 0x00A0 (0x00A0 - 0x0000)
struct CollectionBar_C_SetIcon final
{
public:
	struct FSlateBrush                            InIcon;                                            // 0x0000(0x0090)(Parm)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBar_C_SetIcon) == 0x000008, "Wrong alignment on CollectionBar_C_SetIcon");
static_assert(sizeof(CollectionBar_C_SetIcon) == 0x0000A0, "Wrong size on CollectionBar_C_SetIcon");
static_assert(offsetof(CollectionBar_C_SetIcon, InIcon) == 0x000000, "Member 'CollectionBar_C_SetIcon::InIcon' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_SetIcon, K2Node_DynamicCast_AsHorizontal_Box_Slot) == 0x000090, "Member 'CollectionBar_C_SetIcon::K2Node_DynamicCast_AsHorizontal_Box_Slot' has a wrong offset!");
static_assert(offsetof(CollectionBar_C_SetIcon, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'CollectionBar_C_SetIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

