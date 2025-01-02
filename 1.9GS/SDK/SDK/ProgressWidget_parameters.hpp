#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ProgressWidget.ProgressWidget_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct ProgressWidget_C_SetTitle final
{
public:
	class FText                                   Title_0;                                           // 0x0000(0x0018)(Parm)
};
static_assert(alignof(ProgressWidget_C_SetTitle) == 0x000008, "Wrong alignment on ProgressWidget_C_SetTitle");
static_assert(sizeof(ProgressWidget_C_SetTitle) == 0x000018, "Wrong size on ProgressWidget_C_SetTitle");
static_assert(offsetof(ProgressWidget_C_SetTitle, Title_0) == 0x000000, "Member 'ProgressWidget_C_SetTitle::Title_0' has a wrong offset!");

// Function ProgressWidget.ProgressWidget_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct ProgressWidget_C_SetDescription final
{
public:
	class FText                                   Description_0;                                     // 0x0000(0x0018)(Parm)
};
static_assert(alignof(ProgressWidget_C_SetDescription) == 0x000008, "Wrong alignment on ProgressWidget_C_SetDescription");
static_assert(sizeof(ProgressWidget_C_SetDescription) == 0x000018, "Wrong size on ProgressWidget_C_SetDescription");
static_assert(offsetof(ProgressWidget_C_SetDescription, Description_0) == 0x000000, "Member 'ProgressWidget_C_SetDescription::Description_0' has a wrong offset!");

// Function ProgressWidget.ProgressWidget_C.SetIcon
// 0x0098 (0x0098 - 0x0000)
struct ProgressWidget_C_SetIcon final
{
public:
	struct FSlateBrush                            IconBrush;                                         // 0x0000(0x0090)(Parm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProgressWidget_C_SetIcon) == 0x000008, "Wrong alignment on ProgressWidget_C_SetIcon");
static_assert(sizeof(ProgressWidget_C_SetIcon) == 0x000098, "Wrong size on ProgressWidget_C_SetIcon");
static_assert(offsetof(ProgressWidget_C_SetIcon, IconBrush) == 0x000000, "Member 'ProgressWidget_C_SetIcon::IconBrush' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, Temp_byte_Variable) == 0x000090, "Member 'ProgressWidget_C_SetIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'ProgressWidget_C_SetIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, Temp_byte_Variable2) == 0x000092, "Member 'ProgressWidget_C_SetIcon::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, Temp_bool_Variable) == 0x000093, "Member 'ProgressWidget_C_SetIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, K2Node_Select_Default) == 0x000094, "Member 'ProgressWidget_C_SetIcon::K2Node_Select_Default' has a wrong offset!");

}
