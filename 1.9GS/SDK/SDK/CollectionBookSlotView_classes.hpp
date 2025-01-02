#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSlotView

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
// 0x0008 (0x0378 - 0x0370)
class UCollectionBookSlotView_C final : public UFortCollectionBookSlotView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_CollectionBookSlotView(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookSlotView_C">();
	}
	static class UCollectionBookSlotView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookSlotView_C>();
	}
};
static_assert(alignof(UCollectionBookSlotView_C) == 0x000008, "Wrong alignment on UCollectionBookSlotView_C");
static_assert(sizeof(UCollectionBookSlotView_C) == 0x000378, "Wrong size on UCollectionBookSlotView_C");
static_assert(offsetof(UCollectionBookSlotView_C, UberGraphFrame) == 0x000370, "Member 'UCollectionBookSlotView_C::UberGraphFrame' has a wrong offset!");

}

