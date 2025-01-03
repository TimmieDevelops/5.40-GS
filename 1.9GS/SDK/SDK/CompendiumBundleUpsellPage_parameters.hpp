#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompendiumBundleUpsellPage

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C.ExecuteUbergraph_CompendiumBundleUpsellPage
// 0x0038 (0x0038 - 0x0000)
struct CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStoreMain_Root_C*                      CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage) == 0x000008, "Wrong alignment on CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage");
static_assert(sizeof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage) == 0x000038, "Wrong size on CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage");
static_assert(offsetof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage, EntryPoint) == 0x000000, "Member 'CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage::EntryPoint' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage, K2Node_ComponentBoundEvent_Button) == 0x000020, "Member 'CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage, K2Node_MakeArray_Array) == 0x000028, "Member 'CompendiumBundleUpsellPage_C_ExecuteUbergraph_CompendiumBundleUpsellPage::K2Node_MakeArray_Array' has a wrong offset!");

// Function CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'CompendiumBundleUpsellPage_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function CompendiumBundleUpsellPage.CompendiumBundleUpsellPage_C.SetCompendiumBundleInfo
// 0x0088 (0x0088 - 0x0000)
struct CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo final
{
public:
	class UFortCompendiumBundleDefinition*        CompendiumBundleInfo;                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo) == 0x000008, "Wrong alignment on CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo");
static_assert(sizeof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo) == 0x000088, "Wrong size on CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo");
static_assert(offsetof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo, CompendiumBundleInfo) == 0x000000, "Member 'CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo::CompendiumBundleInfo' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo, K2Node_MakeArray_Array) == 0x000060, "Member 'CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo, CallFunc_Format_ReturnValue) == 0x000070, "Member 'CompendiumBundleUpsellPage_C_SetCompendiumBundleInfo::CallFunc_Format_ReturnValue' has a wrong offset!");

}

