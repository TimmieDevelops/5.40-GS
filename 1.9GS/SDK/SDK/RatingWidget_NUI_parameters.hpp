#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RatingWidget_NUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function RatingWidget_NUI.RatingWidget_NUI_C.ExecuteUbergraph_RatingWidget_NUI
// 0x01E8 (0x01E8 - 0x0000)
struct RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_UniqueId;                       // 0x0030(0x0018)(ConstParm, HasGetValueTypeHash)
	TDelegate<void(struct FUniqueNetIdRepl& UniqueId)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;                     // 0x0058(0x0190)(ConstParm)
};
static_assert(alignof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI) == 0x000008, "Wrong alignment on RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI");
static_assert(sizeof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI) == 0x0001E8, "Wrong size on RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, EntryPoint) == 0x000000, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, K2Node_Event_IsDesignTime) == 0x000018, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, K2Node_CustomEvent_UniqueId) == 0x000030, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, K2Node_CreateDelegate_OutputDelegate2) == 0x000048, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI, K2Node_CustomEvent_PlayerInfo) == 0x000058, "Member 'RatingWidget_NUI_C_ExecuteUbergraph_RatingWidget_NUI::K2Node_CustomEvent_PlayerInfo' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerStateChanged
// 0x0190 (0x0190 - 0x0000)
struct RatingWidget_NUI_C_PlayerStateChanged final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;                                        // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(RatingWidget_NUI_C_PlayerStateChanged) == 0x000008, "Wrong alignment on RatingWidget_NUI_C_PlayerStateChanged");
static_assert(sizeof(RatingWidget_NUI_C_PlayerStateChanged) == 0x000190, "Wrong size on RatingWidget_NUI_C_PlayerStateChanged");
static_assert(offsetof(RatingWidget_NUI_C_PlayerStateChanged, PlayerInfo) == 0x000000, "Member 'RatingWidget_NUI_C_PlayerStateChanged::PlayerInfo' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.PlayerInfoChanged
// 0x0018 (0x0018 - 0x0000)
struct RatingWidget_NUI_C_PlayerInfoChanged final
{
public:
	struct FUniqueNetIdRepl                       UniqueId_0;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(RatingWidget_NUI_C_PlayerInfoChanged) == 0x000008, "Wrong alignment on RatingWidget_NUI_C_PlayerInfoChanged");
static_assert(sizeof(RatingWidget_NUI_C_PlayerInfoChanged) == 0x000018, "Wrong size on RatingWidget_NUI_C_PlayerInfoChanged");
static_assert(offsetof(RatingWidget_NUI_C_PlayerInfoChanged, UniqueId_0) == 0x000000, "Member 'RatingWidget_NUI_C_PlayerInfoChanged::UniqueId_0' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RatingWidget_NUI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RatingWidget_NUI_C_PreConstruct) == 0x000001, "Wrong alignment on RatingWidget_NUI_C_PreConstruct");
static_assert(sizeof(RatingWidget_NUI_C_PreConstruct) == 0x000001, "Wrong size on RatingWidget_NUI_C_PreConstruct");
static_assert(offsetof(RatingWidget_NUI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RatingWidget_NUI_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update Rating Value
// 0x000C (0x000C - 0x0000)
struct RatingWidget_NUI_C_Update_Rating_Value final
{
public:
	int32                                         Rating;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RatingWidget_NUI_C_Update_Rating_Value) == 0x000004, "Wrong alignment on RatingWidget_NUI_C_Update_Rating_Value");
static_assert(sizeof(RatingWidget_NUI_C_Update_Rating_Value) == 0x00000C, "Wrong size on RatingWidget_NUI_C_Update_Rating_Value");
static_assert(offsetof(RatingWidget_NUI_C_Update_Rating_Value, Rating) == 0x000000, "Member 'RatingWidget_NUI_C_Update_Rating_Value::Rating' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_Rating_Value, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'RatingWidget_NUI_C_Update_Rating_Value::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_Rating_Value, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'RatingWidget_NUI_C_Update_Rating_Value::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Unique ID
// 0x0018 (0x0018 - 0x0000)
struct RatingWidget_NUI_C_Set_Unique_ID final
{
public:
	struct FUniqueNetIdRepl                       ID;                                                // 0x0000(0x0018)(Parm, HasGetValueTypeHash)
};
static_assert(alignof(RatingWidget_NUI_C_Set_Unique_ID) == 0x000008, "Wrong alignment on RatingWidget_NUI_C_Set_Unique_ID");
static_assert(sizeof(RatingWidget_NUI_C_Set_Unique_ID) == 0x000018, "Wrong size on RatingWidget_NUI_C_Set_Unique_ID");
static_assert(offsetof(RatingWidget_NUI_C_Set_Unique_ID, ID) == 0x000000, "Member 'RatingWidget_NUI_C_Set_Unique_ID::ID' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.Update From Unique ID
// 0x0028 (0x0028 - 0x0000)
struct RatingWidget_NUI_C_Update_From_Unique_ID final
{
public:
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLocalTeamHomebaseRating_Rating;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLocalTeamHomebaseRating_ProgressFraction; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLocalTeamHomebaseRating_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidNetID_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTotalHomebaseRating_Rating;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RatingWidget_NUI_C_Update_From_Unique_ID) == 0x000008, "Wrong alignment on RatingWidget_NUI_C_Update_From_Unique_ID");
static_assert(sizeof(RatingWidget_NUI_C_Update_From_Unique_ID) == 0x000028, "Wrong size on RatingWidget_NUI_C_Update_From_Unique_ID");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetContext_ReturnValue2) == 0x000008, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetLocalTeamHomebaseRating_Rating) == 0x000010, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetLocalTeamHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetLocalTeamHomebaseRating_ProgressFraction) == 0x000014, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetLocalTeamHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetLocalTeamHomebaseRating_ReturnValue) == 0x000018, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetLocalTeamHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_IsValidNetID_ReturnValue) == 0x000019, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_IsValidNetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetTotalHomebaseRating_Rating) == 0x00001C, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetTotalHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetTotalHomebaseRating_ProgressFraction) == 0x000020, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetTotalHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Update_From_Unique_ID, CallFunc_GetTotalHomebaseRating_ReturnValue) == 0x000024, "Member 'RatingWidget_NUI_C_Update_From_Unique_ID::CallFunc_GetTotalHomebaseRating_ReturnValue' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.Set Texture2D Parameter From Multi Size Brush
// 0x0410 (0x0410 - 0x0000)
struct RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush final
{
public:
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Parameter;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    MBrush;                                            // 0x0010(0x0360)(Parm)
	struct FSlateBrush                            CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue; // 0x0370(0x0090)(ConstParm)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush) == 0x000008, "Wrong alignment on RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush");
static_assert(sizeof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush) == 0x000410, "Wrong size on RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush");
static_assert(offsetof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, Mid) == 0x000000, "Member 'RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::Mid' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, Parameter) == 0x000008, "Member 'RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::Parameter' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, MBrush) == 0x000010, "Member 'RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::MBrush' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue) == 0x000370, "Member 'RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, K2Node_DynamicCast_AsTexture_2D) == 0x000400, "Member 'RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush, K2Node_DynamicCast_bSuccess) == 0x000408, "Member 'RatingWidget_NUI_C_Set_Texture2D_Parameter_From_Multi_Size_Brush::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.Override Default Color Set
// 0x0034 (0x0034 - 0x0000)
struct RatingWidget_NUI_C_Override_Default_Color_Set final
{
public:
	bool                                          Override;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Light_Color;                                       // 0x0004(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Medium_Color;                                      // 0x0014(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Dark_Color;                                        // 0x0024(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RatingWidget_NUI_C_Override_Default_Color_Set) == 0x000004, "Wrong alignment on RatingWidget_NUI_C_Override_Default_Color_Set");
static_assert(sizeof(RatingWidget_NUI_C_Override_Default_Color_Set) == 0x000034, "Wrong size on RatingWidget_NUI_C_Override_Default_Color_Set");
static_assert(offsetof(RatingWidget_NUI_C_Override_Default_Color_Set, Override) == 0x000000, "Member 'RatingWidget_NUI_C_Override_Default_Color_Set::Override' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Override_Default_Color_Set, Light_Color) == 0x000004, "Member 'RatingWidget_NUI_C_Override_Default_Color_Set::Light_Color' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Override_Default_Color_Set, Medium_Color) == 0x000014, "Member 'RatingWidget_NUI_C_Override_Default_Color_Set::Medium_Color' has a wrong offset!");
static_assert(offsetof(RatingWidget_NUI_C_Override_Default_Color_Set, Dark_Color) == 0x000024, "Member 'RatingWidget_NUI_C_Override_Default_Color_Set::Dark_Color' has a wrong offset!");

// Function RatingWidget_NUI.RatingWidget_NUI_C.SetShouldShowTeamPowerRating
// 0x0001 (0x0001 - 0x0000)
struct RatingWidget_NUI_C_SetShouldShowTeamPowerRating final
{
public:
	bool                                          ShowTeamRating;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RatingWidget_NUI_C_SetShouldShowTeamPowerRating) == 0x000001, "Wrong alignment on RatingWidget_NUI_C_SetShouldShowTeamPowerRating");
static_assert(sizeof(RatingWidget_NUI_C_SetShouldShowTeamPowerRating) == 0x000001, "Wrong size on RatingWidget_NUI_C_SetShouldShowTeamPowerRating");
static_assert(offsetof(RatingWidget_NUI_C_SetShouldShowTeamPowerRating, ShowTeamRating) == 0x000000, "Member 'RatingWidget_NUI_C_SetShouldShowTeamPowerRating::ShowTeamRating' has a wrong offset!");

}

