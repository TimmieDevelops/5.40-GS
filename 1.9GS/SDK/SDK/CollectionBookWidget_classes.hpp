#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookWidget.CollectionBookWidget_C
// 0x0008 (0x0448 - 0x0440)
class UCollectionBookWidget_C final : public UFortCollectionBookWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_CollectionBookWidget(int32 EntryPoint);
	void OnActivated();
	void Destruct();
	void SlotItemComplete(const class UFortAccountItem* ItemSlotted, class FName SlotId);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookWidget_C">();
	}
	static class UCollectionBookWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookWidget_C>();
	}
};
static_assert(alignof(UCollectionBookWidget_C) == 0x000008, "Wrong alignment on UCollectionBookWidget_C");
static_assert(sizeof(UCollectionBookWidget_C) == 0x000448, "Wrong size on UCollectionBookWidget_C");
static_assert(offsetof(UCollectionBookWidget_C, UberGraphFrame) == 0x000440, "Member 'UCollectionBookWidget_C::UberGraphFrame' has a wrong offset!");

}
