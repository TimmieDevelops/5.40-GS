#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_Root

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
// 0x0040 (0x0470 - 0x0430)
class UStoreMain_Root_C final : public UFortMtxStoreRootBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       NoOffersText;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             OffersHorizontalScrollBox;                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayInstructions;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherItemsProgress;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VboxOffers;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          NavigatingToDetails;                               // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NavigatingToChat;                                  // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowUpsellUI;                                      // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_StoreMain_Root(int32 EntryPoint);
	void Construct();
	void Destruct();
	void OnDeactivated();
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void OnActivated();
	void NoOffersAvailable();
	void AddOffer(class UFortMtxStoreOfferBase* MtxOffer);
	void SetFocus();
	void IsOffersScrollBoxActive(bool* Return_Value);
	void AboutToPushDetails();
	void AboutToEnterChat();
	void HandleBack(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_Root_C">();
	}
	static class UStoreMain_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_Root_C>();
	}
};
static_assert(alignof(UStoreMain_Root_C) == 0x000008, "Wrong alignment on UStoreMain_Root_C");
static_assert(sizeof(UStoreMain_Root_C) == 0x000470, "Wrong size on UStoreMain_Root_C");
static_assert(offsetof(UStoreMain_Root_C, UberGraphFrame) == 0x000430, "Member 'UStoreMain_Root_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NoOffersText) == 0x000438, "Member 'UStoreMain_Root_C::NoOffersText' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, OffersHorizontalScrollBox) == 0x000440, "Member 'UStoreMain_Root_C::OffersHorizontalScrollBox' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, OverlayInstructions) == 0x000448, "Member 'UStoreMain_Root_C::OverlayInstructions' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, ProgressSpinner) == 0x000450, "Member 'UStoreMain_Root_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, SwitcherItemsProgress) == 0x000458, "Member 'UStoreMain_Root_C::SwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, VboxOffers) == 0x000460, "Member 'UStoreMain_Root_C::VboxOffers' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NavigatingToDetails) == 0x000468, "Member 'UStoreMain_Root_C::NavigatingToDetails' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NavigatingToChat) == 0x000469, "Member 'UStoreMain_Root_C::NavigatingToChat' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, ShowUpsellUI) == 0x00046A, "Member 'UStoreMain_Root_C::ShowUpsellUI' has a wrong offset!");

}
