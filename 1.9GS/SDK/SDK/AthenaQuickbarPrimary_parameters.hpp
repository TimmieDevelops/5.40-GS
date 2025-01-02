#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickbarPrimary

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
// 0x0098 (0x0098 - 0x0000)
struct AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bUsingGamepad;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuickBars                                K2Node_CustomEvent_QuickbarIndex;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Slot;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuickBars                                CallFunc_GetQuickbarFocus_OutQuickBar;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetQuickbarFocus_OutSlot;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuickbarFocus_OutSecondarySlot;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFortQuickBars QuickbarIndex, int32 Slot)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bUsingGamepad)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class UQuickbarSlot_C*>                K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	EFortQuickBars                                K2Node_Event_QuickbarIndex;                        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary) == 0x000008, "Wrong alignment on AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary");
static_assert(sizeof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary) == 0x000098, "Wrong size on AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, EntryPoint) == 0x000000, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_CustomEvent_bUsingGamepad) == 0x000004, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_CustomEvent_bUsingGamepad' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_CustomEvent_QuickbarIndex) == 0x000020, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_CustomEvent_QuickbarIndex' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_CustomEvent_Slot) == 0x000024, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000030, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetContext_ReturnValue3) == 0x000038, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetContext_ReturnValue4) == 0x000048, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetContext_ReturnValue4' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetQuickbarFocus_OutQuickBar) == 0x000050, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetQuickbarFocus_OutQuickBar' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetQuickbarFocus_OutSlot) == 0x000054, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetQuickbarFocus_OutSlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetQuickbarFocus_OutSecondarySlot) == 0x000058, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetQuickbarFocus_OutSecondarySlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot) == 0x00005C, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_CreateDelegate_OutputDelegate2) == 0x000060, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_CreateDelegate_OutputDelegate3) == 0x000070, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_MakeArray_Array) == 0x000080, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary, K2Node_Event_QuickbarIndex) == 0x000090, "Member 'AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary::K2Node_Event_QuickbarIndex' has a wrong offset!");

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaQuickbarPrimary_C_OnQuickbarContentsChanged final
{
public:
	EFortQuickBars                                QuickbarIndex;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarPrimary_C_OnQuickbarContentsChanged) == 0x000001, "Wrong alignment on AthenaQuickbarPrimary_C_OnQuickbarContentsChanged");
static_assert(sizeof(AthenaQuickbarPrimary_C_OnQuickbarContentsChanged) == 0x000001, "Wrong size on AthenaQuickbarPrimary_C_OnQuickbarContentsChanged");
static_assert(offsetof(AthenaQuickbarPrimary_C_OnQuickbarContentsChanged, QuickbarIndex) == 0x000000, "Member 'AthenaQuickbarPrimary_C_OnQuickbarContentsChanged::QuickbarIndex' has a wrong offset!");

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
// 0x0008 (0x0008 - 0x0000)
struct AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind final
{
public:
	EFortQuickBars                                QuickbarIndex;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Slot_0;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind) == 0x000004, "Wrong alignment on AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind");
static_assert(sizeof(AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind) == 0x000008, "Wrong size on AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind");
static_assert(offsetof(AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind, QuickbarIndex) == 0x000000, "Member 'AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind::QuickbarIndex' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind, Slot_0) == 0x000004, "Member 'AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind::Slot_0' has a wrong offset!");

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
// 0x0001 (0x0001 - 0x0000)
struct AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind) == 0x000001, "Wrong alignment on AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind");
static_assert(sizeof(AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind) == 0x000001, "Wrong size on AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind");
static_assert(offsetof(AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind, bUsingGamepad) == 0x000000, "Member 'AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind::bUsingGamepad' has a wrong offset!");

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
// 0x0005 (0x0005 - 0x0000)
struct AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail) == 0x000001, "Wrong alignment on AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail");
static_assert(sizeof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail) == 0x000005, "Wrong size on AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail");
static_assert(offsetof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail, Show) == 0x000000, "Member 'AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail::Show' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail, Temp_bool_Variable) == 0x000001, "Member 'AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail, Temp_byte_Variable) == 0x000002, "Member 'AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail, Temp_byte_Variable2) == 0x000003, "Member 'AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail, K2Node_Select_Default) == 0x000004, "Member 'AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail::K2Node_Select_Default' has a wrong offset!");

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
// 0x0020 (0x0020 - 0x0000)
struct AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon final
{
public:
	bool                                          HasNonHarvestWeapon;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuickbarSlot_C*                        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon) == 0x000008, "Wrong alignment on AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon");
static_assert(sizeof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon) == 0x000020, "Wrong size on AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon");
static_assert(offsetof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon, HasNonHarvestWeapon) == 0x000000, "Member 'AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon::HasNonHarvestWeapon' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon, Temp_int_Variable) == 0x000004, "Member 'AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon, CallFunc_Array_Get_Item) == 0x000010, "Member 'AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
// 0x0018 (0x0018 - 0x0000)
struct AthenaQuickbarPrimary_C_HandleShowHideWeaponRail final
{
public:
	bool                                          CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon; // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaQuickbarPrimary_C_HandleShowHideWeaponRail) == 0x000008, "Wrong alignment on AthenaQuickbarPrimary_C_HandleShowHideWeaponRail");
static_assert(sizeof(AthenaQuickbarPrimary_C_HandleShowHideWeaponRail) == 0x000018, "Wrong size on AthenaQuickbarPrimary_C_HandleShowHideWeaponRail");
static_assert(offsetof(AthenaQuickbarPrimary_C_HandleShowHideWeaponRail, CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon) == 0x000000, "Member 'AthenaQuickbarPrimary_C_HandleShowHideWeaponRail::CallFunc_HasOneNonHarvestWeapon_HasNonHarvestWeapon' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HandleShowHideWeaponRail, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaQuickbarPrimary_C_HandleShowHideWeaponRail::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaQuickbarPrimary_C_HandleShowHideWeaponRail, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'AthenaQuickbarPrimary_C_HandleShowHideWeaponRail::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");

}

