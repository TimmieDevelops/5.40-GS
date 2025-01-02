#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaKillFeedWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.ExecuteUbergraph_AthenaKillFeedWidget
// 0x0030 (0x0030 - 0x0000)
struct AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget) == 0x000008, "Wrong alignment on AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget");
static_assert(sizeof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget) == 0x000030, "Wrong size on AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget");
static_assert(offsetof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget, EntryPoint) == 0x000000, "Member 'AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000010, "Member 'AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'AthenaKillFeedWidget_C_ExecuteUbergraph_AthenaKillFeedWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function AthenaKillFeedWidget.AthenaKillFeedWidget_C.UpdateKillFeed
// 0x0050 (0x0050 - 0x0000)
struct AthenaKillFeedWidget_C_UpdateKillFeed final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAthenaKillFeedItem_C*>          K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class UAthenaKillFeedItem_C*                  CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item2;                          // 0x0030(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaKillFeedWidget_C_UpdateKillFeed) == 0x000008, "Wrong alignment on AthenaKillFeedWidget_C_UpdateKillFeed");
static_assert(sizeof(AthenaKillFeedWidget_C_UpdateKillFeed) == 0x000050, "Wrong size on AthenaKillFeedWidget_C_UpdateKillFeed");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, Temp_int_Array_Index_Variable) == 0x000000, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, K2Node_MakeArray_Array) == 0x000010, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, CallFunc_Array_Get_Item) == 0x000020, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000028, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, CallFunc_Array_Get_Item2) == 0x000030, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaKillFeedWidget_C_UpdateKillFeed, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'AthenaKillFeedWidget_C_UpdateKillFeed::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

