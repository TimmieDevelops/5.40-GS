#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionOverviewObjective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionOverviewObjective.MissionOverviewObjective_C
// 0x0048 (0x0280 - 0x0238)
class UMissionOverviewObjective_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       Description;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Heading;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeadingText;                                       // 0x0250(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   DescriptionText;                                   // 0x0268(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MissionOverviewObjective(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionOverviewObjective_C">();
	}
	static class UMissionOverviewObjective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionOverviewObjective_C>();
	}
};
static_assert(alignof(UMissionOverviewObjective_C) == 0x000008, "Wrong alignment on UMissionOverviewObjective_C");
static_assert(sizeof(UMissionOverviewObjective_C) == 0x000280, "Wrong size on UMissionOverviewObjective_C");
static_assert(offsetof(UMissionOverviewObjective_C, UberGraphFrame) == 0x000238, "Member 'UMissionOverviewObjective_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionOverviewObjective_C, Description) == 0x000240, "Member 'UMissionOverviewObjective_C::Description' has a wrong offset!");
static_assert(offsetof(UMissionOverviewObjective_C, Heading) == 0x000248, "Member 'UMissionOverviewObjective_C::Heading' has a wrong offset!");
static_assert(offsetof(UMissionOverviewObjective_C, HeadingText) == 0x000250, "Member 'UMissionOverviewObjective_C::HeadingText' has a wrong offset!");
static_assert(offsetof(UMissionOverviewObjective_C, DescriptionText) == 0x000268, "Member 'UMissionOverviewObjective_C::DescriptionText' has a wrong offset!");

}

