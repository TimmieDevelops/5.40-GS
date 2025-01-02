#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LegacyPerksWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function LegacyPerksWidget.LegacyPerksWidget_C.ExecuteUbergraph_LegacyPerksWidget
// 0x0048 (0x0048 - 0x0000)
struct LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIPerkTier                        K2Node_Event_FortPerkTier;                         // 0x0008(0x0020)(NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyPerkTierWidget_C*                CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget) == 0x000008, "Wrong alignment on LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget");
static_assert(sizeof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget) == 0x000048, "Wrong size on LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget");
static_assert(offsetof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget, EntryPoint) == 0x000000, "Member 'LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget, K2Node_Event_FortPerkTier) == 0x000008, "Member 'LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget::K2Node_Event_FortPerkTier' has a wrong offset!");
static_assert(offsetof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget, CallFunc_Create_ReturnValue) == 0x000030, "Member 'LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'LegacyPerksWidget_C_ExecuteUbergraph_LegacyPerksWidget::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function LegacyPerksWidget.LegacyPerksWidget_C.OnGeneratePerkTier
// 0x0020 (0x0020 - 0x0000)
struct LegacyPerksWidget_C_OnGeneratePerkTier final
{
public:
	struct FFortUIPerkTier                        FortPerkTier;                                      // 0x0000(0x0020)(Parm, NoDestructor)
};
static_assert(alignof(LegacyPerksWidget_C_OnGeneratePerkTier) == 0x000008, "Wrong alignment on LegacyPerksWidget_C_OnGeneratePerkTier");
static_assert(sizeof(LegacyPerksWidget_C_OnGeneratePerkTier) == 0x000020, "Wrong size on LegacyPerksWidget_C_OnGeneratePerkTier");
static_assert(offsetof(LegacyPerksWidget_C_OnGeneratePerkTier, FortPerkTier) == 0x000000, "Member 'LegacyPerksWidget_C_OnGeneratePerkTier::FortPerkTier' has a wrong offset!");

}
