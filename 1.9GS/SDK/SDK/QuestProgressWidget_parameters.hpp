#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestProgressWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuestProgressWidget.QuestProgressWidget_C.Update
// 0x0150 (0x0150 - 0x0000)
struct QuestProgressWidget_C_Update final
{
public:
	int32                                         Required;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Achieved;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current;                                           // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Total;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0078(0x0018)()
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0098(0x0040)(HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0018)()
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0110(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12A[0x6];                                      // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0130(0x0018)()
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestProgressWidget_C_Update) == 0x000008, "Wrong alignment on QuestProgressWidget_C_Update");
static_assert(sizeof(QuestProgressWidget_C_Update) == 0x000150, "Wrong size on QuestProgressWidget_C_Update");
static_assert(offsetof(QuestProgressWidget_C_Update, Required) == 0x000000, "Member 'QuestProgressWidget_C_Update::Required' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Achieved) == 0x000004, "Member 'QuestProgressWidget_C_Update::Achieved' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Current) == 0x000008, "Member 'QuestProgressWidget_C_Update::Current' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Total) == 0x00000C, "Member 'QuestProgressWidget_C_Update::Total' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'QuestProgressWidget_C_Update::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'QuestProgressWidget_C_Update::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'QuestProgressWidget_C_Update::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x000070, "Member 'QuestProgressWidget_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Conv_IntToText_ReturnValue2) == 0x000078, "Member 'QuestProgressWidget_C_Update::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Max_ReturnValue) == 0x000090, "Member 'QuestProgressWidget_C_Update::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, K2Node_MakeStruct_FormatArgumentData2) == 0x000098, "Member 'QuestProgressWidget_C_Update::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x0000D8, "Member 'QuestProgressWidget_C_Update::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, K2Node_MakeArray_Array) == 0x0000E0, "Member 'QuestProgressWidget_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000F0, "Member 'QuestProgressWidget_C_Update::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'QuestProgressWidget_C_Update::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, CallFunc_GetEmptyText_ReturnValue) == 0x000110, "Member 'QuestProgressWidget_C_Update::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Temp_bool_Variable) == 0x000128, "Member 'QuestProgressWidget_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Temp_byte_Variable) == 0x000129, "Member 'QuestProgressWidget_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, K2Node_Select_Default) == 0x000130, "Member 'QuestProgressWidget_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Temp_byte_Variable2) == 0x000148, "Member 'QuestProgressWidget_C_Update::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, Temp_bool_Variable2) == 0x000149, "Member 'QuestProgressWidget_C_Update::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(QuestProgressWidget_C_Update, K2Node_Select2_Default) == 0x00014A, "Member 'QuestProgressWidget_C_Update::K2Node_Select2_Default' has a wrong offset!");

}

