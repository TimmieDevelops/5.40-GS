#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionMasterWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget
// 0x0038 (0x0038 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0x0030(0x0008)(NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget) == 0x000038, "Wrong size on BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget, EntryPoint) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget, CallFunc_K2_SetTimerDelegate_ReturnValue2) == 0x000030, "Member 'BP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget::CallFunc_K2_SetTimerDelegate_ReturnValue2' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Handle_Back final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Handle_Back) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Handle_Back");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Handle_Back) == 0x000010, "Wrong size on BP_FortExpeditionMasterWidget_C_Handle_Back");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Handle_Back, PassThrough) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Handle_Back::PassThrough' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Handle_Back, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'BP_FortExpeditionMasterWidget_C_Handle_Back::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers final
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate3;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate4;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate5;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers) == 0x000050, "Wrong size on BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate2) == 0x000010, "Member 'BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate3) == 0x000020, "Member 'BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate4) == 0x000030, "Member 'BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate5) == 0x000040, "Member 'BP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate5' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) BP_FortExpeditionMasterWidget_C_Setup_Bindings final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Setup_Bindings) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Setup_Bindings");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Setup_Bindings) == 0x000010, "Wrong size on BP_FortExpeditionMasterWidget_C_Setup_Bindings");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Setup_Bindings, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Setup_Bindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget
// 0x0001 (0x0001 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Update_Master_Widget final
{
public:
	bool                                          CallFunc_AreAnyExpeditionsComplete_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Update_Master_Widget) == 0x000001, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Update_Master_Widget");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Update_Master_Widget) == 0x000001, "Wrong size on BP_FortExpeditionMasterWidget_C_Update_Master_Widget");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Update_Master_Widget, CallFunc_AreAnyExpeditionsComplete_ReturnValue) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Update_Master_Widget::CallFunc_AreAnyExpeditionsComplete_ReturnValue' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Hide_Input_Action final
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(Parm, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Hide_Input_Action) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Hide_Input_Action");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Hide_Input_Action) == 0x000010, "Wrong size on BP_FortExpeditionMasterWidget_C_Hide_Input_Action");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Hide_Input_Action, InputActionRow) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Hide_Input_Action::InputActionRow' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Show_Input_Action final
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(Parm, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Show_Input_Action) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Show_Input_Action");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Show_Input_Action) == 0x000010, "Wrong size on BP_FortExpeditionMasterWidget_C_Show_Input_Action");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Show_Input_Action, InputActionRow) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Show_Input_Action::InputActionRow' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction
// 0x0002 (0x0002 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleBuildExpeditionAction_PassThrough;  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction) == 0x000001, "Wrong alignment on BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction) == 0x000002, "Wrong size on BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction, PassThrough) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction::PassThrough' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction, CallFunc_HandleBuildExpeditionAction_PassThrough) == 0x000001, "Member 'BP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction::CallFunc_HandleBuildExpeditionAction_PassThrough' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction
// 0x0001 (0x0001 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction) == 0x000001, "Wrong alignment on BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction) == 0x000001, "Wrong size on BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction, PassThrough) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction::PassThrough' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction
// 0x0001 (0x0001 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction) == 0x000001, "Wrong alignment on BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction) == 0x000001, "Wrong size on BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction, PassThrough) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction::PassThrough' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action
// 0x0010 (0x0010 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_Disable_Input_Action final
{
public:
	struct FDataTableRowHandle                    InputActionRow;                                    // 0x0000(0x0010)(Parm, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_Disable_Input_Action) == 0x000008, "Wrong alignment on BP_FortExpeditionMasterWidget_C_Disable_Input_Action");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_Disable_Input_Action) == 0x000010, "Wrong size on BP_FortExpeditionMasterWidget_C_Disable_Input_Action");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_Disable_Input_Action, InputActionRow) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_Disable_Input_Action::InputActionRow' has a wrong offset!");

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction
// 0x0004 (0x0004 - 0x0000)
struct BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction) == 0x000001, "Wrong alignment on BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction");
static_assert(sizeof(BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction) == 0x000004, "Wrong size on BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction, PassThrough) == 0x000000, "Member 'BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction::PassThrough' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction, CallFunc_Add_ByteByte_ReturnValue) == 0x000001, "Member 'BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction, CallFunc_GetValidValue_ReturnValue) == 0x000002, "Member 'BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction, CallFunc_Greater_ByteByte_ReturnValue) == 0x000003, "Member 'BP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction::CallFunc_Greater_ByteByte_ReturnValue' has a wrong offset!");

}

