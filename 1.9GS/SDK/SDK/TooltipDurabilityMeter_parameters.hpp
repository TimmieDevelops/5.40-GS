#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipDurabilityMeter

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.ExecuteUbergraph_TooltipDurabilityMeter
// 0x0004 (0x0004 - 0x0000)
struct TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter) == 0x000004, "Wrong alignment on TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter");
static_assert(sizeof(TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter) == 0x000004, "Wrong size on TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter");
static_assert(offsetof(TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter, EntryPoint) == 0x000000, "Member 'TooltipDurabilityMeter_C_ExecuteUbergraph_TooltipDurabilityMeter::EntryPoint' has a wrong offset!");

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
// 0x0080 (0x0080 - 0x0000)
struct TooltipDurabilityMeter_C_Draw final
{
public:
	float                                         Normalized_0;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDisplayAttribute                  Display_Attribute;                                 // 0x0008(0x0070)(Parm)
	bool                                          Temp_bool_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TooltipDurabilityMeter_C_Draw) == 0x000008, "Wrong alignment on TooltipDurabilityMeter_C_Draw");
static_assert(sizeof(TooltipDurabilityMeter_C_Draw) == 0x000080, "Wrong size on TooltipDurabilityMeter_C_Draw");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, Normalized_0) == 0x000000, "Member 'TooltipDurabilityMeter_C_Draw::Normalized_0' has a wrong offset!");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, Display_Attribute) == 0x000008, "Member 'TooltipDurabilityMeter_C_Draw::Display_Attribute' has a wrong offset!");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, Temp_bool_Variable) == 0x000078, "Member 'TooltipDurabilityMeter_C_Draw::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, Temp_byte_Variable) == 0x000079, "Member 'TooltipDurabilityMeter_C_Draw::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, Temp_byte_Variable2) == 0x00007A, "Member 'TooltipDurabilityMeter_C_Draw::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, CallFunc_Less_FloatFloat_ReturnValue) == 0x00007B, "Member 'TooltipDurabilityMeter_C_Draw::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipDurabilityMeter_C_Draw, K2Node_Select_Default) == 0x00007C, "Member 'TooltipDurabilityMeter_C_Draw::K2Node_Select_Default' has a wrong offset!");

}

