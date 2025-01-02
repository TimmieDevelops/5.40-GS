#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCraftingIngredientList

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList
// 0x0018 (0x0018 - 0x0000)
struct ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemQuantityListEntryBase*         K2Node_Event_ListEntry;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList");
static_assert(sizeof(ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList) == 0x000018, "Wrong size on ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList");
static_assert(offsetof(ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList, EntryPoint) == 0x000000, "Member 'ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList, K2Node_Event_ListEntry) == 0x000008, "Member 'ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList::K2Node_Event_ListEntry' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000010, "Member 'ItemCraftingIngredientList_C_ExecuteUbergraph_ItemCraftingIngredientList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry
// 0x0008 (0x0008 - 0x0000)
struct ItemCraftingIngredientList_C_AddListEntry final
{
public:
	class UFortItemQuantityListEntryBase*         ListEntry;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemCraftingIngredientList_C_AddListEntry) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_AddListEntry");
static_assert(sizeof(ItemCraftingIngredientList_C_AddListEntry) == 0x000008, "Wrong size on ItemCraftingIngredientList_C_AddListEntry");
static_assert(offsetof(ItemCraftingIngredientList_C_AddListEntry, ListEntry) == 0x000000, "Member 'ItemCraftingIngredientList_C_AddListEntry::ListEntry' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ItemCraftingIngredientList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemCraftingIngredientList_C_PreConstruct) == 0x000001, "Wrong alignment on ItemCraftingIngredientList_C_PreConstruct");
static_assert(sizeof(ItemCraftingIngredientList_C_PreConstruct) == 0x000001, "Wrong size on ItemCraftingIngredientList_C_PreConstruct");
static_assert(offsetof(ItemCraftingIngredientList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ItemCraftingIngredientList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.DoDesignTimeRandomization
// 0x0040 (0x0040 - 0x0000)
struct ItemCraftingIngredientList_C_DoDesignTimeRandomization final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    Temp_object_Variable2;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    Temp_object_Variable3;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    Temp_object_Variable4;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemCraftingIngredientList_C_DoDesignTimeRandomization) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_DoDesignTimeRandomization");
static_assert(sizeof(ItemCraftingIngredientList_C_DoDesignTimeRandomization) == 0x000040, "Wrong size on ItemCraftingIngredientList_C_DoDesignTimeRandomization");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, Temp_int_Variable) == 0x000000, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, Temp_object_Variable) == 0x000008, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, Temp_object_Variable2) == 0x000010, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::Temp_object_Variable2' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, Temp_object_Variable3) == 0x000018, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::Temp_object_Variable3' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, Temp_object_Variable4) == 0x000020, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::Temp_object_Variable4' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, CallFunc_RandomInteger_ReturnValue) == 0x000028, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, K2Node_Select_Default) == 0x000030, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_DoDesignTimeRandomization, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000038, "Member 'ItemCraftingIngredientList_C_DoDesignTimeRandomization::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent
// 0x0068 (0x0068 - 0x0000)
struct ItemCraftingIngredientList_C_SetItemToRepresent final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_ItemNeedsInventoryTracking_NeedsTracking; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ItemNeedsInventoryTracking_NeedsTracking2; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ItemCraftingIngredientList_C_SetItemToRepresent) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_SetItemToRepresent");
static_assert(sizeof(ItemCraftingIngredientList_C_SetItemToRepresent) == 0x000068, "Wrong size on ItemCraftingIngredientList_C_SetItemToRepresent");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, Item) == 0x000000, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::Item' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, K2Node_CreateDelegate_OutputDelegate2) == 0x000018, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, CallFunc_ItemNeedsInventoryTracking_NeedsTracking) == 0x000028, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::CallFunc_ItemNeedsInventoryTracking_NeedsTracking' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, CallFunc_ItemNeedsInventoryTracking_NeedsTracking2) == 0x000048, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::CallFunc_ItemNeedsInventoryTracking_NeedsTracking2' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, CallFunc_GetContext_ReturnValue2) == 0x000050, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToRepresent, K2Node_CreateDelegate_OutputDelegate4) == 0x000058, "Member 'ItemCraftingIngredientList_C_SetItemToRepresent::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh
// 0x0010 (0x0010 - 0x0000)
struct ItemCraftingIngredientList_C_Refresh final
{
public:
	TArray<struct FFortItemQuantityPair>          CallFunc_GetIngredients_ReturnIngredients;         // 0x0000(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ItemCraftingIngredientList_C_Refresh) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_Refresh");
static_assert(sizeof(ItemCraftingIngredientList_C_Refresh) == 0x000010, "Wrong size on ItemCraftingIngredientList_C_Refresh");
static_assert(offsetof(ItemCraftingIngredientList_C_Refresh, CallFunc_GetIngredients_ReturnIngredients) == 0x000000, "Member 'ItemCraftingIngredientList_C_Refresh::CallFunc_GetIngredients_ReturnIngredients' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged
// 0x0020 (0x0020 - 0x0000)
struct ItemCraftingIngredientList_C_HandleWorldItemListChanged final
{
public:
	TArray<class UFortWorldItem*>                 ItemsAdded;                                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                 ItemsRemoved;                                      // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ItemCraftingIngredientList_C_HandleWorldItemListChanged) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_HandleWorldItemListChanged");
static_assert(sizeof(ItemCraftingIngredientList_C_HandleWorldItemListChanged) == 0x000020, "Wrong size on ItemCraftingIngredientList_C_HandleWorldItemListChanged");
static_assert(offsetof(ItemCraftingIngredientList_C_HandleWorldItemListChanged, ItemsAdded) == 0x000000, "Member 'ItemCraftingIngredientList_C_HandleWorldItemListChanged::ItemsAdded' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_HandleWorldItemListChanged, ItemsRemoved) == 0x000010, "Member 'ItemCraftingIngredientList_C_HandleWorldItemListChanged::ItemsRemoved' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking
// 0x0040 (0x0040 - 0x0000)
struct ItemCraftingIngredientList_C_RefreshInventoryTracking final
{
public:
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemCraftingIngredientListEntryHaveNeedVerbose_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemCraftingIngredientListEntryHaveNeed_C* K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemCraftingIngredientList_C_RefreshInventoryTracking) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_RefreshInventoryTracking");
static_assert(sizeof(ItemCraftingIngredientList_C_RefreshInventoryTracking) == 0x000040, "Wrong size on ItemCraftingIngredientList_C_RefreshInventoryTracking");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, CallFunc_GetChildrenCount_ReturnValue) == 0x000000, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, Temp_int_Variable) == 0x000004, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose) == 0x000020, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need_Verbose' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need) == 0x000030, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::K2Node_DynamicCast_AsItem_Crafting_Ingredient_List_Entry_Have_Need' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, K2Node_DynamicCast_bSuccess2) == 0x000038, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_RefreshInventoryTracking, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'ItemCraftingIngredientList_C_RefreshInventoryTracking::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged
// 0x0003 (0x0003 - 0x0000)
struct ItemCraftingIngredientList_C_HandleItemChanged final
{
public:
	bool                                          ItemChanged;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AmmoChanged;                                       // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IngredientsChanged;                                // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemCraftingIngredientList_C_HandleItemChanged) == 0x000001, "Wrong alignment on ItemCraftingIngredientList_C_HandleItemChanged");
static_assert(sizeof(ItemCraftingIngredientList_C_HandleItemChanged) == 0x000003, "Wrong size on ItemCraftingIngredientList_C_HandleItemChanged");
static_assert(offsetof(ItemCraftingIngredientList_C_HandleItemChanged, ItemChanged) == 0x000000, "Member 'ItemCraftingIngredientList_C_HandleItemChanged::ItemChanged' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_HandleItemChanged, AmmoChanged) == 0x000001, "Member 'ItemCraftingIngredientList_C_HandleItemChanged::AmmoChanged' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_HandleItemChanged, IngredientsChanged) == 0x000002, "Member 'ItemCraftingIngredientList_C_HandleItemChanged::IngredientsChanged' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking
// 0x0010 (0x0010 - 0x0000)
struct ItemCraftingIngredientList_C_ItemNeedsInventoryTracking final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedsTracking;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue2;       // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_ItemNeedsInventoryTracking");
static_assert(sizeof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking) == 0x000010, "Wrong size on ItemCraftingIngredientList_C_ItemNeedsInventoryTracking");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, Item) == 0x000000, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::Item' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, NeedsTracking) == 0x000008, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::NeedsTracking' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x00000A, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, CallFunc_EqualEqual_ClassClass_ReturnValue2) == 0x00000B, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::CallFunc_EqualEqual_ClassClass_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, CallFunc_BooleanOR_ReturnValue) == 0x00000C, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_ItemNeedsInventoryTracking, CallFunc_BooleanAND_ReturnValue) == 0x00000D, "Member 'ItemCraftingIngredientList_C_ItemNeedsInventoryTracking::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare
// 0x0018 (0x0018 - 0x0000)
struct ItemCraftingIngredientList_C_SetItemToCompare final
{
public:
	class UFortItem*                              ItemToCompare;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>          CallFunc_GetIngredients_ReturnIngredients;         // 0x0008(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ItemCraftingIngredientList_C_SetItemToCompare) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_SetItemToCompare");
static_assert(sizeof(ItemCraftingIngredientList_C_SetItemToCompare) == 0x000018, "Wrong size on ItemCraftingIngredientList_C_SetItemToCompare");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToCompare, ItemToCompare) == 0x000000, "Member 'ItemCraftingIngredientList_C_SetItemToCompare::ItemToCompare' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_SetItemToCompare, CallFunc_GetIngredients_ReturnIngredients) == 0x000008, "Member 'ItemCraftingIngredientList_C_SetItemToCompare::CallFunc_GetIngredients_ReturnIngredients' has a wrong offset!");

// Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients
// 0x00A0 (0x00A0 - 0x0000)
struct ItemCraftingIngredientList_C_GetIngredients final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>          ReturnIngredients;                                 // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor)
	TArray<struct FFortItemQuantityPair>          Ingredients;                                       // 0x0018(0x0010)(Edit, ZeroConstructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSchematicItem*                     K2Node_DynamicCast_AsFort_Schematic_Item;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSchematicRequirement>          CallFunc_GetSchematicRequirements_Requirements;    // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	struct FSchematicRequirement                  CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortItemQuantityPair                  CallFunc_MakeItemQuantityPair_ReturnValue;         // 0x0068(0x0028)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemCraftingIngredientList_C_GetIngredients) == 0x000008, "Wrong alignment on ItemCraftingIngredientList_C_GetIngredients");
static_assert(sizeof(ItemCraftingIngredientList_C_GetIngredients) == 0x0000A0, "Wrong size on ItemCraftingIngredientList_C_GetIngredients");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, Item) == 0x000000, "Member 'ItemCraftingIngredientList_C_GetIngredients::Item' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, ReturnIngredients) == 0x000008, "Member 'ItemCraftingIngredientList_C_GetIngredients::ReturnIngredients' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, Ingredients) == 0x000018, "Member 'ItemCraftingIngredientList_C_GetIngredients::Ingredients' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, Temp_int_Array_Index_Variable) == 0x000028, "Member 'ItemCraftingIngredientList_C_GetIngredients::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, K2Node_DynamicCast_AsFort_Schematic_Item) == 0x000030, "Member 'ItemCraftingIngredientList_C_GetIngredients::K2Node_DynamicCast_AsFort_Schematic_Item' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ItemCraftingIngredientList_C_GetIngredients::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_GetSchematicRequirements_Requirements) == 0x000040, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_GetSchematicRequirements_Requirements' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_Array_Get_Item) == 0x000050, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_MakeItemQuantityPair_ReturnValue) == 0x000068, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_MakeItemQuantityPair_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, Temp_int_Loop_Counter_Variable) == 0x000090, "Member 'ItemCraftingIngredientList_C_GetIngredients::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_Less_IntInt_ReturnValue) == 0x000098, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCraftingIngredientList_C_GetIngredients, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'ItemCraftingIngredientList_C_GetIngredients::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
