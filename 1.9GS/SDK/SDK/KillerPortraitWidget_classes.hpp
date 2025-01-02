#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerPortraitWidget

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KillerPortraitWidget.KillerPortraitWidget_C
// 0x0010 (0x0248 - 0x0238)
class UKillerPortraitWidget_C final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       KillerNameText;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KillerPortrait;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Init(struct FFortKillerVisualInfo& KillerVisualInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillerPortraitWidget_C">();
	}
	static class UKillerPortraitWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillerPortraitWidget_C>();
	}
};
static_assert(alignof(UKillerPortraitWidget_C) == 0x000008, "Wrong alignment on UKillerPortraitWidget_C");
static_assert(sizeof(UKillerPortraitWidget_C) == 0x000248, "Wrong size on UKillerPortraitWidget_C");
static_assert(offsetof(UKillerPortraitWidget_C, KillerNameText) == 0x000238, "Member 'UKillerPortraitWidget_C::KillerNameText' has a wrong offset!");
static_assert(offsetof(UKillerPortraitWidget_C, KillerPortrait) == 0x000240, "Member 'UKillerPortraitWidget_C::KillerPortrait' has a wrong offset!");

}

