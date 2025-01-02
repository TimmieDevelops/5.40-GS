#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemIconWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ItemIconWidget.ItemIconWidget_C.ExecuteUbergraph_ItemIconWidget
// 0x00F0 (0x00F0 - 0x0000)
struct ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable3;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable4;                                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable5;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable6;                                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x0020(0x0020)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_AssetToObject_ReturnValue;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0060(0x0090)()
};
static_assert(alignof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget) == 0x000008, "Wrong alignment on ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget");
static_assert(sizeof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget) == 0x0000F0, "Wrong size on ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, EntryPoint) == 0x000000, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_byte_Variable) == 0x000004, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_int_Variable) == 0x000008, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_int_Variable2) == 0x00000C, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_int_Variable3) == 0x000010, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_int_Variable4) == 0x000014, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_int_Variable4' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_int_Variable5) == 0x000018, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_int_Variable5' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, Temp_int_Variable6) == 0x00001C, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::Temp_int_Variable6' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x000020, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, CallFunc_Conv_AssetToObject_ReturnValue) == 0x000040, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::CallFunc_Conv_AssetToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, K2Node_Select_Default) == 0x000048, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000050, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000060, "Member 'ItemIconWidget_C_ExecuteUbergraph_ItemIconWidget::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");

}

