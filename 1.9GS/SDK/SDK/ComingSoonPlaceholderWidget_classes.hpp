#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComingSoonPlaceholderWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ComingSoonPlaceholderWidget.ComingSoonPlaceholderWidget_C
// 0x0018 (0x0248 - 0x0230)
class UComingSoonPlaceholderWidget_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       UnderConstruction;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ComingSoonPlaceholderWidget_C">();
	}
	static class UComingSoonPlaceholderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComingSoonPlaceholderWidget_C>();
	}
};
static_assert(alignof(UComingSoonPlaceholderWidget_C) == 0x000008, "Wrong alignment on UComingSoonPlaceholderWidget_C");
static_assert(sizeof(UComingSoonPlaceholderWidget_C) == 0x000248, "Wrong size on UComingSoonPlaceholderWidget_C");
static_assert(offsetof(UComingSoonPlaceholderWidget_C, Image_0) == 0x000230, "Member 'UComingSoonPlaceholderWidget_C::Image_0' has a wrong offset!");
static_assert(offsetof(UComingSoonPlaceholderWidget_C, Image_3) == 0x000238, "Member 'UComingSoonPlaceholderWidget_C::Image_3' has a wrong offset!");
static_assert(offsetof(UComingSoonPlaceholderWidget_C, UnderConstruction) == 0x000240, "Member 'UComingSoonPlaceholderWidget_C::UnderConstruction' has a wrong offset!");

}
