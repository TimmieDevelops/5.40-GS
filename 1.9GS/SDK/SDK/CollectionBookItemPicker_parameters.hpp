#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookItemPicker

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_structs.hpp"


namespace SDK::Params
{

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ExecuteUbergraph_CollectionBookItemPicker
// 0x0590 (0x0590 - 0x0000)
struct CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_GetSelectedItem_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle  Temp_struct_Variable;                              // 0x0010(0x0004)(NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Type_Text_Type;                       // 0x0018(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	EFortDialogResult                             Temp_byte_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Item, bool bIsSelected)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	class UFortItem*                              K2Node_CustomEvent_SelectedItem;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDONOTUSE_C*                            CallFunc_Create_ReturnValue;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommonInputActionData                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x00E0(0x02D0)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FConfirmationDialogAction              K2Node_MakeStruct_ConfirmationDialogAction;        // 0x03B8(0x00D0)()
	TArray<struct FConfirmationDialogAction>      K2Node_MakeArray_Array2;                           // 0x0488(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	EFortDialogResult                             K2Node_CustomEvent_Result;                         // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499[0x7];                                      // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_ResultName;                     // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWaitingForLatentActionCompletion; // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A9[0x3];                                      // 0x04A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDialogExternalLatentActionHandle  K2Node_CustomEvent_WaitingDialogHandle;            // 0x04AC(0x0004)(NoDestructor)
	TDelegate<void(EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)> K2Node_CreateDelegate_OutputDelegate2;             // 0x04B0(0x0010)(ZeroConstructor, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UFortItem* SelectedItem)> K2Node_CreateDelegate_OutputDelegate3;             // 0x04C8(0x0010)(ZeroConstructor, NoDestructor)
	class UCollectionBookRecycleSlotResultsWidget_C* CallFunc_Create_ReturnValue2;                      // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetCurrentSlottedItem_ReturnValue;        // 0x04E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetCurrentSlottedItem_ReturnValue2;       // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F1[0x7];                                      // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_GetSelectedItem_ReturnValue2;             // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue; // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Get_Type_Text_Type2;                      // 0x0508(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0520(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array3;                           // 0x0560(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0578(0x0018)()
};
static_assert(alignof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker) == 0x000008, "Wrong alignment on CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker");
static_assert(sizeof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker) == 0x000590, "Wrong size on CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, EntryPoint) == 0x000000, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::EntryPoint' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetSelectedItem_ReturnValue) == 0x000008, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, Temp_struct_Variable) == 0x000010, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_Get_Type_Text_Type) == 0x000018, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_Get_Type_Text_Type' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, Temp_bool_Variable) == 0x000030, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, Temp_name_Variable) == 0x000078, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_MakeArray_Array) == 0x000080, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, Temp_byte_Variable) == 0x000090, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_Format_ReturnValue) == 0x000098, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_SwitchEnum_CmpSuccess) == 0x0000B0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CustomEvent_SelectedItem) == 0x0000C8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000D0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_Create_ReturnValue) == 0x0000D8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000E0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0003B0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_MakeStruct_ConfirmationDialogAction) == 0x0003B8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_MakeStruct_ConfirmationDialogAction' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_MakeArray_Array2) == 0x000488, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CustomEvent_Result) == 0x000498, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CustomEvent_ResultName) == 0x0004A0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CustomEvent_bWaitingForLatentActionCompletion) == 0x0004A8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CustomEvent_bWaitingForLatentActionCompletion' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CustomEvent_WaitingDialogHandle) == 0x0004AC, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CustomEvent_WaitingDialogHandle' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CreateDelegate_OutputDelegate2) == 0x0004B0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetOwningPlayer_ReturnValue2) == 0x0004C0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_CreateDelegate_OutputDelegate3) == 0x0004C8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_Create_ReturnValue2) == 0x0004D8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_Create_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetCurrentSlottedItem_ReturnValue) == 0x0004E0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetCurrentSlottedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetCurrentSlottedItem_ReturnValue2) == 0x0004E8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetCurrentSlottedItem_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_IsValid_ReturnValue) == 0x0004F0, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_GetSelectedItem_ReturnValue2) == 0x0004F8, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_GetSelectedItem_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue) == 0x000500, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_Get_Type_Text_Type2) == 0x000508, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_Get_Type_Text_Type2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_MakeStruct_FormatArgumentData2) == 0x000520, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, K2Node_MakeArray_Array3) == 0x000560, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::K2Node_MakeArray_Array3' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_IsValid_ReturnValue2) == 0x000570, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker, CallFunc_Format_ReturnValue2) == 0x000578, "Member 'CollectionBookItemPicker_C_ExecuteUbergraph_CollectionBookItemPicker::CallFunc_Format_ReturnValue2' has a wrong offset!");

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.ShowSlotItemConfirmation
// 0x0008 (0x0008 - 0x0000)
struct CollectionBookItemPicker_C_ShowSlotItemConfirmation final
{
public:
	class UFortItem*                              SelectedItem;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollectionBookItemPicker_C_ShowSlotItemConfirmation) == 0x000008, "Wrong alignment on CollectionBookItemPicker_C_ShowSlotItemConfirmation");
static_assert(sizeof(CollectionBookItemPicker_C_ShowSlotItemConfirmation) == 0x000008, "Wrong size on CollectionBookItemPicker_C_ShowSlotItemConfirmation");
static_assert(offsetof(CollectionBookItemPicker_C_ShowSlotItemConfirmation, SelectedItem) == 0x000000, "Member 'CollectionBookItemPicker_C_ShowSlotItemConfirmation::SelectedItem' has a wrong offset!");

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.DialogResult_C897FB8741239C9DAE2430AD3D91A030
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030 final
{
public:
	EFortDialogResult                             Result;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ResultName;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWaitingForLatentActionCompletion;                 // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDialogExternalLatentActionHandle  WaitingDialogHandle;                               // 0x0014(0x0004)(Parm, NoDestructor)
};
static_assert(alignof(CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030) == 0x000008, "Wrong alignment on CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030");
static_assert(sizeof(CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030) == 0x000018, "Wrong size on CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030");
static_assert(offsetof(CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030, Result) == 0x000000, "Member 'CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030::Result' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030, ResultName) == 0x000008, "Member 'CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030::ResultName' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030, bWaitingForLatentActionCompletion) == 0x000010, "Member 'CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030::bWaitingForLatentActionCompletion' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030, WaitingDialogHandle) == 0x000014, "Member 'CollectionBookItemPicker_C_DialogResult_C897FB8741239C9DAE2430AD3D91A030::WaitingDialogHandle' has a wrong offset!");

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleItemSelected
// 0x0010 (0x0010 - 0x0000)
struct CollectionBookItemPicker_C_HandleItemSelected final
{
public:
	class UObject*                                ItemSelected;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookItemPicker_C_HandleItemSelected) == 0x000008, "Wrong alignment on CollectionBookItemPicker_C_HandleItemSelected");
static_assert(sizeof(CollectionBookItemPicker_C_HandleItemSelected) == 0x000010, "Wrong size on CollectionBookItemPicker_C_HandleItemSelected");
static_assert(offsetof(CollectionBookItemPicker_C_HandleItemSelected, ItemSelected) == 0x000000, "Member 'CollectionBookItemPicker_C_HandleItemSelected::ItemSelected' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_HandleItemSelected, IsSelected) == 0x000008, "Member 'CollectionBookItemPicker_C_HandleItemSelected::IsSelected' has a wrong offset!");

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.HandleCommitAction
// 0x0002 (0x0002 - 0x0000)
struct CollectionBookItemPicker_C_HandleCommitAction final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TryCommitSelectedItem_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookItemPicker_C_HandleCommitAction) == 0x000001, "Wrong alignment on CollectionBookItemPicker_C_HandleCommitAction");
static_assert(sizeof(CollectionBookItemPicker_C_HandleCommitAction) == 0x000002, "Wrong size on CollectionBookItemPicker_C_HandleCommitAction");
static_assert(offsetof(CollectionBookItemPicker_C_HandleCommitAction, PassThrough) == 0x000000, "Member 'CollectionBookItemPicker_C_HandleCommitAction::PassThrough' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_HandleCommitAction, CallFunc_TryCommitSelectedItem_ReturnValue) == 0x000001, "Member 'CollectionBookItemPicker_C_HandleCommitAction::CallFunc_TryCommitSelectedItem_ReturnValue' has a wrong offset!");

// Function CollectionBookItemPicker.CollectionBookItemPicker_C.Get Type Text
// 0x0028 (0x0028 - 0x0000)
struct CollectionBookItemPicker_C_Get_Type_Text final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Type;                                              // 0x0008(0x0018)(Parm, OutParm)
	EFortInventoryFilter                          CallFunc_GetFilterCategory_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue4;         // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue5;         // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CollectionBookItemPicker_C_Get_Type_Text) == 0x000008, "Wrong alignment on CollectionBookItemPicker_C_Get_Type_Text");
static_assert(sizeof(CollectionBookItemPicker_C_Get_Type_Text) == 0x000028, "Wrong size on CollectionBookItemPicker_C_Get_Type_Text");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, Item) == 0x000000, "Member 'CollectionBookItemPicker_C_Get_Type_Text::Item' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, Type) == 0x000008, "Member 'CollectionBookItemPicker_C_Get_Type_Text::Type' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_GetFilterCategory_ReturnValue) == 0x000020, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_GetFilterCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_GetType_ReturnValue) == 0x000021, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000022, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x000023, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_EqualEqual_ByteByte_ReturnValue3) == 0x000024, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_EqualEqual_ByteByte_ReturnValue3' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_EqualEqual_ByteByte_ReturnValue4) == 0x000025, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_EqualEqual_ByteByte_ReturnValue4' has a wrong offset!");
static_assert(offsetof(CollectionBookItemPicker_C_Get_Type_Text, CallFunc_EqualEqual_ByteByte_ReturnValue5) == 0x000026, "Member 'CollectionBookItemPicker_C_Get_Type_Text::CallFunc_EqualEqual_ByteByte_ReturnValue5' has a wrong offset!");

}
