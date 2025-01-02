#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T1_Research

#include "Basic.hpp"


namespace SDK::Params
{

// Function T1_Research.T1_Research_C.ExecuteUbergraph_T1_Research
// 0x0018 (0x0018 - 0x0000)
struct T1_Research_C_ExecuteUbergraph_T1_Research final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(T1_Research_C_ExecuteUbergraph_T1_Research) == 0x000008, "Wrong alignment on T1_Research_C_ExecuteUbergraph_T1_Research");
static_assert(sizeof(T1_Research_C_ExecuteUbergraph_T1_Research) == 0x000018, "Wrong size on T1_Research_C_ExecuteUbergraph_T1_Research");
static_assert(offsetof(T1_Research_C_ExecuteUbergraph_T1_Research, EntryPoint) == 0x000000, "Member 'T1_Research_C_ExecuteUbergraph_T1_Research::EntryPoint' has a wrong offset!");
static_assert(offsetof(T1_Research_C_ExecuteUbergraph_T1_Research, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'T1_Research_C_ExecuteUbergraph_T1_Research::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(T1_Research_C_ExecuteUbergraph_T1_Research, K2Node_Event_IsDesignTime) == 0x000010, "Member 'T1_Research_C_ExecuteUbergraph_T1_Research::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function T1_Research.T1_Research_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct T1_Research_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(T1_Research_C_PreConstruct) == 0x000001, "Wrong alignment on T1_Research_C_PreConstruct");
static_assert(sizeof(T1_Research_C_PreConstruct) == 0x000001, "Wrong size on T1_Research_C_PreConstruct");
static_assert(offsetof(T1_Research_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'T1_Research_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

