#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ZoneDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ZoneDetails.ZoneDetails_C
// 0x0028 (0x0260 - 0x0238)
class UZoneDetails_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UDayWidget_C*                           DayWidget;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MissionIcon;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MissionName;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TheaterInfoText;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ZoneDetails(int32 EntryPoint);
	void Construct();
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ZoneDetails_C">();
	}
	static class UZoneDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UZoneDetails_C>();
	}
};
static_assert(alignof(UZoneDetails_C) == 0x000008, "Wrong alignment on UZoneDetails_C");
static_assert(sizeof(UZoneDetails_C) == 0x000260, "Wrong size on UZoneDetails_C");
static_assert(offsetof(UZoneDetails_C, UberGraphFrame) == 0x000238, "Member 'UZoneDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UZoneDetails_C, DayWidget) == 0x000240, "Member 'UZoneDetails_C::DayWidget' has a wrong offset!");
static_assert(offsetof(UZoneDetails_C, MissionIcon) == 0x000248, "Member 'UZoneDetails_C::MissionIcon' has a wrong offset!");
static_assert(offsetof(UZoneDetails_C, MissionName) == 0x000250, "Member 'UZoneDetails_C::MissionName' has a wrong offset!");
static_assert(offsetof(UZoneDetails_C, TheaterInfoText) == 0x000258, "Member 'UZoneDetails_C::TheaterInfoText' has a wrong offset!");

}

