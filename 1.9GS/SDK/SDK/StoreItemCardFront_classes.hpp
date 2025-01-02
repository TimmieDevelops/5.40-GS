#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreItemCardFront

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreItemCardFront.StoreItemCardFront_C
// 0x0050 (0x0280 - 0x0230)
class UStoreItemCardFront_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(Transient, DuplicateTransient)
	class UScaleBox*                              Card_ScaleBox;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Mask;                                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCard                                  CardData;                                          // 0x0250(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EFortRarity                                   CurrentRarity;                                     // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SpacingText;                                       // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StoreItemCardFront(int32 EntryPoint);
	void InitFromObject(class UObject* InitObject);
	void OnFortStoreStateChanged(EFortStoreState NewStoreState);
	void Construct();
	void Initialize_Card(const struct FCard& inCard);
	void Draw_Card();
	class FText Get_Card_Name_Text();
	void Get_Type_Text(class FText* OutText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreItemCardFront_C">();
	}
	static class UStoreItemCardFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreItemCardFront_C>();
	}
};
static_assert(alignof(UStoreItemCardFront_C) == 0x000008, "Wrong alignment on UStoreItemCardFront_C");
static_assert(sizeof(UStoreItemCardFront_C) == 0x000280, "Wrong size on UStoreItemCardFront_C");
static_assert(offsetof(UStoreItemCardFront_C, UberGraphFrame) == 0x000230, "Member 'UStoreItemCardFront_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreItemCardFront_C, Card_ScaleBox) == 0x000238, "Member 'UStoreItemCardFront_C::Card_ScaleBox' has a wrong offset!");
static_assert(offsetof(UStoreItemCardFront_C, ItemCard) == 0x000240, "Member 'UStoreItemCardFront_C::ItemCard' has a wrong offset!");
static_assert(offsetof(UStoreItemCardFront_C, Mask) == 0x000248, "Member 'UStoreItemCardFront_C::Mask' has a wrong offset!");
static_assert(offsetof(UStoreItemCardFront_C, CardData) == 0x000250, "Member 'UStoreItemCardFront_C::CardData' has a wrong offset!");
static_assert(offsetof(UStoreItemCardFront_C, CurrentRarity) == 0x000268, "Member 'UStoreItemCardFront_C::CurrentRarity' has a wrong offset!");
static_assert(offsetof(UStoreItemCardFront_C, SpacingText) == 0x000270, "Member 'UStoreItemCardFront_C::SpacingText' has a wrong offset!");

}

