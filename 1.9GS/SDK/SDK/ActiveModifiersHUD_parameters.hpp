#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveModifiersHUD

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.ExecuteUbergraph_ActiveModifiersHUD
// 0x0058 (0x0058 - 0x0000)
struct ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> K2Node_CustomEvent_AppliedModifiers;               // 0x0020(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortGameplayModifierItemDefinition*> CallFunc_GetActiveModifiers_OutActiveModifiers;    // 0x0048(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD) == 0x000008, "Wrong alignment on ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD");
static_assert(sizeof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD) == 0x000058, "Wrong size on ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, EntryPoint) == 0x000000, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, K2Node_CustomEvent_AppliedModifiers) == 0x000020, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::K2Node_CustomEvent_AppliedModifiers' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, CallFunc_GetGameState_ReturnValue) == 0x000030, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000038, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD, CallFunc_GetActiveModifiers_OutActiveModifiers) == 0x000048, "Member 'ActiveModifiersHUD_C_ExecuteUbergraph_ActiveModifiersHUD::CallFunc_GetActiveModifiers_OutActiveModifiers' has a wrong offset!");

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.OnActiveGameplayModifiersChanged
// 0x0010 (0x0010 - 0x0000)
struct ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                                  // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged) == 0x000008, "Wrong alignment on ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged");
static_assert(sizeof(ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged) == 0x000010, "Wrong size on ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged");
static_assert(offsetof(ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged, AppliedModifiers) == 0x000000, "Member 'ActiveModifiersHUD_C_OnActiveGameplayModifiersChanged::AppliedModifiers' has a wrong offset!");

// Function ActiveModifiersHUD.ActiveModifiersHUD_C.PopulateModifiers
// 0x0100 (0x0100 - 0x0000)
struct ActiveModifiersHUD_C_PopulateModifiers final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> inModifiers;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                         AnimationDuration;                                 // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 DescriptionTextStyle;                              // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 NameTextStyle;                                     // 0x0020(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0034(0x0010)(NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActiveModifierItemHUD_C*               CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x0068(0x0090)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActiveModifiersHUD_C_PopulateModifiers) == 0x000008, "Wrong alignment on ActiveModifiersHUD_C_PopulateModifiers");
static_assert(sizeof(ActiveModifiersHUD_C_PopulateModifiers) == 0x000100, "Wrong size on ActiveModifiersHUD_C_PopulateModifiers");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, inModifiers) == 0x000000, "Member 'ActiveModifiersHUD_C_PopulateModifiers::inModifiers' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, AnimationDuration) == 0x000010, "Member 'ActiveModifiersHUD_C_PopulateModifiers::AnimationDuration' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, DescriptionTextStyle) == 0x000018, "Member 'ActiveModifiersHUD_C_PopulateModifiers::DescriptionTextStyle' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, NameTextStyle) == 0x000020, "Member 'ActiveModifiersHUD_C_PopulateModifiers::NameTextStyle' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, Temp_int_Array_Index_Variable) == 0x000028, "Member 'ActiveModifiersHUD_C_PopulateModifiers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'ActiveModifiersHUD_C_PopulateModifiers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, K2Node_MakeStruct_Margin) == 0x000034, "Member 'ActiveModifiersHUD_C_PopulateModifiers::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_GetOwningPlayer_ReturnValue) == 0x000048, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_Create_ReturnValue) == 0x000050, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_Array_Get_Item) == 0x000058, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000060, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_GetSmallPreviewImageBrush_ReturnValue) == 0x000068, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_GetSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveModifiersHUD_C_PopulateModifiers, CallFunc_Less_IntInt_ReturnValue) == 0x0000FC, "Member 'ActiveModifiersHUD_C_PopulateModifiers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

