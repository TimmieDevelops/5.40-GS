#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tooltip_CoreStat

#include "Basic.hpp"

#include "HeroCoreStat_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
// 0x0004 (0x0004 - 0x0000)
struct Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat) == 0x000004, "Wrong alignment on Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat");
static_assert(sizeof(Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat) == 0x000004, "Wrong size on Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat");
static_assert(offsetof(Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat, EntryPoint) == 0x000000, "Member 'Tooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat::EntryPoint' has a wrong offset!");

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
// 0x0508 (0x0508 - 0x0000)
struct Tooltip_CoreStat_C_Update final
{
public:
	struct FHeroCoreStat                          Data_0;                                            // 0x0000(0x03B0)(Parm, HasGetValueTypeHash)
	float                                         Value_0;                                           // 0x03B0(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4[0x4];                                      // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x03B8(0x0090)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0448(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0488(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x04A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x04E0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04F0(0x0018)()
};
static_assert(alignof(Tooltip_CoreStat_C_Update) == 0x000008, "Wrong alignment on Tooltip_CoreStat_C_Update");
static_assert(sizeof(Tooltip_CoreStat_C_Update) == 0x000508, "Wrong size on Tooltip_CoreStat_C_Update");
static_assert(offsetof(Tooltip_CoreStat_C_Update, Data_0) == 0x000000, "Member 'Tooltip_CoreStat_C_Update::Data_0' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, Value_0) == 0x0003B0, "Member 'Tooltip_CoreStat_C_Update::Value_0' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x0003B8, "Member 'Tooltip_CoreStat_C_Update::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, K2Node_MakeStruct_FormatArgumentData) == 0x000448, "Member 'Tooltip_CoreStat_C_Update::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, CallFunc_Conv_FloatToText_ReturnValue) == 0x000488, "Member 'Tooltip_CoreStat_C_Update::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, K2Node_MakeStruct_FormatArgumentData2) == 0x0004A0, "Member 'Tooltip_CoreStat_C_Update::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, K2Node_MakeArray_Array) == 0x0004E0, "Member 'Tooltip_CoreStat_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Tooltip_CoreStat_C_Update, CallFunc_Format_ReturnValue) == 0x0004F0, "Member 'Tooltip_CoreStat_C_Update::CallFunc_Format_ReturnValue' has a wrong offset!");

}

