#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicStrokeBox

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BasicStrokeBox.BasicStrokeBox_C.ExecuteUbergraph_BasicStrokeBox
// 0x0008 (0x0008 - 0x0000)
struct BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox) == 0x000004, "Wrong alignment on BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox");
static_assert(sizeof(BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox) == 0x000008, "Wrong size on BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox");
static_assert(offsetof(BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox, EntryPoint) == 0x000000, "Member 'BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BasicStrokeBox.BasicStrokeBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BasicStrokeBox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BasicStrokeBox_C_PreConstruct) == 0x000001, "Wrong alignment on BasicStrokeBox_C_PreConstruct");
static_assert(sizeof(BasicStrokeBox_C_PreConstruct) == 0x000001, "Wrong size on BasicStrokeBox_C_PreConstruct");
static_assert(offsetof(BasicStrokeBox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BasicStrokeBox_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BasicStrokeBox.BasicStrokeBox_C.Redraw
// 0x0010 (0x0010 - 0x0000)
struct BasicStrokeBox_C_Redraw final
{
public:
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicStrokeBox_C_Redraw) == 0x000008, "Wrong alignment on BasicStrokeBox_C_Redraw");
static_assert(sizeof(BasicStrokeBox_C_Redraw) == 0x000010, "Wrong size on BasicStrokeBox_C_Redraw");
static_assert(offsetof(BasicStrokeBox_C_Redraw, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000000, "Member 'BasicStrokeBox_C_Redraw::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BasicStrokeBox_C_Redraw, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'BasicStrokeBox_C_Redraw::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function BasicStrokeBox.BasicStrokeBox_C.Customize
// 0x0024 (0x0024 - 0x0000)
struct BasicStrokeBox_C_Customize final
{
public:
	int32                                         Shape_Style;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Fill_Color;                                        // 0x0004(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Stroke_Color;                                      // 0x0014(0x0010)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicStrokeBox_C_Customize) == 0x000004, "Wrong alignment on BasicStrokeBox_C_Customize");
static_assert(sizeof(BasicStrokeBox_C_Customize) == 0x000024, "Wrong size on BasicStrokeBox_C_Customize");
static_assert(offsetof(BasicStrokeBox_C_Customize, Shape_Style) == 0x000000, "Member 'BasicStrokeBox_C_Customize::Shape_Style' has a wrong offset!");
static_assert(offsetof(BasicStrokeBox_C_Customize, Fill_Color) == 0x000004, "Member 'BasicStrokeBox_C_Customize::Fill_Color' has a wrong offset!");
static_assert(offsetof(BasicStrokeBox_C_Customize, Stroke_Color) == 0x000014, "Member 'BasicStrokeBox_C_Customize::Stroke_Color' has a wrong offset!");

}

