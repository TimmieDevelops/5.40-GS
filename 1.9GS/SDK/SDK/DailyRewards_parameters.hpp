#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewards

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonUI_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards
// 0x0068 (0x0068 - 0x0000)
struct DailyRewards_C_ExecuteUbergraph_DailyRewards final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortItemInstanceQuantityPair>  K2Node_Event_Loot;                                 // 0x0020(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFortItemInstanceQuantityPair          CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyRewardsCurrent_C*                 CallFunc_Array_Get_Item2;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyRewards_C_ExecuteUbergraph_DailyRewards) == 0x000008, "Wrong alignment on DailyRewards_C_ExecuteUbergraph_DailyRewards");
static_assert(sizeof(DailyRewards_C_ExecuteUbergraph_DailyRewards) == 0x000068, "Wrong size on DailyRewards_C_ExecuteUbergraph_DailyRewards");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, EntryPoint) == 0x000000, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::EntryPoint' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, Temp_byte_Variable) == 0x000004, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, Temp_byte_Variable2) == 0x000005, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, Temp_int_Array_Index_Variable) == 0x000010, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_IsInZone_ReturnValue) == 0x000014, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, K2Node_Event_IsDesignTime) == 0x000015, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, K2Node_Event_Loot) == 0x000020, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::K2Node_Event_Loot' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Array_Get_Item) == 0x000030, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_GetContext_ReturnValue2) == 0x000050, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Array_Get_Item2) == 0x000058, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Array_Length_ReturnValue2) == 0x000060, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, CallFunc_Less_IntInt_ReturnValue2) == 0x000064, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, Temp_bool_Variable) == 0x000065, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_ExecuteUbergraph_DailyRewards, K2Node_Select_Default) == 0x000066, "Member 'DailyRewards_C_ExecuteUbergraph_DailyRewards::K2Node_Select_Default' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.ClaimResultReceived
// 0x0010 (0x0010 - 0x0000)
struct DailyRewards_C_ClaimResultReceived final
{
public:
	TArray<struct FFortItemInstanceQuantityPair>  Loot;                                              // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(DailyRewards_C_ClaimResultReceived) == 0x000008, "Wrong alignment on DailyRewards_C_ClaimResultReceived");
static_assert(sizeof(DailyRewards_C_ClaimResultReceived) == 0x000010, "Wrong size on DailyRewards_C_ClaimResultReceived");
static_assert(offsetof(DailyRewards_C_ClaimResultReceived, Loot) == 0x000000, "Member 'DailyRewards_C_ClaimResultReceived::Loot' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DailyRewards_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyRewards_C_PreConstruct) == 0x000001, "Wrong alignment on DailyRewards_C_PreConstruct");
static_assert(sizeof(DailyRewards_C_PreConstruct) == 0x000001, "Wrong size on DailyRewards_C_PreConstruct");
static_assert(offsetof(DailyRewards_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DailyRewards_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.Setup Daily Rewards
// 0x0228 (0x0228 - 0x0000)
struct DailyRewards_C_Setup_Daily_Rewards final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(NoDestructor)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0014(0x0008)(NoDestructor)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize2;                 // 0x001C(0x0008)(NoDestructor)
	EInputActionState                             Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EInputActionState                             Temp_byte_Variable2;                               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDailyRewardsCurrent_C*                 CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                       CallFunc_GetAccountItemWithDefinition_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDailyRewardsMissingFoundersPack_C*     CallFunc_Create_ReturnValue2;                      // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputActionState                             Temp_byte_Variable3;                               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue3;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyRewardsCurrent_C*                 CallFunc_Create_ReturnValue3;                      // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue4;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyRewardsSchedule_C*                CallFunc_Create_ReturnValue4;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue2;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue3;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputActionState                             Temp_byte_Variable4;                               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDailyRewardsData                  CallFunc_TryGetDailyRewardsData_OutDailyRewardsData; // 0x00C8(0x0018)()
	bool                                          CallFunc_TryGetDailyRewardsData_ReturnValue;       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDailyRewardsScheduleData          CallFunc_Array_Get_Item;                           // 0x00E8(0x0098)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_185[0x3];                                      // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue3;                // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue3;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EInputActionState                             K2Node_Select_Default;                             // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_193[0x1];                                      // 0x0193(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue2;             // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputActionState                             K2Node_Select2_Default;                            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue3;             // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDailyRewardsItemData              CallFunc_Array_Get_Item2;                          // 0x01A8(0x0010)(NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01B8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01F8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0210(0x0018)()
};
static_assert(alignof(DailyRewards_C_Setup_Daily_Rewards) == 0x000008, "Wrong alignment on DailyRewards_C_Setup_Daily_Rewards");
static_assert(sizeof(DailyRewards_C_Setup_Daily_Rewards) == 0x000228, "Wrong size on DailyRewards_C_Setup_Daily_Rewards");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_int_Array_Index_Variable) == 0x000000, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_MakeStruct_Margin) == 0x000004, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_MakeStruct_SlateChildSize) == 0x000014, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_MakeStruct_SlateChildSize2) == 0x00001C, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_MakeStruct_SlateChildSize2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_byte_Variable) == 0x000024, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_byte_Variable2) == 0x000025, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_bool_Variable) == 0x000026, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_bool_Variable2) == 0x000030, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Create_ReturnValue) == 0x000038, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000040, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Array_Add_ReturnValue) == 0x00004C, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_GetContext_ReturnValue) == 0x000050, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_GetAccountItemWithDefinition_ReturnValue) == 0x000058, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_GetAccountItemWithDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000060, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Create_ReturnValue2) == 0x000070, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Create_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Not_PreBool_ReturnValue) == 0x000078, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000080, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_byte_Variable3) == 0x000088, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_GetOwningPlayer_ReturnValue3) == 0x000090, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_GetOwningPlayer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Create_ReturnValue3) == 0x000098, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Create_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_GetOwningPlayer_ReturnValue4) == 0x0000A0, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_GetOwningPlayer_ReturnValue4' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Create_ReturnValue4) == 0x0000A8, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Create_ReturnValue4' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_AddChildToVerticalBox_ReturnValue2) == 0x0000B0, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_AddChildToVerticalBox_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_AddChildToVerticalBox_ReturnValue3) == 0x0000B8, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_AddChildToVerticalBox_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_byte_Variable4) == 0x0000C0, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Less_IntInt_ReturnValue) == 0x0000C1, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'DailyRewards_C_Setup_Daily_Rewards::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_TryGetDailyRewardsData_OutDailyRewardsData) == 0x0000C8, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_TryGetDailyRewardsData_OutDailyRewardsData' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_TryGetDailyRewardsData_ReturnValue) == 0x0000E0, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_TryGetDailyRewardsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Add_IntInt_ReturnValue) == 0x0000E4, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Less_IntInt_ReturnValue2) == 0x000184, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Array_Length_ReturnValue2) == 0x000188, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Array_Length_ReturnValue3) == 0x00018C, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Array_Length_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Less_IntInt_ReturnValue3) == 0x000190, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Less_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_Select_Default) == 0x000191, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_BooleanAND_ReturnValue) == 0x000192, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Subtract_IntInt_ReturnValue2) == 0x000194, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Subtract_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_Select2_Default) == 0x000198, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Percent_IntInt_ReturnValue) == 0x00019C, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Subtract_IntInt_ReturnValue3) == 0x0001A0, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Subtract_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0001A4, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Array_Get_Item2) == 0x0001A8, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_MakeStruct_FormatArgumentData) == 0x0001B8, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, K2Node_MakeArray_Array) == 0x0001F8, "Member 'DailyRewards_C_Setup_Daily_Rewards::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Greater_IntInt_ReturnValue) == 0x000208, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Setup_Daily_Rewards, CallFunc_Format_ReturnValue) == 0x000210, "Member 'DailyRewards_C_Setup_Daily_Rewards::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.PopPanelWhileInGame
// 0x0020 (0x0020 - 0x0000)
struct DailyRewards_C_PopPanelWhileInGame final
{
public:
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue3;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyRewards_C_PopPanelWhileInGame) == 0x000008, "Wrong alignment on DailyRewards_C_PopPanelWhileInGame");
static_assert(sizeof(DailyRewards_C_PopPanelWhileInGame) == 0x000020, "Wrong size on DailyRewards_C_PopPanelWhileInGame");
static_assert(offsetof(DailyRewards_C_PopPanelWhileInGame, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'DailyRewards_C_PopPanelWhileInGame::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_PopPanelWhileInGame, CallFunc_GetContext_ReturnValue2) == 0x000008, "Member 'DailyRewards_C_PopPanelWhileInGame::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_PopPanelWhileInGame, CallFunc_GetContext_ReturnValue3) == 0x000010, "Member 'DailyRewards_C_PopPanelWhileInGame::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_PopPanelWhileInGame, CallFunc_GetInputManager_ReturnValue) == 0x000018, "Member 'DailyRewards_C_PopPanelWhileInGame::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.Set Input Action Handlers
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) DailyRewards_C_Set_Input_Action_Handlers final
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate2;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(DailyRewards_C_Set_Input_Action_Handlers) == 0x000008, "Wrong alignment on DailyRewards_C_Set_Input_Action_Handlers");
static_assert(sizeof(DailyRewards_C_Set_Input_Action_Handlers) == 0x000020, "Wrong size on DailyRewards_C_Set_Input_Action_Handlers");
static_assert(offsetof(DailyRewards_C_Set_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'DailyRewards_C_Set_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Set_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate2) == 0x000010, "Member 'DailyRewards_C_Set_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.Handle Close
// 0x0030 (0x0030 - 0x0000)
struct DailyRewards_C_Handle_Close final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonUIContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                    CallFunc_GetInputManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInZone_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyRewards_C_Handle_Close) == 0x000008, "Wrong alignment on DailyRewards_C_Handle_Close");
static_assert(sizeof(DailyRewards_C_Handle_Close) == 0x000030, "Wrong size on DailyRewards_C_Handle_Close");
static_assert(offsetof(DailyRewards_C_Handle_Close, PassThrough) == 0x000000, "Member 'DailyRewards_C_Handle_Close::PassThrough' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Handle_Close, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'DailyRewards_C_Handle_Close::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Handle_Close, CallFunc_GetInputManager_ReturnValue) == 0x000010, "Member 'DailyRewards_C_Handle_Close::CallFunc_GetInputManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Handle_Close, CallFunc_GetContext_ReturnValue2) == 0x000018, "Member 'DailyRewards_C_Handle_Close::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Handle_Close, CallFunc_IsInZone_ReturnValue) == 0x000020, "Member 'DailyRewards_C_Handle_Close::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyRewards_C_Handle_Close, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000028, "Member 'DailyRewards_C_Handle_Close::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function DailyRewards.DailyRewards_C.Handle Collect
// 0x0001 (0x0001 - 0x0000)
struct DailyRewards_C_Handle_Collect final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyRewards_C_Handle_Collect) == 0x000001, "Wrong alignment on DailyRewards_C_Handle_Collect");
static_assert(sizeof(DailyRewards_C_Handle_Collect) == 0x000001, "Wrong size on DailyRewards_C_Handle_Collect");
static_assert(offsetof(DailyRewards_C_Handle_Collect, PassThrough) == 0x000000, "Member 'DailyRewards_C_Handle_Collect::PassThrough' has a wrong offset!");

}

