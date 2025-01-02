#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroSquadSlotsView

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView
// 0x0030 (0x0030 - 0x0000)
struct HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName SquadId, int32 SquadSlotIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName SquadId, int32 SquadSlotIndex)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView) == 0x000008, "Wrong alignment on HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView");
static_assert(sizeof(HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView) == 0x000030, "Wrong size on HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView");
static_assert(offsetof(HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView, EntryPoint) == 0x000000, "Member 'HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView, CallFunc_GetUINavigationManager_ReturnValue) == 0x000028, "Member 'HeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton
// 0x0468 (0x0468 - 0x0000)
struct HeroSquadSlotsView_C_CreateAndAddSquadSlotButton final
{
public:
	int32                                         SquadSlotIndex;                                    // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHomebaseSquadSlot                     SquadSlotDefinition;                               // 0x0008(0x0060)(ConstParm, Parm, OutParm, ReferenceParm)
	class UWidget*                                OutSquadSlotButtonHost;                            // 0x0068(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSquadSlotSelectorButton*           ReturnValue;                                       // 0x0070(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0080(0x0090)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush2;                     // 0x0110(0x0090)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01A0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue2;             // 0x01B8(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue3;             // 0x01D0(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue4;             // 0x01E8(0x0018)()
	class FText                                   Temp_text_Variable;                                // 0x0200(0x0018)()
	class FText                                   Temp_text_Variable2;                               // 0x0218(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleSquadSlotButton_C*               CallFunc_Create_ReturnValue;                       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0248(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0260(0x0040)(HasGetValueTypeHash)
	TArray<class UWidget*>                        K2Node_MakeArray_Array;                            // 0x02A0(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x02B0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02C0(0x0018)()
	class FText                                   Temp_text_Variable3;                               // 0x02D8(0x0018)()
	class FText                                   Temp_text_Variable4;                               // 0x02F0(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleSquadSlotButton_C*               CallFunc_Create_ReturnValue2;                      // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        K2Node_MakeArray_Array3;                           // 0x0320(0x0010)(ZeroConstructor, ReferenceParm)
	struct FSlateBrush                            K2Node_Select2_Default;                            // 0x0330(0x0090)()
	bool                                          Temp_bool_Variable3;                               // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue3;             // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select3_Default;                            // 0x03D0(0x0018)()
	class USimpleSquadSlotButton_C*               CallFunc_Create_ReturnValue3;                      // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x03F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array4;                           // 0x0430(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<class UWidget*>                        K2Node_MakeArray_Array5;                           // 0x0440(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0450(0x0018)()
};
static_assert(alignof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton) == 0x000008, "Wrong alignment on HeroSquadSlotsView_C_CreateAndAddSquadSlotButton");
static_assert(sizeof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton) == 0x000468, "Wrong size on HeroSquadSlotsView_C_CreateAndAddSquadSlotButton");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, SquadSlotIndex) == 0x000000, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::SquadSlotIndex' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, SquadSlotDefinition) == 0x000008, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::SquadSlotDefinition' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, OutSquadSlotButtonHost) == 0x000068, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::OutSquadSlotButtonHost' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, ReturnValue) == 0x000070, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000078, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_SwitchInteger_CmpSuccess) == 0x000079, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeStruct_SlateBrush) == 0x000080, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeStruct_SlateBrush2) == 0x000110, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeStruct_SlateBrush2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_MakeLiteralText_ReturnValue) == 0x0001A0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_MakeLiteralText_ReturnValue2) == 0x0001B8, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_MakeLiteralText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_MakeLiteralText_ReturnValue3) == 0x0001D0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_MakeLiteralText_ReturnValue3' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_MakeLiteralText_ReturnValue4) == 0x0001E8, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_MakeLiteralText_ReturnValue4' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_text_Variable) == 0x000200, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_text_Variable2) == 0x000218, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_bool_Variable) == 0x000230, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_GetOwningPlayer_ReturnValue) == 0x000238, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_Create_ReturnValue) == 0x000240, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_Select_Default) == 0x000248, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeStruct_FormatArgumentData) == 0x000260, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeArray_Array) == 0x0002A0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeArray_Array2) == 0x0002B0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_Format_ReturnValue) == 0x0002C0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_text_Variable3) == 0x0002D8, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_text_Variable3' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_text_Variable4) == 0x0002F0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_text_Variable4' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000308, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_Create_ReturnValue2) == 0x000310, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_Create_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_bool_Variable2) == 0x000318, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeArray_Array3) == 0x000320, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeArray_Array3' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_Select2_Default) == 0x000330, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, Temp_bool_Variable3) == 0x0003C0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_GetOwningPlayer_ReturnValue3) == 0x0003C8, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_GetOwningPlayer_ReturnValue3' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_Select3_Default) == 0x0003D0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_Create_ReturnValue3) == 0x0003E8, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_Create_ReturnValue3' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeStruct_FormatArgumentData2) == 0x0003F0, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeArray_Array4) == 0x000430, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeArray_Array4' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, K2Node_MakeArray_Array5) == 0x000440, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::K2Node_MakeArray_Array5' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_CreateAndAddSquadSlotButton, CallFunc_Format_ReturnValue2) == 0x000450, "Member 'HeroSquadSlotsView_C_CreateAndAddSquadSlotButton::CallFunc_Format_ReturnValue2' has a wrong offset!");

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) HeroSquadSlotsView_C_HandleSquadNavigation final
{
public:
	class FName                                   SquadId;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SquadSlotId;                                       // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeroSquadSlotsView_C_HandleSquadNavigation) == 0x000008, "Wrong alignment on HeroSquadSlotsView_C_HandleSquadNavigation");
static_assert(sizeof(HeroSquadSlotsView_C_HandleSquadNavigation) == 0x000018, "Wrong size on HeroSquadSlotsView_C_HandleSquadNavigation");
static_assert(offsetof(HeroSquadSlotsView_C_HandleSquadNavigation, SquadId) == 0x000000, "Member 'HeroSquadSlotsView_C_HandleSquadNavigation::SquadId' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_HandleSquadNavigation, SlotIndex) == 0x000008, "Member 'HeroSquadSlotsView_C_HandleSquadNavigation::SlotIndex' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_HandleSquadNavigation, SquadSlotId) == 0x00000C, "Member 'HeroSquadSlotsView_C_HandleSquadNavigation::SquadSlotId' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_HandleSquadNavigation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'HeroSquadSlotsView_C_HandleSquadNavigation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_HandleSquadNavigation, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000011, "Member 'HeroSquadSlotsView_C_HandleSquadNavigation::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex
// 0x0008 (0x0008 - 0x0000)
struct HeroSquadSlotsView_C_HighlightSlotByIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeroSquadSlotsView_C_HighlightSlotByIndex) == 0x000004, "Wrong alignment on HeroSquadSlotsView_C_HighlightSlotByIndex");
static_assert(sizeof(HeroSquadSlotsView_C_HighlightSlotByIndex) == 0x000008, "Wrong size on HeroSquadSlotsView_C_HighlightSlotByIndex");
static_assert(offsetof(HeroSquadSlotsView_C_HighlightSlotByIndex, Index_0) == 0x000000, "Member 'HeroSquadSlotsView_C_HighlightSlotByIndex::Index_0' has a wrong offset!");
static_assert(offsetof(HeroSquadSlotsView_C_HighlightSlotByIndex, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'HeroSquadSlotsView_C_HighlightSlotByIndex::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

