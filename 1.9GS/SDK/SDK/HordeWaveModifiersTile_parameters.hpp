#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveModifiersTile

#include "Basic.hpp"


namespace SDK::Params
{

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.ExecuteUbergraph_HordeWaveModifiersTile
// 0x0050 (0x0050 - 0x0000)
struct HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_InData;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_DynamicCast_AsFort_Item;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0018)()
};
static_assert(alignof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile) == 0x000008, "Wrong alignment on HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile");
static_assert(sizeof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile) == 0x000050, "Wrong size on HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile");
static_assert(offsetof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile, EntryPoint) == 0x000000, "Member 'HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile, K2Node_CustomEvent_InData) == 0x000008, "Member 'HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile::K2Node_CustomEvent_InData' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile, K2Node_DynamicCast_AsFort_Item) == 0x000010, "Member 'HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile::K2Node_DynamicCast_AsFort_Item' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile, CallFunc_GetDescription_ReturnValue) == 0x000020, "Member 'HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'HordeWaveModifiersTile_C_ExecuteUbergraph_HordeWaveModifiersTile::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct HordeWaveModifiersTile_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HordeWaveModifiersTile_C_SetData) == 0x000008, "Wrong alignment on HordeWaveModifiersTile_C_SetData");
static_assert(sizeof(HordeWaveModifiersTile_C_SetData) == 0x000008, "Wrong size on HordeWaveModifiersTile_C_SetData");
static_assert(offsetof(HordeWaveModifiersTile_C_SetData, InData) == 0x000000, "Member 'HordeWaveModifiersTile_C_SetData::InData' has a wrong offset!");

// Function HordeWaveModifiersTile.HordeWaveModifiersTile_C.SetModifierItem
// 0x0040 (0x0040 - 0x0000)
struct HordeWaveModifiersTile_C_SetModifierItem final
{
public:
	class UFortItem*                              ModifierItem;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0018)()
};
static_assert(alignof(HordeWaveModifiersTile_C_SetModifierItem) == 0x000008, "Wrong alignment on HordeWaveModifiersTile_C_SetModifierItem");
static_assert(sizeof(HordeWaveModifiersTile_C_SetModifierItem) == 0x000040, "Wrong size on HordeWaveModifiersTile_C_SetModifierItem");
static_assert(offsetof(HordeWaveModifiersTile_C_SetModifierItem, ModifierItem) == 0x000000, "Member 'HordeWaveModifiersTile_C_SetModifierItem::ModifierItem' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_SetModifierItem, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'HordeWaveModifiersTile_C_SetModifierItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_SetModifierItem, CallFunc_GetDescription_ReturnValue) == 0x000010, "Member 'HordeWaveModifiersTile_C_SetModifierItem::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(HordeWaveModifiersTile_C_SetModifierItem, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'HordeWaveModifiersTile_C_SetModifierItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

}

