#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyPerkTierWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.ExecuteUbergraph_LegacyPerkTierWidget
// 0x00C8 (0x00C8 - 0x0000)
struct LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIPerk                            K2Node_Event_Perk;                                 // 0x0008(0x0088)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyPerkWidget_C*                    CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_AsVertical_Box_Slot;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x00B4(0x0010)(NoDestructor)
};
static_assert(alignof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget) == 0x000008, "Wrong alignment on LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget");
static_assert(sizeof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget) == 0x0000C8, "Wrong size on LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, EntryPoint) == 0x000000, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, K2Node_Event_Perk) == 0x000008, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::K2Node_Event_Perk' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000090, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, CallFunc_Create_ReturnValue) == 0x000098, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, CallFunc_AddChild_ReturnValue) == 0x0000A0, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, K2Node_DynamicCast_AsVertical_Box_Slot) == 0x0000A8, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::K2Node_DynamicCast_AsVertical_Box_Slot' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget, K2Node_MakeStruct_Margin) == 0x0000B4, "Member 'LegacyPerkTierWidget_C_ExecuteUbergraph_LegacyPerkTierWidget::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function LegacyPerkTierWidget.LegacyPerkTierWidget_C.OnGeneratePerk
// 0x0088 (0x0088 - 0x0000)
struct LegacyPerkTierWidget_C_OnGeneratePerk final
{
public:
	struct FFortUIPerk                            Perk;                                              // 0x0000(0x0088)(Parm)
};
static_assert(alignof(LegacyPerkTierWidget_C_OnGeneratePerk) == 0x000008, "Wrong alignment on LegacyPerkTierWidget_C_OnGeneratePerk");
static_assert(sizeof(LegacyPerkTierWidget_C_OnGeneratePerk) == 0x000088, "Wrong size on LegacyPerkTierWidget_C_OnGeneratePerk");
static_assert(offsetof(LegacyPerkTierWidget_C_OnGeneratePerk, Perk) == 0x000000, "Member 'LegacyPerkTierWidget_C_OnGeneratePerk::Perk' has a wrong offset!");

}
