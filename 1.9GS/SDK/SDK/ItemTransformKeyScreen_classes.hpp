#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformKeyScreen.ItemTransformKeyScreen_C
// 0x0068 (0x02A0 - 0x0238)
class UItemTransformKeyScreen_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                   HorizontalTabList;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformKeyInfo_C*                ItemTransformKeyInfo;                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformKeyPicker_C*              ItemTransformKeyPicker;                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TabLabelText;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              CurrentKey;                                        // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortAccountItem*>               KeyItems;                                          // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnKeySelected;                                     // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnKeyConfirmed;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   CurrentTab;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemTransformKeyScreen(int32 EntryPoint);
	void HandleHomebaseInventoryChanged();
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature(class FName TabId);
	void BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void Construct();
	void RebuildKeyList(EConversionControlKeyRequest RequestType);
	void SetupKeyList();
	void HandleItemSelected(class UFortItem* Item);
	void ResetScreen();
	void Get_Selected_Item(class UFortItem** SelectedKey);
	void NavigateToSelectedItem(class UFortItem* InItem);
	void NavigateToFirstItem();
	void Determine_Key_Types_to_See(class FName TabNameID, EConversionControlKeyRequest* RequestType);
	void Determine_Tab_List_Title(class FName TabNameID, class FText* Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformKeyScreen_C">();
	}
	static class UItemTransformKeyScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformKeyScreen_C>();
	}
};
static_assert(alignof(UItemTransformKeyScreen_C) == 0x000008, "Wrong alignment on UItemTransformKeyScreen_C");
static_assert(sizeof(UItemTransformKeyScreen_C) == 0x0002A0, "Wrong size on UItemTransformKeyScreen_C");
static_assert(offsetof(UItemTransformKeyScreen_C, UberGraphFrame) == 0x000238, "Member 'UItemTransformKeyScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, HorizontalTabList) == 0x000240, "Member 'UItemTransformKeyScreen_C::HorizontalTabList' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, ItemTransformKeyInfo) == 0x000248, "Member 'UItemTransformKeyScreen_C::ItemTransformKeyInfo' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, ItemTransformKeyPicker) == 0x000250, "Member 'UItemTransformKeyScreen_C::ItemTransformKeyPicker' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, TabLabelText) == 0x000258, "Member 'UItemTransformKeyScreen_C::TabLabelText' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, CurrentKey) == 0x000260, "Member 'UItemTransformKeyScreen_C::CurrentKey' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, KeyItems) == 0x000268, "Member 'UItemTransformKeyScreen_C::KeyItems' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, OnKeySelected) == 0x000278, "Member 'UItemTransformKeyScreen_C::OnKeySelected' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, OnKeyConfirmed) == 0x000288, "Member 'UItemTransformKeyScreen_C::OnKeyConfirmed' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyScreen_C, CurrentTab) == 0x000298, "Member 'UItemTransformKeyScreen_C::CurrentTab' has a wrong offset!");

}
