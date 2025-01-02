#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipIngredientList

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TooltipIngredientList.TooltipIngredientList_C.ExecuteUbergraph_TooltipIngredientList
// 0x0004 (0x0004 - 0x0000)
struct TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList) == 0x000004, "Wrong alignment on TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList");
static_assert(sizeof(TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList) == 0x000004, "Wrong size on TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList");
static_assert(offsetof(TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList, EntryPoint) == 0x000000, "Member 'TooltipIngredientList_C_ExecuteUbergraph_TooltipIngredientList::EntryPoint' has a wrong offset!");

// Function TooltipIngredientList.TooltipIngredientList_C.Refresh
// 0x0070 (0x0070 - 0x0000)
struct TooltipIngredientList_C_Refresh final
{
public:
	float                                         Temp_float_Variable;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable2;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSchematicRequirement>          CallFunc_GetSchematicRequirements_Requirements;    // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	struct FSchematicRequirement                  CallFunc_Array_Get_Item;                           // 0x0028(0x0010)(NoDestructor)
	float                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0040(0x0010)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USchematicTooltipCraftingIngredient_C*  CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TooltipIngredientList_C_Refresh) == 0x000008, "Wrong alignment on TooltipIngredientList_C_Refresh");
static_assert(sizeof(TooltipIngredientList_C_Refresh) == 0x000070, "Wrong size on TooltipIngredientList_C_Refresh");
static_assert(offsetof(TooltipIngredientList_C_Refresh, Temp_float_Variable) == 0x000000, "Member 'TooltipIngredientList_C_Refresh::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, Temp_float_Variable2) == 0x000004, "Member 'TooltipIngredientList_C_Refresh::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'TooltipIngredientList_C_Refresh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'TooltipIngredientList_C_Refresh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, Temp_int_Array_Index_Variable) == 0x000010, "Member 'TooltipIngredientList_C_Refresh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'TooltipIngredientList_C_Refresh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, Temp_bool_Variable) == 0x000015, "Member 'TooltipIngredientList_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_GetSchematicRequirements_Requirements) == 0x000018, "Member 'TooltipIngredientList_C_Refresh::CallFunc_GetSchematicRequirements_Requirements' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_Array_Get_Item) == 0x000028, "Member 'TooltipIngredientList_C_Refresh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, K2Node_Select_Default) == 0x000038, "Member 'TooltipIngredientList_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'TooltipIngredientList_C_Refresh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, K2Node_MakeStruct_Margin) == 0x000040, "Member 'TooltipIngredientList_C_Refresh::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'TooltipIngredientList_C_Refresh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'TooltipIngredientList_C_Refresh::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_Create_ReturnValue) == 0x000060, "Member 'TooltipIngredientList_C_Refresh::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TooltipIngredientList_C_Refresh, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000068, "Member 'TooltipIngredientList_C_Refresh::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

}

