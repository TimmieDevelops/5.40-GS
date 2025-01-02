#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewardsCurrent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
// 0x0030 (0x0030 - 0x0000)
struct DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x000C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable2;                             // 0x0014(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select2_Default;                            // 0x0020(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent) == 0x000008, "Wrong alignment on DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent");
static_assert(sizeof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent) == 0x000030, "Wrong size on DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, EntryPoint) == 0x000000, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::EntryPoint' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, Temp_bool_Variable) == 0x000004, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, Temp_byte_Variable) == 0x000005, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, Temp_byte_Variable2) == 0x000007, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, Temp_bool_Variable2) == 0x000008, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, Temp_struct_Variable) == 0x00000C, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, Temp_struct_Variable2) == 0x000014, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, K2Node_Select_Default) == 0x00001C, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, K2Node_Select2_Default) == 0x000020, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'DailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
// 0x0020 (0x0020 - 0x0000)
struct DailyRewardsCurrent_C_Set_Item final
{
public:
	class UFortItem*                              Item_To_Represent;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Quantity;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyRewardsCurrent_C_Set_Item) == 0x000008, "Wrong alignment on DailyRewardsCurrent_C_Set_Item");
static_assert(sizeof(DailyRewardsCurrent_C_Set_Item) == 0x000020, "Wrong size on DailyRewardsCurrent_C_Set_Item");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item, Item_To_Represent) == 0x000000, "Member 'DailyRewardsCurrent_C_Set_Item::Item_To_Represent' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item, Quantity) == 0x000008, "Member 'DailyRewardsCurrent_C_Set_Item::Quantity' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000010, "Member 'DailyRewardsCurrent_C_Set_Item::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item, CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue) == 0x000018, "Member 'DailyRewardsCurrent_C_Set_Item::CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue' has a wrong offset!");

// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
// 0x00D8 (0x00D8 - 0x0000)
struct DailyRewardsCurrent_C_Set_Item_Flare final
{
public:
	float                                         Temp_float_Variable;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable2;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable3;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable4;                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable5;                              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable6;                              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0024(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select2_Default;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select3_Default;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable2;                             // 0x003C(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable4;                               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select4_Default;                            // 0x0048(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0058(0x0080)()
};
static_assert(alignof(DailyRewardsCurrent_C_Set_Item_Flare) == 0x000008, "Wrong alignment on DailyRewardsCurrent_C_Set_Item_Flare");
static_assert(sizeof(DailyRewardsCurrent_C_Set_Item_Flare) == 0x0000D8, "Wrong size on DailyRewardsCurrent_C_Set_Item_Flare");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_float_Variable) == 0x000000, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_bool_Variable) == 0x000004, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_float_Variable2) == 0x000008, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_float_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_float_Variable3) == 0x00000C, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_float_Variable3' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_bool_Variable2) == 0x000010, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_float_Variable4) == 0x000014, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_float_Variable4' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_float_Variable5) == 0x000018, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_float_Variable5' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_float_Variable6) == 0x00001C, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_float_Variable6' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_bool_Variable3) == 0x000020, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_struct_Variable) == 0x000024, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, K2Node_Select_Default) == 0x00002C, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, K2Node_Select2_Default) == 0x000030, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, CallFunc_RandomFloatInRange_ReturnValue) == 0x000034, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, K2Node_Select3_Default) == 0x000038, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_struct_Variable2) == 0x00003C, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, Temp_bool_Variable4) == 0x000044, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, K2Node_Select4_Default) == 0x000048, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::K2Node_Select4_Default' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, CallFunc_GetRarity_ReturnValue) == 0x000050, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewardsCurrent_C_Set_Item_Flare, CallFunc_BPGetRarityData_ReturnValue) == 0x000058, "Member 'DailyRewardsCurrent_C_Set_Item_Flare::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");

}

