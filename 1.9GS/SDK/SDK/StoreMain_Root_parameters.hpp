#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_Root

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// 0x00A0 (0x00A0 - 0x0000)
struct StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFrontEndCamera                               Temp_byte_Variable3;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFrontEndCamera                               Temp_byte_Variable4;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFrontEndCamera                               K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMtxStoreOfferBase*                 K2Node_Event_MtxOffer;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreOffersLoaded_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable2;                               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOffersScrollBoxActive_Return_Value;     // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIStateWidget_NUI*                 CallFunc_GetCurrentUIStateWidget_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0058(0x0010)(NoDestructor)
	class UFrontEnd_C*                            K2Node_DynamicCast_AsFront_End;                    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue3;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue4;                  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root) == 0x000008, "Wrong alignment on StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root");
static_assert(sizeof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root) == 0x0000A0, "Wrong size on StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, EntryPoint) == 0x000000, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, Temp_byte_Variable) == 0x000004, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, Temp_byte_Variable2) == 0x000005, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, Temp_bool_Variable) == 0x000006, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, Temp_byte_Variable3) == 0x000007, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, Temp_byte_Variable4) == 0x000008, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_Select_Default) == 0x000009, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_Event_MtxOffer) == 0x000010, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_Event_MtxOffer' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_IsActivated_ReturnValue) == 0x000018, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_AreOffersLoaded_ReturnValue) == 0x000019, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_AreOffersLoaded_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, Temp_bool_Variable2) == 0x00001A, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_IsOffersScrollBoxActive_Return_Value) == 0x00001B, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_IsOffersScrollBoxActive_Return_Value' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_BooleanAND_ReturnValue) == 0x00001C, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_GetContext_ReturnValue2) == 0x000028, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_BooleanOR_ReturnValue) == 0x000030, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000038, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_GetCurrentUIStateWidget_ReturnValue) == 0x000050, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_GetCurrentUIStateWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_MakeStruct_DataTableRowHandle) == 0x000058, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_DynamicCast_AsFront_End) == 0x000068, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_DynamicCast_AsFront_End' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_CreateDelegate_OutputDelegate2) == 0x000078, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_GetContext_ReturnValue3) == 0x000088, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, CallFunc_GetContext_ReturnValue4) == 0x000090, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::CallFunc_GetContext_ReturnValue4' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root, K2Node_Select2_Default) == 0x000098, "Member 'StoreMain_Root_C_ExecuteUbergraph_StoreMain_Root::K2Node_Select2_Default' has a wrong offset!");

// Function StoreMain_Root.StoreMain_Root_C.OnMtxOfferGenerated
// 0x0008 (0x0008 - 0x0000)
struct StoreMain_Root_C_OnMtxOfferGenerated final
{
public:
	class UFortMtxStoreOfferBase*                 MtxOffer;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreMain_Root_C_OnMtxOfferGenerated) == 0x000008, "Wrong alignment on StoreMain_Root_C_OnMtxOfferGenerated");
static_assert(sizeof(StoreMain_Root_C_OnMtxOfferGenerated) == 0x000008, "Wrong size on StoreMain_Root_C_OnMtxOfferGenerated");
static_assert(offsetof(StoreMain_Root_C_OnMtxOfferGenerated, MtxOffer) == 0x000000, "Member 'StoreMain_Root_C_OnMtxOfferGenerated::MtxOffer' has a wrong offset!");

// Function StoreMain_Root.StoreMain_Root_C.AddOffer
// 0x0050 (0x0050 - 0x0000)
struct StoreMain_Root_C_AddOffer final
{
public:
	class UFortMtxStoreOfferBase*                 MtxOffer;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0008(0x0010)(NoDestructor)
	class UStoreMain_MTXOffer_C*                  K2Node_DynamicCast_AsStore_Main_MTXOffer;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                         K2Node_DynamicCast_AsScroll_Box_Slot;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreMain_Root_C_AddOffer) == 0x000008, "Wrong alignment on StoreMain_Root_C_AddOffer");
static_assert(sizeof(StoreMain_Root_C_AddOffer) == 0x000050, "Wrong size on StoreMain_Root_C_AddOffer");
static_assert(offsetof(StoreMain_Root_C_AddOffer, MtxOffer) == 0x000000, "Member 'StoreMain_Root_C_AddOffer::MtxOffer' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, K2Node_MakeStruct_Margin) == 0x000008, "Member 'StoreMain_Root_C_AddOffer::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, K2Node_DynamicCast_AsStore_Main_MTXOffer) == 0x000018, "Member 'StoreMain_Root_C_AddOffer::K2Node_DynamicCast_AsStore_Main_MTXOffer' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'StoreMain_Root_C_AddOffer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'StoreMain_Root_C_AddOffer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'StoreMain_Root_C_AddOffer::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, K2Node_DynamicCast_AsScroll_Box_Slot) == 0x000040, "Member 'StoreMain_Root_C_AddOffer::K2Node_DynamicCast_AsScroll_Box_Slot' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_AddOffer, K2Node_DynamicCast_bSuccess2) == 0x000048, "Member 'StoreMain_Root_C_AddOffer::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

// Function StoreMain_Root.StoreMain_Root_C.SetFocus
// 0x0018 (0x0018 - 0x0000)
struct StoreMain_Root_C_SetFocus final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreMain_Root_C_SetFocus) == 0x000008, "Wrong alignment on StoreMain_Root_C_SetFocus");
static_assert(sizeof(StoreMain_Root_C_SetFocus) == 0x000018, "Wrong size on StoreMain_Root_C_SetFocus");
static_assert(offsetof(StoreMain_Root_C_SetFocus, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'StoreMain_Root_C_SetFocus::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_SetFocus, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'StoreMain_Root_C_SetFocus::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_SetFocus, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'StoreMain_Root_C_SetFocus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_SetFocus, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'StoreMain_Root_C_SetFocus::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");

// Function StoreMain_Root.StoreMain_Root_C.IsOffersScrollBoxActive
// 0x0018 (0x0018 - 0x0000)
struct StoreMain_Root_C_IsOffersScrollBoxActive final
{
public:
	bool                                          Return_Value;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreMain_Root_C_IsOffersScrollBoxActive) == 0x000008, "Wrong alignment on StoreMain_Root_C_IsOffersScrollBoxActive");
static_assert(sizeof(StoreMain_Root_C_IsOffersScrollBoxActive) == 0x000018, "Wrong size on StoreMain_Root_C_IsOffersScrollBoxActive");
static_assert(offsetof(StoreMain_Root_C_IsOffersScrollBoxActive, Return_Value) == 0x000000, "Member 'StoreMain_Root_C_IsOffersScrollBoxActive::Return_Value' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_IsOffersScrollBoxActive, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'StoreMain_Root_C_IsOffersScrollBoxActive::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_IsOffersScrollBoxActive, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x000008, "Member 'StoreMain_Root_C_IsOffersScrollBoxActive::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_IsOffersScrollBoxActive, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'StoreMain_Root_C_IsOffersScrollBoxActive::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct StoreMain_Root_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StoreMain_Root_C_HandleBack) == 0x000008, "Wrong alignment on StoreMain_Root_C_HandleBack");
static_assert(sizeof(StoreMain_Root_C_HandleBack) == 0x000010, "Wrong size on StoreMain_Root_C_HandleBack");
static_assert(offsetof(StoreMain_Root_C_HandleBack, PassThrough) == 0x000000, "Member 'StoreMain_Root_C_HandleBack::PassThrough' has a wrong offset!");
static_assert(offsetof(StoreMain_Root_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'StoreMain_Root_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

}
