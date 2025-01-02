#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
// 0x0038 (0x0038 - 0x0000)
struct ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_ComponentBoundEvent_SelectedItem;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_TabId;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConversionControlKeyRequest                  CallFunc_Determine_Key_Types_to_See_RequestType;   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EConversionControlKeyRequest                  CallFunc_Determine_Key_Types_to_See_RequestType2;  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen");
static_assert(sizeof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen) == 0x000038, "Wrong size on ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, EntryPoint) == 0x000000, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, K2Node_ComponentBoundEvent_SelectedItem) == 0x000020, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, K2Node_ComponentBoundEvent_TabId) == 0x000028, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, CallFunc_Determine_Key_Types_to_See_RequestType) == 0x000030, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::CallFunc_Determine_Key_Types_to_See_RequestType' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen, CallFunc_Determine_Key_Types_to_See_RequestType2) == 0x000031, "Member 'ItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen::CallFunc_Determine_Key_Types_to_See_RequestType2' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature");
static_assert(sizeof(ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature) == 0x000008, "Wrong size on ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature");
static_assert(offsetof(ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature, TabId) == 0x000000, "Member 'ItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature::TabId' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature final
{
public:
	class UFortItem*                              SelectedItem;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature");
static_assert(sizeof(ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature) == 0x000008, "Wrong size on ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature");
static_assert(offsetof(ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'ItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature::SelectedItem' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
// 0x0040 (0x0040 - 0x0000)
struct ItemTransformKeyScreen_C_RebuildKeyList final
{
public:
	EConversionControlKeyRequest                  RequestType;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetActiveTab_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Determine_Tab_List_Title_Text;            // 0x0010(0x0018)()
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>               CallFunc_GetTransformKeys_TransformKeys;           // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ItemTransformKeyScreen_C_RebuildKeyList) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_RebuildKeyList");
static_assert(sizeof(ItemTransformKeyScreen_C_RebuildKeyList) == 0x000040, "Wrong size on ItemTransformKeyScreen_C_RebuildKeyList");
static_assert(offsetof(ItemTransformKeyScreen_C_RebuildKeyList, RequestType) == 0x000000, "Member 'ItemTransformKeyScreen_C_RebuildKeyList::RequestType' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_RebuildKeyList, CallFunc_GetActiveTab_ReturnValue) == 0x000008, "Member 'ItemTransformKeyScreen_C_RebuildKeyList::CallFunc_GetActiveTab_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_RebuildKeyList, CallFunc_Determine_Tab_List_Title_Text) == 0x000010, "Member 'ItemTransformKeyScreen_C_RebuildKeyList::CallFunc_Determine_Tab_List_Title_Text' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_RebuildKeyList, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'ItemTransformKeyScreen_C_RebuildKeyList::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_RebuildKeyList, CallFunc_GetTransformKeys_TransformKeys) == 0x000030, "Member 'ItemTransformKeyScreen_C_RebuildKeyList::CallFunc_GetTransformKeys_TransformKeys' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) ItemTransformKeyScreen_C_SetupKeyList final
{
public:
	TDelegate<void(class UFortItem* SelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ItemTransformKeyScreen_C_SetupKeyList) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_SetupKeyList");
static_assert(sizeof(ItemTransformKeyScreen_C_SetupKeyList) == 0x000010, "Wrong size on ItemTransformKeyScreen_C_SetupKeyList");
static_assert(offsetof(ItemTransformKeyScreen_C_SetupKeyList, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ItemTransformKeyScreen_C_SetupKeyList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformKeyScreen_C_HandleItemSelected final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyScreen_C_HandleItemSelected) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_HandleItemSelected");
static_assert(sizeof(ItemTransformKeyScreen_C_HandleItemSelected) == 0x000008, "Wrong size on ItemTransformKeyScreen_C_HandleItemSelected");
static_assert(offsetof(ItemTransformKeyScreen_C_HandleItemSelected, Item) == 0x000000, "Member 'ItemTransformKeyScreen_C_HandleItemSelected::Item' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
// 0x0010 (0x0010 - 0x0000)
struct ItemTransformKeyScreen_C_Get_Selected_Item final
{
public:
	class UFortItem*                              SelectedKey;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_GetSelectedKey_SelectedKey;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyScreen_C_Get_Selected_Item) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_Get_Selected_Item");
static_assert(sizeof(ItemTransformKeyScreen_C_Get_Selected_Item) == 0x000010, "Wrong size on ItemTransformKeyScreen_C_Get_Selected_Item");
static_assert(offsetof(ItemTransformKeyScreen_C_Get_Selected_Item, SelectedKey) == 0x000000, "Member 'ItemTransformKeyScreen_C_Get_Selected_Item::SelectedKey' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Get_Selected_Item, CallFunc_GetSelectedKey_SelectedKey) == 0x000008, "Member 'ItemTransformKeyScreen_C_Get_Selected_Item::CallFunc_GetSelectedKey_SelectedKey' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
// 0x0008 (0x0008 - 0x0000)
struct ItemTransformKeyScreen_C_NavigateToSelectedItem final
{
public:
	class UFortItem*                              InItem;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemTransformKeyScreen_C_NavigateToSelectedItem) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_NavigateToSelectedItem");
static_assert(sizeof(ItemTransformKeyScreen_C_NavigateToSelectedItem) == 0x000008, "Wrong size on ItemTransformKeyScreen_C_NavigateToSelectedItem");
static_assert(offsetof(ItemTransformKeyScreen_C_NavigateToSelectedItem, InItem) == 0x000000, "Member 'ItemTransformKeyScreen_C_NavigateToSelectedItem::InItem' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) ItemTransformKeyScreen_C_Determine_Key_Types_to_See final
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConversionControlKeyRequest                  RequestType;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue3;         // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_Determine_Key_Types_to_See");
static_assert(sizeof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See) == 0x000010, "Wrong size on ItemTransformKeyScreen_C_Determine_Key_Types_to_See");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See, TabNameID) == 0x000000, "Member 'ItemTransformKeyScreen_C_Determine_Key_Types_to_See::TabNameID' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See, RequestType) == 0x000008, "Member 'ItemTransformKeyScreen_C_Determine_Key_Types_to_See::RequestType' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000009, "Member 'ItemTransformKeyScreen_C_Determine_Key_Types_to_See::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See, CallFunc_EqualEqual_NameName_ReturnValue2) == 0x00000A, "Member 'ItemTransformKeyScreen_C_Determine_Key_Types_to_See::CallFunc_EqualEqual_NameName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Key_Types_to_See, CallFunc_EqualEqual_NameName_ReturnValue3) == 0x00000B, "Member 'ItemTransformKeyScreen_C_Determine_Key_Types_to_See::CallFunc_EqualEqual_NameName_ReturnValue3' has a wrong offset!");

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
// 0x0028 (0x0028 - 0x0000)
struct ItemTransformKeyScreen_C_Determine_Tab_List_Title final
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0008(0x0018)(Parm, OutParm)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue3;         // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemTransformKeyScreen_C_Determine_Tab_List_Title) == 0x000008, "Wrong alignment on ItemTransformKeyScreen_C_Determine_Tab_List_Title");
static_assert(sizeof(ItemTransformKeyScreen_C_Determine_Tab_List_Title) == 0x000028, "Wrong size on ItemTransformKeyScreen_C_Determine_Tab_List_Title");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Tab_List_Title, TabNameID) == 0x000000, "Member 'ItemTransformKeyScreen_C_Determine_Tab_List_Title::TabNameID' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Tab_List_Title, Text) == 0x000008, "Member 'ItemTransformKeyScreen_C_Determine_Tab_List_Title::Text' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Tab_List_Title, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'ItemTransformKeyScreen_C_Determine_Tab_List_Title::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Tab_List_Title, CallFunc_EqualEqual_NameName_ReturnValue2) == 0x000021, "Member 'ItemTransformKeyScreen_C_Determine_Tab_List_Title::CallFunc_EqualEqual_NameName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemTransformKeyScreen_C_Determine_Tab_List_Title, CallFunc_EqualEqual_NameName_ReturnValue3) == 0x000022, "Member 'ItemTransformKeyScreen_C_Determine_Tab_List_Title::CallFunc_EqualEqual_NameName_ReturnValue3' has a wrong offset!");

}

